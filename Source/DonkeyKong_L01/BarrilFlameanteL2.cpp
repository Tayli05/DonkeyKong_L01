// Fill out your copyright notice in the Description page of Project Settings.


#include "BarrilFlameanteL2.h"

ABarrilFlameanteL2::ABarrilFlameanteL2()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BarrilMeshAsset(TEXT("StaticMesh'/Game/Geometry/DonkeyKong/Donkey_Kong_Level_1_Barrel004.Donkey_Kong_Level_1_Barrel004'"));
	BarrilMesh->SetStaticMesh(BarrilMeshAsset.Object);
	RootComponent = BarrilMesh;
	BarrilMesh->SetWorldScale3D(FVector(3.5f, 3.5f, 3.5f));


	NombreBarril = "Flameante2";
	Material = "Aire";
	Danio = 5;
	Peso = 25;
	Volumen = 2;

}

void ABarrilFlameanteL2::BeginPlay()
{
	Super::BeginPlay();
}

void ABarrilFlameanteL2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABarrilFlameanteL2::Construir()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Construyendo Barril Toxico %s")));

}
