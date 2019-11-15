// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LastResisters/UI/EnemyUI/ArmorGauge/EnemyArmorGaugeParameters.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyArmorGaugeParameters() {}
// Cross Module References
	LASTRESISTERS_API UScriptStruct* Z_Construct_UScriptStruct_FEnemyArmorGaugeParameters();
	UPackage* Z_Construct_UPackage__Script_LastResisters();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
class UScriptStruct* FEnemyArmorGaugeParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LASTRESISTERS_API uint32 Get_Z_Construct_UScriptStruct_FEnemyArmorGaugeParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnemyArmorGaugeParameters, Z_Construct_UPackage__Script_LastResisters(), TEXT("EnemyArmorGaugeParameters"), sizeof(FEnemyArmorGaugeParameters), Get_Z_Construct_UScriptStruct_FEnemyArmorGaugeParameters_Hash());
	}
	return Singleton;
}
template<> LASTRESISTERS_API UScriptStruct* StaticStruct<FEnemyArmorGaugeParameters>()
{
	return FEnemyArmorGaugeParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEnemyArmorGaugeParameters(FEnemyArmorGaugeParameters::StaticStruct, TEXT("/Script/LastResisters"), TEXT("EnemyArmorGaugeParameters"), false, nullptr, nullptr);
static struct FScriptStruct_LastResisters_StaticRegisterNativesFEnemyArmorGaugeParameters
{
	FScriptStruct_LastResisters_StaticRegisterNativesFEnemyArmorGaugeParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EnemyArmorGaugeParameters")),new UScriptStruct::TCppStructOps<FEnemyArmorGaugeParameters>);
	}
} ScriptStruct_LastResisters_StaticRegisterNativesFEnemyArmorGaugeParameters;
	struct Z_Construct_UScriptStruct_FEnemyArmorGaugeParameters_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyArmorGaugeParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n  * This struct holds all the parameters that the gauge has\n  * I have made this accessible from the editor so change it from there.\n  */" },
		{ "ModuleRelativePath", "UI/EnemyUI/ArmorGauge/EnemyArmorGaugeParameters.h" },
		{ "ToolTip", "This struct holds all the parameters that the gauge has\nI have made this accessible from the editor so change it from there." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnemyArmorGaugeParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnemyArmorGaugeParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyArmorGaugeParameters_Statics::NewProp_gaugeColor_MetaData[] = {
		{ "Category", "EnemyArmorGaugeParameters" },
		{ "Comment", "//The color of the progres if no texture is used.\n" },
		{ "ModuleRelativePath", "UI/EnemyUI/ArmorGauge/EnemyArmorGaugeParameters.h" },
		{ "ToolTip", "The color of the progres if no texture is used." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEnemyArmorGaugeParameters_Statics::NewProp_gaugeColor = { "gaugeColor", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyArmorGaugeParameters, gaugeColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyArmorGaugeParameters_Statics::NewProp_gaugeColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyArmorGaugeParameters_Statics::NewProp_gaugeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyArmorGaugeParameters_Statics::NewProp_useTexture_MetaData[] = {
		{ "Category", "EnemyArmorGaugeParameters" },
		{ "Comment", "//Do we want to use a texture?\n" },
		{ "ModuleRelativePath", "UI/EnemyUI/ArmorGauge/EnemyArmorGaugeParameters.h" },
		{ "ToolTip", "Do we want to use a texture?" },
	};
#endif
	void Z_Construct_UScriptStruct_FEnemyArmorGaugeParameters_Statics::NewProp_useTexture_SetBit(void* Obj)
	{
		((FEnemyArmorGaugeParameters*)Obj)->useTexture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEnemyArmorGaugeParameters_Statics::NewProp_useTexture = { "useTexture", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEnemyArmorGaugeParameters), &Z_Construct_UScriptStruct_FEnemyArmorGaugeParameters_Statics::NewProp_useTexture_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyArmorGaugeParameters_Statics::NewProp_useTexture_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyArmorGaugeParameters_Statics::NewProp_useTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyArmorGaugeParameters_Statics::NewProp_percentage_MetaData[] = {
		{ "Category", "EnemyArmorGaugeParameters" },
		{ "Comment", "//The progress of the image in the range of 0 to 1.\n" },
		{ "ModuleRelativePath", "UI/EnemyUI/ArmorGauge/EnemyArmorGaugeParameters.h" },
		{ "ToolTip", "The progress of the image in the range of 0 to 1." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnemyArmorGaugeParameters_Statics::NewProp_percentage = { "percentage", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyArmorGaugeParameters, percentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyArmorGaugeParameters_Statics::NewProp_percentage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyArmorGaugeParameters_Statics::NewProp_percentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyArmorGaugeParameters_Statics::NewProp_brightness_MetaData[] = {
		{ "Category", "EnemyArmorGaugeParameters" },
		{ "Comment", "//The brightness multiplier of the texture\n" },
		{ "ModuleRelativePath", "UI/EnemyUI/ArmorGauge/EnemyArmorGaugeParameters.h" },
		{ "ToolTip", "The brightness multiplier of the texture" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnemyArmorGaugeParameters_Statics::NewProp_brightness = { "brightness", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyArmorGaugeParameters, brightness), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyArmorGaugeParameters_Statics::NewProp_brightness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyArmorGaugeParameters_Statics::NewProp_brightness_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnemyArmorGaugeParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyArmorGaugeParameters_Statics::NewProp_gaugeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyArmorGaugeParameters_Statics::NewProp_useTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyArmorGaugeParameters_Statics::NewProp_percentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyArmorGaugeParameters_Statics::NewProp_brightness,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnemyArmorGaugeParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LastResisters,
		nullptr,
		&NewStructOps,
		"EnemyArmorGaugeParameters",
		sizeof(FEnemyArmorGaugeParameters),
		alignof(FEnemyArmorGaugeParameters),
		Z_Construct_UScriptStruct_FEnemyArmorGaugeParameters_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyArmorGaugeParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyArmorGaugeParameters_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyArmorGaugeParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnemyArmorGaugeParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEnemyArmorGaugeParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LastResisters();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EnemyArmorGaugeParameters"), sizeof(FEnemyArmorGaugeParameters), Get_Z_Construct_UScriptStruct_FEnemyArmorGaugeParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEnemyArmorGaugeParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEnemyArmorGaugeParameters_Hash() { return 980089447U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
