// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L01/Monkey.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonkey() {}
// Cross Module References
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_AMonkey_NoRegister();
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_AMonkey();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L01();
// End Cross Module References
	void AMonkey::StaticRegisterNativesAMonkey()
	{
	}
	UClass* Z_Construct_UClass_AMonkey_NoRegister()
	{
		return AMonkey::StaticClass();
	}
	struct Z_Construct_UClass_AMonkey_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMonkey_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonkey_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Monkey.h" },
		{ "ModuleRelativePath", "Monkey.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMonkey_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonkey>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMonkey_Statics::ClassParams = {
		&AMonkey::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMonkey_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMonkey_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMonkey()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMonkey_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMonkey, 1205729087);
	template<> DONKEYKONG_L01_API UClass* StaticClass<AMonkey>()
	{
		return AMonkey::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMonkey(Z_Construct_UClass_AMonkey, &AMonkey::StaticClass, TEXT("/Script/DonkeyKong_L01"), TEXT("AMonkey"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMonkey);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
