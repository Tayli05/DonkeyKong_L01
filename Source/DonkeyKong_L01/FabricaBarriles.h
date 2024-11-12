// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Barril.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FabricaBarriles.generated.h"


UCLASS()
class DONKEYKONG_L01_API AFabricaBarriles : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	AFabricaBarriles();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	virtual ABarril* EncargarTipoBarril(FString _Barril) 
	PURE_VIRTUAL(AFabricaBarriles::EncargarTipoBarril, return nullptr;);

	ABarril* CrearBarril(FString _tipoBarril);


};
