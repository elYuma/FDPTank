// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/MMTPluginPCH.h"
#include "Public/MMTFrictionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTFrictionComponent() {}
// Cross Module References
	MMT_API UClass* Z_Construct_UClass_UMMTFrictionComponent_NoRegister();
	MMT_API UClass* Z_Construct_UClass_UMMTFrictionComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_MMT();
	MMT_API UFunction* Z_Construct_UFunction_UMMTFrictionComponent_GetFrictionForce();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MMT_API UFunction* Z_Construct_UFunction_UMMTFrictionComponent_GetFrictionLimit();
	MMT_API UFunction* Z_Construct_UFunction_UMMTFrictionComponent_IsFrictionPointActive();
	MMT_API UFunction* Z_Construct_UFunction_UMMTFrictionComponent_PhysicsUpdate();
	MMT_API UFunction* Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	MMT_API UFunction* Z_Construct_UFunction_UMMTFrictionComponent_ResetFrictionPoints();
	MMT_API UFunction* Z_Construct_UFunction_UMMTFrictionComponent_SetFrictionSurfaceSpeed();
	MMT_API UFunction* Z_Construct_UFunction_UMMTFrictionComponent_SetFrictionSurfaceVelocity();
	MMT_API UFunction* Z_Construct_UFunction_UMMTFrictionComponent_ToggleDebugMode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FContactPointDataStruct();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct();
