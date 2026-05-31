// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LABWORK2_GameManager_generated_h
#error "GameManager.generated.h already included, missing '#pragma once' in GameManager.h"
#endif
#define LABWORK2_GameManager_generated_h

#define FID_UE_Projects_IntroductionToUE_GAD2006_HW3_CommandBasedGame_Source_Labwork2_Private_GameManager_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSUnitInfo_Statics; \
	LABWORK2_API static class UScriptStruct* StaticStruct();


template<> LABWORK2_API UScriptStruct* StaticStruct<struct FSUnitInfo>();

#define FID_UE_Projects_IntroductionToUE_GAD2006_HW3_CommandBasedGame_Source_Labwork2_Private_GameManager_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSLevelInfo_Statics; \
	LABWORK2_API static class UScriptStruct* StaticStruct();


template<> LABWORK2_API UScriptStruct* StaticStruct<struct FSLevelInfo>();

#define FID_UE_Projects_IntroductionToUE_GAD2006_HW3_CommandBasedGame_Source_Labwork2_Private_GameManager_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUndoLastMove);


#define FID_UE_Projects_IntroductionToUE_GAD2006_HW3_CommandBasedGame_Source_Labwork2_Private_GameManager_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameManager(); \
	friend struct Z_Construct_UClass_AGameManager_Statics; \
public: \
	DECLARE_CLASS(AGameManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Labwork2"), NO_API) \
	DECLARE_SERIALIZER(AGameManager)


#define FID_UE_Projects_IntroductionToUE_GAD2006_HW3_CommandBasedGame_Source_Labwork2_Private_GameManager_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGameManager(AGameManager&&); \
	AGameManager(const AGameManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameManager) \
	NO_API virtual ~AGameManager();


#define FID_UE_Projects_IntroductionToUE_GAD2006_HW3_CommandBasedGame_Source_Labwork2_Private_GameManager_h_31_PROLOG
#define FID_UE_Projects_IntroductionToUE_GAD2006_HW3_CommandBasedGame_Source_Labwork2_Private_GameManager_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_IntroductionToUE_GAD2006_HW3_CommandBasedGame_Source_Labwork2_Private_GameManager_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Projects_IntroductionToUE_GAD2006_HW3_CommandBasedGame_Source_Labwork2_Private_GameManager_h_34_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_IntroductionToUE_GAD2006_HW3_CommandBasedGame_Source_Labwork2_Private_GameManager_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LABWORK2_API UClass* StaticClass<class AGameManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_IntroductionToUE_GAD2006_HW3_CommandBasedGame_Source_Labwork2_Private_GameManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
