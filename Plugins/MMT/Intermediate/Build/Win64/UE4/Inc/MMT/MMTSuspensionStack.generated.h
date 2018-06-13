// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UMeshComponent;
class UPhysicalMaterial;
#ifdef MMT_MMTSuspensionStack_generated_h
#error "MMTSuspensionStack.generated.h already included, missing '#pragma once' in MMTSuspensionStack.h"
#endif
#define MMT_MMTSuspensionStack_generated_h

#define FDPTank_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h_26_GENERATED_BODY \
	friend MMT_API class UScriptStruct* Z_Construct_UScriptStruct_FSuspensionStackStruct(); \
	MMT_API static class UScriptStruct* StaticStruct();


#define FDPTank_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h_115_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTest) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Test(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyAntiRollForce) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AntiRollForceMagnitude); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ApplyAntiRollForce(Z_Param_AntiRollForceMagnitude); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSuspensionCompressionRatio) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetSuspensionCompressionRatio(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSuspensionForceScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetSuspensionForceScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSuspensionForceScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewSuspensionForceScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSuspensionForceScale(Z_Param_NewSuspensionForceScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSpringOffsets) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_SpringTopOffset); \
		P_GET_STRUCT(FVector,Z_Param_SpringBottomOffset); \
		P_GET_UBOOL(Z_Param_bUpdateAllParameters); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSpringOffsets(Z_Param_SpringTopOffset,Z_Param_SpringBottomOffset,Z_Param_bUpdateAllParameters); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSpringStiffness) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewSpringStiffness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSpringStiffness(Z_Param_NewSpringStiffness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSweepShapeComponentReference) \
	{ \
		P_GET_OBJECT(UMeshComponent,Z_Param_SweepShapeMeshComponentRef); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SetSweepShapeComponentReference(Z_Param_SweepShapeMeshComponentRef); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSprungComponentReference) \
	{ \
		P_GET_OBJECT(UMeshComponent,Z_Param_SprungMeshComponentRef); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SetSprungComponentReference(Z_Param_SprungMeshComponentRef); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWheelHubPosition) \
	{ \
		P_GET_UBOOL(Z_Param_bInWorldSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetWheelHubPosition(Z_Param_bInWorldSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetContactData) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_bPointActive); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ForceAtPoint); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PointLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_SurfaceNormal); \
		P_GET_OBJECT_REF(UPhysicalMaterial,Z_Param_Out_SurfacePhysicalMaterial); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_SurfaceVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetContactData(Z_Param_Out_bPointActive,Z_Param_Out_ForceAtPoint,Z_Param_Out_PointLocation,Z_Param_Out_SurfaceNormal,Z_Param_Out_SurfacePhysicalMaterial,Z_Param_Out_SurfaceVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSuspensionForce) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Magnitude); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldSpace); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LocalSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetSuspensionForce(Z_Param_Out_Magnitude,Z_Param_Out_WorldSpace,Z_Param_Out_LocalSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleDebugMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ToggleDebugMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitialize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Initialize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPhysicsUpdate) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PhysicsUpdate(Z_Param_Out_DeltaTime); \
		P_NATIVE_END; \
	}


