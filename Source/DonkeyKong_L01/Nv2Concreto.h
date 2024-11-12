// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Nv2Concreto.generated.h"

UCLASS()
class DONKEYKONG_L01_API ANv2Concreto : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANv2Concreto();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	class ANv1* nv1;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void ConstruirPlataformas(int32 num);
	virtual void ConstruirObstaculos(int32 num);
	virtual void ConstruirEscaleras(int32 num);


};
