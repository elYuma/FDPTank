// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMeshComponent;
#ifdef MMT_MMTTrack_generated_h
#error "MMTTrack.generated.h already included, missing '#pragma once' in MMTTrack.h"
#endif
#define MMT_MMTTrack_generated_h

#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTTrack_h_35_GENERATED_BODY \
	friend MMT_API class UScriptStruct* Z_Construct_UScriptStruct_FMMTTrackFrictionSettings(); \
	MMT_API static class UScriptStruct* StaticStruct();


#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTTrack_h_14_GENERATED_BODY \
	friend MMT_API class UScriptStruct* Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction(); \
	MMT_API static class UScriptStruct* StaticStruct();


#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTTrack_h_65_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToggleDebugMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ToggleDebugMode(); \
		P_NATIVE_END; \
	} \
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
	DECLARE_FUNCTION(execSetEffectedMeshReference) \
	{ \
		P_GET_OBJECT(UMeshComponent,Z_Param_EffectedMeshComponentRef); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetEffectedMeshReference(Z_Param_EffectedMeshComponentRef); \
		P_NATIVE_END; \
	}


#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTTrack_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToggleDebugMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ToggleDebugMode(); \
		P_NATIVE_END; \
	} \
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
	DECLARE_FUNCTION(execSetEffectedMeshReference) \
	{ \
		P_GET_OBJECT(UMeshComponent,Z_Param_EffectedMeshComponentRef); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetEffectedMeshReference(Z_Param_EffectedMeshComponentRef); \
		P_NATIVE_END; \
	}


#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTTrack_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMMTTrack(); \
	friend MMT_API class UClass* Z_Construct_UClass_UMMTTrack(); \
public: \
	DECLARE_CLASS(UMMTTrack, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MMT"), NO_API) \
	DECLARE_SERIALIZER(UMMTTrack) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTTrack_h_65_INCLASS \
private: \
	static void StaticRegisterNativesUMMTTrack(); \
	friend MMT_API class UClass* Z_Construct_UClass_UMMTTrack(); \
public: \
	DECLARE_CLASS(UMMTTrack, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MMT"), NO_API) \
	DECLARE_SERIALIZER(UMMTTrack) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTTrack_h_65_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMMTTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMMTTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMMTTrack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMMTTrack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMMTTrack(UMMTTrack&&); \
	NO_API UMMTTrack(const UMMTTrack&); \
public:


#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTTrack_h_65_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMMTTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMMTTrack(UMMTTrack&&); \
	NO_API UMMTTrack(const UMMTTrack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMMTTrack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMMTTrack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMMTTrack)


#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTTrack_h_65_PRIVATE_PROPERTY_OFFSET
#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTTrack_h_62_PROLOG
#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTTrack_h_65_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTTrack_h_65_PRIVATE_PROPERTY_OFFSET \
	MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTTrack_h_65_RPC_WRAPPERS \
	MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTTrack_h_65_INCLASS \
	MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTTrack_h_65_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTTrack_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTTrack_h_65_PRIVATE_PROPERTY_OFFSET \
	MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTTrack_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTTrack_h_65_INCLASS_NO_PURE_DECLS \
	MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTTrack_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTTrack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
