// Fill out your copyright notice in the Description page of Project Settings.


#include "InvulnerabilidadD.h"

// Sets default values
AInvulnerabilidadD::AInvulnerabilidadD()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AInvulnerabilidadD::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInvulnerabilidadD::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AInvulnerabilidadD::Recoger()
{
	Super::Recoger();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green,
		FString::Printf(TEXT("Invulnerabilidad")));
}

int AInvulnerabilidadD::ObtenerPoder()
{
	return Super::ObtenerPoder() + 50;

}

void AInvulnerabilidadD::Morir()
{
	Super::Morir();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green,
		FString::Printf(TEXT("Morir con invulnerabilidad")));

}



