// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaEnemigosFantasia.h"
#include "EnemigoFantasiaCactus.h"
#include "EnemigoFantasiaBeholder.h"
#include "EnemigoFantasiaSwarm.h"


AFabricaEnemigosFantasia::AFabricaEnemigosFantasia()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AFabricaEnemigosFantasia::BeginPlay()
{

}

void AFabricaEnemigosFantasia::Tick(float DeltaTime)
{
}

AEnemigo* AFabricaEnemigosFantasia::FabricarEnemigoTerrestre()
{
	return NewObject<AEnemigoFantasiaCactus>();
}

AEnemigo* AFabricaEnemigosFantasia::FabricarEnemigoAereo()
{
	return NewObject<AEnemigoFantasiaBeholder>(); nullptr;
}

AEnemigo* AFabricaEnemigosFantasia::FabricarEnemigoAcuatico()
{
	return NewObject<AEnemigoFantasiaSwarm>(); nullptr;
}
