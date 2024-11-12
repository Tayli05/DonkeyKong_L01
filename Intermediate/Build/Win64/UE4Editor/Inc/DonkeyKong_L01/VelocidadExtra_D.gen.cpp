// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L01/VelocidadExtra_D.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVelocidadExtra_D() {}
// Cross Module References
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_AVelocidadExtra_D_NoRegister();
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_AVelocidadExtra_D();
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_ADecoratorBase();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L01();
// End Cross Module References
	void AVelocidadExtra_D::StaticRegisterNativesAVelocidadExtra_D()
	{
	}
	UClass* Z_Construct_UClass_AVelocidadExtra_D_NoRegister()
	{
		return AVelocidadExtra_D::StaticClass();
	}
	struct Z_Construct_UClass_AVelocidadExtra_D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVelocidadExtra_D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADecoratorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVelocidadExtra_D_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VelocidadExtra_D.h" },
		{ "ModuleRelativePath", "VelocidadExtra_D.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVelocidadExtra_D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVelocidadExtra_D>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVelocidadExtra_D_Statics::ClassParams = {
		&AVelocidadExtra_D::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AVelocidadExtra_D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVelocidadExtra_D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVelocidadExtra_D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVelocidadExtra_D_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVelocidadExtra_D, 3432015881);
	template<> DONKEYKONG_L01_API UClass* StaticClass<AVelocidadExtra_D>()
	{
		return AVelocidadExtra_D::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVelocidadExtra_D(Z_Construct_UClass_AVelocidadExtra_D, &AVelocidadExtra_D::StaticClass, TEXT("/Script/DonkeyKong_L01"), TEXT("AVelocidadExtra_D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVelocidadExtra_D);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
