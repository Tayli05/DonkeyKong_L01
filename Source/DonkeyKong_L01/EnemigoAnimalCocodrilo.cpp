// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAnimalCocodrilo.h"

AEnemigoAnimalCocodrilo::AEnemigoAnimalCocodrilo()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> EnemigoMeshAsset(TEXT("StaticMesh'/Game/Geometry/Animales/untitled_alligator_1.untitled_alligator_1'"));
	MeshEnemigo->SetStaticMesh(EnemigoMeshAsset.Object);
	RootComponent = MeshEnemigo;
	MeshEnemigo->SetWorldScale3D(FVector(0.1f, 0.1f, 0.1f));

}

void AEnemigoAnimalCocodrilo::BeginPlay()
{
	Super::BeginPlay();
}

void AEnemigoAnimalCocodrilo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEnemigoAnimalCocodrilo::Morder()
{
}

void AEnemigoAnimalCocodrilo::Nadar()
{
}

void AEnemigoAnimalCocodrilo::Acciones()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
		FString::Printf(TEXT("%s Enemigo Ataca"), *TipoEnemigo()));

}

FString AEnemigoAnimalCocodrilo::TipoEnemigo()
{
	return "Enemigo Cocodrilo";
}
