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
	FVector PosicionF = FVector(1206, 200, 400);
	FRotator RotacionF = FRotator(90, 0, 0);
	
	if (_tipoBarril == "Flameante1")
	{
		return GetWorld()->SpawnActor<ABarrilFlameanteL1>(ABarrilFlameanteL1::StaticClass(), PosicionF, RotacionF);
	}
	else if (_tipoBarril == "Flameante2")
	{
		return GetWorld()->SpawnActor<ABarrilFlameanteL2>(ABarrilFlameanteL2::StaticClass(), PosicionF, RotacionF);
	}
	else
	{
		return nullptr;
	}


}
