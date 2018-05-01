// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UPhysicalMaterial;
#ifdef MMT_MMTFrictionComponent_generated_h
#error "MMTFrictionComponent.generated.h already included, missing '#pragma once' in MMTFrictionComponent.h"
#endif
#define MMT_MMTFrictionComponent_generated_h

#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTFrictionComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFrictionLimit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetFrictionLimit(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFrictionForce) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetFrictionForce(); \
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
	DECLARE_FUNCTION(execPhysicsUpdate) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NumberOfContactPoints); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_DeltaTime); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NormalizedReactionForce); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_RollingFrictionForce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->PhysicsUpdate(Z_Param_Out_NumberOfContactPoints,Z_Param_Out_DeltaTime,Z_Param_Out_NormalizedReactionForce,Z_Param_Out_RollingFrictionForce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFrictionSurfaceSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FrictionSurfaceSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetFrictionSurfaceSpeed(Z_Param_FrictionSurfaceSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFrictionSurfaceVelocity) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_FrictionSurfaceVel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetFrictionSurfaceVelocity(Z_Param_FrictionSurfaceVel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetFrictionPoints) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetFrictionPoints(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsFrictionPointActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsFrictionPointActive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterFrictionPoint) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ImpactForceOrImpulseAtPoint); \
		P_GET_UBOOL(Z_Param_TreatAsImpulse); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ContactPointLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ContactPointNormal); \
		P_GET_OBJECT(UPhysicalMaterial,Z_Param_PhysicalMaterial); \
		P_GET_STRUCT(FVector,Z_Param_InducedVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RegisterFrictionPoint(Z_Param_Out_ImpactForceOrImpulseAtPoint,Z_Param_TreatAsImpulse,Z_Param_Out_ContactPointLocation,Z_Param_Out_ContactPointNormal,Z_Param_PhysicalMaterial,Z_Param_InducedVelocity); \
		P_NATIVE_END; \
	}


#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTFrictionComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFrictionLimit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetFrictionLimit(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFrictionForce) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetFrictionForce(); \
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
	DECLARE_FUNCTION(execPhysicsUpdate) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NumberOfContactPoints); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_DeltaTime); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NormalizedReactionForce); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_RollingFrictionForce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->PhysicsUpdate(Z_Param_Out_NumberOfContactPoints,Z_Param_Out_DeltaTime,Z_Param_Out_NormalizedReactionForce,Z_Param_Out_RollingFrictionForce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFrictionSurfaceSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FrictionSurfaceSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetFrictionSurfaceSpeed(Z_Param_FrictionSurfaceSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFrictionSurfaceVelocity) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_FrictionSurfaceVel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetFrictionSurfaceVelocity(Z_Param_FrictionSurfaceVel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetFrictionPoints) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetFrictionPoints(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsFrictionPointActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsFrictionPointActive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterFrictionPoint) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ImpactForceOrImpulseAtPoint); \
		P_GET_UBOOL(Z_Param_TreatAsImpulse); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ContactPointLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ContactPointNormal); \
		P_GET_OBJECT(UPhysicalMaterial,Z_Param_PhysicalMaterial); \
		P_GET_STRUCT(FVector,Z_Param_InducedVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RegisterFrictionPoint(Z_Param_Out_ImpactForceOrImpulseAtPoint,Z_Param_TreatAsImpulse,Z_Param_Out_ContactPointLocation,Z_Param_Out_ContactPointNormal,Z_Param_PhysicalMaterial,Z_Param_InducedVelocity); \
		P_NATIVE_END; \
	}


#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTFrictionComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMMTFrictionComponent(); \
	friend MMT_API class UClass* Z_Construct_UClass_UMMTFrictionComponent(); \
public: \
	DECLARE_CLASS(UMMTFrictionComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MMT"), NO_API) \
	DECLARE_SERIALIZER(UMMTFrictionComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTFrictionComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMMTFrictionComponent(); \
	friend MMT_API class UClass* Z_Construct_UClass_UMMTFrictionComponent(); \
public: \
	DECLARE_CLASS(UMMTFrictionComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MMT"), NO_API) \
	DECLARE_SERIALIZER(UMMTFrictionComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTFrictionComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMMTFrictionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMMTFrictionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMMTFrictionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMMTFrictionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMMTFrictionComponent(UMMTFrictionComponent&&); \
	NO_API UMMTFrictionComponent(const UMMTFrictionComponent&); \
public:


#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTFrictionComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMMTFrictionComponent(UMMTFrictionComponent&&); \
	NO_API UMMTFrictionComponent(const UMMTFrictionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMMTFrictionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMMTFrictionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMMTFrictionComponent)


#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTFrictionComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EffectedComponentMesh() { return STRUCT_OFFSET(UMMTFrictionComponent, EffectedComponentMesh); } \
	FORCEINLINE static uint32 __PPO__FrictionSurfaceVelocity() { return STRUCT_OFFSET(UMMTFrictionComponent, FrictionSurfaceVelocity); } \
	FORCEINLINE static uint32 __PPO__FrictionSurfaceSpd() { return STRUCT_OFFSET(UMMTFrictionComponent, FrictionSurfaceSpd); } \
	FORCEINLINE static uint32 __PPO__ContactPointsData() { return STRUCT_OFFSET(UMMTFrictionComponent, ContactPointsData); } \
	FORCEINLINE static uint32 __PPO__ReferenceFrameTransform() { return STRUCT_OFFSET(UMMTFrictionComponent, ReferenceFrameTransform); } \
	FORCEINLINE static uint32 __PPO__PrevRelativeVelocityAtPoint() { return STRUCT_OFFSET(UMMTFrictionComponent, PrevRelativeVelocityAtPoint); } \
	FORCEINLINE static uint32 __PPO__LastFrictionForce() { return STRUCT_OFFSET(UMMTFrictionComponent, LastFrictionForce); } \
	FORCEINLINE static uint32 __PPO__LastFrictionLimit() { return STRUCT_OFFSET(UMMTFrictionComponent, LastFrictionLimit); } \
	FORCEINLINE static uint32 __PPO__PrevAngularVelocity() { return STRUCT_OFFSET(UMMTFrictionComponent, PrevAngularVelocity); } \
	FORCEINLINE static uint32 __PPO__PrevLinearVelocity() { return STRUCT_OFFSET(UMMTFrictionComponent, PrevLinearVelocity); }


#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTFrictionComponent_h_14_PROLOG
#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTFrictionComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTFrictionComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTFrictionComponent_h_17_RPC_WRAPPERS \
	MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTFrictionComponent_h_17_INCLASS \
	MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTFrictionComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTFrictionComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTFrictionComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTFrictionComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTFrictionComponent_h_17_INCLASS_NO_PURE_DECLS \
	MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTFrictionComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTFrictionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
