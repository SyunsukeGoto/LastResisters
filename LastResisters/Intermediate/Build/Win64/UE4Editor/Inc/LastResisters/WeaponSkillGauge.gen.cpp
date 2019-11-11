// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LastResisters/UI/PlayerUI/WeaponIcons/WeaponSkillGauge.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponSkillGauge() {}
// Cross Module References
	LASTRESISTERS_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponSkillGauge();
	UPackage* Z_Construct_UPackage__Script_LastResisters();
	LASTRESISTERS_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponSkillGaugeParameters();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FWeaponSkillGauge::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LASTRESISTERS_API uint32 Get_Z_Construct_UScriptStruct_FWeaponSkillGauge_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponSkillGauge, Z_Construct_UPackage__Script_LastResisters(), TEXT("WeaponSkillGauge"), sizeof(FWeaponSkillGauge), Get_Z_Construct_UScriptStruct_FWeaponSkillGauge_Hash());
	}
	return Singleton;
}
template<> LASTRESISTERS_API UScriptStruct* StaticStruct<FWeaponSkillGauge>()
{
	return FWeaponSkillGauge::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeaponSkillGauge(FWeaponSkillGauge::StaticStruct, TEXT("/Script/LastResisters"), TEXT("WeaponSkillGauge"), false, nullptr, nullptr);
static struct FScriptStruct_LastResisters_StaticRegisterNativesFWeaponSkillGauge
{
	FScriptStruct_LastResisters_StaticRegisterNativesFWeaponSkillGauge()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WeaponSkillGauge")),new UScriptStruct::TCppStructOps<FWeaponSkillGauge>);
	}
} ScriptStruct_LastResisters_StaticRegisterNativesFWeaponSkillGauge;
	struct Z_Construct_UScriptStruct_FWeaponSkillGauge_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weaponSkillParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_weaponSkillParameters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponSkillGauge_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This struct holds all the parameters that the weapon skill gauge has\n */" },
		{ "ModuleRelativePath", "UI/PlayerUI/WeaponIcons/WeaponSkillGauge.h" },
		{ "ToolTip", "This struct holds all the parameters that the weapon skill gauge has" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeaponSkillGauge_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponSkillGauge>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponSkillGauge_Statics::NewProp_weaponSkillParameters_MetaData[] = {
		{ "Category", "WeaponSkillGauge" },
		{ "ModuleRelativePath", "UI/PlayerUI/WeaponIcons/WeaponSkillGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeaponSkillGauge_Statics::NewProp_weaponSkillParameters = { "weaponSkillParameters", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponSkillGauge, weaponSkillParameters), Z_Construct_UScriptStruct_FWeaponSkillGaugeParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponSkillGauge_Statics::NewProp_weaponSkillParameters_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponSkillGauge_Statics::NewProp_weaponSkillParameters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponSkillGauge_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "WeaponSkillGauge" },
		{ "ModuleRelativePath", "UI/PlayerUI/WeaponIcons/WeaponSkillGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeaponSkillGauge_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponSkillGauge, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponSkillGauge_Statics::NewProp_Color_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponSkillGauge_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponSkillGauge_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "WeaponSkillGauge" },
		{ "Comment", "//Texture we'll set as a parameter to our dynamic material instance\n" },
		{ "ModuleRelativePath", "UI/PlayerUI/WeaponIcons/WeaponSkillGauge.h" },
		{ "ToolTip", "Texture we'll set as a parameter to our dynamic material instance" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponSkillGauge_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponSkillGauge, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponSkillGauge_Statics::NewProp_Texture_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponSkillGauge_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponSkillGauge_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "WeaponSkillGauge" },
		{ "Comment", "//Our base material that will be the template for our material instance\n" },
		{ "ModuleRelativePath", "UI/PlayerUI/WeaponIcons/WeaponSkillGauge.h" },
		{ "ToolTip", "Our base material that will be the template for our material instance" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponSkillGauge_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponSkillGauge, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponSkillGauge_Statics::NewProp_Material_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponSkillGauge_Statics::NewProp_Material_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponSkillGauge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponSkillGauge_Statics::NewProp_weaponSkillParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponSkillGauge_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponSkillGauge_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponSkillGauge_Statics::NewProp_Material,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponSkillGauge_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LastResisters,
		nullptr,
		&NewStructOps,
		"WeaponSkillGauge",
		sizeof(FWeaponSkillGauge),
		alignof(FWeaponSkillGauge),
		Z_Construct_UScriptStruct_FWeaponSkillGauge_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponSkillGauge_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponSkillGauge_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponSkillGauge_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponSkillGauge()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeaponSkillGauge_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LastResisters();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeaponSkillGauge"), sizeof(FWeaponSkillGauge), Get_Z_Construct_UScriptStruct_FWeaponSkillGauge_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWeaponSkillGauge_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeaponSkillGauge_Hash() { return 3423830748U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
