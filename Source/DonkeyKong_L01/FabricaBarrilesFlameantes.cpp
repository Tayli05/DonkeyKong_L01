// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaBarrilesFlameantes.h"
#include "BarrilFlameanteL1.h"
#include "BarrilFlameanteL2.h"


AFabricaBarrilesFlameantes::AFabricaBarrilesFlameantes()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AFabricaBarrilesFlameantes::BeginPlay()
{

}

void AFabricaBarrilesFlameantes::Tick(float DeltaTime)
{
}

ABarril* AFabricaBarrilesFlameantes::EncargarTipoBarril(FString _tipoBarril)
{
	

	if (_tipoBarril == "Flameante1")
	{
		return GetWorld()->SpawnActor<ABarrilFlameanteL1>(ABarrilFlameanteL1::StaticClass(), FVector(2670, 1100, 4950), FRotator(0, 0, 0));
		
		
	}
	else if (_tipoBarril == "Flameante2")
	{
	  return GetWorld()->SpawnActor<ABarrilFlameanteL2>(ABarrilFlameanteL2::StaticClass(), FVector(2670, 1100, 4950), FRotator(0, 0, 0));

	
	}
	else
	{
		return nullptr;
	}


}
