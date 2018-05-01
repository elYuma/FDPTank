// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/MMTPluginPCH.h"
#include "Public/MMTTrackSprocketAndIdlerStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTTrackSprocketAndIdlerStruct() {}
// Cross Module References
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct();
	UPackage* Z_Construct_UPackage__Script_MMT();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FTrackSprocketAndIdlerStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MMT_API uint32 Get_Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct, Z_Construct_UPackage__Script_MMT(), TEXT("TrackSprocketAndIdlerStruct"), sizeof(FTrackSprocketAndIdlerStruct), Get_Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTrackSprocketAndIdlerStruct(FTrackSprocketAndIdlerStruct::StaticStruct, TEXT("/Script/MMT"), TEXT("TrackSprocketAndIdlerStruct"), false, nullptr, nullptr);
static struct FScriptStruct_MMT_StaticRegisterNativesFTrackSprocketAndIdlerStruct
{
	FScriptStruct_MMT_StaticRegisterNativesFTrackSprocketAndIdlerStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TrackSprocketAndIdlerStruct")),new UScriptStruct::TCppStructOps<FTrackSprocketAndIdlerStruct>);
	}
} ScriptStruct_MMT_StaticRegisterNativesFTrackSprocketAndIdlerStruct;
	UScriptStruct* Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TrackSprocketAndIdlerStruct"), sizeof(FTrackSprocketAndIdlerStruct), Get_Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MMTTrackSprocketAndIdlerStruct.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrackSprocketAndIdlerStruct>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoadWheelRelativeLocation_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTTrackSprocketAndIdlerStruct.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RoadWheelRelativeLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "RoadWheelRelativeLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTrackSprocketAndIdlerStruct, RoadWheelRelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_RoadWheelRelativeLocation_MetaData, ARRAY_COUNT(NewProp_RoadWheelRelativeLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShapeSweepMesh_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MMTTrackSprocketAndIdlerStruct.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShapeSweepMesh = { UE4CodeGen_Private::EPropertyClass::Object, "ShapeSweepMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(FTrackSprocketAndIdlerStruct, ShapeSweepMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(NewProp_ShapeSweepMesh_MetaData, ARRAY_COUNT(NewProp_ShapeSweepMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringDampening_MetaData[] = {
				{ "Category", "Suspension Stack" },
				{ "ModuleRelativePath", "Public/MMTTrackSprocketAndIdlerStruct.h" },
				{ "ToolTip", "Dampening coefficient of the spring. The smaller the value the more spring will oscilate. Too large value can lead to unstable behaviour. Value of about 1/10th to 1/100th of spring stiffness should be enough" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringDampening = { UE4CodeGen_Private::EPropertyClass::Float, "SpringDampening", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTrackSprocketAndIdlerStruct, SpringDampening), METADATA_PARAMS(NewProp_SpringDampening_MetaData, ARRAY_COUNT(NewProp_SpringDampening_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringStiffness_MetaData[] = {
				{ "Category", "Suspension Stack" },
				{ "ModuleRelativePath", "Public/MMTTrackSprocketAndIdlerStruct.h" },
				{ "ToolTip", "Force of the spring. Minimal value should be enough to support portion of the vehicle's mass. Can calculate as SpringStiffnessMinimal = Vehicle_Mass * 980 / total_number_suspesion_stacks_of_all_tracks" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringStiffness = { UE4CodeGen_Private::EPropertyClass::Float, "SpringStiffness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTrackSprocketAndIdlerStruct, SpringStiffness), METADATA_PARAMS(NewProp_SpringStiffness_MetaData, ARRAY_COUNT(NewProp_SpringStiffness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringBottomOffset_MetaData[] = {
				{ "Category", "Suspension Stack" },
				{ "ModuleRelativePath", "Public/MMTTrackSprocketAndIdlerStruct.h" },
				{ "ToolTip", "Bottom limit of the spring in relation to suspension stack position. Doesn't have to be aligned with Z axis. In case of torsion bar suspension, spring can be angled to follow closer radial movement of suspension" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpringBottomOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "SpringBottomOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTrackSprocketAndIdlerStruct, SpringBottomOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_SpringBottomOffset_MetaData, ARRAY_COUNT(NewProp_SpringBottomOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringTopOffset_MetaData[] = {
				{ "Category", "Suspension Stack" },
				{ "ModuleRelativePath", "Public/MMTTrackSprocketAndIdlerStruct.h" },
				{ "ToolTip", "Top limit of the spring in relation to suspension stack position. Doesn't have to be aligned with Z axis. In case of torsion bar suspension, spring can be angled to follow closer radial movement of suspension" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpringTopOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "SpringTopOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTrackSprocketAndIdlerStruct, SpringTopOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_SpringTopOffset_MetaData, ARRAY_COUNT(NewProp_SpringTopOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoadWheelRadius_MetaData[] = {
				{ "Category", "Suspension Stack" },
				{ "ModuleRelativePath", "Public/MMTTrackSprocketAndIdlerStruct.h" },
				{ "ToolTip", "Radius of the road-wheel in cm. Needed for when track is using simulation feature or when IsShapeTrace is off and ray-check is used instead of sweeps" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RoadWheelRadius = { UE4CodeGen_Private::EPropertyClass::Float, "RoadWheelRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTrackSprocketAndIdlerStruct, RoadWheelRadius), METADATA_PARAMS(NewProp_RoadWheelRadius_MetaData, ARRAY_COUNT(NewProp_RoadWheelRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackPosition_MetaData[] = {
				{ "Category", "Suspension Stack" },
				{ "ModuleRelativePath", "Public/MMTTrackSprocketAndIdlerStruct.h" },
				{ "ToolTip", "Position of the stack in relation component's root. Normally a point where suspension would be physically attached to the chassis" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StackPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "StackPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTrackSprocketAndIdlerStruct, StackPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_StackPosition_MetaData, ARRAY_COUNT(NewProp_StackPosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponentName_MetaData[] = {
				{ "Category", "Sprocket and idler" },
				{ "EditCondition", "IsAbleToProvideTraction" },
				{ "ModuleRelativePath", "Public/MMTTrackSprocketAndIdlerStruct.h" },
				{ "ToolTip", "Name of the mesh component of sprocket or idler that will be used for calculation of physics for traction. Needs to have collision" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_MeshComponentName = { UE4CodeGen_Private::EPropertyClass::Str, "MeshComponentName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTrackSprocketAndIdlerStruct, MeshComponentName), METADATA_PARAMS(NewProp_MeshComponentName_MetaData, ARRAY_COUNT(NewProp_MeshComponentName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAbleToProvideTraction_MetaData[] = {
				{ "Category", "Sprocket and idler" },
				{ "ModuleRelativePath", "Public/MMTTrackSprocketAndIdlerStruct.h" },
				{ "ToolTip", "On most of the vehicles, sprocket and main idler can collide with environment and provide traction" },
			};
#endif
			auto NewProp_IsAbleToProvideTraction_SetBit = [](void* Obj){ ((FTrackSprocketAndIdlerStruct*)Obj)->IsAbleToProvideTraction = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAbleToProvideTraction = { UE4CodeGen_Private::EPropertyClass::Bool, "IsAbleToProvideTraction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FTrackSprocketAndIdlerStruct), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsAbleToProvideTraction_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsAbleToProvideTraction_MetaData, ARRAY_COUNT(NewProp_IsAbleToProvideTraction_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RoadWheelRelativeLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShapeSweepMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpringDampening,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpringStiffness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpringBottomOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpringTopOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RoadWheelRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StackPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshComponentName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsAbleToProvideTraction,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MMT,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TrackSprocketAndIdlerStruct",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FTrackSprocketAndIdlerStruct),
				alignof(FTrackSprocketAndIdlerStruct),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_CRC() { return 3304781149U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
