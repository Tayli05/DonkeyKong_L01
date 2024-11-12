// Fill out your copyright notice in the Description page of Project Settings.


#include "AdapterProjectile.h"
#include "Projectile.h"
#include "GameFramework/Actor.h"


// Sets default values
AAdapterProjectile::AAdapterProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAdapterProjectile::BeginPlay()
{
	Super::BeginPlay();

	FVector Location = FVector(1170, 570, 200);
	FRotator Rotation = FRotator(0, 0, 0);
	FTransform SpawnLocationP;

	// Crear el proyectil
	projectile1 = GetWorld()->SpawnActor<AProjectile>(AProjectile::StaticClass(), SpawnLocationP);
	projectile1->SetActorLocation(Location);
	projectile1->SetActorRotation(Rotation);
	if (!projectile1)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("Error: No se pudo crear el proyectil"));
	}

}

void AAdapterProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAdapterProjectile::Cargar()
{
	if (projectile1)
	{
		projectile1->Disparar();
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("Cargar(): No se puede disparar porque el proyectil es null"));
	}

}

