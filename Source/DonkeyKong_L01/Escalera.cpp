// Fill out your copyright notice in the Description page of Project Settings.


#include "Escalera.h"

// Sets default values
AEscalera::AEscalera()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ConstructorHelpers::FObjectFinder<UStaticMesh> MallaEscalera(TEXT("StaticMesh'/Game/Geometry/DonkeyKong/Donkey_Kong_Level_1_Ladder002.Donkey_Kong_Level_1_Ladder002'"));
	MeshEscalera = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	MeshEscalera->SetStaticMesh(MallaEscalera.Object);
	RootComponent = MeshEscalera;
	SetActorScale3D(FVector(8.5f, 8.5f, 15.5f));

}

// Called when the game starts or when spawned
void AEscalera::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEscalera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

