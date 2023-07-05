// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWidgetHUD_HeatMeter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWidgetHUD_HeatMeter() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_HeatMeter();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSSWidgetHUD_HeatMeter::execApplyHeatMeter)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inHeatLevel);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InExpRatio);
		P_GET_UBOOL(Z_Param_InGaugeTransition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyHeatMeter(Z_Param_inHeatLevel,Z_Param_InExpRatio,Z_Param_InGaugeTransition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_HeatMeter::execApplyHeatMeterGauge)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InRatio);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyHeatMeterGauge(Z_Param_InRatio);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_HeatMeter::execOnHeatLevelUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHeatLevelUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_HeatMeter::execUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update(Z_Param_InDeltaTime);
		P_NATIVE_END;
	}
	static FName NAME_UELSSWidgetHUD_HeatMeter_ApplyHeatLevelText = FName(TEXT("ApplyHeatLevelText"));
	void UELSSWidgetHUD_HeatMeter::ApplyHeatLevelText(int32 inHeatLevel)
	{
		ELSSWidgetHUD_HeatMeter_eventApplyHeatLevelText_Parms Parms;
		Parms.inHeatLevel=inHeatLevel;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_HeatMeter_ApplyHeatLevelText),&Parms);
	}
	static FName NAME_UELSSWidgetHUD_HeatMeter_Init = FName(TEXT("Init"));
	void UELSSWidgetHUD_HeatMeter::Init()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_HeatMeter_Init),NULL);
	}
	static FName NAME_UELSSWidgetHUD_HeatMeter_OnSkipLvUPAnim = FName(TEXT("OnSkipLvUPAnim"));
	void UELSSWidgetHUD_HeatMeter::OnSkipLvUPAnim()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_HeatMeter_OnSkipLvUPAnim),NULL);
	}
	void UELSSWidgetHUD_HeatMeter::StaticRegisterNativesUELSSWidgetHUD_HeatMeter()
	{
		UClass* Class = UELSSWidgetHUD_HeatMeter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyHeatMeter", &UELSSWidgetHUD_HeatMeter::execApplyHeatMeter },
			{ "ApplyHeatMeterGauge", &UELSSWidgetHUD_HeatMeter::execApplyHeatMeterGauge },
			{ "OnHeatLevelUp", &UELSSWidgetHUD_HeatMeter::execOnHeatLevelUp },
			{ "Update", &UELSSWidgetHUD_HeatMeter::execUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatLevelText_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inHeatLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatLevelText_Statics::NewProp_inHeatLevel = { "inHeatLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_HeatMeter_eventApplyHeatLevelText_Parms, inHeatLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatLevelText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatLevelText_Statics::NewProp_inHeatLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatLevelText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HeatMeter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatLevelText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_HeatMeter, nullptr, "ApplyHeatLevelText", nullptr, nullptr, sizeof(ELSSWidgetHUD_HeatMeter_eventApplyHeatLevelText_Parms), Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatLevelText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatLevelText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatLevelText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatLevelText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatLevelText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatLevelText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatMeter_Statics
	{
		struct ELSSWidgetHUD_HeatMeter_eventApplyHeatMeter_Parms
		{
			int32 inHeatLevel;
			float InExpRatio;
			bool InGaugeTransition;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inHeatLevel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InExpRatio;
		static void NewProp_InGaugeTransition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InGaugeTransition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatMeter_Statics::NewProp_inHeatLevel = { "inHeatLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_HeatMeter_eventApplyHeatMeter_Parms, inHeatLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatMeter_Statics::NewProp_InExpRatio = { "InExpRatio", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_HeatMeter_eventApplyHeatMeter_Parms, InExpRatio), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatMeter_Statics::NewProp_InGaugeTransition_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_HeatMeter_eventApplyHeatMeter_Parms*)Obj)->InGaugeTransition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatMeter_Statics::NewProp_InGaugeTransition = { "InGaugeTransition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_HeatMeter_eventApplyHeatMeter_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatMeter_Statics::NewProp_InGaugeTransition_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatMeter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatMeter_Statics::NewProp_inHeatLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatMeter_Statics::NewProp_InExpRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatMeter_Statics::NewProp_InGaugeTransition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatMeter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HeatMeter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatMeter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_HeatMeter, nullptr, "ApplyHeatMeter", nullptr, nullptr, sizeof(ELSSWidgetHUD_HeatMeter_eventApplyHeatMeter_Parms), Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatMeter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatMeter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatMeter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatMeter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatMeter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatMeter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatMeterGauge_Statics
	{
		struct ELSSWidgetHUD_HeatMeter_eventApplyHeatMeterGauge_Parms
		{
			float InRatio;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InRatio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatMeterGauge_Statics::NewProp_InRatio = { "InRatio", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_HeatMeter_eventApplyHeatMeterGauge_Parms, InRatio), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatMeterGauge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatMeterGauge_Statics::NewProp_InRatio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatMeterGauge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HeatMeter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatMeterGauge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_HeatMeter, nullptr, "ApplyHeatMeterGauge", nullptr, nullptr, sizeof(ELSSWidgetHUD_HeatMeter_eventApplyHeatMeterGauge_Parms), Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatMeterGauge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatMeterGauge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatMeterGauge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatMeterGauge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatMeterGauge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatMeterGauge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_Init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HeatMeter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_HeatMeter, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_OnHeatLevelUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_OnHeatLevelUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HeatMeter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_OnHeatLevelUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_HeatMeter, nullptr, "OnHeatLevelUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_OnHeatLevelUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_OnHeatLevelUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_OnHeatLevelUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_OnHeatLevelUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_OnSkipLvUPAnim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_OnSkipLvUPAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HeatMeter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_OnSkipLvUPAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_HeatMeter, nullptr, "OnSkipLvUPAnim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_OnSkipLvUPAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_OnSkipLvUPAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_OnSkipLvUPAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_OnSkipLvUPAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_Update_Statics
	{
		struct ELSSWidgetHUD_HeatMeter_eventUpdate_Parms
		{
			float InDeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_Update_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_HeatMeter_eventUpdate_Parms, InDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_Update_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HeatMeter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_HeatMeter, nullptr, "Update", nullptr, nullptr, sizeof(ELSSWidgetHUD_HeatMeter_eventUpdate_Parms), Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_NoRegister()
	{
		return UELSSWidgetHUD_HeatMeter::StaticClass();
	}
	struct Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatMeterGaugeMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeatMeterGaugeMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatMeterGaugeDiffMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeatMeterGaugeDiffMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatMeaterLvUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeatMeaterLvUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatMeaterAdd_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeatMeaterAdd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HeatLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdealHeatLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IdealHeatLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatExpRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeatExpRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdealHeatExpRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IdealHeatExpRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Elapsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Elapsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCompleteDuration_MetaData[];
#endif
		static void NewProp_IsCompleteDuration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCompleteDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatLevelText, "ApplyHeatLevelText" }, // 437235498
		{ &Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatMeter, "ApplyHeatMeter" }, // 2898085647
		{ &Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_ApplyHeatMeterGauge, "ApplyHeatMeterGauge" }, // 1785838596
		{ &Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_Init, "Init" }, // 2319315762
		{ &Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_OnHeatLevelUp, "OnHeatLevelUp" }, // 1316605941
		{ &Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_OnSkipLvUPAnim, "OnSkipLvUPAnim" }, // 525846779
		{ &Z_Construct_UFunction_UELSSWidgetHUD_HeatMeter_Update, "Update" }, // 3924292944
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWidgetHUD_HeatMeter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HeatMeter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_HeatMeterGaugeMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_HeatMeter" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HeatMeter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_HeatMeterGaugeMaterial = { "HeatMeterGaugeMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_HeatMeter, HeatMeterGaugeMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_HeatMeterGaugeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_HeatMeterGaugeMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_HeatMeterGaugeDiffMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_HeatMeter" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HeatMeter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_HeatMeterGaugeDiffMaterial = { "HeatMeterGaugeDiffMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_HeatMeter, HeatMeterGaugeDiffMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_HeatMeterGaugeDiffMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_HeatMeterGaugeDiffMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_HeatMeaterLvUp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_HeatMeter" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HeatMeter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_HeatMeaterLvUp = { "HeatMeaterLvUp", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_HeatMeter, HeatMeaterLvUp), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_HeatMeaterLvUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_HeatMeaterLvUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_HeatMeaterAdd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_HeatMeter" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HeatMeter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_HeatMeaterAdd = { "HeatMeaterAdd", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_HeatMeter, HeatMeaterAdd), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_HeatMeaterAdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_HeatMeaterAdd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_HeatLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_HeatMeter" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HeatMeter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_HeatLevel = { "HeatLevel", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_HeatMeter, HeatLevel), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_HeatLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_HeatLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_IdealHeatLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_HeatMeter" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HeatMeter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_IdealHeatLevel = { "IdealHeatLevel", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_HeatMeter, IdealHeatLevel), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_IdealHeatLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_IdealHeatLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_HeatExpRatio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_HeatMeter" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HeatMeter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_HeatExpRatio = { "HeatExpRatio", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_HeatMeter, HeatExpRatio), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_HeatExpRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_HeatExpRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_IdealHeatExpRatio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_HeatMeter" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HeatMeter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_IdealHeatExpRatio = { "IdealHeatExpRatio", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_HeatMeter, IdealHeatExpRatio), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_IdealHeatExpRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_IdealHeatExpRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_Duration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_HeatMeter" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HeatMeter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_HeatMeter, Duration), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_Elapsed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_HeatMeter" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HeatMeter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_Elapsed = { "Elapsed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_HeatMeter, Elapsed), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_Elapsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_Elapsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_IsCompleteDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_HeatMeter" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HeatMeter.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_IsCompleteDuration_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_HeatMeter*)Obj)->IsCompleteDuration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_IsCompleteDuration = { "IsCompleteDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_HeatMeter), &Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_IsCompleteDuration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_IsCompleteDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_IsCompleteDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_HeatMeterGaugeMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_HeatMeterGaugeDiffMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_HeatMeaterLvUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_HeatMeaterAdd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_HeatLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_IdealHeatLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_HeatExpRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_IdealHeatExpRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_Elapsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::NewProp_IsCompleteDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSWidgetHUD_HeatMeter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::ClassParams = {
		&UELSSWidgetHUD_HeatMeter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSWidgetHUD_HeatMeter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSWidgetHUD_HeatMeter, 2273493492);
	template<> ABP_200508_API UClass* StaticClass<UELSSWidgetHUD_HeatMeter>()
	{
		return UELSSWidgetHUD_HeatMeter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSWidgetHUD_HeatMeter(Z_Construct_UClass_UELSSWidgetHUD_HeatMeter, &UELSSWidgetHUD_HeatMeter::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSWidgetHUD_HeatMeter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSWidgetHUD_HeatMeter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
