// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategiaMovimientoAleatorio.h"

// Sets default values
AEstrategiaMovimientoAleatorio::AEstrategiaMovimientoAleatorio()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstrategiaMovimientoAleatorio::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstrategiaMovimientoAleatorio::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategiaMovimientoAleatorio::Moverse()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Cyan,
		FString::Printf(TEXT("Movimiento Aleatorio")));
}

