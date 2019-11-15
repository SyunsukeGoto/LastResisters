// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef LASTRESISTERS_AI2_Character_generated_h
#error "AI2_Character.generated.h already included, missing '#pragma once' in AI2_Character.h"
#endif
#define LASTRESISTERS_AI2_Character_generated_h

#define LastRegister2_LastResisters_Source_LastResisters_AI_AI2_AI2_Character_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSeePlayer) \
	{ \
		P_GET_OBJECT(APawn,Z_Param__pawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSeePlayer(Z_Param__pawn); \
		P_NATIVE_END; \
	}


#define LastRegister2_LastResisters_Source_LastResisters_AI_AI2_AI2_Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSeePlayer) \
	{ \
		P_GET_OBJECT(APawn,Z_Param__pawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSeePlayer(Z_Param__pawn); \
		P_NATIVE_END; \
	}


#define LastRegister2_LastResisters_Source_LastResisters_AI_AI2_AI2_Character_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAI2_Character(); \
	friend struct Z_Construct_UClass_AAI2_Character_Statics; \
public: \
	DECLARE_CLASS(AAI2_Character, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LastResisters"), NO_API) \
	DECLARE_SERIALIZER(AAI2_Character)


#define LastRegister2_LastResisters_Source_LastResisters_AI_AI2_AI2_Character_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAAI2_Character(); \
	friend struct Z_Construct_UClass_AAI2_Character_Statics; \
public: \
	DECLARE_CLASS(AAI2_Character, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LastResisters"), NO_API) \
	DECLARE_SERIALIZER(AAI2_Character)


#define LastRegister2_LastResisters_Source_LastResisters_AI_AI2_AI2_Character_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAI2_Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAI2_Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAI2_Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAI2_Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAI2_Character(AAI2_Character&&); \
	NO_API AAI2_Character(const AAI2_Character&); \
public:


#define LastRegister2_LastResisters_Source_LastResisters_AI_AI2_AI2_Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAI2_Character(AAI2_Character&&); \
	NO_API AAI2_Character(const AAI2_Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAI2_Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAI2_Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAI2_Character)


#define LastRegister2_LastResisters_Source_LastResisters_AI_AI2_AI2_Character_h_12_PRIVATE_PROPERTY_OFFSET
#define LastRegister2_LastResisters_Source_LastResisters_AI_AI2_AI2_Character_h_9_PROLOG
#define LastRegister2_LastResisters_Source_LastResisters_AI_AI2_AI2_Character_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LastRegister2_LastResisters_Source_LastResisters_AI_AI2_AI2_Character_h_12_PRIVATE_PROPERTY_OFFSET \
	LastRegister2_LastResisters_Source_LastResisters_AI_AI2_AI2_Character_h_12_RPC_WRAPPERS \
	LastRegister2_LastResisters_Source_LastResisters_AI_AI2_AI2_Character_h_12_INCLASS \
	LastRegister2_LastResisters_Source_LastResisters_AI_AI2_AI2_Character_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LastRegister2_LastResisters_Source_LastResisters_AI_AI2_AI2_Character_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LastRegister2_LastResisters_Source_LastResisters_AI_AI2_AI2_Character_h_12_PRIVATE_PROPERTY_OFFSET \
	LastRegister2_LastResisters_Source_LastResisters_AI_AI2_AI2_Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	LastRegister2_LastResisters_Source_LastResisters_AI_AI2_AI2_Character_h_12_INCLASS_NO_PURE_DECLS \
	LastRegister2_LastResisters_Source_LastResisters_AI_AI2_AI2_Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LASTRESISTERS_API UClass* StaticClass<class AAI2_Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LastRegister2_LastResisters_Source_LastResisters_AI_AI2_AI2_Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
