// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAnimalHipopotamo.h"

AEnemigoAnimalHipopotamo::AEnemigoAnimalHipopotamo()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> EnemigoAnimalHipopotamoMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	MeshEnemigo->SetStaticMesh(EnemigoAnimalHipopotamoMeshAsset.Object);
	RootComponent = MeshEnemigo;

}

void AEnemigoAnimalHipopotamo::BeginPlay()
{
	Super::BeginPlay();
}

void AEnemigoAnimalHipopotamo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEnemigoAnimalHipopotamo::Nadar()
{
}

void AEnemigoAnimalHipopotamo::Comer()
{
}

void AEnemigoAnimalHipopotamo::Acciones()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
		FString::Printf(TEXT("%s Enemigo Ataca"), *TipoEnemigo()));
}

FString AEnemigoAnimalHipopotamo::TipoEnemigo()
{
	return "Enemigo Hipopotamo";
}
