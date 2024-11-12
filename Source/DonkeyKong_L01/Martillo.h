// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IEstrategiaMovimiento.h"
#include "GameFramework/Actor.h"
#include "Martillo.generated.h"

UCLASS()
class DONKEYKONG_L01_API AMartillo : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMartillo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	//La estrategia de la batalla actual
	IIEstrategiaMovimiento* EstrategiaMovimiento;

public:

	void AlterarMovimientos(AActor* _EstrategiaDeMovimiento);

	//Emplear la estrategia de batalla actual
	void Emplear();

};
