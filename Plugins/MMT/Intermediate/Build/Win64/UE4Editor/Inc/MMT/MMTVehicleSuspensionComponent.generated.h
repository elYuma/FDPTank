// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMeshComponent;
#ifdef MMT_MMTVehicleSuspensionComponent_generated_h
#error "MMTVehicleSuspensionComponent.generated.h already included, missing '#pragma once' in MMTVehicleSuspensionComponent.h"
#endif
#define MMT_MMTVehicleSuspensionComponent_generated_h

#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTVehicleSuspensionComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdatePhysics) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdatePhysics(Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEffectedComponentMeshReference) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMeshComponent**)Z_Param__Result=this->GetEffectedComponentMeshReference(); \
		P_NATIVE_END; \
	}


#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTVehicleSuspensionComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdatePhysics) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdatePhysics(Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEffectedComponentMeshReference) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMeshComponent**)Z_Param__Result=this->GetEffectedComponentMeshReference(); \
		P_NATIVE_END; \
	}


#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTVehicleSuspensionComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMMTVehicleSuspensionComponent(); \
	friend MMT_API class UClass* Z_Construct_UClass_UMMTVehicleSuspensionComponent(); \
public: \
	DECLARE_CLASS(UMMTVehicleSuspensionComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MMT"), NO_API) \
	DECLARE_SERIALIZER(UMMTVehicleSuspensionComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTVehicleSuspensionComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMMTVehicleSuspensionComponent(); \
	friend MMT_API class UClass* Z_Construct_UClass_UMMTVehicleSuspensionComponent(); \
public: \
	DECLARE_CLASS(UMMTVehicleSuspensionComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MMT"), NO_API) \
	DECLARE_SERIALIZER(UMMTVehicleSuspensionComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTVehicleSuspensionComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMMTVehicleSuspensionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMMTVehicleSuspensionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMMTVehicleSuspensionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMMTVehicleSuspensionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMMTVehicleSuspensionComponent(UMMTVehicleSuspensionComponent&&); \
	NO_API UMMTVehicleSuspensionComponent(const UMMTVehicleSuspensionComponent&); \
public:


#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTVehicleSuspensionComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMMTVehicleSuspensionComponent(UMMTVehicleSuspensionComponent&&); \
	NO_API UMMTVehicleSuspensionComponent(const UMMTVehicleSuspensionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMMTVehicleSuspensionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMMTVehicleSuspensionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMMTVehicleSuspensionComponent)


#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTVehicleSuspensionComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EffectedComponentMesh() { return STRUCT_OFFSET(UMMTVehicleSuspensionComponent, EffectedComponentMesh); } \
	FORCEINLINE static uint32 __PPO__TrackCollection() { return STRUCT_OFFSET(UMMTVehicleSuspensionComponent, TrackCollection); }


#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTVehicleSuspensionComponent_h_11_PROLOG
#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTVehicleSuspensionComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTVehicleSuspensionComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTVehicleSuspensionComponent_h_14_RPC_WRAPPERS \
	MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTVehicleSuspensionComponent_h_14_INCLASS \
	MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTVehicleSuspensionComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTVehicleSuspensionComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTVehicleSuspensionComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTVehicleSuspensionComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTVehicleSuspensionComponent_h_14_INCLASS_NO_PURE_DECLS \
	MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTVehicleSuspensionComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTVehicleSuspensionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
