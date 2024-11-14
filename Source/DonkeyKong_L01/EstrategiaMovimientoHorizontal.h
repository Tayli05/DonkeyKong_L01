// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IEstrategiaMovimiento.h"
#include "GameFramework/Actor.h"
#include "EstrategiaMovimientoHorizontal.generated.h"

UCLASS()
class DONKEYKONG_L01_API AEstrategiaMovimientoHorizontal : public AActor, public IIEstrategiaMovimiento
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstrategiaMovimientoHorizontal();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:

	void Moverse() override;


	bool bMoverHorizontalmente;
	
	FVector posicionInicio;
	FVector posicionActual;
	FVector posicionFinal;
	
	bool bDetener;
	float velocidad;
	FVector desplazamiento;
	float ancho;
	float alto;
	float fondo;

	bool bDeIzquierdaADerecha;
	
	FORCEINLINE void setbMoverHorizontalmente(bool _bMoverHorizontalmente) { bMoverHorizontalmente = _bMoverHorizontalmente; }

	FORCEINLINE void setbDetener(bool _bDetener) { bDetener = _bDetener; }

};
