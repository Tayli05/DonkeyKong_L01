// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DecoratorBase.h"
#include "GameFramework/Actor.h"
#include "VelocidadExtra_D.generated.h"

UCLASS()
class DONKEYKONG_L01_API AVelocidadExtra_D : public ADecoratorBase
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AVelocidadExtra_D();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	void Empezar() override;
	FString Estado() override;
	FString ObtenerAtributos() override;
	float Duracion() override;

private:

	void RestaurarVelocidad();

	// Variables para manejar el estado de velocidad extra
	bool bVelocidadExtraActiva = false;
	float VelocidadExtra;
	float VelocidadOriginal;
	float DuracionVelocidadExtra;

	// Temporizador para controlar la duración de la velocidad extra
	FTimerHandle TemporizadorVelocidad;

};
