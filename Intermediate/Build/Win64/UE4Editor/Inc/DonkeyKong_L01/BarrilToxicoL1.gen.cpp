// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L01/BarrilToxicoL1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBarrilToxicoL1() {}
// Cross Module References
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_ABarrilToxicoL1_NoRegister();
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_ABarrilToxicoL1();
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_ABarril();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L01();
// End Cross Module References
	void ABarrilToxicoL1::StaticRegisterNativesABarrilToxicoL1()
	{
	}
	UClass* Z_Construct_UClass_ABarrilToxicoL1_NoRegister()
	{
		return ABarrilToxicoL1::StaticClass();
	}
	struct Z_Construct_UClass_ABarrilToxicoL1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABarrilToxicoL1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABarril,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarrilToxicoL1_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BarrilToxicoL1.h" },
		{ "ModuleRelativePath", "BarrilToxicoL1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABarrilToxicoL1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABarrilToxicoL1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABarrilToxicoL1_Statics::ClassParams = {
		&ABarrilToxicoL1::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABarrilToxicoL1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABarrilToxicoL1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABarrilToxicoL1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABarrilToxicoL1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABarrilToxicoL1, 3946270586);
	template<> DONKEYKONG_L01_API UClass* StaticClass<ABarrilToxicoL1>()
	{
		return ABarrilToxicoL1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABarrilToxicoL1(Z_Construct_UClass_ABarrilToxicoL1, &ABarrilToxicoL1::StaticClass, TEXT("/Script/DonkeyKong_L01"), TEXT("ABarrilToxicoL1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABarrilToxicoL1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
