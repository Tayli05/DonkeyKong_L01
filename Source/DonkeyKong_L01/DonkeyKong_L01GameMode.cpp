// Copyright Epic Games, Inc. All Rights Reserved.

#include "DonkeyKong_L01GameMode.h"
#include "DonkeyKong_L01Character.h"
#include "UObject/ConstructorHelpers.h"
//Factory Method
#include "FabricaBarriles.h"
#include "FabricaBarrilesFlameantes.h"
#include "FabricaBarrilesToxicos.h"
//Abstract Factory
#include "FabricaEnemigos.h"
#include "FabricaEnemigosAnimales.h"
#include "FabricaEnemigosMisticos.h"
#include "FabricaEnemigosFantasia.h"
//Builder
#include "Director.h"
#include "Nv1Concreto.h"
//Facade
#include "FacadeEnemigos.h"
//Adapter
#include "AdapterProjectile.h"
#include "Jugador.h"
//Decorator
#include "Personaje.h"
#include "InvulnerabilidadD.h"
#include "VelocidadExtra_D.h"
#include "SaltoAltoD.h"
//Strategy
#include "Martillo.h"
#include "EstrategiaMovimientoHorizontal.h"
#include "EstrategiaMovimientoAleatorio.h"
//Observer 
#include "SujetoConcreto.h"
#include "ObservadorConcreto.h"


