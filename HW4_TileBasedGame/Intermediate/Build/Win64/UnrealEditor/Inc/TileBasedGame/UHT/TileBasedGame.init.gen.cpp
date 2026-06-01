// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileBasedGame_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TileBasedGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TileBasedGame()
	{
		if (!Z_Registration_Info_UPackage__Script_TileBasedGame.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TileBasedGame",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xF656A1D2,
				0x6F54D381,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TileBasedGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TileBasedGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TileBasedGame(Z_Construct_UPackage__Script_TileBasedGame, TEXT("/Script/TileBasedGame"), Z_Registration_Info_UPackage__Script_TileBasedGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF656A1D2, 0x6F54D381));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