#define FDPTank_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTest) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Test(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyAntiRollForce) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AntiRollForceMagnitude); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ApplyAntiRollForce(Z_Param_AntiRollForceMagnitude); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSuspensionCompressionRatio) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetSuspensionCompressionRatio(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSuspensionForceScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetSuspensionForceScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSuspensionForceScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewSuspensionForceScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSuspensionForceScale(Z_Param_NewSuspensionForceScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSpringOffsets) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_SpringTopOffset); \
		P_GET_STRUCT(FVector,Z_Param_SpringBottomOffset); \
		P_GET_UBOOL(Z_Param_bUpdateAllParameters); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSpringOffsets(Z_Param_SpringTopOffset,Z_Param_SpringBottomOffset,Z_Param_bUpdateAllParameters); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSpringStiffness) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewSpringStiffness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSpringStiffness(Z_Param_NewSpringStiffness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSweepShapeComponentReference) \
	{ \
		P_GET_OBJECT(UMeshComponent,Z_Param_SweepShapeMeshComponentRef); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SetSweepShapeComponentReference(Z_Param_SweepShapeMeshComponentRef); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSprungComponentReference) \
	{ \
		P_GET_OBJECT(UMeshComponent,Z_Param_SprungMeshComponentRef); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SetSprungComponentReference(Z_Param_SprungMeshComponentRef); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWheelHubPosition) \
	{ \
		P_GET_UBOOL(Z_Param_bInWorldSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetWheelHubPosition(Z_Param_bInWorldSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetContactData) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_bPointActive); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ForceAtPoint); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PointLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_SurfaceNormal); \
		P_GET_OBJECT_REF(UPhysicalMaterial,Z_Param_Out_SurfacePhysicalMaterial); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_SurfaceVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetContactData(Z_Param_Out_bPointActive,Z_Param_Out_ForceAtPoint,Z_Param_Out_PointLocation,Z_Param_Out_SurfaceNormal,Z_Param_Out_SurfacePhysicalMaterial,Z_Param_Out_SurfaceVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSuspensionForce) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Magnitude); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldSpace); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LocalSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetSuspensionForce(Z_Param_Out_Magnitude,Z_Param_Out_WorldSpace,Z_Param_Out_LocalSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleDebugMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ToggleDebugMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitialize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Initialize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPhysicsUpdate) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PhysicsUpdate(Z_Param_Out_DeltaTime); \
		P_NATIVE_END; \
	}


#define FDPTank_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h_115_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMMTSuspensionStack(); \
	friend MMT_API class UClass* Z_Construct_UClass_UMMTSuspensionStack(); \
