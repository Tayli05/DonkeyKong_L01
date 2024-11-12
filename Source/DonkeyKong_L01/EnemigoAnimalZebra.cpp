// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAnimalZebra.h"

AEnemigoAnimalZebra::AEnemigoAnimalZebra()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> EnemigoAnimalZebraMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	MeshEnemigo->SetStaticMesh(EnemigoAnimalZebraMeshAsset.Object);
	RootComponent = MeshEnemigo;


}

void AEnemigoAnimalZebra::BeginPlay()
{
	Super::BeginPlay();
}

void AEnemigoAnimalZebra::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEnemigoAnimalZebra::Correr()
{
}

void AEnemigoAnimalZebra::Saltar()
{
}

void AEnemigoAnimalZebra::Acciones()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
		FString::Printf(TEXT("%s Enemigo Ataca"), *TipoEnemigo()));
}

FString AEnemigoAnimalZebra::TipoEnemigo()
{
	return "Enemigo Zebra";
}
