// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstaculos.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AObstaculos::AObstaculos()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/Geometry/DonkeyKong/Donkey_Kong_Level_1_Hammer001.Donkey_Kong_Level_1_Hammer001'"));
	MeshObstaculo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	MeshObstaculo->SetStaticMesh(MeshAsset.Object);
	RootComponent = MeshObstaculo;
	MeshObstaculo->SetWorldScale3D(FVector(4.0f, 4.0f, 5.5f));

}

// Called when the game starts or when spawned
void AObstaculos::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AObstaculos::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


