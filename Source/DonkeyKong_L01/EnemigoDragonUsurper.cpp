// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoDragonUsurper.h"

AEnemigoDragonUsurper::AEnemigoDragonUsurper()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> EnemigoDragonUsurperMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	MeshEnemigo->SetStaticMesh(EnemigoDragonUsurperMeshAsset.Object);
	RootComponent = MeshEnemigo;


}

void AEnemigoDragonUsurper::BeginPlay()
{
	Super::BeginPlay();

}

void AEnemigoDragonUsurper::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEnemigoDragonUsurper::Acciones()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
		FString::Printf(TEXT("%s Enemigo Ataca"), *TipoEnemigo()));
}

FString AEnemigoDragonUsurper::TipoEnemigo()
{
	return "Enemigo DragonUsurper";
}
