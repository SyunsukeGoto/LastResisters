// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LastResisters/UI/PlayerUI/PlayerHitUI/PlayerHitIndicator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerHitIndicator() {}
// Cross Module References
	LASTRESISTERS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerHitIndicator();
	UPackage* Z_Construct_UPackage__Script_LastResisters();
	LASTRESISTERS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerHitUIParameters();
// End Cross Module References
class UScriptStruct* FPlayerHitIndicator::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LASTRESISTERS_API uint32 Get_Z_Construct_UScriptStruct_FPlayerHitIndicator_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerHitIndicator, Z_Construct_UPackage__Script_LastResisters(), TEXT("PlayerHitIndicator"), sizeof(FPlayerHitIndicator), Get_Z_Construct_UScriptStruct_FPlayerHitIndicator_Hash());
	}
	return Singleton;
}
template<> LASTRESISTERS_API UScriptStruct* StaticStruct<FPlayerHitIndicator>()
{
	return FPlayerHitIndicator::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerHitIndicator(FPlayerHitIndicator::StaticStruct, TEXT("/Script/LastResisters"), TEXT("PlayerHitIndicator"), false, nullptr, nullptr);
static struct FScriptStruct_LastResisters_StaticRegisterNativesFPlayerHitIndicator
{
	FScriptStruct_LastResisters_StaticRegisterNativesFPlayerHitIndicator()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlayerHitIndicator")),new UScriptStruct::TCppStructOps<FPlayerHitIndicator>);
	}
} ScriptStruct_LastResisters_StaticRegisterNativesFPlayerHitIndicator;
	struct Z_Construct_UScriptStruct_FPlayerHitIndicator_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerHitParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_playerHitParameters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerHitIndicator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "UI/PlayerUI/PlayerHitUI/PlayerHitIndicator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerHitIndicator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerHitIndicator>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerHitIndicator_Statics::NewProp_playerHitParameters_MetaData[] = {
		{ "Category", "PlayerHitIndicator" },
		{ "ModuleRelativePath", "UI/PlayerUI/PlayerHitUI/PlayerHitIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerHitIndicator_Statics::NewProp_playerHitParameters = { "playerHitParameters", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerHitIndicator, playerHitParameters), Z_Construct_UScriptStruct_FPlayerHitUIParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerHitIndicator_Statics::NewProp_playerHitParameters_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerHitIndicator_Statics::NewProp_playerHitParameters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerHitIndicator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerHitIndicator_Statics::NewProp_playerHitParameters,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerHitIndicator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LastResisters,
		nullptr,
		&NewStructOps,
		"PlayerHitIndicator",
		sizeof(FPlayerHitIndicator),
		alignof(FPlayerHitIndicator),
		Z_Construct_UScriptStruct_FPlayerHitIndicator_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerHitIndicator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerHitIndicator_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerHitIndicator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerHitIndicator()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerHitIndicator_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LastResisters();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerHitIndicator"), sizeof(FPlayerHitIndicator), Get_Z_Construct_UScriptStruct_FPlayerHitIndicator_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerHitIndicator_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerHitIndicator_Hash() { return 359607157U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
