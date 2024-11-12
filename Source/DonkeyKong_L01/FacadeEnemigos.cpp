// Fill out your copyright notice in the Description page of Project Settings.


#include "FacadeEnemigos.h"
#include "Enemigo.h"
#include "EnemigoAnimalLobo.h"
#include "EnemigoAnimalLeon.h"
#include "EnemigoAnimalZorro.h"
#include "EnemigoAnimalCocodrilo.h"

// Sets default values
AFacadeEnemigos::AFacadeEnemigos()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFacadeEnemigos::BeginPlay()
{
	Super::BeginPlay();
	
	Enemigos = TArray<AEnemigo*>();
	Tareas = TArray<FString>();

	AEnemigoAnimalLobo* Lobo = GetWorld()->SpawnActor<AEnemigoAnimalLobo>(AEnemigoAnimalLobo::StaticClass());
	if (Lobo)
	{
		Enemigos.Add(Lobo);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Error al crear Lobo"));
	}

	AEnemigoAnimalLeon* Leon = GetWorld()->SpawnActor<AEnemigoAnimalLeon>(AEnemigoAnimalLeon::StaticClass());
	if (Leon)
	{
		Enemigos.Add(Leon);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Error al crear Leon"));
	}

	AEnemigoAnimalZorro* Zorro = GetWorld()->SpawnActor<AEnemigoAnimalZorro>(AEnemigoAnimalZorro::StaticClass());
	if (Zorro)
	{
		Enemigos.Add(Zorro);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Error al crear Leon"));
	}

	AEnemigoAnimalCocodrilo* Cocodrilo = GetWorld()->SpawnActor<AEnemigoAnimalCocodrilo>(AEnemigoAnimalCocodrilo::StaticClass());
	if (Cocodrilo)
	{
		Enemigos.Add(Cocodrilo);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Error al crear Leon"));
	}

}

// Called every frame
void AFacadeEnemigos::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFacadeEnemigos::AparecerAnimal()
{
	Tareas.Empty();
	Tareas.Add("Aparecer");

	RealizarTareas(Enemigos, Tareas);
}

void AFacadeEnemigos::MoverAnimal()
{

	Tareas.Empty();
	Tareas.Add("Moverse");

	RealizarTareas(Enemigos, Tareas);
	
}

void AFacadeEnemigos::AtacarAnimal()
{
	Tareas.Empty();
	Tareas.Add("Atacar");

	RealizarTareas(Enemigos, Tareas);
}

void AFacadeEnemigos::DesaparecerAnimal()
{
	Tareas.Empty();
	Tareas.Add("Desaparecer");

	RealizarTareas(Enemigos, Tareas);
}

void AFacadeEnemigos::RealizarTareas(TArray<AEnemigo*> enemigos, TArray<FString> tareas)
{
	for (AEnemigo* Member : enemigos)
	{
		Member->Tarea(tareas);
	}


}



