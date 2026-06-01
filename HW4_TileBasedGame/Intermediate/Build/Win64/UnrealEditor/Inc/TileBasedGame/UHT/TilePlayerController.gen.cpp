// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TileBasedGame/Private/TilePlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTilePlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
TILEBASEDGAME_API UClass* Z_Construct_UClass_ATileGameManager_NoRegister();
TILEBASEDGAME_API UClass* Z_Construct_UClass_ATilePlayerController();
TILEBASEDGAME_API UClass* Z_Construct_UClass_ATilePlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_TileBasedGame();
// End Cross Module References

// Begin Class ATilePlayerController
void ATilePlayerController::StaticRegisterNativesATilePlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATilePlayerController);
UClass* Z_Construct_UClass_ATilePlayerController_NoRegister()
{
	return ATilePlayerController::StaticClass();
}
struct Z_Construct_UClass_ATilePlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "TilePlayerController.h" },
		{ "ModuleRelativePath", "Private/TilePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameManager_MetaData[] = {
		{ "ModuleRelativePath", "Private/TilePlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATilePlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATilePlayerController_Statics::NewProp_GameManager = { "GameManager", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATilePlayerController, GameManager), Z_Construct_UClass_ATileGameManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameManager_MetaData), NewProp_GameManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATilePlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePlayerController_Statics::NewProp_GameManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATilePlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATilePlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_TileBasedGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATilePlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATilePlayerController_Statics::ClassParams = {
	&ATilePlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATilePlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATilePlayerController_Statics::PropPointers),
	0,
	0x008002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATilePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ATilePlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATilePlayerController()
{
	if (!Z_Registration_Info_UClass_ATilePlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATilePlayerController.OuterSingleton, Z_Construct_UClass_ATilePlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATilePlayerController.OuterSingleton;
}
template<> TILEBASEDGAME_API UClass* StaticClass<ATilePlayerController>()
{
	return ATilePlayerController::StaticClass();
}
ATilePlayerController::ATilePlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATilePlayerController);
ATilePlayerController::~ATilePlayerController() {}
// End Class ATilePlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_IntroductionToUE_TileBasedGame_Source_TileBasedGame_Private_TilePlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATilePlayerController, ATilePlayerController::StaticClass, TEXT("ATilePlayerController"), &Z_Registration_Info_UClass_ATilePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATilePlayerController), 3281438978U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_IntroductionToUE_TileBasedGame_Source_TileBasedGame_Private_TilePlayerController_h_3460191195(TEXT("/Script/TileBasedGame"),
	Z_CompiledInDeferFile_FID_UE_Projects_IntroductionToUE_TileBasedGame_Source_TileBasedGame_Private_TilePlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_IntroductionToUE_TileBasedGame_Source_TileBasedGame_Private_TilePlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
