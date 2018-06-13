// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/MMTPluginPCH.h"
#include "Public/MMTVehicleSuspensionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTVehicleSuspensionComponent() {}
// Cross Module References
	MMT_API UClass* Z_Construct_UClass_UMMTVehicleSuspensionComponent_NoRegister();
	MMT_API UClass* Z_Construct_UClass_UMMTVehicleSuspensionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_MMT();
	MMT_API UFunction* Z_Construct_UFunction_UMMTVehicleSuspensionComponent_GetEffectedComponentMeshReference();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	MMT_API UFunction* Z_Construct_UFunction_UMMTVehicleSuspensionComponent_UpdatePhysics();
	MMT_API UClass* Z_Construct_UClass_UMMTTrack_NoRegister();
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FPassiveSurfaceConfig();
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FWheelsConfig();
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FTracksConfig();
// End Cross Module References
	void UMMTVehicleSuspensionComponent::StaticRegisterNativesUMMTVehicleSuspensionComponent()
	{
		UClass* Class = UMMTVehicleSuspensionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEffectedComponentMeshReference", (Native)&UMMTVehicleSuspensionComponent::execGetEffectedComponentMeshReference },
			{ "UpdatePhysics", (Native)&UMMTVehicleSuspensionComponent::execUpdatePhysics },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMMTVehicleSuspensionComponent_GetEffectedComponentMeshReference()
	{
		struct MMTVehicleSuspensionComponent_eventGetEffectedComponentMeshReference_Parms
		{
			UMeshComponent* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(MMTVehicleSuspensionComponent_eventGetEffectedComponentMeshReference_Parms, ReturnValue), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT Vehicle Suspension Component" },
				{ "ModuleRelativePath", "Public/MMTVehicleSuspensionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTVehicleSuspensionComponent, "GetEffectedComponentMeshReference", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MMTVehicleSuspensionComponent_eventGetEffectedComponentMeshReference_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTVehicleSuspensionComponent_UpdatePhysics()
	{
		struct MMTVehicleSuspensionComponent_eventUpdatePhysics_Parms
		{
			float DeltaTime;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MMTVehicleSuspensionComponent_eventUpdatePhysics_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeltaTime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT Vehicle Suspension Component" },
				{ "ModuleRelativePath", "Public/MMTVehicleSuspensionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTVehicleSuspensionComponent, "UpdatePhysics", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MMTVehicleSuspensionComponent_eventUpdatePhysics_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMMTVehicleSuspensionComponent_NoRegister()
	{
		return UMMTVehicleSuspensionComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UMMTVehicleSuspensionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_MMT,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMMTVehicleSuspensionComponent_GetEffectedComponentMeshReference, "GetEffectedComponentMeshReference" }, // 520022000
				{ &Z_Construct_UFunction_UMMTVehicleSuspensionComponent_UpdatePhysics, "UpdatePhysics" }, // 2643764255
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "MMTVehicleSuspensionComponent.h" },
				{ "ModuleRelativePath", "Public/MMTVehicleSuspensionComponent.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackCollection_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MMTVehicleSuspensionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackCollection = { UE4CodeGen_Private::EPropertyClass::Array, "TrackCollection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040008000000008, 1, nullptr, STRUCT_OFFSET(UMMTVehicleSuspensionComponent, TrackCollection), METADATA_PARAMS(NewProp_TrackCollection_MetaData, ARRAY_COUNT(NewProp_TrackCollection_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrackCollection_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "TrackCollection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UMMTTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectedComponentMesh_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MMTVehicleSuspensionComponent.h" },
				{ "ToolTip", "Mesh reference that we will apply our suspension and traction forces too." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectedComponentMesh = { UE4CodeGen_Private::EPropertyClass::Object, "EffectedComponentMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UMMTVehicleSuspensionComponent, EffectedComponentMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(NewProp_EffectedComponentMesh_MetaData, ARRAY_COUNT(NewProp_EffectedComponentMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PassiveSurfacesConfiguration_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/MMTVehicleSuspensionComponent.h" },
				{ "ToolTip", "Set this up if vehicle needs surfaces such as ski" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PassiveSurfacesConfiguration = { UE4CodeGen_Private::EPropertyClass::Struct, "PassiveSurfacesConfiguration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMMTVehicleSuspensionComponent, PassiveSurfacesConfiguration), Z_Construct_UScriptStruct_FPassiveSurfaceConfig, METADATA_PARAMS(NewProp_PassiveSurfacesConfiguration_MetaData, ARRAY_COUNT(NewProp_PassiveSurfacesConfiguration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WheelsConfiguration_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/MMTVehicleSuspensionComponent.h" },
				{ "ToolTip", "Set this up if vehicle needs wheels" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WheelsConfiguration = { UE4CodeGen_Private::EPropertyClass::Struct, "WheelsConfiguration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMMTVehicleSuspensionComponent, WheelsConfiguration), Z_Construct_UScriptStruct_FWheelsConfig, METADATA_PARAMS(NewProp_WheelsConfiguration_MetaData, ARRAY_COUNT(NewProp_WheelsConfiguration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TracksConfiguration_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/MMTVehicleSuspensionComponent.h" },
				{ "ToolTip", "Set this up if vehicle needs caterpillar tracks" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TracksConfiguration = { UE4CodeGen_Private::EPropertyClass::Struct, "TracksConfiguration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMMTVehicleSuspensionComponent, TracksConfiguration), Z_Construct_UScriptStruct_FTracksConfig, METADATA_PARAMS(NewProp_TracksConfiguration_MetaData, ARRAY_COUNT(NewProp_TracksConfiguration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectedComponentName_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/MMTVehicleSuspensionComponent.h" },
				{ "ToolTip", "Name of the mesh component that will receive forces, usually chassis/root component" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_EffectedComponentName = { UE4CodeGen_Private::EPropertyClass::Str, "EffectedComponentName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMMTVehicleSuspensionComponent, EffectedComponentName), METADATA_PARAMS(NewProp_EffectedComponentName_MetaData, ARRAY_COUNT(NewProp_EffectedComponentName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugMode_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/MMTVehicleSuspensionComponent.h" },
				{ "ToolTip", "Enable on screen debug output" },
			};
#endif
			auto NewProp_bDebugMode_SetBit = [](void* Obj){ ((UMMTVehicleSuspensionComponent*)Obj)->bDebugMode = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugMode = { UE4CodeGen_Private::EPropertyClass::Bool, "bDebugMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMMTVehicleSuspensionComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDebugMode_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDebugMode_MetaData, ARRAY_COUNT(NewProp_bDebugMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisabled_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/MMTVehicleSuspensionComponent.h" },
				{ "ToolTip", "Disables component from doing physics calculations and applying forces, useful for debugging" },
			};
#endif
			auto NewProp_bDisabled_SetBit = [](void* Obj){ ((UMMTVehicleSuspensionComponent*)Obj)->bDisabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMMTVehicleSuspensionComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisabled_MetaData, ARRAY_COUNT(NewProp_bDisabled_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackCollection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackCollection_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EffectedComponentMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PassiveSurfacesConfiguration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WheelsConfiguration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TracksConfiguration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EffectedComponentName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDebugMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisabled,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMMTVehicleSuspensionComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMMTVehicleSuspensionComponent::StaticClass,
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
	IMPLEMENT_CLASS(UMMTVehicleSuspensionComponent, 2617170596);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMMTVehicleSuspensionComponent(Z_Construct_UClass_UMMTVehicleSuspensionComponent, &UMMTVehicleSuspensionComponent::StaticClass, TEXT("/Script/MMT"), TEXT("UMMTVehicleSuspensionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMTVehicleSuspensionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
