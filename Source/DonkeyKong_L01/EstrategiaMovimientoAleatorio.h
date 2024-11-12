// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include"IEstrategiaMovimiento.h"
#include "GameFramework/Actor.h"
#include "EstrategiaMovimientoAleatorio.generated.h"

UCLASS()
class DONKEYKONG_L01_API AEstrategiaMovimientoAleatorio : public AActor, public IIEstrategiaMovimiento
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstrategiaMovimientoAleatorio();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	void Moverse() override;


};
