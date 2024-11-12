// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoFantasiaSwarm.h"

AEnemigoFantasiaSwarm::AEnemigoFantasiaSwarm()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> EnemigoFantasiaSwarmMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	MeshEnemigo->SetStaticMesh(EnemigoFantasiaSwarmMeshAsset.Object);
	RootComponent = MeshEnemigo;

}

void AEnemigoFantasiaSwarm::BeginPlay()
{
	Super::BeginPlay();
}

void AEnemigoFantasiaSwarm::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
