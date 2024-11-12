// Fill out your copyright notice in the Description page of Project Settings.

#include "Nv1.h"
#include "Plataforma.h"
#include "Escalera.h"
#include "Obstaculos.h"

// Sets default values
ANv1::ANv1()
{
	// Set this actor to call Tick() every frame. You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ANv1::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ANv1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ANv1::EstablecerPlataformas(int32 num)
{
	if (aComponentesPlataformaMoviles.Num() < 8) {
		aComponentesPlataformaMoviles.Empty();
		for (int32 i = 0; i < 8; ++i) {
			aComponentesPlataformaMoviles.Add(FMath::RandRange(2, 7)); // Genera un número entre 2 y 7
		}
	}

	FVector posicionInicial = FVector(1300.0f, -1480.0f, -250.f);
	FRotator rotacionInicial = FRotator(0.0f, 90.0f, 0.0f);
	FTransform SpawnLocationCP;
	float anchoComponentePlataforma = 300.0f;
	float incrementoAltoComponentePlataforma = 55.0f;
	float incrementoAltoEntrePisos = 250.0f;
	float incrementoInicioPiso = 0.0f;
	float incrementoAnchoComponentePlataforma = -300.0f;

	switch (num) {
	case 1:
		for (int npp = 0; npp < 8; npp++) {
			rotacionInicial.Roll = rotacionInicial.Roll * -1;
			incrementoAnchoComponentePlataforma = incrementoAnchoComponentePlataforma * -1;
			SpawnLocationCP.SetRotation(FQuat(rotacionInicial));
			SpawnLocationCP.SetLocation(FVector(posicionInicial.X, posicionInicial.Y, posicionInicial.Z));

			for (int ncp = 0; ncp < 10; ncp++) {
				APlataforma* cp = GetWorld()->SpawnActor<APlataforma>(APlataforma::StaticClass(), SpawnLocationCP);
				if (cp != nullptr) {
					if (ncp == aComponentesPlataformaMoviles[npp]) {
						if (npp % 2 == 0)
							cp->setbMoverHorizontalmente(true);
						else
							cp->setbMoverVerticalmente(true);
					}
				}
				else {
					UE_LOG(LogTemp, Warning, TEXT("No se pudo crear la plataforma en el nivel %d, componente %d"), npp, ncp);
				}

				posicionInicial.Z = posicionInicial.Z + incrementoAltoComponentePlataforma;
				if (ncp < 9) {
					posicionInicial.Y = posicionInicial.Y + incrementoAnchoComponentePlataforma;
				}

				SpawnLocationCP.SetLocation(FVector(posicionInicial.X, posicionInicial.Y, posicionInicial.Z));
			}

			posicionInicial.Z = posicionInicial.Z + incrementoAltoEntrePisos;
			posicionInicial.Y = posicionInicial.Y + incrementoInicioPiso;

			if (npp % 2 == 1) {
				posicionInicial.Y += 400.0f;
			}
			else {
				posicionInicial.Y -= 400.0f;
			}
		}
		break;

	case 2:
	{
		FVector Posicion2 = FVector(1169.0f, -2200.0f, -200.f);
		FRotator Rotacion2 = FRotator(0.0f, 0.0f, 90.0f);
		FTransform SpawnLocationCP2;
		for (int i = 0; i < 20; i++) {
			SpawnLocationCP2.SetLocation(FVector(Posicion2.X, Posicion2.Y, Posicion2.Z));
			APlataforma* cp2 = GetWorld()->SpawnActor<APlataforma>(APlataforma::StaticClass(), SpawnLocationCP2);
			Posicion2.Z = Posicion2.Z + 300.0f;
			if (i % 2 == 1) {
				Posicion2.Y = Posicion2.Y + 400.0f;
			}
			else {
				if (cp2 != nullptr) {
					cp2->setbMoverHorizontalmente(true);
				}
				Posicion2.Y = Posicion2.Y - 500.0f;
			}
		}
	}
	break;

	case 3:
	{
		FVector Posicion3 = FVector(1169.0f, 1900.0f, -250.f);
		FRotator Rotacion3 = FRotator(0.0f, 0.0f, 0.0f);
		FTransform SpawnLocationCP3;
		for (int i = 0; i < 20; i++) {
			SpawnLocationCP3.SetLocation(FVector(Posicion3.X, Posicion3.Y, Posicion3.Z));
			APlataforma* cp3 = GetWorld()->SpawnActor<APlataforma>(APlataforma::StaticClass(), SpawnLocationCP3);
			Posicion3.Z = Posicion3.Z + 250.0f;
			if (i % 2 == 1) {
				if (cp3 != nullptr) {
					cp3->setbMoverVerticalmente(true);
				}
				Posicion3.Y = Posicion3.Y - 500.0f;
			}
			else {
				Posicion3.Y = Posicion3.Y + 500.0f;
			}
		}
	}
	break;

	default:
		UE_LOG(LogTemp, Warning, TEXT("Número de plataformas no reconocido: %d"), num);
		break;
	}

	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Cyan, FString::Printf(TEXT("Num de plataformas generadas %d"), num));
}

