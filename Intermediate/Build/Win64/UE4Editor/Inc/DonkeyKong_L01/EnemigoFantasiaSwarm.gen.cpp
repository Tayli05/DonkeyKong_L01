// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L01/EnemigoFantasiaSwarm.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoFantasiaSwarm() {}
// Cross Module References
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_AEnemigoFantasiaSwarm_NoRegister();
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_AEnemigoFantasiaSwarm();
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_AEnemigo();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L01();
// End Cross Module References
	void AEnemigoFantasiaSwarm::StaticRegisterNativesAEnemigoFantasiaSwarm()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoFantasiaSwarm_NoRegister()
	{
		return AEnemigoFantasiaSwarm::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoFantasiaSwarm_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoFantasiaSwarm_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigo,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoFantasiaSwarm_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemigoFantasiaSwarm.h" },
		{ "ModuleRelativePath", "EnemigoFantasiaSwarm.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoFantasiaSwarm_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoFantasiaSwarm>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoFantasiaSwarm_Statics::ClassParams = {
		&AEnemigoFantasiaSwarm::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoFantasiaSwarm_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoFantasiaSwarm_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoFantasiaSwarm()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoFantasiaSwarm_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoFantasiaSwarm, 2406449100);
	template<> DONKEYKONG_L01_API UClass* StaticClass<AEnemigoFantasiaSwarm>()
	{
		return AEnemigoFantasiaSwarm::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoFantasiaSwarm(Z_Construct_UClass_AEnemigoFantasiaSwarm, &AEnemigoFantasiaSwarm::StaticClass, TEXT("/Script/DonkeyKong_L01"), TEXT("AEnemigoFantasiaSwarm"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoFantasiaSwarm);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
