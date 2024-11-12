// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Barril.generated.h"

UCLASS()
class DONKEYKONG_L01_API ABarril : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABarril();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Barril")
	UStaticMeshComponent* BarrilMesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	int numeroBarriles;
	FString NombreBarril;
	FString Material;
	int Danio;
	float Peso;
	float Volumen;
	//FVector Posicion;



public:

	virtual void Tick(float DeltaTime) override;

	void RotarBarril();
	void Explotar();

	virtual void Construir();
	FString GetNombreBarril();

	//FTimerHandle SpawnBarrilTimerHandle;

	void SpawnBarril();

};
