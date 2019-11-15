// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LastResisters/UI/PlayerUI/MainUI/PlayerUI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerUI() {}
// Cross Module References
	LASTRESISTERS_API UClass* Z_Construct_UClass_UPlayerUI_NoRegister();
	LASTRESISTERS_API UClass* Z_Construct_UClass_UPlayerUI();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_LastResisters();
	LASTRESISTERS_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponSkillGauge();
	LASTRESISTERS_API UScriptStruct* Z_Construct_UScriptStruct_FCircularHealth();
	LASTRESISTERS_API UScriptStruct* Z_Construct_UScriptStruct_FDashGauge();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_subWeaponSkillGauge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_subWeaponSkillGauge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mainWeaponSkillGauge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mainWeaponSkillGauge;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dashAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_dashAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_subWeaponGauge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_subWeaponGauge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mainWeaponGauge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mainWeaponGauge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_f_circularHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_f_circularHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_instantGauge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_instantGauge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_delayedGauge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_delayedGauge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubFlameEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubFlameEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubChargeEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubChargeEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainFlameEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainFlameEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainChargeEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainChargeEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubGauge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubGauge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainGauge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainGauge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CircularHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CircularHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstantDashGauge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstantDashGauge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayedDashGauge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DelayedDashGauge;
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
		{ "Comment", "/**\n * The class for handling the player's UI. (not very well written as u can see)\n */" },
		{ "IncludePath", "UI/PlayerUI/MainUI/PlayerUI.h" },
		{ "ModuleRelativePath", "UI/PlayerUI/MainUI/PlayerUI.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The class for handling the player's UI. (not very well written as u can see)" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_subWeaponSkillGauge_MetaData[] = {
		{ "Category", "Weapon Gauge Parameters" },
		{ "ModuleRelativePath", "UI/PlayerUI/MainUI/PlayerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_subWeaponSkillGauge = { "subWeaponSkillGauge", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, subWeaponSkillGauge), METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_subWeaponSkillGauge_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_subWeaponSkillGauge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_mainWeaponSkillGauge_MetaData[] = {
		{ "Category", "Weapon Gauge Parameters" },
		{ "ModuleRelativePath", "UI/PlayerUI/MainUI/PlayerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_mainWeaponSkillGauge = { "mainWeaponSkillGauge", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, mainWeaponSkillGauge), METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_mainWeaponSkillGauge_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_mainWeaponSkillGauge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthEpsilon_MetaData[] = {
		{ "Category", "Health Bar Parameters" },
		{ "ModuleRelativePath", "UI/PlayerUI/MainUI/PlayerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthEpsilon = { "healthEpsilon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, healthEpsilon), METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthEpsilon_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthEpsilon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthDownDelay_MetaData[] = {
		{ "Category", "Health Bar Parameters" },
		{ "ModuleRelativePath", "UI/PlayerUI/MainUI/PlayerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthDownDelay = { "healthDownDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, healthDownDelay), METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthDownDelay_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthDownDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthDownTime_MetaData[] = {
		{ "Category", "Health Bar Parameters" },
		{ "Comment", "//For going down.\n" },
		{ "ModuleRelativePath", "UI/PlayerUI/MainUI/PlayerUI.h" },
		{ "ToolTip", "For going down." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthDownTime = { "healthDownTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, healthDownTime), METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthDownTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthDownTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthLerpSpeed_MetaData[] = {
		{ "Category", "Health Bar Parameters" },
		{ "ModuleRelativePath", "UI/PlayerUI/MainUI/PlayerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthLerpSpeed = { "healthLerpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, healthLerpSpeed), METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthLerpSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthLerpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_desiredSpeed_MetaData[] = {
		{ "Category", "Health Bar Parameters" },
		{ "ModuleRelativePath", "UI/PlayerUI/MainUI/PlayerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_desiredSpeed = { "desiredSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, desiredSpeed), METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_desiredSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_desiredSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_epsilon_MetaData[] = {
		{ "Category", "Health Bar Parameters" },
		{ "ModuleRelativePath", "UI/PlayerUI/MainUI/PlayerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_epsilon = { "epsilon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, epsilon), METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_epsilon_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_epsilon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_lerpSpeed_MetaData[] = {
		{ "Category", "Health Bar Parameters" },
		{ "ModuleRelativePath", "UI/PlayerUI/MainUI/PlayerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_lerpSpeed = { "lerpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, lerpSpeed), METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_lerpSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_lerpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_m_actualHealth_MetaData[] = {
		{ "Category", "Health Bar Parameters" },
		{ "ModuleRelativePath", "UI/PlayerUI/MainUI/PlayerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_m_actualHealth = { "m_actualHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, m_actualHealth), METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_m_actualHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_m_actualHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_delay_MetaData[] = {
		{ "Category", "Dash Gauge Parameters" },
		{ "Comment", "//Time before the delayed gauge tries to catch up to the instant gauge\n" },
		{ "ModuleRelativePath", "UI/PlayerUI/MainUI/PlayerUI.h" },
		{ "ToolTip", "Time before the delayed gauge tries to catch up to the instant gauge" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_delay = { "delay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, delay), METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_delay_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_delay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_timeToDeduct_MetaData[] = {
		{ "Category", "Dash Gauge Parameters" },
		{ "Comment", "//Time it takes for the delayed gauge to catch up to the instant gauge\n" },
		{ "ModuleRelativePath", "UI/PlayerUI/MainUI/PlayerUI.h" },
		{ "ToolTip", "Time it takes for the delayed gauge to catch up to the instant gauge" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_timeToDeduct = { "timeToDeduct", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, timeToDeduct), METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_timeToDeduct_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_timeToDeduct_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_dashAmount_MetaData[] = {
		{ "Category", "Dash Gauge Parameters" },
		{ "Comment", "//Amount of dash now\n" },
		{ "ModuleRelativePath", "UI/PlayerUI/MainUI/PlayerUI.h" },
		{ "ToolTip", "Amount of dash now" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_dashAmount = { "dashAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, dashAmount), METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_dashAmount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_dashAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_subWeaponGauge_MetaData[] = {
		{ "Category", "PlayerUI" },
		{ "Comment", "//Struct that holds value for the sub weapon gauge\n" },
		{ "ModuleRelativePath", "UI/PlayerUI/MainUI/PlayerUI.h" },
		{ "ToolTip", "Struct that holds value for the sub weapon gauge" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_subWeaponGauge = { "subWeaponGauge", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, subWeaponGauge), Z_Construct_UScriptStruct_FWeaponSkillGauge, METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_subWeaponGauge_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_subWeaponGauge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_mainWeaponGauge_MetaData[] = {
		{ "Category", "PlayerUI" },
		{ "Comment", "//Struct that holds value for the main weapon gauge\n" },
		{ "ModuleRelativePath", "UI/PlayerUI/MainUI/PlayerUI.h" },
		{ "ToolTip", "Struct that holds value for the main weapon gauge" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_mainWeaponGauge = { "mainWeaponGauge", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, mainWeaponGauge), Z_Construct_UScriptStruct_FWeaponSkillGauge, METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_mainWeaponGauge_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_mainWeaponGauge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_f_circularHealth_MetaData[] = {
		{ "Category", "PlayerUI" },
		{ "Comment", "//Struct that holds values of the circular health\n" },
		{ "ModuleRelativePath", "UI/PlayerUI/MainUI/PlayerUI.h" },
		{ "ToolTip", "Struct that holds values of the circular health" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_f_circularHealth = { "f_circularHealth", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, f_circularHealth), Z_Construct_UScriptStruct_FCircularHealth, METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_f_circularHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_f_circularHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_instantGauge_MetaData[] = {
		{ "Category", "PlayerUI" },
		{ "Comment", "//Struct that holds values of the instant gauge\n" },
		{ "ModuleRelativePath", "UI/PlayerUI/MainUI/PlayerUI.h" },
		{ "ToolTip", "Struct that holds values of the instant gauge" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_instantGauge = { "instantGauge", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, instantGauge), Z_Construct_UScriptStruct_FDashGauge, METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_instantGauge_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_instantGauge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_delayedGauge_MetaData[] = {
		{ "Category", "PlayerUI" },
		{ "Comment", "//Struct that holds values of the delayed gauge\n" },
		{ "ModuleRelativePath", "UI/PlayerUI/MainUI/PlayerUI.h" },
		{ "ToolTip", "Struct that holds values of the delayed gauge" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_delayedGauge = { "delayedGauge", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, delayedGauge), Z_Construct_UScriptStruct_FDashGauge, METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_delayedGauge_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_delayedGauge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_SubFlameEffect_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerUI" },
		{ "Comment", "//Image for the main weapon gauge flame effect\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerUI/MainUI/PlayerUI.h" },
		{ "ToolTip", "Image for the main weapon gauge flame effect" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_SubFlameEffect = { "SubFlameEffect", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, SubFlameEffect), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_SubFlameEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_SubFlameEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_SubChargeEffect_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerUI" },
		{ "Comment", "//Image for the main weapon gauge charge effect\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerUI/MainUI/PlayerUI.h" },
		{ "ToolTip", "Image for the main weapon gauge charge effect" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_SubChargeEffect = { "SubChargeEffect", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, SubChargeEffect), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_SubChargeEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_SubChargeEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_MainFlameEffect_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerUI" },
		{ "Comment", "//Image for the main weapon gauge flame effect\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerUI/MainUI/PlayerUI.h" },
		{ "ToolTip", "Image for the main weapon gauge flame effect" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_MainFlameEffect = { "MainFlameEffect", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, MainFlameEffect), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_MainFlameEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_MainFlameEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_MainChargeEffect_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerUI" },
		{ "Comment", "//Image for the main weapon gauge charge effect\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerUI/MainUI/PlayerUI.h" },
		{ "ToolTip", "Image for the main weapon gauge charge effect" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_MainChargeEffect = { "MainChargeEffect", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, MainChargeEffect), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_MainChargeEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_MainChargeEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_SubGauge_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerUI/MainUI/PlayerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_SubGauge = { "SubGauge", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, SubGauge), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_SubGauge_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_SubGauge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_MainGauge_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerUI" },
		{ "Comment", "//Image for the main weapon gauge\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerUI/MainUI/PlayerUI.h" },
		{ "ToolTip", "Image for the main weapon gauge" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_MainGauge = { "MainGauge", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, MainGauge), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_MainGauge_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_MainGauge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_HealthText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerUI" },
		{ "Comment", "//Textblock for health\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerUI/MainUI/PlayerUI.h" },
		{ "ToolTip", "Textblock for health" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_HealthText = { "HealthText", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, HealthText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_HealthText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_HealthText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_CircularHealth_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerUI" },
		{ "Comment", "//Image for the circular health\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerUI/MainUI/PlayerUI.h" },
		{ "ToolTip", "Image for the circular health" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_CircularHealth = { "CircularHealth", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, CircularHealth), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_CircularHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_CircularHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_InstantDashGauge_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerUI" },
		{ "Comment", "//Image for the instant dash gauge\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerUI/MainUI/PlayerUI.h" },
		{ "ToolTip", "Image for the instant dash gauge" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_InstantDashGauge = { "InstantDashGauge", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, InstantDashGauge), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_InstantDashGauge_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_InstantDashGauge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_DelayedDashGauge_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerUI" },
		{ "Comment", "//Objects start here.\n//The image for the delayed dash gauge\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerUI/MainUI/PlayerUI.h" },
		{ "ToolTip", "Objects start here.\nThe image for the delayed dash gauge" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_DelayedDashGauge = { "DelayedDashGauge", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, DelayedDashGauge), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_DelayedDashGauge_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_DelayedDashGauge_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_subWeaponSkillGauge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_mainWeaponSkillGauge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthEpsilon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthDownDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthDownTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_healthLerpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_desiredSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_epsilon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_lerpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_m_actualHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_timeToDeduct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_dashAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_subWeaponGauge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_mainWeaponGauge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_f_circularHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_instantGauge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_delayedGauge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_SubFlameEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_SubChargeEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_MainFlameEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_MainChargeEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_SubGauge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_MainGauge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_HealthText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_CircularHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_InstantDashGauge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_DelayedDashGauge,
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
	IMPLEMENT_CLASS(UPlayerUI, 2192497769);
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
