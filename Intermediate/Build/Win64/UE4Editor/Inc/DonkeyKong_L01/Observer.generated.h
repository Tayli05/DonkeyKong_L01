// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DONKEYKONG_L01_Observer_generated_h
#error "Observer.generated.h already included, missing '#pragma once' in Observer.h"
#endif
#define DONKEYKONG_L01_Observer_generated_h

#define DonkeyKong_L01_Source_DonkeyKong_L01_Observer_h_13_SPARSE_DATA
#define DonkeyKong_L01_Source_DonkeyKong_L01_Observer_h_13_RPC_WRAPPERS
#define DonkeyKong_L01_Source_DonkeyKong_L01_Observer_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define DonkeyKong_L01_Source_DonkeyKong_L01_Observer_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DONKEYKONG_L01_API UObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObserver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DONKEYKONG_L01_API, UObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObserver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DONKEYKONG_L01_API UObserver(UObserver&&); \
	DONKEYKONG_L01_API UObserver(const UObserver&); \
public:


#define DonkeyKong_L01_Source_DonkeyKong_L01_Observer_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DONKEYKONG_L01_API UObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DONKEYKONG_L01_API UObserver(UObserver&&); \
	DONKEYKONG_L01_API UObserver(const UObserver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DONKEYKONG_L01_API, UObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObserver); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObserver)


#define DonkeyKong_L01_Source_DonkeyKong_L01_Observer_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUObserver(); \
	friend struct Z_Construct_UClass_UObserver_Statics; \
public: \
	DECLARE_CLASS(UObserver, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DonkeyKong_L01"), DONKEYKONG_L01_API) \
	DECLARE_SERIALIZER(UObserver)


#define DonkeyKong_L01_Source_DonkeyKong_L01_Observer_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DonkeyKong_L01_Source_DonkeyKong_L01_Observer_h_13_GENERATED_UINTERFACE_BODY() \
	DonkeyKong_L01_Source_DonkeyKong_L01_Observer_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DonkeyKong_L01_Source_DonkeyKong_L01_Observer_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DonkeyKong_L01_Source_DonkeyKong_L01_Observer_h_13_GENERATED_UINTERFACE_BODY() \
	DonkeyKong_L01_Source_DonkeyKong_L01_Observer_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DonkeyKong_L01_Source_DonkeyKong_L01_Observer_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IObserver() {} \
public: \
	typedef UObserver UClassType; \
	typedef IObserver ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DonkeyKong_L01_Source_DonkeyKong_L01_Observer_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IObserver() {} \
public: \
	typedef UObserver UClassType; \
	typedef IObserver ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DonkeyKong_L01_Source_DonkeyKong_L01_Observer_h_10_PROLOG
#define DonkeyKong_L01_Source_DonkeyKong_L01_Observer_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DonkeyKong_L01_Source_DonkeyKong_L01_Observer_h_13_SPARSE_DATA \
	DonkeyKong_L01_Source_DonkeyKong_L01_Observer_h_13_RPC_WRAPPERS \
	DonkeyKong_L01_Source_DonkeyKong_L01_Observer_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DonkeyKong_L01_Source_DonkeyKong_L01_Observer_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DonkeyKong_L01_Source_DonkeyKong_L01_Observer_h_13_SPARSE_DATA \
	DonkeyKong_L01_Source_DonkeyKong_L01_Observer_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DonkeyKong_L01_Source_DonkeyKong_L01_Observer_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DONKEYKONG_L01_API UClass* StaticClass<class UObserver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DonkeyKong_L01_Source_DonkeyKong_L01_Observer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
