// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoAnimalHipopotamo.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_L01_API AEnemigoAnimalHipopotamo : public AEnemigo
{
	GENERATED_BODY()
	
public:

	// Sets default values for this character's properties
	AEnemigoAnimalHipopotamo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void Nadar();
	void Comer();

	virtual void Acciones() override;
	virtual FString TipoEnemigo() override;
};