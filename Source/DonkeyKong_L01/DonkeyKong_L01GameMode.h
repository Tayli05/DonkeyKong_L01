// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "IDecorator.h"
#include "GameFramework/GameModeBase.h"
#include "DonkeyKong_L01GameMode.generated.h"


UCLASS(minimalapi)
class ADonkeyKong_L01GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ADonkeyKong_L01GameMode();

protected:
		// Called when the game starts or when spawned
		virtual void BeginPlay() override;

	public:	
		// Called every frame
		virtual void Tick(float DeltaTime) override;

protected:
		FTimerHandle TimerHandle;
		class ADirector* director;
		class ANv1Concreto* nv1;
		void ConstruirNv2();

		UPROPERTY()
		class AJugador* jugador;


private:

	IIDecorator* Personaje;

};



