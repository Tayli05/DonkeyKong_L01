// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L01/EnemigoAnimalLeon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoAnimalLeon() {}
// Cross Module References
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_AEnemigoAnimalLeon_NoRegister();
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_AEnemigoAnimalLeon();
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_AEnemigo();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L01();
// End Cross Module References
	void AEnemigoAnimalLeon::StaticRegisterNativesAEnemigoAnimalLeon()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoAnimalLeon_NoRegister()
	{
		return AEnemigoAnimalLeon::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoAnimalLeon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoAnimalLeon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigo,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoAnimalLeon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemigoAnimalLeon.h" },
		{ "ModuleRelativePath", "EnemigoAnimalLeon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoAnimalLeon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoAnimalLeon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoAnimalLeon_Statics::ClassParams = {
		&AEnemigoAnimalLeon::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoAnimalLeon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAnimalLeon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoAnimalLeon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoAnimalLeon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoAnimalLeon, 460474238);
	template<> DONKEYKONG_L01_API UClass* StaticClass<AEnemigoAnimalLeon>()
	{
		return AEnemigoAnimalLeon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoAnimalLeon(Z_Construct_UClass_AEnemigoAnimalLeon, &AEnemigoAnimalLeon::StaticClass, TEXT("/Script/DonkeyKong_L01"), TEXT("AEnemigoAnimalLeon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoAnimalLeon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
