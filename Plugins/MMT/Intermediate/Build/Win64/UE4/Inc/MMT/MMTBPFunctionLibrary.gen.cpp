// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/MMTPluginPCH.h"
#include "Public/MMTBPFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTBPFunctionLibrary() {}
// Cross Module References
	MMT_API UClass* Z_Construct_UClass_UMMTBPFunctionLibrary_NoRegister();
	MMT_API UClass* Z_Construct_UClass_UMMTBPFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_MMT();
	MMT_API UFunction* Z_Construct_UFunction_UMMTBPFunctionLibrary_GetInstancedStaticMeshComponentReferenceByName();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	MMT_API UFunction* Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMeshComponentReferenceByName();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	MMT_API UFunction* Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MMT_API UFunction* Z_Construct_UFunction_UMMTBPFunctionLibrary_GetSplineComponentReferenceByName();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	MMT_API UFunction* Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceAtLocationComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	MMT_API UFunction* Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceComponent();
	MMT_API UFunction* Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddTorqueComponent();
	MMT_API UFunction* Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTGetTransformActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MMT_API UFunction* Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTGetTransformComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	MMT_API UFunction* Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetInertiaTensor();
	MMT_API UFunction* Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetTransformComponent();
	MMT_API UFunction* Z_Construct_UFunction_UMMTBPFunctionLibrary_SetLinearBreakThreshold();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister();
