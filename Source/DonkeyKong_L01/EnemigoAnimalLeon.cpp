// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAnimalLeon.h"

AEnemigoAnimalLeon::AEnemigoAnimalLeon()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> EnemigoAnimalLeonMeshAsset(TEXT("StaticMesh'/Game/Geometry/Animales/untitled_lion_1.untitled_lion_1'"));
	MeshEnemigo->SetStaticMesh(EnemigoAnimalLeonMeshAsset.Object);
	RootComponent = MeshEnemigo;

	MeshEnemigo->SetWorldScale3D(FVector(0.1f, 0.1f, 0.1f));

	
}

void AEnemigoAnimalLeon::BeginPlay()
{
	Super::BeginPlay();
}

void AEnemigoAnimalLeon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEnemigoAnimalLeon::Atacar()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Atacando"));
}

void AEnemigoAnimalLeon::Moverse()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Moviendo"));
}

void AEnemigoAnimalLeon::Acciones()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
		FString::Printf(TEXT("%s Enemigo Ataca"), *TipoEnemigo()));
}

FString AEnemigoAnimalLeon::TipoEnemigo()
{
	return "Enemigo Leon";
}
