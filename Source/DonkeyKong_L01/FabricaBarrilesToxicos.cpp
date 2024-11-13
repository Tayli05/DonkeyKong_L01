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

	if (_tipoBarril == "Toxico1")
	{
		return GetWorld()->SpawnActor<ABarrilToxicoL1>(ABarrilToxicoL1::StaticClass(), FVector(1750, 700, 1870), FRotator(0,0,0));
	}
	else if (_tipoBarril == "Toxico2")
	{
		return GetWorld()->SpawnActor<ABarrilToxicoL2>(ABarrilToxicoL2::StaticClass(), FVector(1750,-2800,2910), FRotator(0, 0, 0));
	}
	else
	{
		return nullptr;
	}
	
}
