// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L01/Nv1Concreto.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNv1Concreto() {}
// Cross Module References
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_ANv1Concreto_NoRegister();
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_ANv1Concreto();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L01();
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_UIConstructorN1_NoRegister();
// End Cross Module References
	void ANv1Concreto::StaticRegisterNativesANv1Concreto()
	{
	}
	UClass* Z_Construct_UClass_ANv1Concreto_NoRegister()
	{
		return ANv1Concreto::StaticClass();
	}
	struct Z_Construct_UClass_ANv1Concreto_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANv1Concreto_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANv1Concreto_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nv1Concreto.h" },
		{ "ModuleRelativePath", "Nv1Concreto.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANv1Concreto_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIConstructorN1_NoRegister, (int32)VTABLE_OFFSET(ANv1Concreto, IIConstructorN1), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANv1Concreto_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANv1Concreto>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANv1Concreto_Statics::ClassParams = {
		&ANv1Concreto::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANv1Concreto_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANv1Concreto_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANv1Concreto()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANv1Concreto_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANv1Concreto, 1830603015);
	template<> DONKEYKONG_L01_API UClass* StaticClass<ANv1Concreto>()
	{
		return ANv1Concreto::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANv1Concreto(Z_Construct_UClass_ANv1Concreto, &ANv1Concreto::StaticClass, TEXT("/Script/DonkeyKong_L01"), TEXT("ANv1Concreto"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANv1Concreto);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
