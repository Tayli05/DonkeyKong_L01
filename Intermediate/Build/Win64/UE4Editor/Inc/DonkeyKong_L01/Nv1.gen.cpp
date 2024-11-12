// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L01/Nv1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNv1() {}
// Cross Module References
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_ANv1_NoRegister();
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_ANv1();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L01();
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_UIEstablecedor_NoRegister();
// End Cross Module References
	void ANv1::StaticRegisterNativesANv1()
	{
	}
	UClass* Z_Construct_UClass_ANv1_NoRegister()
	{
		return ANv1::StaticClass();
	}
	struct Z_Construct_UClass_ANv1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANv1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANv1_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nv1.h" },
		{ "ModuleRelativePath", "Nv1.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANv1_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIEstablecedor_NoRegister, (int32)VTABLE_OFFSET(ANv1, IIEstablecedor), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANv1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANv1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANv1_Statics::ClassParams = {
		&ANv1::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANv1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANv1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANv1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANv1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANv1, 3147522851);
	template<> DONKEYKONG_L01_API UClass* StaticClass<ANv1>()
	{
		return ANv1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANv1(Z_Construct_UClass_ANv1, &ANv1::StaticClass, TEXT("/Script/DonkeyKong_L01"), TEXT("ANv1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANv1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
