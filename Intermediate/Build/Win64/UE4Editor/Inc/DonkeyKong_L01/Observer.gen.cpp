// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L01/Observer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObserver() {}
// Cross Module References
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_UObserver_NoRegister();
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_UObserver();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L01();
// End Cross Module References
	void UObserver::StaticRegisterNativesUObserver()
	{
	}
	UClass* Z_Construct_UClass_UObserver_NoRegister()
	{
		return UObserver::StaticClass();
	}
	struct Z_Construct_UClass_UObserver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObserver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObserver_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Observer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObserver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IObserver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObserver_Statics::ClassParams = {
		&UObserver::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UObserver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObserver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObserver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObserver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObserver, 3733383220);
	template<> DONKEYKONG_L01_API UClass* StaticClass<UObserver>()
	{
		return UObserver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObserver(Z_Construct_UClass_UObserver, &UObserver::StaticClass, TEXT("/Script/DonkeyKong_L01"), TEXT("UObserver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObserver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
