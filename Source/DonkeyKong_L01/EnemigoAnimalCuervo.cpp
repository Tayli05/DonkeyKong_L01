// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAnimalCuervo.h"

AEnemigoAnimalCuervo::AEnemigoAnimalCuervo()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> EnemigoAnimalCuervoMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	MeshEnemigo->SetStaticMesh(EnemigoAnimalCuervoMeshAsset.Object);
	RootComponent = MeshEnemigo;

}

void AEnemigoAnimalCuervo::BeginPlay()
{
	Super::BeginPlay();
}

void AEnemigoAnimalCuervo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEnemigoAnimalCuervo::Volar()
{
}

void AEnemigoAnimalCuervo::Picotear()
{
}

void AEnemigoAnimalCuervo::Acciones()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
		FString::Printf(TEXT("%s Enemigo Ataca"), *TipoEnemigo()));
}

FString AEnemigoAnimalCuervo::TipoEnemigo()
{
	return "Enemigo Cuervo";
}
