// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/MMTPluginPCH.h"
#include "Public/MMTSuspensionStack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTSuspensionStack() {}
// Cross Module References
	MMT_API UEnum* Z_Construct_UEnum_MMT_ESuspensionSimMode();
	UPackage* Z_Construct_UPackage__Script_MMT();
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FSuspensionStackStruct();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MMT_API UClass* Z_Construct_UClass_UMMTSuspensionStack_NoRegister();
	MMT_API UClass* Z_Construct_UClass_UMMTSuspensionStack();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MMT_API UFunction* Z_Construct_UFunction_UMMTSuspensionStack_ApplyAntiRollForce();
	MMT_API UFunction* Z_Construct_UFunction_UMMTSuspensionStack_GetContactData();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	MMT_API UFunction* Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionCompressionRatio();
	MMT_API UFunction* Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionForce();
	MMT_API UFunction* Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionForceScale();
	MMT_API UFunction* Z_Construct_UFunction_UMMTSuspensionStack_GetWheelHubPosition();
	MMT_API UFunction* Z_Construct_UFunction_UMMTSuspensionStack_Initialize();
	MMT_API UFunction* Z_Construct_UFunction_UMMTSuspensionStack_PhysicsUpdate();
	MMT_API UFunction* Z_Construct_UFunction_UMMTSuspensionStack_SetSpringOffsets();
	MMT_API UFunction* Z_Construct_UFunction_UMMTSuspensionStack_SetSpringStiffness();
	MMT_API UFunction* Z_Construct_UFunction_UMMTSuspensionStack_SetSprungComponentReference();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	MMT_API UFunction* Z_Construct_UFunction_UMMTSuspensionStack_SetSuspensionForceScale();
	MMT_API UFunction* Z_Construct_UFunction_UMMTSuspensionStack_SetSweepShapeComponentReference();
	MMT_API UFunction* Z_Construct_UFunction_UMMTSuspensionStack_Test();
	MMT_API UFunction* Z_Construct_UFunction_UMMTSuspensionStack_ToggleDebugMode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	static UEnum* ESuspensionSimMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MMT_ESuspensionSimMode, Z_Construct_UPackage__Script_MMT(), TEXT("ESuspensionSimMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESuspensionSimMode(ESuspensionSimMode_StaticEnum, TEXT("/Script/MMT"), TEXT("ESuspensionSimMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MMT_ESuspensionSimMode_CRC() { return 2707659417U; }
	UEnum* Z_Construct_UEnum_MMT_ESuspensionSimMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESuspensionSimMode"), 0, Get_Z_Construct_UEnum_MMT_ESuspensionSimMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESuspensionSimMode::RayCheck", (int64)ESuspensionSimMode::RayCheck },
				{ "ESuspensionSimMode::SphereCheck", (int64)ESuspensionSimMode::SphereCheck },
				{ "ESuspensionSimMode::ShapeSweep", (int64)ESuspensionSimMode::ShapeSweep },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
				{ "RayCheck.DisplayName", "Ray Check" },
				{ "RayCheck.ToolTip", "Ray Check - is simplest and fastest but works correctly only on relatively smooth terrain." },
				{ "ShapeSweep.DisplayName", "Shape Sweep" },
				{ "ShapeSweep.ToolTip", "Shape Sweep - works with any type of terrain and obstacles but more expensive than RayCheck." },
				{ "SphereCheck.DisplayName", "Sphere Check" },
				{ "SphereCheck.ToolTip", "Sphere Check - wheels are approximated with a sphere. This improves traverse of the obstacles over RayCheck and still cheaper than Shape Sweep, although still not as reliable as Shape Sweep" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MMT,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESuspensionSimMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ESuspensionSimMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSuspensionStackStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MMT_API uint32 Get_Z_Construct_UScriptStruct_FSuspensionStackStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSuspensionStackStruct, Z_Construct_UPackage__Script_MMT(), TEXT("SuspensionStackStruct"), sizeof(FSuspensionStackStruct), Get_Z_Construct_UScriptStruct_FSuspensionStackStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSuspensionStackStruct(FSuspensionStackStruct::StaticStruct, TEXT("/Script/MMT"), TEXT("SuspensionStackStruct"), false, nullptr, nullptr);
static struct FScriptStruct_MMT_StaticRegisterNativesFSuspensionStackStruct
{
	FScriptStruct_MMT_StaticRegisterNativesFSuspensionStackStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SuspensionStackStruct")),new UScriptStruct::TCppStructOps<FSuspensionStackStruct>);
	}
} ScriptStruct_MMT_StaticRegisterNativesFSuspensionStackStruct;
	UScriptStruct* Z_Construct_UScriptStruct_FSuspensionStackStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSuspensionStackStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SuspensionStackStruct"), sizeof(FSuspensionStackStruct), Get_Z_Construct_UScriptStruct_FSuspensionStackStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSuspensionStackStruct>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRotateAlongTraceVector_MetaData[] = {
				{ "Category", "Shape Sweep mode" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
				{ "ToolTip", "Will rotate sweep shape such that its Z vector will be parallel to direction of sweep, otherwise shape is not rotated" },
			};
