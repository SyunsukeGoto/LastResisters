// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LastResisters/UI/EnemyUI/HealthGauge/EnemyHealthGauge.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyHealthGauge() {}
// Cross Module References
	LASTRESISTERS_API UScriptStruct* Z_Construct_UScriptStruct_FEnemyHealthGauge();
	UPackage* Z_Construct_UPackage__Script_LastResisters();
	LASTRESISTERS_API UScriptStruct* Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FEnemyHealthGauge::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LASTRESISTERS_API uint32 Get_Z_Construct_UScriptStruct_FEnemyHealthGauge_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnemyHealthGauge, Z_Construct_UPackage__Script_LastResisters(), TEXT("EnemyHealthGauge"), sizeof(FEnemyHealthGauge), Get_Z_Construct_UScriptStruct_FEnemyHealthGauge_Hash());
	}
	return Singleton;
}
template<> LASTRESISTERS_API UScriptStruct* StaticStruct<FEnemyHealthGauge>()
{
	return FEnemyHealthGauge::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEnemyHealthGauge(FEnemyHealthGauge::StaticStruct, TEXT("/Script/LastResisters"), TEXT("EnemyHealthGauge"), false, nullptr, nullptr);
static struct FScriptStruct_LastResisters_StaticRegisterNativesFEnemyHealthGauge
{
	FScriptStruct_LastResisters_StaticRegisterNativesFEnemyHealthGauge()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EnemyHealthGauge")),new UScriptStruct::TCppStructOps<FEnemyHealthGauge>);
	}
} ScriptStruct_LastResisters_StaticRegisterNativesFEnemyHealthGauge;
	struct Z_Construct_UScriptStruct_FEnemyHealthGauge_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_healthParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_healthParameters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpacityMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OpacityMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyHealthGauge_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "UI/EnemyUI/HealthGauge/EnemyHealthGauge.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnemyHealthGauge_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnemyHealthGauge>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyHealthGauge_Statics::NewProp_healthParameters_MetaData[] = {
		{ "Category", "EnemyHealthGauge" },
		{ "ModuleRelativePath", "UI/EnemyUI/HealthGauge/EnemyHealthGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEnemyHealthGauge_Statics::NewProp_healthParameters = { "healthParameters", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyHealthGauge, healthParameters), Z_Construct_UScriptStruct_FEnemyHealthGaugeParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyHealthGauge_Statics::NewProp_healthParameters_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyHealthGauge_Statics::NewProp_healthParameters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyHealthGauge_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "EnemyHealthGauge" },
		{ "ModuleRelativePath", "UI/EnemyUI/HealthGauge/EnemyHealthGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEnemyHealthGauge_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyHealthGauge, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyHealthGauge_Statics::NewProp_Texture_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyHealthGauge_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyHealthGauge_Statics::NewProp_OpacityMask_MetaData[] = {
		{ "Category", "EnemyHealthGauge" },
		{ "Comment", "//Texture we'll set as a parameter to our dynamic material instance\n" },
		{ "ModuleRelativePath", "UI/EnemyUI/HealthGauge/EnemyHealthGauge.h" },
		{ "ToolTip", "Texture we'll set as a parameter to our dynamic material instance" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEnemyHealthGauge_Statics::NewProp_OpacityMask = { "OpacityMask", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyHealthGauge, OpacityMask), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyHealthGauge_Statics::NewProp_OpacityMask_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyHealthGauge_Statics::NewProp_OpacityMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyHealthGauge_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "EnemyHealthGauge" },
		{ "Comment", "//Our base material that will be the template for our material instance\n" },
		{ "ModuleRelativePath", "UI/EnemyUI/HealthGauge/EnemyHealthGauge.h" },
		{ "ToolTip", "Our base material that will be the template for our material instance" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEnemyHealthGauge_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyHealthGauge, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyHealthGauge_Statics::NewProp_Material_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyHealthGauge_Statics::NewProp_Material_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnemyHealthGauge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyHealthGauge_Statics::NewProp_healthParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyHealthGauge_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyHealthGauge_Statics::NewProp_OpacityMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyHealthGauge_Statics::NewProp_Material,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnemyHealthGauge_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LastResisters,
		nullptr,
		&NewStructOps,
		"EnemyHealthGauge",
		sizeof(FEnemyHealthGauge),
		alignof(FEnemyHealthGauge),
		Z_Construct_UScriptStruct_FEnemyHealthGauge_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyHealthGauge_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyHealthGauge_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyHealthGauge_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnemyHealthGauge()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEnemyHealthGauge_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LastResisters();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EnemyHealthGauge"), sizeof(FEnemyHealthGauge), Get_Z_Construct_UScriptStruct_FEnemyHealthGauge_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEnemyHealthGauge_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEnemyHealthGauge_Hash() { return 4155189044U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
