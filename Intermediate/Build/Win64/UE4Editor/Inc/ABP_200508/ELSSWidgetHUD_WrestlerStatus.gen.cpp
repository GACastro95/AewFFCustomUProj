// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWidgetHUD_WrestlerStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWidgetHUD_WrestlerStatus() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSSWidgetHUD_WrestlerStatus::execApplyCarrotMedal)
	{
		P_GET_UBOOL(Z_Param_inIsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyCarrotMedal(Z_Param_inIsVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_WrestlerStatus::execApplyDownHp)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InWrestlerDownHp);
		P_GET_PROPERTY(FIntProperty,Z_Param_InMaxWrestlerDownHp);
		P_GET_UBOOL(Z_Param_InGaugeTransition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyDownHp(Z_Param_InWrestlerDownHp,Z_Param_InMaxWrestlerDownHp,Z_Param_InGaugeTransition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_WrestlerStatus::execApplyShieldDurableValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InShieldDurableValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_InMaxShieldDurableValue);
		P_GET_UBOOL(Z_Param_InGaugeTransition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyShieldDurableValue(Z_Param_InShieldDurableValue,Z_Param_InMaxShieldDurableValue,Z_Param_InGaugeTransition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_WrestlerStatus::execApplyShieldGauge)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InShieldDurableValueRatio);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyShieldGauge(Z_Param_InShieldDurableValueRatio);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_WrestlerStatus::execApplyWrestlerDownHpGauge)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InWrestlerDownHpRatio);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyWrestlerDownHpGauge(Z_Param_InWrestlerDownHpRatio);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_WrestlerStatus::execApplyWrestlerHp)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InWrestlerHp);
		P_GET_PROPERTY(FIntProperty,Z_Param_inMaxHP);
		P_GET_UBOOL(Z_Param_InGaugeTransition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyWrestlerHp(Z_Param_InWrestlerHp,Z_Param_inMaxHP,Z_Param_InGaugeTransition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_WrestlerStatus::execApplyWrestlerHpGauge)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InWrestlerHpRatio);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyWrestlerHpGauge(Z_Param_InWrestlerHpRatio);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_WrestlerStatus::execSwitchHpType)
	{
		P_GET_UBOOL(Z_Param_InIsDownHpShow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchHpType(Z_Param_InIsDownHpShow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_WrestlerStatus::execUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update(Z_Param_InDeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_WrestlerStatus::execUpdateDownHp)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateDownHp(Z_Param_InDeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_WrestlerStatus::execUpdateShield)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateShield(Z_Param_InDeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_WrestlerStatus::execUpdateWrestlerHp)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateWrestlerHp(Z_Param_InDeltaTime);
		P_NATIVE_END;
	}
	static FName NAME_UELSSWidgetHUD_WrestlerStatus_Init = FName(TEXT("Init"));
	void UELSSWidgetHUD_WrestlerStatus::Init()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_WrestlerStatus_Init),NULL);
	}
	static FName NAME_UELSSWidgetHUD_WrestlerStatus_OnPauseGetMedalAnim = FName(TEXT("OnPauseGetMedalAnim"));
	void UELSSWidgetHUD_WrestlerStatus::OnPauseGetMedalAnim()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_WrestlerStatus_OnPauseGetMedalAnim),NULL);
	}
	static FName NAME_UELSSWidgetHUD_WrestlerStatus_SetGamerTag = FName(TEXT("SetGamerTag"));
	void UELSSWidgetHUD_WrestlerStatus::SetGamerTag()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_WrestlerStatus_SetGamerTag),NULL);
	}
	static FName NAME_UELSSWidgetHUD_WrestlerStatus_SetUserGamerTag = FName(TEXT("SetUserGamerTag"));
	void UELSSWidgetHUD_WrestlerStatus::SetUserGamerTag(const FString& InGamerTag)
	{
		ELSSWidgetHUD_WrestlerStatus_eventSetUserGamerTag_Parms Parms;
		Parms.InGamerTag=InGamerTag;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_WrestlerStatus_SetUserGamerTag),&Parms);
	}
	void UELSSWidgetHUD_WrestlerStatus::StaticRegisterNativesUELSSWidgetHUD_WrestlerStatus()
	{
		UClass* Class = UELSSWidgetHUD_WrestlerStatus::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyCarrotMedal", &UELSSWidgetHUD_WrestlerStatus::execApplyCarrotMedal },
			{ "ApplyDownHp", &UELSSWidgetHUD_WrestlerStatus::execApplyDownHp },
			{ "ApplyShieldDurableValue", &UELSSWidgetHUD_WrestlerStatus::execApplyShieldDurableValue },
			{ "ApplyShieldGauge", &UELSSWidgetHUD_WrestlerStatus::execApplyShieldGauge },
			{ "ApplyWrestlerDownHpGauge", &UELSSWidgetHUD_WrestlerStatus::execApplyWrestlerDownHpGauge },
			{ "ApplyWrestlerHp", &UELSSWidgetHUD_WrestlerStatus::execApplyWrestlerHp },
			{ "ApplyWrestlerHpGauge", &UELSSWidgetHUD_WrestlerStatus::execApplyWrestlerHpGauge },
			{ "SwitchHpType", &UELSSWidgetHUD_WrestlerStatus::execSwitchHpType },
			{ "Update", &UELSSWidgetHUD_WrestlerStatus::execUpdate },
			{ "UpdateDownHp", &UELSSWidgetHUD_WrestlerStatus::execUpdateDownHp },
			{ "UpdateShield", &UELSSWidgetHUD_WrestlerStatus::execUpdateShield },
			{ "UpdateWrestlerHp", &UELSSWidgetHUD_WrestlerStatus::execUpdateWrestlerHp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyCarrotMedal_Statics
	{
		struct ELSSWidgetHUD_WrestlerStatus_eventApplyCarrotMedal_Parms
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
	void Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyCarrotMedal_Statics::NewProp_inIsVisible_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_WrestlerStatus_eventApplyCarrotMedal_Parms*)Obj)->inIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyCarrotMedal_Statics::NewProp_inIsVisible = { "inIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_WrestlerStatus_eventApplyCarrotMedal_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyCarrotMedal_Statics::NewProp_inIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyCarrotMedal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyCarrotMedal_Statics::NewProp_inIsVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyCarrotMedal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyCarrotMedal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus, nullptr, "ApplyCarrotMedal", nullptr, nullptr, sizeof(ELSSWidgetHUD_WrestlerStatus_eventApplyCarrotMedal_Parms), Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyCarrotMedal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyCarrotMedal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyCarrotMedal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyCarrotMedal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyCarrotMedal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyCarrotMedal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyDownHp_Statics
	{
		struct ELSSWidgetHUD_WrestlerStatus_eventApplyDownHp_Parms
		{
			int32 InWrestlerDownHp;
			int32 InMaxWrestlerDownHp;
			bool InGaugeTransition;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InWrestlerDownHp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InMaxWrestlerDownHp;
		static void NewProp_InGaugeTransition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InGaugeTransition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyDownHp_Statics::NewProp_InWrestlerDownHp = { "InWrestlerDownHp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_WrestlerStatus_eventApplyDownHp_Parms, InWrestlerDownHp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyDownHp_Statics::NewProp_InMaxWrestlerDownHp = { "InMaxWrestlerDownHp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_WrestlerStatus_eventApplyDownHp_Parms, InMaxWrestlerDownHp), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyDownHp_Statics::NewProp_InGaugeTransition_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_WrestlerStatus_eventApplyDownHp_Parms*)Obj)->InGaugeTransition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyDownHp_Statics::NewProp_InGaugeTransition = { "InGaugeTransition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_WrestlerStatus_eventApplyDownHp_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyDownHp_Statics::NewProp_InGaugeTransition_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyDownHp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyDownHp_Statics::NewProp_InWrestlerDownHp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyDownHp_Statics::NewProp_InMaxWrestlerDownHp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyDownHp_Statics::NewProp_InGaugeTransition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyDownHp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyDownHp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus, nullptr, "ApplyDownHp", nullptr, nullptr, sizeof(ELSSWidgetHUD_WrestlerStatus_eventApplyDownHp_Parms), Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyDownHp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyDownHp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyDownHp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyDownHp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyDownHp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyDownHp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyShieldDurableValue_Statics
	{
		struct ELSSWidgetHUD_WrestlerStatus_eventApplyShieldDurableValue_Parms
		{
			int32 InShieldDurableValue;
			int32 InMaxShieldDurableValue;
			bool InGaugeTransition;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InShieldDurableValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InMaxShieldDurableValue;
		static void NewProp_InGaugeTransition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InGaugeTransition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyShieldDurableValue_Statics::NewProp_InShieldDurableValue = { "InShieldDurableValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_WrestlerStatus_eventApplyShieldDurableValue_Parms, InShieldDurableValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyShieldDurableValue_Statics::NewProp_InMaxShieldDurableValue = { "InMaxShieldDurableValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_WrestlerStatus_eventApplyShieldDurableValue_Parms, InMaxShieldDurableValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyShieldDurableValue_Statics::NewProp_InGaugeTransition_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_WrestlerStatus_eventApplyShieldDurableValue_Parms*)Obj)->InGaugeTransition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyShieldDurableValue_Statics::NewProp_InGaugeTransition = { "InGaugeTransition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_WrestlerStatus_eventApplyShieldDurableValue_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyShieldDurableValue_Statics::NewProp_InGaugeTransition_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyShieldDurableValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyShieldDurableValue_Statics::NewProp_InShieldDurableValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyShieldDurableValue_Statics::NewProp_InMaxShieldDurableValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyShieldDurableValue_Statics::NewProp_InGaugeTransition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyShieldDurableValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyShieldDurableValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus, nullptr, "ApplyShieldDurableValue", nullptr, nullptr, sizeof(ELSSWidgetHUD_WrestlerStatus_eventApplyShieldDurableValue_Parms), Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyShieldDurableValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyShieldDurableValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyShieldDurableValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyShieldDurableValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyShieldDurableValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyShieldDurableValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyShieldGauge_Statics
	{
		struct ELSSWidgetHUD_WrestlerStatus_eventApplyShieldGauge_Parms
		{
			float InShieldDurableValueRatio;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InShieldDurableValueRatio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyShieldGauge_Statics::NewProp_InShieldDurableValueRatio = { "InShieldDurableValueRatio", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_WrestlerStatus_eventApplyShieldGauge_Parms, InShieldDurableValueRatio), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyShieldGauge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyShieldGauge_Statics::NewProp_InShieldDurableValueRatio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyShieldGauge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyShieldGauge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus, nullptr, "ApplyShieldGauge", nullptr, nullptr, sizeof(ELSSWidgetHUD_WrestlerStatus_eventApplyShieldGauge_Parms), Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyShieldGauge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyShieldGauge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyShieldGauge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyShieldGauge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyShieldGauge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyShieldGauge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerDownHpGauge_Statics
	{
		struct ELSSWidgetHUD_WrestlerStatus_eventApplyWrestlerDownHpGauge_Parms
		{
			float InWrestlerDownHpRatio;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InWrestlerDownHpRatio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerDownHpGauge_Statics::NewProp_InWrestlerDownHpRatio = { "InWrestlerDownHpRatio", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_WrestlerStatus_eventApplyWrestlerDownHpGauge_Parms, InWrestlerDownHpRatio), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerDownHpGauge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerDownHpGauge_Statics::NewProp_InWrestlerDownHpRatio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerDownHpGauge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerDownHpGauge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus, nullptr, "ApplyWrestlerDownHpGauge", nullptr, nullptr, sizeof(ELSSWidgetHUD_WrestlerStatus_eventApplyWrestlerDownHpGauge_Parms), Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerDownHpGauge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerDownHpGauge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerDownHpGauge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerDownHpGauge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerDownHpGauge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerDownHpGauge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerHp_Statics
	{
		struct ELSSWidgetHUD_WrestlerStatus_eventApplyWrestlerHp_Parms
		{
			int32 InWrestlerHp;
			int32 inMaxHP;
			bool InGaugeTransition;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InWrestlerHp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inMaxHP;
		static void NewProp_InGaugeTransition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InGaugeTransition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerHp_Statics::NewProp_InWrestlerHp = { "InWrestlerHp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_WrestlerStatus_eventApplyWrestlerHp_Parms, InWrestlerHp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerHp_Statics::NewProp_inMaxHP = { "inMaxHP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_WrestlerStatus_eventApplyWrestlerHp_Parms, inMaxHP), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerHp_Statics::NewProp_InGaugeTransition_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_WrestlerStatus_eventApplyWrestlerHp_Parms*)Obj)->InGaugeTransition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerHp_Statics::NewProp_InGaugeTransition = { "InGaugeTransition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_WrestlerStatus_eventApplyWrestlerHp_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerHp_Statics::NewProp_InGaugeTransition_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerHp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerHp_Statics::NewProp_InWrestlerHp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerHp_Statics::NewProp_inMaxHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerHp_Statics::NewProp_InGaugeTransition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerHp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerHp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus, nullptr, "ApplyWrestlerHp", nullptr, nullptr, sizeof(ELSSWidgetHUD_WrestlerStatus_eventApplyWrestlerHp_Parms), Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerHp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerHp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerHp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerHp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerHp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerHp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerHpGauge_Statics
	{
		struct ELSSWidgetHUD_WrestlerStatus_eventApplyWrestlerHpGauge_Parms
		{
			float InWrestlerHpRatio;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InWrestlerHpRatio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerHpGauge_Statics::NewProp_InWrestlerHpRatio = { "InWrestlerHpRatio", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_WrestlerStatus_eventApplyWrestlerHpGauge_Parms, InWrestlerHpRatio), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerHpGauge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerHpGauge_Statics::NewProp_InWrestlerHpRatio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerHpGauge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerHpGauge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus, nullptr, "ApplyWrestlerHpGauge", nullptr, nullptr, sizeof(ELSSWidgetHUD_WrestlerStatus_eventApplyWrestlerHpGauge_Parms), Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerHpGauge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerHpGauge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerHpGauge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerHpGauge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerHpGauge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerHpGauge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_Init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_OnPauseGetMedalAnim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_OnPauseGetMedalAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_OnPauseGetMedalAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus, nullptr, "OnPauseGetMedalAnim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_OnPauseGetMedalAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_OnPauseGetMedalAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_OnPauseGetMedalAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_OnPauseGetMedalAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_SetGamerTag_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_SetGamerTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_SetGamerTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus, nullptr, "SetGamerTag", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_SetGamerTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_SetGamerTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_SetGamerTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_SetGamerTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_SetUserGamerTag_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InGamerTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InGamerTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_SetUserGamerTag_Statics::NewProp_InGamerTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_SetUserGamerTag_Statics::NewProp_InGamerTag = { "InGamerTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_WrestlerStatus_eventSetUserGamerTag_Parms, InGamerTag), METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_SetUserGamerTag_Statics::NewProp_InGamerTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_SetUserGamerTag_Statics::NewProp_InGamerTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_SetUserGamerTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_SetUserGamerTag_Statics::NewProp_InGamerTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_SetUserGamerTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_SetUserGamerTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus, nullptr, "SetUserGamerTag", nullptr, nullptr, sizeof(ELSSWidgetHUD_WrestlerStatus_eventSetUserGamerTag_Parms), Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_SetUserGamerTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_SetUserGamerTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_SetUserGamerTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_SetUserGamerTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_SetUserGamerTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_SetUserGamerTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_SwitchHpType_Statics
	{
		struct ELSSWidgetHUD_WrestlerStatus_eventSwitchHpType_Parms
		{
			bool InIsDownHpShow;
		};
		static void NewProp_InIsDownHpShow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsDownHpShow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_SwitchHpType_Statics::NewProp_InIsDownHpShow_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_WrestlerStatus_eventSwitchHpType_Parms*)Obj)->InIsDownHpShow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_SwitchHpType_Statics::NewProp_InIsDownHpShow = { "InIsDownHpShow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_WrestlerStatus_eventSwitchHpType_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_SwitchHpType_Statics::NewProp_InIsDownHpShow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_SwitchHpType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_SwitchHpType_Statics::NewProp_InIsDownHpShow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_SwitchHpType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_SwitchHpType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus, nullptr, "SwitchHpType", nullptr, nullptr, sizeof(ELSSWidgetHUD_WrestlerStatus_eventSwitchHpType_Parms), Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_SwitchHpType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_SwitchHpType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_SwitchHpType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_SwitchHpType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_SwitchHpType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_SwitchHpType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_Update_Statics
	{
		struct ELSSWidgetHUD_WrestlerStatus_eventUpdate_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_Update_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_WrestlerStatus_eventUpdate_Parms, InDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_Update_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus, nullptr, "Update", nullptr, nullptr, sizeof(ELSSWidgetHUD_WrestlerStatus_eventUpdate_Parms), Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_UpdateDownHp_Statics
	{
		struct ELSSWidgetHUD_WrestlerStatus_eventUpdateDownHp_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_UpdateDownHp_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_WrestlerStatus_eventUpdateDownHp_Parms, InDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_UpdateDownHp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_UpdateDownHp_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_UpdateDownHp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_UpdateDownHp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus, nullptr, "UpdateDownHp", nullptr, nullptr, sizeof(ELSSWidgetHUD_WrestlerStatus_eventUpdateDownHp_Parms), Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_UpdateDownHp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_UpdateDownHp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_UpdateDownHp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_UpdateDownHp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_UpdateDownHp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_UpdateDownHp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_UpdateShield_Statics
	{
		struct ELSSWidgetHUD_WrestlerStatus_eventUpdateShield_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_UpdateShield_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_WrestlerStatus_eventUpdateShield_Parms, InDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_UpdateShield_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_UpdateShield_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_UpdateShield_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_UpdateShield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus, nullptr, "UpdateShield", nullptr, nullptr, sizeof(ELSSWidgetHUD_WrestlerStatus_eventUpdateShield_Parms), Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_UpdateShield_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_UpdateShield_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_UpdateShield_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_UpdateShield_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_UpdateShield()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_UpdateShield_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_UpdateWrestlerHp_Statics
	{
		struct ELSSWidgetHUD_WrestlerStatus_eventUpdateWrestlerHp_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_UpdateWrestlerHp_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_WrestlerStatus_eventUpdateWrestlerHp_Parms, InDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_UpdateWrestlerHp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_UpdateWrestlerHp_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_UpdateWrestlerHp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_UpdateWrestlerHp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus, nullptr, "UpdateWrestlerHp", nullptr, nullptr, sizeof(ELSSWidgetHUD_WrestlerStatus_eventUpdateWrestlerHp_Parms), Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_UpdateWrestlerHp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_UpdateWrestlerHp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_UpdateWrestlerHp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_UpdateWrestlerHp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_UpdateWrestlerHp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_UpdateWrestlerHp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_NoRegister()
	{
		return UELSSWidgetHUD_WrestlerStatus::StaticClass();
	}
	struct Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShieldGaugeMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShieldGaugeMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShieldGaugeDiffMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShieldGaugeDiffMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HpGaugeMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HpGaugeMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HpGaugeDiffMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HpGaugeDiffMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KOGaugeMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KOGaugeMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MedalGetAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MedalGetAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MedalReleaseAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MedalReleaseAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HpGaugeImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HpGaugeImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownHpGaugeImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DownHpGaugeImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShieldWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShieldWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShieldDurableMaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ShieldDurableMaxValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HpMaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HpMaxValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownHpMaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DownHpMaxValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdealShieldDurableValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IdealShieldDurableValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdealHp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IdealHp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdealDownHp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IdealDownHp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShieldDurableValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShieldDurableValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerHp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WrestlerHp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerDownHp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WrestlerDownHp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShieldDurableValueDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShieldDurableValueDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HpDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HpDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownHpDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DownHpDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShieldDurableElapsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShieldDurableElapsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HpElapsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HpElapsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownHpElapsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DownHpElapsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCompleteShieldDuration_MetaData[];
#endif
		static void NewProp_IsCompleteShieldDuration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCompleteShieldDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCompleteHpDuration_MetaData[];
#endif
		static void NewProp_IsCompleteHpDuration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCompleteHpDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCompleteDownHpDuration_MetaData[];
#endif
		static void NewProp_IsCompleteDownHpDuration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCompleteDownHpDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsShowDownHp_MetaData[];
#endif
		static void NewProp_IsShowDownHp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsShowDownHp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsShowShieldGauge_MetaData[];
#endif
		static void NewProp_IsShowShieldGauge_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsShowShieldGauge;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyCarrotMedal, "ApplyCarrotMedal" }, // 2386107694
		{ &Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyDownHp, "ApplyDownHp" }, // 2486363003
		{ &Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyShieldDurableValue, "ApplyShieldDurableValue" }, // 316554537
		{ &Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyShieldGauge, "ApplyShieldGauge" }, // 2802136961
		{ &Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerDownHpGauge, "ApplyWrestlerDownHpGauge" }, // 544299367
		{ &Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerHp, "ApplyWrestlerHp" }, // 2054197968
		{ &Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_ApplyWrestlerHpGauge, "ApplyWrestlerHpGauge" }, // 2175492926
		{ &Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_Init, "Init" }, // 3861543665
		{ &Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_OnPauseGetMedalAnim, "OnPauseGetMedalAnim" }, // 1341114305
		{ &Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_SetGamerTag, "SetGamerTag" }, // 951564553
		{ &Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_SetUserGamerTag, "SetUserGamerTag" }, // 1646611221
		{ &Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_SwitchHpType, "SwitchHpType" }, // 1858298654
		{ &Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_Update, "Update" }, // 3040530174
		{ &Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_UpdateDownHp, "UpdateDownHp" }, // 536580277
		{ &Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_UpdateShield, "UpdateShield" }, // 825207062
		{ &Z_Construct_UFunction_UELSSWidgetHUD_WrestlerStatus_UpdateWrestlerHp, "UpdateWrestlerHp" }, // 365819316
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWidgetHUD_WrestlerStatus.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_ShieldGaugeMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_WrestlerStatus" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_ShieldGaugeMaterial = { "ShieldGaugeMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, ShieldGaugeMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_ShieldGaugeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_ShieldGaugeMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_ShieldGaugeDiffMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_WrestlerStatus" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_ShieldGaugeDiffMaterial = { "ShieldGaugeDiffMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, ShieldGaugeDiffMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_ShieldGaugeDiffMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_ShieldGaugeDiffMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_HpGaugeMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_WrestlerStatus" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_HpGaugeMaterial = { "HpGaugeMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, HpGaugeMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_HpGaugeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_HpGaugeMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_HpGaugeDiffMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_WrestlerStatus" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_HpGaugeDiffMaterial = { "HpGaugeDiffMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, HpGaugeDiffMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_HpGaugeDiffMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_HpGaugeDiffMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_KOGaugeMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_WrestlerStatus" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_KOGaugeMaterial = { "KOGaugeMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, KOGaugeMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_KOGaugeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_KOGaugeMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_MedalGetAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_WrestlerStatus" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_MedalGetAnim = { "MedalGetAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, MedalGetAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_MedalGetAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_MedalGetAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_MedalReleaseAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_WrestlerStatus" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_MedalReleaseAnim = { "MedalReleaseAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, MedalReleaseAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_MedalReleaseAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_MedalReleaseAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_HpGaugeImage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_WrestlerStatus" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_HpGaugeImage = { "HpGaugeImage", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, HpGaugeImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_HpGaugeImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_HpGaugeImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_DownHpGaugeImage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_WrestlerStatus" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_DownHpGaugeImage = { "DownHpGaugeImage", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, DownHpGaugeImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_DownHpGaugeImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_DownHpGaugeImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_ShieldWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_WrestlerStatus" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_ShieldWidget = { "ShieldWidget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, ShieldWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_ShieldWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_ShieldWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_ShieldDurableMaxValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_WrestlerStatus" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_ShieldDurableMaxValue = { "ShieldDurableMaxValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, ShieldDurableMaxValue), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_ShieldDurableMaxValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_ShieldDurableMaxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_HpMaxValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_WrestlerStatus" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_HpMaxValue = { "HpMaxValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, HpMaxValue), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_HpMaxValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_HpMaxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_DownHpMaxValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_WrestlerStatus" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_DownHpMaxValue = { "DownHpMaxValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, DownHpMaxValue), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_DownHpMaxValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_DownHpMaxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IdealShieldDurableValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_WrestlerStatus" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IdealShieldDurableValue = { "IdealShieldDurableValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, IdealShieldDurableValue), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IdealShieldDurableValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IdealShieldDurableValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IdealHp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_WrestlerStatus" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IdealHp = { "IdealHp", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, IdealHp), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IdealHp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IdealHp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IdealDownHp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_WrestlerStatus" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IdealDownHp = { "IdealDownHp", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, IdealDownHp), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IdealDownHp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IdealDownHp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_ShieldDurableValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_WrestlerStatus" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_ShieldDurableValue = { "ShieldDurableValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, ShieldDurableValue), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_ShieldDurableValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_ShieldDurableValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_WrestlerHp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_WrestlerStatus" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_WrestlerHp = { "WrestlerHp", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, WrestlerHp), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_WrestlerHp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_WrestlerHp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_WrestlerDownHp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_WrestlerStatus" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_WrestlerDownHp = { "WrestlerDownHp", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, WrestlerDownHp), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_WrestlerDownHp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_WrestlerDownHp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_ShieldDurableValueDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_WrestlerStatus" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_ShieldDurableValueDuration = { "ShieldDurableValueDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, ShieldDurableValueDuration), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_ShieldDurableValueDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_ShieldDurableValueDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_HpDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_WrestlerStatus" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_HpDuration = { "HpDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, HpDuration), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_HpDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_HpDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_DownHpDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_WrestlerStatus" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_DownHpDuration = { "DownHpDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, DownHpDuration), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_DownHpDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_DownHpDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_ShieldDurableElapsed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_WrestlerStatus" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_ShieldDurableElapsed = { "ShieldDurableElapsed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, ShieldDurableElapsed), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_ShieldDurableElapsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_ShieldDurableElapsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_HpElapsed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_WrestlerStatus" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_HpElapsed = { "HpElapsed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, HpElapsed), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_HpElapsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_HpElapsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_DownHpElapsed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_WrestlerStatus" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_DownHpElapsed = { "DownHpElapsed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, DownHpElapsed), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_DownHpElapsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_DownHpElapsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IsCompleteShieldDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_WrestlerStatus" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IsCompleteShieldDuration_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_WrestlerStatus*)Obj)->IsCompleteShieldDuration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IsCompleteShieldDuration = { "IsCompleteShieldDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_WrestlerStatus), &Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IsCompleteShieldDuration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IsCompleteShieldDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IsCompleteShieldDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IsCompleteHpDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_WrestlerStatus" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IsCompleteHpDuration_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_WrestlerStatus*)Obj)->IsCompleteHpDuration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IsCompleteHpDuration = { "IsCompleteHpDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_WrestlerStatus), &Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IsCompleteHpDuration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IsCompleteHpDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IsCompleteHpDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IsCompleteDownHpDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_WrestlerStatus" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IsCompleteDownHpDuration_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_WrestlerStatus*)Obj)->IsCompleteDownHpDuration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IsCompleteDownHpDuration = { "IsCompleteDownHpDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_WrestlerStatus), &Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IsCompleteDownHpDuration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IsCompleteDownHpDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IsCompleteDownHpDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IsShowDownHp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_WrestlerStatus" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IsShowDownHp_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_WrestlerStatus*)Obj)->IsShowDownHp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IsShowDownHp = { "IsShowDownHp", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_WrestlerStatus), &Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IsShowDownHp_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IsShowDownHp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IsShowDownHp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IsShowShieldGauge_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_WrestlerStatus" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_WrestlerStatus.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IsShowShieldGauge_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_WrestlerStatus*)Obj)->IsShowShieldGauge = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IsShowShieldGauge = { "IsShowShieldGauge", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_WrestlerStatus), &Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IsShowShieldGauge_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IsShowShieldGauge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IsShowShieldGauge_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_ShieldGaugeMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_ShieldGaugeDiffMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_HpGaugeMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_HpGaugeDiffMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_KOGaugeMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_MedalGetAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_MedalReleaseAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_HpGaugeImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_DownHpGaugeImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_ShieldWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_ShieldDurableMaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_HpMaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_DownHpMaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IdealShieldDurableValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IdealHp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IdealDownHp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_ShieldDurableValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_WrestlerHp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_WrestlerDownHp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_ShieldDurableValueDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_HpDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_DownHpDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_ShieldDurableElapsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_HpElapsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_DownHpElapsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IsCompleteShieldDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IsCompleteHpDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IsCompleteDownHpDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IsShowDownHp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::NewProp_IsShowShieldGauge,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSWidgetHUD_WrestlerStatus>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::ClassParams = {
		&UELSSWidgetHUD_WrestlerStatus::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSWidgetHUD_WrestlerStatus, 282660641);
	template<> ABP_200508_API UClass* StaticClass<UELSSWidgetHUD_WrestlerStatus>()
	{
		return UELSSWidgetHUD_WrestlerStatus::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSWidgetHUD_WrestlerStatus(Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus, &UELSSWidgetHUD_WrestlerStatus::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSWidgetHUD_WrestlerStatus"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSWidgetHUD_WrestlerStatus);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
