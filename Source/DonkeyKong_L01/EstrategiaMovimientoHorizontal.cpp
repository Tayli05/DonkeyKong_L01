// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategiaMovimientoHorizontal.h"

// Sets default values
AEstrategiaMovimientoHorizontal::AEstrategiaMovimientoHorizontal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	bMoverHorizontalmente = true;

	posicionInicio = FVector(0.0f, 0.0f, 0.0f);
	posicionActual = FVector(0.0f, 0.0f, 0.0f);
	posicionFinal = FVector(0.0f, 0.0f, 0.0f);

	velocidad = 2.1f;

}

// Called when the game starts or when spawned
void AEstrategiaMovimientoHorizontal::BeginPlay()
{
	Super::BeginPlay();
	
	if (desplazamiento == FVector::ZeroVector)
	{
		desplazamiento = FVector(1.0f, 0.0f, 0.0f); // Ejemplo de inicialización por defecto
	}
	posicionActual = GetActorLocation();
	posicionInicio = posicionActual - desplazamiento * 5.0f;
	posicionFinal = posicionActual + desplazamiento * 5.0f;
	bDeIzquierdaADerecha = true;


}

// Called every frame
void AEstrategiaMovimientoHorizontal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
}



void AEstrategiaMovimientoHorizontal::Moverse()
{

	if(bMoverHorizontalmente)
    {
        // Actualizar posición de acuerdo a bDeIzquierdaADerecha
        if (bDeIzquierdaADerecha)
        {
            posicionActual.Y += desplazamiento.Y * velocidad;
            if (posicionActual.Y > posicionFinal.Y)
            {
                bDeIzquierdaADerecha = false;
            }
        }
        else
        {
            posicionActual.Y -= desplazamiento.Y * velocidad;
            if (posicionActual.Y < posicionInicio.Y)
            {
                bDeIzquierdaADerecha = true;
            }
        }
        SetActorLocation(posicionActual);
    }

    GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Cyan, TEXT("Movimiento Horizontal"));


}

