// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoFantasiaCactus.h"

AEnemigoFantasiaCactus::AEnemigoFantasiaCactus()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> EnemigoFantasiaCactusMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	MeshEnemigo->SetStaticMesh(EnemigoFantasiaCactusMeshAsset.Object);
	RootComponent = MeshEnemigo;

}

void AEnemigoFantasiaCactus::BeginPlay()
{
	Super::BeginPlay();
}

void AEnemigoFantasiaCactus::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
