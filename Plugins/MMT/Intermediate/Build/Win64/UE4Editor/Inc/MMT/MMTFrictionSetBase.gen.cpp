// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/MMTPluginPCH.h"
#include "Private/MMTFrictionSetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTFrictionSetBase() {}
// Cross Module References
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FFrictionSetBaseStruct();
	UPackage* Z_Construct_UPackage__Script_MMT();
	MMT_API UClass* Z_Construct_UClass_UMMTFrictionSetBase_NoRegister();
	MMT_API UClass* Z_Construct_UClass_UMMTFrictionSetBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FFrictionSetBaseStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MMT_API uint32 Get_Z_Construct_UScriptStruct_FFrictionSetBaseStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFrictionSetBaseStruct, Z_Construct_UPackage__Script_MMT(), TEXT("FrictionSetBaseStruct"), sizeof(FFrictionSetBaseStruct), Get_Z_Construct_UScriptStruct_FFrictionSetBaseStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFrictionSetBaseStruct(FFrictionSetBaseStruct::StaticStruct, TEXT("/Script/MMT"), TEXT("FrictionSetBaseStruct"), false, nullptr, nullptr);
static struct FScriptStruct_MMT_StaticRegisterNativesFFrictionSetBaseStruct
{
	FScriptStruct_MMT_StaticRegisterNativesFFrictionSetBaseStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FrictionSetBaseStruct")),new UScriptStruct::TCppStructOps<FFrictionSetBaseStruct>);
	}
} ScriptStruct_MMT_StaticRegisterNativesFFrictionSetBaseStruct;
	UScriptStruct* Z_Construct_UScriptStruct_FFrictionSetBaseStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFrictionSetBaseStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FrictionSetBaseStruct"), sizeof(FFrictionSetBaseStruct), Get_Z_Construct_UScriptStruct_FFrictionSetBaseStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Private/MMTFrictionSetBase.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFrictionSetBaseStruct>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugMode_MetaData[] = {
				{ "Category", "FrictionSetBaseStruct" },
				{ "ModuleRelativePath", "Private/MMTFrictionSetBase.h" },
				{ "ToolTip", "Enable on screen debug output" },
			};
#endif
			auto NewProp_bDebugMode_SetBit = [](void* Obj){ ((FFrictionSetBaseStruct*)Obj)->bDebugMode = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugMode = { UE4CodeGen_Private::EPropertyClass::Bool, "bDebugMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FFrictionSetBaseStruct), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDebugMode_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDebugMode_MetaData, ARRAY_COUNT(NewProp_bDebugMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisabled_MetaData[] = {
				{ "Category", "FrictionSetBaseStruct" },
				{ "ModuleRelativePath", "Private/MMTFrictionSetBase.h" },
				{ "ToolTip", "Disables item from physics calculations and applying forces, useful for debugging." },
			};
#endif
			auto NewProp_bDisabled_SetBit = [](void* Obj){ ((FFrictionSetBaseStruct*)Obj)->bDisabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FFrictionSetBaseStruct), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisabled_MetaData, ARRAY_COUNT(NewProp_bDisabled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferenceFrameComponentName_MetaData[] = {
				{ "Category", "FrictionSetBaseStruct" },
				{ "ModuleRelativePath", "Private/MMTFrictionSetBase.h" },
				{ "ToolTip", "Name of the mesh component that will be used as frame of reference for world space position and rotations" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReferenceFrameComponentName = { UE4CodeGen_Private::EPropertyClass::Str, "ReferenceFrameComponentName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFrictionSetBaseStruct, ReferenceFrameComponentName), METADATA_PARAMS(NewProp_ReferenceFrameComponentName_MetaData, ARRAY_COUNT(NewProp_ReferenceFrameComponentName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrictionSetName_MetaData[] = {
				{ "Category", "FrictionSetBaseStruct" },
				{ "ModuleRelativePath", "Private/MMTFrictionSetBase.h" },
				{ "ToolTip", "Name of this friction set for debugging purposes and improving usability" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_FrictionSetName = { UE4CodeGen_Private::EPropertyClass::Name, "FrictionSetName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFrictionSetBaseStruct, FrictionSetName), METADATA_PARAMS(NewProp_FrictionSetName_MetaData, ARRAY_COUNT(NewProp_FrictionSetName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDebugMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReferenceFrameComponentName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrictionSetName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MMT,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"FrictionSetBaseStruct",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FFrictionSetBaseStruct),
				alignof(FFrictionSetBaseStruct),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFrictionSetBaseStruct_CRC() { return 2161289548U; }
	void UMMTFrictionSetBase::StaticRegisterNativesUMMTFrictionSetBase()
	{
	}
	UClass* Z_Construct_UClass_UMMTFrictionSetBase_NoRegister()
	{
		return UMMTFrictionSetBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UMMTFrictionSetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_MMT,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "MMTFrictionSetBase.h" },
				{ "ModuleRelativePath", "Private/MMTFrictionSetBase.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugMode_MetaData[] = {
				{ "ModuleRelativePath", "Private/MMTFrictionSetBase.h" },
			};
#endif
			auto NewProp_bDebugMode_SetBit = [](void* Obj){ ((UMMTFrictionSetBase*)Obj)->bDebugMode = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugMode = { UE4CodeGen_Private::EPropertyClass::Bool, "bDebugMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMMTFrictionSetBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDebugMode_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDebugMode_MetaData, ARRAY_COUNT(NewProp_bDebugMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisabled_MetaData[] = {
				{ "ModuleRelativePath", "Private/MMTFrictionSetBase.h" },
			};
#endif
			auto NewProp_bDisabled_SetBit = [](void* Obj){ ((UMMTFrictionSetBase*)Obj)->bDisabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMMTFrictionSetBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisabled_MetaData, ARRAY_COUNT(NewProp_bDisabled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferenceFrameComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Private/MMTFrictionSetBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReferenceFrameComponent = { UE4CodeGen_Private::EPropertyClass::Object, "ReferenceFrameComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(UMMTFrictionSetBase, ReferenceFrameComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_ReferenceFrameComponent_MetaData, ARRAY_COUNT(NewProp_ReferenceFrameComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectedComponentMesh_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Private/MMTFrictionSetBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectedComponentMesh = { UE4CodeGen_Private::EPropertyClass::Object, "EffectedComponentMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(UMMTFrictionSetBase, EffectedComponentMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(NewProp_EffectedComponentMesh_MetaData, ARRAY_COUNT(NewProp_EffectedComponentMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrictionSetName_MetaData[] = {
				{ "ModuleRelativePath", "Private/MMTFrictionSetBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_FrictionSetName = { UE4CodeGen_Private::EPropertyClass::Name, "FrictionSetName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMMTFrictionSetBase, FrictionSetName), METADATA_PARAMS(NewProp_FrictionSetName_MetaData, ARRAY_COUNT(NewProp_FrictionSetName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDebugMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReferenceFrameComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EffectedComponentMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrictionSetName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMMTFrictionSetBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMMTFrictionSetBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900081u,
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
	IMPLEMENT_CLASS(UMMTFrictionSetBase, 2188448746);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMMTFrictionSetBase(Z_Construct_UClass_UMMTFrictionSetBase, &UMMTFrictionSetBase::StaticClass, TEXT("/Script/MMT"), TEXT("UMMTFrictionSetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMTFrictionSetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
