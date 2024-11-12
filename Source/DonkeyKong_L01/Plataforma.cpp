// Fill out your copyright notice in the Description page of Project Settings.


#include "Plataforma.h"
#include "Components/StaticMeshComponent.h"
// Sets default values
APlataforma::APlataforma()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Geometry/DonkeyKong/Donkey_Kong_Level_1_Platform049.Donkey_Kong_Level_1_Platform049'"));
	MeshPlataforma = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	MeshPlataforma->SetStaticMesh(MeshAsset.Object);
	RootComponent = MeshPlataforma;

	MeshPlataforma->SetWorldScale3D(FVector(4.0f, 4.5f, 3.0f));

	bMoverHorizontalmente = false;
	bMoverVerticalmente = false;
	bDetener = false;

	posicionInicio = FVector(0.0f, 0.0f, 0.0f);
	posicionFinal = FVector(0.0f, 0.0f, 0.0f);
	velocidad = 2.0f;
	anchoComponentePlataforma = 300.0f;
	altoComponentePlataforma = 50.0f;
	fondoComponentePlataforma = 200.0f;

	desplazamientoComponentePlataforma = FVector(0.0f, 1.0f, 1.0f);

	posicionActual = FVector(0.0f, 0.0f, 0.0f);
	posicionInicio = FVector(0.0f, 0.0f, 0.0f);
	posicionFinal = FVector(0.0f, 0.0f, 0.0f);
}

// Called when the game starts or when spawned
void APlataforma::BeginPlay()
{
	Super::BeginPlay();
	
	posicionActual = GetActorLocation();
	posicionInicio = FVector(posicionActual.X - desplazamientoComponentePlataforma.X, posicionActual.Y - anchoComponentePlataforma - desplazamientoComponentePlataforma.Y, posicionActual.Z - altoComponentePlataforma * 5 - desplazamientoComponentePlataforma.Z);
	posicionFinal = FVector(posicionActual.X + desplazamientoComponentePlataforma.X, posicionActual.Y + anchoComponentePlataforma + desplazamientoComponentePlataforma.Y, posicionActual.Z + altoComponentePlataforma * 5 + desplazamientoComponentePlataforma.Z);
	incrementoZ = 2.0f;

	bDeIzquierdaADerecha = true;
	bDeArribaAAbajo = true;
	dDeAdelanteAAtras = true;

}

// Called every frame
void APlataforma::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!bDetener) {
		if (bMoverVerticalmente)
		{
			if (bDeArribaAAbajo)
			{
				posicionActual.Z += desplazamientoComponentePlataforma.Z * velocidad;
				if (posicionActual.Z > posicionFinal.Z)
				{
					bDeArribaAAbajo = false;
				}
			}
			else
			{
				posicionActual.Z -= desplazamientoComponentePlataforma.Z * velocidad;
				if (posicionActual.Z < posicionInicio.Z)
				{
					bDeArribaAAbajo = true;
				}
			}

		}

		if (bMoverHorizontalmente)
		{
			if (bDeIzquierdaADerecha)
			{
				posicionActual.Y += desplazamientoComponentePlataforma.Y * velocidad;
				if (posicionActual.Y > posicionFinal.Y)
				{
					bDeIzquierdaADerecha = false;
				}
			}
			else
			{
				posicionActual.Y -= desplazamientoComponentePlataforma.Y * velocidad;
				if (posicionActual.Y < posicionInicio.Y)
				{
					bDeIzquierdaADerecha = true;
				}
			}
		}
	}

	SetActorLocation(posicionActual);


}

