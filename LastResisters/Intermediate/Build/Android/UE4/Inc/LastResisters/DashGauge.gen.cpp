// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LastResisters/UI/DashGauge/DashGauge.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDashGauge() {}
// Cross Module References
	LASTRESISTERS_API UScriptStruct* Z_Construct_UScriptStruct_FDashGauge();
	UPackage* Z_Construct_UPackage__Script_LastResisters();
	LASTRESISTERS_API UScriptStruct* Z_Construct_UScriptStruct_FDashGaugeParameters();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FDashGauge::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LASTRESISTERS_API uint32 Get_Z_Construct_UScriptStruct_FDashGauge_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDashGauge, Z_Construct_UPackage__Script_LastResisters(), TEXT("DashGauge"), sizeof(FDashGauge), Get_Z_Construct_UScriptStruct_FDashGauge_Hash());
	}
	return Singleton;
}
template<> LASTRESISTERS_API UScriptStruct* StaticStruct<FDashGauge>()
{
	return FDashGauge::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDashGauge(FDashGauge::StaticStruct, TEXT("/Script/LastResisters"), TEXT("DashGauge"), false, nullptr, nullptr);
static struct FScriptStruct_LastResisters_StaticRegisterNativesFDashGauge
{
	FScriptStruct_LastResisters_StaticRegisterNativesFDashGauge()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DashGauge")),new UScriptStruct::TCppStructOps<FDashGauge>);
	}
} ScriptStruct_LastResisters_StaticRegisterNativesFDashGauge;
	struct Z_Construct_UScriptStruct_FDashGauge_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDashGauge_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "UI/DashGauge/DashGauge.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDashGauge_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDashGauge>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDashGauge_Statics::NewProp_gaugeParameters_MetaData[] = {
		{ "Category", "DashGauge" },
		{ "ModuleRelativePath", "UI/DashGauge/DashGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDashGauge_Statics::NewProp_gaugeParameters = { "gaugeParameters", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDashGauge, gaugeParameters), Z_Construct_UScriptStruct_FDashGaugeParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FDashGauge_Statics::NewProp_gaugeParameters_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDashGauge_Statics::NewProp_gaugeParameters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDashGauge_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "DashGauge" },
		{ "Comment", "//Texture we'll set as a parameter to our dynamic material instance\n" },
		{ "ModuleRelativePath", "UI/DashGauge/DashGauge.h" },
		{ "ToolTip", "Texture we'll set as a parameter to our dynamic material instance" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDashGauge_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDashGauge, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDashGauge_Statics::NewProp_Texture_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDashGauge_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDashGauge_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "DashGauge" },
		{ "Comment", "//Our base material that will be the template for our material instance\n" },
		{ "ModuleRelativePath", "UI/DashGauge/DashGauge.h" },
		{ "ToolTip", "Our base material that will be the template for our material instance" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDashGauge_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDashGauge, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDashGauge_Statics::NewProp_Material_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDashGauge_Statics::NewProp_Material_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDashGauge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDashGauge_Statics::NewProp_gaugeParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDashGauge_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDashGauge_Statics::NewProp_Material,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDashGauge_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LastResisters,
		nullptr,
		&NewStructOps,
		"DashGauge",
		sizeof(FDashGauge),
		alignof(FDashGauge),
		Z_Construct_UScriptStruct_FDashGauge_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FDashGauge_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDashGauge_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDashGauge_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDashGauge()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDashGauge_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LastResisters();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DashGauge"), sizeof(FDashGauge), Get_Z_Construct_UScriptStruct_FDashGauge_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDashGauge_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDashGauge_Hash() { return 2986569772U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
