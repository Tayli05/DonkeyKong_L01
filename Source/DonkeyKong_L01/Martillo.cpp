// Fill out your copyright notice in the Description page of Project Settings.


#include "Martillo.h"

// Sets default values
AMartillo::AMartillo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/Geometry/DonkeyKong/Donkey_Kong_Level_1_Hammer001.Donkey_Kong_Level_1_Hammer001'"));
		MeshMartillo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Martillo"));
		MeshMartillo->SetStaticMesh(MeshAsset.Object);
		RootComponent = MeshMartillo;
	
		SetActorScale3D(FVector(3.5f, 3.5f, 3.5f));


}

// Called when the game starts or when spawned
void AMartillo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMartillo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMartillo::AlterarMovimientos(AActor* _EstrategiaDeMovimiento)
{
	//Lanzar la estrategia pasada a la estrategia actual
	EstrategiaMovimiento = Cast<IIEstrategiaMovimiento>(_EstrategiaDeMovimiento);

	//Registrar error si el lanzamiento falla
	if (!EstrategiaMovimiento)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("�Lanzamiento no valido! Consulte Registro de salida para obtener mas detalles.")));
		UE_LOG(LogTemp, Error, TEXT("AlterarManiobras(): �El actor no es una estrategia de EstrategiaNaveDeCombate! �Estas seguro de que el actor implementa esa interfaz?"));
	}

}

void AMartillo::Emplear()
{
	//Registrar error si la estrategia de movimiento es NULL
	if (!EstrategiaMovimiento)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("�Estrategia de movimiento no establecida!")));
		return;
	}

	//Ejecutar la estrategia de movimiento

	EstrategiaMovimiento->Moverse();


}

