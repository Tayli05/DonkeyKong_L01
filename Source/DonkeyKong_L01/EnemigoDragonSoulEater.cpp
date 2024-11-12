// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoDragonSoulEater.h"

AEnemigoDragonSoulEater::AEnemigoDragonSoulEater()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> EnemigoDragonSoulEaterMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	MeshEnemigo->SetStaticMesh(EnemigoDragonSoulEaterMeshAsset.Object);
	RootComponent = MeshEnemigo;

}

void AEnemigoDragonSoulEater::BeginPlay()
{
	Super::BeginPlay();
}

void AEnemigoDragonSoulEater::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEnemigoDragonSoulEater::Volar()
{
}

void AEnemigoDragonSoulEater::Acciones()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
		FString::Printf(TEXT("%s Enemigo Ataca"), *TipoEnemigo()));
}

FString AEnemigoDragonSoulEater::TipoEnemigo()
{
	return "Enemigo DragonSoulEater";
}
