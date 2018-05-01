// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/MMTPluginPCH.h"
#include "Public/MMTSuspensionStackComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTSuspensionStackComponent() {}
// Cross Module References
	MMT_API UClass* Z_Construct_UClass_UMMTSuspensionStackComponent_NoRegister();
	MMT_API UClass* Z_Construct_UClass_UMMTSuspensionStackComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_MMT();
	MMT_API UClass* Z_Construct_UClass_UMMTSuspensionStack_NoRegister();
// End Cross Module References
	void UMMTSuspensionStackComponent::StaticRegisterNativesUMMTSuspensionStackComponent()
	{
	}
	UClass* Z_Construct_UClass_UMMTSuspensionStackComponent_NoRegister()
	{
		return UMMTSuspensionStackComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UMMTSuspensionStackComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_MMT,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "HideCategories", "Trigger PhysicsVolume" },
				{ "IncludePath", "MMTSuspensionStackComponent.h" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStackComponent.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuspensionStack_MetaData[] = {
				{ "Category", "MMTSuspensionStackComponent" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStackComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SuspensionStack = { UE4CodeGen_Private::EPropertyClass::Object, "SuspensionStack", RF_Public|RF_Transient|RF_MarkAsNative, 0x00120000000a000d, 1, nullptr, STRUCT_OFFSET(UMMTSuspensionStackComponent, SuspensionStack), Z_Construct_UClass_UMMTSuspensionStack_NoRegister, METADATA_PARAMS(NewProp_SuspensionStack_MetaData, ARRAY_COUNT(NewProp_SuspensionStack_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SuspensionStack,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMMTSuspensionStackComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMMTSuspensionStackComponent::StaticClass,
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
	IMPLEMENT_CLASS(UMMTSuspensionStackComponent, 35454835);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMMTSuspensionStackComponent(Z_Construct_UClass_UMMTSuspensionStackComponent, &UMMTSuspensionStackComponent::StaticClass, TEXT("/Script/MMT"), TEXT("UMMTSuspensionStackComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMTSuspensionStackComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
