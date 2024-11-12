// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IAdapter.h"
#include "GameFramework/Actor.h"
#include "AdapterProjectile.generated.h"

class AProjectile;
UCLASS()
class DONKEYKONG_L01_API AAdapterProjectile : public AActor , public IIAdapter
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAdapterProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

  AProjectile* projectile1;

public:

	virtual void Cargar() override;


};
