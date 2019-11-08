// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LastResisters/AI/AI1/AI1_Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI1_Character() {}
// Cross Module References
	LASTRESISTERS_API UClass* Z_Construct_UClass_AAI1_Character_NoRegister();
	LASTRESISTERS_API UClass* Z_Construct_UClass_AAI1_Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_LastResisters();
	LASTRESISTERS_API UFunction* Z_Construct_UFunction_AAI1_Character_OnSeePlayer();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	void AAI1_Character::StaticRegisterNativesAAI1_Character()
	{
		UClass* Class = AAI1_Character::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSeePlayer", &AAI1_Character::execOnSeePlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAI1_Character_OnSeePlayer_Statics
	{
		struct AI1_Character_eventOnSeePlayer_Parms
		{
			APawn* _pawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAI1_Character_OnSeePlayer_Statics::NewProp__pawn = { "_pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI1_Character_eventOnSeePlayer_Parms, _pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAI1_Character_OnSeePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI1_Character_OnSeePlayer_Statics::NewProp__pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAI1_Character_OnSeePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/AI1/AI1_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAI1_Character_OnSeePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAI1_Character, nullptr, "OnSeePlayer", nullptr, nullptr, sizeof(AI1_Character_eventOnSeePlayer_Parms), Z_Construct_UFunction_AAI1_Character_OnSeePlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAI1_Character_OnSeePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAI1_Character_OnSeePlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAI1_Character_OnSeePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAI1_Character_OnSeePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAI1_Character_OnSeePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAI1_Character_NoRegister()
	{
		return AAI1_Character::StaticClass();
	}
	struct Z_Construct_UClass_AAI1_Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pawnSensingComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pawnSensingComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_behaviorTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_behaviorTree;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAI1_Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_LastResisters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAI1_Character_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAI1_Character_OnSeePlayer, "OnSeePlayer" }, // 462769212
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI1_Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/AI1/AI1_Character.h" },
		{ "ModuleRelativePath", "AI/AI1/AI1_Character.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI1_Character_Statics::NewProp_m_pawnSensingComp_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/*The Component which is used for the \"seeing\" sense of the AI*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/AI1/AI1_Character.h" },
		{ "ToolTip", "The Component which is used for the \"seeing\" sense of the AI" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAI1_Character_Statics::NewProp_m_pawnSensingComp = { "m_pawnSensingComp", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI1_Character, m_pawnSensingComp), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAI1_Character_Statics::NewProp_m_pawnSensingComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAI1_Character_Statics::NewProp_m_pawnSensingComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI1_Character_Statics::NewProp_m_behaviorTree_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/AI1/AI1_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAI1_Character_Statics::NewProp_m_behaviorTree = { "m_behaviorTree", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI1_Character, m_behaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAI1_Character_Statics::NewProp_m_behaviorTree_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAI1_Character_Statics::NewProp_m_behaviorTree_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAI1_Character_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI1_Character_Statics::NewProp_m_pawnSensingComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI1_Character_Statics::NewProp_m_behaviorTree,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAI1_Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI1_Character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAI1_Character_Statics::ClassParams = {
		&AAI1_Character::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAI1_Character_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AAI1_Character_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAI1_Character_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAI1_Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAI1_Character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAI1_Character_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAI1_Character, 1659582565);
	template<> LASTRESISTERS_API UClass* StaticClass<AAI1_Character>()
	{
		return AAI1_Character::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAI1_Character(Z_Construct_UClass_AAI1_Character, &AAI1_Character::StaticClass, TEXT("/Script/LastResisters"), TEXT("AAI1_Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAI1_Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
