// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L01/Nv2Concreto.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNv2Concreto() {}
// Cross Module References
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_ANv2Concreto_NoRegister();
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_ANv2Concreto();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L01();
// End Cross Module References
	void ANv2Concreto::StaticRegisterNativesANv2Concreto()
	{
	}
	UClass* Z_Construct_UClass_ANv2Concreto_NoRegister()
	{
		return ANv2Concreto::StaticClass();
	}
	struct Z_Construct_UClass_ANv2Concreto_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANv2Concreto_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANv2Concreto_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nv2Concreto.h" },
		{ "ModuleRelativePath", "Nv2Concreto.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANv2Concreto_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANv2Concreto>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANv2Concreto_Statics::ClassParams = {
		&ANv2Concreto::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANv2Concreto_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANv2Concreto_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANv2Concreto()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANv2Concreto_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANv2Concreto, 2227874286);
	template<> DONKEYKONG_L01_API UClass* StaticClass<ANv2Concreto>()
	{
		return ANv2Concreto::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANv2Concreto(Z_Construct_UClass_ANv2Concreto, &ANv2Concreto::StaticClass, TEXT("/Script/DonkeyKong_L01"), TEXT("ANv2Concreto"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANv2Concreto);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
