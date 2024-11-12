// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Enemigo.generated.h"

UCLASS()
class DONKEYKONG_L01_API AEnemigo : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemigo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UStaticMeshComponent* MeshEnemigo;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


public:
	void Tareas (const FString Tarea);
	//Tarea (const TArray<FString>& tareas);

public:
	void Aparecer();
	void Desaparecer();
	void Atacar();
	void Moverse();
	void Caminar();

	void Tarea(const TArray<FString>& tareas);

	virtual void Acciones() PURE_VIRTUAL(AEnemigo::Acciones, ;);

	virtual FString TipoEnemigo() PURE_VIRTUAL(AEnemigo::TipoEnemigo, return "";)



	////Cambia la maniobra y establece la variable "EstrategiaDeBatalla"
	//void AlterarMovimiento(AActor* _EstrategiaDeBatalla);

	////Emplear la estrategia de batalla actual
	//void Emplear();
};
