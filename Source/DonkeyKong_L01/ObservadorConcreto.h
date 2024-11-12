// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Observer.h"
#include "ObservadorConcreto.generated.h"

UCLASS()
class DONKEYKONG_L01_API AObservadorConcreto : public AActor, public IObserver
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AObservadorConcreto();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//UStaticMeshComponent* MeshObservador;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	virtual void Actualizar() override;

};
