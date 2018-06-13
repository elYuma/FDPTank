// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/MMTPluginPCH.h"
#include "Public/MMTContactPointDataStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTContactPointDataStruct() {}
// Cross Module References
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FContactPointDataStruct();
	UPackage* Z_Construct_UPackage__Script_MMT();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPhysicalSurface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FContactPointDataStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MMT_API uint32 Get_Z_Construct_UScriptStruct_FContactPointDataStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FContactPointDataStruct, Z_Construct_UPackage__Script_MMT(), TEXT("ContactPointDataStruct"), sizeof(FContactPointDataStruct), Get_Z_Construct_UScriptStruct_FContactPointDataStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FContactPointDataStruct(FContactPointDataStruct::StaticStruct, TEXT("/Script/MMT"), TEXT("ContactPointDataStruct"), false, nullptr, nullptr);
static struct FScriptStruct_MMT_StaticRegisterNativesFContactPointDataStruct
{
	FScriptStruct_MMT_StaticRegisterNativesFContactPointDataStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ContactPointDataStruct")),new UScriptStruct::TCppStructOps<FContactPointDataStruct>);
	}
} ScriptStruct_MMT_StaticRegisterNativesFContactPointDataStruct;
	UScriptStruct* Z_Construct_UScriptStruct_FContactPointDataStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FContactPointDataStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ContactPointDataStruct"), sizeof(FContactPointDataStruct), Get_Z_Construct_UScriptStruct_FContactPointDataStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MMTContactPointDataStruct.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContactPointDataStruct>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalSurface_MetaData[] = {
				{ "Category", "MMT Friction Component" },
				{ "ModuleRelativePath", "Public/MMTContactPointDataStruct.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PhysicalSurface = { UE4CodeGen_Private::EPropertyClass::Byte, "PhysicalSurface", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FContactPointDataStruct, PhysicalSurface), Z_Construct_UEnum_Engine_EPhysicalSurface, METADATA_PARAMS(NewProp_PhysicalSurface_MetaData, ARRAY_COUNT(NewProp_PhysicalSurface_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContactPointNormal_MetaData[] = {
				{ "Category", "MMT Friction Component" },
				{ "ModuleRelativePath", "Public/MMTContactPointDataStruct.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContactPointNormal = { UE4CodeGen_Private::EPropertyClass::Struct, "ContactPointNormal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FContactPointDataStruct, ContactPointNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_ContactPointNormal_MetaData, ARRAY_COUNT(NewProp_ContactPointNormal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContactPointLocation_MetaData[] = {
				{ "Category", "MMT Friction Component" },
				{ "ModuleRelativePath", "Public/MMTContactPointDataStruct.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContactPointLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "ContactPointLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FContactPointDataStruct, ContactPointLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_ContactPointLocation_MetaData, ARRAY_COUNT(NewProp_ContactPointLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTreatAsImpulse_MetaData[] = {
				{ "Category", "MMT Friction Component" },
				{ "ModuleRelativePath", "Public/MMTContactPointDataStruct.h" },
				{ "ToolTip", "Should we treat ImpactForceOrImpulseAtPoint as impulse instead of force?" },
			};
#endif
			auto NewProp_bTreatAsImpulse_SetBit = [](void* Obj){ ((FContactPointDataStruct*)Obj)->bTreatAsImpulse = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTreatAsImpulse = { UE4CodeGen_Private::EPropertyClass::Bool, "bTreatAsImpulse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FContactPointDataStruct), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTreatAsImpulse_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTreatAsImpulse_MetaData, ARRAY_COUNT(NewProp_bTreatAsImpulse_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactForceOrImpulseAtPoint_MetaData[] = {
				{ "Category", "MMT Friction Component" },
				{ "ModuleRelativePath", "Public/MMTContactPointDataStruct.h" },
				{ "ToolTip", "Provide force of the impact at contact point in form of force or an impulse. Collision events provide Normal Impulse, but suspension pushing on the wheel against the ground, provides Force." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactForceOrImpulseAtPoint = { UE4CodeGen_Private::EPropertyClass::Struct, "ImpactForceOrImpulseAtPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FContactPointDataStruct, ImpactForceOrImpulseAtPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_ImpactForceOrImpulseAtPoint_MetaData, ARRAY_COUNT(NewProp_ImpactForceOrImpulseAtPoint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InducedVelocity_MetaData[] = {
				{ "Category", "MMT Friction Component" },
				{ "ModuleRelativePath", "Public/MMTContactPointDataStruct.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InducedVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "InducedVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FContactPointDataStruct, InducedVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_InducedVelocity_MetaData, ARRAY_COUNT(NewProp_InducedVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPointActive_MetaData[] = {
				{ "Category", "MMT Friction Component" },
				{ "ModuleRelativePath", "Public/MMTContactPointDataStruct.h" },
			};
#endif
			auto NewProp_IsPointActive_SetBit = [](void* Obj){ ((FContactPointDataStruct*)Obj)->IsPointActive = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPointActive = { UE4CodeGen_Private::EPropertyClass::Bool, "IsPointActive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FContactPointDataStruct), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsPointActive_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsPointActive_MetaData, ARRAY_COUNT(NewProp_IsPointActive_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhysicalSurface,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ContactPointNormal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ContactPointLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTreatAsImpulse,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImpactForceOrImpulseAtPoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InducedVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsPointActive,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MMT,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ContactPointDataStruct",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FContactPointDataStruct),
				alignof(FContactPointDataStruct),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FContactPointDataStruct_CRC() { return 2992192241U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
