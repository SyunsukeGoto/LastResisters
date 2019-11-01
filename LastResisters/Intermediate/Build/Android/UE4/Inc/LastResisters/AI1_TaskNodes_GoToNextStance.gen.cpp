// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LastResisters/AI/AI1/AI1_TaskNodes/AI1_TaskNodes_GoToNextStance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI1_TaskNodes_GoToNextStance() {}
// Cross Module References
	LASTRESISTERS_API UClass* Z_Construct_UClass_UAI1_TaskNodes_GoToNextStance_NoRegister();
	LASTRESISTERS_API UClass* Z_Construct_UClass_UAI1_TaskNodes_GoToNextStance();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_LastResisters();
// End Cross Module References
	void UAI1_TaskNodes_GoToNextStance::StaticRegisterNativesUAI1_TaskNodes_GoToNextStance()
	{
	}
	UClass* Z_Construct_UClass_UAI1_TaskNodes_GoToNextStance_NoRegister()
	{
		return UAI1_TaskNodes_GoToNextStance::StaticClass();
	}
	struct Z_Construct_UClass_UAI1_TaskNodes_GoToNextStance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAI1_TaskNodes_GoToNextStance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_LastResisters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAI1_TaskNodes_GoToNextStance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/AI1/AI1_TaskNodes/AI1_TaskNodes_GoToNextStance.h" },
		{ "ModuleRelativePath", "AI/AI1/AI1_TaskNodes/AI1_TaskNodes_GoToNextStance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAI1_TaskNodes_GoToNextStance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAI1_TaskNodes_GoToNextStance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAI1_TaskNodes_GoToNextStance_Statics::ClassParams = {
		&UAI1_TaskNodes_GoToNextStance::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAI1_TaskNodes_GoToNextStance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAI1_TaskNodes_GoToNextStance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAI1_TaskNodes_GoToNextStance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAI1_TaskNodes_GoToNextStance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAI1_TaskNodes_GoToNextStance, 447864639);
	template<> LASTRESISTERS_API UClass* StaticClass<UAI1_TaskNodes_GoToNextStance>()
	{
		return UAI1_TaskNodes_GoToNextStance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAI1_TaskNodes_GoToNextStance(Z_Construct_UClass_UAI1_TaskNodes_GoToNextStance, &UAI1_TaskNodes_GoToNextStance::StaticClass, TEXT("/Script/LastResisters"), TEXT("UAI1_TaskNodes_GoToNextStance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAI1_TaskNodes_GoToNextStance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
