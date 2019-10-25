// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LastResisters/PlayerUI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerUI() {}
// Cross Module References
	LASTRESISTERS_API UScriptStruct* Z_Construct_UScriptStruct_FHealthbar();
	UPackage* Z_Construct_UPackage__Script_LastResisters();
	LASTRESISTERS_API UScriptStruct* Z_Construct_UScriptStruct_FHealthbarParameters();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	LASTRESISTERS_API UScriptStruct* Z_Construct_UScriptStruct_FSpecialGauge();
	LASTRESISTERS_API UScriptStruct* Z_Construct_UScriptStruct_FSpecialGaugeParameters();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	LASTRESISTERS_API UClass* Z_Construct_UClass_UPlayerUI_NoRegister();
	LASTRESISTERS_API UClass* Z_Construct_UClass_UPlayerUI();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
class UScriptStruct* FHealthbar::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LASTRESISTERS_API uint32 Get_Z_Construct_UScriptStruct_FHealthbar_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHealthbar, Z_Construct_UPackage__Script_LastResisters(), TEXT("Healthbar"), sizeof(FHealthbar), Get_Z_Construct_UScriptStruct_FHealthbar_Hash());
	}
	return Singleton;
}
template<> LASTRESISTERS_API UScriptStruct* StaticStruct<FHealthbar>()
{
	return FHealthbar::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHealthbar(FHealthbar::StaticStruct, TEXT("/Script/LastResisters"), TEXT("Healthbar"), false, nullptr, nullptr);
static struct FScriptStruct_LastResisters_StaticRegisterNativesFHealthbar
{
	FScriptStruct_LastResisters_StaticRegisterNativesFHealthbar()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Healthbar")),new UScriptStruct::TCppStructOps<FHealthbar>);
	}
} ScriptStruct_LastResisters_StaticRegisterNativesFHealthbar;
	struct Z_Construct_UScriptStruct_FHealthbar_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_healthbarParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_healthbarParameters;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHealthbar_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "PlayerUI.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHealthbar_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHealthbar>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHealthbar_Statics::NewProp_healthbarParameters_MetaData[] = {
		{ "Category", "Healthbar" },
		{ "ModuleRelativePath", "PlayerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHealthbar_Statics::NewProp_healthbarParameters = { "healthbarParameters", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHealthbar, healthbarParameters), Z_Construct_UScriptStruct_FHealthbarParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FHealthbar_Statics::NewProp_healthbarParameters_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHealthbar_Statics::NewProp_healthbarParameters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHealthbar_Statics::NewProp_BackWaveTexture_MetaData[] = {
		{ "Category", "Healthbar" },
		{ "ModuleRelativePath", "PlayerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHealthbar_Statics::NewProp_BackWaveTexture = { "BackWaveTexture", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHealthbar, BackWaveTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHealthbar_Statics::NewProp_BackWaveTexture_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHealthbar_Statics::NewProp_BackWaveTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHealthbar_Statics::NewProp_FrontWaveTexture_MetaData[] = {
		{ "Category", "Healthbar" },
		{ "Comment", "//Texture we'll set as a parameter to our dynamic material instance\n" },
		{ "ModuleRelativePath", "PlayerUI.h" },
		{ "ToolTip", "Texture we'll set as a parameter to our dynamic material instance" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHealthbar_Statics::NewProp_FrontWaveTexture = { "FrontWaveTexture", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHealthbar, FrontWaveTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHealthbar_Statics::NewProp_FrontWaveTexture_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHealthbar_Statics::NewProp_FrontWaveTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHealthbar_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Healthbar" },
		{ "Comment", "//Our base material that will be the template for our material instance\n" },
		{ "ModuleRelativePath", "PlayerUI.h" },
		{ "ToolTip", "Our base material that will be the template for our material instance" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHealthbar_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHealthbar, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHealthbar_Statics::NewProp_Material_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHealthbar_Statics::NewProp_Material_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHealthbar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHealthbar_Statics::NewProp_healthbarParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHealthbar_Statics::NewProp_BackWaveTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHealthbar_Statics::NewProp_FrontWaveTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHealthbar_Statics::NewProp_Material,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHealthbar_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LastResisters,
		nullptr,
		&NewStructOps,
		"Healthbar",
		sizeof(FHealthbar),
		alignof(FHealthbar),
		Z_Construct_UScriptStruct_FHealthbar_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FHealthbar_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHealthbar_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FHealthbar_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHealthbar()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHealthbar_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LastResisters();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Healthbar"), sizeof(FHealthbar), Get_Z_Construct_UScriptStruct_FHealthbar_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHealthbar_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHealthbar_Hash() { return 857103321U; }
class UScriptStruct* FSpecialGauge::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LASTRESISTERS_API uint32 Get_Z_Construct_UScriptStruct_FSpecialGauge_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpecialGauge, Z_Construct_UPackage__Script_LastResisters(), TEXT("SpecialGauge"), sizeof(FSpecialGauge), Get_Z_Construct_UScriptStruct_FSpecialGauge_Hash());
	}
	return Singleton;
}
template<> LASTRESISTERS_API UScriptStruct* StaticStruct<FSpecialGauge>()
{
	return FSpecialGauge::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpecialGauge(FSpecialGauge::StaticStruct, TEXT("/Script/LastResisters"), TEXT("SpecialGauge"), false, nullptr, nullptr);
static struct FScriptStruct_LastResisters_StaticRegisterNativesFSpecialGauge
{
	FScriptStruct_LastResisters_StaticRegisterNativesFSpecialGauge()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpecialGauge")),new UScriptStruct::TCppStructOps<FSpecialGauge>);
	}
} ScriptStruct_LastResisters_StaticRegisterNativesFSpecialGauge;
	struct Z_Construct_UScriptStruct_FSpecialGauge_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gaugeParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gaugeParameters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialGauge_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "PlayerUI.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpecialGauge_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpecialGauge>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialGauge_Statics::NewProp_gaugeParameters_MetaData[] = {
		{ "Category", "SpecialGauge" },
		{ "ModuleRelativePath", "PlayerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpecialGauge_Statics::NewProp_gaugeParameters = { "gaugeParameters", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialGauge, gaugeParameters), Z_Construct_UScriptStruct_FSpecialGaugeParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialGauge_Statics::NewProp_gaugeParameters_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialGauge_Statics::NewProp_gaugeParameters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialGauge_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "SpecialGauge" },
		{ "Comment", "//Texture we'll set as a parameter to our dynamic material instance\n" },
		{ "ModuleRelativePath", "PlayerUI.h" },
		{ "ToolTip", "Texture we'll set as a parameter to our dynamic material instance" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpecialGauge_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialGauge, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialGauge_Statics::NewProp_Texture_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialGauge_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialGauge_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "SpecialGauge" },
		{ "Comment", "//Our base material that will be the template for our material instance\n" },
		{ "ModuleRelativePath", "PlayerUI.h" },
		{ "ToolTip", "Our base material that will be the template for our material instance" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpecialGauge_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialGauge, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialGauge_Statics::NewProp_Material_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialGauge_Statics::NewProp_Material_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpecialGauge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialGauge_Statics::NewProp_gaugeParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialGauge_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialGauge_Statics::NewProp_Material,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpecialGauge_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LastResisters,
		nullptr,
		&NewStructOps,
		"SpecialGauge",
		sizeof(FSpecialGauge),
		alignof(FSpecialGauge),
		Z_Construct_UScriptStruct_FSpecialGauge_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialGauge_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialGauge_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialGauge_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpecialGauge()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpecialGauge_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LastResisters();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpecialGauge"), sizeof(FSpecialGauge), Get_Z_Construct_UScriptStruct_FSpecialGauge_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpecialGauge_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpecialGauge_Hash() { return 3515356130U; }
class UScriptStruct* FHealthbarParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LASTRESISTERS_API uint32 Get_Z_Construct_UScriptStruct_FHealthbarParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHealthbarParameters, Z_Construct_UPackage__Script_LastResisters(), TEXT("HealthbarParameters"), sizeof(FHealthbarParameters), Get_Z_Construct_UScriptStruct_FHealthbarParameters_Hash());
	}
	return Singleton;
}
template<> LASTRESISTERS_API UScriptStruct* StaticStruct<FHealthbarParameters>()
{
	return FHealthbarParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHealthbarParameters(FHealthbarParameters::StaticStruct, TEXT("/Script/LastResisters"), TEXT("HealthbarParameters"), false, nullptr, nullptr);
static struct FScriptStruct_LastResisters_StaticRegisterNativesFHealthbarParameters
{
	FScriptStruct_LastResisters_StaticRegisterNativesFHealthbarParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HealthbarParameters")),new UScriptStruct::TCppStructOps<FHealthbarParameters>);
	}
} ScriptStruct_LastResisters_StaticRegisterNativesFHealthbarParameters;
	struct Z_Construct_UScriptStruct_FHealthbarParameters_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHealthbarParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *This struct makes it easier to instantiate a healthbar, such that all the parameters are already here.\n * Initialize more of these if you have more healthbars.\n */" },
		{ "ModuleRelativePath", "PlayerUI.h" },
		{ "ToolTip", "This struct makes it easier to instantiate a healthbar, such that all the parameters are already here.\nInitialize more of these if you have more healthbars." },
	};
