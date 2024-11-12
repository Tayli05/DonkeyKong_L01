// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaBarriles.h"


// Sets default values
AFabricaBarriles::AFabricaBarriles()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFabricaBarriles::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AFabricaBarriles::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

ABarril* AFabricaBarriles:: CrearBarril(FString _tipoBarril)
{

	ABarril* barril = EncargarTipoBarril(_tipoBarril);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Creando Barril %s"), *barril->GetNombreBarril()));
	barril->RotarBarril();
	barril->Explotar();
	barril->Construir();
	return barril;
	
}
