// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Observer.h"
#include "Sujeto.generated.h"

UCLASS()
class DONKEYKONG_L01_API ASujeto : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASujeto();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:

	void AgregarObservador(IObserver* Observador);
	void EliminarObservador(IObserver* Observador);
	void NotificarObservadores();

private:

	TArray<IObserver*> Observadores;

};
