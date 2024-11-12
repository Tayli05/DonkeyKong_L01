// Fill out your copyright notice in the Description page of Project Settings.


#include "DecoratorBase.h"

// Sets default values
ADecoratorBase::ADecoratorBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADecoratorBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADecoratorBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADecoratorBase::SetPersonaje(AActor* _Personaje)
{
	Personaje= Cast<IIDecorator>(_Personaje);
	if(!Personaje)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue,
			FString::Printf(TEXT("No se realizo la conversion a tipo Personaje")));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue,
			FString::Printf(TEXT("Se realizo la conversion a tipo Personaje")));
	}

}

void ADecoratorBase::Recoger()
{


}

int ADecoratorBase::ObtenerPoder()
{
	return 0;
}


void ADecoratorBase::Morir()
{

}



