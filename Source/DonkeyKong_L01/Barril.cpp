// Fill out your copyright notice in the Description page of Project Settings.


#include "Barril.h"

// Sets default values
ABarril::ABarril()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/* ConstructorHelpers::FObjectFinder<UStaticMesh> BarrilMeshAsset(TEXT("StaticMesh'/Game/Geometry/Meshes/1M_Cube.1M_Cube'"));*/
	BarrilMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh'/Game/Geometry/DonkeyKong/Donkey_Kong_Level_1_Barrel.Donkey_Kong_Level_1_Barrel'"));
	BarrilMesh->SetupAttachment(RootComponent);
	RootComponent = BarrilMesh;

	BarrilMesh->SetWorldScale3D(FVector(3.5f, 3.5f, 3.5f));


	//ACTIVAR FISICAS
	/*BarrilMesh->SetSimulatePhysics(true);
	BarrilMesh->SetMobility(EComponentMobility::Movable);
	BarrilMesh->SetEnableGravity(true);
	FVector AngularVelocity = BarrilMesh->GetPhysicsAngularVelocityInDegrees();
	AngularVelocity.X = 0;
	AngularVelocity.Y = 0;
	BarrilMesh->SetPhysicsAngularVelocityInDegrees(AngularVelocity);*/



}

// Called when the game starts or when spawned
void ABarril::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABarril::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABarril::RotarBarril()
{
}

void ABarril::Explotar()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Explotando Barril %s"), *GetNombreBarril()));
}

void ABarril::Construir()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Construyendo Barril %s"), *GetNombreBarril()));
}

FString ABarril::GetNombreBarril()
{
	return NombreBarril;
}

void ABarril::SpawnBarril()
{
	

		// FVector spawnLocation = FVector(1220.0f, 1450.0f, 3750.0f);
		FVector spawnLocation = FVector(2150.0f, 2800.0f, 1050.0f);
		FRotator spawnRotation = FRotator(0.0f, 90.0f, 90.0f);

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Spawning Barril")));




}

