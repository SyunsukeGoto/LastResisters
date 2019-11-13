// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LastResisters/AI/AI1/AI1_TaskNodes/AI1_TaskNodes_SetArmor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI1_TaskNodes_SetArmor() {}
// Cross Module References
	LASTRESISTERS_API UClass* Z_Construct_UClass_UAI1_TaskNodes_SetArmor_NoRegister();
	LASTRESISTERS_API UClass* Z_Construct_UClass_UAI1_TaskNodes_SetArmor();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_LastResisters();
// End Cross Module References
	void UAI1_TaskNodes_SetArmor::StaticRegisterNativesUAI1_TaskNodes_SetArmor()
	{
	}
	UClass* Z_Construct_UClass_UAI1_TaskNodes_SetArmor_NoRegister()
	{
		return UAI1_TaskNodes_SetArmor::StaticClass();
	}
	struct Z_Construct_UClass_UAI1_TaskNodes_SetArmor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAI1_TaskNodes_SetArmor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_LastResisters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAI1_TaskNodes_SetArmor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/AI1/AI1_TaskNodes/AI1_TaskNodes_SetArmor.h" },
		{ "ModuleRelativePath", "AI/AI1/AI1_TaskNodes/AI1_TaskNodes_SetArmor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAI1_TaskNodes_SetArmor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAI1_TaskNodes_SetArmor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAI1_TaskNodes_SetArmor_Statics::ClassParams = {
		&UAI1_TaskNodes_SetArmor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAI1_TaskNodes_SetArmor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAI1_TaskNodes_SetArmor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAI1_TaskNodes_SetArmor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAI1_TaskNodes_SetArmor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAI1_TaskNodes_SetArmor, 841676601);
	template<> LASTRESISTERS_API UClass* StaticClass<UAI1_TaskNodes_SetArmor>()
	{
		return UAI1_TaskNodes_SetArmor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAI1_TaskNodes_SetArmor(Z_Construct_UClass_UAI1_TaskNodes_SetArmor, &UAI1_TaskNodes_SetArmor::StaticClass, TEXT("/Script/LastResisters"), TEXT("UAI1_TaskNodes_SetArmor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAI1_TaskNodes_SetArmor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
