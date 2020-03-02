// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Last_Pharaoh/VRCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRCharacter() {}
// Cross Module References
	LAST_PHARAOH_API UClass* Z_Construct_UClass_AVRCharacter_NoRegister();
	LAST_PHARAOH_API UClass* Z_Construct_UClass_AVRCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Last_Pharaoh();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void AVRCharacter::StaticRegisterNativesAVRCharacter()
	{
	}
	UClass* Z_Construct_UClass_AVRCharacter_NoRegister()
	{
		return AVRCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AVRCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTeleport_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxTeleport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleportMarker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TeleportMarker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVRCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Last_Pharaoh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "VRCharacter.h" },
		{ "ModuleRelativePath", "VRCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRCharacter_Statics::NewProp_MaxTeleport_MetaData[] = {
		{ "Category", "VRCharacter" },
		{ "ModuleRelativePath", "VRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVRCharacter_Statics::NewProp_MaxTeleport = { "MaxTeleport", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRCharacter, MaxTeleport), METADATA_PARAMS(Z_Construct_UClass_AVRCharacter_Statics::NewProp_MaxTeleport_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVRCharacter_Statics::NewProp_MaxTeleport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRCharacter_Statics::NewProp_TeleportMarker_MetaData[] = {
		{ "Category", "VRCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRCharacter_Statics::NewProp_TeleportMarker = { "TeleportMarker", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRCharacter, TeleportMarker), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRCharacter_Statics::NewProp_TeleportMarker_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVRCharacter_Statics::NewProp_TeleportMarker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRCharacter_Statics::NewProp_VRRoot_MetaData[] = {
		{ "Category", "VRCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRCharacter_Statics::NewProp_VRRoot = { "VRRoot", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRCharacter, VRRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRCharacter_Statics::NewProp_VRRoot_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVRCharacter_Statics::NewProp_VRRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRCharacter_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "VRCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRCharacter_Statics::NewProp_Camera_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVRCharacter_Statics::NewProp_Camera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVRCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRCharacter_Statics::NewProp_MaxTeleport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRCharacter_Statics::NewProp_TeleportMarker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRCharacter_Statics::NewProp_VRRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRCharacter_Statics::NewProp_Camera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVRCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVRCharacter_Statics::ClassParams = {
		&AVRCharacter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVRCharacter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AVRCharacter_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AVRCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AVRCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVRCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVRCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRCharacter, 390858322);
	template<> LAST_PHARAOH_API UClass* StaticClass<AVRCharacter>()
	{
		return AVRCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRCharacter(Z_Construct_UClass_AVRCharacter, &AVRCharacter::StaticClass, TEXT("/Script/Last_Pharaoh"), TEXT("AVRCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
