// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Plataforma.generated.h"

UCLASS()
class DONKEYKONG_L01_API APlataforma : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlataforma();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UStaticMeshComponent* MeshPlataforma;

	bool bMoverHorizontalmente;
	bool bMoverVerticalmente;
	bool bMoverLateralmente;

	FVector posicionInicio;
	FVector posicionActual;
	FVector posicionFinal;
	float incrementoZ;
	bool bDetener;
	float velocidad;
	float anchoComponentePlataforma;
	float altoComponentePlataforma;
	float fondoComponentePlataforma;

	FVector desplazamientoComponentePlataforma;
	bool bDeIzquierdaADerecha;
	bool bDeArribaAAbajo;
	bool dDeAdelanteAAtras;

public:

	FORCEINLINE void setbMoverHorizontalmente(bool _bMoverHorizontalmente) { bMoverHorizontalmente = _bMoverHorizontalmente; }
	FORCEINLINE void setbMoverVerticalmente(bool _bMoverVerticalmente) { bMoverVerticalmente = _bMoverVerticalmente; }
	FORCEINLINE void setbMoverLateralmente(bool _bMoverLateralmente) { bMoverLateralmente = _bMoverLateralmente; }

	FORCEINLINE void setbDetener(bool _bDetener) { bDetener = _bDetener; }


	/*void MoverPlataformaHorizontalmente();
	void MoverPlataformaVerticalmente();
	void MoverPlataformaLateralmente();*/

};
