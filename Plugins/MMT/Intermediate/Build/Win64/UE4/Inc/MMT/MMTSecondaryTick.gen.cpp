// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/MMTPluginPCH.h"
#include "Public/MMTSecondaryTick.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTSecondaryTick() {}
// Cross Module References
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FSecondaryTickFunction();
	UPackage* Z_Construct_UPackage__Script_MMT();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTickFunction();
// End Cross Module References
class UScriptStruct* FSecondaryTickFunction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MMT_API uint32 Get_Z_Construct_UScriptStruct_FSecondaryTickFunction_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSecondaryTickFunction, Z_Construct_UPackage__Script_MMT(), TEXT("SecondaryTickFunction"), sizeof(FSecondaryTickFunction), Get_Z_Construct_UScriptStruct_FSecondaryTickFunction_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSecondaryTickFunction(FSecondaryTickFunction::StaticStruct, TEXT("/Script/MMT"), TEXT("SecondaryTickFunction"), false, nullptr, nullptr);
static struct FScriptStruct_MMT_StaticRegisterNativesFSecondaryTickFunction
{
	FScriptStruct_MMT_StaticRegisterNativesFSecondaryTickFunction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SecondaryTickFunction")),new UScriptStruct::TCppStructOps<FSecondaryTickFunction>);
	}
} ScriptStruct_MMT_StaticRegisterNativesFSecondaryTickFunction;
	UScriptStruct* Z_Construct_UScriptStruct_FSecondaryTickFunction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSecondaryTickFunction_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SecondaryTickFunction"), sizeof(FSecondaryTickFunction), Get_Z_Construct_UScriptStruct_FSecondaryTickFunction_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MMTSecondaryTick.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSecondaryTickFunction>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MMT,
				Z_Construct_UScriptStruct_FTickFunction,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SecondaryTickFunction",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FSecondaryTickFunction),
				alignof(FSecondaryTickFunction),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSecondaryTickFunction_CRC() { return 375152939U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
