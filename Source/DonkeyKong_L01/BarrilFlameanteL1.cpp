// Fill out your copyright notice in the Description page of Project Settings.


#include "BarrilFlameanteL1.h"

ABarrilFlameanteL1::ABarrilFlameanteL1()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> BarrilMeshAsset(TEXT("StaticMesh'/Game/Geometry/DonkeyKong/Donkey_Kong_Level_1_Barrel.Donkey_Kong_Level_1_Barrel'"));
	BarrilMesh->SetStaticMesh(BarrilMeshAsset.Object);
	RootComponent = BarrilMesh;

	NombreBarril = "Flameante1";
	Material = "Fuego";
	Danio = 10;
	Peso = 50;
	Volumen = 1;

}

void ABarrilFlameanteL1::BeginPlay()
{
	Super::BeginPlay();

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Barril Flameante_1")));

	Construir();
}

void ABarrilFlameanteL1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABarrilFlameanteL1::Construir()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Construyendo Barril Flameante 1 ")));

}
