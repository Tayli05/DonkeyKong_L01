// Fill out your copyright notice in the Description page of Project Settings.


#include "ObservadorConcreto.h"

// Sets default values
AObservadorConcreto::AObservadorConcreto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void AObservadorConcreto::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("ObservadorConcreto ha sido creado y está listo para recibir notificaciones"));

}

// Called every frame
void AObservadorConcreto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AObservadorConcreto::Actualizar()
{

	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green,
		FString::Printf(TEXT("Observador Concreto")));

}

