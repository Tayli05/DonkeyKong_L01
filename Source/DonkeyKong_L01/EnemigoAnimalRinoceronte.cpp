// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAnimalRinoceronte.h"

AEnemigoAnimalRinoceronte::AEnemigoAnimalRinoceronte()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> EnemigoAnimalRinoceronteMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	MeshEnemigo->SetStaticMesh(EnemigoAnimalRinoceronteMeshAsset.Object);
	RootComponent = MeshEnemigo;


}

void AEnemigoAnimalRinoceronte::BeginPlay()
{
	Super::BeginPlay();
}

void AEnemigoAnimalRinoceronte::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEnemigoAnimalRinoceronte::Cargar()
{
}

void AEnemigoAnimalRinoceronte::Acciones()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
		FString::Printf(TEXT("%s Enemigo Ataca"), *TipoEnemigo()));
}

FString AEnemigoAnimalRinoceronte::TipoEnemigo()
{
	return "Enemigo Rinoceronte";
}
