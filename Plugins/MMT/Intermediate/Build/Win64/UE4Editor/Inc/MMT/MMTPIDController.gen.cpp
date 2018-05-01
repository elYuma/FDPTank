// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/MMTPluginPCH.h"
#include "Public/MMTPIDController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTPIDController() {}
// Cross Module References
	MMT_API UClass* Z_Construct_UClass_UMMTPIDController_NoRegister();
	MMT_API UClass* Z_Construct_UClass_UMMTPIDController();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_MMT();
	MMT_API UFunction* Z_Construct_UFunction_UMMTPIDController_AddMeasuredError();
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FPIDErrorItemStruct();
	MMT_API UFunction* Z_Construct_UFunction_UMMTPIDController_GetControlCoefficient();
	MMT_API UFunction* Z_Construct_UFunction_UMMTPIDController_ResetController();
// End Cross Module References
	void UMMTPIDController::StaticRegisterNativesUMMTPIDController()
	{
		UClass* Class = UMMTPIDController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMeasuredError", (Native)&UMMTPIDController::execAddMeasuredError },
			{ "GetControlCoefficient", (Native)&UMMTPIDController::execGetControlCoefficient },
			{ "ResetController", (Native)&UMMTPIDController::execResetController },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMMTPIDController_AddMeasuredError()
	{
		struct MMTPIDController_eventAddMeasuredError_Parms
		{
			FPIDErrorItemStruct PIDErrorItem;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PIDErrorItem_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PIDErrorItem = { UE4CodeGen_Private::EPropertyClass::Struct, "PIDErrorItem", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MMTPIDController_eventAddMeasuredError_Parms, PIDErrorItem), Z_Construct_UScriptStruct_FPIDErrorItemStruct, METADATA_PARAMS(NewProp_PIDErrorItem_MetaData, ARRAY_COUNT(NewProp_PIDErrorItem_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PIDErrorItem,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT PID Controller" },
				{ "ModuleRelativePath", "Public/MMTPIDController.h" },
				{ "ToolTip", "Add measurement error and delta time to PID Controller's memory\n@param PIDErrorItem     measurement error and delta time item" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTPIDController, "AddMeasuredError", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MMTPIDController_eventAddMeasuredError_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTPIDController_GetControlCoefficient()
	{
		struct MMTPIDController_eventGetControlCoefficient_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MMTPIDController_eventGetControlCoefficient_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT PID Controller" },
				{ "ModuleRelativePath", "Public/MMTPIDController.h" },
				{ "ToolTip", "Get calculated control signal\n@return calculated control signal" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTPIDController, "GetControlCoefficient", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MMTPIDController_eventGetControlCoefficient_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMTPIDController_ResetController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MMT PID Controller" },
				{ "ModuleRelativePath", "Public/MMTPIDController.h" },
				{ "ToolTip", "Resets PID Controller by deleting all previously measured errors" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTPIDController, "ResetController", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMMTPIDController_NoRegister()
	{
		return UMMTPIDController::StaticClass();
	}
	UClass* Z_Construct_UClass_UMMTPIDController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_MMT,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMMTPIDController_AddMeasuredError, "AddMeasuredError" }, // 3643674762
				{ &Z_Construct_UFunction_UMMTPIDController_GetControlCoefficient, "GetControlCoefficient" }, // 38049500
				{ &Z_Construct_UFunction_UMMTPIDController_ResetController, "ResetController" }, // 2625609268
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "MMT" },
				{ "IncludePath", "MMTPIDController.h" },
				{ "ModuleRelativePath", "Public/MMTPIDController.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeasuredErrors_MetaData[] = {
				{ "ModuleRelativePath", "Public/MMTPIDController.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MeasuredErrors = { UE4CodeGen_Private::EPropertyClass::Array, "MeasuredErrors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMMTPIDController, MeasuredErrors), METADATA_PARAMS(NewProp_MeasuredErrors_MetaData, ARRAY_COUNT(NewProp_MeasuredErrors_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeasuredErrors_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "MeasuredErrors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPIDErrorItemStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DerivativeCoefficient_MetaData[] = {
				{ "Category", "PID Settings" },
				{ "ModuleRelativePath", "Public/MMTPIDController.h" },
				{ "ToolTip", "Derivative coefficient is responsible for correcting oscillation introduced by derivative coefficient" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DerivativeCoefficient = { UE4CodeGen_Private::EPropertyClass::Float, "DerivativeCoefficient", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMMTPIDController, DerivativeCoefficient), METADATA_PARAMS(NewProp_DerivativeCoefficient_MetaData, ARRAY_COUNT(NewProp_DerivativeCoefficient_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntegralCoefficient_MetaData[] = {
				{ "Category", "PID Settings" },
				{ "ModuleRelativePath", "Public/MMTPIDController.h" },
				{ "ToolTip", "Integral coefficient is responsible for correcting systematic errors of measurement over time" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IntegralCoefficient = { UE4CodeGen_Private::EPropertyClass::Float, "IntegralCoefficient", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMMTPIDController, IntegralCoefficient), METADATA_PARAMS(NewProp_IntegralCoefficient_MetaData, ARRAY_COUNT(NewProp_IntegralCoefficient_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProportionalCoefficient_MetaData[] = {
				{ "Category", "PID Settings" },
				{ "ModuleRelativePath", "Public/MMTPIDController.h" },
				{ "ToolTip", "Proportional coefficient is responsible for how fast error should be corrected" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProportionalCoefficient = { UE4CodeGen_Private::EPropertyClass::Float, "ProportionalCoefficient", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMMTPIDController, ProportionalCoefficient), METADATA_PARAMS(NewProp_ProportionalCoefficient_MetaData, ARRAY_COUNT(NewProp_ProportionalCoefficient_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumOfErrorsToStore_MetaData[] = {
				{ "Category", "PID Settings" },
				{ "ClampMin", "3" },
				{ "ModuleRelativePath", "Public/MMTPIDController.h" },
				{ "ToolTip", "Minimum of 3 errors need to be stored. Storing more errors is necessary for Integral part of the controller as it corrects systematic errors of measurements taken over time." },
				{ "UIMin", "3" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumOfErrorsToStore = { UE4CodeGen_Private::EPropertyClass::Int, "NumOfErrorsToStore", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMMTPIDController, NumOfErrorsToStore), METADATA_PARAMS(NewProp_NumOfErrorsToStore_MetaData, ARRAY_COUNT(NewProp_NumOfErrorsToStore_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeasuredErrors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeasuredErrors_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DerivativeCoefficient,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IntegralCoefficient,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProportionalCoefficient,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumOfErrorsToStore,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMMTPIDController>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMMTPIDController::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(UMMTPIDController, 3941585460);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMMTPIDController(Z_Construct_UClass_UMMTPIDController, &UMMTPIDController::StaticClass, TEXT("/Script/MMT"), TEXT("UMMTPIDController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMTPIDController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
