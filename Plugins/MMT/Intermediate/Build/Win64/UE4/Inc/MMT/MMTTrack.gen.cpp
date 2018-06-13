// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/MMTPluginPCH.h"
#include "Public/MMTTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTTrack() {}
// Cross Module References
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FMMTTrackFrictionSettings();
	UPackage* Z_Construct_UPackage__Script_MMT();
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPhysicalSurface();
	MMT_API UClass* Z_Construct_UClass_UMMTTrack_NoRegister();
	MMT_API UClass* Z_Construct_UClass_UMMTTrack();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	MMT_API UFunction* Z_Construct_UFunction_UMMTTrack_SetEffectedMeshReference();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	MMT_API UFunction* Z_Construct_UFunction_UMMTTrack_ToggleDebugMode();
	MMT_API UFunction* Z_Construct_UFunction_UMMTTrack_UpdatePhysics();
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FSuspensionStackStruct();
// End Cross Module References
class UScriptStruct* FMMTTrackFrictionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MMT_API uint32 Get_Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMMTTrackFrictionSettings, Z_Construct_UPackage__Script_MMT(), TEXT("MMTTrackFrictionSettings"), sizeof(FMMTTrackFrictionSettings), Get_Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMMTTrackFrictionSettings(FMMTTrackFrictionSettings::StaticStruct, TEXT("/Script/MMT"), TEXT("MMTTrackFrictionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_MMT_StaticRegisterNativesFMMTTrackFrictionSettings
{
	FScriptStruct_MMT_StaticRegisterNativesFMMTTrackFrictionSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MMTTrackFrictionSettings")),new UScriptStruct::TCppStructOps<FMMTTrackFrictionSettings>);
	}
} ScriptStruct_MMT_StaticRegisterNativesFMMTTrackFrictionSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FMMTTrackFrictionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MMTTrackFrictionSettings"), sizeof(FMMTTrackFrictionSettings), Get_Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MMTTrack.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMMTTrackFrictionSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackPhysicalSurfaceFrictionCoefficients_MetaData[] = {
				{ "Category", "MMTTrackFrictionSettings" },
				{ "ModuleRelativePath", "Public/MMTTrack.h" },
				{ "ToolTip", "Friction coefficients for different physical surfaces" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackPhysicalSurfaceFrictionCoefficients = { UE4CodeGen_Private::EPropertyClass::Array, "TrackPhysicalSurfaceFrictionCoefficients", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMMTTrackFrictionSettings, TrackPhysicalSurfaceFrictionCoefficients), METADATA_PARAMS(NewProp_TrackPhysicalSurfaceFrictionCoefficients_MetaData, ARRAY_COUNT(NewProp_TrackPhysicalSurfaceFrictionCoefficients_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackPhysicalSurfaceFrictionCoefficients_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "TrackPhysicalSurfaceFrictionCoefficients", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuYKinetic_MetaData[] = {
				{ "Category", "MMTTrackFrictionSettings" },
				{ "EditCondition", "bUseAnisotropicFriction" },
				{ "ModuleRelativePath", "Public/MMTTrack.h" },
				{ "ToolTip", "Kinetic friction coefficient in Y axis" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MuYKinetic = { UE4CodeGen_Private::EPropertyClass::Float, "MuYKinetic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMMTTrackFrictionSettings, MuYKinetic), METADATA_PARAMS(NewProp_MuYKinetic_MetaData, ARRAY_COUNT(NewProp_MuYKinetic_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuYStatic_MetaData[] = {
				{ "Category", "MMTTrackFrictionSettings" },
				{ "EditCondition", "bUseAnisotropicFriction" },
				{ "ModuleRelativePath", "Public/MMTTrack.h" },
				{ "ToolTip", "Static friction coefficient in Y axis" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MuYStatic = { UE4CodeGen_Private::EPropertyClass::Float, "MuYStatic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMMTTrackFrictionSettings, MuYStatic), METADATA_PARAMS(NewProp_MuYStatic_MetaData, ARRAY_COUNT(NewProp_MuYStatic_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAnisotropicFriction_MetaData[] = {
				{ "Category", "MMTTrackFrictionSettings" },
				{ "ModuleRelativePath", "Public/MMTTrack.h" },
				{ "ToolTip", "Set TRUE to specify different friction coefficient in Y axis, otherwise MuX is used as uniform coefficient. Useful for objects such as ice skates, brushed contact surface and some types of tank tracks." },
			};
#endif
			auto NewProp_bUseAnisotropicFriction_SetBit = [](void* Obj){ ((FMMTTrackFrictionSettings*)Obj)->bUseAnisotropicFriction = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAnisotropicFriction = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseAnisotropicFriction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMMTTrackFrictionSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseAnisotropicFriction_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseAnisotropicFriction_MetaData, ARRAY_COUNT(NewProp_bUseAnisotropicFriction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuXKinetic_MetaData[] = {
				{ "Category", "MMTTrackFrictionSettings" },
				{ "ModuleRelativePath", "Public/MMTTrack.h" },
				{ "ToolTip", "Kinetic friction coefficient in X axis" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MuXKinetic = { UE4CodeGen_Private::EPropertyClass::Float, "MuXKinetic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMMTTrackFrictionSettings, MuXKinetic), METADATA_PARAMS(NewProp_MuXKinetic_MetaData, ARRAY_COUNT(NewProp_MuXKinetic_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuXStatic_MetaData[] = {
				{ "Category", "MMTTrackFrictionSettings" },
				{ "ModuleRelativePath", "Public/MMTTrack.h" },
				{ "ToolTip", "Static friction coefficient in X axis" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MuXStatic = { UE4CodeGen_Private::EPropertyClass::Float, "MuXStatic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMMTTrackFrictionSettings, MuXStatic), METADATA_PARAMS(NewProp_MuXStatic_MetaData, ARRAY_COUNT(NewProp_MuXStatic_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackPhysicalSurfaceFrictionCoefficients,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackPhysicalSurfaceFrictionCoefficients_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MuYKinetic,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MuYStatic,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseAnisotropicFriction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MuXKinetic,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MuXStatic,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MMT,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MMTTrackFrictionSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMMTTrackFrictionSettings),
				alignof(FMMTTrackFrictionSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_CRC() { return 1693154494U; }
class UScriptStruct* FMMTTrackPhysicalSurfaceFriction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MMT_API uint32 Get_Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction, Z_Construct_UPackage__Script_MMT(), TEXT("MMTTrackPhysicalSurfaceFriction"), sizeof(FMMTTrackPhysicalSurfaceFriction), Get_Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction(FMMTTrackPhysicalSurfaceFriction::StaticStruct, TEXT("/Script/MMT"), TEXT("MMTTrackPhysicalSurfaceFriction"), false, nullptr, nullptr);
static struct FScriptStruct_MMT_StaticRegisterNativesFMMTTrackPhysicalSurfaceFriction
{
	FScriptStruct_MMT_StaticRegisterNativesFMMTTrackPhysicalSurfaceFriction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MMTTrackPhysicalSurfaceFriction")),new UScriptStruct::TCppStructOps<FMMTTrackPhysicalSurfaceFriction>);
	}
} ScriptStruct_MMT_StaticRegisterNativesFMMTTrackPhysicalSurfaceFriction;
	UScriptStruct* Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MMTTrackPhysicalSurfaceFriction"), sizeof(FMMTTrackPhysicalSurfaceFriction), Get_Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MMTTrack.h" },
				{ "ToolTip", "----------------- Track settings" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMMTTrackPhysicalSurfaceFriction>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollingFrictionCoefficient_MetaData[] = {
				{ "Category", "MMTTrackPhysicalSurfaceFriction" },
				{ "ModuleRelativePath", "Public/MMTTrack.h" },
				{ "ToolTip", "Higher rolling friction coefficient leads to higher rolling friction force" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RollingFrictionCoefficient = { UE4CodeGen_Private::EPropertyClass::Float, "RollingFrictionCoefficient", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMMTTrackPhysicalSurfaceFriction, RollingFrictionCoefficient), METADATA_PARAMS(NewProp_RollingFrictionCoefficient_MetaData, ARRAY_COUNT(NewProp_RollingFrictionCoefficient_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrictionScaleFactor_MetaData[] = {
				{ "Category", "MMTTrackPhysicalSurfaceFriction" },
				{ "ModuleRelativePath", "Public/MMTTrack.h" },
				{ "ToolTip", "Scale of the friction coefficient in respect to surface type. For example Ice would have smaller friction such as 0.1, while asphalt would improve friction with scale of 1.2" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrictionScaleFactor = { UE4CodeGen_Private::EPropertyClass::Float, "FrictionScaleFactor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMMTTrackPhysicalSurfaceFriction, FrictionScaleFactor), METADATA_PARAMS(NewProp_FrictionScaleFactor_MetaData, ARRAY_COUNT(NewProp_FrictionScaleFactor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalSurface_MetaData[] = {
				{ "Category", "MMTTrackPhysicalSurfaceFriction" },
				{ "ModuleRelativePath", "Public/MMTTrack.h" },
				{ "ToolTip", "Physical surface for which we define friction properties" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PhysicalSurface = { UE4CodeGen_Private::EPropertyClass::Byte, "PhysicalSurface", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMMTTrackPhysicalSurfaceFriction, PhysicalSurface), Z_Construct_UEnum_Engine_EPhysicalSurface, METADATA_PARAMS(NewProp_PhysicalSurface_MetaData, ARRAY_COUNT(NewProp_PhysicalSurface_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RollingFrictionCoefficient,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrictionScaleFactor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhysicalSurface,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MMT,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MMTTrackPhysicalSurfaceFriction",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMMTTrackPhysicalSurfaceFriction),
				alignof(FMMTTrackPhysicalSurfaceFriction),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction_CRC() { return 3215913112U; }
	void UMMTTrack::StaticRegisterNativesUMMTTrack()
	{
		UClass* Class = UMMTTrack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetEffectedMeshReference", (Native)&UMMTTrack::execSetEffectedMeshReference },
			{ "ToggleDebugMode", (Native)&UMMTTrack::execToggleDebugMode },
			{ "UpdatePhysics", (Native)&UMMTTrack::execUpdatePhysics },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMMTTrack_SetEffectedMeshReference()
	{
		struct MMTTrack_eventSetEffectedMeshReference_Parms
		{
			UMeshComponent* EffectedMeshComponentRef;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectedMeshComponentRef_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectedMeshComponentRef = { UE4CodeGen_Private::EPropertyClass::Object, "EffectedMeshComponentRef", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MMTTrack_eventSetEffectedMeshReference_Parms, EffectedMeshComponentRef), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(NewProp_EffectedMeshComponentRef_MetaData, ARRAY_COUNT(NewProp_EffectedMeshComponentRef_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EffectedMeshComponentRef,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT Track" },
				{ "ModuleRelativePath", "Public/MMTTrack.h" },
				{ "ToolTip", "Set effected mesh component reference, usually chassis/root component" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTTrack, "SetEffectedMeshReference", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MMTTrack_eventSetEffectedMeshReference_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTTrack_ToggleDebugMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT Suspension Stack" },
				{ "ModuleRelativePath", "Public/MMTTrack.h" },
				{ "ToolTip", "Toggle debug mode on/off" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTTrack, "ToggleDebugMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTTrack_UpdatePhysics()
	{
		struct MMTTrack_eventUpdatePhysics_Parms
		{
			float DeltaTime;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MMTTrack_eventUpdatePhysics_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeltaTime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT Track" },
				{ "ModuleRelativePath", "Public/MMTTrack.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTTrack, "UpdatePhysics", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MMTTrack_eventUpdatePhysics_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMMTTrack_NoRegister()
	{
		return UMMTTrack::StaticClass();
	}
	UClass* Z_Construct_UClass_UMMTTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_MMT,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMMTTrack_SetEffectedMeshReference, "SetEffectedMeshReference" }, // 3282659479
				{ &Z_Construct_UFunction_UMMTTrack_ToggleDebugMode, "ToggleDebugMode" }, // 2103503132
				{ &Z_Construct_UFunction_UMMTTrack_UpdatePhysics, "UpdatePhysics" }, // 1022508
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "MMT" },
				{ "HideCategories", "Trigger PhysicsVolume" },
				{ "IncludePath", "MMTTrack.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/MMTTrack.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuspendedWheels_MetaData[] = {
				{ "Category", "MMTTrack" },
				{ "ModuleRelativePath", "Public/MMTTrack.h" },
				{ "ToolTip", "Friction settings of the track" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SuspendedWheels = { UE4CodeGen_Private::EPropertyClass::Array, "SuspendedWheels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMMTTrack, SuspendedWheels), METADATA_PARAMS(NewProp_SuspendedWheels_MetaData, ARRAY_COUNT(NewProp_SuspendedWheels_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuspendedWheels_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SuspendedWheels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSuspensionStackStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackFrictionSettings_MetaData[] = {
				{ "Category", "MMTTrack" },
				{ "ModuleRelativePath", "Public/MMTTrack.h" },
				{ "ToolTip", "Friction settings of the track" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackFrictionSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "TrackFrictionSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMMTTrack, TrackFrictionSettings), Z_Construct_UScriptStruct_FMMTTrackFrictionSettings, METADATA_PARAMS(NewProp_TrackFrictionSettings_MetaData, ARRAY_COUNT(NewProp_TrackFrictionSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectedComponentName_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/MMTTrack.h" },
				{ "ToolTip", "Name of the mesh component that will receive forces, usually chassis/root component" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_EffectedComponentName = { UE4CodeGen_Private::EPropertyClass::Str, "EffectedComponentName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMMTTrack, EffectedComponentName), METADATA_PARAMS(NewProp_EffectedComponentName_MetaData, ARRAY_COUNT(NewProp_EffectedComponentName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SuspendedWheels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SuspendedWheels_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackFrictionSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EffectedComponentName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMMTTrack>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMMTTrack::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMMTTrack, 1569219198);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMMTTrack(Z_Construct_UClass_UMMTTrack, &UMMTTrack::StaticClass, TEXT("/Script/MMT"), TEXT("UMMTTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMTTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
