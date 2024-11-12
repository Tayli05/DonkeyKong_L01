// Fill out your copyright notice in the Description page of Project Settings.


#include "SaltoAltoD.h"

// Sets default values
ASaltoAltoD::ASaltoAltoD()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASaltoAltoD::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASaltoAltoD::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASaltoAltoD::Recoger()
{
	Super::Recoger();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green,
		FString::Printf(TEXT("Salto Alto")));

}

int ASaltoAltoD::ObtenerPoder()
{
	return Super::ObtenerPoder() + 15;
}



void ASaltoAltoD::Morir()
{
	Super::Morir();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green,
		FString::Printf(TEXT("Morir con salto alto")));
}



