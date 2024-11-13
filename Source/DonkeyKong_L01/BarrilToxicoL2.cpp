// Fill out your copyright notice in the Description page of Project Settings.


#include "BarrilToxicoL2.h"

ABarrilToxicoL2::ABarrilToxicoL2()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/Geometry/DonkeyKong/Donkey_Kong_Level_1_Oil.Donkey_Kong_Level_1_Oil'"));
	BarrilMesh->SetStaticMesh(MeshAsset.Object);
	RootComponent = BarrilMesh;
	SetActorScale3D(FVector(1.5f, 4.5f, 4.5f));

	NombreBarril = "Toxico2";
	Material = "Vidrio";
	Danio = 20;
	Peso = 100;
	Volumen = 5;

}

void ABarrilToxicoL2::BeginPlay()
{
	Super::BeginPlay();
}

void ABarrilToxicoL2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABarrilToxicoL2::Construir()
{
	UE_LOG(LogTemp, Warning, TEXT("Barril Toxico L2 construido"));
}
