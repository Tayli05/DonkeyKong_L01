// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "GameFramework/Actor.h"
#include "FacadeEnemigos.generated.h"

UCLASS()
class DONKEYKONG_L01_API AFacadeEnemigos : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFacadeEnemigos();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	UPROPERTY()
	TArray<FString> Tareas;
	TArray<AEnemigo*> Enemigos;

public:

	void AparecerAnimal();
	void MoverAnimal();
	void AtacarAnimal();
	void DesaparecerAnimal();
	void RealizarTareas(TArray<AEnemigo*> _enemigos, TArray<FString> _tareas);
};
