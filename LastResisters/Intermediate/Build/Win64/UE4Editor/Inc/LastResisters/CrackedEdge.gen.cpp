// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LastResisters/UI/EnemyUI/CrackEdges/CrackedEdge.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrackedEdge() {}
// Cross Module References
	LASTRESISTERS_API UScriptStruct* Z_Construct_UScriptStruct_FCrackedEdge();
	UPackage* Z_Construct_UPackage__Script_LastResisters();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FCrackedEdge::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LASTRESISTERS_API uint32 Get_Z_Construct_UScriptStruct_FCrackedEdge_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrackedEdge, Z_Construct_UPackage__Script_LastResisters(), TEXT("CrackedEdge"), sizeof(FCrackedEdge), Get_Z_Construct_UScriptStruct_FCrackedEdge_Hash());
	}
	return Singleton;
}
template<> LASTRESISTERS_API UScriptStruct* StaticStruct<FCrackedEdge>()
{
	return FCrackedEdge::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCrackedEdge(FCrackedEdge::StaticStruct, TEXT("/Script/LastResisters"), TEXT("CrackedEdge"), false, nullptr, nullptr);
static struct FScriptStruct_LastResisters_StaticRegisterNativesFCrackedEdge
{
	FScriptStruct_LastResisters_StaticRegisterNativesFCrackedEdge()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CrackedEdge")),new UScriptStruct::TCppStructOps<FCrackedEdge>);
	}
} ScriptStruct_LastResisters_StaticRegisterNativesFCrackedEdge;
	struct Z_Construct_UScriptStruct_FCrackedEdge_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageForDisplay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImageForDisplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_amount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrackedEdge_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "UI/EnemyUI/CrackEdges/CrackedEdge.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCrackedEdge_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrackedEdge>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrackedEdge_Statics::NewProp_ImageForDisplay_MetaData[] = {
		{ "Category", "CrackedEdge" },
		{ "ModuleRelativePath", "UI/EnemyUI/CrackEdges/CrackedEdge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCrackedEdge_Statics::NewProp_ImageForDisplay = { "ImageForDisplay", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCrackedEdge, ImageForDisplay), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCrackedEdge_Statics::NewProp_ImageForDisplay_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCrackedEdge_Statics::NewProp_ImageForDisplay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrackedEdge_Statics::NewProp_amount_MetaData[] = {
		{ "Category", "CrackedEdge" },
		{ "Comment", "//Amount before this is activated\n" },
		{ "ModuleRelativePath", "UI/EnemyUI/CrackEdges/CrackedEdge.h" },
		{ "ToolTip", "Amount before this is activated" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCrackedEdge_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCrackedEdge, amount), METADATA_PARAMS(Z_Construct_UScriptStruct_FCrackedEdge_Statics::NewProp_amount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCrackedEdge_Statics::NewProp_amount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrackedEdge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrackedEdge_Statics::NewProp_ImageForDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrackedEdge_Statics::NewProp_amount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrackedEdge_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LastResisters,
		nullptr,
		&NewStructOps,
		"CrackedEdge",
		sizeof(FCrackedEdge),
		alignof(FCrackedEdge),
		Z_Construct_UScriptStruct_FCrackedEdge_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCrackedEdge_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCrackedEdge_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCrackedEdge_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCrackedEdge()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCrackedEdge_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LastResisters();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CrackedEdge"), sizeof(FCrackedEdge), Get_Z_Construct_UScriptStruct_FCrackedEdge_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCrackedEdge_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCrackedEdge_Hash() { return 1914419328U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
