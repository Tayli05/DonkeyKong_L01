// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo.h"
#include "Animation/AnimSequence.h"
#include "Components/SkeletalMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "IEstrategiaMovimiento.h"


// Sets default values
AEnemigo::AEnemigo()
{
	PrimaryActorTick.bCanEverTick = true;

	MeshEnemigo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	MeshEnemigo->SetupAttachment(RootComponent);
	RootComponent = MeshEnemigo;

}

// Called when the game starts or when spawned
void AEnemigo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemigo::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


void AEnemigo::Aparecer()
{
	
GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Purple,
		FString::Printf(TEXT("%s Aparecio"), *TipoEnemigo()));
}

void AEnemigo::Desaparecer()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Cyan,
		FString::Printf(TEXT("%s  Desaparecio"), *TipoEnemigo()));
}

void AEnemigo::Atacar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Emerald,
		FString::Printf(TEXT("%s Ataco "), *TipoEnemigo()));
}

void AEnemigo::Moverse()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green,
		FString::Printf(TEXT("%s se Movio"), *TipoEnemigo()));
}

void AEnemigo::Caminar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue,
		FString::Printf(TEXT("%s esta Caminando"), *TipoEnemigo()));
}

void AEnemigo::Tarea(const TArray<FString>& tareas)
{
	for (const FString& myTarea : tareas)
	{
		Tareas(myTarea); //Llama a la funcion Tareas

	}
}

void AEnemigo::Tareas(const FString Tarea)
{
	if (Tarea == "Aparecer")
	{
		Aparecer();
	}
	else if (Tarea == "Desaparecer")
	{
		Desaparecer();
	}
	else if (Tarea == "Atacar")
	{
		Atacar();
	}
	else if (Tarea == "Moverse")
	{
		Moverse();
	}
	else if (Tarea == "Caminar")
	{
		Caminar();
	}
	else if (Tarea == "Accion")
	{
		Acciones();
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red,
			FString::Printf(TEXT("Tarea no reconocida: %s"), *Tarea));
	}

}