#endif
	void* Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHealthbarParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_vTiling_MetaData[] = {
		{ "Category", "HealthbarParameters" },
		{ "Comment", "//VTiling\n" },
		{ "ModuleRelativePath", "PlayerUI.h" },
		{ "ToolTip", "VTiling" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_vTiling = { "vTiling", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHealthbarParameters, vTiling), METADATA_PARAMS(Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_vTiling_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_vTiling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_uTiling_MetaData[] = {
		{ "Category", "HealthbarParameters" },
		{ "Comment", "//UTiling\n" },
		{ "ModuleRelativePath", "PlayerUI.h" },
		{ "ToolTip", "UTiling" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_uTiling = { "uTiling", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHealthbarParameters, uTiling), METADATA_PARAMS(Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_uTiling_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_uTiling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_backWavePanSpeed_MetaData[] = {
		{ "Category", "HealthbarParameters" },
		{ "Comment", "//The speed in which the texture moves for the back wave\n" },
		{ "ModuleRelativePath", "PlayerUI.h" },
		{ "ToolTip", "The speed in which the texture moves for the back wave" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_backWavePanSpeed = { "backWavePanSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHealthbarParameters, backWavePanSpeed), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_backWavePanSpeed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_backWavePanSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_frontWavePanSpeed_MetaData[] = {
		{ "Category", "HealthbarParameters" },
		{ "Comment", "//The speed in which the texture moves for the front wave\n" },
		{ "ModuleRelativePath", "PlayerUI.h" },
		{ "ToolTip", "The speed in which the texture moves for the front wave" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_frontWavePanSpeed = { "frontWavePanSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHealthbarParameters, frontWavePanSpeed), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_frontWavePanSpeed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_frontWavePanSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_frontWaveTextureTimeScale_MetaData[] = {
		{ "Category", "HealthbarParameters" },
		{ "Comment", "//The deltaTime scale multplier for the front wave\n" },
		{ "ModuleRelativePath", "PlayerUI.h" },
		{ "ToolTip", "The deltaTime scale multplier for the front wave" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_frontWaveTextureTimeScale = { "frontWaveTextureTimeScale", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHealthbarParameters, frontWaveTextureTimeScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_frontWaveTextureTimeScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_frontWaveTextureTimeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_frontWaveTextureScale_MetaData[] = {
		{ "Category", "HealthbarParameters" },
		{ "Comment", "//The texture scale for the front wave\n" },
		{ "ModuleRelativePath", "PlayerUI.h" },
		{ "ToolTip", "The texture scale for the front wave" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_frontWaveTextureScale = { "frontWaveTextureScale", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHealthbarParameters, frontWaveTextureScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_frontWaveTextureScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_frontWaveTextureScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_frontWaveSpeed_MetaData[] = {
		{ "Category", "HealthbarParameters" },
		{ "Comment", "//The speed in which the front wave moves\n" },
		{ "ModuleRelativePath", "PlayerUI.h" },
		{ "ToolTip", "The speed in which the front wave moves" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_frontWaveSpeed = { "frontWaveSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHealthbarParameters, frontWaveSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_frontWaveSpeed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_frontWaveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_backWaveTextureTimeScale_MetaData[] = {
		{ "Category", "HealthbarParameters" },
		{ "Comment", "//The deltaTime scale multplier for the back wave\n" },
		{ "ModuleRelativePath", "PlayerUI.h" },
		{ "ToolTip", "The deltaTime scale multplier for the back wave" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_backWaveTextureTimeScale = { "backWaveTextureTimeScale", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHealthbarParameters, backWaveTextureTimeScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_backWaveTextureTimeScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_backWaveTextureTimeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_backWaveTextureScale_MetaData[] = {
		{ "Category", "HealthbarParameters" },
		{ "Comment", "//The texture scale for the back wave\n" },
		{ "ModuleRelativePath", "PlayerUI.h" },
		{ "ToolTip", "The texture scale for the back wave" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_backWaveTextureScale = { "backWaveTextureScale", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHealthbarParameters, backWaveTextureScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_backWaveTextureScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_backWaveTextureScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_backWaveSpeed_MetaData[] = {
		{ "Category", "HealthbarParameters" },
		{ "Comment", "//The speed in which the back wave moves\n" },
		{ "ModuleRelativePath", "PlayerUI.h" },
		{ "ToolTip", "The speed in which the back wave moves" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_backWaveSpeed = { "backWaveSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHealthbarParameters, backWaveSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_backWaveSpeed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_backWaveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_fillPercentage_MetaData[] = {
		{ "Category", "HealthbarParameters" },
		{ "Comment", "//The fill percentage of the image (0.5 being half)\n" },
		{ "ModuleRelativePath", "PlayerUI.h" },
		{ "ToolTip", "The fill percentage of the image (0.5 being half)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_fillPercentage = { "fillPercentage", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHealthbarParameters, fillPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_fillPercentage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_fillPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_useTwoWaves_MetaData[] = {
		{ "Category", "HealthbarParameters" },
		{ "ModuleRelativePath", "PlayerUI.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_useTwoWaves_SetBit(void* Obj)
	{
		((FHealthbarParameters*)Obj)->useTwoWaves = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_useTwoWaves = { "useTwoWaves", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHealthbarParameters), &Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_useTwoWaves_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_useTwoWaves_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_useTwoWaves_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHealthbarParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_vTiling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_uTiling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_backWavePanSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_frontWavePanSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_frontWaveTextureTimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_frontWaveTextureScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_frontWaveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_backWaveTextureTimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_backWaveTextureScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_backWaveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_fillPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHealthbarParameters_Statics::NewProp_useTwoWaves,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHealthbarParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LastResisters,
		nullptr,
		&NewStructOps,
		"HealthbarParameters",
		sizeof(FHealthbarParameters),
		alignof(FHealthbarParameters),
		Z_Construct_UScriptStruct_FHealthbarParameters_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FHealthbarParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHealthbarParameters_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FHealthbarParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHealthbarParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHealthbarParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LastResisters();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HealthbarParameters"), sizeof(FHealthbarParameters), Get_Z_Construct_UScriptStruct_FHealthbarParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHealthbarParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHealthbarParameters_Hash() { return 704444311U; }
class UScriptStruct* FSpecialGaugeParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LASTRESISTERS_API uint32 Get_Z_Construct_UScriptStruct_FSpecialGaugeParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpecialGaugeParameters, Z_Construct_UPackage__Script_LastResisters(), TEXT("SpecialGaugeParameters"), sizeof(FSpecialGaugeParameters), Get_Z_Construct_UScriptStruct_FSpecialGaugeParameters_Hash());
	}
	return Singleton;
}
template<> LASTRESISTERS_API UScriptStruct* StaticStruct<FSpecialGaugeParameters>()
{
	return FSpecialGaugeParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpecialGaugeParameters(FSpecialGaugeParameters::StaticStruct, TEXT("/Script/LastResisters"), TEXT("SpecialGaugeParameters"), false, nullptr, nullptr);
static struct FScriptStruct_LastResisters_StaticRegisterNativesFSpecialGaugeParameters
{
	FScriptStruct_LastResisters_StaticRegisterNativesFSpecialGaugeParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpecialGaugeParameters")),new UScriptStruct::TCppStructOps<FSpecialGaugeParameters>);
	}
} ScriptStruct_LastResisters_StaticRegisterNativesFSpecialGaugeParameters;
	struct Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This struct holds all the parameters that the gauge has\n * I have made this accessible from the editor so change it from there.\n */" },
		{ "ModuleRelativePath", "PlayerUI.h" },
		{ "ToolTip", "This struct holds all the parameters that the gauge has\nI have made this accessible from the editor so change it from there." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpecialGaugeParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::NewProp_textureTimeScale_MetaData[] = {
		{ "Category", "SpecialGaugeParameters" },
		{ "Comment", "//This is the deltaTime of the entire texture moving.\n" },
		{ "ModuleRelativePath", "PlayerUI.h" },
		{ "ToolTip", "This is the deltaTime of the entire texture moving." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::NewProp_textureTimeScale = { "textureTimeScale", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialGaugeParameters, textureTimeScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::NewProp_textureTimeScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::NewProp_textureTimeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::NewProp_textureScale_MetaData[] = {
		{ "Category", "SpecialGaugeParameters" },
		{ "Comment", "//How big the texture mapped on the circle.\n" },
		{ "ModuleRelativePath", "PlayerUI.h" },
		{ "ToolTip", "How big the texture mapped on the circle." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::NewProp_textureScale = { "textureScale", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialGaugeParameters, textureScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::NewProp_textureScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::NewProp_textureScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::NewProp_panSpeeds_MetaData[] = {
		{ "Category", "SpecialGaugeParameters" },
		{ "Comment", "//The speed in coordinates to move the texture\n" },
		{ "ModuleRelativePath", "PlayerUI.h" },
		{ "ToolTip", "The speed in coordinates to move the texture" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::NewProp_panSpeeds = { "panSpeeds", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialGaugeParameters, panSpeeds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::NewProp_panSpeeds_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::NewProp_panSpeeds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::NewProp_initialRadius_MetaData[] = {
		{ "Category", "SpecialGaugeParameters" },
		{ "Comment", "//The distance offset from the center(0.5,0.5) to start drawing the circle\n" },
		{ "ModuleRelativePath", "PlayerUI.h" },
		{ "ToolTip", "The distance offset from the center(0.5,0.5) to start drawing the circle" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::NewProp_initialRadius = { "initialRadius", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialGaugeParameters, initialRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::NewProp_initialRadius_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::NewProp_initialRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::NewProp_desiredRadius_MetaData[] = {
		{ "Category", "SpecialGaugeParameters" },
		{ "Comment", "//How thick you want the circle to be\n" },
		{ "ModuleRelativePath", "PlayerUI.h" },
		{ "ToolTip", "How thick you want the circle to be" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::NewProp_desiredRadius = { "desiredRadius", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialGaugeParameters, desiredRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::NewProp_desiredRadius_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::NewProp_desiredRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::NewProp_brightness_MetaData[] = {
		{ "Category", "SpecialGaugeParameters" },
		{ "Comment", "//The brightness of the image;\n" },
		{ "ModuleRelativePath", "PlayerUI.h" },
		{ "ToolTip", "The brightness of the image;" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::NewProp_brightness = { "brightness", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialGaugeParameters, brightness), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::NewProp_brightness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::NewProp_brightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::NewProp_percent_MetaData[] = {
		{ "Category", "SpecialGaugeParameters" },
		{ "Comment", "//The progress of the image in the range of 0 to 1.\n" },
		{ "ModuleRelativePath", "PlayerUI.h" },
		{ "ToolTip", "The progress of the image in the range of 0 to 1." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::NewProp_percent = { "percent", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialGaugeParameters, percent), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::NewProp_percent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::NewProp_percent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::NewProp_textureTimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::NewProp_textureScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::NewProp_panSpeeds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::NewProp_initialRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::NewProp_desiredRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::NewProp_brightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::NewProp_percent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LastResisters,
		nullptr,
		&NewStructOps,
		"SpecialGaugeParameters",
		sizeof(FSpecialGaugeParameters),
		alignof(FSpecialGaugeParameters),
		Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpecialGaugeParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpecialGaugeParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LastResisters();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpecialGaugeParameters"), sizeof(FSpecialGaugeParameters), Get_Z_Construct_UScriptStruct_FSpecialGaugeParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpecialGaugeParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpecialGaugeParameters_Hash() { return 4051846899U; }
	void UPlayerUI::StaticRegisterNativesUPlayerUI()
	{
	}
	UClass* Z_Construct_UClass_UPlayerUI_NoRegister()
	{
		return UPlayerUI::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_healthEpsilon_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_healthEpsilon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_healthDownDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_healthDownDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_healthDownTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_healthDownTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_healthLerpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_healthLerpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_desiredSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_desiredSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_epsilon_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_epsilon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lerpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lerpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_f_desiredHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_f_desiredHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_f_currentHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_f_currentHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_actualHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_actualHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_delay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_delay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timeToDeduct_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timeToDeduct;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_f_desiredSkill_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_f_desiredSkill;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_f_currentSkill_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_f_currentSkill;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_skillAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_skillAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_healthBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_healthBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_instantGauge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_instantGauge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_delayedGauge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_delayedGauge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CircularHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CircularHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstantSpecialGauge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstantSpecialGauge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayedSpecialGauge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DelayedSpecialGauge;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_LastResisters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The class for handling the player's UI.\n */" },
		{ "IncludePath", "PlayerUI.h" },
		{ "ModuleRelativePath", "PlayerUI.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The class for handling the player's UI." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthEpsilon_MetaData[] = {
		{ "Category", "Health Bar Parameters" },
		{ "ModuleRelativePath", "PlayerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthEpsilon = { "healthEpsilon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, healthEpsilon), METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthEpsilon_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthEpsilon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthDownDelay_MetaData[] = {
		{ "Category", "Health Bar Parameters" },
		{ "ModuleRelativePath", "PlayerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthDownDelay = { "healthDownDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, healthDownDelay), METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthDownDelay_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthDownDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthDownTime_MetaData[] = {
		{ "Category", "Health Bar Parameters" },
		{ "Comment", "//For going down.\n" },
		{ "ModuleRelativePath", "PlayerUI.h" },
		{ "ToolTip", "For going down." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthDownTime = { "healthDownTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, healthDownTime), METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthDownTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthDownTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthLerpSpeed_MetaData[] = {
		{ "Category", "Health Bar Parameters" },
		{ "ModuleRelativePath", "PlayerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthLerpSpeed = { "healthLerpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, healthLerpSpeed), METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthLerpSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthLerpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_desiredSpeed_MetaData[] = {
		{ "Category", "Health Bar Parameters" },
		{ "ModuleRelativePath", "PlayerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_desiredSpeed = { "desiredSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, desiredSpeed), METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_desiredSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_desiredSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_epsilon_MetaData[] = {
		{ "Category", "Health Bar Parameters" },
		{ "ModuleRelativePath", "PlayerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_epsilon = { "epsilon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, epsilon), METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_epsilon_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_epsilon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_lerpSpeed_MetaData[] = {
		{ "Category", "Health Bar Parameters" },
		{ "ModuleRelativePath", "PlayerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_lerpSpeed = { "lerpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, lerpSpeed), METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_lerpSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_lerpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_f_desiredHealth_MetaData[] = {
		{ "Category", "Health Bar Parameters" },
		{ "ModuleRelativePath", "PlayerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_f_desiredHealth = { "f_desiredHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, f_desiredHealth), METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_f_desiredHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_f_desiredHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_f_currentHealth_MetaData[] = {
		{ "Category", "Health Bar Parameters" },
		{ "ModuleRelativePath", "PlayerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_f_currentHealth = { "f_currentHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, f_currentHealth), METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_f_currentHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_f_currentHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_m_actualHealth_MetaData[] = {
		{ "Category", "Health Bar Parameters" },
		{ "Comment", "//Healthbar Parameters\n" },
		{ "ModuleRelativePath", "PlayerUI.h" },
		{ "ToolTip", "Healthbar Parameters" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_m_actualHealth = { "m_actualHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, m_actualHealth), METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_m_actualHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_m_actualHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_delay_MetaData[] = {
		{ "Category", "Special Gauge Parameters" },
		{ "ModuleRelativePath", "PlayerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_delay = { "delay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, delay), METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_delay_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_delay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_timeToDeduct_MetaData[] = {
		{ "Category", "Special Gauge Parameters" },
		{ "ModuleRelativePath", "PlayerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_timeToDeduct = { "timeToDeduct", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, timeToDeduct), METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_timeToDeduct_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_timeToDeduct_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_f_desiredSkill_MetaData[] = {
		{ "Category", "Special Gauge Parameters" },
		{ "ModuleRelativePath", "PlayerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_f_desiredSkill = { "f_desiredSkill", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, f_desiredSkill), METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_f_desiredSkill_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_f_desiredSkill_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_f_currentSkill_MetaData[] = {
		{ "Category", "Special Gauge Parameters" },
		{ "ModuleRelativePath", "PlayerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_f_currentSkill = { "f_currentSkill", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, f_currentSkill), METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_f_currentSkill_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_f_currentSkill_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_skillAmount_MetaData[] = {
		{ "Category", "Special Gauge Parameters" },
		{ "Comment", "//Special Skill Gauge Parameters;\n" },
		{ "ModuleRelativePath", "PlayerUI.h" },
		{ "ToolTip", "Special Skill Gauge Parameters;" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_skillAmount = { "skillAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, skillAmount), METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_skillAmount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_skillAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthBar_MetaData[] = {
		{ "Category", "PlayerUI" },
		{ "ModuleRelativePath", "PlayerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthBar = { "healthBar", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, healthBar), Z_Construct_UScriptStruct_FHealthbar, METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthBar_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_instantGauge_MetaData[] = {
		{ "Category", "PlayerUI" },
		{ "ModuleRelativePath", "PlayerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_instantGauge = { "instantGauge", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, instantGauge), Z_Construct_UScriptStruct_FSpecialGauge, METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_instantGauge_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_instantGauge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_delayedGauge_MetaData[] = {
		{ "Category", "PlayerUI" },
		{ "ModuleRelativePath", "PlayerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_delayedGauge = { "delayedGauge", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, delayedGauge), Z_Construct_UScriptStruct_FSpecialGauge, METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_delayedGauge_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_delayedGauge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_HealthText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_HealthText = { "HealthText", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, HealthText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_HealthText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_HealthText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_CircularHealth_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_CircularHealth = { "CircularHealth", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, CircularHealth), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_CircularHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_CircularHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_InstantSpecialGauge_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_InstantSpecialGauge = { "InstantSpecialGauge", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, InstantSpecialGauge), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_InstantSpecialGauge_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_InstantSpecialGauge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_DelayedSpecialGauge_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerUI" },
		{ "Comment", "//Objects start here.\n//This describes the first image widget.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerUI.h" },
		{ "ToolTip", "Objects start here.\nThis describes the first image widget." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_DelayedSpecialGauge = { "DelayedSpecialGauge", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, DelayedSpecialGauge), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_DelayedSpecialGauge_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_DelayedSpecialGauge_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthEpsilon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthDownDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthDownTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthLerpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_desiredSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_epsilon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_lerpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_f_desiredHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_f_currentHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_m_actualHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_timeToDeduct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_f_desiredSkill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_f_currentSkill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_skillAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_instantGauge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_delayedGauge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_HealthText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_CircularHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_InstantSpecialGauge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_DelayedSpecialGauge,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerUI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerUI_Statics::ClassParams = {
		&UPlayerUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerUI_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerUI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerUI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerUI, 168781858);
	template<> LASTRESISTERS_API UClass* StaticClass<UPlayerUI>()
	{
		return UPlayerUI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerUI(Z_Construct_UClass_UPlayerUI, &UPlayerUI::StaticClass, TEXT("/Script/LastResisters"), TEXT("UPlayerUI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerUI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
