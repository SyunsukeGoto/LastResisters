// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LASTRESISTERS_SpriteAnimation_generated_h
#error "SpriteAnimation.generated.h already included, missing '#pragma once' in SpriteAnimation.h"
#endif
#define LASTRESISTERS_SpriteAnimation_generated_h

#define LastRegister2_LastResisters_Source_LastResisters_UI_SpriteAnimation_SpriteAnimation_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopAnimation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayAnimation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentFrame) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_frame); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentFrame(Z_Param_frame); \
		P_NATIVE_END; \
	}


#define LastRegister2_LastResisters_Source_LastResisters_UI_SpriteAnimation_SpriteAnimation_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopAnimation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayAnimation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentFrame) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_frame); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentFrame(Z_Param_frame); \
		P_NATIVE_END; \
	}


#define LastRegister2_LastResisters_Source_LastResisters_UI_SpriteAnimation_SpriteAnimation_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpriteAnimation(); \
	friend struct Z_Construct_UClass_USpriteAnimation_Statics; \
public: \
	DECLARE_CLASS(USpriteAnimation, UImage, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LastResisters"), NO_API) \
	DECLARE_SERIALIZER(USpriteAnimation)


#define LastRegister2_LastResisters_Source_LastResisters_UI_SpriteAnimation_SpriteAnimation_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSpriteAnimation(); \
	friend struct Z_Construct_UClass_USpriteAnimation_Statics; \
public: \
	DECLARE_CLASS(USpriteAnimation, UImage, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LastResisters"), NO_API) \
	DECLARE_SERIALIZER(USpriteAnimation)


#define LastRegister2_LastResisters_Source_LastResisters_UI_SpriteAnimation_SpriteAnimation_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpriteAnimation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpriteAnimation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpriteAnimation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpriteAnimation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpriteAnimation(USpriteAnimation&&); \
	NO_API USpriteAnimation(const USpriteAnimation&); \
public:


#define LastRegister2_LastResisters_Source_LastResisters_UI_SpriteAnimation_SpriteAnimation_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpriteAnimation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpriteAnimation(USpriteAnimation&&); \
	NO_API USpriteAnimation(const USpriteAnimation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpriteAnimation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpriteAnimation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpriteAnimation)


#define LastRegister2_LastResisters_Source_LastResisters_UI_SpriteAnimation_SpriteAnimation_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__framesPerSecond() { return STRUCT_OFFSET(USpriteAnimation, framesPerSecond); } \
	FORCEINLINE static uint32 __PPO__currentFrame() { return STRUCT_OFFSET(USpriteAnimation, currentFrame); } \
	FORCEINLINE static uint32 __PPO__totalFrames() { return STRUCT_OFFSET(USpriteAnimation, totalFrames); } \
	FORCEINLINE static uint32 __PPO__playOnce() { return STRUCT_OFFSET(USpriteAnimation, playOnce); }


#define LastRegister2_LastResisters_Source_LastResisters_UI_SpriteAnimation_SpriteAnimation_h_9_PROLOG
#define LastRegister2_LastResisters_Source_LastResisters_UI_SpriteAnimation_SpriteAnimation_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LastRegister2_LastResisters_Source_LastResisters_UI_SpriteAnimation_SpriteAnimation_h_12_PRIVATE_PROPERTY_OFFSET \
	LastRegister2_LastResisters_Source_LastResisters_UI_SpriteAnimation_SpriteAnimation_h_12_RPC_WRAPPERS \
	LastRegister2_LastResisters_Source_LastResisters_UI_SpriteAnimation_SpriteAnimation_h_12_INCLASS \
	LastRegister2_LastResisters_Source_LastResisters_UI_SpriteAnimation_SpriteAnimation_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LastRegister2_LastResisters_Source_LastResisters_UI_SpriteAnimation_SpriteAnimation_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LastRegister2_LastResisters_Source_LastResisters_UI_SpriteAnimation_SpriteAnimation_h_12_PRIVATE_PROPERTY_OFFSET \
	LastRegister2_LastResisters_Source_LastResisters_UI_SpriteAnimation_SpriteAnimation_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	LastRegister2_LastResisters_Source_LastResisters_UI_SpriteAnimation_SpriteAnimation_h_12_INCLASS_NO_PURE_DECLS \
	LastRegister2_LastResisters_Source_LastResisters_UI_SpriteAnimation_SpriteAnimation_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LASTRESISTERS_API UClass* StaticClass<class USpriteAnimation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LastRegister2_LastResisters_Source_LastResisters_UI_SpriteAnimation_SpriteAnimation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
