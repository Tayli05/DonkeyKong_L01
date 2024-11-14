// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IDecorator.h"
#include "GameFramework/Actor.h"
#include "Personaje.generated.h"

UCLASS()
class DONKEYKONG_L01_API APersonaje : public AActor, public IIDecorator
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APersonaje();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UStaticMeshComponent* MeshPersonaje;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	void Empezar() override;
	FString Estado() override;
	FString ObtenerAtributos() override;
	float Duracion() override;



};
