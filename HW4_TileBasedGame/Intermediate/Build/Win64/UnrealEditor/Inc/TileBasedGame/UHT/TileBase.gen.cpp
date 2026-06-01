// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TileBasedGame/Private/TileBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileBase() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
TILEBASEDGAME_API UClass* Z_Construct_UClass_ATileBase();
TILEBASEDGAME_API UClass* Z_Construct_UClass_ATileBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_TileBasedGame();
// End Cross Module References

// Begin Class ATileBase
void ATileBase::StaticRegisterNativesATileBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATileBase);
UClass* Z_Construct_UClass_ATileBase_NoRegister()
{
	return ATileBase::StaticClass();
}
struct Z_Construct_UClass_ATileBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TileBase.h" },
		{ "ModuleRelativePath", "Private/TileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseMesh_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Private/TileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseMaterial_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Private/TileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlacementScale_MetaData[] = {
		{ "Category", "Tile Placement" },
		{ "ModuleRelativePath", "Private/TileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlacementOffset_MetaData[] = {
		{ "Category", "Tile Placement" },
		{ "ModuleRelativePath", "Private/TileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancedMesh_MetaData[] = {
		{ "Category", "Tile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/TileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Tile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/TileBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlacementScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlacementOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstancedMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATileBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATileBase_Statics::NewProp_BaseMesh = { "BaseMesh", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATileBase, BaseMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseMesh_MetaData), NewProp_BaseMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATileBase_Statics::NewProp_BaseMaterial = { "BaseMaterial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATileBase, BaseMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseMaterial_MetaData), NewProp_BaseMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATileBase_Statics::NewProp_PlacementScale = { "PlacementScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATileBase, PlacementScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlacementScale_MetaData), NewProp_PlacementScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATileBase_Statics::NewProp_PlacementOffset = { "PlacementOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATileBase, PlacementOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlacementOffset_MetaData), NewProp_PlacementOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATileBase_Statics::NewProp_InstancedMesh = { "InstancedMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATileBase, InstancedMesh), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancedMesh_MetaData), NewProp_InstancedMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATileBase_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATileBase, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATileBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileBase_Statics::NewProp_BaseMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileBase_Statics::NewProp_BaseMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileBase_Statics::NewProp_PlacementScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileBase_Statics::NewProp_PlacementOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileBase_Statics::NewProp_InstancedMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileBase_Statics::NewProp_SceneRoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATileBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATileBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TileBasedGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATileBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATileBase_Statics::ClassParams = {
	&ATileBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATileBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATileBase_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATileBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ATileBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATileBase()
{
	if (!Z_Registration_Info_UClass_ATileBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATileBase.OuterSingleton, Z_Construct_UClass_ATileBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATileBase.OuterSingleton;
}
template<> TILEBASEDGAME_API UClass* StaticClass<ATileBase>()
{
	return ATileBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATileBase);
ATileBase::~ATileBase() {}
// End Class ATileBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_IntroductionToUE_TileBasedGame_Source_TileBasedGame_Private_TileBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATileBase, ATileBase::StaticClass, TEXT("ATileBase"), &Z_Registration_Info_UClass_ATileBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATileBase), 2786770962U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_IntroductionToUE_TileBasedGame_Source_TileBasedGame_Private_TileBase_h_1095764325(TEXT("/Script/TileBasedGame"),
	Z_CompiledInDeferFile_FID_UE_Projects_IntroductionToUE_TileBasedGame_Source_TileBasedGame_Private_TileBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_IntroductionToUE_TileBasedGame_Source_TileBasedGame_Private_TileBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
