// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/MMTPluginPCH.h"
#include "Public/MMTTrackSplinePointAnimatedStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTTrackSplinePointAnimatedStruct() {}
// Cross Module References
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct();
	UPackage* Z_Construct_UPackage__Script_MMT();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FTrackSplinePointAnimatedStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MMT_API uint32 Get_Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct, Z_Construct_UPackage__Script_MMT(), TEXT("TrackSplinePointAnimatedStruct"), sizeof(FTrackSplinePointAnimatedStruct), Get_Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTrackSplinePointAnimatedStruct(FTrackSplinePointAnimatedStruct::StaticStruct, TEXT("/Script/MMT"), TEXT("TrackSplinePointAnimatedStruct"), false, nullptr, nullptr);
static struct FScriptStruct_MMT_StaticRegisterNativesFTrackSplinePointAnimatedStruct
{
	FScriptStruct_MMT_StaticRegisterNativesFTrackSplinePointAnimatedStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TrackSplinePointAnimatedStruct")),new UScriptStruct::TCppStructOps<FTrackSplinePointAnimatedStruct>);
	}
} ScriptStruct_MMT_StaticRegisterNativesFTrackSplinePointAnimatedStruct;
	UScriptStruct* Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TrackSplinePointAnimatedStruct"), sizeof(FTrackSplinePointAnimatedStruct), Get_Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MMTTrackSplinePointAnimatedStruct.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrackSplinePointAnimatedStruct>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MMTTrackSplinePointAnimatedStruct.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(FTrackSplinePointAnimatedStruct, StaticMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(NewProp_StaticMesh_MetaData, ARRAY_COUNT(NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshSocketName_MetaData[] = {
				{ "Category", "MMT Track Animation Component" },
				{ "ModuleRelativePath", "Public/MMTTrackSplinePointAnimatedStruct.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_StaticMeshSocketName = { UE4CodeGen_Private::EPropertyClass::Name, "StaticMeshSocketName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTrackSplinePointAnimatedStruct, StaticMeshSocketName), METADATA_PARAMS(NewProp_StaticMeshSocketName_MetaData, ARRAY_COUNT(NewProp_StaticMeshSocketName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshName_MetaData[] = {
				{ "Category", "MMT Track Animation Component" },
				{ "ModuleRelativePath", "Public/MMTTrackSplinePointAnimatedStruct.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_StaticMeshName = { UE4CodeGen_Private::EPropertyClass::Str, "StaticMeshName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTrackSplinePointAnimatedStruct, StaticMeshName), METADATA_PARAMS(NewProp_StaticMeshName_MetaData, ARRAY_COUNT(NewProp_StaticMeshName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplinePointIndex_MetaData[] = {
				{ "Category", "MMT Track Animation Component" },
				{ "ModuleRelativePath", "Public/MMTTrackSplinePointAnimatedStruct.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SplinePointIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SplinePointIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTrackSplinePointAnimatedStruct, SplinePointIndex), METADATA_PARAMS(NewProp_SplinePointIndex_MetaData, ARRAY_COUNT(NewProp_SplinePointIndex_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StaticMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StaticMeshSocketName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StaticMeshName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SplinePointIndex,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MMT,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TrackSplinePointAnimatedStruct",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FTrackSplinePointAnimatedStruct),
				alignof(FTrackSplinePointAnimatedStruct),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct_CRC() { return 3700252057U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
