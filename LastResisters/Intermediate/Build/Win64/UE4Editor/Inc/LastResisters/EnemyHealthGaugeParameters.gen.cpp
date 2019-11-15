// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LastResisters/UI/EnemyUI/HealthGauge/EnemyHealthGaugeParameters.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyHealthGaugeParameters() {}
// Cross Module References
	LASTRESISTERS_API UScriptStruct* Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters();
	UPackage* Z_Construct_UPackage__Script_LastResisters();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
class UScriptStruct* FEnemyHealthGaugeParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LASTRESISTERS_API uint32 Get_Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters, Z_Construct_UPackage__Script_LastResisters(), TEXT("EnemyHealthGaugeParameters"), sizeof(FEnemyHealthGaugeParameters), Get_Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters_Hash());
	}
	return Singleton;
}
template<> LASTRESISTERS_API UScriptStruct* StaticStruct<FEnemyHealthGaugeParameters>()
{
	return FEnemyHealthGaugeParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEnemyHealthGaugeParameters(FEnemyHealthGaugeParameters::StaticStruct, TEXT("/Script/LastResisters"), TEXT("EnemyHealthGaugeParameters"), false, nullptr, nullptr);
static struct FScriptStruct_LastResisters_StaticRegisterNativesFEnemyHealthGaugeParameters
{
	FScriptStruct_LastResisters_StaticRegisterNativesFEnemyHealthGaugeParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EnemyHealthGaugeParameters")),new UScriptStruct::TCppStructOps<FEnemyHealthGaugeParameters>);
	}
} ScriptStruct_LastResisters_StaticRegisterNativesFEnemyHealthGaugeParameters;
	struct Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gaugeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gaugeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_useTexture_MetaData[];
#endif
		static void NewProp_useTexture_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_useTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_percentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_percentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_brightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_brightness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "UI/EnemyUI/HealthGauge/EnemyHealthGaugeParameters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnemyHealthGaugeParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters_Statics::NewProp_gaugeColor_MetaData[] = {
		{ "Category", "EnemyHealthGaugeParameters" },
		{ "Comment", "//The color of the progres if no texture is used.\n" },
		{ "ModuleRelativePath", "UI/EnemyUI/HealthGauge/EnemyHealthGaugeParameters.h" },
		{ "ToolTip", "The color of the progres if no texture is used." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters_Statics::NewProp_gaugeColor = { "gaugeColor", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyHealthGaugeParameters, gaugeColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters_Statics::NewProp_gaugeColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters_Statics::NewProp_gaugeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters_Statics::NewProp_useTexture_MetaData[] = {
		{ "Category", "EnemyHealthGaugeParameters" },
		{ "Comment", "//Do we want to use a texture?\n" },
		{ "ModuleRelativePath", "UI/EnemyUI/HealthGauge/EnemyHealthGaugeParameters.h" },
		{ "ToolTip", "Do we want to use a texture?" },
	};
#endif
	void Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters_Statics::NewProp_useTexture_SetBit(void* Obj)
	{
		((FEnemyHealthGaugeParameters*)Obj)->useTexture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters_Statics::NewProp_useTexture = { "useTexture", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEnemyHealthGaugeParameters), &Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters_Statics::NewProp_useTexture_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters_Statics::NewProp_useTexture_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters_Statics::NewProp_useTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters_Statics::NewProp_percentage_MetaData[] = {
		{ "Category", "EnemyHealthGaugeParameters" },
		{ "Comment", "//The progress of the image in the range of 0 to 1.\n" },
		{ "ModuleRelativePath", "UI/EnemyUI/HealthGauge/EnemyHealthGaugeParameters.h" },
		{ "ToolTip", "The progress of the image in the range of 0 to 1." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters_Statics::NewProp_percentage = { "percentage", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyHealthGaugeParameters, percentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters_Statics::NewProp_percentage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters_Statics::NewProp_percentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters_Statics::NewProp_brightness_MetaData[] = {
		{ "Category", "EnemyHealthGaugeParameters" },
		{ "Comment", "//The brightness multiplier of the texture\n" },
		{ "ModuleRelativePath", "UI/EnemyUI/HealthGauge/EnemyHealthGaugeParameters.h" },
		{ "ToolTip", "The brightness multiplier of the texture" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters_Statics::NewProp_brightness = { "brightness", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyHealthGaugeParameters, brightness), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters_Statics::NewProp_brightness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters_Statics::NewProp_brightness_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters_Statics::NewProp_gaugeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters_Statics::NewProp_useTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters_Statics::NewProp_percentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters_Statics::NewProp_brightness,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LastResisters,
		nullptr,
		&NewStructOps,
		"EnemyHealthGaugeParameters",
		sizeof(FEnemyHealthGaugeParameters),
		alignof(FEnemyHealthGaugeParameters),
		Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LastResisters();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EnemyHealthGaugeParameters"), sizeof(FEnemyHealthGaugeParameters), Get_Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters_Hash() { return 2765524891U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
