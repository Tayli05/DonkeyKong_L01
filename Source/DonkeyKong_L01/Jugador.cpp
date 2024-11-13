// Fill out your copyright notice in the Description page of Project Settings.


#include "Jugador.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "GameFramework/PlayerController.h"


// Sets default values
AJugador::AJugador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/Content/TwinStick/Meshes/TwinStickUFO.TwinStickUFO'"));
	MeshJugador = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("JugadorMesh"));
	MeshJugador->SetStaticMesh(MeshAsset.Object);
	RootComponent = MeshJugador;

	SetActorScale3D(FVector(2.5f, 2.5f, 2.5f));



	HealthEnemis = 200.0f;
	TiempoEntreProyectil = 0.5f;
	TiempoDisparo = 0.0f;


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

	TiempoDisparo += DeltaTime;
	if (TiempoDisparo >= TiempoEntreProyectil)
	{
		Cargar();
		TiempoDisparo = 0.0f;
	}

}


void AJugador::setAdapter(AActor* AdapterObj)
{
	adapter = Cast<IIAdapter>(AdapterObj);

	if (!adapter) {
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Magenta,
			FString::Printf(TEXT("setAdapter(): No se pudo convertir el proyectil al adaptador")));
	}


}


void AJugador::Cargar()
{

	if (!adapter) {
		UE_LOG(LogTemp, Error, TEXT("Cargar(): Tiro con proyectil es NULL, asegurese de que este inicializada."));
		return;
	}
	
	
    adapter->Cargar();

}




