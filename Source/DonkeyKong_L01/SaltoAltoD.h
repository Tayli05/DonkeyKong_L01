// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DecoratorBase.h"
#include "GameFramework/Actor.h"
#include "SaltoAltoD.generated.h"

UCLASS()
class DONKEYKONG_L01_API ASaltoAltoD : public ADecoratorBase
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASaltoAltoD();

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

	void RestaurarSalto();

	// Variables para manejar el estado del salto alto
	bool bSaltoAltoActivo = false;
	float FuerzaSaltoOriginal;
	float FuerzaSaltoExtra = 1000.0f; // Ajusta este valor según la altura deseada
	float DuracionSaltoAlto = 10.0f;  // Duración en segundos

	// Temporizador para controlar la duración del salto alto
	FTimerHandle TemporizadorSalto;

};