// End Cross Module References
	void UMMTFrictionComponent::StaticRegisterNativesUMMTFrictionComponent()
	{
		UClass* Class = UMMTFrictionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFrictionForce", (Native)&UMMTFrictionComponent::execGetFrictionForce },
			{ "GetFrictionLimit", (Native)&UMMTFrictionComponent::execGetFrictionLimit },
			{ "IsFrictionPointActive", (Native)&UMMTFrictionComponent::execIsFrictionPointActive },
			{ "PhysicsUpdate", (Native)&UMMTFrictionComponent::execPhysicsUpdate },
			{ "RegisterFrictionPoint", (Native)&UMMTFrictionComponent::execRegisterFrictionPoint },
			{ "ResetFrictionPoints", (Native)&UMMTFrictionComponent::execResetFrictionPoints },
			{ "SetFrictionSurfaceSpeed", (Native)&UMMTFrictionComponent::execSetFrictionSurfaceSpeed },
			{ "SetFrictionSurfaceVelocity", (Native)&UMMTFrictionComponent::execSetFrictionSurfaceVelocity },
			{ "ToggleDebugMode", (Native)&UMMTFrictionComponent::execToggleDebugMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMMTFrictionComponent_GetFrictionForce()
	{
		struct MMTFrictionComponent_eventGetFrictionForce_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MMTFrictionComponent_eventGetFrictionForce_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT Friction Component" },
				{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
				{ "ToolTip", "Returns last calculated friction force vector in world space\n@return         Friction force vector in world space from last update" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTFrictionComponent, "GetFrictionForce", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(MMTFrictionComponent_eventGetFrictionForce_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTFrictionComponent_GetFrictionLimit()
	{
		struct MMTFrictionComponent_eventGetFrictionLimit_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MMTFrictionComponent_eventGetFrictionLimit_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT Friction Component" },
				{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
				{ "ToolTip", "Returns last calculated friction limit magnitude (N * mu)\n@return         Last known friction limit (N * mu)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTFrictionComponent, "GetFrictionLimit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MMTFrictionComponent_eventGetFrictionLimit_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTFrictionComponent_IsFrictionPointActive()
	{
		struct MMTFrictionComponent_eventIsFrictionPointActive_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((MMTFrictionComponent_eventIsFrictionPointActive_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MMTFrictionComponent_eventIsFrictionPointActive_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT Friction Component" },
				{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
				{ "ToolTip", "Checks if registered friction point is active\n@return         Returns true if the next contact point in line will be processed in friction calculation." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTFrictionComponent, "IsFrictionPointActive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MMTFrictionComponent_eventIsFrictionPointActive_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTFrictionComponent_PhysicsUpdate()
	{
		struct MMTFrictionComponent_eventPhysicsUpdate_Parms
		{
			float NumberOfContactPoints;
			float DeltaTime;
			FVector NormalizedReactionForce;
			float RollingFrictionForce;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((MMTFrictionComponent_eventPhysicsUpdate_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MMTFrictionComponent_eventPhysicsUpdate_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RollingFrictionForce = { UE4CodeGen_Private::EPropertyClass::Float, "RollingFrictionForce", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MMTFrictionComponent_eventPhysicsUpdate_Parms, RollingFrictionForce), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalizedReactionForce = { UE4CodeGen_Private::EPropertyClass::Struct, "NormalizedReactionForce", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MMTFrictionComponent_eventPhysicsUpdate_Parms, NormalizedReactionForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MMTFrictionComponent_eventPhysicsUpdate_Parms, DeltaTime), METADATA_PARAMS(NewProp_DeltaTime_MetaData, ARRAY_COUNT(NewProp_DeltaTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfContactPoints_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NumberOfContactPoints = { UE4CodeGen_Private::EPropertyClass::Float, "NumberOfContactPoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MMTFrictionComponent_eventPhysicsUpdate_Parms, NumberOfContactPoints), METADATA_PARAMS(NewProp_NumberOfContactPoints_MetaData, ARRAY_COUNT(NewProp_NumberOfContactPoints_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RollingFrictionForce,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NormalizedReactionForce,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeltaTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumberOfContactPoints,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT Friction Component" },
				{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
				{ "ToolTip", "Runs calculations on friction component, applies friction force to effected component and returns reaction forces (forces that can effect track or a wheel)\n@param NumberOfContactPoints            Total number of friction points active on this update cycle\n@param DeltaTime                                        Delta time\n@return                                                         Returns true if point was active and state of static friction was achieved, including absence of induced of friction surface velocity\n@return NormalizedReactionForce         Reaction force to friction force. When friction force between track and ground pushes vehicle forward, reaction force pushes track in opposite direction\n@return RollingFrictionForce            Rolling friction force is a force opposing rolling of the track or the wheel, it depends on ground pressure and ground surface properties" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTFrictionComponent, "PhysicsUpdate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(MMTFrictionComponent_eventPhysicsUpdate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint()
	{
		struct MMTFrictionComponent_eventRegisterFrictionPoint_Parms
		{
			FVector ImpactForceOrImpulseAtPoint;
			bool TreatAsImpulse;
			FVector ContactPointLocation;
			FVector ContactPointNormal;
			UPhysicalMaterial* PhysicalMaterial;
			FVector InducedVelocity;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InducedVelocity_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InducedVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "InducedVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MMTFrictionComponent_eventRegisterFrictionPoint_Parms, InducedVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_InducedVelocity_MetaData, ARRAY_COUNT(NewProp_InducedVelocity_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicalMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "PhysicalMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MMTFrictionComponent_eventRegisterFrictionPoint_Parms, PhysicalMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContactPointNormal_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContactPointNormal = { UE4CodeGen_Private::EPropertyClass::Struct, "ContactPointNormal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MMTFrictionComponent_eventRegisterFrictionPoint_Parms, ContactPointNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_ContactPointNormal_MetaData, ARRAY_COUNT(NewProp_ContactPointNormal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContactPointLocation_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContactPointLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "ContactPointLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MMTFrictionComponent_eventRegisterFrictionPoint_Parms, ContactPointLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_ContactPointLocation_MetaData, ARRAY_COUNT(NewProp_ContactPointLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreatAsImpulse_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			auto NewProp_TreatAsImpulse_SetBit = [](void* Obj){ ((MMTFrictionComponent_eventRegisterFrictionPoint_Parms*)Obj)->TreatAsImpulse = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TreatAsImpulse = { UE4CodeGen_Private::EPropertyClass::Bool, "TreatAsImpulse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MMTFrictionComponent_eventRegisterFrictionPoint_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_TreatAsImpulse_SetBit)>::SetBit, METADATA_PARAMS(NewProp_TreatAsImpulse_MetaData, ARRAY_COUNT(NewProp_TreatAsImpulse_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactForceOrImpulseAtPoint_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactForceOrImpulseAtPoint = { UE4CodeGen_Private::EPropertyClass::Struct, "ImpactForceOrImpulseAtPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MMTFrictionComponent_eventRegisterFrictionPoint_Parms, ImpactForceOrImpulseAtPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_ImpactForceOrImpulseAtPoint_MetaData, ARRAY_COUNT(NewProp_ImpactForceOrImpulseAtPoint_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InducedVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhysicalMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ContactPointNormal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ContactPointLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TreatAsImpulse,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImpactForceOrImpulseAtPoint,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT Friction Component" },
				{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
				{ "ToolTip", "Register collision event of the component related to Friction Component\n@param NormalImpulseAtPoint             Normal impulse is amount of \"force\" that was exerted on object as the result of collision.  Normal impulse is a typical output of OnComponentHit event.\n@param ContactPointLocation             World Space Location of the contact point.\n@param ContactPointNormal               Normal vector of the contact point.\n@param PhysicalMaterial         PhysicalMaterial of the object with which contact occurred.\n@param InducedVelocity          Optional. Induced velocity is the velocity of the surface or an object where contact occurred. For example, for tank being transported on the train cart, induced velocity would be velocity of the cart." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTFrictionComponent, "RegisterFrictionPoint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(MMTFrictionComponent_eventRegisterFrictionPoint_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTFrictionComponent_ResetFrictionPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT Friction Component" },
				{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
				{ "ToolTip", "Empties array of stored friction points, this needs to be done after physics sub-stepping or before new collision information come in" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTFrictionComponent, "ResetFrictionPoints", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTFrictionComponent_SetFrictionSurfaceSpeed()
	{
		struct MMTFrictionComponent_eventSetFrictionSurfaceSpeed_Parms
		{
			float FrictionSurfaceSpeed;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrictionSurfaceSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "FrictionSurfaceSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MMTFrictionComponent_eventSetFrictionSurfaceSpeed_Parms, FrictionSurfaceSpeed), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrictionSurfaceSpeed,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT Friction Component" },
				{ "CPP_Default_FrictionSurfaceSpeed", "0.000000" },
				{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
				{ "ToolTip", "Sets speed of the friction surface. In case of the tank it would be linear velocity of the track.\n@param FrictionSurfacespeed             Linear speed of the friction surface" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTFrictionComponent, "SetFrictionSurfaceSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MMTFrictionComponent_eventSetFrictionSurfaceSpeed_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTFrictionComponent_SetFrictionSurfaceVelocity()
	{
		struct MMTFrictionComponent_eventSetFrictionSurfaceVelocity_Parms
		{
			FVector FrictionSurfaceVel;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrictionSurfaceVel = { UE4CodeGen_Private::EPropertyClass::Struct, "FrictionSurfaceVel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MMTFrictionComponent_eventSetFrictionSurfaceVelocity_Parms, FrictionSurfaceVel), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrictionSurfaceVel,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT Friction Component" },
				{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
				{ "ToolTip", "Sets velocity of the friction surface. In case of the tank it would be linear velocity of the track.\n@param FrictionSurfaceVel       Linear velocity of the friction surface" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTFrictionComponent, "SetFrictionSurfaceVelocity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(MMTFrictionComponent_eventSetFrictionSurfaceVelocity_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTFrictionComponent_ToggleDebugMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT Friction Component" },
				{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
				{ "ToolTip", "Switches debug mode on/off with every call" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTFrictionComponent, "ToggleDebugMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMMTFrictionComponent_NoRegister()
	{
		return UMMTFrictionComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UMMTFrictionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_MMT,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMMTFrictionComponent_GetFrictionForce, "GetFrictionForce" }, // 2910889096
				{ &Z_Construct_UFunction_UMMTFrictionComponent_GetFrictionLimit, "GetFrictionLimit" }, // 3144556745
				{ &Z_Construct_UFunction_UMMTFrictionComponent_IsFrictionPointActive, "IsFrictionPointActive" }, // 2681823125
				{ &Z_Construct_UFunction_UMMTFrictionComponent_PhysicsUpdate, "PhysicsUpdate" }, // 685914513
				{ &Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint, "RegisterFrictionPoint" }, // 992014432
				{ &Z_Construct_UFunction_UMMTFrictionComponent_ResetFrictionPoints, "ResetFrictionPoints" }, // 3902415361
				{ &Z_Construct_UFunction_UMMTFrictionComponent_SetFrictionSurfaceSpeed, "SetFrictionSurfaceSpeed" }, // 1281441638
				{ &Z_Construct_UFunction_UMMTFrictionComponent_SetFrictionSurfaceVelocity, "SetFrictionSurfaceVelocity" }, // 2989335464
				{ &Z_Construct_UFunction_UMMTFrictionComponent_ToggleDebugMode, "ToggleDebugMode" }, // 1553467525
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "MMT" },
				{ "HideCategories", "Trigger PhysicsVolume" },
				{ "IncludePath", "MMTFrictionComponent.h" },
				{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrevLinearVelocity_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrevLinearVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "PrevLinearVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTFrictionComponent, PrevLinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_PrevLinearVelocity_MetaData, ARRAY_COUNT(NewProp_PrevLinearVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrevAngularVelocity_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrevAngularVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "PrevAngularVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTFrictionComponent, PrevAngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_PrevAngularVelocity_MetaData, ARRAY_COUNT(NewProp_PrevAngularVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastFrictionLimit_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastFrictionLimit = { UE4CodeGen_Private::EPropertyClass::Float, "LastFrictionLimit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTFrictionComponent, LastFrictionLimit), METADATA_PARAMS(NewProp_LastFrictionLimit_MetaData, ARRAY_COUNT(NewProp_LastFrictionLimit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastFrictionForce_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastFrictionForce = { UE4CodeGen_Private::EPropertyClass::Struct, "LastFrictionForce", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTFrictionComponent, LastFrictionForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_LastFrictionForce_MetaData, ARRAY_COUNT(NewProp_LastFrictionForce_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrevRelativeVelocityAtPoint_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrevRelativeVelocityAtPoint = { UE4CodeGen_Private::EPropertyClass::Struct, "PrevRelativeVelocityAtPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTFrictionComponent, PrevRelativeVelocityAtPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_PrevRelativeVelocityAtPoint_MetaData, ARRAY_COUNT(NewProp_PrevRelativeVelocityAtPoint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferenceFrameTransform_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReferenceFrameTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "ReferenceFrameTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTFrictionComponent, ReferenceFrameTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_ReferenceFrameTransform_MetaData, ARRAY_COUNT(NewProp_ReferenceFrameTransform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContactPointsData_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
				{ "ToolTip", "Linear Track Speed in case of a tank" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ContactPointsData = { UE4CodeGen_Private::EPropertyClass::Array, "ContactPointsData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTFrictionComponent, ContactPointsData), METADATA_PARAMS(NewProp_ContactPointsData_MetaData, ARRAY_COUNT(NewProp_ContactPointsData_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContactPointsData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ContactPointsData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FContactPointDataStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrictionSurfaceSpd_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
				{ "ToolTip", "Linear Track Velocity in case of a tank" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrictionSurfaceSpd = { UE4CodeGen_Private::EPropertyClass::Float, "FrictionSurfaceSpd", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTFrictionComponent, FrictionSurfaceSpd), METADATA_PARAMS(NewProp_FrictionSurfaceSpd_MetaData, ARRAY_COUNT(NewProp_FrictionSurfaceSpd_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrictionSurfaceVelocity_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrictionSurfaceVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "FrictionSurfaceVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTFrictionComponent, FrictionSurfaceVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_FrictionSurfaceVelocity_MetaData, ARRAY_COUNT(NewProp_FrictionSurfaceVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectedComponentMesh_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectedComponentMesh = { UE4CodeGen_Private::EPropertyClass::Object, "EffectedComponentMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UMMTFrictionComponent, EffectedComponentMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(NewProp_EffectedComponentMesh_MetaData, ARRAY_COUNT(NewProp_EffectedComponentMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAlternateFriction_MetaData[] = {
				{ "Category", "Friction Settings" },
				{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
				{ "ToolTip", "Experimental calculation of friction force" },
			};
#endif
			auto NewProp_IsAlternateFriction_SetBit = [](void* Obj){ ((UMMTFrictionComponent*)Obj)->IsAlternateFriction = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAlternateFriction = { UE4CodeGen_Private::EPropertyClass::Bool, "IsAlternateFriction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMMTFrictionComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsAlternateFriction_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsAlternateFriction_MetaData, ARRAY_COUNT(NewProp_IsAlternateFriction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsSurfaceResponse_MetaData[] = {
				{ "Category", "Friction Settings" },
				{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
				{ "ToolTip", "Array of physical surfaces and desired rolling friction coefficients for them" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PhysicsSurfaceResponse = { UE4CodeGen_Private::EPropertyClass::Array, "PhysicsSurfaceResponse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMMTFrictionComponent, PhysicsSurfaceResponse), METADATA_PARAMS(NewProp_PhysicsSurfaceResponse_MetaData, ARRAY_COUNT(NewProp_PhysicsSurfaceResponse_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PhysicsSurfaceResponse_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PhysicsSurfaceResponse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuYKinetic_MetaData[] = {
				{ "Category", "Friction Settings" },
				{ "EditCondition", "bUseAnisotropicFriction" },
				{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
				{ "ToolTip", "Kinetic friction coefficient in Y axis" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MuYKinetic = { UE4CodeGen_Private::EPropertyClass::Float, "MuYKinetic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMMTFrictionComponent, MuYKinetic), METADATA_PARAMS(NewProp_MuYKinetic_MetaData, ARRAY_COUNT(NewProp_MuYKinetic_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuYStatic_MetaData[] = {
				{ "Category", "Friction Settings" },
				{ "EditCondition", "bUseAnisotropicFriction" },
				{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
				{ "ToolTip", "Static friction coefficient in Y axis" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MuYStatic = { UE4CodeGen_Private::EPropertyClass::Float, "MuYStatic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMMTFrictionComponent, MuYStatic), METADATA_PARAMS(NewProp_MuYStatic_MetaData, ARRAY_COUNT(NewProp_MuYStatic_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAnisotropicFriction_MetaData[] = {
				{ "Category", "Friction Settings" },
				{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
				{ "ToolTip", "Set TRUE to specify different friction coefficient in Y axis, otherwise MuX is used as uniform coefficient. Useful for objects such as ice skates, brushed contact surface and some types of tank tracks." },
			};
#endif
			auto NewProp_bUseAnisotropicFriction_SetBit = [](void* Obj){ ((UMMTFrictionComponent*)Obj)->bUseAnisotropicFriction = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAnisotropicFriction = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseAnisotropicFriction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMMTFrictionComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseAnisotropicFriction_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseAnisotropicFriction_MetaData, ARRAY_COUNT(NewProp_bUseAnisotropicFriction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuXKinetic_MetaData[] = {
				{ "Category", "Friction Settings" },
				{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
				{ "ToolTip", "Kinetic friction coefficient in X axis" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MuXKinetic = { UE4CodeGen_Private::EPropertyClass::Float, "MuXKinetic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMMTFrictionComponent, MuXKinetic), METADATA_PARAMS(NewProp_MuXKinetic_MetaData, ARRAY_COUNT(NewProp_MuXKinetic_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuXStatic_MetaData[] = {
				{ "Category", "Friction Settings" },
				{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
				{ "ToolTip", "Static friction coefficient in X axis" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MuXStatic = { UE4CodeGen_Private::EPropertyClass::Float, "MuXStatic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMMTFrictionComponent, MuXStatic), METADATA_PARAMS(NewProp_MuXStatic_MetaData, ARRAY_COUNT(NewProp_MuXStatic_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDebugMode_MetaData[] = {
				{ "Category", "Friction Settings" },
				{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
				{ "ToolTip", "Enable on screen debug output" },
			};
#endif
			auto NewProp_IsDebugMode_SetBit = [](void* Obj){ ((UMMTFrictionComponent*)Obj)->IsDebugMode = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDebugMode = { UE4CodeGen_Private::EPropertyClass::Bool, "IsDebugMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMMTFrictionComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsDebugMode_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsDebugMode_MetaData, ARRAY_COUNT(NewProp_IsDebugMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectedComponentName_MetaData[] = {
				{ "Category", "Friction Settings" },
				{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
				{ "ToolTip", "Component to which friction force will be applied, it has to simulate physics" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_EffectedComponentName = { UE4CodeGen_Private::EPropertyClass::Str, "EffectedComponentName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMMTFrictionComponent, EffectedComponentName), METADATA_PARAMS(NewProp_EffectedComponentName_MetaData, ARRAY_COUNT(NewProp_EffectedComponentName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisabled_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
				{ "ToolTip", "Disables component from doing physics calculations and applying forces, useful for debugging." },
			};
#endif
			auto NewProp_bDisabled_SetBit = [](void* Obj){ ((UMMTFrictionComponent*)Obj)->bDisabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMMTFrictionComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisabled_MetaData, ARRAY_COUNT(NewProp_bDisabled_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrevLinearVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrevAngularVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastFrictionLimit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastFrictionForce,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrevRelativeVelocityAtPoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReferenceFrameTransform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ContactPointsData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ContactPointsData_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrictionSurfaceSpd,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrictionSurfaceVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EffectedComponentMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsAlternateFriction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhysicsSurfaceResponse,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhysicsSurfaceResponse_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MuYKinetic,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MuYStatic,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseAnisotropicFriction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MuXKinetic,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MuXStatic,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsDebugMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EffectedComponentName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisabled,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMMTFrictionComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMMTFrictionComponent::StaticClass,
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
	IMPLEMENT_CLASS(UMMTFrictionComponent, 3548461467);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMMTFrictionComponent(Z_Construct_UClass_UMMTFrictionComponent, &UMMTFrictionComponent::StaticClass, TEXT("/Script/MMT"), TEXT("UMMTFrictionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMTFrictionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
