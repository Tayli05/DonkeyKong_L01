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

	//FVector SpawnLocation = GetActorLocation() + GetActorForwardVector() * -100 + FVector(0.0f, -100.0f, 0.0f);//ub
	FVector  Proj = FVector(1210.0f, -1240.0f, 900.0f);
	proyectil = GetWorld()->SpawnActor<AProjectile>(AProjectile::StaticClass(), Proj, FRotator::ZeroRotator);


}



void AAdapterProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
}

void AAdapterProjectile::Cargar()
{

	
	if (proyectil) {

		FVector SpawnDirection = FVector(0.0f, 1.0f, 0.0f);
		proyectil->FireInDirection(SpawnDirection);

	}

}



