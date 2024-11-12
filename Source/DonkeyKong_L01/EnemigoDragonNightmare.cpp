// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoDragonNightmare.h"

AEnemigoDragonNightmare::AEnemigoDragonNightmare()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> EnemigoDragonNightmareMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	MeshEnemigo->SetStaticMesh(EnemigoDragonNightmareMeshAsset.Object);
	RootComponent = MeshEnemigo;

}

void AEnemigoDragonNightmare::BeginPlay()
{
	Super::BeginPlay();
}

void AEnemigoDragonNightmare::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEnemigoDragonNightmare::Acciones()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
		FString::Printf(TEXT("%s Enemigo Ataca"), *TipoEnemigo()));
}

FString AEnemigoDragonNightmare::TipoEnemigo()
{
	return "Enemigo DragonNightmare ";
}
