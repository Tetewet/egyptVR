// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Last_Pharaoh/TriggerTrap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerTrap() {}
// Cross Module References
	LAST_PHARAOH_API UClass* Z_Construct_UClass_ATriggerTrap_NoRegister();
	LAST_PHARAOH_API UClass* Z_Construct_UClass_ATriggerTrap();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Last_Pharaoh();
	LAST_PHARAOH_API UClass* Z_Construct_UClass_ADamageTrap_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ATriggerTrap::StaticRegisterNativesATriggerTrap()
	{
	}
	UClass* Z_Construct_UClass_ATriggerTrap_NoRegister()
	{
		return ATriggerTrap::StaticClass();
	}
	struct Z_Construct_UClass_ATriggerTrap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageTrap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageTrap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTrapActivator_MetaData[];
#endif
		static void NewProp_bIsTrapActivator_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTrapActivator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATriggerTrap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Last_Pharaoh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerTrap_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TriggerTrap.h" },
		{ "ModuleRelativePath", "TriggerTrap.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerTrap_Statics::NewProp_DamageTrap_MetaData[] = {
		{ "Category", "TriggerTrap" },
		{ "ModuleRelativePath", "TriggerTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerTrap_Statics::NewProp_DamageTrap = { "DamageTrap", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerTrap, DamageTrap), Z_Construct_UClass_ADamageTrap_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerTrap_Statics::NewProp_DamageTrap_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATriggerTrap_Statics::NewProp_DamageTrap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerTrap_Statics::NewProp_bIsTrapActivator_MetaData[] = {
		{ "Category", "TriggerTrap" },
		{ "ModuleRelativePath", "TriggerTrap.h" },
	};
#endif
	void Z_Construct_UClass_ATriggerTrap_Statics::NewProp_bIsTrapActivator_SetBit(void* Obj)
	{
		((ATriggerTrap*)Obj)->bIsTrapActivator = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATriggerTrap_Statics::NewProp_bIsTrapActivator = { "bIsTrapActivator", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATriggerTrap), &Z_Construct_UClass_ATriggerTrap_Statics::NewProp_bIsTrapActivator_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATriggerTrap_Statics::NewProp_bIsTrapActivator_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATriggerTrap_Statics::NewProp_bIsTrapActivator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerTrap_Statics::NewProp_BaseMesh_MetaData[] = {
		{ "Category", "TriggerTrap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TriggerTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerTrap_Statics::NewProp_BaseMesh = { "BaseMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerTrap, BaseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerTrap_Statics::NewProp_BaseMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATriggerTrap_Statics::NewProp_BaseMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerTrap_Statics::NewProp_CollisionBox_MetaData[] = {
		{ "Category", "TriggerTrap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TriggerTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerTrap_Statics::NewProp_CollisionBox = { "CollisionBox", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerTrap, CollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerTrap_Statics::NewProp_CollisionBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATriggerTrap_Statics::NewProp_CollisionBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATriggerTrap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerTrap_Statics::NewProp_DamageTrap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerTrap_Statics::NewProp_bIsTrapActivator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerTrap_Statics::NewProp_BaseMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerTrap_Statics::NewProp_CollisionBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATriggerTrap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATriggerTrap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATriggerTrap_Statics::ClassParams = {
		&ATriggerTrap::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATriggerTrap_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ATriggerTrap_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ATriggerTrap_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATriggerTrap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATriggerTrap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATriggerTrap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATriggerTrap, 2543036355);
	template<> LAST_PHARAOH_API UClass* StaticClass<ATriggerTrap>()
	{
		return ATriggerTrap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATriggerTrap(Z_Construct_UClass_ATriggerTrap, &ATriggerTrap::StaticClass, TEXT("/Script/Last_Pharaoh"), TEXT("ATriggerTrap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATriggerTrap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
