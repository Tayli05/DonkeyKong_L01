// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabricaBarriles.h"
#include "FabricaBarrilesToxicos.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_L01_API AFabricaBarrilesToxicos : public AFabricaBarriles
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AFabricaBarrilesToxicos();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	virtual ABarril* EncargarTipoBarril(FString _tipoBarril) override;
};
