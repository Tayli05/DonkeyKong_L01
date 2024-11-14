// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IAdapter.h"
#include "GameFramework/Actor.h"
#include "Jugador.generated.h"

UCLASS()
class DONKEYKONG_L01_API AJugador : public AActor, public IIAdapter
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AJugador();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UStaticMeshComponent* MeshJugador;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


private:

	IIAdapter* adapter;

public:
	void Cargar() override;

	void setAdapter(AActor* AdapterObj);


	float TiempoEntreProyectil;
	float TiempoDisparo;
	int HealthEnemis;

};
