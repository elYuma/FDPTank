// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/MMTPluginPCH.h"
#include "Public/MMTFrictionSolver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTFrictionSolver() {}
// Cross Module References
	MMT_API UClass* Z_Construct_UClass_UMMTFrictionSolver_NoRegister();
	MMT_API UClass* Z_Construct_UClass_UMMTFrictionSolver();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MMT();
	MMT_API UFunction* Z_Construct_UFunction_UMMTFrictionSolver_Initialize();
	MMT_API UClass* Z_Construct_UClass_UMMTFrictionSetPassive_NoRegister();
	MMT_API UClass* Z_Construct_UClass_UMMTPhysicalSurfaceFrictionCoefficientsDataAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
// End Cross Module References
	void UMMTFrictionSolver::StaticRegisterNativesUMMTFrictionSolver()
	{
		UClass* Class = UMMTFrictionSolver::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Initialize", (Native)&UMMTFrictionSolver::execInitialize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMMTFrictionSolver_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT Friction Solver" },
				{ "ModuleRelativePath", "Public/MMTFrictionSolver.h" },
				{ "ToolTip", "Initializes class logic, finds references and pre-calculates parameters. Expected to be called from BeginPlay only" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTFrictionSolver, "Initialize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMMTFrictionSolver_NoRegister()
	{
		return UMMTFrictionSolver::StaticClass();
	}
	UClass* Z_Construct_UClass_UMMTFrictionSolver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_MMT,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMMTFrictionSolver_Initialize, "Initialize" }, // 3301442020
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "MMTFrictionSolver.h" },
				{ "ModuleRelativePath", "Public/MMTFrictionSolver.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PassiveFrictionSets_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTFrictionSolver.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PassiveFrictionSets = { UE4CodeGen_Private::EPropertyClass::Array, "PassiveFrictionSets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTFrictionSolver, PassiveFrictionSets), METADATA_PARAMS(NewProp_PassiveFrictionSets_MetaData, ARRAY_COUNT(NewProp_PassiveFrictionSets_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PassiveFrictionSets_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "PassiveFrictionSets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UMMTFrictionSetPassive_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PassivePhysicalSurfaceFrictionCoefficients_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTFrictionSolver.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PassivePhysicalSurfaceFrictionCoefficients = { UE4CodeGen_Private::EPropertyClass::Object, "PassivePhysicalSurfaceFrictionCoefficients", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTFrictionSolver, PassivePhysicalSurfaceFrictionCoefficients), Z_Construct_UClass_UMMTPhysicalSurfaceFrictionCoefficientsDataAsset_NoRegister, METADATA_PARAMS(NewProp_PassivePhysicalSurfaceFrictionCoefficients_MetaData, ARRAY_COUNT(NewProp_PassivePhysicalSurfaceFrictionCoefficients_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentsParentName_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTFrictionSolver.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ComponentsParentName = { UE4CodeGen_Private::EPropertyClass::Str, "ComponentsParentName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTFrictionSolver, ComponentsParentName), METADATA_PARAMS(NewProp_ComponentsParentName_MetaData, ARRAY_COUNT(NewProp_ComponentsParentName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTFrictionSolver.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ComponentName = { UE4CodeGen_Private::EPropertyClass::Str, "ComponentName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTFrictionSolver, ComponentName), METADATA_PARAMS(NewProp_ComponentName_MetaData, ARRAY_COUNT(NewProp_ComponentName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectedComponentMesh_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MMTFrictionSolver.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectedComponentMesh = { UE4CodeGen_Private::EPropertyClass::Object, "EffectedComponentMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UMMTFrictionSolver, EffectedComponentMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(NewProp_EffectedComponentMesh_MetaData, ARRAY_COUNT(NewProp_EffectedComponentMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentComponentRef_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MMTFrictionSolver.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentComponentRef = { UE4CodeGen_Private::EPropertyClass::Object, "ParentComponentRef", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UMMTFrictionSolver, ParentComponentRef), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(NewProp_ParentComponentRef_MetaData, ARRAY_COUNT(NewProp_ParentComponentRef_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugMode_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTFrictionSolver.h" },
			};
#endif
			auto NewProp_bDebugMode_SetBit = [](void* Obj){ ((UMMTFrictionSolver*)Obj)->bDebugMode = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugMode = { UE4CodeGen_Private::EPropertyClass::Bool, "bDebugMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMMTFrictionSolver), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDebugMode_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDebugMode_MetaData, ARRAY_COUNT(NewProp_bDebugMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisabled_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTFrictionSolver.h" },
			};
#endif
			auto NewProp_bDisabled_SetBit = [](void* Obj){ ((UMMTFrictionSolver*)Obj)->bDisabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMMTFrictionSolver), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisabled_MetaData, ARRAY_COUNT(NewProp_bDisabled_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PassiveFrictionSets,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PassiveFrictionSets_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PassivePhysicalSurfaceFrictionCoefficients,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentsParentName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EffectedComponentMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParentComponentRef,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDebugMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisabled,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMMTFrictionSolver>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMMTFrictionSolver::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(UMMTFrictionSolver, 1177199843);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMMTFrictionSolver(Z_Construct_UClass_UMMTFrictionSolver, &UMMTFrictionSolver::StaticClass, TEXT("/Script/MMT"), TEXT("UMMTFrictionSolver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMTFrictionSolver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
