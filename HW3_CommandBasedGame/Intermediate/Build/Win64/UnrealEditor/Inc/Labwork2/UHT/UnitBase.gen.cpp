// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Labwork2/Private/UnitBase.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnitBase() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
LABWORK2_API UClass* Z_Construct_UClass_AGameSlot_NoRegister();
LABWORK2_API UClass* Z_Construct_UClass_AUnitBase();
LABWORK2_API UClass* Z_Construct_UClass_AUnitBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Labwork2();
// End Cross Module References

// Begin Class AUnitBase Function IsControlledByThePlayer
struct UnitBase_eventIsControlledByThePlayer_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	UnitBase_eventIsControlledByThePlayer_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_AUnitBase_IsControlledByThePlayer = FName(TEXT("IsControlledByThePlayer"));
bool AUnitBase::IsControlledByThePlayer()
{
	UnitBase_eventIsControlledByThePlayer_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_AUnitBase_IsControlledByThePlayer);
	ProcessEvent(Func,&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_AUnitBase_IsControlledByThePlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UnitBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AUnitBase_IsControlledByThePlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UnitBase_eventIsControlledByThePlayer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUnitBase_IsControlledByThePlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UnitBase_eventIsControlledByThePlayer_Parms), &Z_Construct_UFunction_AUnitBase_IsControlledByThePlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnitBase_IsControlledByThePlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnitBase_IsControlledByThePlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitBase_IsControlledByThePlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnitBase_IsControlledByThePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnitBase, nullptr, "IsControlledByThePlayer", nullptr, nullptr, Z_Construct_UFunction_AUnitBase_IsControlledByThePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitBase_IsControlledByThePlayer_Statics::PropPointers), sizeof(UnitBase_eventIsControlledByThePlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitBase_IsControlledByThePlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUnitBase_IsControlledByThePlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(UnitBase_eventIsControlledByThePlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUnitBase_IsControlledByThePlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnitBase_IsControlledByThePlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AUnitBase Function IsControlledByThePlayer

// Begin Class AUnitBase Function OnGridClicked
struct Z_Construct_UFunction_AUnitBase_OnGridClicked_Statics
{
	struct UnitBase_eventOnGridClicked_Parms
	{
		AActor* TouchedActor;
		FKey ButtonPressed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UnitBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TouchedActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonPressed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUnitBase_OnGridClicked_Statics::NewProp_TouchedActor = { "TouchedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnitBase_eventOnGridClicked_Parms, TouchedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUnitBase_OnGridClicked_Statics::NewProp_ButtonPressed = { "ButtonPressed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnitBase_eventOnGridClicked_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnitBase_OnGridClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnitBase_OnGridClicked_Statics::NewProp_TouchedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnitBase_OnGridClicked_Statics::NewProp_ButtonPressed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitBase_OnGridClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnitBase_OnGridClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnitBase, nullptr, "OnGridClicked", nullptr, nullptr, Z_Construct_UFunction_AUnitBase_OnGridClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitBase_OnGridClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUnitBase_OnGridClicked_Statics::UnitBase_eventOnGridClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitBase_OnGridClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUnitBase_OnGridClicked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AUnitBase_OnGridClicked_Statics::UnitBase_eventOnGridClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUnitBase_OnGridClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnitBase_OnGridClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUnitBase::execOnGridClicked)
{
	P_GET_OBJECT(AActor,Z_Param_TouchedActor);
	P_GET_STRUCT(FKey,Z_Param_ButtonPressed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGridClicked(Z_Param_TouchedActor,Z_Param_ButtonPressed);
	P_NATIVE_END;
}
// End Class AUnitBase Function OnGridClicked

// Begin Class AUnitBase
void AUnitBase::StaticRegisterNativesAUnitBase()
{
	UClass* Class = AUnitBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnGridClicked", &AUnitBase::execOnGridClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUnitBase);
UClass* Z_Construct_UClass_AUnitBase_NoRegister()
{
	return AUnitBase::StaticClass();
}
struct Z_Construct_UClass_AUnitBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UnitBase.h" },
		{ "ModuleRelativePath", "Private/UnitBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[] = {
		{ "Category", "UnitBase" },
		{ "ModuleRelativePath", "Private/UnitBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[] = {
		{ "Category", "UnitBase" },
		{ "ModuleRelativePath", "Private/UnitBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AUnitBase_IsControlledByThePlayer, "IsControlledByThePlayer" }, // 1406086664
		{ &Z_Construct_UFunction_AUnitBase_OnGridClicked, "OnGridClicked" }, // 1829206376
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnitBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUnitBase_Statics::NewProp_StartOffset = { "StartOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnitBase, StartOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartOffset_MetaData), NewProp_StartOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnitBase_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnitBase, Slot), Z_Construct_UClass_AGameSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slot_MetaData), NewProp_Slot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUnitBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnitBase_Statics::NewProp_StartOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnitBase_Statics::NewProp_Slot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUnitBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AUnitBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Labwork2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUnitBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnitBase_Statics::ClassParams = {
	&AUnitBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AUnitBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AUnitBase_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUnitBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AUnitBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUnitBase()
{
	if (!Z_Registration_Info_UClass_AUnitBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnitBase.OuterSingleton, Z_Construct_UClass_AUnitBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUnitBase.OuterSingleton;
}
template<> LABWORK2_API UClass* StaticClass<AUnitBase>()
{
	return AUnitBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUnitBase);
AUnitBase::~AUnitBase() {}
// End Class AUnitBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_IntroductionToUE_GAD2006_HW3_CommandBasedGame_Source_Labwork2_Private_UnitBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUnitBase, AUnitBase::StaticClass, TEXT("AUnitBase"), &Z_Registration_Info_UClass_AUnitBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnitBase), 1732512050U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_IntroductionToUE_GAD2006_HW3_CommandBasedGame_Source_Labwork2_Private_UnitBase_h_2630060166(TEXT("/Script/Labwork2"),
	Z_CompiledInDeferFile_FID_UE_Projects_IntroductionToUE_GAD2006_HW3_CommandBasedGame_Source_Labwork2_Private_UnitBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_IntroductionToUE_GAD2006_HW3_CommandBasedGame_Source_Labwork2_Private_UnitBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
