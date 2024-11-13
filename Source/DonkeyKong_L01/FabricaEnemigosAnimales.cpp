// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaEnemigosAnimales.h"
#include "EnemigoAnimalLeon.h"
#include "EnemigoAnimalLobo.h"
#include "EnemigoAnimalCocodrilo.h"

AFabricaEnemigosAnimales::AFabricaEnemigosAnimales()
{
	PrimaryActorTick.bCanEverTick = true;
	
}

void AFabricaEnemigosAnimales::BeginPlay()
{
}

void AFabricaEnemigosAnimales::Tick(float DeltaTime)
{
}

AEnemigo* AFabricaEnemigosAnimales::FabricarEnemigoTerrestre()
{
	return NewObject<AEnemigoAnimalLeon>();


}

AEnemigo* AFabricaEnemigosAnimales::FabricarEnemigoAereo()
{
	return NewObject<AEnemigoAnimalLobo>();
}

AEnemigo* AFabricaEnemigosAnimales::FabricarEnemigoAcuatico()
{
	return NewObject<AEnemigoAnimalCocodrilo>();
}
