// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LastResisters/UI/PlayerUI/CircularHealth/CircularHealthParameters.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCircularHealthParameters() {}
// Cross Module References
	LASTRESISTERS_API UScriptStruct* Z_Construct_UScriptStruct_FCircularHealthParameters();
	UPackage* Z_Construct_UPackage__Script_LastResisters();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
class UScriptStruct* FCircularHealthParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LASTRESISTERS_API uint32 Get_Z_Construct_UScriptStruct_FCircularHealthParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCircularHealthParameters, Z_Construct_UPackage__Script_LastResisters(), TEXT("CircularHealthParameters"), sizeof(FCircularHealthParameters), Get_Z_Construct_UScriptStruct_FCircularHealthParameters_Hash());
	}
	return Singleton;
}
template<> LASTRESISTERS_API UScriptStruct* StaticStruct<FCircularHealthParameters>()
{
	return FCircularHealthParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCircularHealthParameters(FCircularHealthParameters::StaticStruct, TEXT("/Script/LastResisters"), TEXT("CircularHealthParameters"), false, nullptr, nullptr);
static struct FScriptStruct_LastResisters_StaticRegisterNativesFCircularHealthParameters
{
	FScriptStruct_LastResisters_StaticRegisterNativesFCircularHealthParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CircularHealthParameters")),new UScriptStruct::TCppStructOps<FCircularHealthParameters>);
	}
} ScriptStruct_LastResisters_StaticRegisterNativesFCircularHealthParameters;
	struct Z_Construct_UScriptStruct_FCircularHealthParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vTiling_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_vTiling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_uTiling_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_uTiling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_backWavePanSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_backWavePanSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_frontWavePanSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_frontWavePanSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_frontWaveTextureTimeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_frontWaveTextureTimeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_frontWaveTextureScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_frontWaveTextureScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_frontWaveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_frontWaveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_backWaveTextureTimeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_backWaveTextureTimeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_backWaveTextureScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_backWaveTextureScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_backWaveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_backWaveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fillPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fillPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_useTwoWaves_MetaData[];
