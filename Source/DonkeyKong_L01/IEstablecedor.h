// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IEstablecedor.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIEstablecedor : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class DONKEYKONG_L01_API IIEstablecedor
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual void EstablecerPlataformas(int32 num) = 0;
	virtual void EstablecerEscaleras(int32 num) = 0;
	virtual void EstablecerObstaculos(int32 num) = 0;

};
