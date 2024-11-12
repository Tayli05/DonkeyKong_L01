// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAnimalLobo.h"

AEnemigoAnimalLobo::AEnemigoAnimalLobo()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> EnemigoAnimalLoboMeshAsset(TEXT("StaticMesh'/Game/Geometry/Animales/untitled_fox_1.untitled_fox_1'"));
	MeshEnemigo->SetStaticMesh(EnemigoAnimalLoboMeshAsset.Object);
	RootComponent = MeshEnemigo;

	MeshEnemigo->SetWorldScale3D(FVector(0.1f, 0.1f, 0.1f));

}

void AEnemigoAnimalLobo::BeginPlay()
{
	Super::BeginPlay();
}

void AEnemigoAnimalLobo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEnemigoAnimalLobo::Aparecer()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Aparecer"));
}

void AEnemigoAnimalLobo::Desaparecer()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Desaparecer"));
}

void AEnemigoAnimalLobo::Acciones()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
		FString::Printf(TEXT("%s Enemigo Ataca"), *TipoEnemigo()));
}

FString AEnemigoAnimalLobo::TipoEnemigo()
{
	return "Enemigo Lobo";
}

