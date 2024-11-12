// Fill out your copyright notice in the Description page of Project Settings.


#include "BarrilToxicoL1.h"

ABarrilToxicoL1::ABarrilToxicoL1()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/Geometry/DonkeyKong/Donkey_Kong_Level_1_Barrel002.Donkey_Kong_Level_1_Barrel002'"));
	BarrilMesh->SetStaticMesh(MeshAsset.Object);
	RootComponent = BarrilMesh;

	SetActorScale3D(FVector(2.5f, 2.5f, 2.5f));

	NombreBarril = "Toxico1";
	Material = "Toxico";
	Danio = 10;
	Peso = 50;
}

void ABarrilToxicoL1::BeginPlay()
{
	Super::BeginPlay();
}

void ABarrilToxicoL1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABarrilToxicoL1::Construir()
{
	UE_LOG(LogTemp, Warning, TEXT("Barril Toxico L1 construido"));
}


