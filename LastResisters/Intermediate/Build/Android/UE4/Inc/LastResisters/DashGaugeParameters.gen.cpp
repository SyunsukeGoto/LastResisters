// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LastResisters/UI/DashGauge/DashGaugeParameters.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDashGaugeParameters() {}
// Cross Module References
	LASTRESISTERS_API UScriptStruct* Z_Construct_UScriptStruct_FDashGaugeParameters();
	UPackage* Z_Construct_UPackage__Script_LastResisters();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
class UScriptStruct* FDashGaugeParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LASTRESISTERS_API uint32 Get_Z_Construct_UScriptStruct_FDashGaugeParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDashGaugeParameters, Z_Construct_UPackage__Script_LastResisters(), TEXT("DashGaugeParameters"), sizeof(FDashGaugeParameters), Get_Z_Construct_UScriptStruct_FDashGaugeParameters_Hash());
	}
	return Singleton;
}
template<> LASTRESISTERS_API UScriptStruct* StaticStruct<FDashGaugeParameters>()
{
	return FDashGaugeParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDashGaugeParameters(FDashGaugeParameters::StaticStruct, TEXT("/Script/LastResisters"), TEXT("DashGaugeParameters"), false, nullptr, nullptr);
static struct FScriptStruct_LastResisters_StaticRegisterNativesFDashGaugeParameters
{
	FScriptStruct_LastResisters_StaticRegisterNativesFDashGaugeParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DashGaugeParameters")),new UScriptStruct::TCppStructOps<FDashGaugeParameters>);
	}
} ScriptStruct_LastResisters_StaticRegisterNativesFDashGaugeParameters;
	struct Z_Construct_UScriptStruct_FDashGaugeParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_textureTimeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_textureTimeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_textureScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_textureScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_panSpeeds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_panSpeeds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_initialRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_initialRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_desiredRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_desiredRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_brightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_brightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_percent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_percent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n  * This struct holds all the parameters that the gauge has\n  * I have made this accessible from the editor so change it from there.\n  */" },
		{ "ModuleRelativePath", "UI/DashGauge/DashGaugeParameters.h" },
		{ "ToolTip", "This struct holds all the parameters that the gauge has\nI have made this accessible from the editor so change it from there." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDashGaugeParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::NewProp_textureTimeScale_MetaData[] = {
		{ "Category", "DashGaugeParameters" },
		{ "Comment", "//This is the deltaTime of the entire texture moving.\n" },
		{ "ModuleRelativePath", "UI/DashGauge/DashGaugeParameters.h" },
		{ "ToolTip", "This is the deltaTime of the entire texture moving." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::NewProp_textureTimeScale = { "textureTimeScale", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDashGaugeParameters, textureTimeScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::NewProp_textureTimeScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::NewProp_textureTimeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::NewProp_textureScale_MetaData[] = {
		{ "Category", "DashGaugeParameters" },
		{ "Comment", "//How big the texture mapped on the circle.\n" },
		{ "ModuleRelativePath", "UI/DashGauge/DashGaugeParameters.h" },
		{ "ToolTip", "How big the texture mapped on the circle." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::NewProp_textureScale = { "textureScale", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDashGaugeParameters, textureScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::NewProp_textureScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::NewProp_textureScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::NewProp_panSpeeds_MetaData[] = {
		{ "Category", "DashGaugeParameters" },
		{ "Comment", "//The speed in coordinates to move the texture\n" },
		{ "ModuleRelativePath", "UI/DashGauge/DashGaugeParameters.h" },
		{ "ToolTip", "The speed in coordinates to move the texture" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::NewProp_panSpeeds = { "panSpeeds", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDashGaugeParameters, panSpeeds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::NewProp_panSpeeds_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::NewProp_panSpeeds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::NewProp_initialRadius_MetaData[] = {
		{ "Category", "DashGaugeParameters" },
		{ "Comment", "//The distance offset from the center(0.5,0.5) to start drawing the circle\n" },
		{ "ModuleRelativePath", "UI/DashGauge/DashGaugeParameters.h" },
		{ "ToolTip", "The distance offset from the center(0.5,0.5) to start drawing the circle" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::NewProp_initialRadius = { "initialRadius", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDashGaugeParameters, initialRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::NewProp_initialRadius_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::NewProp_initialRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::NewProp_desiredRadius_MetaData[] = {
		{ "Category", "DashGaugeParameters" },
		{ "Comment", "//How thick you want the circle to be\n" },
		{ "ModuleRelativePath", "UI/DashGauge/DashGaugeParameters.h" },
		{ "ToolTip", "How thick you want the circle to be" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::NewProp_desiredRadius = { "desiredRadius", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDashGaugeParameters, desiredRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::NewProp_desiredRadius_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::NewProp_desiredRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::NewProp_brightness_MetaData[] = {
		{ "Category", "DashGaugeParameters" },
		{ "Comment", "//The brightness of the image;\n" },
		{ "ModuleRelativePath", "UI/DashGauge/DashGaugeParameters.h" },
		{ "ToolTip", "The brightness of the image;" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::NewProp_brightness = { "brightness", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDashGaugeParameters, brightness), METADATA_PARAMS(Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::NewProp_brightness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::NewProp_brightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::NewProp_percent_MetaData[] = {
		{ "Category", "DashGaugeParameters" },
		{ "Comment", "//The progress of the image in the range of 0 to 1.\n" },
		{ "ModuleRelativePath", "UI/DashGauge/DashGaugeParameters.h" },
		{ "ToolTip", "The progress of the image in the range of 0 to 1." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::NewProp_percent = { "percent", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDashGaugeParameters, percent), METADATA_PARAMS(Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::NewProp_percent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::NewProp_percent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::NewProp_textureTimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::NewProp_textureScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::NewProp_panSpeeds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::NewProp_initialRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::NewProp_desiredRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::NewProp_brightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::NewProp_percent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LastResisters,
		nullptr,
		&NewStructOps,
		"DashGaugeParameters",
		sizeof(FDashGaugeParameters),
		alignof(FDashGaugeParameters),
		Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDashGaugeParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDashGaugeParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LastResisters();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DashGaugeParameters"), sizeof(FDashGaugeParameters), Get_Z_Construct_UScriptStruct_FDashGaugeParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDashGaugeParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDashGaugeParameters_Hash() { return 1550718223U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