#endif
		static void NewProp_useTwoWaves_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_useTwoWaves;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n   *This struct makes it easier to instantiate a healthbar, such that all the parameters are already here.\n   * Initialize more of these if you have more healthbars.\n   */" },
		{ "ModuleRelativePath", "UI/PlayerUI/CircularHealth/CircularHealthParameters.h" },
		{ "ToolTip", "This struct makes it easier to instantiate a healthbar, such that all the parameters are already here.\nInitialize more of these if you have more healthbars." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCircularHealthParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_vTiling_MetaData[] = {
		{ "Category", "CircularHealthParameters" },
		{ "Comment", "//VTiling\n" },
		{ "ModuleRelativePath", "UI/PlayerUI/CircularHealth/CircularHealthParameters.h" },
		{ "ToolTip", "VTiling" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_vTiling = { "vTiling", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCircularHealthParameters, vTiling), METADATA_PARAMS(Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_vTiling_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_vTiling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_uTiling_MetaData[] = {
		{ "Category", "CircularHealthParameters" },
		{ "Comment", "//UTiling\n" },
		{ "ModuleRelativePath", "UI/PlayerUI/CircularHealth/CircularHealthParameters.h" },
		{ "ToolTip", "UTiling" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_uTiling = { "uTiling", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCircularHealthParameters, uTiling), METADATA_PARAMS(Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_uTiling_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_uTiling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_backWavePanSpeed_MetaData[] = {
		{ "Category", "CircularHealthParameters" },
		{ "Comment", "//The speed in which the texture moves for the back wave\n" },
		{ "ModuleRelativePath", "UI/PlayerUI/CircularHealth/CircularHealthParameters.h" },
		{ "ToolTip", "The speed in which the texture moves for the back wave" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_backWavePanSpeed = { "backWavePanSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCircularHealthParameters, backWavePanSpeed), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_backWavePanSpeed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_backWavePanSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_frontWavePanSpeed_MetaData[] = {
		{ "Category", "CircularHealthParameters" },
		{ "Comment", "//The speed in which the texture moves for the front wave\n" },
		{ "ModuleRelativePath", "UI/PlayerUI/CircularHealth/CircularHealthParameters.h" },
		{ "ToolTip", "The speed in which the texture moves for the front wave" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_frontWavePanSpeed = { "frontWavePanSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCircularHealthParameters, frontWavePanSpeed), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_frontWavePanSpeed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_frontWavePanSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_frontWaveTextureTimeScale_MetaData[] = {
		{ "Category", "CircularHealthParameters" },
		{ "Comment", "//The deltaTime scale multplier for the front wave\n" },
		{ "ModuleRelativePath", "UI/PlayerUI/CircularHealth/CircularHealthParameters.h" },
		{ "ToolTip", "The deltaTime scale multplier for the front wave" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_frontWaveTextureTimeScale = { "frontWaveTextureTimeScale", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCircularHealthParameters, frontWaveTextureTimeScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_frontWaveTextureTimeScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_frontWaveTextureTimeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_frontWaveTextureScale_MetaData[] = {
		{ "Category", "CircularHealthParameters" },
		{ "Comment", "//The texture scale for the front wave\n" },
		{ "ModuleRelativePath", "UI/PlayerUI/CircularHealth/CircularHealthParameters.h" },
		{ "ToolTip", "The texture scale for the front wave" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_frontWaveTextureScale = { "frontWaveTextureScale", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCircularHealthParameters, frontWaveTextureScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_frontWaveTextureScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_frontWaveTextureScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_frontWaveSpeed_MetaData[] = {
		{ "Category", "CircularHealthParameters" },
		{ "Comment", "//The speed in which the front wave moves\n" },
		{ "ModuleRelativePath", "UI/PlayerUI/CircularHealth/CircularHealthParameters.h" },
		{ "ToolTip", "The speed in which the front wave moves" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_frontWaveSpeed = { "frontWaveSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCircularHealthParameters, frontWaveSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_frontWaveSpeed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_frontWaveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_backWaveTextureTimeScale_MetaData[] = {
		{ "Category", "CircularHealthParameters" },
		{ "Comment", "//The deltaTime scale multplier for the back wave\n" },
		{ "ModuleRelativePath", "UI/PlayerUI/CircularHealth/CircularHealthParameters.h" },
		{ "ToolTip", "The deltaTime scale multplier for the back wave" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_backWaveTextureTimeScale = { "backWaveTextureTimeScale", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCircularHealthParameters, backWaveTextureTimeScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_backWaveTextureTimeScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_backWaveTextureTimeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_backWaveTextureScale_MetaData[] = {
		{ "Category", "CircularHealthParameters" },
		{ "Comment", "//The texture scale for the back wave\n" },
		{ "ModuleRelativePath", "UI/PlayerUI/CircularHealth/CircularHealthParameters.h" },
		{ "ToolTip", "The texture scale for the back wave" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_backWaveTextureScale = { "backWaveTextureScale", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCircularHealthParameters, backWaveTextureScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_backWaveTextureScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_backWaveTextureScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_backWaveSpeed_MetaData[] = {
		{ "Category", "CircularHealthParameters" },
		{ "Comment", "//The speed in which the back wave moves\n" },
		{ "ModuleRelativePath", "UI/PlayerUI/CircularHealth/CircularHealthParameters.h" },
		{ "ToolTip", "The speed in which the back wave moves" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_backWaveSpeed = { "backWaveSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCircularHealthParameters, backWaveSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_backWaveSpeed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_backWaveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_fillPercentage_MetaData[] = {
		{ "Category", "CircularHealthParameters" },
		{ "Comment", "//The fill percentage of the image (0.5 being half)\n" },
		{ "ModuleRelativePath", "UI/PlayerUI/CircularHealth/CircularHealthParameters.h" },
		{ "ToolTip", "The fill percentage of the image (0.5 being half)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_fillPercentage = { "fillPercentage", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCircularHealthParameters, fillPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_fillPercentage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_fillPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_useTwoWaves_MetaData[] = {
		{ "Category", "CircularHealthParameters" },
		{ "ModuleRelativePath", "UI/PlayerUI/CircularHealth/CircularHealthParameters.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_useTwoWaves_SetBit(void* Obj)
	{
		((FCircularHealthParameters*)Obj)->useTwoWaves = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_useTwoWaves = { "useTwoWaves", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCircularHealthParameters), &Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_useTwoWaves_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_useTwoWaves_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_useTwoWaves_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_vTiling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_uTiling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_backWavePanSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_frontWavePanSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_frontWaveTextureTimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_frontWaveTextureScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_frontWaveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_backWaveTextureTimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_backWaveTextureScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_backWaveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_fillPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::NewProp_useTwoWaves,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LastResisters,
		nullptr,
		&NewStructOps,
		"CircularHealthParameters",
		sizeof(FCircularHealthParameters),
		alignof(FCircularHealthParameters),
		Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCircularHealthParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCircularHealthParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LastResisters();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CircularHealthParameters"), sizeof(FCircularHealthParameters), Get_Z_Construct_UScriptStruct_FCircularHealthParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCircularHealthParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCircularHealthParameters_Hash() { return 933240687U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
