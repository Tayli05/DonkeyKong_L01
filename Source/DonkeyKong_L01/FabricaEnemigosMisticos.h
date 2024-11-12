// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabricaEnemigos.h"
#include "FabricaEnemigosMisticos.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_L01_API AFabricaEnemigosMisticos : public AFabricaEnemigos
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFabricaEnemigosMisticos();

protected:
	// Called when the game starts or when spawned	
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual AEnemigo* FabricarEnemigoTerrestre() override;
	virtual AEnemigo* FabricarEnemigoAereo() override;
	virtual AEnemigo* FabricarEnemigoAcuatico() override;
	
};
