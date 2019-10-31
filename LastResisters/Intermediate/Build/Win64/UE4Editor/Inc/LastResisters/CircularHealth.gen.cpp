// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LastResisters/UI/CircularHealth/CircularHealth.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCircularHealth() {}
// Cross Module References
	LASTRESISTERS_API UScriptStruct* Z_Construct_UScriptStruct_FCircularHealth();
	UPackage* Z_Construct_UPackage__Script_LastResisters();
	LASTRESISTERS_API UScriptStruct* Z_Construct_UScriptStruct_FCircularHealthParameters();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FCircularHealth::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LASTRESISTERS_API uint32 Get_Z_Construct_UScriptStruct_FCircularHealth_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCircularHealth, Z_Construct_UPackage__Script_LastResisters(), TEXT("CircularHealth"), sizeof(FCircularHealth), Get_Z_Construct_UScriptStruct_FCircularHealth_Hash());
	}
	return Singleton;
}
template<> LASTRESISTERS_API UScriptStruct* StaticStruct<FCircularHealth>()
{
	return FCircularHealth::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCircularHealth(FCircularHealth::StaticStruct, TEXT("/Script/LastResisters"), TEXT("CircularHealth"), false, nullptr, nullptr);
static struct FScriptStruct_LastResisters_StaticRegisterNativesFCircularHealth
{
	FScriptStruct_LastResisters_StaticRegisterNativesFCircularHealth()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CircularHealth")),new UScriptStruct::TCppStructOps<FCircularHealth>);
	}
} ScriptStruct_LastResisters_StaticRegisterNativesFCircularHealth;
	struct Z_Construct_UScriptStruct_FCircularHealth_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_circularHealthParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_circularHealthParameters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackWaveTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackWaveTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontWaveTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FrontWaveTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCircularHealth_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "UI/CircularHealth/CircularHealth.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCircularHealth_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCircularHealth>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCircularHealth_Statics::NewProp_circularHealthParameters_MetaData[] = {
		{ "Category", "CircularHealth" },
		{ "ModuleRelativePath", "UI/CircularHealth/CircularHealth.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCircularHealth_Statics::NewProp_circularHealthParameters = { "circularHealthParameters", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCircularHealth, circularHealthParameters), Z_Construct_UScriptStruct_FCircularHealthParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FCircularHealth_Statics::NewProp_circularHealthParameters_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCircularHealth_Statics::NewProp_circularHealthParameters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCircularHealth_Statics::NewProp_BackWaveTexture_MetaData[] = {
		{ "Category", "CircularHealth" },
		{ "ModuleRelativePath", "UI/CircularHealth/CircularHealth.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCircularHealth_Statics::NewProp_BackWaveTexture = { "BackWaveTexture", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCircularHealth, BackWaveTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCircularHealth_Statics::NewProp_BackWaveTexture_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCircularHealth_Statics::NewProp_BackWaveTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCircularHealth_Statics::NewProp_FrontWaveTexture_MetaData[] = {
		{ "Category", "CircularHealth" },
		{ "Comment", "//Texture we'll set as a parameter to our dynamic material instance\n" },
		{ "ModuleRelativePath", "UI/CircularHealth/CircularHealth.h" },
		{ "ToolTip", "Texture we'll set as a parameter to our dynamic material instance" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCircularHealth_Statics::NewProp_FrontWaveTexture = { "FrontWaveTexture", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCircularHealth, FrontWaveTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCircularHealth_Statics::NewProp_FrontWaveTexture_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCircularHealth_Statics::NewProp_FrontWaveTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCircularHealth_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "CircularHealth" },
		{ "Comment", "//Our base material that will be the template for our material instance\n" },
		{ "ModuleRelativePath", "UI/CircularHealth/CircularHealth.h" },
		{ "ToolTip", "Our base material that will be the template for our material instance" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCircularHealth_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCircularHealth, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCircularHealth_Statics::NewProp_Material_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCircularHealth_Statics::NewProp_Material_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCircularHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCircularHealth_Statics::NewProp_circularHealthParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCircularHealth_Statics::NewProp_BackWaveTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCircularHealth_Statics::NewProp_FrontWaveTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCircularHealth_Statics::NewProp_Material,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCircularHealth_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LastResisters,
		nullptr,
		&NewStructOps,
		"CircularHealth",
		sizeof(FCircularHealth),
		alignof(FCircularHealth),
		Z_Construct_UScriptStruct_FCircularHealth_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCircularHealth_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCircularHealth_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCircularHealth_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCircularHealth()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCircularHealth_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LastResisters();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CircularHealth"), sizeof(FCircularHealth), Get_Z_Construct_UScriptStruct_FCircularHealth_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCircularHealth_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCircularHealth_Hash() { return 1894527718U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
