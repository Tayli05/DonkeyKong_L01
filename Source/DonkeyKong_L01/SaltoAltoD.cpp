// Fill out your copyright notice in the Description page of Project Settings.


#include "SaltoAltoD.h"

// Sets default values
ASaltoAltoD::ASaltoAltoD()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASaltoAltoD::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASaltoAltoD::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASaltoAltoD::Empezar()
{
	
	bSaltoAltoActivo = true;

	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green,
		FString::Printf(TEXT("Salto Alto Activado")));
	

}

FString ASaltoAltoD::Estado()
{
	estado = "Salto Alto";
	return Super::Estado() + estado;

}

FString ASaltoAltoD::ObtenerAtributos()
{
	atributos = " Poder de Salto Alto";
	return Super::ObtenerAtributos() + atributos;
	
}

float ASaltoAltoD::Duracion()
{

	return Super::Duracion() + 10.0f;
}

void ASaltoAltoD::RestaurarSalto()
{
	bSaltoAltoActivo = false;

	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green,
		FString::Printf(TEXT("Salto Alto Restaurado")));
}




