// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LAST_PHARAOH_DamageTrap_generated_h
#error "DamageTrap.generated.h already included, missing '#pragma once' in DamageTrap.h"
#endif
#define LAST_PHARAOH_DamageTrap_generated_h

#define Last_Pharaoh_Source_Last_Pharaoh_DamageTrap_h_13_RPC_WRAPPERS
#define Last_Pharaoh_Source_Last_Pharaoh_DamageTrap_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Last_Pharaoh_Source_Last_Pharaoh_DamageTrap_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADamageTrap(); \
	friend struct Z_Construct_UClass_ADamageTrap_Statics; \
public: \
	DECLARE_CLASS(ADamageTrap, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Last_Pharaoh"), NO_API) \
	DECLARE_SERIALIZER(ADamageTrap)


#define Last_Pharaoh_Source_Last_Pharaoh_DamageTrap_h_13_INCLASS \
private: \
	static void StaticRegisterNativesADamageTrap(); \
	friend struct Z_Construct_UClass_ADamageTrap_Statics; \
public: \
	DECLARE_CLASS(ADamageTrap, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Last_Pharaoh"), NO_API) \
	DECLARE_SERIALIZER(ADamageTrap)


#define Last_Pharaoh_Source_Last_Pharaoh_DamageTrap_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADamageTrap(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADamageTrap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADamageTrap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADamageTrap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADamageTrap(ADamageTrap&&); \
	NO_API ADamageTrap(const ADamageTrap&); \
public:


#define Last_Pharaoh_Source_Last_Pharaoh_DamageTrap_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADamageTrap(ADamageTrap&&); \
	NO_API ADamageTrap(const ADamageTrap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADamageTrap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADamageTrap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADamageTrap)


#define Last_Pharaoh_Source_Last_Pharaoh_DamageTrap_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Damage() { return STRUCT_OFFSET(ADamageTrap, Damage); } \
	FORCEINLINE static uint32 __PPO__CollisionBox() { return STRUCT_OFFSET(ADamageTrap, CollisionBox); } \
	FORCEINLINE static uint32 __PPO__Direction() { return STRUCT_OFFSET(ADamageTrap, Direction); } \
	FORCEINLINE static uint32 __PPO__BaseMesh() { return STRUCT_OFFSET(ADamageTrap, BaseMesh); }


#define Last_Pharaoh_Source_Last_Pharaoh_DamageTrap_h_10_PROLOG
#define Last_Pharaoh_Source_Last_Pharaoh_DamageTrap_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Last_Pharaoh_Source_Last_Pharaoh_DamageTrap_h_13_PRIVATE_PROPERTY_OFFSET \
	Last_Pharaoh_Source_Last_Pharaoh_DamageTrap_h_13_RPC_WRAPPERS \
	Last_Pharaoh_Source_Last_Pharaoh_DamageTrap_h_13_INCLASS \
	Last_Pharaoh_Source_Last_Pharaoh_DamageTrap_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Last_Pharaoh_Source_Last_Pharaoh_DamageTrap_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Last_Pharaoh_Source_Last_Pharaoh_DamageTrap_h_13_PRIVATE_PROPERTY_OFFSET \
	Last_Pharaoh_Source_Last_Pharaoh_DamageTrap_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Last_Pharaoh_Source_Last_Pharaoh_DamageTrap_h_13_INCLASS_NO_PURE_DECLS \
	Last_Pharaoh_Source_Last_Pharaoh_DamageTrap_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LAST_PHARAOH_API UClass* StaticClass<class ADamageTrap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Last_Pharaoh_Source_Last_Pharaoh_DamageTrap_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
