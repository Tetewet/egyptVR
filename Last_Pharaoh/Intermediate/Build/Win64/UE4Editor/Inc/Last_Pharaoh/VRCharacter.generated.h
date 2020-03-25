// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LAST_PHARAOH_VRCharacter_generated_h
#error "VRCharacter.generated.h already included, missing '#pragma once' in VRCharacter.h"
#endif
#define LAST_PHARAOH_VRCharacter_generated_h

#define Last_Pharaoh_Source_Last_Pharaoh_VRCharacter_h_19_RPC_WRAPPERS
#define Last_Pharaoh_Source_Last_Pharaoh_VRCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define Last_Pharaoh_Source_Last_Pharaoh_VRCharacter_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVRCharacter(); \
	friend struct Z_Construct_UClass_AVRCharacter_Statics; \
public: \
	DECLARE_CLASS(AVRCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Last_Pharaoh"), NO_API) \
	DECLARE_SERIALIZER(AVRCharacter)


#define Last_Pharaoh_Source_Last_Pharaoh_VRCharacter_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAVRCharacter(); \
	friend struct Z_Construct_UClass_AVRCharacter_Statics; \
public: \
	DECLARE_CLASS(AVRCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Last_Pharaoh"), NO_API) \
	DECLARE_SERIALIZER(AVRCharacter)


#define Last_Pharaoh_Source_Last_Pharaoh_VRCharacter_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVRCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRCharacter(AVRCharacter&&); \
	NO_API AVRCharacter(const AVRCharacter&); \
public:


#define Last_Pharaoh_Source_Last_Pharaoh_VRCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRCharacter(AVRCharacter&&); \
	NO_API AVRCharacter(const AVRCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVRCharacter)


#define Last_Pharaoh_Source_Last_Pharaoh_VRCharacter_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AVRCharacter, Camera); } \
	FORCEINLINE static uint32 __PPO__VRRoot() { return STRUCT_OFFSET(AVRCharacter, VRRoot); } \
	FORCEINLINE static uint32 __PPO__TeleportMarker() { return STRUCT_OFFSET(AVRCharacter, TeleportMarker); } \
	FORCEINLINE static uint32 __PPO__MaxTeleport() { return STRUCT_OFFSET(AVRCharacter, MaxTeleport); }


#define Last_Pharaoh_Source_Last_Pharaoh_VRCharacter_h_16_PROLOG
#define Last_Pharaoh_Source_Last_Pharaoh_VRCharacter_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Last_Pharaoh_Source_Last_Pharaoh_VRCharacter_h_19_PRIVATE_PROPERTY_OFFSET \
	Last_Pharaoh_Source_Last_Pharaoh_VRCharacter_h_19_RPC_WRAPPERS \
	Last_Pharaoh_Source_Last_Pharaoh_VRCharacter_h_19_INCLASS \
	Last_Pharaoh_Source_Last_Pharaoh_VRCharacter_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Last_Pharaoh_Source_Last_Pharaoh_VRCharacter_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Last_Pharaoh_Source_Last_Pharaoh_VRCharacter_h_19_PRIVATE_PROPERTY_OFFSET \
	Last_Pharaoh_Source_Last_Pharaoh_VRCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Last_Pharaoh_Source_Last_Pharaoh_VRCharacter_h_19_INCLASS_NO_PURE_DECLS \
	Last_Pharaoh_Source_Last_Pharaoh_VRCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LAST_PHARAOH_API UClass* StaticClass<class AVRCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Last_Pharaoh_Source_Last_Pharaoh_VRCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
