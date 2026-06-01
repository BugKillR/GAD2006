// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TileBasedGame/Private/TileGameManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileGameManager() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
TILEBASEDGAME_API UClass* Z_Construct_UClass_ATileBase_NoRegister();
TILEBASEDGAME_API UClass* Z_Construct_UClass_ATileGameManager();
TILEBASEDGAME_API UClass* Z_Construct_UClass_ATileGameManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_TileBasedGame();
// End Cross Module References

// Begin Class ATileGameManager
void ATileGameManager::StaticRegisterNativesATileGameManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATileGameManager);
UClass* Z_Construct_UClass_ATileGameManager_NoRegister()
{
	return ATileGameManager::StaticClass();
}
struct Z_Construct_UClass_ATileGameManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TileGameManager.h" },
		{ "ModuleRelativePath", "Private/TileGameManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Private/TileGameManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridOffset_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Private/TileGameManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapExtendsInGrids_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Private/TileGameManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileTypes_MetaData[] = {
		{ "Category", "Tiles" },
		{ "ModuleRelativePath", "Private/TileGameManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTileIndex_MetaData[] = {
		{ "Category", "Tiles" },
		{ "ModuleRelativePath", "Private/TileGameManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSelection_MetaData[] = {
		{ "Category", "Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/TileGameManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedTilePreview_MetaData[] = {
		{ "Category", "Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/TileGameManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "TileGameManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/TileGameManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridOffset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MapExtendsInGrids;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TileTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TileTypes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentTileIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridSelection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedTilePreview;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATileGameManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATileGameManager_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATileGameManager, GridSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSize_MetaData), NewProp_GridSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATileGameManager_Statics::NewProp_GridOffset = { "GridOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATileGameManager, GridOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridOffset_MetaData), NewProp_GridOffset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATileGameManager_Statics::NewProp_MapExtendsInGrids = { "MapExtendsInGrids", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATileGameManager, MapExtendsInGrids), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapExtendsInGrids_MetaData), NewProp_MapExtendsInGrids_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATileGameManager_Statics::NewProp_TileTypes_Inner = { "TileTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ATileBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATileGameManager_Statics::NewProp_TileTypes = { "TileTypes", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATileGameManager, TileTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileTypes_MetaData), NewProp_TileTypes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATileGameManager_Statics::NewProp_CurrentTileIndex = { "CurrentTileIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATileGameManager, CurrentTileIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTileIndex_MetaData), NewProp_CurrentTileIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATileGameManager_Statics::NewProp_GridSelection = { "GridSelection", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATileGameManager, GridSelection), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSelection_MetaData), NewProp_GridSelection_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATileGameManager_Statics::NewProp_SelectedTilePreview = { "SelectedTilePreview", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATileGameManager, SelectedTilePreview), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedTilePreview_MetaData), NewProp_SelectedTilePreview_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATileGameManager_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATileGameManager, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATileGameManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileGameManager_Statics::NewProp_GridSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileGameManager_Statics::NewProp_GridOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileGameManager_Statics::NewProp_MapExtendsInGrids,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileGameManager_Statics::NewProp_TileTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileGameManager_Statics::NewProp_TileTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileGameManager_Statics::NewProp_CurrentTileIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileGameManager_Statics::NewProp_GridSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileGameManager_Statics::NewProp_SelectedTilePreview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileGameManager_Statics::NewProp_SceneRoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATileGameManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATileGameManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TileBasedGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATileGameManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATileGameManager_Statics::ClassParams = {
	&ATileGameManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATileGameManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATileGameManager_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATileGameManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ATileGameManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATileGameManager()
{
	if (!Z_Registration_Info_UClass_ATileGameManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATileGameManager.OuterSingleton, Z_Construct_UClass_ATileGameManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATileGameManager.OuterSingleton;
}
template<> TILEBASEDGAME_API UClass* StaticClass<ATileGameManager>()
{
	return ATileGameManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATileGameManager);
ATileGameManager::~ATileGameManager() {}
// End Class ATileGameManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_IntroductionToUE_TileBasedGame_Source_TileBasedGame_Private_TileGameManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATileGameManager, ATileGameManager::StaticClass, TEXT("ATileGameManager"), &Z_Registration_Info_UClass_ATileGameManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATileGameManager), 1140668239U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_IntroductionToUE_TileBasedGame_Source_TileBasedGame_Private_TileGameManager_h_2339271997(TEXT("/Script/TileBasedGame"),
	Z_CompiledInDeferFile_FID_UE_Projects_IntroductionToUE_TileBasedGame_Source_TileBasedGame_Private_TileGameManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_IntroductionToUE_TileBasedGame_Source_TileBasedGame_Private_TileGameManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
