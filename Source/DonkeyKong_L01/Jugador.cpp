// Fill out your copyright notice in the Description page of Project Settings.


#include "Jugador.h"

// Sets default values
AJugador::AJugador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/Geometry/Meshes/1M_Cube.1M_Cube'"));
	MeshJugador = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("JugadorMesh"));
	MeshJugador->SetStaticMesh(MeshAsset.Object);
	RootComponent = MeshJugador;

	

}

// Called when the game starts or when spawned
void AJugador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AJugador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AJugador::Cargar()
{
	if (!adapter) {
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Magenta,
			FString::Printf(TEXT("Cargar(): El adaptador es null, revise la conversion")));
		return;
	}
	else {
		adapter->Cargar();
	}
}

void AJugador::setAdapter(AActor* _proyectil)
{
	adapter = Cast<IIAdapter>(_proyectil);
	if (!adapter) {
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Magenta,
			FString::Printf(TEXT("setAdapter(): No se pudo convertir el proyectil al adaptador")));
	}

}

