// Fill out your copyright notice in the Description page of Project Settings.


#include "Sujeto.h"

// Sets default values
ASujeto::ASujeto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASujeto::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASujeto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASujeto::AgregarObservador(IObserver* Observador)
{
	if (Observador) {

		Observadores.Add(Observador);
	}
	
}

void ASujeto::EliminarObservador(IObserver* Observador)
{
	Observadores.Remove(Observador);

}

void ASujeto::NotificarObservadores()
{
	for (IObserver* Observer : Observadores)
	{
		Observer->Actualizar();
	}

}

