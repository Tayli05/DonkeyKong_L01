// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L01/BarrilFlameanteL1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBarrilFlameanteL1() {}
// Cross Module References
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_ABarrilFlameanteL1_NoRegister();
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_ABarrilFlameanteL1();
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_ABarril();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L01();
// End Cross Module References
	void ABarrilFlameanteL1::StaticRegisterNativesABarrilFlameanteL1()
	{
	}
	UClass* Z_Construct_UClass_ABarrilFlameanteL1_NoRegister()
	{
		return ABarrilFlameanteL1::StaticClass();
	}
	struct Z_Construct_UClass_ABarrilFlameanteL1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABarrilFlameanteL1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABarril,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarrilFlameanteL1_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BarrilFlameanteL1.h" },
		{ "ModuleRelativePath", "BarrilFlameanteL1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABarrilFlameanteL1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABarrilFlameanteL1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABarrilFlameanteL1_Statics::ClassParams = {
		&ABarrilFlameanteL1::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABarrilFlameanteL1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABarrilFlameanteL1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABarrilFlameanteL1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABarrilFlameanteL1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABarrilFlameanteL1, 984987221);
	template<> DONKEYKONG_L01_API UClass* StaticClass<ABarrilFlameanteL1>()
	{
		return ABarrilFlameanteL1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABarrilFlameanteL1(Z_Construct_UClass_ABarrilFlameanteL1, &ABarrilFlameanteL1::StaticClass, TEXT("/Script/DonkeyKong_L01"), TEXT("ABarrilFlameanteL1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABarrilFlameanteL1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif