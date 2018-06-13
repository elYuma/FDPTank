// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/MMTPluginPCH.h"
#include "Public/MMTPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTPawn() {}
// Cross Module References
	MMT_API UClass* Z_Construct_UClass_AMMTPawn_NoRegister();
	MMT_API UClass* Z_Construct_UClass_AMMTPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_MMT();
	MMT_API UFunction* Z_Construct_UFunction_AMMTPawn_MMTAfterPhysicsTick();
	MMT_API UFunction* Z_Construct_UFunction_AMMTPawn_MMTGetTransformThisPawn();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	MMT_API UFunction* Z_Construct_UFunction_AMMTPawn_MMTPhysicsTick();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
	static FName NAME_AMMTPawn_MMTAfterPhysicsTick = FName(TEXT("MMTAfterPhysicsTick"));
	void AMMTPawn::MMTAfterPhysicsTick(float DeltaTime)
	{
		MMTPawn_eventMMTAfterPhysicsTick_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_AMMTPawn_MMTAfterPhysicsTick),&Parms);
	}
	static FName NAME_AMMTPawn_MMTPhysicsTick = FName(TEXT("MMTPhysicsTick"));
	void AMMTPawn::MMTPhysicsTick(float SubstepDeltaTime)
	{
		MMTPawn_eventMMTPhysicsTick_Parms Parms;
		Parms.SubstepDeltaTime=SubstepDeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_AMMTPawn_MMTPhysicsTick),&Parms);
	}
	void AMMTPawn::StaticRegisterNativesAMMTPawn()
	{
		UClass* Class = AMMTPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MMTAfterPhysicsTick", (Native)&AMMTPawn::execMMTAfterPhysicsTick },
			{ "MMTGetTransformThisPawn", (Native)&AMMTPawn::execMMTGetTransformThisPawn },
			{ "MMTPhysicsTick", (Native)&AMMTPawn::execMMTPhysicsTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AMMTPawn_MMTAfterPhysicsTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MMTPawn_eventMMTAfterPhysicsTick_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeltaTime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT" },
				{ "DisplayName", "MMT Post-Physics Tick" },
				{ "ModuleRelativePath", "Public/MMTPawn.h" },
				{ "ToolTip", "This event is called ones per frame after physics update." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMMTPawn, "MMTAfterPhysicsTick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(MMTPawn_eventMMTAfterPhysicsTick_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMMTPawn_MMTGetTransformThisPawn()
	{
		struct MMTPawn_eventMMTGetTransformThisPawn_Parms
		{
			FTransform ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MMTPawn_eventMMTGetTransformThisPawn_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT physics sub-stepping" },
				{ "DisplayName", "MMT Get Transform -Pawn" },
				{ "ModuleRelativePath", "Public/MMTPawn.h" },
				{ "ToolTip", "Get world-space transform of this pawn. BodyInstance is used to retrieve transform, its up-to date with physics sub-stepping.\n@return                 Pawn's transform in world space" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMMTPawn, "MMTGetTransformThisPawn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(MMTPawn_eventMMTGetTransformThisPawn_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMMTPawn_MMTPhysicsTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SubstepDeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "SubstepDeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MMTPawn_eventMMTPhysicsTick_Parms, SubstepDeltaTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubstepDeltaTime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT physics sub-stepping" },
				{ "DisplayName", "MMT Physics Tick" },
				{ "ModuleRelativePath", "Public/MMTPawn.h" },
				{ "ToolTip", "This event is called on every physics tick, including sub-steps." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMMTPawn, "MMTPhysicsTick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(MMTPawn_eventMMTPhysicsTick_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMMTPawn_NoRegister()
	{
		return AMMTPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_AMMTPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_MMT,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AMMTPawn_MMTAfterPhysicsTick, "MMTAfterPhysicsTick" }, // 637076671
				{ &Z_Construct_UFunction_AMMTPawn_MMTGetTransformThisPawn, "MMTGetTransformThisPawn" }, // 719566918
				{ &Z_Construct_UFunction_AMMTPawn_MMTPhysicsTick, "MMTPhysicsTick" }, // 1097718712
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "MMTPawn.h" },
				{ "ModuleRelativePath", "Public/MMTPawn.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnRootComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MMTPawn.h" },
				{ "ToolTip", "Reference to MMTPawn root component" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnRootComponent = { UE4CodeGen_Private::EPropertyClass::Object, "PawnRootComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080008, 1, nullptr, STRUCT_OFFSET(AMMTPawn, PawnRootComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_PawnRootComponent_MetaData, ARRAY_COUNT(NewProp_PawnRootComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MMTPawnTransform_MetaData[] = {
				{ "Category", "MMTPawn" },
				{ "ModuleRelativePath", "Public/MMTPawn.h" },
				{ "ToolTip", "Pawn transform that is updated during sub-stepping" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MMTPawnTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "MMTPawnTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(AMMTPawn, MMTPawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_MMTPawnTransform_MetaData, ARRAY_COUNT(NewProp_MMTPawnTransform_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PawnRootComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MMTPawnTransform,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMMTPawn>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMMTPawn::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(AMMTPawn, 1145813529);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMMTPawn(Z_Construct_UClass_AMMTPawn, &AMMTPawn::StaticClass, TEXT("/Script/MMT"), TEXT("AMMTPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMMTPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