ADonkeyKong_L01GameMode::ADonkeyKong_L01GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ADonkeyKong_L01GameMode::BeginPlay()
{

	//fabricas de barriles -- Factory Method
	AFabricaBarriles* FabricaFlameante = GetWorld()->SpawnActor<AFabricaBarrilesFlameantes>(AFabricaBarrilesFlameantes::StaticClass());
	FabricaFlameante->EncargarTipoBarril("Flameante1");
	FabricaFlameante->EncargarTipoBarril("Flameante2");

	AFabricaBarriles* FabricaToxico = GetWorld()->SpawnActor<AFabricaBarrilesToxicos>(AFabricaBarrilesToxicos::StaticClass());
	FabricaToxico->EncargarTipoBarril("Toxico1");
	FabricaToxico->EncargarTipoBarril("Toxico2");

	//fabricas de enemigos -- Abstract Factory

	AFabricaEnemigos* fabricaEnemigos;
	//fabricaEnemigos = NewObject<AFabricaEnemigosFantasia>();
	fabricaEnemigos = NewObject<AFabricaEnemigosAnimales>();
	//fabricaEnemigos = NewObject<AFabricaEnemigosMisticos>();

	AEnemigo* enemigoTerrestre01 = fabricaEnemigos->FabricarEnemigoTerrestre();
	AEnemigo* enemigoAereo01 = fabricaEnemigos->FabricarEnemigoAereo();
	AEnemigo* enemigoAcuatico01 = fabricaEnemigos->FabricarEnemigoAcuatico();
	FTransform SpawnLocationEnemigo;
	SpawnLocationEnemigo.SetLocation(FVector(1260.0f, 0.0f + float(FMath::RandRange(-500, 500)), 360.0f));
	SpawnLocationEnemigo.SetRotation(FQuat(FRotator(0.0f, 0.0f, 0.0f)));

	AEnemigo* enemigoSpawned = GetWorld()->SpawnActor<AEnemigo>(enemigoTerrestre01->GetClass(), SpawnLocationEnemigo);
	AEnemigo* enemigoSpawned2 = GetWorld()->SpawnActor<AEnemigo>(enemigoAereo01->GetClass(), SpawnLocationEnemigo);
	AEnemigo* enemigoSpawned3 = GetWorld()->SpawnActor<AEnemigo>(enemigoAcuatico01->GetClass(), SpawnLocationEnemigo);
	enemigoSpawned3->SetActorLocation(FVector(1500.0f, 600, 260.0f));
	enemigoSpawned3->SetActorRotation(FQuat(FRotator(0.0f, 90.0f, 0.0f)));


	//fabricaEnemigos = NewObject<AFabricaEnemigosFantasia>();
	//AEnemigo* enemigoTerrestre02 = fabricaEnemigos->FabricarEnemigoTerrestre();

	//SpawnLocationEnemigo.SetLocation(FVector(1860.0f, 0.0f + float(FMath::RandRange(-500, 500)), 360.0f));
	//GetWorld()->SpawnActor<AEnemigo>(enemigoTerrestre02->GetClass(), SpawnLocationEnemigo);

	//fabricaEnemigos = NewObject<AFabricaEnemigosMisticos>();
	//AEnemigo* enemigoTerrestre03 = fabricaEnemigos->FabricarEnemigoTerrestre();

	//SpawnLocationEnemigo.SetLocation(FVector(1860.0f, 0.0f + float(FMath::RandRange(-500, 500)), 360.0f));
	//GetWorld()->SpawnActor<AEnemigo>(enemigoTerrestre03->GetClass(), SpawnLocationEnemigo);

	// Builder --creacion de plataformas, escaleras,obstaaculos
	nv1 = GetWorld()->SpawnActor<ANv1Concreto>(ANv1Concreto::StaticClass());
	director = GetWorld()->SpawnActor<ADirector>(ADirector::StaticClass());

	director->EstablecerTipoConstructor(nv1);
	director->construir_nv1();
	
	//Facade
	AFacadeEnemigos* facade = GetWorld()->SpawnActor<AFacadeEnemigos>(AFacadeEnemigos::StaticClass());
	facade->AparecerAnimal();
	facade->MoverAnimal();
	facade->AtacarAnimal();
	facade->DesaparecerAnimal();

	//Adapter
	FVector SpawnLocation = FVector(1010.0f, -1440.0f, 900.0f); // Cambia estos valores a la posici�n deseada
	FRotator SpawnRotation = FRotator(0.0f, 0.0f, 0.0f); // Define la rotaci�n deseada (opcional)

	AAdapterProjectile * adapterProjectile = GetWorld()->SpawnActor<AAdapterProjectile>(AAdapterProjectile::StaticClass());
	jugador = GetWorld()->SpawnActor<AJugador>(AJugador::StaticClass(), SpawnLocation, SpawnRotation);
	jugador->setAdapter(adapterProjectile);
	jugador->Cargar();

	//Decorator P
	FVector Pers = FVector(1620.0f, -1260.0f, 220.0f); // Cambia estos valores a la posici�n deseada
	APersonaje* personaje = GetWorld()->SpawnActor<APersonaje>(APersonaje::StaticClass(), Pers,FRotator::ZeroRotator);
	
	AInvulnerabilidadD* invulnerabilidad = GetWorld()->SpawnActor<AInvulnerabilidadD>(AInvulnerabilidadD::StaticClass());
	invulnerabilidad->SetPersonaje(personaje);
	Personaje = invulnerabilidad;
	Personaje->Empezar();

	GEngine-> AddOnScreenDebugMessage(-1, 30.f, FColor::Cyan,
		FString::Printf(TEXT("Jugador ahora esta en %s"), *Personaje->Estado()));
	GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Cyan,
		FString::Printf(TEXT("Jugador ahora tiene los atributos de %s"), *Personaje->ObtenerAtributos()));
	GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Cyan,
		FString::Printf(TEXT("Su duracion es de %.2f"), Personaje->Duracion()));

	//Decorator V
	AVelocidadExtra_D* velocidadExtra = GetWorld()->SpawnActor<AVelocidadExtra_D>(AVelocidadExtra_D::StaticClass());
	velocidadExtra->SetPersonaje(personaje);
	Personaje = velocidadExtra;
	Personaje->Empezar();
	GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Cyan,
		FString::Printf(TEXT("Jugador ahora esta en %s"), *Personaje->Estado()));
	GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Cyan,
		FString::Printf(TEXT("Jugador ahora tiene los atributos de %s"), *Personaje->ObtenerAtributos()));
	GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Cyan,
		FString::Printf(TEXT("Su duracion es de %.2f"), Personaje->Duracion()));
		
	//Decorator S
	ASaltoAltoD* saltoAlto = GetWorld()->SpawnActor<ASaltoAltoD>(ASaltoAltoD::StaticClass());
	saltoAlto->SetPersonaje(personaje);
	Personaje = saltoAlto;
	Personaje->Empezar();
	GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Cyan,
		FString::Printf(TEXT("Jugador ahora esta en %s"), *Personaje->Estado()));
	GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Cyan,
		FString::Printf(TEXT("Jugador ahora tiene los atributos de %s"), *Personaje->ObtenerAtributos()));
	GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Cyan,
		FString::Printf(TEXT("Su duracion es de %.2f"), Personaje->Duracion()));


	//Strategy
	FVector SpawnLocationMartillo = FVector(2520.0f, -1000.0f, 480.0f); // Cambia estos valores a la posici�n deseada
	FRotator SpawnRotationMartillo = FRotator(0.0f, 0.0f, 0.0f); // Define la rotaci�n deseada (opcional)

	AMartillo* martillo = GetWorld()->SpawnActor<AMartillo>(AMartillo::StaticClass(), SpawnLocationMartillo, SpawnRotationMartillo);
	AEstrategiaMovimientoHorizontal* MovimientoHorizontal = GetWorld()->SpawnActor<AEstrategiaMovimientoHorizontal>(AEstrategiaMovimientoHorizontal::StaticClass());
	martillo->AlterarMovimientos(MovimientoHorizontal);
	martillo->Emplear();


	//Observer

	ASujetoConcreto* SujetoConcreto = GetWorld()->SpawnActor<ASujetoConcreto>(ASujetoConcreto::StaticClass());
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Magenta,FString::Printf(TEXT("Sujeto creado")));
	AObservadorConcreto* ObservadorConcreto = GetWorld()->SpawnActor<AObservadorConcreto>(AObservadorConcreto::StaticClass());
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Magenta,FString::Printf(TEXT("Observador creado")));

		

}
void ADonkeyKong_L01GameMode::ConstruirNv2()
{
	director->construir_nv2();
}

void ADonkeyKong_L01GameMode::Tick(float DeltaTime)
{

	Super::Tick(DeltaTime);
}



