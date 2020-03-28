// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Last_Pharaoh/Spike_Trap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpike_Trap() {}
// Cross Module References
	LAST_PHARAOH_API UClass* Z_Construct_UClass_ASpike_Trap_NoRegister();
	LAST_PHARAOH_API UClass* Z_Construct_UClass_ASpike_Trap();
	LAST_PHARAOH_API UClass* Z_Construct_UClass_ATrap();
	UPackage* Z_Construct_UPackage__Script_Last_Pharaoh();
// End Cross Module References
	void ASpike_Trap::StaticRegisterNativesASpike_Trap()
	{
	}
	UClass* Z_Construct_UClass_ASpike_Trap_NoRegister()
	{
		return ASpike_Trap::StaticClass();
	}
	struct Z_Construct_UClass_ASpike_Trap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpike_Trap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATrap,
		(UObject* (*)())Z_Construct_UPackage__Script_Last_Pharaoh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpike_Trap_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Spike_Trap.h" },
		{ "ModuleRelativePath", "Spike_Trap.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpike_Trap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpike_Trap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpike_Trap_Statics::ClassParams = {
		&ASpike_Trap::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASpike_Trap_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASpike_Trap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpike_Trap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpike_Trap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpike_Trap, 3887068425);
	template<> LAST_PHARAOH_API UClass* StaticClass<ASpike_Trap>()
	{
		return ASpike_Trap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpike_Trap(Z_Construct_UClass_ASpike_Trap, &ASpike_Trap::StaticClass, TEXT("/Script/Last_Pharaoh"), TEXT("ASpike_Trap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpike_Trap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
