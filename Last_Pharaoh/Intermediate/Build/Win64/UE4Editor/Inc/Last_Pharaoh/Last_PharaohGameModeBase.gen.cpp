// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Last_Pharaoh/Last_PharaohGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLast_PharaohGameModeBase() {}
// Cross Module References
	LAST_PHARAOH_API UClass* Z_Construct_UClass_ALast_PharaohGameModeBase_NoRegister();
	LAST_PHARAOH_API UClass* Z_Construct_UClass_ALast_PharaohGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Last_Pharaoh();
// End Cross Module References
	void ALast_PharaohGameModeBase::StaticRegisterNativesALast_PharaohGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ALast_PharaohGameModeBase_NoRegister()
	{
		return ALast_PharaohGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ALast_PharaohGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALast_PharaohGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Last_Pharaoh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALast_PharaohGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Last_PharaohGameModeBase.h" },
		{ "ModuleRelativePath", "Last_PharaohGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALast_PharaohGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALast_PharaohGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALast_PharaohGameModeBase_Statics::ClassParams = {
		&ALast_PharaohGameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ALast_PharaohGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALast_PharaohGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALast_PharaohGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALast_PharaohGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALast_PharaohGameModeBase, 1260187817);
	template<> LAST_PHARAOH_API UClass* StaticClass<ALast_PharaohGameModeBase>()
	{
		return ALast_PharaohGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALast_PharaohGameModeBase(Z_Construct_UClass_ALast_PharaohGameModeBase, &ALast_PharaohGameModeBase::StaticClass, TEXT("/Script/Last_Pharaoh"), TEXT("ALast_PharaohGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALast_PharaohGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