#endif
			auto NewProp_bRotateAlongTraceVector_SetBit = [](void* Obj){ ((FSuspensionStackStruct*)Obj)->bRotateAlongTraceVector = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRotateAlongTraceVector = { UE4CodeGen_Private::EPropertyClass::Bool, "bRotateAlongTraceVector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FSuspensionStackStruct), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRotateAlongTraceVector_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRotateAlongTraceVector_MetaData, ARRAY_COUNT(NewProp_bRotateAlongTraceVector_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepShapeComponentName_MetaData[] = {
				{ "Category", "Shape Sweep mode" },
				{ "EditCondition", "bCanShapeSweep" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
				{ "ToolTip", "Name of the mesh component that will be used for shape sweep of this suspension stack" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SweepShapeComponentName = { UE4CodeGen_Private::EPropertyClass::Str, "SweepShapeComponentName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSuspensionStackStruct, SweepShapeComponentName), METADATA_PARAMS(NewProp_SweepShapeComponentName_MetaData, ARRAY_COUNT(NewProp_SweepShapeComponentName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanShapeSweep_MetaData[] = {
				{ "Category", "Shape Sweep mode" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
				{ "ToolTip", "Can use shape sweep to find suspension compression?" },
			};
#endif
			auto NewProp_bCanShapeSweep_SetBit = [](void* Obj){ ((FSuspensionStackStruct*)Obj)->bCanShapeSweep = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanShapeSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanShapeSweep", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FSuspensionStackStruct), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCanShapeSweep_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCanShapeSweep_MetaData, ARRAY_COUNT(NewProp_bCanShapeSweep_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereCheckTraceChannel_MetaData[] = {
				{ "Category", "Sphere Check mode" },
				{ "EditCondition", "bCanSphereCheck" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
				{ "ToolTip", "Default channel for suspension tracing in Sphere Check mode" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SphereCheckTraceChannel = { UE4CodeGen_Private::EPropertyClass::Byte, "SphereCheckTraceChannel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSuspensionStackStruct, SphereCheckTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(NewProp_SphereCheckTraceChannel_MetaData, ARRAY_COUNT(NewProp_SphereCheckTraceChannel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanSphereCheck_MetaData[] = {
				{ "Category", "Sphere Check mode" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
				{ "ToolTip", "Can use sphere check to find suspension compression?" },
			};
#endif
			auto NewProp_bCanSphereCheck_SetBit = [](void* Obj){ ((FSuspensionStackStruct*)Obj)->bCanSphereCheck = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanSphereCheck = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanSphereCheck", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FSuspensionStackStruct), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCanSphereCheck_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCanSphereCheck_MetaData, ARRAY_COUNT(NewProp_bCanSphereCheck_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayCheckTraceChannel_MetaData[] = {
				{ "Category", "Ray Check mode" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
				{ "ToolTip", "Default channel for suspension tracing in Ray Check mode" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_RayCheckTraceChannel = { UE4CodeGen_Private::EPropertyClass::Byte, "RayCheckTraceChannel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSuspensionStackStruct, RayCheckTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(NewProp_RayCheckTraceChannel_MetaData, ARRAY_COUNT(NewProp_RayCheckTraceChannel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDebugMode_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
				{ "ToolTip", "Will output debug information on screen" },
			};
#endif
			auto NewProp_bEnableDebugMode_SetBit = [](void* Obj){ ((FSuspensionStackStruct*)Obj)->bEnableDebugMode = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDebugMode = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableDebugMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FSuspensionStackStruct), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableDebugMode_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableDebugMode_MetaData, ARRAY_COUNT(NewProp_bEnableDebugMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGetContactBodyVelocity_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
				{ "ToolTip", "Will return velocity of the body that wheel made contact with. Takes performance but allows to drive vehicle on moving platforms correctly." },
			};
#endif
			auto NewProp_bGetContactBodyVelocity_SetBit = [](void* Obj){ ((FSuspensionStackStruct*)Obj)->bGetContactBodyVelocity = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGetContactBodyVelocity = { UE4CodeGen_Private::EPropertyClass::Bool, "bGetContactBodyVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FSuspensionStackStruct), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGetContactBodyVelocity_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGetContactBodyVelocity_MetaData, ARRAY_COUNT(NewProp_bGetContactBodyVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringDampening_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
				{ "ToolTip", "Dampening coefficient of the spring. The smaller the value the more spring will oscilate. Too large value can lead to unstable behaviour. Value of about 1/10th to 1/100th of spring stiffness should be enough" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringDampening = { UE4CodeGen_Private::EPropertyClass::Float, "SpringDampening", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSuspensionStackStruct, SpringDampening), METADATA_PARAMS(NewProp_SpringDampening_MetaData, ARRAY_COUNT(NewProp_SpringDampening_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringMaxOutputRatio_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
				{ "ToolTip", "As spring compresses it produces more and more force which can push vehicle more than desired. This parameter defines maximum force that can be produced by the spring as ratio of SpringStiffness. Value of 1.05 means that maximum force will be not more than 5% higher than SpringStiffness." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringMaxOutputRatio = { UE4CodeGen_Private::EPropertyClass::Float, "SpringMaxOutputRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSuspensionStackStruct, SpringMaxOutputRatio), METADATA_PARAMS(NewProp_SpringMaxOutputRatio_MetaData, ARRAY_COUNT(NewProp_SpringMaxOutputRatio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringStiffness_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
				{ "ToolTip", "Force of the spring. Minimal value should be enough to support portion of the vehicle's mass. Can calculate as SpringStiffnessMinimal = Vehicle_Mass * 980 / total_number_suspesion_stacks_of_all_tracks" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringStiffness = { UE4CodeGen_Private::EPropertyClass::Float, "SpringStiffness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSuspensionStackStruct, SpringStiffness), METADATA_PARAMS(NewProp_SpringStiffness_MetaData, ARRAY_COUNT(NewProp_SpringStiffness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringBottomOffset_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
				{ "ToolTip", "Bottom limit of the spring in relation to suspension stack position. Doesn't have to be aligned with Z axis. In case of torsion bar suspension, spring can be angled to follow closer radial movement of suspension" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpringBottomOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "SpringBottomOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSuspensionStackStruct, SpringBottomOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_SpringBottomOffset_MetaData, ARRAY_COUNT(NewProp_SpringBottomOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringTopOffset_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
				{ "ToolTip", "Top limit of the spring in relation to suspension stack position. Doesn't have to be aligned with Z axis. In case of torsion bar suspension, spring can be angled to follow closer radial movement of suspension" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpringTopOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "SpringTopOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSuspensionStackStruct, SpringTopOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_SpringTopOffset_MetaData, ARRAY_COUNT(NewProp_SpringTopOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackThickness_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
				{ "ToolTip", "Thickness of the track in cm. Needed for offset calculations to prevent wheels from clipping track" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrackThickness = { UE4CodeGen_Private::EPropertyClass::Float, "TrackThickness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSuspensionStackStruct, TrackThickness), METADATA_PARAMS(NewProp_TrackThickness_MetaData, ARRAY_COUNT(NewProp_TrackThickness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoadWheelRadius_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
				{ "ToolTip", "Radius of the road-wheel in cm. Needed for when track is using simulation feature or when IsShapeTrace is off and ray-check is used instead of sweeps" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RoadWheelRadius = { UE4CodeGen_Private::EPropertyClass::Float, "RoadWheelRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSuspensionStackStruct, RoadWheelRadius), METADATA_PARAMS(NewProp_RoadWheelRadius_MetaData, ARRAY_COUNT(NewProp_RoadWheelRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackLocalPosition_MetaData[] = {
				{ "Category", "General" },
				{ "EditCondition", "bUseCustomPosition" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
				{ "ToolTip", "Local position of the stack in relation to component. Normally a point where suspension would be physically attached to the chassis" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StackLocalPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "StackLocalPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSuspensionStackStruct, StackLocalPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_StackLocalPosition_MetaData, ARRAY_COUNT(NewProp_StackLocalPosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCustomPosition_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
				{ "ToolTip", "By default, component's position is used as stack position. Set to TRUE when array of stacks is used inside of a single component, otherwise all stacks will be in the same spot" },
			};
#endif
			auto NewProp_bUseCustomPosition_SetBit = [](void* Obj){ ((FSuspensionStackStruct*)Obj)->bUseCustomPosition = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCustomPosition = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseCustomPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FSuspensionStackStruct), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseCustomPosition_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseCustomPosition_MetaData, ARRAY_COUNT(NewProp_bUseCustomPosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulationMode_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
				{ "ToolTip", "Suspension simulation mode in which suspension stack starts by default. Simulation mode can be later changed in real-time (useful for LODs). RayCheck - is simplest and fastest but works correctly only on relatively smooth terrain. Shape Sweep - works with any type of terrain and obstacles but more expensive than RayCheck. Tread Simulation - road-wheels will collide with dynamic track surface, provides the most accurate simulation compared to other modes (requires track simulation component to work)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SimulationMode = { UE4CodeGen_Private::EPropertyClass::Enum, "SimulationMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSuspensionStackStruct, SimulationMode), Z_Construct_UEnum_MMT_ESuspensionSimMode, METADATA_PARAMS(NewProp_SimulationMode_MetaData, ARRAY_COUNT(NewProp_SimulationMode_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SimulationMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisabled_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
				{ "ToolTip", "Disables component from doing physics calculations and applying forces, useful for debugging." },
			};
#endif
			auto NewProp_bDisabled_SetBit = [](void* Obj){ ((FSuspensionStackStruct*)Obj)->bDisabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FSuspensionStackStruct), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisabled_MetaData, ARRAY_COUNT(NewProp_bDisabled_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRotateAlongTraceVector,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SweepShapeComponentName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCanShapeSweep,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SphereCheckTraceChannel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCanSphereCheck,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RayCheckTraceChannel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableDebugMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGetContactBodyVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpringDampening,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpringMaxOutputRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpringStiffness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpringBottomOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpringTopOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackThickness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RoadWheelRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StackLocalPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseCustomPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SimulationMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SimulationMode_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisabled,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MMT,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SuspensionStackStruct",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FSuspensionStackStruct),
				alignof(FSuspensionStackStruct),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSuspensionStackStruct_CRC() { return 1169411904U; }
	void UMMTSuspensionStack::StaticRegisterNativesUMMTSuspensionStack()
	{
		UClass* Class = UMMTSuspensionStack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyAntiRollForce", (Native)&UMMTSuspensionStack::execApplyAntiRollForce },
			{ "GetContactData", (Native)&UMMTSuspensionStack::execGetContactData },
			{ "GetSuspensionCompressionRatio", (Native)&UMMTSuspensionStack::execGetSuspensionCompressionRatio },
			{ "GetSuspensionForce", (Native)&UMMTSuspensionStack::execGetSuspensionForce },
			{ "GetSuspensionForceScale", (Native)&UMMTSuspensionStack::execGetSuspensionForceScale },
			{ "GetWheelHubPosition", (Native)&UMMTSuspensionStack::execGetWheelHubPosition },
			{ "Initialize", (Native)&UMMTSuspensionStack::execInitialize },
			{ "PhysicsUpdate", (Native)&UMMTSuspensionStack::execPhysicsUpdate },
			{ "SetSpringOffsets", (Native)&UMMTSuspensionStack::execSetSpringOffsets },
			{ "SetSpringStiffness", (Native)&UMMTSuspensionStack::execSetSpringStiffness },
			{ "SetSprungComponentReference", (Native)&UMMTSuspensionStack::execSetSprungComponentReference },
			{ "SetSuspensionForceScale", (Native)&UMMTSuspensionStack::execSetSuspensionForceScale },
			{ "SetSweepShapeComponentReference", (Native)&UMMTSuspensionStack::execSetSweepShapeComponentReference },
			{ "Test", (Native)&UMMTSuspensionStack::execTest },
			{ "ToggleDebugMode", (Native)&UMMTSuspensionStack::execToggleDebugMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMMTSuspensionStack_ApplyAntiRollForce()
	{
		struct MMTSuspensionStack_eventApplyAntiRollForce_Parms
		{
			float AntiRollForceMagnitude;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AntiRollForceMagnitude = { UE4CodeGen_Private::EPropertyClass::Float, "AntiRollForceMagnitude", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MMTSuspensionStack_eventApplyAntiRollForce_Parms, AntiRollForceMagnitude), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AntiRollForceMagnitude,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT Suspension Stack" },
				{ "CPP_Default_AntiRollForceMagnitude", "0.000000" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
				{ "ToolTip", "Applies anti-roll force transfered from another suspension stack on the same axis\n@param AntiRollForceMagnitude   Magnitude of anti-roll force, direction is determined by suspension configuration" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTSuspensionStack, "ApplyAntiRollForce", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MMTSuspensionStack_eventApplyAntiRollForce_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTSuspensionStack_GetContactData()
	{
		struct MMTSuspensionStack_eventGetContactData_Parms
		{
			bool bPointActive;
			FVector ForceAtPoint;
			FVector PointLocation;
			FVector SurfaceNormal;
			UPhysicalMaterial* SurfacePhysicalMaterial;
			FVector SurfaceVelocity;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SurfaceVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "SurfaceVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MMTSuspensionStack_eventGetContactData_Parms, SurfaceVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SurfacePhysicalMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "SurfacePhysicalMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MMTSuspensionStack_eventGetContactData_Parms, SurfacePhysicalMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SurfaceNormal = { UE4CodeGen_Private::EPropertyClass::Struct, "SurfaceNormal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MMTSuspensionStack_eventGetContactData_Parms, SurfaceNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "PointLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MMTSuspensionStack_eventGetContactData_Parms, PointLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForceAtPoint = { UE4CodeGen_Private::EPropertyClass::Struct, "ForceAtPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MMTSuspensionStack_eventGetContactData_Parms, ForceAtPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bPointActive_SetBit = [](void* Obj){ ((MMTSuspensionStack_eventGetContactData_Parms*)Obj)->bPointActive = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPointActive = { UE4CodeGen_Private::EPropertyClass::Bool, "bPointActive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MMTSuspensionStack_eventGetContactData_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPointActive_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SurfaceVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SurfacePhysicalMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SurfaceNormal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PointLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForceAtPoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPointActive,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT Suspension Stack" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
				{ "ToolTip", "Get contact data at point where trace or sweep has succeeded. This information is necessary for friction component\n@return bPointActive                    Indicates if contact with surface was made\n@return ForceAtPoint                    Force at contact point in world space (suspension force pushing against surface)\n@return PointLocation                   Location of contact point in world space\n@return SurfaceNormal                   Normal of the surface at contact point\n@return SurfacePhysicalMaterial         Physical material of contact surface\n@return SurfaceVelocity                 Velocity of the body that contact was made with" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTSuspensionStack, "GetContactData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(MMTSuspensionStack_eventGetContactData_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionCompressionRatio()
	{
		struct MMTSuspensionStack_eventGetSuspensionCompressionRatio_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MMTSuspensionStack_eventGetSuspensionCompressionRatio_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT Suspension Stack" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
				{ "ToolTip", "Get current suspension compression ratio 0..1\n@return         Returns current suspension compression ratio" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTSuspensionStack, "GetSuspensionCompressionRatio", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MMTSuspensionStack_eventGetSuspensionCompressionRatio_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionForce()
	{
		struct MMTSuspensionStack_eventGetSuspensionForce_Parms
		{
			float Magnitude;
			FVector WorldSpace;
			FVector LocalSpace;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalSpace = { UE4CodeGen_Private::EPropertyClass::Struct, "LocalSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MMTSuspensionStack_eventGetSuspensionForce_Parms, LocalSpace), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldSpace = { UE4CodeGen_Private::EPropertyClass::Struct, "WorldSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MMTSuspensionStack_eventGetSuspensionForce_Parms, WorldSpace), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Magnitude = { UE4CodeGen_Private::EPropertyClass::Float, "Magnitude", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MMTSuspensionStack_eventGetSuspensionForce_Parms, Magnitude), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalSpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldSpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Magnitude,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT Suspension Stack" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
				{ "ToolTip", "Get last calculated suspension force\n@return Magnitude       Magnitude of the force as float\n@return WorldSpace      Vector force in world space\n@return LocalSpace      Vector force in local space" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTSuspensionStack, "GetSuspensionForce", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(MMTSuspensionStack_eventGetSuspensionForce_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionForceScale()
	{
		struct MMTSuspensionStack_eventGetSuspensionForceScale_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MMTSuspensionStack_eventGetSuspensionForceScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT Suspension Stack" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
				{ "ToolTip", "Get current suspension force scale parameter\n@return         Returns current suspension force scale parameter" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTSuspensionStack, "GetSuspensionForceScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MMTSuspensionStack_eventGetSuspensionForceScale_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTSuspensionStack_GetWheelHubPosition()
	{
		struct MMTSuspensionStack_eventGetWheelHubPosition_Parms
		{
			bool bInWorldSpace;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MMTSuspensionStack_eventGetWheelHubPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bInWorldSpace_SetBit = [](void* Obj){ ((MMTSuspensionStack_eventGetWheelHubPosition_Parms*)Obj)->bInWorldSpace = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInWorldSpace = { UE4CodeGen_Private::EPropertyClass::Bool, "bInWorldSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MMTSuspensionStack_eventGetWheelHubPosition_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInWorldSpace_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInWorldSpace,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT Suspension Stack" },
				{ "CPP_Default_bInWorldSpace", "false" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
				{ "ToolTip", "Get last calculated suspension force\n@return         Wheel hub position in local space" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTSuspensionStack, "GetWheelHubPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(MMTSuspensionStack_eventGetWheelHubPosition_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTSuspensionStack_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT Suspension Stack" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
				{ "ToolTip", "Initializes class logic, finds references and pre-calculates parameters. Expected to be called from BeginPlay only" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTSuspensionStack, "Initialize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTSuspensionStack_PhysicsUpdate()
	{
		struct MMTSuspensionStack_eventPhysicsUpdate_Parms
		{
			float DeltaTime;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MMTSuspensionStack_eventPhysicsUpdate_Parms, DeltaTime), METADATA_PARAMS(NewProp_DeltaTime_MetaData, ARRAY_COUNT(NewProp_DeltaTime_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeltaTime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT Suspension Stack" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
				{ "ToolTip", "Runs calculations of suspension stack, applies spring force to sprung component and calculates new position of the road-wheels\n@param DeltaTime                                Delta time\n@return WheelLocalPosition              Position of the road-wheel in local coordinate system of the actor, NOT a relative position to component" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTSuspensionStack, "PhysicsUpdate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MMTSuspensionStack_eventPhysicsUpdate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTSuspensionStack_SetSpringOffsets()
	{
		struct MMTSuspensionStack_eventSetSpringOffsets_Parms
		{
			FVector SpringTopOffset;
			FVector SpringBottomOffset;
			bool bUpdateAllParameters;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bUpdateAllParameters_SetBit = [](void* Obj){ ((MMTSuspensionStack_eventSetSpringOffsets_Parms*)Obj)->bUpdateAllParameters = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateAllParameters = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateAllParameters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MMTSuspensionStack_eventSetSpringOffsets_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateAllParameters_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpringBottomOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "SpringBottomOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MMTSuspensionStack_eventSetSpringOffsets_Parms, SpringBottomOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpringTopOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "SpringTopOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MMTSuspensionStack_eventSetSpringOffsets_Parms, SpringTopOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateAllParameters,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpringBottomOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpringTopOffset,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT Suspension Stack" },
				{ "CPP_Default_bUpdateAllParameters", "true" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
				{ "ToolTip", "Set new spring offsets\n@param NewSpringStiffness       Stiffness of the spring\n@param bUpdateAllParameters     Will refresh all precomputed parameters. If you are changing multiple suspension settings at a time, consider setting this flag to true only on last setter to save some performance" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTSuspensionStack, "SetSpringOffsets", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(MMTSuspensionStack_eventSetSpringOffsets_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTSuspensionStack_SetSpringStiffness()
	{
		struct MMTSuspensionStack_eventSetSpringStiffness_Parms
		{
			float NewSpringStiffness;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewSpringStiffness = { UE4CodeGen_Private::EPropertyClass::Float, "NewSpringStiffness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MMTSuspensionStack_eventSetSpringStiffness_Parms, NewSpringStiffness), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewSpringStiffness,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT Suspension Stack" },
				{ "CPP_Default_NewSpringStiffness", "0.000000" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
				{ "ToolTip", "Set stiffness of the spring\n@param NewSpringStiffness       Stiffness of the spring\n@param bUpdateAllParameters     Will refresh all precomputed parameters. If you are changing multiple suspension settings at a time, consider setting this flag to true only on last setter to save some performance" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTSuspensionStack, "SetSpringStiffness", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MMTSuspensionStack_eventSetSpringStiffness_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTSuspensionStack_SetSprungComponentReference()
	{
		struct MMTSuspensionStack_eventSetSprungComponentReference_Parms
		{
			UMeshComponent* SprungMeshComponentRef;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((MMTSuspensionStack_eventSetSprungComponentReference_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MMTSuspensionStack_eventSetSprungComponentReference_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprungMeshComponentRef_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SprungMeshComponentRef = { UE4CodeGen_Private::EPropertyClass::Object, "SprungMeshComponentRef", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MMTSuspensionStack_eventSetSprungComponentReference_Parms, SprungMeshComponentRef), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(NewProp_SprungMeshComponentRef_MetaData, ARRAY_COUNT(NewProp_SprungMeshComponentRef_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SprungMeshComponentRef,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT Suspension Stack" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
				{ "ToolTip", "Set reference of sprung mesh component manually\n@param SprungMeshComponentRef   Pointer to sprung mesh component, usually root physics component\n@return         Returns true if reference is valid and was set" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTSuspensionStack, "SetSprungComponentReference", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MMTSuspensionStack_eventSetSprungComponentReference_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTSuspensionStack_SetSuspensionForceScale()
	{
		struct MMTSuspensionStack_eventSetSuspensionForceScale_Parms
		{
			float NewSuspensionForceScale;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewSuspensionForceScale = { UE4CodeGen_Private::EPropertyClass::Float, "NewSuspensionForceScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MMTSuspensionStack_eventSetSuspensionForceScale_Parms, NewSuspensionForceScale), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewSuspensionForceScale,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT Suspension Stack" },
				{ "CPP_Default_NewSuspensionForceScale", "1.000000" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
				{ "ToolTip", "Sets scale of the final suspension force (spring + damping), useful for active suspension\n@param NewSpringForceScale      New scale value of final suspension force" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTSuspensionStack, "SetSuspensionForceScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MMTSuspensionStack_eventSetSuspensionForceScale_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTSuspensionStack_SetSweepShapeComponentReference()
	{
		struct MMTSuspensionStack_eventSetSweepShapeComponentReference_Parms
		{
			UMeshComponent* SweepShapeMeshComponentRef;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((MMTSuspensionStack_eventSetSweepShapeComponentReference_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MMTSuspensionStack_eventSetSweepShapeComponentReference_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepShapeMeshComponentRef_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SweepShapeMeshComponentRef = { UE4CodeGen_Private::EPropertyClass::Object, "SweepShapeMeshComponentRef", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MMTSuspensionStack_eventSetSweepShapeComponentReference_Parms, SweepShapeMeshComponentRef), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(NewProp_SweepShapeMeshComponentRef_MetaData, ARRAY_COUNT(NewProp_SweepShapeMeshComponentRef_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SweepShapeMeshComponentRef,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT Suspension Stack" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
				{ "ToolTip", "Set reference of mesh component used for sweeps\n@param SweepShapeMeshComponentRef       Pointer to mesh component used for sweeps, usually a physical wheel component\n@return         Returns true if reference is valid and was set" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTSuspensionStack, "SetSweepShapeComponentReference", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MMTSuspensionStack_eventSetSweepShapeComponentReference_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTSuspensionStack_Test()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT Suspension Stack" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTSuspensionStack, "Test", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTSuspensionStack_ToggleDebugMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT Suspension Stack" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
				{ "ToolTip", "Toggle debug mode on/off" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTSuspensionStack, "ToggleDebugMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMMTSuspensionStack_NoRegister()
	{
		return UMMTSuspensionStack::StaticClass();
	}
	UClass* Z_Construct_UClass_UMMTSuspensionStack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_MMT,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMMTSuspensionStack_ApplyAntiRollForce, "ApplyAntiRollForce" }, // 2832182618
				{ &Z_Construct_UFunction_UMMTSuspensionStack_GetContactData, "GetContactData" }, // 3475585763
				{ &Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionCompressionRatio, "GetSuspensionCompressionRatio" }, // 2054157895
				{ &Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionForce, "GetSuspensionForce" }, // 879805428
				{ &Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionForceScale, "GetSuspensionForceScale" }, // 2811908613
				{ &Z_Construct_UFunction_UMMTSuspensionStack_GetWheelHubPosition, "GetWheelHubPosition" }, // 229046154
				{ &Z_Construct_UFunction_UMMTSuspensionStack_Initialize, "Initialize" }, // 4130713510
				{ &Z_Construct_UFunction_UMMTSuspensionStack_PhysicsUpdate, "PhysicsUpdate" }, // 3873062592
				{ &Z_Construct_UFunction_UMMTSuspensionStack_SetSpringOffsets, "SetSpringOffsets" }, // 331278958
				{ &Z_Construct_UFunction_UMMTSuspensionStack_SetSpringStiffness, "SetSpringStiffness" }, // 336794862
				{ &Z_Construct_UFunction_UMMTSuspensionStack_SetSprungComponentReference, "SetSprungComponentReference" }, // 176029412
				{ &Z_Construct_UFunction_UMMTSuspensionStack_SetSuspensionForceScale, "SetSuspensionForceScale" }, // 470101560
				{ &Z_Construct_UFunction_UMMTSuspensionStack_SetSweepShapeComponentReference, "SetSweepShapeComponentReference" }, // 560594688
				{ &Z_Construct_UFunction_UMMTSuspensionStack_Test, "Test" }, // 106207648
				{ &Z_Construct_UFunction_UMMTSuspensionStack_ToggleDebugMode, "ToggleDebugMode" }, // 4263282145
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "MMTSuspensionStack.h" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContactPhysicalMaterial_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ContactPhysicalMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "ContactPhysicalMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTSuspensionStack, ContactPhysicalMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(NewProp_ContactPhysicalMaterial_MetaData, ARRAY_COUNT(NewProp_ContactPhysicalMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContactPointNormal_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContactPointNormal = { UE4CodeGen_Private::EPropertyClass::Struct, "ContactPointNormal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTSuspensionStack, ContactPointNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_ContactPointNormal_MetaData, ARRAY_COUNT(NewProp_ContactPointNormal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContactPointLocation_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContactPointLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "ContactPointLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTSuspensionStack, ContactPointLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_ContactPointLocation_MetaData, ARRAY_COUNT(NewProp_ContactPointLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContactForceAtPoint_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContactForceAtPoint = { UE4CodeGen_Private::EPropertyClass::Struct, "ContactForceAtPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTSuspensionStack, ContactForceAtPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_ContactForceAtPoint_MetaData, ARRAY_COUNT(NewProp_ContactForceAtPoint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContactInducedVelocity_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContactInducedVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "ContactInducedVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTSuspensionStack, ContactInducedVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_ContactInducedVelocity_MetaData, ARRAY_COUNT(NewProp_ContactInducedVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bContactPointActive_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
				{ "ToolTip", "Variables for recording collision of the wheel and passing data further to friction processing" },
			};
#endif
			auto NewProp_bContactPointActive_SetBit = [](void* Obj){ ((UMMTSuspensionStack*)Obj)->bContactPointActive = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bContactPointActive = { UE4CodeGen_Private::EPropertyClass::Bool, "bContactPointActive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMMTSuspensionStack), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bContactPointActive_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bContactPointActive_MetaData, ARRAY_COUNT(NewProp_bContactPointActive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShapeSweepLocation_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShapeSweepLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "ShapeSweepLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTSuspensionStack, ShapeSweepLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_ShapeSweepLocation_MetaData, ARRAY_COUNT(NewProp_ShapeSweepLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TracedHubLocation_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
				{ "ToolTip", "Variable to store location of the trace hit" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TracedHubLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "TracedHubLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTSuspensionStack, TracedHubLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_TracedHubLocation_MetaData, ARRAY_COUNT(NewProp_TracedHubLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineTraceOffsetBottomLS_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineTraceOffsetBottomLS = { UE4CodeGen_Private::EPropertyClass::Struct, "LineTraceOffsetBottomLS", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTSuspensionStack, LineTraceOffsetBottomLS), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_LineTraceOffsetBottomLS_MetaData, ARRAY_COUNT(NewProp_LineTraceOffsetBottomLS_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineTraceOffsetTopLS_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineTraceOffsetTopLS = { UE4CodeGen_Private::EPropertyClass::Struct, "LineTraceOffsetTopLS", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTSuspensionStack, LineTraceOffsetTopLS), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_LineTraceOffsetTopLS_MetaData, ARRAY_COUNT(NewProp_LineTraceOffsetTopLS_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionRatio_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CompressionRatio = { UE4CodeGen_Private::EPropertyClass::Float, "CompressionRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTSuspensionStack, CompressionRatio), METADATA_PARAMS(NewProp_CompressionRatio_MetaData, ARRAY_COUNT(NewProp_CompressionRatio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuspensionForceScale_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SuspensionForceScale = { UE4CodeGen_Private::EPropertyClass::Float, "SuspensionForceScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTSuspensionStack, SuspensionForceScale), METADATA_PARAMS(NewProp_SuspensionForceScale_MetaData, ARRAY_COUNT(NewProp_SuspensionForceScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuspensionForceWS_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuspensionForceWS = { UE4CodeGen_Private::EPropertyClass::Struct, "SuspensionForceWS", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTSuspensionStack, SuspensionForceWS), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_SuspensionForceWS_MetaData, ARRAY_COUNT(NewProp_SuspensionForceWS_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuspensionForceLS_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuspensionForceLS = { UE4CodeGen_Private::EPropertyClass::Struct, "SuspensionForceLS", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTSuspensionStack, SuspensionForceLS), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_SuspensionForceLS_MetaData, ARRAY_COUNT(NewProp_SuspensionForceLS_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuspensionForceMagnitude_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SuspensionForceMagnitude = { UE4CodeGen_Private::EPropertyClass::Float, "SuspensionForceMagnitude", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTSuspensionStack, SuspensionForceMagnitude), METADATA_PARAMS(NewProp_SuspensionForceMagnitude_MetaData, ARRAY_COUNT(NewProp_SuspensionForceMagnitude_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousSpringLenght_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreviousSpringLenght = { UE4CodeGen_Private::EPropertyClass::Float, "PreviousSpringLenght", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTSuspensionStack, PreviousSpringLenght), METADATA_PARAMS(NewProp_PreviousSpringLenght_MetaData, ARRAY_COUNT(NewProp_PreviousSpringLenght_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WheelHubPositionLS_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WheelHubPositionLS = { UE4CodeGen_Private::EPropertyClass::Struct, "WheelHubPositionLS", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTSuspensionStack, WheelHubPositionLS), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_WheelHubPositionLS_MetaData, ARRAY_COUNT(NewProp_WheelHubPositionLS_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWarningMessageDisplayed_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
			};
#endif
			auto NewProp_bWarningMessageDisplayed_SetBit = [](void* Obj){ ((UMMTSuspensionStack*)Obj)->bWarningMessageDisplayed = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWarningMessageDisplayed = { UE4CodeGen_Private::EPropertyClass::Bool, "bWarningMessageDisplayed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMMTSuspensionStack), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bWarningMessageDisplayed_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bWarningMessageDisplayed_MetaData, ARRAY_COUNT(NewProp_bWarningMessageDisplayed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringDirectionLocal_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpringDirectionLocal = { UE4CodeGen_Private::EPropertyClass::Struct, "SpringDirectionLocal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTSuspensionStack, SpringDirectionLocal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_SpringDirectionLocal_MetaData, ARRAY_COUNT(NewProp_SpringDirectionLocal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferenceFrameTransform_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReferenceFrameTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "ReferenceFrameTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTSuspensionStack, ReferenceFrameTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_ReferenceFrameTransform_MetaData, ARRAY_COUNT(NewProp_ReferenceFrameTransform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringOffsetBottomAdjusted_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpringOffsetBottomAdjusted = { UE4CodeGen_Private::EPropertyClass::Struct, "SpringOffsetBottomAdjusted", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTSuspensionStack, SpringOffsetBottomAdjusted), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_SpringOffsetBottomAdjusted_MetaData, ARRAY_COUNT(NewProp_SpringOffsetBottomAdjusted_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringOffsetTopAdjusted_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpringOffsetTopAdjusted = { UE4CodeGen_Private::EPropertyClass::Struct, "SpringOffsetTopAdjusted", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTSuspensionStack, SpringOffsetTopAdjusted), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_SpringOffsetTopAdjusted_MetaData, ARRAY_COUNT(NewProp_SpringOffsetTopAdjusted_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringMaxLenght_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringMaxLenght = { UE4CodeGen_Private::EPropertyClass::Float, "SpringMaxLenght", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTSuspensionStack, SpringMaxLenght), METADATA_PARAMS(NewProp_SpringMaxLenght_MetaData, ARRAY_COUNT(NewProp_SpringMaxLenght_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentsParentName_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ComponentsParentName = { UE4CodeGen_Private::EPropertyClass::Str, "ComponentsParentName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTSuspensionStack, ComponentsParentName), METADATA_PARAMS(NewProp_ComponentsParentName_MetaData, ARRAY_COUNT(NewProp_ComponentsParentName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ComponentName = { UE4CodeGen_Private::EPropertyClass::Str, "ComponentName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTSuspensionStack, ComponentName), METADATA_PARAMS(NewProp_ComponentName_MetaData, ARRAY_COUNT(NewProp_ComponentName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSweepShapeMeshComponentSetManually_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
			};
#endif
			auto NewProp_bSweepShapeMeshComponentSetManually_SetBit = [](void* Obj){ ((UMMTSuspensionStack*)Obj)->bSweepShapeMeshComponentSetManually = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSweepShapeMeshComponentSetManually = { UE4CodeGen_Private::EPropertyClass::Bool, "bSweepShapeMeshComponentSetManually", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMMTSuspensionStack), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSweepShapeMeshComponentSetManually_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSweepShapeMeshComponentSetManually_MetaData, ARRAY_COUNT(NewProp_bSweepShapeMeshComponentSetManually_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepShapeMeshComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SweepShapeMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SweepShapeMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UMMTSuspensionStack, SweepShapeMeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(NewProp_SweepShapeMeshComponent_MetaData, ARRAY_COUNT(NewProp_SweepShapeMeshComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSprungMeshComponentSetManually_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
			};
#endif
			auto NewProp_bSprungMeshComponentSetManually_SetBit = [](void* Obj){ ((UMMTSuspensionStack*)Obj)->bSprungMeshComponentSetManually = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSprungMeshComponentSetManually = { UE4CodeGen_Private::EPropertyClass::Bool, "bSprungMeshComponentSetManually", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMMTSuspensionStack), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSprungMeshComponentSetManually_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSprungMeshComponentSetManually_MetaData, ARRAY_COUNT(NewProp_bSprungMeshComponentSetManually_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprungMeshComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SprungMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SprungMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UMMTSuspensionStack, SprungMeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(NewProp_SprungMeshComponent_MetaData, ARRAY_COUNT(NewProp_SprungMeshComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentComponentRef_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentComponentRef = { UE4CodeGen_Private::EPropertyClass::Object, "ParentComponentRef", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UMMTSuspensionStack, ParentComponentRef), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_ParentComponentRef_MetaData, ARRAY_COUNT(NewProp_ParentComponentRef_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuspensionSettings_MetaData[] = {
				{ "Category", "Suspension Stack Settings" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
				{ "ToolTip", "Suspension stack settings" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuspensionSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "SuspensionSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMMTSuspensionStack, SuspensionSettings), Z_Construct_UScriptStruct_FSuspensionStackStruct, METADATA_PARAMS(NewProp_SuspensionSettings_MetaData, ARRAY_COUNT(NewProp_SuspensionSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprungComponentName_MetaData[] = {
				{ "Category", "Suspension Stack Settings" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
				{ "ToolTip", "Name of the mesh component that will receive suspension force, usually root component" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SprungComponentName = { UE4CodeGen_Private::EPropertyClass::Str, "SprungComponentName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMMTSuspensionStack, SprungComponentName), METADATA_PARAMS(NewProp_SprungComponentName_MetaData, ARRAY_COUNT(NewProp_SprungComponentName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ContactPhysicalMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ContactPointNormal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ContactPointLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ContactForceAtPoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ContactInducedVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bContactPointActive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShapeSweepLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TracedHubLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LineTraceOffsetBottomLS,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LineTraceOffsetTopLS,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompressionRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SuspensionForceScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SuspensionForceWS,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SuspensionForceLS,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SuspensionForceMagnitude,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviousSpringLenght,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WheelHubPositionLS,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bWarningMessageDisplayed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpringDirectionLocal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReferenceFrameTransform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpringOffsetBottomAdjusted,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpringOffsetTopAdjusted,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpringMaxLenght,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentsParentName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSweepShapeMeshComponentSetManually,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SweepShapeMeshComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSprungMeshComponentSetManually,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SprungMeshComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParentComponentRef,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SuspensionSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SprungComponentName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMMTSuspensionStack>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMMTSuspensionStack::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00901080u,
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
	IMPLEMENT_CLASS(UMMTSuspensionStack, 2308255350);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMMTSuspensionStack(Z_Construct_UClass_UMMTSuspensionStack, &UMMTSuspensionStack::StaticClass, TEXT("/Script/MMT"), TEXT("UMMTSuspensionStack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMTSuspensionStack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
