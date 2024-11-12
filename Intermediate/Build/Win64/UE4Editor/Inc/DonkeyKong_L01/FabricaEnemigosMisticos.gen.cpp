// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L01/FabricaEnemigosMisticos.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaEnemigosMisticos() {}
// Cross Module References
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_AFabricaEnemigosMisticos_NoRegister();
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_AFabricaEnemigosMisticos();
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_AFabricaEnemigos();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L01();
// End Cross Module References
	void AFabricaEnemigosMisticos::StaticRegisterNativesAFabricaEnemigosMisticos()
	{
	}
	UClass* Z_Construct_UClass_AFabricaEnemigosMisticos_NoRegister()
	{
		return AFabricaEnemigosMisticos::StaticClass();
	}
	struct Z_Construct_UClass_AFabricaEnemigosMisticos_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabricaEnemigosMisticos_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFabricaEnemigos,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabricaEnemigosMisticos_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FabricaEnemigosMisticos.h" },
		{ "ModuleRelativePath", "FabricaEnemigosMisticos.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabricaEnemigosMisticos_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaEnemigosMisticos>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFabricaEnemigosMisticos_Statics::ClassParams = {
		&AFabricaEnemigosMisticos::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_AFabricaEnemigosMisticos_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaEnemigosMisticos_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabricaEnemigosMisticos()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFabricaEnemigosMisticos_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFabricaEnemigosMisticos, 580711609);
	template<> DONKEYKONG_L01_API UClass* StaticClass<AFabricaEnemigosMisticos>()
	{
		return AFabricaEnemigosMisticos::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFabricaEnemigosMisticos(Z_Construct_UClass_AFabricaEnemigosMisticos, &AFabricaEnemigosMisticos::StaticClass, TEXT("/Script/DonkeyKong_L01"), TEXT("AFabricaEnemigosMisticos"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaEnemigosMisticos);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
