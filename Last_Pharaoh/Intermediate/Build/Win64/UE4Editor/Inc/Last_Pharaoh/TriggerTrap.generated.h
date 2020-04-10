// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LAST_PHARAOH_TriggerTrap_generated_h
#error "TriggerTrap.generated.h already included, missing '#pragma once' in TriggerTrap.h"
#endif
#define LAST_PHARAOH_TriggerTrap_generated_h

#define Last_Pharaoh_Source_Last_Pharaoh_TriggerTrap_h_14_RPC_WRAPPERS
#define Last_Pharaoh_Source_Last_Pharaoh_TriggerTrap_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Last_Pharaoh_Source_Last_Pharaoh_TriggerTrap_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATriggerTrap(); \
	friend struct Z_Construct_UClass_ATriggerTrap_Statics; \
public: \
	DECLARE_CLASS(ATriggerTrap, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Last_Pharaoh"), NO_API) \
	DECLARE_SERIALIZER(ATriggerTrap)


#define Last_Pharaoh_Source_Last_Pharaoh_TriggerTrap_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATriggerTrap(); \
	friend struct Z_Construct_UClass_ATriggerTrap_Statics; \
public: \
	DECLARE_CLASS(ATriggerTrap, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Last_Pharaoh"), NO_API) \
	DECLARE_SERIALIZER(ATriggerTrap)


#define Last_Pharaoh_Source_Last_Pharaoh_TriggerTrap_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATriggerTrap(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATriggerTrap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggerTrap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerTrap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATriggerTrap(ATriggerTrap&&); \
	NO_API ATriggerTrap(const ATriggerTrap&); \
public:


#define Last_Pharaoh_Source_Last_Pharaoh_TriggerTrap_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATriggerTrap(ATriggerTrap&&); \
	NO_API ATriggerTrap(const ATriggerTrap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggerTrap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerTrap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATriggerTrap)


#define Last_Pharaoh_Source_Last_Pharaoh_TriggerTrap_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionBox() { return STRUCT_OFFSET(ATriggerTrap, CollisionBox); } \
	FORCEINLINE static uint32 __PPO__BaseMesh() { return STRUCT_OFFSET(ATriggerTrap, BaseMesh); } \
	FORCEINLINE static uint32 __PPO__bIsTrapActivator() { return STRUCT_OFFSET(ATriggerTrap, bIsTrapActivator); } \
	FORCEINLINE static uint32 __PPO__DamageTrap() { return STRUCT_OFFSET(ATriggerTrap, DamageTrap); }


#define Last_Pharaoh_Source_Last_Pharaoh_TriggerTrap_h_11_PROLOG
#define Last_Pharaoh_Source_Last_Pharaoh_TriggerTrap_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Last_Pharaoh_Source_Last_Pharaoh_TriggerTrap_h_14_PRIVATE_PROPERTY_OFFSET \
	Last_Pharaoh_Source_Last_Pharaoh_TriggerTrap_h_14_RPC_WRAPPERS \
	Last_Pharaoh_Source_Last_Pharaoh_TriggerTrap_h_14_INCLASS \
	Last_Pharaoh_Source_Last_Pharaoh_TriggerTrap_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Last_Pharaoh_Source_Last_Pharaoh_TriggerTrap_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Last_Pharaoh_Source_Last_Pharaoh_TriggerTrap_h_14_PRIVATE_PROPERTY_OFFSET \
	Last_Pharaoh_Source_Last_Pharaoh_TriggerTrap_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Last_Pharaoh_Source_Last_Pharaoh_TriggerTrap_h_14_INCLASS_NO_PURE_DECLS \
	Last_Pharaoh_Source_Last_Pharaoh_TriggerTrap_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LAST_PHARAOH_API UClass* StaticClass<class ATriggerTrap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Last_Pharaoh_Source_Last_Pharaoh_TriggerTrap_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
