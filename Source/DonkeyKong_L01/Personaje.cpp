// Fill out your copyright notice in the Description page of Project Settings.


#include "Personaje.h"

// Sets default values
APersonaje::APersonaje()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APersonaje::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APersonaje::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APersonaje::Recoger()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green,
		FString::Printf(TEXT("Recoger")));
}

int APersonaje::ObtenerPoder()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green,
		FString::Printf(TEXT("Obtener Poder")));
	return 0;
}

void APersonaje::Morir()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green,
		FString::Printf(TEXT("Morir")));

}



