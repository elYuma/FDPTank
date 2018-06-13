// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPhysicsConstraintComponent;
struct FVector;
class UActorComponent;
class UInstancedStaticMeshComponent;
class USplineComponent;
class UMeshComponent;
class UPrimitiveComponent;
class AActor;
struct FTransform;
class USceneComponent;
#ifdef MMT_MMTBPFunctionLibrary_generated_h
#error "MMTBPFunctionLibrary.generated.h already included, missing '#pragma once' in MMTBPFunctionLibrary.h"
#endif
#define MMT_MMTBPFunctionLibrary_generated_h

#define FDPTank_Plugins_MMT_Source_MMT_Public_MMTBPFunctionLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetLinearBreakThreshold) \
	{ \
		P_GET_OBJECT(UPhysicsConstraintComponent,Z_Param_Target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LinearBreakThreshold); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMMTBPFunctionLibrary::SetLinearBreakThreshold(Z_Param_Target,Z_Param_LinearBreakThreshold); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMuFromFrictionElipse) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_VelocityDirectionNormalizedWS); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ForwardVectorWS); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MuXStatic); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MuXKinetic); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MuYStatic); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MuYKinetic); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_MuStatic); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_MuKinetic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMMTBPFunctionLibrary::GetMuFromFrictionElipse(Z_Param_Out_VelocityDirectionNormalizedWS,Z_Param_Out_ForwardVectorWS,Z_Param_MuXStatic,Z_Param_MuXKinetic,Z_Param_MuYStatic,Z_Param_MuYKinetic,Z_Param_Out_MuStatic,Z_Param_Out_MuKinetic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstancedStaticMeshComponentReferenceByName) \
	{ \
		P_GET_OBJECT(UActorComponent,Z_Param_Target); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UInstancedStaticMeshComponent**)Z_Param__Result=UMMTBPFunctionLibrary::GetInstancedStaticMeshComponentReferenceByName(Z_Param_Target,Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSplineComponentReferenceByName) \
	{ \
		P_GET_OBJECT(UActorComponent,Z_Param_Target); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USplineComponent**)Z_Param__Result=UMMTBPFunctionLibrary::GetSplineComponentReferenceByName(Z_Param_Target,Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMeshComponentReferenceByName) \
	{ \
		P_GET_OBJECT(UActorComponent,Z_Param_Target); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMeshComponent**)Z_Param__Result=UMMTBPFunctionLibrary::GetMeshComponentReferenceByName(Z_Param_Target,Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMMTSetInertiaTensor) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Target); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InertiaTensor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMMTBPFunctionLibrary::MMTSetInertiaTensor(Z_Param_Target,Z_Param_Out_InertiaTensor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMMTAddTorqueComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Target); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Torque); \
		P_GET_UBOOL(Z_Param_bAccelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMMTBPFunctionLibrary::MMTAddTorqueComponent(Z_Param_Target,Z_Param_Out_Torque,Z_Param_bAccelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMMTAddForceAtLocationComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Target); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Force); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMMTBPFunctionLibrary::MMTAddForceAtLocationComponent(Z_Param_Target,Z_Param_Out_Force,Z_Param_Out_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMMTAddForceComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Target); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Force); \
		P_GET_UBOOL(Z_Param_bAccelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMMTBPFunctionLibrary::MMTAddForceComponent(Z_Param_Target,Z_Param_Out_Force,Z_Param_bAccelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMMTGetTransformActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UMMTBPFunctionLibrary::MMTGetTransformActor(Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMMTSetTransformComponent) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Target); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMMTBPFunctionLibrary::MMTSetTransformComponent(Z_Param_Target,Z_Param_Out_Transform,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMMTGetTransformComponent) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Target); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UMMTBPFunctionLibrary::MMTGetTransformComponent(Z_Param_Target,Z_Param_InSocketName); \
		P_NATIVE_END; \
	}