void ANv1::EstablecerObstaculos(int32 num)
{

	// Código para establecer obstáculos
	// (Comentado en tu ejemplo original)

}

void ANv1::EstablecerEscaleras(int32 num)
{
	FVector posicionInicialEscalera = FVector(2300.0f, 1300.0f, 3950.f);
	FRotator rotacionInicialEscalera = FRotator(0.0f, 90.0f, 0.0f);

	FTransform SpawnLocationE;

	switch (num) {

	case 4: {
		for (int i = 0; i < 4; i++) {
			AEscalera* esc = GetWorld()->SpawnActor<AEscalera>(AEscalera::StaticClass(), SpawnLocationE);
			esc->SetActorLocation(FVector(posicionInicialEscalera));
			esc->SetActorRotation(FQuat(rotacionInicialEscalera));
			posicionInicialEscalera.Y = posicionInicialEscalera.Y + 200.0f;
			posicionInicialEscalera.Z = posicionInicialEscalera.Z + 1600.0f;
		}
		break;
	}
  }

}








//void ANv1::EstablecerObstaculos(int32 num)
//{
////	FVector posicionInicialObstaculo = FVector(2169.0f, -1310.0f, 150.0f);
////	FRotator rotacionInicialObstaculo = FRotator(0.0f, 0.0f, 0.0f);
////	FTransform SpawnLocationO;
////	for (int i = 0; i < 5; i++) {
////		AObstaculos* obst = GetWorld()->SpawnActor<AObstaculos>(AObstaculos::StaticClass(), SpawnLocationO);
////		obst->SetActorLocation(FVector(posicionInicialObstaculo.X, posicionInicialObstaculo.Y, posicionInicialObstaculo.Z));
////		
////		posicionInicialObstaculo.Y = posicionInicialObstaculo.Y + 200.0f;
////	}
////
//}
//
//void ANv1::EstablecerEscaleras(int32 num)
//{
////	FVector posicionInicialEscalera = FVector(2300.0f, 1300.0f, 3950.f);
////	FRotator rotacionInicialEscalera = FRotator(0.0f, 90.0f, 0.0f);
////	FTransform SpawnLocationE;
////
////	switch (num) {
////
////	case 1: {
////
////
////		for (int i = 0; i < 2; i++) {
////			AEscalera* esc = GetWorld()->SpawnActor<AEscalera>(AEscalera::StaticClass(), SpawnLocationE);
////			esc->SetActorLocation(FVector(posicionInicialEscalera));
////			esc->SetActorRotation(FQuat(rotacionInicialEscalera));
////			posicionInicialEscalera.Y = posicionInicialEscalera.Y + 200.0f;
////
////			posicionInicialEscalera.Z = posicionInicialEscalera.Z + 1600.0f;
////		}
////		break;
////	}
////
////	
//}
//
