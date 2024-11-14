// Fill out your copyright notice in the Description page of Project Settings.


#include "VelocidadExtra_D.h"

// Sets default values
AVelocidadExtra_D::AVelocidadExtra_D()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	VelocidadExtra = 600.0f;
	DuracionVelocidadExtra = 5.0f;



}

// Called when the game starts or when spawned
void AVelocidadExtra_D::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVelocidadExtra_D::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);



}

void AVelocidadExtra_D::Empezar()
{


}


FString AVelocidadExtra_D::Estado()
{
	estado = "Velocidad Extra";
	return Super::Estado() + estado;

}

FString AVelocidadExtra_D::ObtenerAtributos()
{
	atributos = "Poder de Velocidad Extra";
	return Super::ObtenerAtributos() + atributos;

}

float AVelocidadExtra_D::Duracion()
{
	return Super::Duracion() + DuracionVelocidadExtra;

}

void AVelocidadExtra_D::RestaurarVelocidad()
{
	bVelocidadExtraActiva = false;

}


