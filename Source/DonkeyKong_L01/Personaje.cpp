// Fill out your copyright notice in the Description page of Project Settings.


#include "Personaje.h"

// Sets default values
APersonaje::APersonaje()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/Geometry/Monkey/5e883dbf8708_monkey_animado_aero.5e883dbf8708_monkey_animado_aero'"));
	MeshPersonaje = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PersonajeMesh"));
	MeshPersonaje->SetStaticMesh(MeshAsset.Object);
	RootComponent = MeshPersonaje;

	SetActorScale3D(FVector(2.5f, 2.5f, 2.5f));


}

// Called when the game starts or when spawned
void APersonaje::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APersonaje::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APersonaje::Empezar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green,
		FString::Printf(TEXT("Personaje activado")));
}

FString APersonaje::Estado()
{
	
	return " ";
}

FString APersonaje::ObtenerAtributos()
{
	return " ";

}

float APersonaje::Duracion()
{
	return 0.0f;

}




