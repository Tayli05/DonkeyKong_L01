// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAnimalElefante.h"

AEnemigoAnimalElefante::AEnemigoAnimalElefante()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> EnemigoAnimalElefanteMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	MeshEnemigo->SetStaticMesh(EnemigoAnimalElefanteMeshAsset.Object);
	RootComponent = MeshEnemigo;

}

void AEnemigoAnimalElefante::BeginPlay()
{
	Super::BeginPlay();
}

void AEnemigoAnimalElefante::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEnemigoAnimalElefante::Caminar()
{

}

void AEnemigoAnimalElefante::Acciones()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
		FString::Printf(TEXT("%s Enemigo Ataca"), *TipoEnemigo()));
}

FString AEnemigoAnimalElefante::TipoEnemigo()
{
	return "Enemigo Elefante";
}
