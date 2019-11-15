// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LastResisters/UI/EnemyUI/EnemyUI/EnemyUI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyUI() {}
// Cross Module References
	LASTRESISTERS_API UClass* Z_Construct_UClass_UEnemyUI_NoRegister();
	LASTRESISTERS_API UClass* Z_Construct_UClass_UEnemyUI();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_LastResisters();
	LASTRESISTERS_API UScriptStruct* Z_Construct_UScriptStruct_FCrackedEdge();
	LASTRESISTERS_API UScriptStruct* Z_Construct_UScriptStruct_FEnemyArmorGauge();
	LASTRESISTERS_API UScriptStruct* Z_Construct_UScriptStruct_FEnemyHealthGauge();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	void UEnemyUI::StaticRegisterNativesUEnemyUI()
	{
	}
	UClass* Z_Construct_UClass_UEnemyUI_NoRegister()
	{
		return UEnemyUI::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_armorDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_armorDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_armorDownTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_armorDownTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_armorAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_armorAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_healthDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_healthDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_healthDownTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_healthDownTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_healthAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_healthAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_crackDeviations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_crackDeviations;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_crackDeviations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_minHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_minHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_instantArmorGauge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_instantArmorGauge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_delayedArmorGauge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_delayedArmorGauge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_instantHealthGauge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_instantHealthGauge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_delayedHealthGauge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_delayedHealthGauge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrackedImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrackedImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_I_ArmorGauge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_I_ArmorGauge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_D_ArmorGauge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_D_ArmorGauge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_I_HPGauge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_I_HPGauge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_D_HPGauge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_D_HPGauge;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_LastResisters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyUI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "UI/EnemyUI/EnemyUI/EnemyUI.h" },
		{ "ModuleRelativePath", "UI/EnemyUI/EnemyUI/EnemyUI.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyUI_Statics::NewProp_armorDelay_MetaData[] = {
		{ "Category", "Armor Gauge Parameters" },
		{ "Comment", "//Time before the delayed gauge tries to catch up to the instant gauge\n" },
		{ "ModuleRelativePath", "UI/EnemyUI/EnemyUI/EnemyUI.h" },
		{ "ToolTip", "Time before the delayed gauge tries to catch up to the instant gauge" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyUI_Statics::NewProp_armorDelay = { "armorDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyUI, armorDelay), METADATA_PARAMS(Z_Construct_UClass_UEnemyUI_Statics::NewProp_armorDelay_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnemyUI_Statics::NewProp_armorDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyUI_Statics::NewProp_armorDownTime_MetaData[] = {
		{ "Category", "Armor Gauge Parameters" },
		{ "Comment", "//Time it takes for the delayed gauge to catch up to the instant gauge\n" },
		{ "ModuleRelativePath", "UI/EnemyUI/EnemyUI/EnemyUI.h" },
		{ "ToolTip", "Time it takes for the delayed gauge to catch up to the instant gauge" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyUI_Statics::NewProp_armorDownTime = { "armorDownTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyUI, armorDownTime), METADATA_PARAMS(Z_Construct_UClass_UEnemyUI_Statics::NewProp_armorDownTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnemyUI_Statics::NewProp_armorDownTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyUI_Statics::NewProp_armorAmount_MetaData[] = {
		{ "Category", "Armor Gauge Parameters" },
		{ "Comment", "//Amount of health now\n" },
		{ "ModuleRelativePath", "UI/EnemyUI/EnemyUI/EnemyUI.h" },
		{ "ToolTip", "Amount of health now" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyUI_Statics::NewProp_armorAmount = { "armorAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyUI, armorAmount), METADATA_PARAMS(Z_Construct_UClass_UEnemyUI_Statics::NewProp_armorAmount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnemyUI_Statics::NewProp_armorAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyUI_Statics::NewProp_healthDelay_MetaData[] = {
		{ "Category", "Health Gauge Parameters" },
		{ "Comment", "//Time before the delayed gauge tries to catch up to the instant gauge\n" },
		{ "ModuleRelativePath", "UI/EnemyUI/EnemyUI/EnemyUI.h" },
		{ "ToolTip", "Time before the delayed gauge tries to catch up to the instant gauge" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyUI_Statics::NewProp_healthDelay = { "healthDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyUI, healthDelay), METADATA_PARAMS(Z_Construct_UClass_UEnemyUI_Statics::NewProp_healthDelay_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnemyUI_Statics::NewProp_healthDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyUI_Statics::NewProp_healthDownTime_MetaData[] = {
		{ "Category", "Health Gauge Parameters" },
		{ "Comment", "//Time it takes for the delayed gauge to catch up to the instant gauge\n" },
		{ "ModuleRelativePath", "UI/EnemyUI/EnemyUI/EnemyUI.h" },
		{ "ToolTip", "Time it takes for the delayed gauge to catch up to the instant gauge" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyUI_Statics::NewProp_healthDownTime = { "healthDownTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyUI, healthDownTime), METADATA_PARAMS(Z_Construct_UClass_UEnemyUI_Statics::NewProp_healthDownTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnemyUI_Statics::NewProp_healthDownTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyUI_Statics::NewProp_healthAmount_MetaData[] = {
		{ "Category", "Health Gauge Parameters" },
		{ "Comment", "//Amount of health now\n" },
		{ "ModuleRelativePath", "UI/EnemyUI/EnemyUI/EnemyUI.h" },
		{ "ToolTip", "Amount of health now" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyUI_Statics::NewProp_healthAmount = { "healthAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyUI, healthAmount), METADATA_PARAMS(Z_Construct_UClass_UEnemyUI_Statics::NewProp_healthAmount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnemyUI_Statics::NewProp_healthAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyUI_Statics::NewProp_crackDeviations_MetaData[] = {
		{ "Category", "Crack Deviations" },
		{ "Comment", "//Array of the cracked edges to check if it works\n" },
		{ "ModuleRelativePath", "UI/EnemyUI/EnemyUI/EnemyUI.h" },
		{ "ToolTip", "Array of the cracked edges to check if it works" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnemyUI_Statics::NewProp_crackDeviations = { "crackDeviations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyUI, crackDeviations), METADATA_PARAMS(Z_Construct_UClass_UEnemyUI_Statics::NewProp_crackDeviations_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnemyUI_Statics::NewProp_crackDeviations_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnemyUI_Statics::NewProp_crackDeviations_Inner = { "crackDeviations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCrackedEdge, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyUI_Statics::NewProp_maxHealth_MetaData[] = {
		{ "Category", "Enemy Info" },
		{ "ModuleRelativePath", "UI/EnemyUI/EnemyUI/EnemyUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyUI_Statics::NewProp_maxHealth = { "maxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyUI, maxHealth), METADATA_PARAMS(Z_Construct_UClass_UEnemyUI_Statics::NewProp_maxHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnemyUI_Statics::NewProp_maxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyUI_Statics::NewProp_minHealth_MetaData[] = {
		{ "Category", "Enemy Info" },
		{ "ModuleRelativePath", "UI/EnemyUI/EnemyUI/EnemyUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyUI_Statics::NewProp_minHealth = { "minHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyUI, minHealth), METADATA_PARAMS(Z_Construct_UClass_UEnemyUI_Statics::NewProp_minHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnemyUI_Statics::NewProp_minHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyUI_Statics::NewProp_instantArmorGauge_MetaData[] = {
		{ "Category", "EnemyUI" },
		{ "Comment", "//Struct that holds the values of the instant Armor gauge\n" },
		{ "ModuleRelativePath", "UI/EnemyUI/EnemyUI/EnemyUI.h" },
		{ "ToolTip", "Struct that holds the values of the instant Armor gauge" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnemyUI_Statics::NewProp_instantArmorGauge = { "instantArmorGauge", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyUI, instantArmorGauge), Z_Construct_UScriptStruct_FEnemyArmorGauge, METADATA_PARAMS(Z_Construct_UClass_UEnemyUI_Statics::NewProp_instantArmorGauge_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnemyUI_Statics::NewProp_instantArmorGauge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyUI_Statics::NewProp_delayedArmorGauge_MetaData[] = {
		{ "Category", "EnemyUI" },
		{ "Comment", "//Struct that holds the values of the instant HP gauge\n" },
		{ "ModuleRelativePath", "UI/EnemyUI/EnemyUI/EnemyUI.h" },
		{ "ToolTip", "Struct that holds the values of the instant HP gauge" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnemyUI_Statics::NewProp_delayedArmorGauge = { "delayedArmorGauge", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyUI, delayedArmorGauge), Z_Construct_UScriptStruct_FEnemyArmorGauge, METADATA_PARAMS(Z_Construct_UClass_UEnemyUI_Statics::NewProp_delayedArmorGauge_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnemyUI_Statics::NewProp_delayedArmorGauge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyUI_Statics::NewProp_instantHealthGauge_MetaData[] = {
		{ "Category", "EnemyUI" },
		{ "Comment", "//Struct that holds the values of the delayed Armor gauge\n" },
		{ "ModuleRelativePath", "UI/EnemyUI/EnemyUI/EnemyUI.h" },
		{ "ToolTip", "Struct that holds the values of the delayed Armor gauge" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnemyUI_Statics::NewProp_instantHealthGauge = { "instantHealthGauge", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyUI, instantHealthGauge), Z_Construct_UScriptStruct_FEnemyHealthGauge, METADATA_PARAMS(Z_Construct_UClass_UEnemyUI_Statics::NewProp_instantHealthGauge_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnemyUI_Statics::NewProp_instantHealthGauge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyUI_Statics::NewProp_delayedHealthGauge_MetaData[] = {
		{ "Category", "EnemyUI" },
		{ "Comment", "//Struct that holds the values of the delayed HP gauge\n" },
		{ "ModuleRelativePath", "UI/EnemyUI/EnemyUI/EnemyUI.h" },
		{ "ToolTip", "Struct that holds the values of the delayed HP gauge" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnemyUI_Statics::NewProp_delayedHealthGauge = { "delayedHealthGauge", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyUI, delayedHealthGauge), Z_Construct_UScriptStruct_FEnemyHealthGauge, METADATA_PARAMS(Z_Construct_UClass_UEnemyUI_Statics::NewProp_delayedHealthGauge_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnemyUI_Statics::NewProp_delayedHealthGauge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyUI_Statics::NewProp_CrackedImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "EnemyUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/EnemyUI/EnemyUI/EnemyUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyUI_Statics::NewProp_CrackedImage = { "CrackedImage", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyUI, CrackedImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemyUI_Statics::NewProp_CrackedImage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnemyUI_Statics::NewProp_CrackedImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyUI_Statics::NewProp_I_ArmorGauge_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "EnemyUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/EnemyUI/EnemyUI/EnemyUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyUI_Statics::NewProp_I_ArmorGauge = { "I_ArmorGauge", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyUI, I_ArmorGauge), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemyUI_Statics::NewProp_I_ArmorGauge_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnemyUI_Statics::NewProp_I_ArmorGauge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyUI_Statics::NewProp_D_ArmorGauge_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "EnemyUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/EnemyUI/EnemyUI/EnemyUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyUI_Statics::NewProp_D_ArmorGauge = { "D_ArmorGauge", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyUI, D_ArmorGauge), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemyUI_Statics::NewProp_D_ArmorGauge_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnemyUI_Statics::NewProp_D_ArmorGauge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyUI_Statics::NewProp_I_HPGauge_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "EnemyUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/EnemyUI/EnemyUI/EnemyUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyUI_Statics::NewProp_I_HPGauge = { "I_HPGauge", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyUI, I_HPGauge), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemyUI_Statics::NewProp_I_HPGauge_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnemyUI_Statics::NewProp_I_HPGauge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyUI_Statics::NewProp_D_HPGauge_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "EnemyUI" },
		{ "Comment", "//Get the images for the gauges\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/EnemyUI/EnemyUI/EnemyUI.h" },
		{ "ToolTip", "Get the images for the gauges" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyUI_Statics::NewProp_D_HPGauge = { "D_HPGauge", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyUI, D_HPGauge), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemyUI_Statics::NewProp_D_HPGauge_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnemyUI_Statics::NewProp_D_HPGauge_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyUI_Statics::NewProp_armorDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyUI_Statics::NewProp_armorDownTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyUI_Statics::NewProp_armorAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyUI_Statics::NewProp_healthDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyUI_Statics::NewProp_healthDownTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyUI_Statics::NewProp_healthAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyUI_Statics::NewProp_crackDeviations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyUI_Statics::NewProp_crackDeviations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyUI_Statics::NewProp_maxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyUI_Statics::NewProp_minHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyUI_Statics::NewProp_instantArmorGauge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyUI_Statics::NewProp_delayedArmorGauge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyUI_Statics::NewProp_instantHealthGauge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyUI_Statics::NewProp_delayedHealthGauge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyUI_Statics::NewProp_CrackedImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyUI_Statics::NewProp_I_ArmorGauge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyUI_Statics::NewProp_D_ArmorGauge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyUI_Statics::NewProp_I_HPGauge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyUI_Statics::NewProp_D_HPGauge,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyUI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnemyUI_Statics::ClassParams = {
		&UEnemyUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnemyUI_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UEnemyUI_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemyUI_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEnemyUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemyUI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnemyUI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnemyUI, 1642337490);
	template<> LASTRESISTERS_API UClass* StaticClass<UEnemyUI>()
	{
		return UEnemyUI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnemyUI(Z_Construct_UClass_UEnemyUI, &UEnemyUI::StaticClass, TEXT("/Script/LastResisters"), TEXT("UEnemyUI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyUI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
