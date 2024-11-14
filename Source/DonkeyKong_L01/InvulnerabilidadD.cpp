// Fill out your copyright notice in the Description page of Project Settings.


#include "InvulnerabilidadD.h"
#include "TimerManager.h"
#include "Engine/World.h"

// Sets default values
AInvulnerabilidadD::AInvulnerabilidadD()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DuracionInvulnerabilidad = 10.0f;
	esInvulnerable = true;

}

// Called when the game starts or when spawned
void AInvulnerabilidadD::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInvulnerabilidadD::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AInvulnerabilidadD::TerminarInvulnerabilidad()
{
	esInvulnerable = false;

}

void AInvulnerabilidadD::Empezar()
{
	GetWorld()->GetTimerManager().SetTimer(TemporizadorInvulnerabilidad, this, &AInvulnerabilidadD::TerminarInvulnerabilidad, DuracionInvulnerabilidad, false);
	
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green,
		FString::Printf(TEXT("Invulnerabilidad activada")));


}

FString AInvulnerabilidadD::Estado()
{
	
	estado = "Invulnerable";
	return Super::Estado() + estado;
}

FString AInvulnerabilidadD::ObtenerAtributos()
{
	atributos = "Poder de invulnerable";
	return Super::ObtenerAtributos() + atributos;

}

float AInvulnerabilidadD::Duracion()
{
	return Super::Duracion() + 10.0f;

}

void AInvulnerabilidadD::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor)
{
	if (OtherActor->ActorHasTag("Personaje"))
	{
		Empezar();
	}

}



