// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LastResisters/UI/PlayerUI/PlayerHitUI/PlayerHitUIParameters.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerHitUIParameters() {}
// Cross Module References
	LASTRESISTERS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerHitUIParameters();
	UPackage* Z_Construct_UPackage__Script_LastResisters();
// End Cross Module References
class UScriptStruct* FPlayerHitUIParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LASTRESISTERS_API uint32 Get_Z_Construct_UScriptStruct_FPlayerHitUIParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerHitUIParameters, Z_Construct_UPackage__Script_LastResisters(), TEXT("PlayerHitUIParameters"), sizeof(FPlayerHitUIParameters), Get_Z_Construct_UScriptStruct_FPlayerHitUIParameters_Hash());
	}
	return Singleton;
}
template<> LASTRESISTERS_API UScriptStruct* StaticStruct<FPlayerHitUIParameters>()
{
	return FPlayerHitUIParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerHitUIParameters(FPlayerHitUIParameters::StaticStruct, TEXT("/Script/LastResisters"), TEXT("PlayerHitUIParameters"), false, nullptr, nullptr);
static struct FScriptStruct_LastResisters_StaticRegisterNativesFPlayerHitUIParameters
{
	FScriptStruct_LastResisters_StaticRegisterNativesFPlayerHitUIParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlayerHitUIParameters")),new UScriptStruct::TCppStructOps<FPlayerHitUIParameters>);
	}
} ScriptStruct_LastResisters_StaticRegisterNativesFPlayerHitUIParameters;
	struct Z_Construct_UScriptStruct_FPlayerHitUIParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerHitUIParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "UI/PlayerUI/PlayerHitUI/PlayerHitUIParameters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerHitUIParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerHitUIParameters>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerHitUIParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LastResisters,
		nullptr,
		&NewStructOps,
		"PlayerHitUIParameters",
		sizeof(FPlayerHitUIParameters),
		alignof(FPlayerHitUIParameters),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerHitUIParameters_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerHitUIParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerHitUIParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerHitUIParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LastResisters();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerHitUIParameters"), sizeof(FPlayerHitUIParameters), Get_Z_Construct_UScriptStruct_FPlayerHitUIParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerHitUIParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerHitUIParameters_Hash() { return 1494821355U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
