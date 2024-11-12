// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L01/FacadeEnemigos.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFacadeEnemigos() {}
// Cross Module References
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_AFacadeEnemigos_NoRegister();
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_AFacadeEnemigos();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L01();
// End Cross Module References
	void AFacadeEnemigos::StaticRegisterNativesAFacadeEnemigos()
	{
	}
	UClass* Z_Construct_UClass_AFacadeEnemigos_NoRegister()
	{
		return AFacadeEnemigos::StaticClass();
	}
	struct Z_Construct_UClass_AFacadeEnemigos_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tareas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tareas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tareas;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFacadeEnemigos_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFacadeEnemigos_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FacadeEnemigos.h" },
		{ "ModuleRelativePath", "FacadeEnemigos.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFacadeEnemigos_Statics::NewProp_Tareas_Inner = { "Tareas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFacadeEnemigos_Statics::NewProp_Tareas_MetaData[] = {
		{ "ModuleRelativePath", "FacadeEnemigos.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFacadeEnemigos_Statics::NewProp_Tareas = { "Tareas", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFacadeEnemigos, Tareas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFacadeEnemigos_Statics::NewProp_Tareas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFacadeEnemigos_Statics::NewProp_Tareas_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFacadeEnemigos_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFacadeEnemigos_Statics::NewProp_Tareas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFacadeEnemigos_Statics::NewProp_Tareas,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFacadeEnemigos_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFacadeEnemigos>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFacadeEnemigos_Statics::ClassParams = {
		&AFacadeEnemigos::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFacadeEnemigos_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFacadeEnemigos_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFacadeEnemigos_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFacadeEnemigos_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFacadeEnemigos()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFacadeEnemigos_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFacadeEnemigos, 2827225359);
	template<> DONKEYKONG_L01_API UClass* StaticClass<AFacadeEnemigos>()
	{
		return AFacadeEnemigos::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFacadeEnemigos(Z_Construct_UClass_AFacadeEnemigos, &AFacadeEnemigos::StaticClass, TEXT("/Script/DonkeyKong_L01"), TEXT("AFacadeEnemigos"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFacadeEnemigos);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
