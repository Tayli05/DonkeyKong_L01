// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoAnimalCuervo.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_L01_API AEnemigoAnimalCuervo : public AEnemigo
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemigoAnimalCuervo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	void Volar();
	void Picotear();

	virtual void Acciones() override;
	virtual FString TipoEnemigo() override;

	
};
