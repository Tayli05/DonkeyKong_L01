// Fill out your copyright notice in the Description page of Project Settings.


#include "SujetoConcreto.h"
#include "ObservadorConcreto.h"

// Sets default values
ASujetoConcreto::ASujetoConcreto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASujetoConcreto::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASujetoConcreto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASujetoConcreto::EventoDesencadenante()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green,
		FString::Printf(TEXT("Evento Desencadenante")));

	NotificarObservadores();

}

