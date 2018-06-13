// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
struct FRotator;
#ifdef MMT_MMTTrackAnimationComponent_generated_h
#error "MMTTrackAnimationComponent.generated.h already included, missing '#pragma once' in MMTTrackAnimationComponent.h"
#endif
#define MMT_MMTTrackAnimationComponent_generated_h

#define FDPTank_Plugins_MMT_Source_MMT_Public_MMTTrackAnimationComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTrackAngularPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetTrackAngularPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSecondaryTreadsTransformArray) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FTransform>*)Z_Param__Result=this->GetSecondaryTreadsTransformArray(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTreadsTransformArray) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FTransform>*)Z_Param__Result=this->GetTreadsTransformArray(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBuildTrackMeshAndSpline) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BuildTrackMeshAndSpline(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateTrackAnimation) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_DeltaTime); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_TreadAngularPosition); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_TrackPartsAngularPosition); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_TrackPartsRotator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateTrackAnimation(Z_Param_Out_DeltaTime,Z_Param_Out_TreadAngularPosition,Z_Param_Out_TrackPartsAngularPosition,Z_Param_Out_TrackPartsRotator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTrackPartsAngularVelocity) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_AngularVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetTrackPartsAngularVelocity(Z_Param_Out_AngularVelocity); \
		P_NATIVE_END; \
	}


#define FDPTank_Plugins_MMT_Source_MMT_Public_MMTTrackAnimationComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTrackAngularPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetTrackAngularPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSecondaryTreadsTransformArray) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FTransform>*)Z_Param__Result=this->GetSecondaryTreadsTransformArray(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTreadsTransformArray) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FTransform>*)Z_Param__Result=this->GetTreadsTransformArray(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBuildTrackMeshAndSpline) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BuildTrackMeshAndSpline(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateTrackAnimation) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_DeltaTime); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_TreadAngularPosition); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_TrackPartsAngularPosition); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_TrackPartsRotator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateTrackAnimation(Z_Param_Out_DeltaTime,Z_Param_Out_TreadAngularPosition,Z_Param_Out_TrackPartsAngularPosition,Z_Param_Out_TrackPartsRotator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTrackPartsAngularVelocity) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_AngularVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetTrackPartsAngularVelocity(Z_Param_Out_AngularVelocity); \
		P_NATIVE_END; \
	}


#define FDPTank_Plugins_MMT_Source_MMT_Public_MMTTrackAnimationComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMMTTrackAnimationComponent(); \
	friend MMT_API class UClass* Z_Construct_UClass_UMMTTrackAnimationComponent(); \
