// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAnimalZorro.h"

AEnemigoAnimalZorro::AEnemigoAnimalZorro()
{
	PrimaryActorTick.bCanEverTick = true;
	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> EnemigoAnimalZorroMeshAsset(TEXT("StaticMesh'/Game/Geometry/Animales/untitled_fox_1.untitled_fox_1'"));
	MeshEnemigo->SetStaticMesh(EnemigoAnimalZorroMeshAsset.Object);
	RootComponent = MeshEnemigo;

	MeshEnemigo->SetWorldScale3D(FVector(0.1f, 0.1f, 0.1f));

}

void AEnemigoAnimalZorro::BeginPlay()
{
	Super::BeginPlay();
}

void AEnemigoAnimalZorro::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEnemigoAnimalZorro::Correr()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Correr"));
}

void AEnemigoAnimalZorro::Saltar()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Saltar"));
}

void AEnemigoAnimalZorro::Acciones()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
		FString::Printf(TEXT("%s Enemigo Ataca"), *TipoEnemigo()));
}

FString AEnemigoAnimalZorro::TipoEnemigo()
{
	return "Animal Zorro";
}
