// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LastResisters/UI/SpriteAnimation/SpriteAnimation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpriteAnimation() {}
// Cross Module References
	LASTRESISTERS_API UClass* Z_Construct_UClass_USpriteAnimation_NoRegister();
	LASTRESISTERS_API UClass* Z_Construct_UClass_USpriteAnimation();
	UMG_API UClass* Z_Construct_UClass_UImage();
	UPackage* Z_Construct_UPackage__Script_LastResisters();
	LASTRESISTERS_API UFunction* Z_Construct_UFunction_USpriteAnimation_PlayAnimation();
	LASTRESISTERS_API UFunction* Z_Construct_UFunction_USpriteAnimation_SetCurrentFrame();
	LASTRESISTERS_API UFunction* Z_Construct_UFunction_USpriteAnimation_StopAnimation();
// End Cross Module References
	void USpriteAnimation::StaticRegisterNativesUSpriteAnimation()
	{
		UClass* Class = USpriteAnimation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayAnimation", &USpriteAnimation::execPlayAnimation },
			{ "SetCurrentFrame", &USpriteAnimation::execSetCurrentFrame },
			{ "StopAnimation", &USpriteAnimation::execStopAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpriteAnimation_PlayAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpriteAnimation_PlayAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpriteAnimation" },
		{ "ModuleRelativePath", "UI/SpriteAnimation/SpriteAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpriteAnimation_PlayAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpriteAnimation, nullptr, "PlayAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpriteAnimation_PlayAnimation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USpriteAnimation_PlayAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpriteAnimation_PlayAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpriteAnimation_PlayAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpriteAnimation_SetCurrentFrame_Statics
	{
		struct SpriteAnimation_eventSetCurrentFrame_Parms
		{
			int32 frame;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_frame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USpriteAnimation_SetCurrentFrame_Statics::NewProp_frame = { "frame", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpriteAnimation_eventSetCurrentFrame_Parms, frame), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpriteAnimation_SetCurrentFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpriteAnimation_SetCurrentFrame_Statics::NewProp_frame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpriteAnimation_SetCurrentFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpriteAnimation" },
		{ "ModuleRelativePath", "UI/SpriteAnimation/SpriteAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpriteAnimation_SetCurrentFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpriteAnimation, nullptr, "SetCurrentFrame", nullptr, nullptr, sizeof(SpriteAnimation_eventSetCurrentFrame_Parms), Z_Construct_UFunction_USpriteAnimation_SetCurrentFrame_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USpriteAnimation_SetCurrentFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpriteAnimation_SetCurrentFrame_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USpriteAnimation_SetCurrentFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpriteAnimation_SetCurrentFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpriteAnimation_SetCurrentFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpriteAnimation_StopAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpriteAnimation_StopAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpriteAnimation" },
		{ "ModuleRelativePath", "UI/SpriteAnimation/SpriteAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpriteAnimation_StopAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpriteAnimation, nullptr, "StopAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpriteAnimation_StopAnimation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USpriteAnimation_StopAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpriteAnimation_StopAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpriteAnimation_StopAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USpriteAnimation_NoRegister()
	{
		return USpriteAnimation::StaticClass();
	}
	struct Z_Construct_UClass_USpriteAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playOnce_MetaData[];
#endif
		static void NewProp_playOnce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_playOnce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_totalFrames_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_totalFrames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_currentFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_framesPerSecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_framesPerSecond;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpriteAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UImage,
		(UObject* (*)())Z_Construct_UPackage__Script_LastResisters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USpriteAnimation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpriteAnimation_PlayAnimation, "PlayAnimation" }, // 2659869719
		{ &Z_Construct_UFunction_USpriteAnimation_SetCurrentFrame, "SetCurrentFrame" }, // 986319571
		{ &Z_Construct_UFunction_USpriteAnimation_StopAnimation, "StopAnimation" }, // 695361140
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpriteAnimation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/SpriteAnimation/SpriteAnimation.h" },
		{ "ModuleRelativePath", "UI/SpriteAnimation/SpriteAnimation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpriteAnimation_Statics::NewProp_playOnce_MetaData[] = {
		{ "Category", "SpriteAnimation" },
		{ "ModuleRelativePath", "UI/SpriteAnimation/SpriteAnimation.h" },
	};
#endif
	void Z_Construct_UClass_USpriteAnimation_Statics::NewProp_playOnce_SetBit(void* Obj)
	{
		((USpriteAnimation*)Obj)->playOnce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpriteAnimation_Statics::NewProp_playOnce = { "playOnce", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpriteAnimation), &Z_Construct_UClass_USpriteAnimation_Statics::NewProp_playOnce_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpriteAnimation_Statics::NewProp_playOnce_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpriteAnimation_Statics::NewProp_playOnce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpriteAnimation_Statics::NewProp_totalFrames_MetaData[] = {
		{ "Category", "SpriteAnimation" },
		{ "ModuleRelativePath", "UI/SpriteAnimation/SpriteAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USpriteAnimation_Statics::NewProp_totalFrames = { "totalFrames", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpriteAnimation, totalFrames), METADATA_PARAMS(Z_Construct_UClass_USpriteAnimation_Statics::NewProp_totalFrames_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpriteAnimation_Statics::NewProp_totalFrames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpriteAnimation_Statics::NewProp_currentFrame_MetaData[] = {
		{ "Category", "SpriteAnimation" },
		{ "ModuleRelativePath", "UI/SpriteAnimation/SpriteAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USpriteAnimation_Statics::NewProp_currentFrame = { "currentFrame", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpriteAnimation, currentFrame), METADATA_PARAMS(Z_Construct_UClass_USpriteAnimation_Statics::NewProp_currentFrame_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpriteAnimation_Statics::NewProp_currentFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpriteAnimation_Statics::NewProp_framesPerSecond_MetaData[] = {
		{ "Category", "SpriteAnimation" },
		{ "ModuleRelativePath", "UI/SpriteAnimation/SpriteAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USpriteAnimation_Statics::NewProp_framesPerSecond = { "framesPerSecond", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpriteAnimation, framesPerSecond), METADATA_PARAMS(Z_Construct_UClass_USpriteAnimation_Statics::NewProp_framesPerSecond_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpriteAnimation_Statics::NewProp_framesPerSecond_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpriteAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpriteAnimation_Statics::NewProp_playOnce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpriteAnimation_Statics::NewProp_totalFrames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpriteAnimation_Statics::NewProp_currentFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpriteAnimation_Statics::NewProp_framesPerSecond,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpriteAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpriteAnimation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpriteAnimation_Statics::ClassParams = {
		&USpriteAnimation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USpriteAnimation_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_USpriteAnimation_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USpriteAnimation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USpriteAnimation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpriteAnimation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpriteAnimation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpriteAnimation, 1153294645);
	template<> LASTRESISTERS_API UClass* StaticClass<USpriteAnimation>()
	{
		return USpriteAnimation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpriteAnimation(Z_Construct_UClass_USpriteAnimation, &USpriteAnimation::StaticClass, TEXT("/Script/LastResisters"), TEXT("USpriteAnimation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpriteAnimation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
