// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/MMTPluginPCH.h"
#include "Public/MMTFrictionSetTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTFrictionSetTrack() {}
// Cross Module References
	MMT_API UClass* Z_Construct_UClass_UMMTFrictionSetTrack_NoRegister();
	MMT_API UClass* Z_Construct_UClass_UMMTFrictionSetTrack();
	MMT_API UClass* Z_Construct_UClass_UMMTFrictionSetBase();
	UPackage* Z_Construct_UPackage__Script_MMT();
// End Cross Module References
	void UMMTFrictionSetTrack::StaticRegisterNativesUMMTFrictionSetTrack()
	{
	}
	UClass* Z_Construct_UClass_UMMTFrictionSetTrack_NoRegister()
	{
		return UMMTFrictionSetTrack::StaticClass();
	}
	UClass* Z_Construct_UClass_UMMTFrictionSetTrack()
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
				{ "IncludePath", "MMTFrictionSetTrack.h" },
				{ "ModuleRelativePath", "Public/MMTFrictionSetTrack.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyTrackProperty_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/MMTFrictionSetTrack.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MyTrackProperty = { UE4CodeGen_Private::EPropertyClass::Int, "MyTrackProperty", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMMTFrictionSetTrack, MyTrackProperty), METADATA_PARAMS(NewProp_MyTrackProperty_MetaData, ARRAY_COUNT(NewProp_MyTrackProperty_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MyTrackProperty,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMMTFrictionSetTrack>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMMTFrictionSetTrack::StaticClass,
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
	IMPLEMENT_CLASS(UMMTFrictionSetTrack, 3990708731);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMMTFrictionSetTrack(Z_Construct_UClass_UMMTFrictionSetTrack, &UMMTFrictionSetTrack::StaticClass, TEXT("/Script/MMT"), TEXT("UMMTFrictionSetTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMTFrictionSetTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
