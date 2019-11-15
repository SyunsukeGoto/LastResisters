// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LastResisters/AI/AI2/AI2_PatrolTargetPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI2_PatrolTargetPoint() {}
// Cross Module References
	LASTRESISTERS_API UClass* Z_Construct_UClass_AAI2_PatrolTargetPoint_NoRegister();
	LASTRESISTERS_API UClass* Z_Construct_UClass_AAI2_PatrolTargetPoint();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint();
	UPackage* Z_Construct_UPackage__Script_LastResisters();
// End Cross Module References
	void AAI2_PatrolTargetPoint::StaticRegisterNativesAAI2_PatrolTargetPoint()
	{
	}
	UClass* Z_Construct_UClass_AAI2_PatrolTargetPoint_NoRegister()
	{
		return AAI2_PatrolTargetPoint::StaticClass();
	}
	struct Z_Construct_UClass_AAI2_PatrolTargetPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAI2_PatrolTargetPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATargetPoint,
		(UObject* (*)())Z_Construct_UPackage__Script_LastResisters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI2_PatrolTargetPoint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/AI2/AI2_PatrolTargetPoint.h" },
		{ "ModuleRelativePath", "AI/AI2/AI2_PatrolTargetPoint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAI2_PatrolTargetPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI2_PatrolTargetPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAI2_PatrolTargetPoint_Statics::ClassParams = {
		&AAI2_PatrolTargetPoint::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAI2_PatrolTargetPoint_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAI2_PatrolTargetPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAI2_PatrolTargetPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAI2_PatrolTargetPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAI2_PatrolTargetPoint, 3026609576);
	template<> LASTRESISTERS_API UClass* StaticClass<AAI2_PatrolTargetPoint>()
	{
		return AAI2_PatrolTargetPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAI2_PatrolTargetPoint(Z_Construct_UClass_AAI2_PatrolTargetPoint, &AAI2_PatrolTargetPoint::StaticClass, TEXT("/Script/LastResisters"), TEXT("AAI2_PatrolTargetPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAI2_PatrolTargetPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
