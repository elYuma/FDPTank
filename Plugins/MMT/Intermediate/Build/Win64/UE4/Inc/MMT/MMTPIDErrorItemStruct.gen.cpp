// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/MMTPluginPCH.h"
#include "Public/MMTPIDErrorItemStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTPIDErrorItemStruct() {}
// Cross Module References
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FPIDErrorItemStruct();
	UPackage* Z_Construct_UPackage__Script_MMT();
// End Cross Module References
class UScriptStruct* FPIDErrorItemStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MMT_API uint32 Get_Z_Construct_UScriptStruct_FPIDErrorItemStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPIDErrorItemStruct, Z_Construct_UPackage__Script_MMT(), TEXT("PIDErrorItemStruct"), sizeof(FPIDErrorItemStruct), Get_Z_Construct_UScriptStruct_FPIDErrorItemStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPIDErrorItemStruct(FPIDErrorItemStruct::StaticStruct, TEXT("/Script/MMT"), TEXT("PIDErrorItemStruct"), false, nullptr, nullptr);
static struct FScriptStruct_MMT_StaticRegisterNativesFPIDErrorItemStruct
{
	FScriptStruct_MMT_StaticRegisterNativesFPIDErrorItemStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PIDErrorItemStruct")),new UScriptStruct::TCppStructOps<FPIDErrorItemStruct>);
	}
} ScriptStruct_MMT_StaticRegisterNativesFPIDErrorItemStruct;
	UScriptStruct* Z_Construct_UScriptStruct_FPIDErrorItemStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPIDErrorItemStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PIDErrorItemStruct"), sizeof(FPIDErrorItemStruct), Get_Z_Construct_UScriptStruct_FPIDErrorItemStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MMTPIDErrorItemStruct.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPIDErrorItemStruct>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[] = {
				{ "Category", "MMT PID Controller" },
				{ "ModuleRelativePath", "Public/MMTPIDErrorItemStruct.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPIDErrorItemStruct, DeltaTime), METADATA_PARAMS(NewProp_DeltaTime_MetaData, ARRAY_COUNT(NewProp_DeltaTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeasuredValue_MetaData[] = {
				{ "Category", "MMT PID Controller" },
				{ "ModuleRelativePath", "Public/MMTPIDErrorItemStruct.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MeasuredValue = { UE4CodeGen_Private::EPropertyClass::Float, "MeasuredValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPIDErrorItemStruct, MeasuredValue), METADATA_PARAMS(NewProp_MeasuredValue_MetaData, ARRAY_COUNT(NewProp_MeasuredValue_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeltaTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeasuredValue,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MMT,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"PIDErrorItemStruct",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FPIDErrorItemStruct),
				alignof(FPIDErrorItemStruct),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPIDErrorItemStruct_CRC() { return 2006005453U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
