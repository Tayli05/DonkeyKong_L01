// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L01/IAdapter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAdapter() {}
// Cross Module References
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_UIAdapter_NoRegister();
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_UIAdapter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L01();
// End Cross Module References
	void UIAdapter::StaticRegisterNativesUIAdapter()
	{
	}
	UClass* Z_Construct_UClass_UIAdapter_NoRegister()
	{
		return UIAdapter::StaticClass();
	}
	struct Z_Construct_UClass_UIAdapter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIAdapter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAdapter_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IAdapter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIAdapter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIAdapter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIAdapter_Statics::ClassParams = {
		&UIAdapter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UIAdapter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIAdapter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIAdapter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIAdapter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIAdapter, 3939299108);
	template<> DONKEYKONG_L01_API UClass* StaticClass<UIAdapter>()
	{
		return UIAdapter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIAdapter(Z_Construct_UClass_UIAdapter, &UIAdapter::StaticClass, TEXT("/Script/DonkeyKong_L01"), TEXT("UIAdapter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIAdapter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
