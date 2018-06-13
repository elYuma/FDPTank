// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/MMTPluginPCH.h"
#include "Public/MMTPhysicalSurfaceFrictionCoefficient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTPhysicalSurfaceFrictionCoefficient() {}
// Cross Module References
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients();
	UPackage* Z_Construct_UPackage__Script_MMT();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPhysicalSurface();
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct();
	MMT_API UClass* Z_Construct_UClass_UMMTPhysicalSurfaceFrictionCoefficientsDataAsset_NoRegister();
	MMT_API UClass* Z_Construct_UClass_UMMTPhysicalSurfaceFrictionCoefficientsDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
// End Cross Module References
class UScriptStruct* FMMTPhysicalSurfaceFrictionCoefficients::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MMT_API uint32 Get_Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients, Z_Construct_UPackage__Script_MMT(), TEXT("MMTPhysicalSurfaceFrictionCoefficients"), sizeof(FMMTPhysicalSurfaceFrictionCoefficients), Get_Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients(FMMTPhysicalSurfaceFrictionCoefficients::StaticStruct, TEXT("/Script/MMT"), TEXT("MMTPhysicalSurfaceFrictionCoefficients"), false, nullptr, nullptr);
static struct FScriptStruct_MMT_StaticRegisterNativesFMMTPhysicalSurfaceFrictionCoefficients
{
	FScriptStruct_MMT_StaticRegisterNativesFMMTPhysicalSurfaceFrictionCoefficients()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MMTPhysicalSurfaceFrictionCoefficients")),new UScriptStruct::TCppStructOps<FMMTPhysicalSurfaceFrictionCoefficients>);
	}
} ScriptStruct_MMT_StaticRegisterNativesFMMTPhysicalSurfaceFrictionCoefficients;
	UScriptStruct* Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MMTPhysicalSurfaceFrictionCoefficients"), sizeof(FMMTPhysicalSurfaceFrictionCoefficients), Get_Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MMTPhysicalSurfaceFrictionCoefficient.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMMTPhysicalSurfaceFrictionCoefficients>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollingFrictionCoefficient_MetaData[] = {
				{ "Category", "MMTPhysicalSurfaceFrictionCoefficients" },
				{ "ModuleRelativePath", "Public/MMTPhysicalSurfaceFrictionCoefficient.h" },
				{ "ToolTip", "Higher rolling friction coefficient leads to higher rolling friction force" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RollingFrictionCoefficient = { UE4CodeGen_Private::EPropertyClass::Float, "RollingFrictionCoefficient", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMMTPhysicalSurfaceFrictionCoefficients, RollingFrictionCoefficient), METADATA_PARAMS(NewProp_RollingFrictionCoefficient_MetaData, ARRAY_COUNT(NewProp_RollingFrictionCoefficient_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrictionScaleFactor_MetaData[] = {
				{ "Category", "MMTPhysicalSurfaceFrictionCoefficients" },
				{ "ModuleRelativePath", "Public/MMTPhysicalSurfaceFrictionCoefficient.h" },
				{ "ToolTip", "Scale of the friction coefficient in respect to surface type. For example Ice would have smaller friction such as 0.1, while asphalt would improve friction with scale of 1.2" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrictionScaleFactor = { UE4CodeGen_Private::EPropertyClass::Float, "FrictionScaleFactor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMMTPhysicalSurfaceFrictionCoefficients, FrictionScaleFactor), METADATA_PARAMS(NewProp_FrictionScaleFactor_MetaData, ARRAY_COUNT(NewProp_FrictionScaleFactor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalSurface_MetaData[] = {
				{ "Category", "MMTPhysicalSurfaceFrictionCoefficients" },
				{ "ModuleRelativePath", "Public/MMTPhysicalSurfaceFrictionCoefficient.h" },
				{ "ToolTip", "Physical surface for which we define friction properties" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PhysicalSurface = { UE4CodeGen_Private::EPropertyClass::Byte, "PhysicalSurface", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMMTPhysicalSurfaceFrictionCoefficients, PhysicalSurface), Z_Construct_UEnum_Engine_EPhysicalSurface, METADATA_PARAMS(NewProp_PhysicalSurface_MetaData, ARRAY_COUNT(NewProp_PhysicalSurface_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RollingFrictionCoefficient,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrictionScaleFactor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhysicalSurface,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MMT,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MMTPhysicalSurfaceFrictionCoefficients",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMMTPhysicalSurfaceFrictionCoefficients),
				alignof(FMMTPhysicalSurfaceFrictionCoefficients),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients_CRC() { return 44306914U; }
class UScriptStruct* FPhysicalSurfaceRollingFrictionCoefficientStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MMT_API uint32 Get_Z_Construct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct, Z_Construct_UPackage__Script_MMT(), TEXT("PhysicalSurfaceRollingFrictionCoefficientStruct"), sizeof(FPhysicalSurfaceRollingFrictionCoefficientStruct), Get_Z_Construct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct(FPhysicalSurfaceRollingFrictionCoefficientStruct::StaticStruct, TEXT("/Script/MMT"), TEXT("PhysicalSurfaceRollingFrictionCoefficientStruct"), false, nullptr, nullptr);
static struct FScriptStruct_MMT_StaticRegisterNativesFPhysicalSurfaceRollingFrictionCoefficientStruct
{
	FScriptStruct_MMT_StaticRegisterNativesFPhysicalSurfaceRollingFrictionCoefficientStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PhysicalSurfaceRollingFrictionCoefficientStruct")),new UScriptStruct::TCppStructOps<FPhysicalSurfaceRollingFrictionCoefficientStruct>);
	}
} ScriptStruct_MMT_StaticRegisterNativesFPhysicalSurfaceRollingFrictionCoefficientStruct;
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PhysicalSurfaceRollingFrictionCoefficientStruct"), sizeof(FPhysicalSurfaceRollingFrictionCoefficientStruct), Get_Z_Construct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MMTPhysicalSurfaceFrictionCoefficient.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicalSurfaceRollingFrictionCoefficientStruct>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollingFrictionCoefficient_MetaData[] = {
				{ "Category", "MMT Friction" },
				{ "ModuleRelativePath", "Public/MMTPhysicalSurfaceFrictionCoefficient.h" },
				{ "ToolTip", "Higher rolling friction coefficient leads to higher rolling friction force" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RollingFrictionCoefficient = { UE4CodeGen_Private::EPropertyClass::Float, "RollingFrictionCoefficient", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPhysicalSurfaceRollingFrictionCoefficientStruct, RollingFrictionCoefficient), METADATA_PARAMS(NewProp_RollingFrictionCoefficient_MetaData, ARRAY_COUNT(NewProp_RollingFrictionCoefficient_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalSurface_MetaData[] = {
				{ "Category", "MMT Friction" },
				{ "ModuleRelativePath", "Public/MMTPhysicalSurfaceFrictionCoefficient.h" },
				{ "ToolTip", "Physical surface for which we want to define rolling friction coefficient" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PhysicalSurface = { UE4CodeGen_Private::EPropertyClass::Byte, "PhysicalSurface", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPhysicalSurfaceRollingFrictionCoefficientStruct, PhysicalSurface), Z_Construct_UEnum_Engine_EPhysicalSurface, METADATA_PARAMS(NewProp_PhysicalSurface_MetaData, ARRAY_COUNT(NewProp_PhysicalSurface_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RollingFrictionCoefficient,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhysicalSurface,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MMT,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"PhysicalSurfaceRollingFrictionCoefficientStruct",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FPhysicalSurfaceRollingFrictionCoefficientStruct),
				alignof(FPhysicalSurfaceRollingFrictionCoefficientStruct),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct_CRC() { return 1530427137U; }
	void UMMTPhysicalSurfaceFrictionCoefficientsDataAsset::StaticRegisterNativesUMMTPhysicalSurfaceFrictionCoefficientsDataAsset()
	{
	}
	UClass* Z_Construct_UClass_UMMTPhysicalSurfaceFrictionCoefficientsDataAsset_NoRegister()
	{
		return UMMTPhysicalSurfaceFrictionCoefficientsDataAsset::StaticClass();
	}
	UClass* Z_Construct_UClass_UMMTPhysicalSurfaceFrictionCoefficientsDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UDataAsset,
				(UObject* (*)())Z_Construct_UPackage__Script_MMT,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "MMTPhysicalSurfaceFrictionCoefficient.h" },
				{ "ModuleRelativePath", "Public/MMTPhysicalSurfaceFrictionCoefficient.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalSurfaceFrictionCoefficients_MetaData[] = {
				{ "Category", "MMTPhysicalSurfaceFrictionCoefficientsDataAsset" },
				{ "ModuleRelativePath", "Public/MMTPhysicalSurfaceFrictionCoefficient.h" },
				{ "ToolTip", "Friction coefficients for different physical surfaces" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PhysicalSurfaceFrictionCoefficients = { UE4CodeGen_Private::EPropertyClass::Array, "PhysicalSurfaceFrictionCoefficients", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMMTPhysicalSurfaceFrictionCoefficientsDataAsset, PhysicalSurfaceFrictionCoefficients), METADATA_PARAMS(NewProp_PhysicalSurfaceFrictionCoefficients_MetaData, ARRAY_COUNT(NewProp_PhysicalSurfaceFrictionCoefficients_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PhysicalSurfaceFrictionCoefficients_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PhysicalSurfaceFrictionCoefficients", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhysicalSurfaceFrictionCoefficients,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhysicalSurfaceFrictionCoefficients_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMMTPhysicalSurfaceFrictionCoefficientsDataAsset>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMMTPhysicalSurfaceFrictionCoefficientsDataAsset::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
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
	IMPLEMENT_CLASS(UMMTPhysicalSurfaceFrictionCoefficientsDataAsset, 259778147);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMMTPhysicalSurfaceFrictionCoefficientsDataAsset(Z_Construct_UClass_UMMTPhysicalSurfaceFrictionCoefficientsDataAsset, &UMMTPhysicalSurfaceFrictionCoefficientsDataAsset::StaticClass, TEXT("/Script/MMT"), TEXT("UMMTPhysicalSurfaceFrictionCoefficientsDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMTPhysicalSurfaceFrictionCoefficientsDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
