// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DONKEYKONG_L01_IDecorator_generated_h
#error "IDecorator.generated.h already included, missing '#pragma once' in IDecorator.h"
#endif
#define DONKEYKONG_L01_IDecorator_generated_h

#define DonkeyKong_L01_Source_DonkeyKong_L01_IDecorator_h_13_SPARSE_DATA
#define DonkeyKong_L01_Source_DonkeyKong_L01_IDecorator_h_13_RPC_WRAPPERS
#define DonkeyKong_L01_Source_DonkeyKong_L01_IDecorator_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define DonkeyKong_L01_Source_DonkeyKong_L01_IDecorator_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DONKEYKONG_L01_API UIDecorator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIDecorator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DONKEYKONG_L01_API, UIDecorator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIDecorator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DONKEYKONG_L01_API UIDecorator(UIDecorator&&); \
	DONKEYKONG_L01_API UIDecorator(const UIDecorator&); \
public:


#define DonkeyKong_L01_Source_DonkeyKong_L01_IDecorator_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DONKEYKONG_L01_API UIDecorator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DONKEYKONG_L01_API UIDecorator(UIDecorator&&); \
	DONKEYKONG_L01_API UIDecorator(const UIDecorator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DONKEYKONG_L01_API, UIDecorator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIDecorator); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIDecorator)


#define DonkeyKong_L01_Source_DonkeyKong_L01_IDecorator_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIDecorator(); \
	friend struct Z_Construct_UClass_UIDecorator_Statics; \
public: \
	DECLARE_CLASS(UIDecorator, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DonkeyKong_L01"), DONKEYKONG_L01_API) \
	DECLARE_SERIALIZER(UIDecorator)


#define DonkeyKong_L01_Source_DonkeyKong_L01_IDecorator_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DonkeyKong_L01_Source_DonkeyKong_L01_IDecorator_h_13_GENERATED_UINTERFACE_BODY() \
	DonkeyKong_L01_Source_DonkeyKong_L01_IDecorator_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DonkeyKong_L01_Source_DonkeyKong_L01_IDecorator_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DonkeyKong_L01_Source_DonkeyKong_L01_IDecorator_h_13_GENERATED_UINTERFACE_BODY() \
	DonkeyKong_L01_Source_DonkeyKong_L01_IDecorator_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DonkeyKong_L01_Source_DonkeyKong_L01_IDecorator_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIDecorator() {} \
public: \
	typedef UIDecorator UClassType; \
	typedef IIDecorator ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DonkeyKong_L01_Source_DonkeyKong_L01_IDecorator_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IIDecorator() {} \
public: \
	typedef UIDecorator UClassType; \
	typedef IIDecorator ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DonkeyKong_L01_Source_DonkeyKong_L01_IDecorator_h_10_PROLOG
#define DonkeyKong_L01_Source_DonkeyKong_L01_IDecorator_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DonkeyKong_L01_Source_DonkeyKong_L01_IDecorator_h_13_SPARSE_DATA \
	DonkeyKong_L01_Source_DonkeyKong_L01_IDecorator_h_13_RPC_WRAPPERS \
	DonkeyKong_L01_Source_DonkeyKong_L01_IDecorator_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DonkeyKong_L01_Source_DonkeyKong_L01_IDecorator_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DonkeyKong_L01_Source_DonkeyKong_L01_IDecorator_h_13_SPARSE_DATA \
	DonkeyKong_L01_Source_DonkeyKong_L01_IDecorator_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DonkeyKong_L01_Source_DonkeyKong_L01_IDecorator_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DONKEYKONG_L01_API UClass* StaticClass<class UIDecorator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DonkeyKong_L01_Source_DonkeyKong_L01_IDecorator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
