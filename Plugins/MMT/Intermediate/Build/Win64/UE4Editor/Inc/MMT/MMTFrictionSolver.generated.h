// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MMT_MMTFrictionSolver_generated_h
#error "MMTFrictionSolver.generated.h already included, missing '#pragma once' in MMTFrictionSolver.h"
#endif
#define MMT_MMTFrictionSolver_generated_h

#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTFrictionSolver_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitialize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Initialize(); \
		P_NATIVE_END; \
	}


#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTFrictionSolver_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitialize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Initialize(); \
		P_NATIVE_END; \
	}


#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTFrictionSolver_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMMTFrictionSolver(); \
	friend MMT_API class UClass* Z_Construct_UClass_UMMTFrictionSolver(); \
public: \
	DECLARE_CLASS(UMMTFrictionSolver, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MMT"), NO_API) \
	DECLARE_SERIALIZER(UMMTFrictionSolver) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTFrictionSolver_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMMTFrictionSolver(); \
	friend MMT_API class UClass* Z_Construct_UClass_UMMTFrictionSolver(); \
public: \
	DECLARE_CLASS(UMMTFrictionSolver, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MMT"), NO_API) \
	DECLARE_SERIALIZER(UMMTFrictionSolver) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTFrictionSolver_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMMTFrictionSolver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMMTFrictionSolver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMMTFrictionSolver); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMMTFrictionSolver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMMTFrictionSolver(UMMTFrictionSolver&&); \
	NO_API UMMTFrictionSolver(const UMMTFrictionSolver&); \
public:


#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTFrictionSolver_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMMTFrictionSolver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMMTFrictionSolver(UMMTFrictionSolver&&); \
	NO_API UMMTFrictionSolver(const UMMTFrictionSolver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMMTFrictionSolver); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMMTFrictionSolver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMMTFrictionSolver)


#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTFrictionSolver_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bDisabled() { return STRUCT_OFFSET(UMMTFrictionSolver, bDisabled); } \
	FORCEINLINE static uint32 __PPO__bDebugMode() { return STRUCT_OFFSET(UMMTFrictionSolver, bDebugMode); } \
	FORCEINLINE static uint32 __PPO__ParentComponentRef() { return STRUCT_OFFSET(UMMTFrictionSolver, ParentComponentRef); } \
	FORCEINLINE static uint32 __PPO__EffectedComponentMesh() { return STRUCT_OFFSET(UMMTFrictionSolver, EffectedComponentMesh); } \
	FORCEINLINE static uint32 __PPO__ComponentName() { return STRUCT_OFFSET(UMMTFrictionSolver, ComponentName); } \
	FORCEINLINE static uint32 __PPO__ComponentsParentName() { return STRUCT_OFFSET(UMMTFrictionSolver, ComponentsParentName); } \
	FORCEINLINE static uint32 __PPO__PassivePhysicalSurfaceFrictionCoefficients() { return STRUCT_OFFSET(UMMTFrictionSolver, PassivePhysicalSurfaceFrictionCoefficients); } \
	FORCEINLINE static uint32 __PPO__PassiveFrictionSets() { return STRUCT_OFFSET(UMMTFrictionSolver, PassiveFrictionSets); }


#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTFrictionSolver_h_11_PROLOG
#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTFrictionSolver_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTFrictionSolver_h_14_PRIVATE_PROPERTY_OFFSET \
	MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTFrictionSolver_h_14_RPC_WRAPPERS \
	MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTFrictionSolver_h_14_INCLASS \
	MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTFrictionSolver_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTFrictionSolver_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTFrictionSolver_h_14_PRIVATE_PROPERTY_OFFSET \
	MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTFrictionSolver_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTFrictionSolver_h_14_INCLASS_NO_PURE_DECLS \
	MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTFrictionSolver_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MMT_Content_master_Plugins_MMT_Source_MMT_Public_MMTFrictionSolver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
