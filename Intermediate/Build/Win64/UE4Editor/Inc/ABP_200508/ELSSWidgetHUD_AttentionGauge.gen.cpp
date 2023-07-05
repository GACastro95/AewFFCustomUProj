// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWidgetHUD_AttentionGauge.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWidgetHUD_AttentionGauge() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSAttentionReason();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSAttentionGaugeStateLevel();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSSWidgetHUD_AttentionGauge::execApplyAttentionBoostValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InAttentionBoostValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyAttentionBoostValue(Z_Param_InAttentionBoostValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_AttentionGauge::execApplyAttentionPts)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InAttentionValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyAttentionPts(Z_Param_InAttentionValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_AttentionGauge::execApplyAttentionValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InAttentionValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_InAddValue);
		P_GET_ENUM(ESSAttentionReason,Z_Param_InActType);
		P_GET_UBOOL(Z_Param_InGaugeTransition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyAttentionValue(Z_Param_InAttentionValue,Z_Param_InAddValue,ESSAttentionReason(Z_Param_InActType),Z_Param_InGaugeTransition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_AttentionGauge::execApplyIconAnim)
	{
		P_GET_ENUM(ESSAttentionGaugeStateLevel,Z_Param_inState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyIconAnim(ESSAttentionGaugeStateLevel(Z_Param_inState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_AttentionGauge::execApplyMaxAttentionValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InMaxAttentionValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyMaxAttentionValue(Z_Param_InMaxAttentionValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_AttentionGauge::execGetAttentionPointFromStack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAttentionPointFromStack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_AttentionGauge::execGetBoostText)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InAttentionBoostValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetBoostText(Z_Param_InAttentionBoostValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_AttentionGauge::execMovePointArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MovePointArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_AttentionGauge::execResetAttentionGauge)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetAttentionGauge();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_AttentionGauge::execSetAttentionPointToStack)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InAddValue);
		P_GET_ENUM(ESSAttentionReason,Z_Param_InActType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttentionPointToStack(Z_Param_InAddValue,ESSAttentionReason(Z_Param_InActType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_AttentionGauge::execSetVisibleFeverEffect)
	{
		P_GET_UBOOL(Z_Param_inIsVisible);
		P_GET_UBOOL(Z_Param_InPlayStartSE);
		P_GET_UBOOL(Z_Param_InPlayEndSE);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibleFeverEffect(Z_Param_inIsVisible,Z_Param_InPlayStartSE,Z_Param_InPlayEndSE);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_AttentionGauge::execSortToIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InFromIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_InToIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SortToIndex(Z_Param_InFromIndex,Z_Param_InToIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_AttentionGauge::execUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update(Z_Param_InDeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_AttentionGauge::execUpdateAttentionValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAttentionValue(Z_Param_InDeltaTime);
		P_NATIVE_END;
	}
	static FName NAME_UELSSWidgetHUD_AttentionGauge_ApplyBoostText = FName(TEXT("ApplyBoostText"));
	void UELSSWidgetHUD_AttentionGauge::ApplyBoostText(float InAttentionBoostValue)
	{
		ELSSWidgetHUD_AttentionGauge_eventApplyBoostText_Parms Parms;
		Parms.InAttentionBoostValue=InAttentionBoostValue;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_AttentionGauge_ApplyBoostText),&Parms);
	}
	static FName NAME_UELSSWidgetHUD_AttentionGauge_Init = FName(TEXT("Init"));
	void UELSSWidgetHUD_AttentionGauge::Init()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_AttentionGauge_Init),NULL);
	}
	static FName NAME_UELSSWidgetHUD_AttentionGauge_OnEndFeverAnim = FName(TEXT("OnEndFeverAnim"));
	void UELSSWidgetHUD_AttentionGauge::OnEndFeverAnim(bool InPlaySound)
	{
		ELSSWidgetHUD_AttentionGauge_eventOnEndFeverAnim_Parms Parms;
		Parms.InPlaySound=InPlaySound ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_AttentionGauge_OnEndFeverAnim),&Parms);
	}
	static FName NAME_UELSSWidgetHUD_AttentionGauge_OnStartFeverAnim = FName(TEXT("OnStartFeverAnim"));
	void UELSSWidgetHUD_AttentionGauge::OnStartFeverAnim(bool InPlaySound)
	{
		ELSSWidgetHUD_AttentionGauge_eventOnStartFeverAnim_Parms Parms;
		Parms.InPlaySound=InPlaySound ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_AttentionGauge_OnStartFeverAnim),&Parms);
	}
	void UELSSWidgetHUD_AttentionGauge::StaticRegisterNativesUELSSWidgetHUD_AttentionGauge()
	{
		UClass* Class = UELSSWidgetHUD_AttentionGauge::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyAttentionBoostValue", &UELSSWidgetHUD_AttentionGauge::execApplyAttentionBoostValue },
			{ "ApplyAttentionPts", &UELSSWidgetHUD_AttentionGauge::execApplyAttentionPts },
			{ "ApplyAttentionValue", &UELSSWidgetHUD_AttentionGauge::execApplyAttentionValue },
			{ "ApplyIconAnim", &UELSSWidgetHUD_AttentionGauge::execApplyIconAnim },
			{ "ApplyMaxAttentionValue", &UELSSWidgetHUD_AttentionGauge::execApplyMaxAttentionValue },
			{ "GetAttentionPointFromStack", &UELSSWidgetHUD_AttentionGauge::execGetAttentionPointFromStack },
			{ "GetBoostText", &UELSSWidgetHUD_AttentionGauge::execGetBoostText },
			{ "MovePointArray", &UELSSWidgetHUD_AttentionGauge::execMovePointArray },
			{ "ResetAttentionGauge", &UELSSWidgetHUD_AttentionGauge::execResetAttentionGauge },
			{ "SetAttentionPointToStack", &UELSSWidgetHUD_AttentionGauge::execSetAttentionPointToStack },
			{ "SetVisibleFeverEffect", &UELSSWidgetHUD_AttentionGauge::execSetVisibleFeverEffect },
			{ "SortToIndex", &UELSSWidgetHUD_AttentionGauge::execSortToIndex },
			{ "Update", &UELSSWidgetHUD_AttentionGauge::execUpdate },
			{ "UpdateAttentionValue", &UELSSWidgetHUD_AttentionGauge::execUpdateAttentionValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionBoostValue_Statics
	{
		struct ELSSWidgetHUD_AttentionGauge_eventApplyAttentionBoostValue_Parms
		{
			float InAttentionBoostValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InAttentionBoostValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionBoostValue_Statics::NewProp_InAttentionBoostValue = { "InAttentionBoostValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_AttentionGauge_eventApplyAttentionBoostValue_Parms, InAttentionBoostValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionBoostValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionBoostValue_Statics::NewProp_InAttentionBoostValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionBoostValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionBoostValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge, nullptr, "ApplyAttentionBoostValue", nullptr, nullptr, sizeof(ELSSWidgetHUD_AttentionGauge_eventApplyAttentionBoostValue_Parms), Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionBoostValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionBoostValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionBoostValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionBoostValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionBoostValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionBoostValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionPts_Statics
	{
		struct ELSSWidgetHUD_AttentionGauge_eventApplyAttentionPts_Parms
		{
			int32 InAttentionValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InAttentionValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionPts_Statics::NewProp_InAttentionValue = { "InAttentionValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_AttentionGauge_eventApplyAttentionPts_Parms, InAttentionValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionPts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionPts_Statics::NewProp_InAttentionValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionPts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionPts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge, nullptr, "ApplyAttentionPts", nullptr, nullptr, sizeof(ELSSWidgetHUD_AttentionGauge_eventApplyAttentionPts_Parms), Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionPts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionPts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionPts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionPts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionPts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionPts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionValue_Statics
	{
		struct ELSSWidgetHUD_AttentionGauge_eventApplyAttentionValue_Parms
		{
			int32 InAttentionValue;
			int32 InAddValue;
			ESSAttentionReason InActType;
			bool InGaugeTransition;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InAttentionValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InAddValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InActType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InActType;
		static void NewProp_InGaugeTransition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InGaugeTransition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionValue_Statics::NewProp_InAttentionValue = { "InAttentionValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_AttentionGauge_eventApplyAttentionValue_Parms, InAttentionValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionValue_Statics::NewProp_InAddValue = { "InAddValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_AttentionGauge_eventApplyAttentionValue_Parms, InAddValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionValue_Statics::NewProp_InActType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionValue_Statics::NewProp_InActType = { "InActType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_AttentionGauge_eventApplyAttentionValue_Parms, InActType), Z_Construct_UEnum_ABP_200508_ESSAttentionReason, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionValue_Statics::NewProp_InGaugeTransition_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_AttentionGauge_eventApplyAttentionValue_Parms*)Obj)->InGaugeTransition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionValue_Statics::NewProp_InGaugeTransition = { "InGaugeTransition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_AttentionGauge_eventApplyAttentionValue_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionValue_Statics::NewProp_InGaugeTransition_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionValue_Statics::NewProp_InAttentionValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionValue_Statics::NewProp_InAddValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionValue_Statics::NewProp_InActType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionValue_Statics::NewProp_InActType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionValue_Statics::NewProp_InGaugeTransition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge, nullptr, "ApplyAttentionValue", nullptr, nullptr, sizeof(ELSSWidgetHUD_AttentionGauge_eventApplyAttentionValue_Parms), Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyBoostText_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InAttentionBoostValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyBoostText_Statics::NewProp_InAttentionBoostValue = { "InAttentionBoostValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_AttentionGauge_eventApplyBoostText_Parms, InAttentionBoostValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyBoostText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyBoostText_Statics::NewProp_InAttentionBoostValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyBoostText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyBoostText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge, nullptr, "ApplyBoostText", nullptr, nullptr, sizeof(ELSSWidgetHUD_AttentionGauge_eventApplyBoostText_Parms), Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyBoostText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyBoostText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyBoostText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyBoostText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyBoostText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyBoostText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyIconAnim_Statics
	{
		struct ELSSWidgetHUD_AttentionGauge_eventApplyIconAnim_Parms
		{
			ESSAttentionGaugeStateLevel inState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyIconAnim_Statics::NewProp_inState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyIconAnim_Statics::NewProp_inState = { "inState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_AttentionGauge_eventApplyIconAnim_Parms, inState), Z_Construct_UEnum_ABP_200508_ESSAttentionGaugeStateLevel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyIconAnim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyIconAnim_Statics::NewProp_inState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyIconAnim_Statics::NewProp_inState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyIconAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyIconAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge, nullptr, "ApplyIconAnim", nullptr, nullptr, sizeof(ELSSWidgetHUD_AttentionGauge_eventApplyIconAnim_Parms), Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyIconAnim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyIconAnim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyIconAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyIconAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyIconAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyIconAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyMaxAttentionValue_Statics
	{
		struct ELSSWidgetHUD_AttentionGauge_eventApplyMaxAttentionValue_Parms
		{
			int32 InMaxAttentionValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InMaxAttentionValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyMaxAttentionValue_Statics::NewProp_InMaxAttentionValue = { "InMaxAttentionValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_AttentionGauge_eventApplyMaxAttentionValue_Parms, InMaxAttentionValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyMaxAttentionValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyMaxAttentionValue_Statics::NewProp_InMaxAttentionValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyMaxAttentionValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyMaxAttentionValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge, nullptr, "ApplyMaxAttentionValue", nullptr, nullptr, sizeof(ELSSWidgetHUD_AttentionGauge_eventApplyMaxAttentionValue_Parms), Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyMaxAttentionValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyMaxAttentionValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyMaxAttentionValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyMaxAttentionValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyMaxAttentionValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyMaxAttentionValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_GetAttentionPointFromStack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_GetAttentionPointFromStack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_GetAttentionPointFromStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge, nullptr, "GetAttentionPointFromStack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_GetAttentionPointFromStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_GetAttentionPointFromStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_GetAttentionPointFromStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_GetAttentionPointFromStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_GetBoostText_Statics
	{
		struct ELSSWidgetHUD_AttentionGauge_eventGetBoostText_Parms
		{
			float InAttentionBoostValue;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InAttentionBoostValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_GetBoostText_Statics::NewProp_InAttentionBoostValue = { "InAttentionBoostValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_AttentionGauge_eventGetBoostText_Parms, InAttentionBoostValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_GetBoostText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_AttentionGauge_eventGetBoostText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_GetBoostText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_GetBoostText_Statics::NewProp_InAttentionBoostValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_GetBoostText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_GetBoostText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_GetBoostText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge, nullptr, "GetBoostText", nullptr, nullptr, sizeof(ELSSWidgetHUD_AttentionGauge_eventGetBoostText_Parms), Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_GetBoostText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_GetBoostText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_GetBoostText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_GetBoostText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_GetBoostText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_GetBoostText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_Init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_MovePointArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_MovePointArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_MovePointArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge, nullptr, "MovePointArray", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_MovePointArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_MovePointArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_MovePointArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_MovePointArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_OnEndFeverAnim_Statics
	{
		static void NewProp_InPlaySound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InPlaySound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_OnEndFeverAnim_Statics::NewProp_InPlaySound_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_AttentionGauge_eventOnEndFeverAnim_Parms*)Obj)->InPlaySound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_OnEndFeverAnim_Statics::NewProp_InPlaySound = { "InPlaySound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_AttentionGauge_eventOnEndFeverAnim_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_OnEndFeverAnim_Statics::NewProp_InPlaySound_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_OnEndFeverAnim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_OnEndFeverAnim_Statics::NewProp_InPlaySound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_OnEndFeverAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_OnEndFeverAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge, nullptr, "OnEndFeverAnim", nullptr, nullptr, sizeof(ELSSWidgetHUD_AttentionGauge_eventOnEndFeverAnim_Parms), Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_OnEndFeverAnim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_OnEndFeverAnim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_OnEndFeverAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_OnEndFeverAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_OnEndFeverAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_OnEndFeverAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_OnStartFeverAnim_Statics
	{
		static void NewProp_InPlaySound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InPlaySound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_OnStartFeverAnim_Statics::NewProp_InPlaySound_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_AttentionGauge_eventOnStartFeverAnim_Parms*)Obj)->InPlaySound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_OnStartFeverAnim_Statics::NewProp_InPlaySound = { "InPlaySound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_AttentionGauge_eventOnStartFeverAnim_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_OnStartFeverAnim_Statics::NewProp_InPlaySound_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_OnStartFeverAnim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_OnStartFeverAnim_Statics::NewProp_InPlaySound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_OnStartFeverAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_OnStartFeverAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge, nullptr, "OnStartFeverAnim", nullptr, nullptr, sizeof(ELSSWidgetHUD_AttentionGauge_eventOnStartFeverAnim_Parms), Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_OnStartFeverAnim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_OnStartFeverAnim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_OnStartFeverAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_OnStartFeverAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_OnStartFeverAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_OnStartFeverAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ResetAttentionGauge_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ResetAttentionGauge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ResetAttentionGauge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge, nullptr, "ResetAttentionGauge", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ResetAttentionGauge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ResetAttentionGauge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ResetAttentionGauge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ResetAttentionGauge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SetAttentionPointToStack_Statics
	{
		struct ELSSWidgetHUD_AttentionGauge_eventSetAttentionPointToStack_Parms
		{
			int32 InAddValue;
			ESSAttentionReason InActType;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InAddValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InActType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InActType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SetAttentionPointToStack_Statics::NewProp_InAddValue = { "InAddValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_AttentionGauge_eventSetAttentionPointToStack_Parms, InAddValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SetAttentionPointToStack_Statics::NewProp_InActType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SetAttentionPointToStack_Statics::NewProp_InActType = { "InActType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_AttentionGauge_eventSetAttentionPointToStack_Parms, InActType), Z_Construct_UEnum_ABP_200508_ESSAttentionReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SetAttentionPointToStack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SetAttentionPointToStack_Statics::NewProp_InAddValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SetAttentionPointToStack_Statics::NewProp_InActType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SetAttentionPointToStack_Statics::NewProp_InActType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SetAttentionPointToStack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SetAttentionPointToStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge, nullptr, "SetAttentionPointToStack", nullptr, nullptr, sizeof(ELSSWidgetHUD_AttentionGauge_eventSetAttentionPointToStack_Parms), Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SetAttentionPointToStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SetAttentionPointToStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SetAttentionPointToStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SetAttentionPointToStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SetAttentionPointToStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SetAttentionPointToStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SetVisibleFeverEffect_Statics
	{
		struct ELSSWidgetHUD_AttentionGauge_eventSetVisibleFeverEffect_Parms
		{
			bool inIsVisible;
			bool InPlayStartSE;
			bool InPlayEndSE;
		};
		static void NewProp_inIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inIsVisible;
		static void NewProp_InPlayStartSE_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InPlayStartSE;
		static void NewProp_InPlayEndSE_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InPlayEndSE;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SetVisibleFeverEffect_Statics::NewProp_inIsVisible_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_AttentionGauge_eventSetVisibleFeverEffect_Parms*)Obj)->inIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SetVisibleFeverEffect_Statics::NewProp_inIsVisible = { "inIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_AttentionGauge_eventSetVisibleFeverEffect_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SetVisibleFeverEffect_Statics::NewProp_inIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SetVisibleFeverEffect_Statics::NewProp_InPlayStartSE_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_AttentionGauge_eventSetVisibleFeverEffect_Parms*)Obj)->InPlayStartSE = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SetVisibleFeverEffect_Statics::NewProp_InPlayStartSE = { "InPlayStartSE", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_AttentionGauge_eventSetVisibleFeverEffect_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SetVisibleFeverEffect_Statics::NewProp_InPlayStartSE_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SetVisibleFeverEffect_Statics::NewProp_InPlayEndSE_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_AttentionGauge_eventSetVisibleFeverEffect_Parms*)Obj)->InPlayEndSE = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SetVisibleFeverEffect_Statics::NewProp_InPlayEndSE = { "InPlayEndSE", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_AttentionGauge_eventSetVisibleFeverEffect_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SetVisibleFeverEffect_Statics::NewProp_InPlayEndSE_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SetVisibleFeverEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SetVisibleFeverEffect_Statics::NewProp_inIsVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SetVisibleFeverEffect_Statics::NewProp_InPlayStartSE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SetVisibleFeverEffect_Statics::NewProp_InPlayEndSE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SetVisibleFeverEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SetVisibleFeverEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge, nullptr, "SetVisibleFeverEffect", nullptr, nullptr, sizeof(ELSSWidgetHUD_AttentionGauge_eventSetVisibleFeverEffect_Parms), Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SetVisibleFeverEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SetVisibleFeverEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SetVisibleFeverEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SetVisibleFeverEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SetVisibleFeverEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SetVisibleFeverEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SortToIndex_Statics
	{
		struct ELSSWidgetHUD_AttentionGauge_eventSortToIndex_Parms
		{
			int32 InFromIndex;
			int32 InToIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InFromIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InToIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SortToIndex_Statics::NewProp_InFromIndex = { "InFromIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_AttentionGauge_eventSortToIndex_Parms, InFromIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SortToIndex_Statics::NewProp_InToIndex = { "InToIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_AttentionGauge_eventSortToIndex_Parms, InToIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SortToIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SortToIndex_Statics::NewProp_InFromIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SortToIndex_Statics::NewProp_InToIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SortToIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SortToIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge, nullptr, "SortToIndex", nullptr, nullptr, sizeof(ELSSWidgetHUD_AttentionGauge_eventSortToIndex_Parms), Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SortToIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SortToIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SortToIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SortToIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SortToIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SortToIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_Update_Statics
	{
		struct ELSSWidgetHUD_AttentionGauge_eventUpdate_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_Update_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_AttentionGauge_eventUpdate_Parms, InDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_Update_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge, nullptr, "Update", nullptr, nullptr, sizeof(ELSSWidgetHUD_AttentionGauge_eventUpdate_Parms), Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_UpdateAttentionValue_Statics
	{
		struct ELSSWidgetHUD_AttentionGauge_eventUpdateAttentionValue_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_UpdateAttentionValue_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_AttentionGauge_eventUpdateAttentionValue_Parms, InDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_UpdateAttentionValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_UpdateAttentionValue_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_UpdateAttentionValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_UpdateAttentionValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge, nullptr, "UpdateAttentionValue", nullptr, nullptr, sizeof(ELSSWidgetHUD_AttentionGauge_eventUpdateAttentionValue_Parms), Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_UpdateAttentionValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_UpdateAttentionValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_UpdateAttentionValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_UpdateAttentionValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_UpdateAttentionValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_UpdateAttentionValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_NoRegister()
	{
		return UELSSWidgetHUD_AttentionGauge::StaticClass();
	}
	struct Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FeverEndAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FeverEndAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FeverStartAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FeverStartAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FeverLoopAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FeverLoopAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrowdIconLowAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrowdIconLowAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrowdIconMidAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrowdIconMidAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrowdIconHighAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrowdIconHighAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuffInAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BuffInAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuffOutAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BuffOutAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttentionPtsM_1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttentionPtsM_1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttentionPtsM_10_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttentionPtsM_10;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttentionPtsM_100_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttentionPtsM_100;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttentionPtsM_1000_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttentionPtsM_1000;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAttentionPtsM_1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaxAttentionPtsM_1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAttentionPtsM_10_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaxAttentionPtsM_10;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAttentionPtsM_100_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaxAttentionPtsM_100;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAttentionPtsM_1000_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaxAttentionPtsM_1000;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PtsVerticalBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PtsVerticalBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttentionPts_1000Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttentionPts_1000Widget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttentionPts_100Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttentionPts_100Widget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttentionPts_10Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttentionPts_10Widget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAttentionPts_1000Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaxAttentionPts_1000Widget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAttentionPts_100Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaxAttentionPts_100Widget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAttentionPts_10Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaxAttentionPts_10Widget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointArray_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PointArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PointArray;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddValueArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddValueArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AddValueArray;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttentionReasonArray_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttentionReasonArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttentionReasonArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttentionReasonArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCompleteDuration_MetaData[];
#endif
		static void NewProp_IsCompleteDuration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCompleteDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsFeverTime_MetaData[];
#endif
		static void NewProp_IsFeverTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsFeverTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsBoostTextShow_MetaData[];
#endif
		static void NewProp_IsBoostTextShow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsBoostTextShow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttentionElapsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttentionElapsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAttentionValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxAttentionValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttentionDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttentionDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttentionValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttentionValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdealAttentionValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IdealAttentionValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StackIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionBoostValue, "ApplyAttentionBoostValue" }, // 2185019562
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionPts, "ApplyAttentionPts" }, // 2200478996
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyAttentionValue, "ApplyAttentionValue" }, // 586265299
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyBoostText, "ApplyBoostText" }, // 3352514223
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyIconAnim, "ApplyIconAnim" }, // 777693383
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ApplyMaxAttentionValue, "ApplyMaxAttentionValue" }, // 3059677813
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_GetAttentionPointFromStack, "GetAttentionPointFromStack" }, // 356415082
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_GetBoostText, "GetBoostText" }, // 2354836307
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_Init, "Init" }, // 2429362012
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_MovePointArray, "MovePointArray" }, // 407014173
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_OnEndFeverAnim, "OnEndFeverAnim" }, // 1324735123
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_OnStartFeverAnim, "OnStartFeverAnim" }, // 1229371818
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_ResetAttentionGauge, "ResetAttentionGauge" }, // 1041309324
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SetAttentionPointToStack, "SetAttentionPointToStack" }, // 2838058867
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SetVisibleFeverEffect, "SetVisibleFeverEffect" }, // 3241190119
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_SortToIndex, "SortToIndex" }, // 2218080938
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_Update, "Update" }, // 885161940
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AttentionGauge_UpdateAttentionValue, "UpdateAttentionValue" }, // 360561080
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWidgetHUD_AttentionGauge.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_FeverEndAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_FeverEndAnim = { "FeverEndAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, FeverEndAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_FeverEndAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_FeverEndAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_FeverStartAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_FeverStartAnim = { "FeverStartAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, FeverStartAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_FeverStartAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_FeverStartAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_FeverLoopAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_FeverLoopAnim = { "FeverLoopAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, FeverLoopAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_FeverLoopAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_FeverLoopAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_CrowdIconLowAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_CrowdIconLowAnim = { "CrowdIconLowAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, CrowdIconLowAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_CrowdIconLowAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_CrowdIconLowAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_CrowdIconMidAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_CrowdIconMidAnim = { "CrowdIconMidAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, CrowdIconMidAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_CrowdIconMidAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_CrowdIconMidAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_CrowdIconHighAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_CrowdIconHighAnim = { "CrowdIconHighAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, CrowdIconHighAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_CrowdIconHighAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_CrowdIconHighAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_BuffInAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_BuffInAnim = { "BuffInAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, BuffInAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_BuffInAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_BuffInAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_BuffOutAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_BuffOutAnim = { "BuffOutAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, BuffOutAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_BuffOutAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_BuffOutAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionPtsM_1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionPtsM_1 = { "AttentionPtsM_1", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, AttentionPtsM_1), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionPtsM_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionPtsM_1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionPtsM_10_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionPtsM_10 = { "AttentionPtsM_10", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, AttentionPtsM_10), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionPtsM_10_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionPtsM_10_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionPtsM_100_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionPtsM_100 = { "AttentionPtsM_100", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, AttentionPtsM_100), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionPtsM_100_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionPtsM_100_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionPtsM_1000_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionPtsM_1000 = { "AttentionPtsM_1000", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, AttentionPtsM_1000), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionPtsM_1000_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionPtsM_1000_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_MaxAttentionPtsM_1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_MaxAttentionPtsM_1 = { "MaxAttentionPtsM_1", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, MaxAttentionPtsM_1), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_MaxAttentionPtsM_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_MaxAttentionPtsM_1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_MaxAttentionPtsM_10_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_MaxAttentionPtsM_10 = { "MaxAttentionPtsM_10", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, MaxAttentionPtsM_10), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_MaxAttentionPtsM_10_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_MaxAttentionPtsM_10_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_MaxAttentionPtsM_100_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_MaxAttentionPtsM_100 = { "MaxAttentionPtsM_100", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, MaxAttentionPtsM_100), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_MaxAttentionPtsM_100_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_MaxAttentionPtsM_100_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_MaxAttentionPtsM_1000_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_MaxAttentionPtsM_1000 = { "MaxAttentionPtsM_1000", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, MaxAttentionPtsM_1000), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_MaxAttentionPtsM_1000_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_MaxAttentionPtsM_1000_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_PtsVerticalBox_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionGauge" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_PtsVerticalBox = { "PtsVerticalBox", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, PtsVerticalBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_PtsVerticalBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_PtsVerticalBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionPts_1000Widget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionGauge" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionPts_1000Widget = { "AttentionPts_1000Widget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, AttentionPts_1000Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionPts_1000Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionPts_1000Widget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionPts_100Widget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionGauge" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionPts_100Widget = { "AttentionPts_100Widget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, AttentionPts_100Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionPts_100Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionPts_100Widget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionPts_10Widget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionGauge" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionPts_10Widget = { "AttentionPts_10Widget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, AttentionPts_10Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionPts_10Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionPts_10Widget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_MaxAttentionPts_1000Widget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionGauge" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_MaxAttentionPts_1000Widget = { "MaxAttentionPts_1000Widget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, MaxAttentionPts_1000Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_MaxAttentionPts_1000Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_MaxAttentionPts_1000Widget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_MaxAttentionPts_100Widget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionGauge" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_MaxAttentionPts_100Widget = { "MaxAttentionPts_100Widget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, MaxAttentionPts_100Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_MaxAttentionPts_100Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_MaxAttentionPts_100Widget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_MaxAttentionPts_10Widget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionGauge" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_MaxAttentionPts_10Widget = { "MaxAttentionPts_10Widget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, MaxAttentionPts_10Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_MaxAttentionPts_10Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_MaxAttentionPts_10Widget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_PointArray_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionGauge" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_PointArray_Inner = { "PointArray", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_PointArray_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_PointArray_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_PointArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionGauge" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_PointArray = { "PointArray", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, PointArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_PointArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_PointArray_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AddValueArray_Inner = { "AddValueArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AddValueArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AddValueArray = { "AddValueArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, AddValueArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AddValueArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AddValueArray_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionReasonArray_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionReasonArray_Inner = { "AttentionReasonArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ABP_200508_ESSAttentionReason, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionReasonArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionReasonArray = { "AttentionReasonArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, AttentionReasonArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionReasonArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionReasonArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_IsCompleteDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_IsCompleteDuration_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_AttentionGauge*)Obj)->IsCompleteDuration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_IsCompleteDuration = { "IsCompleteDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_AttentionGauge), &Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_IsCompleteDuration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_IsCompleteDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_IsCompleteDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_IsFeverTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_IsFeverTime_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_AttentionGauge*)Obj)->IsFeverTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_IsFeverTime = { "IsFeverTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_AttentionGauge), &Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_IsFeverTime_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_IsFeverTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_IsFeverTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_IsBoostTextShow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_IsBoostTextShow_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_AttentionGauge*)Obj)->IsBoostTextShow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_IsBoostTextShow = { "IsBoostTextShow", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_AttentionGauge), &Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_IsBoostTextShow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_IsBoostTextShow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_IsBoostTextShow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionElapsed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionElapsed = { "AttentionElapsed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, AttentionElapsed), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionElapsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionElapsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_MaxAttentionValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_MaxAttentionValue = { "MaxAttentionValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, MaxAttentionValue), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_MaxAttentionValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_MaxAttentionValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionDuration = { "AttentionDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, AttentionDuration), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionValue = { "AttentionValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, AttentionValue), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_IdealAttentionValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_IdealAttentionValue = { "IdealAttentionValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, IdealAttentionValue), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_IdealAttentionValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_IdealAttentionValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_StackIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_StackIndex = { "StackIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, StackIndex), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_StackIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_StackIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_FeverEndAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_FeverStartAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_FeverLoopAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_CrowdIconLowAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_CrowdIconMidAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_CrowdIconHighAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_BuffInAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_BuffOutAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionPtsM_1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionPtsM_10,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionPtsM_100,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionPtsM_1000,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_MaxAttentionPtsM_1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_MaxAttentionPtsM_10,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_MaxAttentionPtsM_100,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_MaxAttentionPtsM_1000,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_PtsVerticalBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionPts_1000Widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionPts_100Widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionPts_10Widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_MaxAttentionPts_1000Widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_MaxAttentionPts_100Widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_MaxAttentionPts_10Widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_PointArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_PointArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AddValueArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AddValueArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionReasonArray_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionReasonArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionReasonArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_IsCompleteDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_IsFeverTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_IsBoostTextShow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionElapsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_MaxAttentionValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_AttentionValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_IdealAttentionValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::NewProp_StackIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSWidgetHUD_AttentionGauge>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::ClassParams = {
		&UELSSWidgetHUD_AttentionGauge::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSWidgetHUD_AttentionGauge, 185359888);
	template<> ABP_200508_API UClass* StaticClass<UELSSWidgetHUD_AttentionGauge>()
	{
		return UELSSWidgetHUD_AttentionGauge::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSWidgetHUD_AttentionGauge(Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge, &UELSSWidgetHUD_AttentionGauge::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSWidgetHUD_AttentionGauge"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSWidgetHUD_AttentionGauge);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