public: \
	DECLARE_CLASS(UMMTSuspensionStack, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MMT"), NO_API) \
	DECLARE_SERIALIZER(UMMTSuspensionStack) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FDPTank_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h_115_INCLASS \
private: \
	static void StaticRegisterNativesUMMTSuspensionStack(); \
	friend MMT_API class UClass* Z_Construct_UClass_UMMTSuspensionStack(); \
public: \
	DECLARE_CLASS(UMMTSuspensionStack, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MMT"), NO_API) \
	DECLARE_SERIALIZER(UMMTSuspensionStack) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FDPTank_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h_115_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMMTSuspensionStack(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMMTSuspensionStack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMMTSuspensionStack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMMTSuspensionStack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMMTSuspensionStack(UMMTSuspensionStack&&); \
	NO_API UMMTSuspensionStack(const UMMTSuspensionStack&); \
public:


#define FDPTank_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h_115_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMMTSuspensionStack(UMMTSuspensionStack&&); \
	NO_API UMMTSuspensionStack(const UMMTSuspensionStack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMMTSuspensionStack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMMTSuspensionStack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMMTSuspensionStack)


#define FDPTank_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h_115_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ParentComponentRef() { return STRUCT_OFFSET(UMMTSuspensionStack, ParentComponentRef); } \
	FORCEINLINE static uint32 __PPO__SprungMeshComponent() { return STRUCT_OFFSET(UMMTSuspensionStack, SprungMeshComponent); } \
	FORCEINLINE static uint32 __PPO__bSprungMeshComponentSetManually() { return STRUCT_OFFSET(UMMTSuspensionStack, bSprungMeshComponentSetManually); } \
	FORCEINLINE static uint32 __PPO__SweepShapeMeshComponent() { return STRUCT_OFFSET(UMMTSuspensionStack, SweepShapeMeshComponent); } \
	FORCEINLINE static uint32 __PPO__bSweepShapeMeshComponentSetManually() { return STRUCT_OFFSET(UMMTSuspensionStack, bSweepShapeMeshComponentSetManually); } \
	FORCEINLINE static uint32 __PPO__ComponentName() { return STRUCT_OFFSET(UMMTSuspensionStack, ComponentName); } \
	FORCEINLINE static uint32 __PPO__ComponentsParentName() { return STRUCT_OFFSET(UMMTSuspensionStack, ComponentsParentName); } \
	FORCEINLINE static uint32 __PPO__SpringMaxLenght() { return STRUCT_OFFSET(UMMTSuspensionStack, SpringMaxLenght); } \
	FORCEINLINE static uint32 __PPO__SpringOffsetTopAdjusted() { return STRUCT_OFFSET(UMMTSuspensionStack, SpringOffsetTopAdjusted); } \
	FORCEINLINE static uint32 __PPO__SpringOffsetBottomAdjusted() { return STRUCT_OFFSET(UMMTSuspensionStack, SpringOffsetBottomAdjusted); } \
	FORCEINLINE static uint32 __PPO__ReferenceFrameTransform() { return STRUCT_OFFSET(UMMTSuspensionStack, ReferenceFrameTransform); } \
	FORCEINLINE static uint32 __PPO__SpringDirectionLocal() { return STRUCT_OFFSET(UMMTSuspensionStack, SpringDirectionLocal); } \
	FORCEINLINE static uint32 __PPO__bWarningMessageDisplayed() { return STRUCT_OFFSET(UMMTSuspensionStack, bWarningMessageDisplayed); } \
	FORCEINLINE static uint32 __PPO__WheelHubPositionLS() { return STRUCT_OFFSET(UMMTSuspensionStack, WheelHubPositionLS); } \
	FORCEINLINE static uint32 __PPO__PreviousSpringLenght() { return STRUCT_OFFSET(UMMTSuspensionStack, PreviousSpringLenght); } \
	FORCEINLINE static uint32 __PPO__SuspensionForceMagnitude() { return STRUCT_OFFSET(UMMTSuspensionStack, SuspensionForceMagnitude); } \
	FORCEINLINE static uint32 __PPO__SuspensionForceLS() { return STRUCT_OFFSET(UMMTSuspensionStack, SuspensionForceLS); } \
	FORCEINLINE static uint32 __PPO__SuspensionForceWS() { return STRUCT_OFFSET(UMMTSuspensionStack, SuspensionForceWS); } \
	FORCEINLINE static uint32 __PPO__SuspensionForceScale() { return STRUCT_OFFSET(UMMTSuspensionStack, SuspensionForceScale); } \
	FORCEINLINE static uint32 __PPO__CompressionRatio() { return STRUCT_OFFSET(UMMTSuspensionStack, CompressionRatio); } \
	FORCEINLINE static uint32 __PPO__LineTraceOffsetTopLS() { return STRUCT_OFFSET(UMMTSuspensionStack, LineTraceOffsetTopLS); } \
	FORCEINLINE static uint32 __PPO__LineTraceOffsetBottomLS() { return STRUCT_OFFSET(UMMTSuspensionStack, LineTraceOffsetBottomLS); } \
	FORCEINLINE static uint32 __PPO__TracedHubLocation() { return STRUCT_OFFSET(UMMTSuspensionStack, TracedHubLocation); } \
	FORCEINLINE static uint32 __PPO__ShapeSweepLocation() { return STRUCT_OFFSET(UMMTSuspensionStack, ShapeSweepLocation); } \
	FORCEINLINE static uint32 __PPO__bContactPointActive() { return STRUCT_OFFSET(UMMTSuspensionStack, bContactPointActive); } \
	FORCEINLINE static uint32 __PPO__ContactInducedVelocity() { return STRUCT_OFFSET(UMMTSuspensionStack, ContactInducedVelocity); } \
	FORCEINLINE static uint32 __PPO__ContactForceAtPoint() { return STRUCT_OFFSET(UMMTSuspensionStack, ContactForceAtPoint); } \
	FORCEINLINE static uint32 __PPO__ContactPointLocation() { return STRUCT_OFFSET(UMMTSuspensionStack, ContactPointLocation); } \
	FORCEINLINE static uint32 __PPO__ContactPointNormal() { return STRUCT_OFFSET(UMMTSuspensionStack, ContactPointNormal); } \
	FORCEINLINE static uint32 __PPO__ContactPhysicalMaterial() { return STRUCT_OFFSET(UMMTSuspensionStack, ContactPhysicalMaterial); }


#define FDPTank_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h_112_PROLOG
#define FDPTank_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h_115_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FDPTank_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h_115_PRIVATE_PROPERTY_OFFSET \
	FDPTank_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h_115_RPC_WRAPPERS \
	FDPTank_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h_115_INCLASS \
	FDPTank_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h_115_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FDPTank_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h_115_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FDPTank_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h_115_PRIVATE_PROPERTY_OFFSET \
	FDPTank_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	FDPTank_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h_115_INCLASS_NO_PURE_DECLS \
	FDPTank_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h_115_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FDPTank_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h


#define FOREACH_ENUM_ESUSPENSIONSIMMODE(op) \
	op(ESuspensionSimMode::RayCheck) \
	op(ESuspensionSimMode::SphereCheck) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
