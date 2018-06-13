// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/MMTPluginPCH.h"
#include "Public/MMTFrictionSolverComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTFrictionSolverComponent() {}
// Cross Module References
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FPassiveFrictionSetSettings();
	UPackage* Z_Construct_UPackage__Script_MMT();
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FFrictionSetPassiveStruct();
	MMT_API UClass* Z_Construct_UClass_UMMTPhysicalSurfaceFrictionCoefficientsDataAsset_NoRegister();
	MMT_API UClass* Z_Construct_UClass_UMMTFrictionSolverComponent_NoRegister();
	MMT_API UClass* Z_Construct_UClass_UMMTFrictionSolverComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	MMT_API UClass* Z_Construct_UClass_UMMTFrictionSolver_NoRegister();
// End Cross Module References
class UScriptStruct* FPassiveFrictionSetSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MMT_API uint32 Get_Z_Construct_UScriptStruct_FPassiveFrictionSetSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPassiveFrictionSetSettings, Z_Construct_UPackage__Script_MMT(), TEXT("PassiveFrictionSetSettings"), sizeof(FPassiveFrictionSetSettings), Get_Z_Construct_UScriptStruct_FPassiveFrictionSetSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPassiveFrictionSetSettings(FPassiveFrictionSetSettings::StaticStruct, TEXT("/Script/MMT"), TEXT("PassiveFrictionSetSettings"), false, nullptr, nullptr);
static struct FScriptStruct_MMT_StaticRegisterNativesFPassiveFrictionSetSettings
{
	FScriptStruct_MMT_StaticRegisterNativesFPassiveFrictionSetSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PassiveFrictionSetSettings")),new UScriptStruct::TCppStructOps<FPassiveFrictionSetSettings>);
	}
} ScriptStruct_MMT_StaticRegisterNativesFPassiveFrictionSetSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FPassiveFrictionSetSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPassiveFrictionSetSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PassiveFrictionSetSettings"), sizeof(FPassiveFrictionSetSettings), Get_Z_Construct_UScriptStruct_FPassiveFrictionSetSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MMTFrictionSolverComponent.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPassiveFrictionSetSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PassiveFrictionSets_MetaData[] = {
				{ "Category", "Friction Settings" },
				{ "EditCondition", "bHasSurfaces" },
				{ "ModuleRelativePath", "Public/MMTFrictionSolverComponent.h" },
				{ "ToolTip", "Surface friction sets are entities such as ski or just regular surfaces. For example, aerosled with 4 ski will have 4 sets of surfaces." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PassiveFrictionSets = { UE4CodeGen_Private::EPropertyClass::Array, "PassiveFrictionSets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPassiveFrictionSetSettings, PassiveFrictionSets), METADATA_PARAMS(NewProp_PassiveFrictionSets_MetaData, ARRAY_COUNT(NewProp_PassiveFrictionSets_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PassiveFrictionSets_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PassiveFrictionSets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FFrictionSetPassiveStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PassivePhysicalSurfaceFrictionCoefficients_MetaData[] = {
				{ "Category", "Friction Settings" },
				{ "EditCondition", "bHasSurfaces" },
				{ "ModuleRelativePath", "Public/MMTFrictionSolverComponent.h" },
				{ "ToolTip", "Reference data asset of physical surface friction coefficients" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PassivePhysicalSurfaceFrictionCoefficients = { UE4CodeGen_Private::EPropertyClass::Object, "PassivePhysicalSurfaceFrictionCoefficients", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPassiveFrictionSetSettings, PassivePhysicalSurfaceFrictionCoefficients), Z_Construct_UClass_UMMTPhysicalSurfaceFrictionCoefficientsDataAsset_NoRegister, METADATA_PARAMS(NewProp_PassivePhysicalSurfaceFrictionCoefficients_MetaData, ARRAY_COUNT(NewProp_PassivePhysicalSurfaceFrictionCoefficients_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasPassives_MetaData[] = {
				{ "Category", "Friction Settings" },
				{ "ModuleRelativePath", "Public/MMTFrictionSolverComponent.h" },
				{ "ToolTip", "Set to true if vehicle has friction surfaces such as ski." },
			};
#endif
			auto NewProp_bHasPassives_SetBit = [](void* Obj){ ((FPassiveFrictionSetSettings*)Obj)->bHasPassives = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasPassives = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasPassives", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FPassiveFrictionSetSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHasPassives_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHasPassives_MetaData, ARRAY_COUNT(NewProp_bHasPassives_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PassiveFrictionSets,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PassiveFrictionSets_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PassivePhysicalSurfaceFrictionCoefficients,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHasPassives,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MMT,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"PassiveFrictionSetSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FPassiveFrictionSetSettings),
				alignof(FPassiveFrictionSetSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPassiveFrictionSetSettings_CRC() { return 418386795U; }
	void UMMTFrictionSolverComponent::StaticRegisterNativesUMMTFrictionSolverComponent()
	{
	}
	UClass* Z_Construct_UClass_UMMTFrictionSolverComponent_NoRegister()
	{
		return UMMTFrictionSolverComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UMMTFrictionSolverComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_MMT,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "MMTFrictionSolverComponent.h" },
				{ "ModuleRelativePath", "Public/MMTFrictionSolverComponent.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrictionSolver_MetaData[] = {
				{ "Category", "MMTFrictionSolverComponent" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MMTFrictionSolverComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FrictionSolver = { UE4CodeGen_Private::EPropertyClass::Object, "FrictionSolver", RF_Public|RF_Transient|RF_MarkAsNative, 0x00120000000a000d, 1, nullptr, STRUCT_OFFSET(UMMTFrictionSolverComponent, FrictionSolver), Z_Construct_UClass_UMMTFrictionSolver_NoRegister, METADATA_PARAMS(NewProp_FrictionSolver_MetaData, ARRAY_COUNT(NewProp_FrictionSolver_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PassiveSetSettings_MetaData[] = {
				{ "Category", "Friction Settings" },
				{ "ModuleRelativePath", "Public/MMTFrictionSolverComponent.h" },
				{ "ToolTip", "Settings of the friction surfaces" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PassiveSetSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "PassiveSetSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMMTFrictionSolverComponent, PassiveSetSettings), Z_Construct_UScriptStruct_FPassiveFrictionSetSettings, METADATA_PARAMS(NewProp_PassiveSetSettings_MetaData, ARRAY_COUNT(NewProp_PassiveSetSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectedComponentName_MetaData[] = {
				{ "Category", "Friction Settings" },
				{ "ModuleRelativePath", "Public/MMTFrictionSolverComponent.h" },
				{ "ToolTip", "Name of the mesh component that will receive friction force, usually chassis/root component" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_EffectedComponentName = { UE4CodeGen_Private::EPropertyClass::Str, "EffectedComponentName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMMTFrictionSolverComponent, EffectedComponentName), METADATA_PARAMS(NewProp_EffectedComponentName_MetaData, ARRAY_COUNT(NewProp_EffectedComponentName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugMode_MetaData[] = {
				{ "Category", "Friction Settings" },
				{ "ModuleRelativePath", "Public/MMTFrictionSolverComponent.h" },
				{ "ToolTip", "Enable on screen debug output" },
			};
#endif
			auto NewProp_bDebugMode_SetBit = [](void* Obj){ ((UMMTFrictionSolverComponent*)Obj)->bDebugMode = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugMode = { UE4CodeGen_Private::EPropertyClass::Bool, "bDebugMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMMTFrictionSolverComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDebugMode_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDebugMode_MetaData, ARRAY_COUNT(NewProp_bDebugMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisabled_MetaData[] = {
				{ "Category", "Friction Settings" },
				{ "ModuleRelativePath", "Public/MMTFrictionSolverComponent.h" },
				{ "ToolTip", "Disables component from doing physics calculations and applying forces, useful for debugging" },
			};
#endif
			auto NewProp_bDisabled_SetBit = [](void* Obj){ ((UMMTFrictionSolverComponent*)Obj)->bDisabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMMTFrictionSolverComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisabled_MetaData, ARRAY_COUNT(NewProp_bDisabled_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrictionSolver,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PassiveSetSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EffectedComponentName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDebugMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisabled,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMMTFrictionSolverComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMMTFrictionSolverComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(UMMTFrictionSolverComponent, 1311901556);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMMTFrictionSolverComponent(Z_Construct_UClass_UMMTFrictionSolverComponent, &UMMTFrictionSolverComponent::StaticClass, TEXT("/Script/MMT"), TEXT("UMMTFrictionSolverComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMTFrictionSolverComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