#define FDPTank_Plugins_MMT_Source_MMT_Public_MMTBPFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetLinearBreakThreshold) \
	{ \
		P_GET_OBJECT(UPhysicsConstraintComponent,Z_Param_Target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LinearBreakThreshold); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMMTBPFunctionLibrary::SetLinearBreakThreshold(Z_Param_Target,Z_Param_LinearBreakThreshold); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMuFromFrictionElipse) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_VelocityDirectionNormalizedWS); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ForwardVectorWS); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MuXStatic); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MuXKinetic); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MuYStatic); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MuYKinetic); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_MuStatic); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_MuKinetic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMMTBPFunctionLibrary::GetMuFromFrictionElipse(Z_Param_Out_VelocityDirectionNormalizedWS,Z_Param_Out_ForwardVectorWS,Z_Param_MuXStatic,Z_Param_MuXKinetic,Z_Param_MuYStatic,Z_Param_MuYKinetic,Z_Param_Out_MuStatic,Z_Param_Out_MuKinetic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstancedStaticMeshComponentReferenceByName) \
	{ \
		P_GET_OBJECT(UActorComponent,Z_Param_Target); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UInstancedStaticMeshComponent**)Z_Param__Result=UMMTBPFunctionLibrary::GetInstancedStaticMeshComponentReferenceByName(Z_Param_Target,Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSplineComponentReferenceByName) \
	{ \
		P_GET_OBJECT(UActorComponent,Z_Param_Target); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USplineComponent**)Z_Param__Result=UMMTBPFunctionLibrary::GetSplineComponentReferenceByName(Z_Param_Target,Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMeshComponentReferenceByName) \
	{ \
		P_GET_OBJECT(UActorComponent,Z_Param_Target); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMeshComponent**)Z_Param__Result=UMMTBPFunctionLibrary::GetMeshComponentReferenceByName(Z_Param_Target,Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMMTSetInertiaTensor) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Target); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InertiaTensor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMMTBPFunctionLibrary::MMTSetInertiaTensor(Z_Param_Target,Z_Param_Out_InertiaTensor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMMTAddTorqueComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Target); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Torque); \
		P_GET_UBOOL(Z_Param_bAccelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMMTBPFunctionLibrary::MMTAddTorqueComponent(Z_Param_Target,Z_Param_Out_Torque,Z_Param_bAccelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMMTAddForceAtLocationComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Target); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Force); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMMTBPFunctionLibrary::MMTAddForceAtLocationComponent(Z_Param_Target,Z_Param_Out_Force,Z_Param_Out_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMMTAddForceComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Target); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Force); \
		P_GET_UBOOL(Z_Param_bAccelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMMTBPFunctionLibrary::MMTAddForceComponent(Z_Param_Target,Z_Param_Out_Force,Z_Param_bAccelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMMTGetTransformActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UMMTBPFunctionLibrary::MMTGetTransformActor(Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMMTSetTransformComponent) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Target); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMMTBPFunctionLibrary::MMTSetTransformComponent(Z_Param_Target,Z_Param_Out_Transform,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMMTGetTransformComponent) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Target); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UMMTBPFunctionLibrary::MMTGetTransformComponent(Z_Param_Target,Z_Param_InSocketName); \
		P_NATIVE_END; \
	}


#define FDPTank_Plugins_MMT_Source_MMT_Public_MMTBPFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMMTBPFunctionLibrary(); \
	friend MMT_API class UClass* Z_Construct_UClass_UMMTBPFunctionLibrary(); \
public: \
	DECLARE_CLASS(UMMTBPFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MMT"), NO_API) \
	DECLARE_SERIALIZER(UMMTBPFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FDPTank_Plugins_MMT_Source_MMT_Public_MMTBPFunctionLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMMTBPFunctionLibrary(); \
	friend MMT_API class UClass* Z_Construct_UClass_UMMTBPFunctionLibrary(); \
public: \
	DECLARE_CLASS(UMMTBPFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MMT"), NO_API) \
	DECLARE_SERIALIZER(UMMTBPFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FDPTank_Plugins_MMT_Source_MMT_Public_MMTBPFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMMTBPFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMMTBPFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMMTBPFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMMTBPFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMMTBPFunctionLibrary(UMMTBPFunctionLibrary&&); \
	NO_API UMMTBPFunctionLibrary(const UMMTBPFunctionLibrary&); \
public:


#define FDPTank_Plugins_MMT_Source_MMT_Public_MMTBPFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMMTBPFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMMTBPFunctionLibrary(UMMTBPFunctionLibrary&&); \
	NO_API UMMTBPFunctionLibrary(const UMMTBPFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMMTBPFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMMTBPFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMMTBPFunctionLibrary)


#define FDPTank_Plugins_MMT_Source_MMT_Public_MMTBPFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define FDPTank_Plugins_MMT_Source_MMT_Public_MMTBPFunctionLibrary_h_12_PROLOG
#define FDPTank_Plugins_MMT_Source_MMT_Public_MMTBPFunctionLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FDPTank_Plugins_MMT_Source_MMT_Public_MMTBPFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	FDPTank_Plugins_MMT_Source_MMT_Public_MMTBPFunctionLibrary_h_15_RPC_WRAPPERS \
	FDPTank_Plugins_MMT_Source_MMT_Public_MMTBPFunctionLibrary_h_15_INCLASS \
	FDPTank_Plugins_MMT_Source_MMT_Public_MMTBPFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FDPTank_Plugins_MMT_Source_MMT_Public_MMTBPFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FDPTank_Plugins_MMT_Source_MMT_Public_MMTBPFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	FDPTank_Plugins_MMT_Source_MMT_Public_MMTBPFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FDPTank_Plugins_MMT_Source_MMT_Public_MMTBPFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FDPTank_Plugins_MMT_Source_MMT_Public_MMTBPFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MMTBPFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FDPTank_Plugins_MMT_Source_MMT_Public_MMTBPFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