public: \
	DECLARE_CLASS(UMMTTrackAnimationComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MMT"), NO_API) \
	DECLARE_SERIALIZER(UMMTTrackAnimationComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FDPTank_Plugins_MMT_Source_MMT_Public_MMTTrackAnimationComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMMTTrackAnimationComponent(); \
	friend MMT_API class UClass* Z_Construct_UClass_UMMTTrackAnimationComponent(); \
public: \
	DECLARE_CLASS(UMMTTrackAnimationComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MMT"), NO_API) \
	DECLARE_SERIALIZER(UMMTTrackAnimationComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FDPTank_Plugins_MMT_Source_MMT_Public_MMTTrackAnimationComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMMTTrackAnimationComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMMTTrackAnimationComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMMTTrackAnimationComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMMTTrackAnimationComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMMTTrackAnimationComponent(UMMTTrackAnimationComponent&&); \
	NO_API UMMTTrackAnimationComponent(const UMMTTrackAnimationComponent&); \
public:


#define FDPTank_Plugins_MMT_Source_MMT_Public_MMTTrackAnimationComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMMTTrackAnimationComponent(UMMTTrackAnimationComponent&&); \
	NO_API UMMTTrackAnimationComponent(const UMMTTrackAnimationComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMMTTrackAnimationComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMMTTrackAnimationComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMMTTrackAnimationComponent)


#define FDPTank_Plugins_MMT_Source_MMT_Public_MMTTrackAnimationComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SprocketsIdlersRoadwheelsComponents() { return STRUCT_OFFSET(UMMTTrackAnimationComponent, SprocketsIdlersRoadwheelsComponents); } \
	FORCEINLINE static uint32 __PPO__TrackSplineComponent() { return STRUCT_OFFSET(UMMTTrackAnimationComponent, TrackSplineComponent); } \
	FORCEINLINE static uint32 __PPO__TreadsInstancedMeshComponent() { return STRUCT_OFFSET(UMMTTrackAnimationComponent, TreadsInstancedMeshComponent); } \
	FORCEINLINE static uint32 __PPO__SecondTreadsInstancedMeshComponent() { return STRUCT_OFFSET(UMMTTrackAnimationComponent, SecondTreadsInstancedMeshComponent); } \
	FORCEINLINE static uint32 __PPO__TrackPartsAngularVelocityDegrees() { return STRUCT_OFFSET(UMMTTrackAnimationComponent, TrackPartsAngularVelocityDegrees); } \
	FORCEINLINE static uint32 __PPO__TreadFractionalTravel() { return STRUCT_OFFSET(UMMTTrackAnimationComponent, TreadFractionalTravel); } \
	FORCEINLINE static uint32 __PPO__PartsRotationDegrees() { return STRUCT_OFFSET(UMMTTrackAnimationComponent, PartsRotationDegrees); } \
	FORCEINLINE static uint32 __PPO__TreadOffsetCount() { return STRUCT_OFFSET(UMMTTrackAnimationComponent, TreadOffsetCount); } \
	FORCEINLINE static uint32 __PPO__PartsOffsetCount() { return STRUCT_OFFSET(UMMTTrackAnimationComponent, PartsOffsetCount); } \
	FORCEINLINE static uint32 __PPO__NumberOfFullOffsets() { return STRUCT_OFFSET(UMMTTrackAnimationComponent, NumberOfFullOffsets); } \
	FORCEINLINE static uint32 __PPO__TreadsTransforms() { return STRUCT_OFFSET(UMMTTrackAnimationComponent, TreadsTransforms); } \
	FORCEINLINE static uint32 __PPO__SecondaryTreadsTransforms() { return STRUCT_OFFSET(UMMTTrackAnimationComponent, SecondaryTreadsTransforms); } \
	FORCEINLINE static uint32 __PPO__TreadAllignedTransformPreviousUpdate() { return STRUCT_OFFSET(UMMTTrackAnimationComponent, TreadAllignedTransformPreviousUpdate); } \
	FORCEINLINE static uint32 __PPO__SecondaryTreadAllignedTransformPreviousUpdate() { return STRUCT_OFFSET(UMMTTrackAnimationComponent, SecondaryTreadAllignedTransformPreviousUpdate); }


#define FDPTank_Plugins_MMT_Source_MMT_Public_MMTTrackAnimationComponent_h_14_PROLOG
#define FDPTank_Plugins_MMT_Source_MMT_Public_MMTTrackAnimationComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FDPTank_Plugins_MMT_Source_MMT_Public_MMTTrackAnimationComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	FDPTank_Plugins_MMT_Source_MMT_Public_MMTTrackAnimationComponent_h_17_RPC_WRAPPERS \
	FDPTank_Plugins_MMT_Source_MMT_Public_MMTTrackAnimationComponent_h_17_INCLASS \
	FDPTank_Plugins_MMT_Source_MMT_Public_MMTTrackAnimationComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FDPTank_Plugins_MMT_Source_MMT_Public_MMTTrackAnimationComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FDPTank_Plugins_MMT_Source_MMT_Public_MMTTrackAnimationComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	FDPTank_Plugins_MMT_Source_MMT_Public_MMTTrackAnimationComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FDPTank_Plugins_MMT_Source_MMT_Public_MMTTrackAnimationComponent_h_17_INCLASS_NO_PURE_DECLS \
	FDPTank_Plugins_MMT_Source_MMT_Public_MMTTrackAnimationComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FDPTank_Plugins_MMT_Source_MMT_Public_MMTTrackAnimationComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
