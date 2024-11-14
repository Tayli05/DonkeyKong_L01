// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DecoratorBase.h"
#include "GameFramework/Actor.h"
#include "InvulnerabilidadD.generated.h"

UCLASS()
class DONKEYKONG_L01_API AInvulnerabilidadD : public ADecoratorBase
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInvulnerabilidadD();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void TerminarInvulnerabilidad();	
	bool esInvulnerable = true;

	UPROPERTY(EditAnywhere, Category = "Invulnerabilidad")
	float DuracionInvulnerabilidad;

	FTimerHandle TemporizadorInvulnerabilidad;

public:

	
	void Empezar() override;
	FString Estado() override;
	FString ObtenerAtributos() override;
	float Duracion() override;

	UFUNCTION()
	void OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor);

};
