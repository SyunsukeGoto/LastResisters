// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LastResisters/AI/AI1/AI1_PatrolTargetPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI1_PatrolTargetPoint() {}
// Cross Module References
	LASTRESISTERS_API UClass* Z_Construct_UClass_AAI1_PatrolTargetPoint_NoRegister();
	LASTRESISTERS_API UClass* Z_Construct_UClass_AAI1_PatrolTargetPoint();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint();
	UPackage* Z_Construct_UPackage__Script_LastResisters();
// End Cross Module References
	void AAI1_PatrolTargetPoint::StaticRegisterNativesAAI1_PatrolTargetPoint()
	{
	}
	UClass* Z_Construct_UClass_AAI1_PatrolTargetPoint_NoRegister()
	{
		return AAI1_PatrolTargetPoint::StaticClass();
	}
	struct Z_Construct_UClass_AAI1_PatrolTargetPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAI1_PatrolTargetPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATargetPoint,
		(UObject* (*)())Z_Construct_UPackage__Script_LastResisters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI1_PatrolTargetPoint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/AI1/AI1_PatrolTargetPoint.h" },
		{ "ModuleRelativePath", "AI/AI1/AI1_PatrolTargetPoint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAI1_PatrolTargetPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI1_PatrolTargetPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAI1_PatrolTargetPoint_Statics::ClassParams = {
		&AAI1_PatrolTargetPoint::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAI1_PatrolTargetPoint_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAI1_PatrolTargetPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAI1_PatrolTargetPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAI1_PatrolTargetPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAI1_PatrolTargetPoint, 859031062);
	template<> LASTRESISTERS_API UClass* StaticClass<AAI1_PatrolTargetPoint>()
	{
		return AAI1_PatrolTargetPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAI1_PatrolTargetPoint(Z_Construct_UClass_AAI1_PatrolTargetPoint, &AAI1_PatrolTargetPoint::StaticClass, TEXT("/Script/LastResisters"), TEXT("AAI1_PatrolTargetPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAI1_PatrolTargetPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
