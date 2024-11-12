// Fill out your copyright notice in the Description page of Project Settings.


#include "Escenario.h"

// Sets default values
AEscenario::AEscenario()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	const ConstructorHelpers::FObjectFinder<UStaticMesh> MallaEscenario(TEXT("StaticMesh'/Game/Geometry/Meshes/1M_Cube.1M_Cube'"));	
	/*MeshEscalera = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	MeshEscenario->SetStaticMesh(MallaEscenario.Object);
	RootComponent = MeshEscenario;
	SetActorScale3D(FVector(5.5f, 5.5f, 5.5f));*/

}

// Called when the game starts or when spawned
void AEscenario::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEscenario::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

