// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L01/InvulnerabilidadD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInvulnerabilidadD() {}
// Cross Module References
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_AInvulnerabilidadD_NoRegister();
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_AInvulnerabilidadD();
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_ADecoratorBase();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L01();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AInvulnerabilidadD::execOnOverlapBegin)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void AInvulnerabilidadD::StaticRegisterNativesAInvulnerabilidadD()
	{
		UClass* Class = AInvulnerabilidadD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &AInvulnerabilidadD::execOnOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AInvulnerabilidadD_OnOverlapBegin_Statics
	{
		struct InvulnerabilidadD_eventOnOverlapBegin_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInvulnerabilidadD_OnOverlapBegin_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InvulnerabilidadD_eventOnOverlapBegin_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInvulnerabilidadD_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InvulnerabilidadD_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInvulnerabilidadD_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInvulnerabilidadD_OnOverlapBegin_Statics::NewProp_OverlappedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInvulnerabilidadD_OnOverlapBegin_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInvulnerabilidadD_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InvulnerabilidadD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInvulnerabilidadD_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInvulnerabilidadD, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(InvulnerabilidadD_eventOnOverlapBegin_Parms), Z_Construct_UFunction_AInvulnerabilidadD_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInvulnerabilidadD_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInvulnerabilidadD_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInvulnerabilidadD_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInvulnerabilidadD_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInvulnerabilidadD_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AInvulnerabilidadD_NoRegister()
	{
		return AInvulnerabilidadD::StaticClass();
	}
	struct Z_Construct_UClass_AInvulnerabilidadD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DuracionInvulnerabilidad_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DuracionInvulnerabilidad;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInvulnerabilidadD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADecoratorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AInvulnerabilidadD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AInvulnerabilidadD_OnOverlapBegin, "OnOverlapBegin" }, // 2980656418
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInvulnerabilidadD_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InvulnerabilidadD.h" },
		{ "ModuleRelativePath", "InvulnerabilidadD.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInvulnerabilidadD_Statics::NewProp_DuracionInvulnerabilidad_MetaData[] = {
		{ "Category", "Invulnerabilidad" },
		{ "ModuleRelativePath", "InvulnerabilidadD.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInvulnerabilidadD_Statics::NewProp_DuracionInvulnerabilidad = { "DuracionInvulnerabilidad", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInvulnerabilidadD, DuracionInvulnerabilidad), METADATA_PARAMS(Z_Construct_UClass_AInvulnerabilidadD_Statics::NewProp_DuracionInvulnerabilidad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInvulnerabilidadD_Statics::NewProp_DuracionInvulnerabilidad_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInvulnerabilidadD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInvulnerabilidadD_Statics::NewProp_DuracionInvulnerabilidad,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInvulnerabilidadD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInvulnerabilidadD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInvulnerabilidadD_Statics::ClassParams = {
		&AInvulnerabilidadD::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AInvulnerabilidadD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AInvulnerabilidadD_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInvulnerabilidadD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInvulnerabilidadD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInvulnerabilidadD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInvulnerabilidadD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInvulnerabilidadD, 574382808);
	template<> DONKEYKONG_L01_API UClass* StaticClass<AInvulnerabilidadD>()
	{
		return AInvulnerabilidadD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInvulnerabilidadD(Z_Construct_UClass_AInvulnerabilidadD, &AInvulnerabilidadD::StaticClass, TEXT("/Script/DonkeyKong_L01"), TEXT("AInvulnerabilidadD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInvulnerabilidadD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
