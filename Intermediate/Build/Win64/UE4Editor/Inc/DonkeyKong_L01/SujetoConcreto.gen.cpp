// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L01/SujetoConcreto.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSujetoConcreto() {}
// Cross Module References
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_ASujetoConcreto_NoRegister();
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_ASujetoConcreto();
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_ASujeto();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L01();
// End Cross Module References
	void ASujetoConcreto::StaticRegisterNativesASujetoConcreto()
	{
	}
	UClass* Z_Construct_UClass_ASujetoConcreto_NoRegister()
	{
		return ASujetoConcreto::StaticClass();
	}
	struct Z_Construct_UClass_ASujetoConcreto_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASujetoConcreto_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASujeto,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASujetoConcreto_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SujetoConcreto.h" },
		{ "ModuleRelativePath", "SujetoConcreto.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASujetoConcreto_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASujetoConcreto>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASujetoConcreto_Statics::ClassParams = {
		&ASujetoConcreto::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASujetoConcreto_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASujetoConcreto_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASujetoConcreto()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASujetoConcreto_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASujetoConcreto, 3391013341);
	template<> DONKEYKONG_L01_API UClass* StaticClass<ASujetoConcreto>()
	{
		return ASujetoConcreto::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASujetoConcreto(Z_Construct_UClass_ASujetoConcreto, &ASujetoConcreto::StaticClass, TEXT("/Script/DonkeyKong_L01"), TEXT("ASujetoConcreto"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASujetoConcreto);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
