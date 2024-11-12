// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L01/Sujeto.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSujeto() {}
// Cross Module References
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_ASujeto_NoRegister();
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_ASujeto();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L01();
// End Cross Module References
	void ASujeto::StaticRegisterNativesASujeto()
	{
	}
	UClass* Z_Construct_UClass_ASujeto_NoRegister()
	{
		return ASujeto::StaticClass();
	}
	struct Z_Construct_UClass_ASujeto_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASujeto_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASujeto_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sujeto.h" },
		{ "ModuleRelativePath", "Sujeto.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASujeto_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASujeto>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASujeto_Statics::ClassParams = {
		&ASujeto::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASujeto_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASujeto_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASujeto()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASujeto_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASujeto, 1353428023);
	template<> DONKEYKONG_L01_API UClass* StaticClass<ASujeto>()
	{
		return ASujeto::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASujeto(Z_Construct_UClass_ASujeto, &ASujeto::StaticClass, TEXT("/Script/DonkeyKong_L01"), TEXT("ASujeto"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASujeto);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
