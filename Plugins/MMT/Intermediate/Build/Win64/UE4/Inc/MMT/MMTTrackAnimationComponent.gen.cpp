// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/MMTPluginPCH.h"
#include "Public/MMTTrackAnimationComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTTrackAnimationComponent() {}
// Cross Module References
	MMT_API UClass* Z_Construct_UClass_UMMTTrackAnimationComponent_NoRegister();
	MMT_API UClass* Z_Construct_UClass_UMMTTrackAnimationComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_MMT();
	MMT_API UFunction* Z_Construct_UFunction_UMMTTrackAnimationComponent_BuildTrackMeshAndSpline();
	MMT_API UFunction* Z_Construct_UFunction_UMMTTrackAnimationComponent_GetSecondaryTreadsTransformArray();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	MMT_API UFunction* Z_Construct_UFunction_UMMTTrackAnimationComponent_GetTrackAngularPosition();
	MMT_API UFunction* Z_Construct_UFunction_UMMTTrackAnimationComponent_GetTreadsTransformArray();
	MMT_API UFunction* Z_Construct_UFunction_UMMTTrackAnimationComponent_SetTrackPartsAngularVelocity();
	MMT_API UFunction* Z_Construct_UFunction_UMMTTrackAnimationComponent_UpdateTrackAnimation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct();
