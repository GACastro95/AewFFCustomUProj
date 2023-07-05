// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWidgetHUD_AbilitySlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWidgetHUD_AbilitySlot() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAbilityParam();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EKeyMappingType();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSSWidgetHUD_AbilitySlot::execApplyCoolTimeGauge)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_inRemainTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inDurationTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyCoolTimeGauge(Z_Param_inRemainTime,Z_Param_inDurationTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_AbilitySlot::execApplyEffectiveGauge)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_inRemainTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inDurationTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyEffectiveGauge(Z_Param_inRemainTime,Z_Param_inDurationTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_AbilitySlot::execApplyWatchGameMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyWatchGameMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_AbilitySlot::execInitDefaultState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitDefaultState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_AbilitySlot::execOnFinishedPlayStandByEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFinishedPlayStandByEffect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_AbilitySlot::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_AbilitySlot::execSetAbility)
	{
		P_GET_STRUCT_REF(FSSAbilityParam,Z_Param_Out_inAbilityParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAbility(Z_Param_Out_inAbilityParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_AbilitySlot::execSetAbilityVisible)
	{
		P_GET_UBOOL(Z_Param_inIsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAbilityVisible(Z_Param_inIsVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_AbilitySlot::execSetButtonVisible)
	{
		P_GET_UBOOL(Z_Param_inIsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetButtonVisible(Z_Param_inIsVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_AbilitySlot::execSetCoolTimeText)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCoolTimeText(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_AbilitySlot::execSetGaugeParam)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InRatio);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGaugeParam(Z_Param_InRatio);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_AbilitySlot::execSetStateSlotButtonVisible)
	{
		P_GET_UBOOL(Z_Param_inIsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStateSlotButtonVisible(Z_Param_inIsVisible);
		P_NATIVE_END;
	}
	static FName NAME_UELSSWidgetHUD_AbilitySlot_Init = FName(TEXT("Init"));
	void UELSSWidgetHUD_AbilitySlot::Init(int32 inSlotIndex)
	{
		ELSSWidgetHUD_AbilitySlot_eventInit_Parms Parms;
		Parms.inSlotIndex=inSlotIndex;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_AbilitySlot_Init),&Parms);
	}
	static FName NAME_UELSSWidgetHUD_AbilitySlot_SetKeyConfig = FName(TEXT("SetKeyConfig"));
	void UELSSWidgetHUD_AbilitySlot::SetKeyConfig(EKeyMappingType InKeyMapType)
	{
		ELSSWidgetHUD_AbilitySlot_eventSetKeyConfig_Parms Parms;
		Parms.InKeyMapType=InKeyMapType;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_AbilitySlot_SetKeyConfig),&Parms);
	}
	void UELSSWidgetHUD_AbilitySlot::StaticRegisterNativesUELSSWidgetHUD_AbilitySlot()
	{
		UClass* Class = UELSSWidgetHUD_AbilitySlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyCoolTimeGauge", &UELSSWidgetHUD_AbilitySlot::execApplyCoolTimeGauge },
			{ "ApplyEffectiveGauge", &UELSSWidgetHUD_AbilitySlot::execApplyEffectiveGauge },
			{ "ApplyWatchGameMode", &UELSSWidgetHUD_AbilitySlot::execApplyWatchGameMode },
			{ "InitDefaultState", &UELSSWidgetHUD_AbilitySlot::execInitDefaultState },
			{ "OnFinishedPlayStandByEffect", &UELSSWidgetHUD_AbilitySlot::execOnFinishedPlayStandByEffect },
			{ "Reset", &UELSSWidgetHUD_AbilitySlot::execReset },
			{ "SetAbility", &UELSSWidgetHUD_AbilitySlot::execSetAbility },
			{ "SetAbilityVisible", &UELSSWidgetHUD_AbilitySlot::execSetAbilityVisible },
			{ "SetButtonVisible", &UELSSWidgetHUD_AbilitySlot::execSetButtonVisible },
			{ "SetCoolTimeText", &UELSSWidgetHUD_AbilitySlot::execSetCoolTimeText },
			{ "SetGaugeParam", &UELSSWidgetHUD_AbilitySlot::execSetGaugeParam },
			{ "SetStateSlotButtonVisible", &UELSSWidgetHUD_AbilitySlot::execSetStateSlotButtonVisible },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_ApplyCoolTimeGauge_Statics
	{
		struct ELSSWidgetHUD_AbilitySlot_eventApplyCoolTimeGauge_Parms
		{
			float inRemainTime;
			float inDurationTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inRemainTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDurationTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_ApplyCoolTimeGauge_Statics::NewProp_inRemainTime = { "inRemainTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_AbilitySlot_eventApplyCoolTimeGauge_Parms, inRemainTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_ApplyCoolTimeGauge_Statics::NewProp_inDurationTime = { "inDurationTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_AbilitySlot_eventApplyCoolTimeGauge_Parms, inDurationTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_ApplyCoolTimeGauge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_ApplyCoolTimeGauge_Statics::NewProp_inRemainTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_ApplyCoolTimeGauge_Statics::NewProp_inDurationTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_ApplyCoolTimeGauge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilitySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_ApplyCoolTimeGauge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot, nullptr, "ApplyCoolTimeGauge", nullptr, nullptr, sizeof(ELSSWidgetHUD_AbilitySlot_eventApplyCoolTimeGauge_Parms), Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_ApplyCoolTimeGauge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_ApplyCoolTimeGauge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_ApplyCoolTimeGauge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_ApplyCoolTimeGauge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_ApplyCoolTimeGauge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_ApplyCoolTimeGauge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_ApplyEffectiveGauge_Statics
	{
		struct ELSSWidgetHUD_AbilitySlot_eventApplyEffectiveGauge_Parms
		{
			float inRemainTime;
			float inDurationTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inRemainTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDurationTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_ApplyEffectiveGauge_Statics::NewProp_inRemainTime = { "inRemainTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_AbilitySlot_eventApplyEffectiveGauge_Parms, inRemainTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_ApplyEffectiveGauge_Statics::NewProp_inDurationTime = { "inDurationTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_AbilitySlot_eventApplyEffectiveGauge_Parms, inDurationTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_ApplyEffectiveGauge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_ApplyEffectiveGauge_Statics::NewProp_inRemainTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_ApplyEffectiveGauge_Statics::NewProp_inDurationTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_ApplyEffectiveGauge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilitySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_ApplyEffectiveGauge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot, nullptr, "ApplyEffectiveGauge", nullptr, nullptr, sizeof(ELSSWidgetHUD_AbilitySlot_eventApplyEffectiveGauge_Parms), Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_ApplyEffectiveGauge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_ApplyEffectiveGauge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_ApplyEffectiveGauge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_ApplyEffectiveGauge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_ApplyEffectiveGauge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_ApplyEffectiveGauge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_ApplyWatchGameMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_ApplyWatchGameMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilitySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_ApplyWatchGameMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot, nullptr, "ApplyWatchGameMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_ApplyWatchGameMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_ApplyWatchGameMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_ApplyWatchGameMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_ApplyWatchGameMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_Init_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inSlotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_Init_Statics::NewProp_inSlotIndex = { "inSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_AbilitySlot_eventInit_Parms, inSlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_Init_Statics::NewProp_inSlotIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilitySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot, nullptr, "Init", nullptr, nullptr, sizeof(ELSSWidgetHUD_AbilitySlot_eventInit_Parms), Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_InitDefaultState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_InitDefaultState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilitySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_InitDefaultState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot, nullptr, "InitDefaultState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_InitDefaultState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_InitDefaultState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_InitDefaultState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_InitDefaultState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_OnFinishedPlayStandByEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_OnFinishedPlayStandByEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilitySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_OnFinishedPlayStandByEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot, nullptr, "OnFinishedPlayStandByEffect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_OnFinishedPlayStandByEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_OnFinishedPlayStandByEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_OnFinishedPlayStandByEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_OnFinishedPlayStandByEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilitySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetAbility_Statics
	{
		struct ELSSWidgetHUD_AbilitySlot_eventSetAbility_Parms
		{
			FSSAbilityParam inAbilityParam;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inAbilityParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inAbilityParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetAbility_Statics::NewProp_inAbilityParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetAbility_Statics::NewProp_inAbilityParam = { "inAbilityParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_AbilitySlot_eventSetAbility_Parms, inAbilityParam), Z_Construct_UScriptStruct_FSSAbilityParam, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetAbility_Statics::NewProp_inAbilityParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetAbility_Statics::NewProp_inAbilityParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetAbility_Statics::NewProp_inAbilityParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetAbility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilitySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot, nullptr, "SetAbility", nullptr, nullptr, sizeof(ELSSWidgetHUD_AbilitySlot_eventSetAbility_Parms), Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetAbilityVisible_Statics
	{
		struct ELSSWidgetHUD_AbilitySlot_eventSetAbilityVisible_Parms
		{
			bool inIsVisible;
		};
		static void NewProp_inIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inIsVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetAbilityVisible_Statics::NewProp_inIsVisible_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_AbilitySlot_eventSetAbilityVisible_Parms*)Obj)->inIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetAbilityVisible_Statics::NewProp_inIsVisible = { "inIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_AbilitySlot_eventSetAbilityVisible_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetAbilityVisible_Statics::NewProp_inIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetAbilityVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetAbilityVisible_Statics::NewProp_inIsVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetAbilityVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilitySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetAbilityVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot, nullptr, "SetAbilityVisible", nullptr, nullptr, sizeof(ELSSWidgetHUD_AbilitySlot_eventSetAbilityVisible_Parms), Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetAbilityVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetAbilityVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetAbilityVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetAbilityVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetAbilityVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetAbilityVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetButtonVisible_Statics
	{
		struct ELSSWidgetHUD_AbilitySlot_eventSetButtonVisible_Parms
		{
			bool inIsVisible;
		};
		static void NewProp_inIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inIsVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetButtonVisible_Statics::NewProp_inIsVisible_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_AbilitySlot_eventSetButtonVisible_Parms*)Obj)->inIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetButtonVisible_Statics::NewProp_inIsVisible = { "inIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_AbilitySlot_eventSetButtonVisible_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetButtonVisible_Statics::NewProp_inIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetButtonVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetButtonVisible_Statics::NewProp_inIsVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetButtonVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilitySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetButtonVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot, nullptr, "SetButtonVisible", nullptr, nullptr, sizeof(ELSSWidgetHUD_AbilitySlot_eventSetButtonVisible_Parms), Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetButtonVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetButtonVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetButtonVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetButtonVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetButtonVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetButtonVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetCoolTimeText_Statics
	{
		struct ELSSWidgetHUD_AbilitySlot_eventSetCoolTimeText_Parms
		{
			int32 InValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetCoolTimeText_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_AbilitySlot_eventSetCoolTimeText_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetCoolTimeText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetCoolTimeText_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetCoolTimeText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilitySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetCoolTimeText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot, nullptr, "SetCoolTimeText", nullptr, nullptr, sizeof(ELSSWidgetHUD_AbilitySlot_eventSetCoolTimeText_Parms), Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetCoolTimeText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetCoolTimeText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetCoolTimeText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetCoolTimeText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetCoolTimeText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetCoolTimeText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetGaugeParam_Statics
	{
		struct ELSSWidgetHUD_AbilitySlot_eventSetGaugeParam_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetGaugeParam_Statics::NewProp_InRatio = { "InRatio", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_AbilitySlot_eventSetGaugeParam_Parms, InRatio), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetGaugeParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetGaugeParam_Statics::NewProp_InRatio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetGaugeParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilitySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetGaugeParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot, nullptr, "SetGaugeParam", nullptr, nullptr, sizeof(ELSSWidgetHUD_AbilitySlot_eventSetGaugeParam_Parms), Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetGaugeParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetGaugeParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetGaugeParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetGaugeParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetGaugeParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetGaugeParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetKeyConfig_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InKeyMapType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InKeyMapType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetKeyConfig_Statics::NewProp_InKeyMapType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetKeyConfig_Statics::NewProp_InKeyMapType = { "InKeyMapType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_AbilitySlot_eventSetKeyConfig_Parms, InKeyMapType), Z_Construct_UEnum_ABP_200508_EKeyMappingType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetKeyConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetKeyConfig_Statics::NewProp_InKeyMapType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetKeyConfig_Statics::NewProp_InKeyMapType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetKeyConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilitySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetKeyConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot, nullptr, "SetKeyConfig", nullptr, nullptr, sizeof(ELSSWidgetHUD_AbilitySlot_eventSetKeyConfig_Parms), Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetKeyConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetKeyConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetKeyConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetKeyConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetKeyConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetKeyConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetStateSlotButtonVisible_Statics
	{
		struct ELSSWidgetHUD_AbilitySlot_eventSetStateSlotButtonVisible_Parms
		{
			bool inIsVisible;
		};
		static void NewProp_inIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inIsVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetStateSlotButtonVisible_Statics::NewProp_inIsVisible_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_AbilitySlot_eventSetStateSlotButtonVisible_Parms*)Obj)->inIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetStateSlotButtonVisible_Statics::NewProp_inIsVisible = { "inIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_AbilitySlot_eventSetStateSlotButtonVisible_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetStateSlotButtonVisible_Statics::NewProp_inIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetStateSlotButtonVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetStateSlotButtonVisible_Statics::NewProp_inIsVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetStateSlotButtonVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilitySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetStateSlotButtonVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot, nullptr, "SetStateSlotButtonVisible", nullptr, nullptr, sizeof(ELSSWidgetHUD_AbilitySlot_eventSetStateSlotButtonVisible_Parms), Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetStateSlotButtonVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetStateSlotButtonVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetStateSlotButtonVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetStateSlotButtonVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetStateSlotButtonVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetStateSlotButtonVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_NoRegister()
	{
		return UELSSWidgetHUD_AbilitySlot::StaticClass();
	}
	struct Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityGaugeMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityGaugeMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityCoolTimeMaterial_001_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityCoolTimeMaterial_001;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityCoolTimeMaterial_010_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityCoolTimeMaterial_010;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityCoolTimeMaterial_100_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityCoolTimeMaterial_100;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonHoldAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonHoldAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonDefaultAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonDefaultAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityStandbyEffectAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityStandbyEffectAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityStandbyAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityStandbyAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityActiveAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityActiveAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityCoolTimeAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityCoolTimeAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityIconImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityIconImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayoutWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LayoutWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonFontWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonFontWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoolTimeFont_001Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CoolTimeFont_001Widget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoolTimeFont_010Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CoolTimeFont_010Widget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoolTimeFont_100Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CoolTimeFont_100Widget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoolTimeFontWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CoolTimeFontWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoolTimeValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CoolTimeValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsButtonVisible_MetaData[];
#endif
		static void NewProp_IsButtonVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsButtonVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsButtonDefaultState_MetaData[];
#endif
		static void NewProp_IsButtonDefaultState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsButtonDefaultState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAbilityUsingTime_MetaData[];
#endif
		static void NewProp_IsAbilityUsingTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAbilityUsingTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAbilityCoolTime_MetaData[];
#endif
		static void NewProp_IsAbilityCoolTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAbilityCoolTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsWatchGameMode_MetaData[];
#endif
		static void NewProp_IsWatchGameMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsWatchGameMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_ApplyCoolTimeGauge, "ApplyCoolTimeGauge" }, // 2397221388
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_ApplyEffectiveGauge, "ApplyEffectiveGauge" }, // 2964618194
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_ApplyWatchGameMode, "ApplyWatchGameMode" }, // 1247591940
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_Init, "Init" }, // 487888847
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_InitDefaultState, "InitDefaultState" }, // 590786002
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_OnFinishedPlayStandByEffect, "OnFinishedPlayStandByEffect" }, // 806318375
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_Reset, "Reset" }, // 1393097618
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetAbility, "SetAbility" }, // 800539100
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetAbilityVisible, "SetAbilityVisible" }, // 349299096
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetButtonVisible, "SetButtonVisible" }, // 2250182463
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetCoolTimeText, "SetCoolTimeText" }, // 2105368320
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetGaugeParam, "SetGaugeParam" }, // 795455677
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetKeyConfig, "SetKeyConfig" }, // 477139512
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AbilitySlot_SetStateSlotButtonVisible, "SetStateSlotButtonVisible" }, // 1866648193
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWidgetHUD_AbilitySlot.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilitySlot.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityGaugeMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AbilitySlot" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilitySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityGaugeMaterial = { "AbilityGaugeMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, AbilityGaugeMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityGaugeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityGaugeMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityCoolTimeMaterial_001_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AbilitySlot" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilitySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityCoolTimeMaterial_001 = { "AbilityCoolTimeMaterial_001", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, AbilityCoolTimeMaterial_001), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityCoolTimeMaterial_001_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityCoolTimeMaterial_001_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityCoolTimeMaterial_010_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AbilitySlot" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilitySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityCoolTimeMaterial_010 = { "AbilityCoolTimeMaterial_010", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, AbilityCoolTimeMaterial_010), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityCoolTimeMaterial_010_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityCoolTimeMaterial_010_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityCoolTimeMaterial_100_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AbilitySlot" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilitySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityCoolTimeMaterial_100 = { "AbilityCoolTimeMaterial_100", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, AbilityCoolTimeMaterial_100), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityCoolTimeMaterial_100_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityCoolTimeMaterial_100_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_ButtonHoldAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AbilitySlot" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilitySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_ButtonHoldAnim = { "ButtonHoldAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, ButtonHoldAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_ButtonHoldAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_ButtonHoldAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_ButtonDefaultAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AbilitySlot" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilitySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_ButtonDefaultAnim = { "ButtonDefaultAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, ButtonDefaultAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_ButtonDefaultAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_ButtonDefaultAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityStandbyEffectAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AbilitySlot" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilitySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityStandbyEffectAnim = { "AbilityStandbyEffectAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, AbilityStandbyEffectAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityStandbyEffectAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityStandbyEffectAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityStandbyAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AbilitySlot" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilitySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityStandbyAnim = { "AbilityStandbyAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, AbilityStandbyAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityStandbyAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityStandbyAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityActiveAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AbilitySlot" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilitySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityActiveAnim = { "AbilityActiveAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, AbilityActiveAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityActiveAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityActiveAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityCoolTimeAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AbilitySlot" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilitySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityCoolTimeAnim = { "AbilityCoolTimeAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, AbilityCoolTimeAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityCoolTimeAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityCoolTimeAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityIconImage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AbilitySlot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilitySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityIconImage = { "AbilityIconImage", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, AbilityIconImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityIconImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityIconImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_EffectWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AbilitySlot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilitySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_EffectWidget = { "EffectWidget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, EffectWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_EffectWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_EffectWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_LayoutWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AbilitySlot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilitySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_LayoutWidget = { "LayoutWidget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, LayoutWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_LayoutWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_LayoutWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_ButtonFontWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AbilitySlot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilitySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_ButtonFontWidget = { "ButtonFontWidget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, ButtonFontWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_ButtonFontWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_ButtonFontWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_CoolTimeFont_001Widget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AbilitySlot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilitySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_CoolTimeFont_001Widget = { "CoolTimeFont_001Widget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, CoolTimeFont_001Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_CoolTimeFont_001Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_CoolTimeFont_001Widget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_CoolTimeFont_010Widget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AbilitySlot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilitySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_CoolTimeFont_010Widget = { "CoolTimeFont_010Widget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, CoolTimeFont_010Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_CoolTimeFont_010Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_CoolTimeFont_010Widget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_CoolTimeFont_100Widget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AbilitySlot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilitySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_CoolTimeFont_100Widget = { "CoolTimeFont_100Widget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, CoolTimeFont_100Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_CoolTimeFont_100Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_CoolTimeFont_100Widget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_CoolTimeFontWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AbilitySlot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilitySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_CoolTimeFontWidget = { "CoolTimeFontWidget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, CoolTimeFontWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_CoolTimeFontWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_CoolTimeFontWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_CoolTimeValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AbilitySlot" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilitySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_CoolTimeValue = { "CoolTimeValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, CoolTimeValue), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_CoolTimeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_CoolTimeValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_IsButtonVisible_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AbilitySlot" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilitySlot.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_IsButtonVisible_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_AbilitySlot*)Obj)->IsButtonVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_IsButtonVisible = { "IsButtonVisible", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_AbilitySlot), &Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_IsButtonVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_IsButtonVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_IsButtonVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_IsButtonDefaultState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AbilitySlot" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilitySlot.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_IsButtonDefaultState_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_AbilitySlot*)Obj)->IsButtonDefaultState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_IsButtonDefaultState = { "IsButtonDefaultState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_AbilitySlot), &Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_IsButtonDefaultState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_IsButtonDefaultState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_IsButtonDefaultState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_IsAbilityUsingTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AbilitySlot" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilitySlot.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_IsAbilityUsingTime_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_AbilitySlot*)Obj)->IsAbilityUsingTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_IsAbilityUsingTime = { "IsAbilityUsingTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_AbilitySlot), &Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_IsAbilityUsingTime_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_IsAbilityUsingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_IsAbilityUsingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_IsAbilityCoolTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AbilitySlot" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilitySlot.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_IsAbilityCoolTime_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_AbilitySlot*)Obj)->IsAbilityCoolTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_IsAbilityCoolTime = { "IsAbilityCoolTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_AbilitySlot), &Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_IsAbilityCoolTime_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_IsAbilityCoolTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_IsAbilityCoolTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_IsWatchGameMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AbilitySlot" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilitySlot.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_IsWatchGameMode_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_AbilitySlot*)Obj)->IsWatchGameMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_IsWatchGameMode = { "IsWatchGameMode", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_AbilitySlot), &Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_IsWatchGameMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_IsWatchGameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_IsWatchGameMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityGaugeMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityCoolTimeMaterial_001,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityCoolTimeMaterial_010,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityCoolTimeMaterial_100,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_ButtonHoldAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_ButtonDefaultAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityStandbyEffectAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityStandbyAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityActiveAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityCoolTimeAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_AbilityIconImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_EffectWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_LayoutWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_ButtonFontWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_CoolTimeFont_001Widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_CoolTimeFont_010Widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_CoolTimeFont_100Widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_CoolTimeFontWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_CoolTimeValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_IsButtonVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_IsButtonDefaultState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_IsAbilityUsingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_IsAbilityCoolTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::NewProp_IsWatchGameMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSWidgetHUD_AbilitySlot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::ClassParams = {
		&UELSSWidgetHUD_AbilitySlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSWidgetHUD_AbilitySlot, 4177889572);
	template<> ABP_200508_API UClass* StaticClass<UELSSWidgetHUD_AbilitySlot>()
	{
		return UELSSWidgetHUD_AbilitySlot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSWidgetHUD_AbilitySlot(Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot, &UELSSWidgetHUD_AbilitySlot::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSWidgetHUD_AbilitySlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSWidgetHUD_AbilitySlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
