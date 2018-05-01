// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/MMTPluginPCH.h"
#include "Private/MMTFrictionSetPassive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTFrictionSetPassive() {}
// Cross Module References
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FFrictionSetPassiveStruct();
	UPackage* Z_Construct_UPackage__Script_MMT();
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct();
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FFrictionSetBaseStruct();
	MMT_API UClass* Z_Construct_UClass_UMMTFrictionSetPassive_NoRegister();
	MMT_API UClass* Z_Construct_UClass_UMMTFrictionSetPassive();
	MMT_API UClass* Z_Construct_UClass_UMMTFrictionSetBase();
// End Cross Module References
class UScriptStruct* FFrictionSetPassiveStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MMT_API uint32 Get_Z_Construct_UScriptStruct_FFrictionSetPassiveStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFrictionSetPassiveStruct, Z_Construct_UPackage__Script_MMT(), TEXT("FrictionSetPassiveStruct"), sizeof(FFrictionSetPassiveStruct), Get_Z_Construct_UScriptStruct_FFrictionSetPassiveStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFrictionSetPassiveStruct(FFrictionSetPassiveStruct::StaticStruct, TEXT("/Script/MMT"), TEXT("FrictionSetPassiveStruct"), false, nullptr, nullptr);
static struct FScriptStruct_MMT_StaticRegisterNativesFFrictionSetPassiveStruct
{
	FScriptStruct_MMT_StaticRegisterNativesFFrictionSetPassiveStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FrictionSetPassiveStruct")),new UScriptStruct::TCppStructOps<FFrictionSetPassiveStruct>);
	}
} ScriptStruct_MMT_StaticRegisterNativesFFrictionSetPassiveStruct;
	UScriptStruct* Z_Construct_UScriptStruct_FFrictionSetPassiveStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFrictionSetPassiveStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FrictionSetPassiveStruct"), sizeof(FFrictionSetPassiveStruct), Get_Z_Construct_UScriptStruct_FFrictionSetPassiveStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Private/MMTFrictionSetPassive.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFrictionSetPassiveStruct>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Surface_MetaData[] = {
				{ "Category", "FrictionSetPassiveStruct" },
				{ "ModuleRelativePath", "Private/MMTFrictionSetPassive.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Surface = { UE4CodeGen_Private::EPropertyClass::Struct, "Surface", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFrictionSetPassiveStruct, Surface), Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct, METADATA_PARAMS(NewProp_Surface_MetaData, ARRAY_COUNT(NewProp_Surface_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_General_MetaData[] = {
				{ "Category", "FrictionSetPassiveStruct" },
				{ "ModuleRelativePath", "Private/MMTFrictionSetPassive.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_General = { UE4CodeGen_Private::EPropertyClass::Struct, "General", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFrictionSetPassiveStruct, General), Z_Construct_UScriptStruct_FFrictionSetBaseStruct, METADATA_PARAMS(NewProp_General_MetaData, ARRAY_COUNT(NewProp_General_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Surface,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_General,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MMT,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"FrictionSetPassiveStruct",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FFrictionSetPassiveStruct),
				alignof(FFrictionSetPassiveStruct),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFrictionSetPassiveStruct_CRC() { return 934812320U; }
class UScriptStruct* FFrictionSetPassiveSpecificStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MMT_API uint32 Get_Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct, Z_Construct_UPackage__Script_MMT(), TEXT("FrictionSetPassiveSpecificStruct"), sizeof(FFrictionSetPassiveSpecificStruct), Get_Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFrictionSetPassiveSpecificStruct(FFrictionSetPassiveSpecificStruct::StaticStruct, TEXT("/Script/MMT"), TEXT("FrictionSetPassiveSpecificStruct"), false, nullptr, nullptr);
static struct FScriptStruct_MMT_StaticRegisterNativesFFrictionSetPassiveSpecificStruct
{
	FScriptStruct_MMT_StaticRegisterNativesFFrictionSetPassiveSpecificStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FrictionSetPassiveSpecificStruct")),new UScriptStruct::TCppStructOps<FFrictionSetPassiveSpecificStruct>);
	}
} ScriptStruct_MMT_StaticRegisterNativesFFrictionSetPassiveSpecificStruct;
	UScriptStruct* Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FrictionSetPassiveSpecificStruct"), sizeof(FFrictionSetPassiveSpecificStruct), Get_Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Private/MMTFrictionSetPassive.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFrictionSetPassiveSpecificStruct>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuYKinetic_MetaData[] = {
				{ "Category", "Surface" },
				{ "EditCondition", "bUseAnisotropicFriction" },
				{ "ModuleRelativePath", "Private/MMTFrictionSetPassive.h" },
				{ "ToolTip", "Kinetic friction coefficient in Y axis" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MuYKinetic = { UE4CodeGen_Private::EPropertyClass::Float, "MuYKinetic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFrictionSetPassiveSpecificStruct, MuYKinetic), METADATA_PARAMS(NewProp_MuYKinetic_MetaData, ARRAY_COUNT(NewProp_MuYKinetic_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuYStatic_MetaData[] = {
				{ "Category", "Surface" },
				{ "EditCondition", "bUseAnisotropicFriction" },
				{ "ModuleRelativePath", "Private/MMTFrictionSetPassive.h" },
				{ "ToolTip", "Static friction coefficient in Y axis" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MuYStatic = { UE4CodeGen_Private::EPropertyClass::Float, "MuYStatic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFrictionSetPassiveSpecificStruct, MuYStatic), METADATA_PARAMS(NewProp_MuYStatic_MetaData, ARRAY_COUNT(NewProp_MuYStatic_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAnisotropicFriction_MetaData[] = {
				{ "Category", "Surface" },
				{ "ModuleRelativePath", "Private/MMTFrictionSetPassive.h" },
				{ "ToolTip", "Set TRUE to specify different friction coefficient in Y axis, otherwise MuX is used as uniform coefficient. Useful for objects such as ice skates, brushed contact surface and some types of tank tracks." },
			};
#endif
			auto NewProp_bUseAnisotropicFriction_SetBit = [](void* Obj){ ((FFrictionSetPassiveSpecificStruct*)Obj)->bUseAnisotropicFriction = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAnisotropicFriction = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseAnisotropicFriction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FFrictionSetPassiveSpecificStruct), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseAnisotropicFriction_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseAnisotropicFriction_MetaData, ARRAY_COUNT(NewProp_bUseAnisotropicFriction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuXKinetic_MetaData[] = {
				{ "Category", "Surface" },
				{ "ModuleRelativePath", "Private/MMTFrictionSetPassive.h" },
				{ "ToolTip", "Kinetic friction coefficient in X axis" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MuXKinetic = { UE4CodeGen_Private::EPropertyClass::Float, "MuXKinetic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFrictionSetPassiveSpecificStruct, MuXKinetic), METADATA_PARAMS(NewProp_MuXKinetic_MetaData, ARRAY_COUNT(NewProp_MuXKinetic_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuXStatic_MetaData[] = {
				{ "Category", "Surface" },
				{ "ModuleRelativePath", "Private/MMTFrictionSetPassive.h" },
				{ "ToolTip", "Static friction coefficient in X axis" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MuXStatic = { UE4CodeGen_Private::EPropertyClass::Float, "MuXStatic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFrictionSetPassiveSpecificStruct, MuXStatic), METADATA_PARAMS(NewProp_MuXStatic_MetaData, ARRAY_COUNT(NewProp_MuXStatic_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
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
				"FrictionSetPassiveSpecificStruct",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FFrictionSetPassiveSpecificStruct),
				alignof(FFrictionSetPassiveSpecificStruct),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_CRC() { return 393335473U; }
	void UMMTFrictionSetPassive::StaticRegisterNativesUMMTFrictionSetPassive()
	{
	}
	UClass* Z_Construct_UClass_UMMTFrictionSetPassive_NoRegister()
	{
		return UMMTFrictionSetPassive::StaticClass();
	}
	UClass* Z_Construct_UClass_UMMTFrictionSetPassive()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMMTFrictionSetBase,
				(UObject* (*)())Z_Construct_UPackage__Script_MMT,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "MMTFrictionSetPassive.h" },
				{ "ModuleRelativePath", "Private/MMTFrictionSetPassive.h" },
				{ "ToolTip", "Passive friction set is for processing surfaces such as ski or similar which don't have active moving surfaces such as wheels or tracks" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuYKinetic_MetaData[] = {
				{ "ModuleRelativePath", "Private/MMTFrictionSetPassive.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MuYKinetic = { UE4CodeGen_Private::EPropertyClass::Float, "MuYKinetic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTFrictionSetPassive, MuYKinetic), METADATA_PARAMS(NewProp_MuYKinetic_MetaData, ARRAY_COUNT(NewProp_MuYKinetic_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuYStatic_MetaData[] = {
				{ "ModuleRelativePath", "Private/MMTFrictionSetPassive.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MuYStatic = { UE4CodeGen_Private::EPropertyClass::Float, "MuYStatic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTFrictionSetPassive, MuYStatic), METADATA_PARAMS(NewProp_MuYStatic_MetaData, ARRAY_COUNT(NewProp_MuYStatic_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAnisotropicFriction_MetaData[] = {
				{ "ModuleRelativePath", "Private/MMTFrictionSetPassive.h" },
			};
#endif
			auto NewProp_bUseAnisotropicFriction_SetBit = [](void* Obj){ ((UMMTFrictionSetPassive*)Obj)->bUseAnisotropicFriction = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAnisotropicFriction = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseAnisotropicFriction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMMTFrictionSetPassive), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseAnisotropicFriction_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseAnisotropicFriction_MetaData, ARRAY_COUNT(NewProp_bUseAnisotropicFriction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuXKinetic_MetaData[] = {
				{ "ModuleRelativePath", "Private/MMTFrictionSetPassive.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MuXKinetic = { UE4CodeGen_Private::EPropertyClass::Float, "MuXKinetic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTFrictionSetPassive, MuXKinetic), METADATA_PARAMS(NewProp_MuXKinetic_MetaData, ARRAY_COUNT(NewProp_MuXKinetic_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuXStatic_MetaData[] = {
				{ "ModuleRelativePath", "Private/MMTFrictionSetPassive.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MuXStatic = { UE4CodeGen_Private::EPropertyClass::Float, "MuXStatic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTFrictionSetPassive, MuXStatic), METADATA_PARAMS(NewProp_MuXStatic_MetaData, ARRAY_COUNT(NewProp_MuXStatic_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MuYKinetic,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MuYStatic,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseAnisotropicFriction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MuXKinetic,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MuXStatic,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMMTFrictionSetPassive>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMMTFrictionSetPassive::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(UMMTFrictionSetPassive, 896129873);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMMTFrictionSetPassive(Z_Construct_UClass_UMMTFrictionSetPassive, &UMMTFrictionSetPassive::StaticClass, TEXT("/Script/MMT"), TEXT("UMMTFrictionSetPassive"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMTFrictionSetPassive);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
