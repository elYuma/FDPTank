// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/MMTPluginPCH.h"
#include "Public/MMTVehicleSuspensionStructs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTVehicleSuspensionStructs() {}
// Cross Module References
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FPassiveSurfaceConfig();
	UPackage* Z_Construct_UPackage__Script_MMT();
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FPassiveSets();
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FWheelsConfig();
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FWheelSets();
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FTracksConfig();
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FTrackSets();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MMT_API UClass* Z_Construct_UClass_UMMTTrack_NoRegister();
// End Cross Module References
class UScriptStruct* FPassiveSurfaceConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MMT_API uint32 Get_Z_Construct_UScriptStruct_FPassiveSurfaceConfig_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPassiveSurfaceConfig, Z_Construct_UPackage__Script_MMT(), TEXT("PassiveSurfaceConfig"), sizeof(FPassiveSurfaceConfig), Get_Z_Construct_UScriptStruct_FPassiveSurfaceConfig_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPassiveSurfaceConfig(FPassiveSurfaceConfig::StaticStruct, TEXT("/Script/MMT"), TEXT("PassiveSurfaceConfig"), false, nullptr, nullptr);
static struct FScriptStruct_MMT_StaticRegisterNativesFPassiveSurfaceConfig
{
	FScriptStruct_MMT_StaticRegisterNativesFPassiveSurfaceConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PassiveSurfaceConfig")),new UScriptStruct::TCppStructOps<FPassiveSurfaceConfig>);
	}
} ScriptStruct_MMT_StaticRegisterNativesFPassiveSurfaceConfig;
	UScriptStruct* Z_Construct_UScriptStruct_FPassiveSurfaceConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPassiveSurfaceConfig_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PassiveSurfaceConfig"), sizeof(FPassiveSurfaceConfig), Get_Z_Construct_UScriptStruct_FPassiveSurfaceConfig_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPassiveSurfaceConfig>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PassiveSets_MetaData[] = {
				{ "Category", "Friction Settings" },
				{ "EditCondition", "bEnablePassiveSurfaces" },
				{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
				{ "ToolTip", "You need as many sets as many surfaces you have, typical sled will have 2 sets of ski" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PassiveSets = { UE4CodeGen_Private::EPropertyClass::Array, "PassiveSets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPassiveSurfaceConfig, PassiveSets), METADATA_PARAMS(NewProp_PassiveSets_MetaData, ARRAY_COUNT(NewProp_PassiveSets_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PassiveSets_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PassiveSets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPassiveSets, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnablePassiveSurfaces_MetaData[] = {
				{ "Category", "Friction Settings" },
				{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
				{ "ToolTip", "Set to true if vehicle has friction surfaces such as ski (directional friction)" },
			};
#endif
			auto NewProp_bEnablePassiveSurfaces_SetBit = [](void* Obj){ ((FPassiveSurfaceConfig*)Obj)->bEnablePassiveSurfaces = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnablePassiveSurfaces = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnablePassiveSurfaces", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FPassiveSurfaceConfig), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnablePassiveSurfaces_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnablePassiveSurfaces_MetaData, ARRAY_COUNT(NewProp_bEnablePassiveSurfaces_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PassiveSets,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PassiveSets_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnablePassiveSurfaces,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MMT,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"PassiveSurfaceConfig",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FPassiveSurfaceConfig),
				alignof(FPassiveSurfaceConfig),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPassiveSurfaceConfig_CRC() { return 2155611822U; }
class UScriptStruct* FPassiveSets::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MMT_API uint32 Get_Z_Construct_UScriptStruct_FPassiveSets_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPassiveSets, Z_Construct_UPackage__Script_MMT(), TEXT("PassiveSets"), sizeof(FPassiveSets), Get_Z_Construct_UScriptStruct_FPassiveSets_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPassiveSets(FPassiveSets::StaticStruct, TEXT("/Script/MMT"), TEXT("PassiveSets"), false, nullptr, nullptr);
static struct FScriptStruct_MMT_StaticRegisterNativesFPassiveSets
{
	FScriptStruct_MMT_StaticRegisterNativesFPassiveSets()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PassiveSets")),new UScriptStruct::TCppStructOps<FPassiveSets>);
	}
} ScriptStruct_MMT_StaticRegisterNativesFPassiveSets;
	UScriptStruct* Z_Construct_UScriptStruct_FPassiveSets()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPassiveSets_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PassiveSets"), sizeof(FPassiveSets), Get_Z_Construct_UScriptStruct_FPassiveSets_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
				{ "ToolTip", "----------------- Passive surface configuration" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPassiveSets>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferenceFrameComponentName_MetaData[] = {
				{ "Category", "PassiveSets" },
				{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
				{ "ToolTip", "Name of the scene component that will be used as frame of reference for position and rotation of ski center" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReferenceFrameComponentName = { UE4CodeGen_Private::EPropertyClass::Str, "ReferenceFrameComponentName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPassiveSets, ReferenceFrameComponentName), METADATA_PARAMS(NewProp_ReferenceFrameComponentName_MetaData, ARRAY_COUNT(NewProp_ReferenceFrameComponentName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugMode_MetaData[] = {
				{ "Category", "PassiveSets" },
				{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
				{ "ToolTip", "Enable on screen debug output" },
			};
#endif
			auto NewProp_bDebugMode_SetBit = [](void* Obj){ ((FPassiveSets*)Obj)->bDebugMode = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugMode = { UE4CodeGen_Private::EPropertyClass::Bool, "bDebugMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FPassiveSets), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDebugMode_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDebugMode_MetaData, ARRAY_COUNT(NewProp_bDebugMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisabled_MetaData[] = {
				{ "Category", "PassiveSets" },
				{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
				{ "ToolTip", "Disables item from physics calculations and applying forces, useful for debugging." },
			};
#endif
			auto NewProp_bDisabled_SetBit = [](void* Obj){ ((FPassiveSets*)Obj)->bDisabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FPassiveSets), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisabled_MetaData, ARRAY_COUNT(NewProp_bDisabled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceName_MetaData[] = {
				{ "Category", "PassiveSets" },
				{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
				{ "ToolTip", "Name of this passive surface for debugging purposes and improving usability, for example 'Left Steering Ski'" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SurfaceName = { UE4CodeGen_Private::EPropertyClass::Name, "SurfaceName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPassiveSets, SurfaceName), METADATA_PARAMS(NewProp_SurfaceName_MetaData, ARRAY_COUNT(NewProp_SurfaceName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReferenceFrameComponentName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDebugMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SurfaceName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MMT,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"PassiveSets",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FPassiveSets),
				alignof(FPassiveSets),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPassiveSets_CRC() { return 1140315994U; }
class UScriptStruct* FWheelsConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MMT_API uint32 Get_Z_Construct_UScriptStruct_FWheelsConfig_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWheelsConfig, Z_Construct_UPackage__Script_MMT(), TEXT("WheelsConfig"), sizeof(FWheelsConfig), Get_Z_Construct_UScriptStruct_FWheelsConfig_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWheelsConfig(FWheelsConfig::StaticStruct, TEXT("/Script/MMT"), TEXT("WheelsConfig"), false, nullptr, nullptr);
static struct FScriptStruct_MMT_StaticRegisterNativesFWheelsConfig
{
	FScriptStruct_MMT_StaticRegisterNativesFWheelsConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WheelsConfig")),new UScriptStruct::TCppStructOps<FWheelsConfig>);
	}
} ScriptStruct_MMT_StaticRegisterNativesFWheelsConfig;
	UScriptStruct* Z_Construct_UScriptStruct_FWheelsConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWheelsConfig_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WheelsConfig"), sizeof(FWheelsConfig), Get_Z_Construct_UScriptStruct_FWheelsConfig_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWheelsConfig>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WheelSets_MetaData[] = {
				{ "Category", "Friction Settings" },
				{ "EditCondition", "bEnableWheels" },
				{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
				{ "ToolTip", "You need as many sets as many wheels you have, typical car will have 4 sets of wheels" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WheelSets = { UE4CodeGen_Private::EPropertyClass::Array, "WheelSets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelsConfig, WheelSets), METADATA_PARAMS(NewProp_WheelSets_MetaData, ARRAY_COUNT(NewProp_WheelSets_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WheelSets_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "WheelSets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FWheelSets, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableWheels_MetaData[] = {
				{ "Category", "Friction Settings" },
				{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
				{ "ToolTip", "Set to true if vehicle has friction surfaces such as ski (directional friction)" },
			};
#endif
			auto NewProp_bEnableWheels_SetBit = [](void* Obj){ ((FWheelsConfig*)Obj)->bEnableWheels = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableWheels = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableWheels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FWheelsConfig), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableWheels_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableWheels_MetaData, ARRAY_COUNT(NewProp_bEnableWheels_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WheelSets,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WheelSets_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableWheels,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MMT,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"WheelsConfig",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FWheelsConfig),
				alignof(FWheelsConfig),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWheelsConfig_CRC() { return 2897269869U; }
class UScriptStruct* FWheelSets::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MMT_API uint32 Get_Z_Construct_UScriptStruct_FWheelSets_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWheelSets, Z_Construct_UPackage__Script_MMT(), TEXT("WheelSets"), sizeof(FWheelSets), Get_Z_Construct_UScriptStruct_FWheelSets_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWheelSets(FWheelSets::StaticStruct, TEXT("/Script/MMT"), TEXT("WheelSets"), false, nullptr, nullptr);
static struct FScriptStruct_MMT_StaticRegisterNativesFWheelSets
{
	FScriptStruct_MMT_StaticRegisterNativesFWheelSets()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WheelSets")),new UScriptStruct::TCppStructOps<FWheelSets>);
	}
} ScriptStruct_MMT_StaticRegisterNativesFWheelSets;
	UScriptStruct* Z_Construct_UScriptStruct_FWheelSets()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWheelSets_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WheelSets"), sizeof(FWheelSets), Get_Z_Construct_UScriptStruct_FWheelSets_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
				{ "ToolTip", "----------------- Wheels configuration" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWheelSets>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferenceFrameComponentName_MetaData[] = {
				{ "Category", "WheelSets" },
				{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
				{ "ToolTip", "Name of the scene component that will be used as frame of reference for position and rotation (yaw) of wheel center" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReferenceFrameComponentName = { UE4CodeGen_Private::EPropertyClass::Str, "ReferenceFrameComponentName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelSets, ReferenceFrameComponentName), METADATA_PARAMS(NewProp_ReferenceFrameComponentName_MetaData, ARRAY_COUNT(NewProp_ReferenceFrameComponentName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugMode_MetaData[] = {
				{ "Category", "WheelSets" },
				{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
				{ "ToolTip", "Enable on screen debug output" },
			};
#endif
			auto NewProp_bDebugMode_SetBit = [](void* Obj){ ((FWheelSets*)Obj)->bDebugMode = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugMode = { UE4CodeGen_Private::EPropertyClass::Bool, "bDebugMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FWheelSets), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDebugMode_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDebugMode_MetaData, ARRAY_COUNT(NewProp_bDebugMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisabled_MetaData[] = {
				{ "Category", "WheelSets" },
				{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
				{ "ToolTip", "Disables item from physics calculations and applying forces, useful for debugging." },
			};
#endif
			auto NewProp_bDisabled_SetBit = [](void* Obj){ ((FWheelSets*)Obj)->bDisabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FWheelSets), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisabled_MetaData, ARRAY_COUNT(NewProp_bDisabled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WheelName_MetaData[] = {
				{ "Category", "WheelSets" },
				{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
				{ "ToolTip", "Name of this wheel for debugging purposes and improving usability, for example 'Back Right Wheel'" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_WheelName = { UE4CodeGen_Private::EPropertyClass::Name, "WheelName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelSets, WheelName), METADATA_PARAMS(NewProp_WheelName_MetaData, ARRAY_COUNT(NewProp_WheelName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReferenceFrameComponentName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDebugMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WheelName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MMT,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"WheelSets",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FWheelSets),
				alignof(FWheelSets),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWheelSets_CRC() { return 2709128964U; }
class UScriptStruct* FTracksConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MMT_API uint32 Get_Z_Construct_UScriptStruct_FTracksConfig_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTracksConfig, Z_Construct_UPackage__Script_MMT(), TEXT("TracksConfig"), sizeof(FTracksConfig), Get_Z_Construct_UScriptStruct_FTracksConfig_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTracksConfig(FTracksConfig::StaticStruct, TEXT("/Script/MMT"), TEXT("TracksConfig"), false, nullptr, nullptr);
static struct FScriptStruct_MMT_StaticRegisterNativesFTracksConfig
{
	FScriptStruct_MMT_StaticRegisterNativesFTracksConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TracksConfig")),new UScriptStruct::TCppStructOps<FTracksConfig>);
	}
} ScriptStruct_MMT_StaticRegisterNativesFTracksConfig;
	UScriptStruct* Z_Construct_UScriptStruct_FTracksConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTracksConfig_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TracksConfig"), sizeof(FTracksConfig), Get_Z_Construct_UScriptStruct_FTracksConfig_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTracksConfig>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackSets_MetaData[] = {
				{ "Category", "Friction Settings" },
				{ "EditCondition", "bEnableTracks" },
				{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
				{ "ToolTip", "You need as many sets as many tracks you have, typical tank will have 2 sets of tracks" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackSets = { UE4CodeGen_Private::EPropertyClass::Array, "TrackSets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTracksConfig, TrackSets), METADATA_PARAMS(NewProp_TrackSets_MetaData, ARRAY_COUNT(NewProp_TrackSets_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackSets_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "TrackSets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTrackSets, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableTracks_MetaData[] = {
				{ "Category", "Friction Settings" },
				{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
				{ "ToolTip", "Set to true if vehicle has friction surfaces such as ski (directional friction)" },
			};
#endif
			auto NewProp_bEnableTracks_SetBit = [](void* Obj){ ((FTracksConfig*)Obj)->bEnableTracks = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableTracks = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableTracks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FTracksConfig), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableTracks_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableTracks_MetaData, ARRAY_COUNT(NewProp_bEnableTracks_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackSets,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackSets_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableTracks,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MMT,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TracksConfig",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FTracksConfig),
				alignof(FTracksConfig),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTracksConfig_CRC() { return 2457053671U; }
class UScriptStruct* FTrackSets::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MMT_API uint32 Get_Z_Construct_UScriptStruct_FTrackSets_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrackSets, Z_Construct_UPackage__Script_MMT(), TEXT("TrackSets"), sizeof(FTrackSets), Get_Z_Construct_UScriptStruct_FTrackSets_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTrackSets(FTrackSets::StaticStruct, TEXT("/Script/MMT"), TEXT("TrackSets"), false, nullptr, nullptr);
static struct FScriptStruct_MMT_StaticRegisterNativesFTrackSets
{
	FScriptStruct_MMT_StaticRegisterNativesFTrackSets()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TrackSets")),new UScriptStruct::TCppStructOps<FTrackSets>);
	}
} ScriptStruct_MMT_StaticRegisterNativesFTrackSets;
	UScriptStruct* Z_Construct_UScriptStruct_FTrackSets()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTrackSets_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TrackSets"), sizeof(FTrackSets), Get_Z_Construct_UScriptStruct_FTrackSets_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
				{ "ToolTip", "----------------- Tracks configuration" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrackSets>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackClass_MetaData[] = {
				{ "Category", "TrackSets" },
				{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
				{ "ToolTip", "Track class that contains common track configuration parameters" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_TrackClass = { UE4CodeGen_Private::EPropertyClass::Class, "TrackClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000005, 1, nullptr, STRUCT_OFFSET(FTrackSets, TrackClass), Z_Construct_UClass_UMMTTrack_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_TrackClass_MetaData, ARRAY_COUNT(NewProp_TrackClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferenceFrameComponentName_MetaData[] = {
				{ "Category", "TrackSets" },
				{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
				{ "ToolTip", "Name of the scene component that will be used as frame of reference for position and rotation of track center. For example, track can be mounted on rotating platform" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReferenceFrameComponentName = { UE4CodeGen_Private::EPropertyClass::Str, "ReferenceFrameComponentName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTrackSets, ReferenceFrameComponentName), METADATA_PARAMS(NewProp_ReferenceFrameComponentName_MetaData, ARRAY_COUNT(NewProp_ReferenceFrameComponentName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugMode_MetaData[] = {
				{ "Category", "TrackSets" },
				{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
				{ "ToolTip", "Enable on screen debug output" },
			};
#endif
			auto NewProp_bDebugMode_SetBit = [](void* Obj){ ((FTrackSets*)Obj)->bDebugMode = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugMode = { UE4CodeGen_Private::EPropertyClass::Bool, "bDebugMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FTrackSets), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDebugMode_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDebugMode_MetaData, ARRAY_COUNT(NewProp_bDebugMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisabled_MetaData[] = {
				{ "Category", "TrackSets" },
				{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
				{ "ToolTip", "Disables item from physics calculations and applying forces, useful for debugging." },
			};
#endif
			auto NewProp_bDisabled_SetBit = [](void* Obj){ ((FTrackSets*)Obj)->bDisabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FTrackSets), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisabled_MetaData, ARRAY_COUNT(NewProp_bDisabled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackName_MetaData[] = {
				{ "Category", "TrackSets" },
				{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
				{ "ToolTip", "Name of this track for debugging purposes and improving usability, for example 'Left Track'" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_TrackName = { UE4CodeGen_Private::EPropertyClass::Name, "TrackName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTrackSets, TrackName), METADATA_PARAMS(NewProp_TrackName_MetaData, ARRAY_COUNT(NewProp_TrackName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReferenceFrameComponentName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDebugMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MMT,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TrackSets",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FTrackSets),
				alignof(FTrackSets),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTrackSets_CRC() { return 1180413019U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
