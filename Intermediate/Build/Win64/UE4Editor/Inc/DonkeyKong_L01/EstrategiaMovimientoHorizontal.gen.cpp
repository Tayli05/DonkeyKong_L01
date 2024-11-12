// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L01/EstrategiaMovimientoHorizontal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstrategiaMovimientoHorizontal() {}
// Cross Module References
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_AEstrategiaMovimientoHorizontal_NoRegister();
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_AEstrategiaMovimientoHorizontal();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L01();
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_UIEstrategiaMovimiento_NoRegister();
// End Cross Module References
	void AEstrategiaMovimientoHorizontal::StaticRegisterNativesAEstrategiaMovimientoHorizontal()
	{
	}
	UClass* Z_Construct_UClass_AEstrategiaMovimientoHorizontal_NoRegister()
	{
		return AEstrategiaMovimientoHorizontal::StaticClass();
	}
	struct Z_Construct_UClass_AEstrategiaMovimientoHorizontal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstrategiaMovimientoHorizontal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstrategiaMovimientoHorizontal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstrategiaMovimientoHorizontal.h" },
		{ "ModuleRelativePath", "EstrategiaMovimientoHorizontal.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstrategiaMovimientoHorizontal_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIEstrategiaMovimiento_NoRegister, (int32)VTABLE_OFFSET(AEstrategiaMovimientoHorizontal, IIEstrategiaMovimiento), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstrategiaMovimientoHorizontal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstrategiaMovimientoHorizontal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstrategiaMovimientoHorizontal_Statics::ClassParams = {
		&AEstrategiaMovimientoHorizontal::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEstrategiaMovimientoHorizontal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstrategiaMovimientoHorizontal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstrategiaMovimientoHorizontal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstrategiaMovimientoHorizontal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstrategiaMovimientoHorizontal, 2782802205);
	template<> DONKEYKONG_L01_API UClass* StaticClass<AEstrategiaMovimientoHorizontal>()
	{
		return AEstrategiaMovimientoHorizontal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstrategiaMovimientoHorizontal(Z_Construct_UClass_AEstrategiaMovimientoHorizontal, &AEstrategiaMovimientoHorizontal::StaticClass, TEXT("/Script/DonkeyKong_L01"), TEXT("AEstrategiaMovimientoHorizontal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstrategiaMovimientoHorizontal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
