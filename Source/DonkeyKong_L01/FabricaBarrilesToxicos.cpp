// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaBarrilesToxicos.h"
#include "BarrilToxicoL1.h"
#include "BarrilToxicoL2.h"

AFabricaBarrilesToxicos::AFabricaBarrilesToxicos()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AFabricaBarrilesToxicos::BeginPlay()
{
	Super::BeginPlay();
}

void AFabricaBarrilesToxicos::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

ABarril* AFabricaBarrilesToxicos::EncargarTipoBarril(FString _tipoBarril)
{
	FVector PosicionT = FVector(1206, 200, 600);
	FRotator RotacionT = FRotator(90, 0, 0);

	if (_tipoBarril == "Toxico1")
	{
		return GetWorld()->SpawnActor<ABarrilToxicoL1>(ABarrilToxicoL1::StaticClass(), PosicionT, RotacionT);
	}
	else if (_tipoBarril == "Toxico2")
	{
		return GetWorld()->SpawnActor<ABarrilToxicoL2>(ABarrilToxicoL2::StaticClass(), PosicionT, RotacionT);
	}
	else
	{
		return nullptr;
	}
	
}
