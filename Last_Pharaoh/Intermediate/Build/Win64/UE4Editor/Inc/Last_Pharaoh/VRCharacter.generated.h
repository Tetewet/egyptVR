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

#define Last_Pharaoh_Source_Last_Pharaoh_VRCharacter_h_26_RPC_WRAPPERS
#define Last_Pharaoh_Source_Last_Pharaoh_VRCharacter_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define Last_Pharaoh_Source_Last_Pharaoh_VRCharacter_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVRCharacter(); \
	friend struct Z_Construct_UClass_AVRCharacter_Statics; \
public: \
	DECLARE_CLASS(AVRCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Last_Pharaoh"), NO_API) \
	DECLARE_SERIALIZER(AVRCharacter)


#define Last_Pharaoh_Source_Last_Pharaoh_VRCharacter_h_26_INCLASS \
private: \
	static void StaticRegisterNativesAVRCharacter(); \
	friend struct Z_Construct_UClass_AVRCharacter_Statics; \
public: \
	DECLARE_CLASS(AVRCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Last_Pharaoh"), NO_API) \
	DECLARE_SERIALIZER(AVRCharacter)


#define Last_Pharaoh_Source_Last_Pharaoh_VRCharacter_h_26_STANDARD_CONSTRUCTORS \
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


#define Last_Pharaoh_Source_Last_Pharaoh_VRCharacter_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRCharacter(AVRCharacter&&); \
	NO_API AVRCharacter(const AVRCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVRCharacter)


#define Last_Pharaoh_Source_Last_Pharaoh_VRCharacter_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AVRCharacter, Camera); } \
	FORCEINLINE static uint32 __PPO__VRRoot() { return STRUCT_OFFSET(AVRCharacter, VRRoot); } \
	FORCEINLINE static uint32 __PPO__LeftMController() { return STRUCT_OFFSET(AVRCharacter, LeftMController); } \
	FORCEINLINE static uint32 __PPO__RightMController() { return STRUCT_OFFSET(AVRCharacter, RightMController); } \
	FORCEINLINE static uint32 __PPO__TorchLight() { return STRUCT_OFFSET(AVRCharacter, TorchLight); } \
	FORCEINLINE static uint32 __PPO__TeleportMarker() { return STRUCT_OFFSET(AVRCharacter, TeleportMarker); } \
	FORCEINLINE static uint32 __PPO__TeleportFadeTimer() { return STRUCT_OFFSET(AVRCharacter, TeleportFadeTimer); } \
	FORCEINLINE static uint32 __PPO__FadeTime() { return STRUCT_OFFSET(AVRCharacter, FadeTime); } \
	FORCEINLINE static uint32 __PPO__MaxTeleport() { return STRUCT_OFFSET(AVRCharacter, MaxTeleport); } \
	FORCEINLINE static uint32 __PPO__TeleportExtent() { return STRUCT_OFFSET(AVRCharacter, TeleportExtent); } \
	FORCEINLINE static uint32 __PPO__TeleportMarkerAngle() { return STRUCT_OFFSET(AVRCharacter, TeleportMarkerAngle); } \
	FORCEINLINE static uint32 __PPO__PostProcessComponent() { return STRUCT_OFFSET(AVRCharacter, PostProcessComponent); } \
	FORCEINLINE static uint32 __PPO__BlinkerMaterial() { return STRUCT_OFFSET(AVRCharacter, BlinkerMaterial); } \
	FORCEINLINE static uint32 __PPO__BlinkerMaterialInstance() { return STRUCT_OFFSET(AVRCharacter, BlinkerMaterialInstance); } \
	FORCEINLINE static uint32 __PPO__BlinkerRadius() { return STRUCT_OFFSET(AVRCharacter, BlinkerRadius); }


#define Last_Pharaoh_Source_Last_Pharaoh_VRCharacter_h_23_PROLOG
#define Last_Pharaoh_Source_Last_Pharaoh_VRCharacter_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Last_Pharaoh_Source_Last_Pharaoh_VRCharacter_h_26_PRIVATE_PROPERTY_OFFSET \
	Last_Pharaoh_Source_Last_Pharaoh_VRCharacter_h_26_RPC_WRAPPERS \
	Last_Pharaoh_Source_Last_Pharaoh_VRCharacter_h_26_INCLASS \
	Last_Pharaoh_Source_Last_Pharaoh_VRCharacter_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Last_Pharaoh_Source_Last_Pharaoh_VRCharacter_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Last_Pharaoh_Source_Last_Pharaoh_VRCharacter_h_26_PRIVATE_PROPERTY_OFFSET \
	Last_Pharaoh_Source_Last_Pharaoh_VRCharacter_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Last_Pharaoh_Source_Last_Pharaoh_VRCharacter_h_26_INCLASS_NO_PURE_DECLS \
	Last_Pharaoh_Source_Last_Pharaoh_VRCharacter_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LAST_PHARAOH_API UClass* StaticClass<class AVRCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Last_Pharaoh_Source_Last_Pharaoh_VRCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
