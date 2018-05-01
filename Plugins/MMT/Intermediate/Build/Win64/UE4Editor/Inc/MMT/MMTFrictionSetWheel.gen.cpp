// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/MMTPluginPCH.h"
#include "Public/MMTFrictionSetWheel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTFrictionSetWheel() {}
// Cross Module References
	MMT_API UClass* Z_Construct_UClass_UMMTFrictionSetWheel_NoRegister();
	MMT_API UClass* Z_Construct_UClass_UMMTFrictionSetWheel();
	MMT_API UClass* Z_Construct_UClass_UMMTFrictionSetBase();
	UPackage* Z_Construct_UPackage__Script_MMT();
// End Cross Module References
	void UMMTFrictionSetWheel::StaticRegisterNativesUMMTFrictionSetWheel()
	{
	}
	UClass* Z_Construct_UClass_UMMTFrictionSetWheel_NoRegister()
	{
		return UMMTFrictionSetWheel::StaticClass();
	}
	UClass* Z_Construct_UClass_UMMTFrictionSetWheel()
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
				{ "IncludePath", "MMTFrictionSetWheel.h" },
				{ "ModuleRelativePath", "Public/MMTFrictionSetWheel.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyWheelProperty_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/MMTFrictionSetWheel.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MyWheelProperty = { UE4CodeGen_Private::EPropertyClass::Int, "MyWheelProperty", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMMTFrictionSetWheel, MyWheelProperty), METADATA_PARAMS(NewProp_MyWheelProperty_MetaData, ARRAY_COUNT(NewProp_MyWheelProperty_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MyWheelProperty,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMMTFrictionSetWheel>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMMTFrictionSetWheel::StaticClass,
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
	IMPLEMENT_CLASS(UMMTFrictionSetWheel, 903095769);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMMTFrictionSetWheel(Z_Construct_UClass_UMMTFrictionSetWheel, &UMMTFrictionSetWheel::StaticClass, TEXT("/Script/MMT"), TEXT("UMMTFrictionSetWheel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMTFrictionSetWheel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
