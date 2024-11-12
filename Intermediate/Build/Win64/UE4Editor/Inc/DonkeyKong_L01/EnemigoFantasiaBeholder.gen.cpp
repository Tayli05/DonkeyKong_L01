// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L01/EnemigoFantasiaBeholder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoFantasiaBeholder() {}
// Cross Module References
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_AEnemigoFantasiaBeholder_NoRegister();
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_AEnemigoFantasiaBeholder();
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_AEnemigo();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L01();
// End Cross Module References
	void AEnemigoFantasiaBeholder::StaticRegisterNativesAEnemigoFantasiaBeholder()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoFantasiaBeholder_NoRegister()
	{
		return AEnemigoFantasiaBeholder::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoFantasiaBeholder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoFantasiaBeholder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigo,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoFantasiaBeholder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemigoFantasiaBeholder.h" },
		{ "ModuleRelativePath", "EnemigoFantasiaBeholder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoFantasiaBeholder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoFantasiaBeholder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoFantasiaBeholder_Statics::ClassParams = {
		&AEnemigoFantasiaBeholder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoFantasiaBeholder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoFantasiaBeholder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoFantasiaBeholder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoFantasiaBeholder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoFantasiaBeholder, 2701078394);
	template<> DONKEYKONG_L01_API UClass* StaticClass<AEnemigoFantasiaBeholder>()
	{
		return AEnemigoFantasiaBeholder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoFantasiaBeholder(Z_Construct_UClass_AEnemigoFantasiaBeholder, &AEnemigoFantasiaBeholder::StaticClass, TEXT("/Script/DonkeyKong_L01"), TEXT("AEnemigoFantasiaBeholder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoFantasiaBeholder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
