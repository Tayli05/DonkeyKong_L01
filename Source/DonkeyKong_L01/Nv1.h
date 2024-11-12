// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "IEstablecedor.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Nv1.generated.h"

class APlataforma;
class AObstaculos;

UCLASS()
class DONKEYKONG_L01_API ANv1 : public AActor, public IIEstablecedor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ANv1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void EstablecerPlataformas(int32 num) override;
	virtual void EstablecerObstaculos(int32 num) override;
	virtual void EstablecerEscaleras(int32 num) override;

	TArray<APlataforma*> componentesPlataforma;
	TArray<int32> aComponentesPlataformaMoviles;
};








//// Fill out your copyright notice in the Description page of Project Settings.
//
//#pragma once
//#include "IEstablecedor.h"
//#include "CoreMinimal.h"
//#include "GameFramework/Actor.h"
//#include "Nv1.generated.h"
//class APlataforma;
//class AObstaculos;
//UCLASS()
//class DONKEYKONG_L01_API ANv1 : public AActor , public IIEstablecedor
//{
//	GENERATED_BODY()
//	
//public:	
//	// Sets default values for this actor's properties
//	ANv1();
//
//protected:
//	// Called when the game starts or when spawned
//	virtual void BeginPlay() override;
//
//public:	
//	// Called every frame
//	virtual void Tick(float DeltaTime) override;
//
//
//	virtual void EstablecerPlataformas(int32 num) override;
//	virtual void EstablecerObstaculos(int32 num) override;
//	virtual void EstablecerEscaleras(int32 num) override;
//
//	TArray<APlataforma*> componentesPlataforma;
//
//	TArray<int32> aComponentesPlataformaMoviles;
//
//	//AObstaculos* Obst;
//
//};
