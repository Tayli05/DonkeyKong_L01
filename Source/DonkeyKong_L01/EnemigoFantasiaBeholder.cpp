// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoFantasiaBeholder.h"

AEnemigoFantasiaBeholder::AEnemigoFantasiaBeholder()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> EnemigoFantasiaBeholderMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	MeshEnemigo->SetStaticMesh(EnemigoFantasiaBeholderMeshAsset.Object);
	RootComponent = MeshEnemigo;

}

void AEnemigoFantasiaBeholder::BeginPlay()
{
	Super::BeginPlay();
}

void AEnemigoFantasiaBeholder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
