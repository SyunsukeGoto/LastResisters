// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LastResisters/AI/AI2/AI2_TaskNodes/AI2_TaskNodes_GoToOffenseStance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI2_TaskNodes_GoToOffenseStance() {}
// Cross Module References
	LASTRESISTERS_API UClass* Z_Construct_UClass_UAI2_TaskNodes_GoToOffenseStance_NoRegister();
	LASTRESISTERS_API UClass* Z_Construct_UClass_UAI2_TaskNodes_GoToOffenseStance();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_LastResisters();
// End Cross Module References
	void UAI2_TaskNodes_GoToOffenseStance::StaticRegisterNativesUAI2_TaskNodes_GoToOffenseStance()
	{
	}
	UClass* Z_Construct_UClass_UAI2_TaskNodes_GoToOffenseStance_NoRegister()
	{
		return UAI2_TaskNodes_GoToOffenseStance::StaticClass();
	}
	struct Z_Construct_UClass_UAI2_TaskNodes_GoToOffenseStance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAI2_TaskNodes_GoToOffenseStance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_LastResisters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAI2_TaskNodes_GoToOffenseStance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "AI/AI2/AI2_TaskNodes/AI2_TaskNodes_GoToOffenseStance.h" },
		{ "ModuleRelativePath", "AI/AI2/AI2_TaskNodes/AI2_TaskNodes_GoToOffenseStance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAI2_TaskNodes_GoToOffenseStance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAI2_TaskNodes_GoToOffenseStance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAI2_TaskNodes_GoToOffenseStance_Statics::ClassParams = {
		&UAI2_TaskNodes_GoToOffenseStance::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAI2_TaskNodes_GoToOffenseStance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAI2_TaskNodes_GoToOffenseStance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAI2_TaskNodes_GoToOffenseStance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAI2_TaskNodes_GoToOffenseStance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAI2_TaskNodes_GoToOffenseStance, 310473431);
	template<> LASTRESISTERS_API UClass* StaticClass<UAI2_TaskNodes_GoToOffenseStance>()
	{
		return UAI2_TaskNodes_GoToOffenseStance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAI2_TaskNodes_GoToOffenseStance(Z_Construct_UClass_UAI2_TaskNodes_GoToOffenseStance, &UAI2_TaskNodes_GoToOffenseStance::StaticClass, TEXT("/Script/LastResisters"), TEXT("UAI2_TaskNodes_GoToOffenseStance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAI2_TaskNodes_GoToOffenseStance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
