// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L01/DecoratorBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDecoratorBase() {}
// Cross Module References
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_ADecoratorBase_NoRegister();
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_ADecoratorBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L01();
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_UIDecorator_NoRegister();
// End Cross Module References
	void ADecoratorBase::StaticRegisterNativesADecoratorBase()
	{
	}
	UClass* Z_Construct_UClass_ADecoratorBase_NoRegister()
	{
		return ADecoratorBase::StaticClass();
	}
	struct Z_Construct_UClass_ADecoratorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADecoratorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADecoratorBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DecoratorBase.h" },
		{ "ModuleRelativePath", "DecoratorBase.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADecoratorBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIDecorator_NoRegister, (int32)VTABLE_OFFSET(ADecoratorBase, IIDecorator), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADecoratorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADecoratorBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADecoratorBase_Statics::ClassParams = {
		&ADecoratorBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADecoratorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADecoratorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADecoratorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADecoratorBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADecoratorBase, 1488210276);
	template<> DONKEYKONG_L01_API UClass* StaticClass<ADecoratorBase>()
	{
		return ADecoratorBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADecoratorBase(Z_Construct_UClass_ADecoratorBase, &ADecoratorBase::StaticClass, TEXT("/Script/DonkeyKong_L01"), TEXT("ADecoratorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADecoratorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif