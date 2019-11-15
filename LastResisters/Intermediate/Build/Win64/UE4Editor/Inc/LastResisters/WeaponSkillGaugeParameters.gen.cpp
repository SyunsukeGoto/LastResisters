// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LastResisters/UI/PlayerUI/WeaponIcons/WeaponSkillGaugeParameters.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponSkillGaugeParameters() {}
// Cross Module References
	LASTRESISTERS_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponSkillGaugeParameters();
	UPackage* Z_Construct_UPackage__Script_LastResisters();
// End Cross Module References
class UScriptStruct* FWeaponSkillGaugeParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LASTRESISTERS_API uint32 Get_Z_Construct_UScriptStruct_FWeaponSkillGaugeParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponSkillGaugeParameters, Z_Construct_UPackage__Script_LastResisters(), TEXT("WeaponSkillGaugeParameters"), sizeof(FWeaponSkillGaugeParameters), Get_Z_Construct_UScriptStruct_FWeaponSkillGaugeParameters_Hash());
	}
	return Singleton;
}
template<> LASTRESISTERS_API UScriptStruct* StaticStruct<FWeaponSkillGaugeParameters>()
{
	return FWeaponSkillGaugeParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeaponSkillGaugeParameters(FWeaponSkillGaugeParameters::StaticStruct, TEXT("/Script/LastResisters"), TEXT("WeaponSkillGaugeParameters"), false, nullptr, nullptr);
static struct FScriptStruct_LastResisters_StaticRegisterNativesFWeaponSkillGaugeParameters
{
	FScriptStruct_LastResisters_StaticRegisterNativesFWeaponSkillGaugeParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WeaponSkillGaugeParameters")),new UScriptStruct::TCppStructOps<FWeaponSkillGaugeParameters>);
	}
} ScriptStruct_LastResisters_StaticRegisterNativesFWeaponSkillGaugeParameters;
	struct Z_Construct_UScriptStruct_FWeaponSkillGaugeParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_percent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_percent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_useTexture_MetaData[];
#endif
		static void NewProp_useTexture_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_useTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponSkillGaugeParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "UI/PlayerUI/WeaponIcons/WeaponSkillGaugeParameters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeaponSkillGaugeParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponSkillGaugeParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponSkillGaugeParameters_Statics::NewProp_percent_MetaData[] = {
		{ "Category", "WeaponSkillGaugeParameters" },
		{ "Comment", "//The progress of the image in the range of 0 to 1.\n" },
		{ "ModuleRelativePath", "UI/PlayerUI/WeaponIcons/WeaponSkillGaugeParameters.h" },
		{ "ToolTip", "The progress of the image in the range of 0 to 1." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponSkillGaugeParameters_Statics::NewProp_percent = { "percent", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponSkillGaugeParameters, percent), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponSkillGaugeParameters_Statics::NewProp_percent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponSkillGaugeParameters_Statics::NewProp_percent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponSkillGaugeParameters_Statics::NewProp_useTexture_MetaData[] = {
		{ "Category", "WeaponSkillGaugeParameters" },
		{ "Comment", "//Do we use a texture for this instance of the material?\n" },
		{ "ModuleRelativePath", "UI/PlayerUI/WeaponIcons/WeaponSkillGaugeParameters.h" },
		{ "ToolTip", "Do we use a texture for this instance of the material?" },
	};
#endif
	void Z_Construct_UScriptStruct_FWeaponSkillGaugeParameters_Statics::NewProp_useTexture_SetBit(void* Obj)
	{
		((FWeaponSkillGaugeParameters*)Obj)->useTexture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWeaponSkillGaugeParameters_Statics::NewProp_useTexture = { "useTexture", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWeaponSkillGaugeParameters), &Z_Construct_UScriptStruct_FWeaponSkillGaugeParameters_Statics::NewProp_useTexture_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponSkillGaugeParameters_Statics::NewProp_useTexture_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponSkillGaugeParameters_Statics::NewProp_useTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponSkillGaugeParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponSkillGaugeParameters_Statics::NewProp_percent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponSkillGaugeParameters_Statics::NewProp_useTexture,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponSkillGaugeParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LastResisters,
		nullptr,
		&NewStructOps,
		"WeaponSkillGaugeParameters",
		sizeof(FWeaponSkillGaugeParameters),
		alignof(FWeaponSkillGaugeParameters),
		Z_Construct_UScriptStruct_FWeaponSkillGaugeParameters_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponSkillGaugeParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponSkillGaugeParameters_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponSkillGaugeParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponSkillGaugeParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeaponSkillGaugeParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LastResisters();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeaponSkillGaugeParameters"), sizeof(FWeaponSkillGaugeParameters), Get_Z_Construct_UScriptStruct_FWeaponSkillGaugeParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWeaponSkillGaugeParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeaponSkillGaugeParameters_Hash() { return 3371342000U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