// End Cross Module References
	void UMMTTrackAnimationComponent::StaticRegisterNativesUMMTTrackAnimationComponent()
	{
		UClass* Class = UMMTTrackAnimationComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuildTrackMeshAndSpline", (Native)&UMMTTrackAnimationComponent::execBuildTrackMeshAndSpline },
			{ "GetSecondaryTreadsTransformArray", (Native)&UMMTTrackAnimationComponent::execGetSecondaryTreadsTransformArray },
			{ "GetTrackAngularPosition", (Native)&UMMTTrackAnimationComponent::execGetTrackAngularPosition },
			{ "GetTreadsTransformArray", (Native)&UMMTTrackAnimationComponent::execGetTreadsTransformArray },
			{ "SetTrackPartsAngularVelocity", (Native)&UMMTTrackAnimationComponent::execSetTrackPartsAngularVelocity },
			{ "UpdateTrackAnimation", (Native)&UMMTTrackAnimationComponent::execUpdateTrackAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMMTTrackAnimationComponent_BuildTrackMeshAndSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT Track Animation Component" },
				{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
				{ "ToolTip", "Call from BP constructor to set track spline component into default state and add tread instances to Treads Instanced Mesh component." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTTrackAnimationComponent, "BuildTrackMeshAndSpline", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTTrackAnimationComponent_GetSecondaryTreadsTransformArray()
	{
		struct MMTTrackAnimationComponent_eventGetSecondaryTreadsTransformArray_Parms
		{
			TArray<FTransform> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MMTTrackAnimationComponent_eventGetSecondaryTreadsTransformArray_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT Track Animation Component" },
				{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
				{ "ToolTip", "Retrieve array of local space transforms of secondary treads, to be used for custom rendering of treads or any other purpose" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTTrackAnimationComponent, "GetSecondaryTreadsTransformArray", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MMTTrackAnimationComponent_eventGetSecondaryTreadsTransformArray_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTTrackAnimationComponent_GetTrackAngularPosition()
	{
		struct MMTTrackAnimationComponent_eventGetTrackAngularPosition_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MMTTrackAnimationComponent_eventGetTrackAngularPosition_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT Track Animation Component" },
				{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
				{ "ToolTip", "Retrieve angular distance traveled by the track around sprocket in degrees. Think about it as a rope wrapped around the cylinder multiple times but we measure its length not in meters but number of times its wrapped around cylinder." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTTrackAnimationComponent, "GetTrackAngularPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MMTTrackAnimationComponent_eventGetTrackAngularPosition_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTTrackAnimationComponent_GetTreadsTransformArray()
	{
		struct MMTTrackAnimationComponent_eventGetTreadsTransformArray_Parms
		{
			TArray<FTransform> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MMTTrackAnimationComponent_eventGetTreadsTransformArray_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT Track Animation Component" },
				{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
				{ "ToolTip", "Retrieve array of local space transforms of treads, to be used for custom rendering of treads or any other purpose" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTTrackAnimationComponent, "GetTreadsTransformArray", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MMTTrackAnimationComponent_eventGetTreadsTransformArray_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTTrackAnimationComponent_SetTrackPartsAngularVelocity()
	{
		struct MMTTrackAnimationComponent_eventSetTrackPartsAngularVelocity_Parms
		{
			float AngularVelocity;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "AngularVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MMTTrackAnimationComponent_eventSetTrackPartsAngularVelocity_Parms, AngularVelocity), METADATA_PARAMS(NewProp_AngularVelocity_MetaData, ARRAY_COUNT(NewProp_AngularVelocity_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngularVelocity,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT Track Animation Component" },
				{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
				{ "ToolTip", "Sets new angular and linear velocity of the sprocket, idlers, roadwheels and treads\n@param AngularVelocity          used to rotate sprockets, idlers and roadwheel meshes." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTTrackAnimationComponent, "SetTrackPartsAngularVelocity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MMTTrackAnimationComponent_eventSetTrackPartsAngularVelocity_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTTrackAnimationComponent_UpdateTrackAnimation()
	{
		struct MMTTrackAnimationComponent_eventUpdateTrackAnimation_Parms
		{
			float DeltaTime;
			float TreadAngularPosition;
			float TrackPartsAngularPosition;
			FRotator TrackPartsRotator;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackPartsRotator = { UE4CodeGen_Private::EPropertyClass::Struct, "TrackPartsRotator", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MMTTrackAnimationComponent_eventUpdateTrackAnimation_Parms, TrackPartsRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrackPartsAngularPosition = { UE4CodeGen_Private::EPropertyClass::Float, "TrackPartsAngularPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MMTTrackAnimationComponent_eventUpdateTrackAnimation_Parms, TrackPartsAngularPosition), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TreadAngularPosition = { UE4CodeGen_Private::EPropertyClass::Float, "TreadAngularPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MMTTrackAnimationComponent_eventUpdateTrackAnimation_Parms, TreadAngularPosition), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MMTTrackAnimationComponent_eventUpdateTrackAnimation_Parms, DeltaTime), METADATA_PARAMS(NewProp_DeltaTime_MetaData, ARRAY_COUNT(NewProp_DeltaTime_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackPartsRotator,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackPartsAngularPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TreadAngularPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeltaTime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT Track Animation Component" },
				{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
				{ "ToolTip", "Updates animation of track elements. Should be called on each tick for maximum fidelity. Call less frequently for LODs.\n@param DeltaTime                                                        Delta time\n@return TreadAngularPosition                            Angular distance traveled by the track around track in degrees. Think about it as a rope wrapped around the cylinder multiple times but we measure its length not in meters but number of times we wrapped it around cylinder.\n@return TrackPartsAngularPosition                       Pitch of the sprocket and other parts such as idler or road-wheels.\n@return TrackPartsRotator                                       Rotator of the sprocket and other parts such as idler or road-wheels." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTTrackAnimationComponent, "UpdateTrackAnimation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(MMTTrackAnimationComponent_eventUpdateTrackAnimation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMMTTrackAnimationComponent_NoRegister()
	{
		return UMMTTrackAnimationComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UMMTTrackAnimationComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_MMT,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMMTTrackAnimationComponent_BuildTrackMeshAndSpline, "BuildTrackMeshAndSpline" }, // 870944862
				{ &Z_Construct_UFunction_UMMTTrackAnimationComponent_GetSecondaryTreadsTransformArray, "GetSecondaryTreadsTransformArray" }, // 4276652349
				{ &Z_Construct_UFunction_UMMTTrackAnimationComponent_GetTrackAngularPosition, "GetTrackAngularPosition" }, // 4214562507
				{ &Z_Construct_UFunction_UMMTTrackAnimationComponent_GetTreadsTransformArray, "GetTreadsTransformArray" }, // 3036786497
				{ &Z_Construct_UFunction_UMMTTrackAnimationComponent_SetTrackPartsAngularVelocity, "SetTrackPartsAngularVelocity" }, // 2163632560
				{ &Z_Construct_UFunction_UMMTTrackAnimationComponent_UpdateTrackAnimation, "UpdateTrackAnimation" }, // 3646670695
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "MMT" },
				{ "HideCategories", "Trigger PhysicsVolume" },
				{ "IncludePath", "MMTTrackAnimationComponent.h" },
				{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryTreadAllignedTransformPreviousUpdate_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SecondaryTreadAllignedTransformPreviousUpdate = { UE4CodeGen_Private::EPropertyClass::Array, "SecondaryTreadAllignedTransformPreviousUpdate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTTrackAnimationComponent, SecondaryTreadAllignedTransformPreviousUpdate), METADATA_PARAMS(NewProp_SecondaryTreadAllignedTransformPreviousUpdate_MetaData, ARRAY_COUNT(NewProp_SecondaryTreadAllignedTransformPreviousUpdate_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondaryTreadAllignedTransformPreviousUpdate_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SecondaryTreadAllignedTransformPreviousUpdate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreadAllignedTransformPreviousUpdate_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TreadAllignedTransformPreviousUpdate = { UE4CodeGen_Private::EPropertyClass::Array, "TreadAllignedTransformPreviousUpdate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTTrackAnimationComponent, TreadAllignedTransformPreviousUpdate), METADATA_PARAMS(NewProp_TreadAllignedTransformPreviousUpdate_MetaData, ARRAY_COUNT(NewProp_TreadAllignedTransformPreviousUpdate_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TreadAllignedTransformPreviousUpdate_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "TreadAllignedTransformPreviousUpdate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryTreadsTransforms_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SecondaryTreadsTransforms = { UE4CodeGen_Private::EPropertyClass::Array, "SecondaryTreadsTransforms", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTTrackAnimationComponent, SecondaryTreadsTransforms), METADATA_PARAMS(NewProp_SecondaryTreadsTransforms_MetaData, ARRAY_COUNT(NewProp_SecondaryTreadsTransforms_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondaryTreadsTransforms_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SecondaryTreadsTransforms", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreadsTransforms_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TreadsTransforms = { UE4CodeGen_Private::EPropertyClass::Array, "TreadsTransforms", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTTrackAnimationComponent, TreadsTransforms), METADATA_PARAMS(NewProp_TreadsTransforms_MetaData, ARRAY_COUNT(NewProp_TreadsTransforms_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TreadsTransforms_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "TreadsTransforms", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfFullOffsets_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumberOfFullOffsets = { UE4CodeGen_Private::EPropertyClass::Int, "NumberOfFullOffsets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTTrackAnimationComponent, NumberOfFullOffsets), METADATA_PARAMS(NewProp_NumberOfFullOffsets_MetaData, ARRAY_COUNT(NewProp_NumberOfFullOffsets_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartsOffsetCount_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PartsOffsetCount = { UE4CodeGen_Private::EPropertyClass::Int, "PartsOffsetCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTTrackAnimationComponent, PartsOffsetCount), METADATA_PARAMS(NewProp_PartsOffsetCount_MetaData, ARRAY_COUNT(NewProp_PartsOffsetCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreadOffsetCount_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TreadOffsetCount = { UE4CodeGen_Private::EPropertyClass::Int, "TreadOffsetCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTTrackAnimationComponent, TreadOffsetCount), METADATA_PARAMS(NewProp_TreadOffsetCount_MetaData, ARRAY_COUNT(NewProp_TreadOffsetCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartsRotationDegrees_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PartsRotationDegrees = { UE4CodeGen_Private::EPropertyClass::Float, "PartsRotationDegrees", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTTrackAnimationComponent, PartsRotationDegrees), METADATA_PARAMS(NewProp_PartsRotationDegrees_MetaData, ARRAY_COUNT(NewProp_PartsRotationDegrees_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreadFractionalTravel_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TreadFractionalTravel = { UE4CodeGen_Private::EPropertyClass::Float, "TreadFractionalTravel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTTrackAnimationComponent, TreadFractionalTravel), METADATA_PARAMS(NewProp_TreadFractionalTravel_MetaData, ARRAY_COUNT(NewProp_TreadFractionalTravel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackPartsAngularVelocityDegrees_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrackPartsAngularVelocityDegrees = { UE4CodeGen_Private::EPropertyClass::Float, "TrackPartsAngularVelocityDegrees", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTTrackAnimationComponent, TrackPartsAngularVelocityDegrees), METADATA_PARAMS(NewProp_TrackPartsAngularVelocityDegrees_MetaData, ARRAY_COUNT(NewProp_TrackPartsAngularVelocityDegrees_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondTreadsInstancedMeshComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondTreadsInstancedMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SecondTreadsInstancedMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UMMTTrackAnimationComponent, SecondTreadsInstancedMeshComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_SecondTreadsInstancedMeshComponent_MetaData, ARRAY_COUNT(NewProp_SecondTreadsInstancedMeshComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreadsInstancedMeshComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TreadsInstancedMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "TreadsInstancedMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UMMTTrackAnimationComponent, TreadsInstancedMeshComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_TreadsInstancedMeshComponent_MetaData, ARRAY_COUNT(NewProp_TreadsInstancedMeshComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackSplineComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrackSplineComponent = { UE4CodeGen_Private::EPropertyClass::Object, "TrackSplineComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UMMTTrackAnimationComponent, TrackSplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(NewProp_TrackSplineComponent_MetaData, ARRAY_COUNT(NewProp_TrackSplineComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprocketsIdlersRoadwheelsComponents_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SprocketsIdlersRoadwheelsComponents = { UE4CodeGen_Private::EPropertyClass::Array, "SprocketsIdlersRoadwheelsComponents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040008000000008, 1, nullptr, STRUCT_OFFSET(UMMTTrackAnimationComponent, SprocketsIdlersRoadwheelsComponents), METADATA_PARAMS(NewProp_SprocketsIdlersRoadwheelsComponents_MetaData, ARRAY_COUNT(NewProp_SprocketsIdlersRoadwheelsComponents_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SprocketsIdlersRoadwheelsComponents_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SprocketsIdlersRoadwheelsComponents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugMode_MetaData[] = {
				{ "Category", "Animation Settings" },
				{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
				{ "ToolTip", "Enable on screen debug output" },
			};
#endif
			auto NewProp_bDebugMode_SetBit = [](void* Obj){ ((UMMTTrackAnimationComponent*)Obj)->bDebugMode = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugMode = { UE4CodeGen_Private::EPropertyClass::Bool, "bDebugMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMMTTrackAnimationComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDebugMode_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDebugMode_MetaData, ARRAY_COUNT(NewProp_bDebugMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackSplinePointTangents_MetaData[] = {
				{ "Category", "Animation Settings" },
				{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
				{ "ToolTip", "(Optional) Array of default tangents for track spline control points in case you don't prepared spline in editor" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackSplinePointTangents = { UE4CodeGen_Private::EPropertyClass::Array, "TrackSplinePointTangents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMMTTrackAnimationComponent, TrackSplinePointTangents), METADATA_PARAMS(NewProp_TrackSplinePointTangents_MetaData, ARRAY_COUNT(NewProp_TrackSplinePointTangents_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackSplinePointTangents_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "TrackSplinePointTangents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackSplinePointLocations_MetaData[] = {
				{ "Category", "Animation Settings" },
				{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
				{ "ToolTip", "(Optional) Array of default location for track spline control points in case you don't prepared spline in editor" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackSplinePointLocations = { UE4CodeGen_Private::EPropertyClass::Array, "TrackSplinePointLocations", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMMTTrackAnimationComponent, TrackSplinePointLocations), METADATA_PARAMS(NewProp_TrackSplinePointLocations_MetaData, ARRAY_COUNT(NewProp_TrackSplinePointLocations_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackSplinePointLocations_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "TrackSplinePointLocations", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondTreadsInstancedMeshComponentName_MetaData[] = {
				{ "Category", "Animation Settings" },
				{ "EditCondition", "bTwoPartsTrack" },
				{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
				{ "ToolTip", "Instanced mesh component for rendering secondary tread elements. Set to 'none' if you want to render treads on your own. For example, using multiple ISMs or using completely different method. UpdateTrackAnimation function updates array of local space transforms for each tread which you can get using GetTreadsTransformArray function" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SecondTreadsInstancedMeshComponentName = { UE4CodeGen_Private::EPropertyClass::Str, "SecondTreadsInstancedMeshComponentName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMMTTrackAnimationComponent, SecondTreadsInstancedMeshComponentName), METADATA_PARAMS(NewProp_SecondTreadsInstancedMeshComponentName_MetaData, ARRAY_COUNT(NewProp_SecondTreadsInstancedMeshComponentName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondTrackPartOffset_MetaData[] = {
				{ "Category", "Animation Settings" },
				{ "EditCondition", "bTwoPartsTrack" },
				{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
				{ "ToolTip", "Offset of the second tread part from pivot point of the first" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SecondTrackPartOffset = { UE4CodeGen_Private::EPropertyClass::Float, "SecondTrackPartOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMMTTrackAnimationComponent, SecondTrackPartOffset), METADATA_PARAMS(NewProp_SecondTrackPartOffset_MetaData, ARRAY_COUNT(NewProp_SecondTrackPartOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTwoPartsTrack_MetaData[] = {
				{ "Category", "Animation Settings" },
				{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
				{ "ToolTip", "Set to true if pivot of your tread mesh is aligned with front connection pin. This approach provides more precise alignment of the treads. When false it's assumed that pivot is in middle of the tread mesh." },
			};
#endif
			auto NewProp_bTwoPartsTrack_SetBit = [](void* Obj){ ((UMMTTrackAnimationComponent*)Obj)->bTwoPartsTrack = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTwoPartsTrack = { UE4CodeGen_Private::EPropertyClass::Bool, "bTwoPartsTrack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMMTTrackAnimationComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTwoPartsTrack_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTwoPartsTrack_MetaData, ARRAY_COUNT(NewProp_bTwoPartsTrack_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAnimationLagCompensation_MetaData[] = {
				{ "Category", "Animation Settings" },
				{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
				{ "ToolTip", "Skeletal mesh rotation lags by one frame, to solve this we can update track instances movement with one frame lag. Output of the UpdateTrackAnimation function doesn't compensate for lag but GetTreadsTransformArray returns compensated position of tread instances." },
			};
#endif
			auto NewProp_bAnimationLagCompensation_SetBit = [](void* Obj){ ((UMMTTrackAnimationComponent*)Obj)->bAnimationLagCompensation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnimationLagCompensation = { UE4CodeGen_Private::EPropertyClass::Bool, "bAnimationLagCompensation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMMTTrackAnimationComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAnimationLagCompensation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAnimationLagCompensation_MetaData, ARRAY_COUNT(NewProp_bAnimationLagCompensation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngleBetweenSprocketTeeth_MetaData[] = {
				{ "Category", "Animation Settings" },
				{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
				{ "ToolTip", "Angle between sprocket's teeth. Can be calculated as 360 / total number of teeth" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngleBetweenSprocketTeeth = { UE4CodeGen_Private::EPropertyClass::Float, "AngleBetweenSprocketTeeth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMMTTrackAnimationComponent, AngleBetweenSprocketTeeth), METADATA_PARAMS(NewProp_AngleBetweenSprocketTeeth_MetaData, ARRAY_COUNT(NewProp_AngleBetweenSprocketTeeth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFlipAnimation_MetaData[] = {
				{ "Category", "Animation Settings" },
				{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
				{ "ToolTip", "Plays animation in reverse if meshes are rotated 180 degrees" },
			};
#endif
			auto NewProp_bFlipAnimation_SetBit = [](void* Obj){ ((UMMTTrackAnimationComponent*)Obj)->bFlipAnimation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlipAnimation = { UE4CodeGen_Private::EPropertyClass::Bool, "bFlipAnimation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMMTTrackAnimationComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFlipAnimation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bFlipAnimation_MetaData, ARRAY_COUNT(NewProp_bFlipAnimation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreadsOnSide_MetaData[] = {
				{ "Category", "Animation Settings" },
				{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
				{ "ToolTip", "Amount of treads on this track" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TreadsOnSide = { UE4CodeGen_Private::EPropertyClass::Int, "TreadsOnSide", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMMTTrackAnimationComponent, TreadsOnSide), METADATA_PARAMS(NewProp_TreadsOnSide_MetaData, ARRAY_COUNT(NewProp_TreadsOnSide_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimatedTrackSplinePoints_MetaData[] = {
				{ "Category", "Animation Settings" },
				{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
				{ "ToolTip", "Array of spline point indexes and references for their animation" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimatedTrackSplinePoints = { UE4CodeGen_Private::EPropertyClass::Array, "AnimatedTrackSplinePoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000005, 1, nullptr, STRUCT_OFFSET(UMMTTrackAnimationComponent, AnimatedTrackSplinePoints), METADATA_PARAMS(NewProp_AnimatedTrackSplinePoints_MetaData, ARRAY_COUNT(NewProp_AnimatedTrackSplinePoints_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimatedTrackSplinePoints_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AnimatedTrackSplinePoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreadsInstancedMeshComponentName_MetaData[] = {
				{ "Category", "Animation Settings" },
				{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
				{ "ToolTip", "Instanced mesh component for rendering treads. Set to 'none' if you want to render treads on your own. For example, using multiple ISMs or using completely different method. UpdateTrackAnimation function updates array of local space transforms for each tread which you can get using GetTreadsTransformArray function" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_TreadsInstancedMeshComponentName = { UE4CodeGen_Private::EPropertyClass::Str, "TreadsInstancedMeshComponentName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMMTTrackAnimationComponent, TreadsInstancedMeshComponentName), METADATA_PARAMS(NewProp_TreadsInstancedMeshComponentName_MetaData, ARRAY_COUNT(NewProp_TreadsInstancedMeshComponentName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackSplineComponentName_MetaData[] = {
				{ "Category", "Animation Settings" },
				{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
				{ "ToolTip", "Spline component that defines path of the track" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrackSplineComponentName = { UE4CodeGen_Private::EPropertyClass::Str, "TrackSplineComponentName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMMTTrackAnimationComponent, TrackSplineComponentName), METADATA_PARAMS(NewProp_TrackSplineComponentName_MetaData, ARRAY_COUNT(NewProp_TrackSplineComponentName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprocketsIdlersRoadwheelsNames_MetaData[] = {
				{ "Category", "Animation Settings" },
				{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
				{ "ToolTip", "Array of sprockets, idlers and roadwheels to be animated" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SprocketsIdlersRoadwheelsNames = { UE4CodeGen_Private::EPropertyClass::Array, "SprocketsIdlersRoadwheelsNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMMTTrackAnimationComponent, SprocketsIdlersRoadwheelsNames), METADATA_PARAMS(NewProp_SprocketsIdlersRoadwheelsNames_MetaData, ARRAY_COUNT(NewProp_SprocketsIdlersRoadwheelsNames_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SprocketsIdlersRoadwheelsNames_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "SprocketsIdlersRoadwheelsNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SecondaryTreadAllignedTransformPreviousUpdate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SecondaryTreadAllignedTransformPreviousUpdate_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TreadAllignedTransformPreviousUpdate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TreadAllignedTransformPreviousUpdate_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SecondaryTreadsTransforms,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SecondaryTreadsTransforms_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TreadsTransforms,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TreadsTransforms_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumberOfFullOffsets,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PartsOffsetCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TreadOffsetCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PartsRotationDegrees,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TreadFractionalTravel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackPartsAngularVelocityDegrees,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SecondTreadsInstancedMeshComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TreadsInstancedMeshComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackSplineComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SprocketsIdlersRoadwheelsComponents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SprocketsIdlersRoadwheelsComponents_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDebugMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackSplinePointTangents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackSplinePointTangents_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackSplinePointLocations,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackSplinePointLocations_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SecondTreadsInstancedMeshComponentName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SecondTrackPartOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTwoPartsTrack,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAnimationLagCompensation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngleBetweenSprocketTeeth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFlipAnimation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TreadsOnSide,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimatedTrackSplinePoints,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimatedTrackSplinePoints_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TreadsInstancedMeshComponentName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackSplineComponentName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SprocketsIdlersRoadwheelsNames,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SprocketsIdlersRoadwheelsNames_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMMTTrackAnimationComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMMTTrackAnimationComponent::StaticClass,
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
	IMPLEMENT_CLASS(UMMTTrackAnimationComponent, 1901693263);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMMTTrackAnimationComponent(Z_Construct_UClass_UMMTTrackAnimationComponent, &UMMTTrackAnimationComponent::StaticClass, TEXT("/Script/MMT"), TEXT("UMMTTrackAnimationComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMTTrackAnimationComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