// End Cross Module References
	void UMMTBPFunctionLibrary::StaticRegisterNativesUMMTBPFunctionLibrary()
	{
		UClass* Class = UMMTBPFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInstancedStaticMeshComponentReferenceByName", (Native)&UMMTBPFunctionLibrary::execGetInstancedStaticMeshComponentReferenceByName },
			{ "GetMeshComponentReferenceByName", (Native)&UMMTBPFunctionLibrary::execGetMeshComponentReferenceByName },
			{ "GetMuFromFrictionElipse", (Native)&UMMTBPFunctionLibrary::execGetMuFromFrictionElipse },
			{ "GetSplineComponentReferenceByName", (Native)&UMMTBPFunctionLibrary::execGetSplineComponentReferenceByName },
			{ "MMTAddForceAtLocationComponent", (Native)&UMMTBPFunctionLibrary::execMMTAddForceAtLocationComponent },
			{ "MMTAddForceComponent", (Native)&UMMTBPFunctionLibrary::execMMTAddForceComponent },
			{ "MMTAddTorqueComponent", (Native)&UMMTBPFunctionLibrary::execMMTAddTorqueComponent },
			{ "MMTGetTransformActor", (Native)&UMMTBPFunctionLibrary::execMMTGetTransformActor },
			{ "MMTGetTransformComponent", (Native)&UMMTBPFunctionLibrary::execMMTGetTransformComponent },
			{ "MMTSetInertiaTensor", (Native)&UMMTBPFunctionLibrary::execMMTSetInertiaTensor },
			{ "MMTSetTransformComponent", (Native)&UMMTBPFunctionLibrary::execMMTSetTransformComponent },
			{ "SetLinearBreakThreshold", (Native)&UMMTBPFunctionLibrary::execSetLinearBreakThreshold },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMMTBPFunctionLibrary_GetInstancedStaticMeshComponentReferenceByName()
	{
		struct MMTBPFunctionLibrary_eventGetInstancedStaticMeshComponentReferenceByName_Parms
		{
			UActorComponent* Target;
			FString Name;
			UInstancedStaticMeshComponent* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(MMTBPFunctionLibrary_eventGetInstancedStaticMeshComponentReferenceByName_Parms, ReturnValue), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MMTBPFunctionLibrary_eventGetInstancedStaticMeshComponentReferenceByName_Parms, Name), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target = { UE4CodeGen_Private::EPropertyClass::Object, "Target", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MMTBPFunctionLibrary_eventGetInstancedStaticMeshComponentReferenceByName_Parms, Target), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(NewProp_Target_MetaData, ARRAY_COUNT(NewProp_Target_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Target,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT Utility" },
				{ "DisplayName", "MMT Get Instanced Static Mesh Component Reference by Name" },
				{ "ModuleRelativePath", "Public/MMTBPFunctionLibrary.h" },
				{ "ToolTip", "Returns reference to instanced static mesh component by the name of the component.\n@param Target           Components reference that requests reference to mesh component\n@param Name                     Name of the spline component that needs to be found" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTBPFunctionLibrary, "GetInstancedStaticMeshComponentReferenceByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(MMTBPFunctionLibrary_eventGetInstancedStaticMeshComponentReferenceByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMeshComponentReferenceByName()
	{
		struct MMTBPFunctionLibrary_eventGetMeshComponentReferenceByName_Parms
		{
			UActorComponent* Target;
			FString Name;
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
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(MMTBPFunctionLibrary_eventGetMeshComponentReferenceByName_Parms, ReturnValue), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MMTBPFunctionLibrary_eventGetMeshComponentReferenceByName_Parms, Name), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target = { UE4CodeGen_Private::EPropertyClass::Object, "Target", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MMTBPFunctionLibrary_eventGetMeshComponentReferenceByName_Parms, Target), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(NewProp_Target_MetaData, ARRAY_COUNT(NewProp_Target_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Target,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT Utility" },
				{ "DisplayName", "MMT Get Mesh Component Reference by Name" },
				{ "ModuleRelativePath", "Public/MMTBPFunctionLibrary.h" },
				{ "ToolTip", "Returns reference to mesh component by the name of the component.\n@param Target           Components reference that requests reference to mesh component\n@param Name                     Name of the mesh component that needs to be found" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTBPFunctionLibrary, "GetMeshComponentReferenceByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(MMTBPFunctionLibrary_eventGetMeshComponentReferenceByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse()
	{
		struct MMTBPFunctionLibrary_eventGetMuFromFrictionElipse_Parms
		{
			FVector VelocityDirectionNormalizedWS;
			FVector ForwardVectorWS;
			float MuXStatic;
			float MuXKinetic;
			float MuYStatic;
			float MuYKinetic;
			float MuStatic;
			float MuKinetic;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MuKinetic = { UE4CodeGen_Private::EPropertyClass::Float, "MuKinetic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MMTBPFunctionLibrary_eventGetMuFromFrictionElipse_Parms, MuKinetic), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MuStatic = { UE4CodeGen_Private::EPropertyClass::Float, "MuStatic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MMTBPFunctionLibrary_eventGetMuFromFrictionElipse_Parms, MuStatic), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuYKinetic_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MuYKinetic = { UE4CodeGen_Private::EPropertyClass::Float, "MuYKinetic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MMTBPFunctionLibrary_eventGetMuFromFrictionElipse_Parms, MuYKinetic), METADATA_PARAMS(NewProp_MuYKinetic_MetaData, ARRAY_COUNT(NewProp_MuYKinetic_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuYStatic_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MuYStatic = { UE4CodeGen_Private::EPropertyClass::Float, "MuYStatic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MMTBPFunctionLibrary_eventGetMuFromFrictionElipse_Parms, MuYStatic), METADATA_PARAMS(NewProp_MuYStatic_MetaData, ARRAY_COUNT(NewProp_MuYStatic_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuXKinetic_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MuXKinetic = { UE4CodeGen_Private::EPropertyClass::Float, "MuXKinetic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MMTBPFunctionLibrary_eventGetMuFromFrictionElipse_Parms, MuXKinetic), METADATA_PARAMS(NewProp_MuXKinetic_MetaData, ARRAY_COUNT(NewProp_MuXKinetic_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuXStatic_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MuXStatic = { UE4CodeGen_Private::EPropertyClass::Float, "MuXStatic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MMTBPFunctionLibrary_eventGetMuFromFrictionElipse_Parms, MuXStatic), METADATA_PARAMS(NewProp_MuXStatic_MetaData, ARRAY_COUNT(NewProp_MuXStatic_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardVectorWS_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForwardVectorWS = { UE4CodeGen_Private::EPropertyClass::Struct, "ForwardVectorWS", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MMTBPFunctionLibrary_eventGetMuFromFrictionElipse_Parms, ForwardVectorWS), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_ForwardVectorWS_MetaData, ARRAY_COUNT(NewProp_ForwardVectorWS_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocityDirectionNormalizedWS_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VelocityDirectionNormalizedWS = { UE4CodeGen_Private::EPropertyClass::Struct, "VelocityDirectionNormalizedWS", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MMTBPFunctionLibrary_eventGetMuFromFrictionElipse_Parms, VelocityDirectionNormalizedWS), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_VelocityDirectionNormalizedWS_MetaData, ARRAY_COUNT(NewProp_VelocityDirectionNormalizedWS_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MuKinetic,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MuStatic,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MuYKinetic,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MuYStatic,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MuXKinetic,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MuXStatic,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForwardVectorWS,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VelocityDirectionNormalizedWS,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT Utility" },
				{ "DisplayName", "MMT Get Friction Coefficients from Friction Ellipse" },
				{ "ModuleRelativePath", "Public/MMTBPFunctionLibrary.h" },
				{ "ToolTip", "Returns static and kinetic friction coefficients from friction ellipse in relation to direction of velocity vector\n@param VelocityDirectionNormalizedWS    Normalized direction vector in world space for which friction coefficient need to be calculated\n@param ForwardVectorWS                                  World space direction that defines direction of X axis of friction ellipse\n@param MuXStatic                                Static friction coefficient in X axis\n@param MuXKinetic                               Kinetic friction coefficient in X axis\n@param MuYStatic                                Static friction coefficient in Y axis\n@param MuYKinetic                               Kinetic friction coefficient in Y axis\n@return MuStatic                                Calculated static friction coefficient\n@return MuKinetic                               Calculated kinetic friction coefficient" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTBPFunctionLibrary, "GetMuFromFrictionElipse", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(MMTBPFunctionLibrary_eventGetMuFromFrictionElipse_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTBPFunctionLibrary_GetSplineComponentReferenceByName()
	{
		struct MMTBPFunctionLibrary_eventGetSplineComponentReferenceByName_Parms
		{
			UActorComponent* Target;
			FString Name;
			USplineComponent* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(MMTBPFunctionLibrary_eventGetSplineComponentReferenceByName_Parms, ReturnValue), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MMTBPFunctionLibrary_eventGetSplineComponentReferenceByName_Parms, Name), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target = { UE4CodeGen_Private::EPropertyClass::Object, "Target", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MMTBPFunctionLibrary_eventGetSplineComponentReferenceByName_Parms, Target), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(NewProp_Target_MetaData, ARRAY_COUNT(NewProp_Target_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Target,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT Utility" },
				{ "DisplayName", "MMT Get Spline Component Reference by Name" },
				{ "ModuleRelativePath", "Public/MMTBPFunctionLibrary.h" },
				{ "ToolTip", "Returns reference to spline component by the name of the component.\n@param Target           Components reference that requests reference to mesh component\n@param Name                     Name of the spline component that needs to be found" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTBPFunctionLibrary, "GetSplineComponentReferenceByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(MMTBPFunctionLibrary_eventGetSplineComponentReferenceByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceAtLocationComponent()
	{
		struct MMTBPFunctionLibrary_eventMMTAddForceAtLocationComponent_Parms
		{
			UPrimitiveComponent* Target;
			FVector Force;
			FVector Location;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MMTBPFunctionLibrary_eventMMTAddForceAtLocationComponent_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Location_MetaData, ARRAY_COUNT(NewProp_Location_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Force = { UE4CodeGen_Private::EPropertyClass::Struct, "Force", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MMTBPFunctionLibrary_eventMMTAddForceAtLocationComponent_Parms, Force), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Force_MetaData, ARRAY_COUNT(NewProp_Force_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target = { UE4CodeGen_Private::EPropertyClass::Object, "Target", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MMTBPFunctionLibrary_eventMMTAddForceAtLocationComponent_Parms, Target), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_Target_MetaData, ARRAY_COUNT(NewProp_Target_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Force,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Target,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT physics sub-stepping" },
				{ "DisplayName", "MMT Add Force At Location -Comp" },
				{ "ModuleRelativePath", "Public/MMTBPFunctionLibrary.h" },
				{ "ToolTip", "Add a force to a component at a particular location. Can apply force during physics sub-steps.\n@param Target           Component's reference to apply force to\n@param Force            Force vector to apply. Magnitude indicates strength of force.\n@param Location         Location to apply force, in world space." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTBPFunctionLibrary, "MMTAddForceAtLocationComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(MMTBPFunctionLibrary_eventMMTAddForceAtLocationComponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceComponent()
	{
		struct MMTBPFunctionLibrary_eventMMTAddForceComponent_Parms
		{
			UPrimitiveComponent* Target;
			FVector Force;
			bool bAccelChange;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bAccelChange_SetBit = [](void* Obj){ ((MMTBPFunctionLibrary_eventMMTAddForceComponent_Parms*)Obj)->bAccelChange = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAccelChange = { UE4CodeGen_Private::EPropertyClass::Bool, "bAccelChange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MMTBPFunctionLibrary_eventMMTAddForceComponent_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAccelChange_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Force = { UE4CodeGen_Private::EPropertyClass::Struct, "Force", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MMTBPFunctionLibrary_eventMMTAddForceComponent_Parms, Force), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Force_MetaData, ARRAY_COUNT(NewProp_Force_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target = { UE4CodeGen_Private::EPropertyClass::Object, "Target", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MMTBPFunctionLibrary_eventMMTAddForceComponent_Parms, Target), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_Target_MetaData, ARRAY_COUNT(NewProp_Target_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAccelChange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Force,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Target,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT physics sub-stepping" },
				{ "DisplayName", "MMT Add Force -Comp" },
				{ "ModuleRelativePath", "Public/MMTBPFunctionLibrary.h" },
				{ "ToolTip", "Add a force to a component. Can apply force during physics sub-steps.\n@param Target           Component's reference to apply force to\n@param Force            Force vector to apply. Magnitude indicates strength of force.\n@param bAccelChange If true, Force is taken as a change in acceleration instead of a physical force (i.e. mass will have no affect)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTBPFunctionLibrary, "MMTAddForceComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(MMTBPFunctionLibrary_eventMMTAddForceComponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddTorqueComponent()
	{
		struct MMTBPFunctionLibrary_eventMMTAddTorqueComponent_Parms
		{
			UPrimitiveComponent* Target;
			FVector Torque;
			bool bAccelChange;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bAccelChange_SetBit = [](void* Obj){ ((MMTBPFunctionLibrary_eventMMTAddTorqueComponent_Parms*)Obj)->bAccelChange = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAccelChange = { UE4CodeGen_Private::EPropertyClass::Bool, "bAccelChange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MMTBPFunctionLibrary_eventMMTAddTorqueComponent_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAccelChange_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Torque_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Torque = { UE4CodeGen_Private::EPropertyClass::Struct, "Torque", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MMTBPFunctionLibrary_eventMMTAddTorqueComponent_Parms, Torque), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Torque_MetaData, ARRAY_COUNT(NewProp_Torque_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target = { UE4CodeGen_Private::EPropertyClass::Object, "Target", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MMTBPFunctionLibrary_eventMMTAddTorqueComponent_Parms, Target), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_Target_MetaData, ARRAY_COUNT(NewProp_Target_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAccelChange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Torque,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Target,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT physics sub-stepping" },
				{ "DisplayName", "MMT Add Torque -Comp" },
				{ "ModuleRelativePath", "Public/MMTBPFunctionLibrary.h" },
				{ "ToolTip", "Add a torque to a component. Can apply torque during physics sub-steps.\n@param Target           Component's reference to apply torque to\n@param Torque           Force vector to apply. Magnitude indicates strength of force.\n@param bAccelChange If true, Force is taken as a change in acceleration instead of a physical force (i.e. mass will have no affect)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTBPFunctionLibrary, "MMTAddTorqueComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(MMTBPFunctionLibrary_eventMMTAddTorqueComponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTGetTransformActor()
	{
		struct MMTBPFunctionLibrary_eventMMTGetTransformActor_Parms
		{
			AActor* Actor;
			FTransform ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MMTBPFunctionLibrary_eventMMTGetTransformActor_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MMTBPFunctionLibrary_eventMMTGetTransformActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Actor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT physics sub-stepping" },
				{ "DisplayName", "MMT Get Transform -Actor" },
				{ "ModuleRelativePath", "Public/MMTBPFunctionLibrary.h" },
				{ "ToolTip", "Get world-space actor's root component transform. BodyInstance is used to retrieve transform, its up-to date with physics sub-stepping.\n@param Actor    Actor's reference to get the transform for\n@return                 Actor's root component transform in world space" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTBPFunctionLibrary, "MMTGetTransformActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(MMTBPFunctionLibrary_eventMMTGetTransformActor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTGetTransformComponent()
	{
		struct MMTBPFunctionLibrary_eventMMTGetTransformComponent_Parms
		{
			USceneComponent* Target;
			FName InSocketName;
			FTransform ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MMTBPFunctionLibrary_eventMMTGetTransformComponent_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_InSocketName = { UE4CodeGen_Private::EPropertyClass::Name, "InSocketName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MMTBPFunctionLibrary_eventMMTGetTransformComponent_Parms, InSocketName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target = { UE4CodeGen_Private::EPropertyClass::Object, "Target", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MMTBPFunctionLibrary_eventMMTGetTransformComponent_Parms, Target), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_Target_MetaData, ARRAY_COUNT(NewProp_Target_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InSocketName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Target,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT physics sub-stepping" },
				{ "DisplayName", "MMT Get Transform -Comp" },
				{ "ModuleRelativePath", "Public/MMTBPFunctionLibrary.h" },
				{ "ToolTip", "Get world-space component's transform. BodyInstance is used to retrieve transform, its up-to date with physics sub-stepping.\n@param Target   Component's reference to get the transform for\n@param InSocketName     Optional socket name parameter. Will return socket transform, if socket not found returns component's transform\n@return                 Component's or socket's transform in world space" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTBPFunctionLibrary, "MMTGetTransformComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(MMTBPFunctionLibrary_eventMMTGetTransformComponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetInertiaTensor()
	{
		struct MMTBPFunctionLibrary_eventMMTSetInertiaTensor_Parms
		{
			UPrimitiveComponent* Target;
			FVector InertiaTensor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InertiaTensor_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InertiaTensor = { UE4CodeGen_Private::EPropertyClass::Struct, "InertiaTensor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MMTBPFunctionLibrary_eventMMTSetInertiaTensor_Parms, InertiaTensor), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_InertiaTensor_MetaData, ARRAY_COUNT(NewProp_InertiaTensor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target = { UE4CodeGen_Private::EPropertyClass::Object, "Target", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MMTBPFunctionLibrary_eventMMTSetInertiaTensor_Parms, Target), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_Target_MetaData, ARRAY_COUNT(NewProp_Target_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InertiaTensor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Target,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT physics sub-stepping" },
				{ "DisplayName", "MMT Set Inertia Tensor -Comp" },
				{ "ModuleRelativePath", "Public/MMTBPFunctionLibrary.h" },
				{ "ToolTip", "Sets inertia tensor on component.\n@param Target           Component's reference to set inertia tensor\n@param TensorVector     Inertia tensor vector" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTBPFunctionLibrary, "MMTSetInertiaTensor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(MMTBPFunctionLibrary_eventMMTSetInertiaTensor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetTransformComponent()
	{
		struct MMTBPFunctionLibrary_eventMMTSetTransformComponent_Parms
		{
			USceneComponent* Target;
			FTransform Transform;
			bool bTeleport;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bTeleport_SetBit = [](void* Obj){ ((MMTBPFunctionLibrary_eventMMTSetTransformComponent_Parms*)Obj)->bTeleport = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleport = { UE4CodeGen_Private::EPropertyClass::Bool, "bTeleport", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MMTBPFunctionLibrary_eventMMTSetTransformComponent_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTeleport_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform = { UE4CodeGen_Private::EPropertyClass::Struct, "Transform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MMTBPFunctionLibrary_eventMMTSetTransformComponent_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_Transform_MetaData, ARRAY_COUNT(NewProp_Transform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target = { UE4CodeGen_Private::EPropertyClass::Object, "Target", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MMTBPFunctionLibrary_eventMMTSetTransformComponent_Parms, Target), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_Target_MetaData, ARRAY_COUNT(NewProp_Target_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTeleport,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Transform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Target,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT physics sub-stepping" },
				{ "DisplayName", "MMT Set Transform -Comp" },
				{ "ModuleRelativePath", "Public/MMTBPFunctionLibrary.h" },
				{ "ToolTip", "Sets component's BodyInstance transform. To be used during sub-stepping to move/rotate PhysX bodies directly.\n@param Target   Component's reference to set transform for\n@param bTeleport                No velocity will be inferred, object is moved in instant\n@param Transform        New transform to be set" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTBPFunctionLibrary, "MMTSetTransformComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(MMTBPFunctionLibrary_eventMMTSetTransformComponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTBPFunctionLibrary_SetLinearBreakThreshold()
	{
		struct MMTBPFunctionLibrary_eventSetLinearBreakThreshold_Parms
		{
			UPhysicsConstraintComponent* Target;
			float LinearBreakThreshold;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearBreakThreshold_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearBreakThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "LinearBreakThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MMTBPFunctionLibrary_eventSetLinearBreakThreshold_Parms, LinearBreakThreshold), METADATA_PARAMS(NewProp_LinearBreakThreshold_MetaData, ARRAY_COUNT(NewProp_LinearBreakThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target = { UE4CodeGen_Private::EPropertyClass::Object, "Target", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MMTBPFunctionLibrary_eventSetLinearBreakThreshold_Parms, Target), Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister, METADATA_PARAMS(NewProp_Target_MetaData, ARRAY_COUNT(NewProp_Target_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearBreakThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Target,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT Utility" },
				{ "DisplayName", "MMT Set physics constraint linear break threshold" },
				{ "ModuleRelativePath", "Public/MMTBPFunctionLibrary.h" },
				{ "ToolTip", "Sets linear break threshold on physics constraint component as such functionality is not exposed to BP.\n@param Target                                   Physics constraint to set break threshold on\n@param LinearBreakThreshold             Float magnitude of force that is enough to break constraint" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTBPFunctionLibrary, "SetLinearBreakThreshold", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(MMTBPFunctionLibrary_eventSetLinearBreakThreshold_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMMTBPFunctionLibrary_NoRegister()
	{
		return UMMTBPFunctionLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UMMTBPFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_MMT,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMMTBPFunctionLibrary_GetInstancedStaticMeshComponentReferenceByName, "GetInstancedStaticMeshComponentReferenceByName" }, // 2297536151
				{ &Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMeshComponentReferenceByName, "GetMeshComponentReferenceByName" }, // 4176815824
				{ &Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse, "GetMuFromFrictionElipse" }, // 2823548469
				{ &Z_Construct_UFunction_UMMTBPFunctionLibrary_GetSplineComponentReferenceByName, "GetSplineComponentReferenceByName" }, // 2104798935
				{ &Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceAtLocationComponent, "MMTAddForceAtLocationComponent" }, // 2522904752
				{ &Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceComponent, "MMTAddForceComponent" }, // 1117498200
				{ &Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddTorqueComponent, "MMTAddTorqueComponent" }, // 3537772313
				{ &Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTGetTransformActor, "MMTGetTransformActor" }, // 10977170
				{ &Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTGetTransformComponent, "MMTGetTransformComponent" }, // 3472561018
				{ &Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetInertiaTensor, "MMTSetInertiaTensor" }, // 1367361337
				{ &Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetTransformComponent, "MMTSetTransformComponent" }, // 3483396730
				{ &Z_Construct_UFunction_UMMTBPFunctionLibrary_SetLinearBreakThreshold, "SetLinearBreakThreshold" }, // 1959064953
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "MMTBPFunctionLibrary.h" },
				{ "ModuleRelativePath", "Public/MMTBPFunctionLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMMTBPFunctionLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMMTBPFunctionLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMMTBPFunctionLibrary, 3898319512);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMMTBPFunctionLibrary(Z_Construct_UClass_UMMTBPFunctionLibrary, &UMMTBPFunctionLibrary::StaticClass, TEXT("/Script/MMT"), TEXT("UMMTBPFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMTBPFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
