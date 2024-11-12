// Fill out your copyright notice in the Description page of Project Settings.


#include "VelocidadExtra_D.h"

// Sets default values
AVelocidadExtra_D::AVelocidadExtra_D()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AVelocidadExtra_D::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVelocidadExtra_D::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AVelocidadExtra_D::Recoger()
{
	Super::Recoger();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green,
		FString::Printf(TEXT("Velocidad Extra")));

}

int AVelocidadExtra_D::ObtenerPoder()
{
	return Super::ObtenerPoder() + 5;
}

void AVelocidadExtra_D::Morir()
{
	Super::Morir();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green,
		FString::Printf(TEXT("Morir con velocidad extra")));
}


