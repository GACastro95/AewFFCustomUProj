// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWidgetHUD_ShieldGauge.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWidgetHUD_ShieldGauge() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UELSSWidgetHUD_ShieldGauge::execApplyShieldDurableValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InNowShieldDurableValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_InShieldDurableValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_InMaxShieldDurableValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyShieldDurableValue(Z_Param_InNowShieldDurableValue,Z_Param_InShieldDurableValue,Z_Param_InMaxShieldDurableValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_ShieldGauge::execApplyShieldGauge)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InShieldDurableValueRatio);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyShieldGauge(Z_Param_InShieldDurableValueRatio);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_ShieldGauge::execGetScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_inDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetScale(Z_Param_inDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_ShieldGauge::execGetTargetActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetTargetActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_ShieldGauge::execSetTargetActor)
	{
		P_GET_OBJECT(AActor,Z_Param_inTargetActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetActor(Z_Param_inTargetActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_ShieldGauge::execSetVisibleGauge)
	{
		P_GET_UBOOL(Z_Param_inIsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibleGauge(Z_Param_inIsVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_ShieldGauge::execShowOff)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowOff();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_ShieldGauge::execUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update(Z_Param_InDeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_ShieldGauge::execUpdatePos)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->UpdatePos();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_ShieldGauge::execUpdateShield)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateShield(Z_Param_InDeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_ShieldGauge::execUpdateShow)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_inDistance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateShow(Z_Param_inDistance,Z_Param_InDeltaTime);
		P_NATIVE_END;
	}
	static FName NAME_UELSSWidgetHUD_ShieldGauge_Init = FName(TEXT("Init"));
	void UELSSWidgetHUD_ShieldGauge::Init(APlayerController* NewPlayerController)
	{
		ELSSWidgetHUD_ShieldGauge_eventInit_Parms Parms;
		Parms.NewPlayerController=NewPlayerController;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_ShieldGauge_Init),&Parms);
	}
	static FName NAME_UELSSWidgetHUD_ShieldGauge_UpdateOffset = FName(TEXT("UpdateOffset"));
	void UELSSWidgetHUD_ShieldGauge::UpdateOffset()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_ShieldGauge_UpdateOffset),NULL);
	}
	void UELSSWidgetHUD_ShieldGauge::StaticRegisterNativesUELSSWidgetHUD_ShieldGauge()
	{
		UClass* Class = UELSSWidgetHUD_ShieldGauge::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyShieldDurableValue", &UELSSWidgetHUD_ShieldGauge::execApplyShieldDurableValue },
			{ "ApplyShieldGauge", &UELSSWidgetHUD_ShieldGauge::execApplyShieldGauge },
			{ "GetScale", &UELSSWidgetHUD_ShieldGauge::execGetScale },
			{ "GetTargetActor", &UELSSWidgetHUD_ShieldGauge::execGetTargetActor },
			{ "SetTargetActor", &UELSSWidgetHUD_ShieldGauge::execSetTargetActor },
			{ "SetVisibleGauge", &UELSSWidgetHUD_ShieldGauge::execSetVisibleGauge },
			{ "ShowOff", &UELSSWidgetHUD_ShieldGauge::execShowOff },
			{ "Update", &UELSSWidgetHUD_ShieldGauge::execUpdate },
			{ "UpdatePos", &UELSSWidgetHUD_ShieldGauge::execUpdatePos },
			{ "UpdateShield", &UELSSWidgetHUD_ShieldGauge::execUpdateShield },
			{ "UpdateShow", &UELSSWidgetHUD_ShieldGauge::execUpdateShow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_ApplyShieldDurableValue_Statics
	{
		struct ELSSWidgetHUD_ShieldGauge_eventApplyShieldDurableValue_Parms
		{
			int32 InNowShieldDurableValue;
			int32 InShieldDurableValue;
			int32 InMaxShieldDurableValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InNowShieldDurableValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InShieldDurableValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InMaxShieldDurableValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_ApplyShieldDurableValue_Statics::NewProp_InNowShieldDurableValue = { "InNowShieldDurableValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ShieldGauge_eventApplyShieldDurableValue_Parms, InNowShieldDurableValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_ApplyShieldDurableValue_Statics::NewProp_InShieldDurableValue = { "InShieldDurableValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ShieldGauge_eventApplyShieldDurableValue_Parms, InShieldDurableValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_ApplyShieldDurableValue_Statics::NewProp_InMaxShieldDurableValue = { "InMaxShieldDurableValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ShieldGauge_eventApplyShieldDurableValue_Parms, InMaxShieldDurableValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_ApplyShieldDurableValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_ApplyShieldDurableValue_Statics::NewProp_InNowShieldDurableValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_ApplyShieldDurableValue_Statics::NewProp_InShieldDurableValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_ApplyShieldDurableValue_Statics::NewProp_InMaxShieldDurableValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_ApplyShieldDurableValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ShieldGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_ApplyShieldDurableValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge, nullptr, "ApplyShieldDurableValue", nullptr, nullptr, sizeof(ELSSWidgetHUD_ShieldGauge_eventApplyShieldDurableValue_Parms), Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_ApplyShieldDurableValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_ApplyShieldDurableValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_ApplyShieldDurableValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_ApplyShieldDurableValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_ApplyShieldDurableValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_ApplyShieldDurableValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_ApplyShieldGauge_Statics
	{
		struct ELSSWidgetHUD_ShieldGauge_eventApplyShieldGauge_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_ApplyShieldGauge_Statics::NewProp_InShieldDurableValueRatio = { "InShieldDurableValueRatio", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ShieldGauge_eventApplyShieldGauge_Parms, InShieldDurableValueRatio), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_ApplyShieldGauge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_ApplyShieldGauge_Statics::NewProp_InShieldDurableValueRatio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_ApplyShieldGauge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ShieldGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_ApplyShieldGauge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge, nullptr, "ApplyShieldGauge", nullptr, nullptr, sizeof(ELSSWidgetHUD_ShieldGauge_eventApplyShieldGauge_Parms), Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_ApplyShieldGauge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_ApplyShieldGauge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_ApplyShieldGauge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_ApplyShieldGauge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_ApplyShieldGauge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_ApplyShieldGauge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_GetScale_Statics
	{
		struct ELSSWidgetHUD_ShieldGauge_eventGetScale_Parms
		{
			float inDistance;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDistance;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_GetScale_Statics::NewProp_inDistance = { "inDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ShieldGauge_eventGetScale_Parms, inDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_GetScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ShieldGauge_eventGetScale_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_GetScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_GetScale_Statics::NewProp_inDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_GetScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_GetScale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ShieldGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_GetScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge, nullptr, "GetScale", nullptr, nullptr, sizeof(ELSSWidgetHUD_ShieldGauge_eventGetScale_Parms), Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_GetScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_GetScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_GetScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_GetScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_GetScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_GetScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_GetTargetActor_Statics
	{
		struct ELSSWidgetHUD_ShieldGauge_eventGetTargetActor_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_GetTargetActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ShieldGauge_eventGetTargetActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_GetTargetActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_GetTargetActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_GetTargetActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ShieldGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_GetTargetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge, nullptr, "GetTargetActor", nullptr, nullptr, sizeof(ELSSWidgetHUD_ShieldGauge_eventGetTargetActor_Parms), Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_GetTargetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_GetTargetActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_GetTargetActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_GetTargetActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_GetTargetActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_GetTargetActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_Init_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_Init_Statics::NewProp_NewPlayerController = { "NewPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ShieldGauge_eventInit_Parms, NewPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_Init_Statics::NewProp_NewPlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ShieldGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge, nullptr, "Init", nullptr, nullptr, sizeof(ELSSWidgetHUD_ShieldGauge_eventInit_Parms), Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_SetTargetActor_Statics
	{
		struct ELSSWidgetHUD_ShieldGauge_eventSetTargetActor_Parms
		{
			AActor* inTargetActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inTargetActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_SetTargetActor_Statics::NewProp_inTargetActor = { "inTargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ShieldGauge_eventSetTargetActor_Parms, inTargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_SetTargetActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_SetTargetActor_Statics::NewProp_inTargetActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_SetTargetActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ShieldGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_SetTargetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge, nullptr, "SetTargetActor", nullptr, nullptr, sizeof(ELSSWidgetHUD_ShieldGauge_eventSetTargetActor_Parms), Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_SetTargetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_SetTargetActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_SetTargetActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_SetTargetActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_SetTargetActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_SetTargetActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_SetVisibleGauge_Statics
	{
		struct ELSSWidgetHUD_ShieldGauge_eventSetVisibleGauge_Parms
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
	void Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_SetVisibleGauge_Statics::NewProp_inIsVisible_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_ShieldGauge_eventSetVisibleGauge_Parms*)Obj)->inIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_SetVisibleGauge_Statics::NewProp_inIsVisible = { "inIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_ShieldGauge_eventSetVisibleGauge_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_SetVisibleGauge_Statics::NewProp_inIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_SetVisibleGauge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_SetVisibleGauge_Statics::NewProp_inIsVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_SetVisibleGauge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ShieldGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_SetVisibleGauge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge, nullptr, "SetVisibleGauge", nullptr, nullptr, sizeof(ELSSWidgetHUD_ShieldGauge_eventSetVisibleGauge_Parms), Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_SetVisibleGauge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_SetVisibleGauge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_SetVisibleGauge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_SetVisibleGauge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_SetVisibleGauge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_SetVisibleGauge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_ShowOff_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_ShowOff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ShieldGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_ShowOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge, nullptr, "ShowOff", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_ShowOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_ShowOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_ShowOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_ShowOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_Update_Statics
	{
		struct ELSSWidgetHUD_ShieldGauge_eventUpdate_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_Update_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ShieldGauge_eventUpdate_Parms, InDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_Update_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ShieldGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge, nullptr, "Update", nullptr, nullptr, sizeof(ELSSWidgetHUD_ShieldGauge_eventUpdate_Parms), Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdateOffset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdateOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ShieldGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdateOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge, nullptr, "UpdateOffset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdateOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdateOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdateOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdateOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdatePos_Statics
	{
		struct ELSSWidgetHUD_ShieldGauge_eventUpdatePos_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdatePos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ShieldGauge_eventUpdatePos_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdatePos_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdatePos_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdatePos_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ShieldGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdatePos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge, nullptr, "UpdatePos", nullptr, nullptr, sizeof(ELSSWidgetHUD_ShieldGauge_eventUpdatePos_Parms), Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdatePos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdatePos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdatePos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdatePos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdatePos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdatePos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdateShield_Statics
	{
		struct ELSSWidgetHUD_ShieldGauge_eventUpdateShield_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdateShield_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ShieldGauge_eventUpdateShield_Parms, InDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdateShield_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdateShield_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdateShield_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ShieldGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdateShield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge, nullptr, "UpdateShield", nullptr, nullptr, sizeof(ELSSWidgetHUD_ShieldGauge_eventUpdateShield_Parms), Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdateShield_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdateShield_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdateShield_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdateShield_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdateShield()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdateShield_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdateShow_Statics
	{
		struct ELSSWidgetHUD_ShieldGauge_eventUpdateShow_Parms
		{
			float inDistance;
			float InDeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDistance;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdateShow_Statics::NewProp_inDistance = { "inDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ShieldGauge_eventUpdateShow_Parms, inDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdateShow_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ShieldGauge_eventUpdateShow_Parms, InDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdateShow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdateShow_Statics::NewProp_inDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdateShow_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdateShow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ShieldGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdateShow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge, nullptr, "UpdateShow", nullptr, nullptr, sizeof(ELSSWidgetHUD_ShieldGauge_eventUpdateShow_Parms), Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdateShow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdateShow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdateShow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdateShow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdateShow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdateShow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_NoRegister()
	{
		return UELSSWidgetHUD_ShieldGauge::StaticClass();
	}
	struct Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GaugeWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GaugeWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShieldDurableMaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ShieldDurableMaxValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdealShieldDurableValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IdealShieldDurableValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShieldDurableValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShieldDurableValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShieldDurableValueDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShieldDurableValueDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShieldDurableElapsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShieldDurableElapsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCompleteShieldDuration_MetaData[];
#endif
		static void NewProp_IsCompleteShieldDuration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCompleteShieldDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarShowElapsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BarShowElapsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsGaugeVisible_MetaData[];
#endif
		static void NewProp_IsGaugeVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsGaugeVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAXSCALE_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MAXSCALE;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MINSCALE_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MINSCALE;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_ApplyShieldDurableValue, "ApplyShieldDurableValue" }, // 2469603936
		{ &Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_ApplyShieldGauge, "ApplyShieldGauge" }, // 1435546320
		{ &Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_GetScale, "GetScale" }, // 2486896179
		{ &Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_GetTargetActor, "GetTargetActor" }, // 3722127013
		{ &Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_Init, "Init" }, // 3282571834
		{ &Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_SetTargetActor, "SetTargetActor" }, // 1037010072
		{ &Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_SetVisibleGauge, "SetVisibleGauge" }, // 1995324870
		{ &Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_ShowOff, "ShowOff" }, // 1190627131
		{ &Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_Update, "Update" }, // 1961824808
		{ &Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdateOffset, "UpdateOffset" }, // 222213667
		{ &Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdatePos, "UpdatePos" }, // 533125013
		{ &Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdateShield, "UpdateShield" }, // 4018388192
		{ &Z_Construct_UFunction_UELSSWidgetHUD_ShieldGauge_UpdateShow, "UpdateShow" }, // 3966793400
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWidgetHUD_ShieldGauge.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ShieldGauge.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_ShieldGaugeMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_ShieldGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ShieldGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_ShieldGaugeMaterial = { "ShieldGaugeMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_ShieldGauge, ShieldGaugeMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_ShieldGaugeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_ShieldGaugeMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_ShieldGaugeDiffMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_ShieldGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ShieldGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_ShieldGaugeDiffMaterial = { "ShieldGaugeDiffMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_ShieldGauge, ShieldGaugeDiffMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_ShieldGaugeDiffMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_ShieldGaugeDiffMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_GaugeWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_ShieldGauge" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ShieldGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_GaugeWidget = { "GaugeWidget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_ShieldGauge, GaugeWidget), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_GaugeWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_GaugeWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_TargetActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_ShieldGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ShieldGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_ShieldGauge, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_TargetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_TargetActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_PlayerController_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_ShieldGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ShieldGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_ShieldGauge, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_PlayerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_Offset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_ShieldGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ShieldGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_ShieldGauge, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_ShieldDurableMaxValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_ShieldGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ShieldGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_ShieldDurableMaxValue = { "ShieldDurableMaxValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_ShieldGauge, ShieldDurableMaxValue), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_ShieldDurableMaxValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_ShieldDurableMaxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_IdealShieldDurableValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_ShieldGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ShieldGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_IdealShieldDurableValue = { "IdealShieldDurableValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_ShieldGauge, IdealShieldDurableValue), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_IdealShieldDurableValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_IdealShieldDurableValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_ShieldDurableValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_ShieldGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ShieldGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_ShieldDurableValue = { "ShieldDurableValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_ShieldGauge, ShieldDurableValue), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_ShieldDurableValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_ShieldDurableValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_ShieldDurableValueDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_ShieldGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ShieldGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_ShieldDurableValueDuration = { "ShieldDurableValueDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_ShieldGauge, ShieldDurableValueDuration), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_ShieldDurableValueDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_ShieldDurableValueDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_ShieldDurableElapsed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_ShieldGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ShieldGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_ShieldDurableElapsed = { "ShieldDurableElapsed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_ShieldGauge, ShieldDurableElapsed), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_ShieldDurableElapsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_ShieldDurableElapsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_IsCompleteShieldDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_ShieldGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ShieldGauge.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_IsCompleteShieldDuration_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_ShieldGauge*)Obj)->IsCompleteShieldDuration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_IsCompleteShieldDuration = { "IsCompleteShieldDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_ShieldGauge), &Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_IsCompleteShieldDuration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_IsCompleteShieldDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_IsCompleteShieldDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_BarShowElapsed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_ShieldGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ShieldGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_BarShowElapsed = { "BarShowElapsed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_ShieldGauge, BarShowElapsed), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_BarShowElapsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_BarShowElapsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_IsGaugeVisible_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_ShieldGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ShieldGauge.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_IsGaugeVisible_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_ShieldGauge*)Obj)->IsGaugeVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_IsGaugeVisible = { "IsGaugeVisible", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_ShieldGauge), &Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_IsGaugeVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_IsGaugeVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_IsGaugeVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_ShieldGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ShieldGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_ShieldGauge, MaxDistance), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_MaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_MaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_MinDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_ShieldGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ShieldGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_MinDistance = { "MinDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_ShieldGauge, MinDistance), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_MinDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_MinDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_MAXSCALE_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_ShieldGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ShieldGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_MAXSCALE = { "MAXSCALE", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_ShieldGauge, MAXSCALE), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_MAXSCALE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_MAXSCALE_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_MINSCALE_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_ShieldGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ShieldGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_MINSCALE = { "MINSCALE", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_ShieldGauge, MINSCALE), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_MINSCALE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_MINSCALE_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_ShieldGaugeMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_ShieldGaugeDiffMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_GaugeWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_TargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_ShieldDurableMaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_IdealShieldDurableValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_ShieldDurableValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_ShieldDurableValueDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_ShieldDurableElapsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_IsCompleteShieldDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_BarShowElapsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_IsGaugeVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_MaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_MinDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_MAXSCALE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::NewProp_MINSCALE,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSWidgetHUD_ShieldGauge>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::ClassParams = {
		&UELSSWidgetHUD_ShieldGauge::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSWidgetHUD_ShieldGauge, 497902850);
	template<> ABP_200508_API UClass* StaticClass<UELSSWidgetHUD_ShieldGauge>()
	{
		return UELSSWidgetHUD_ShieldGauge::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSWidgetHUD_ShieldGauge(Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge, &UELSSWidgetHUD_ShieldGauge::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSWidgetHUD_ShieldGauge"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSWidgetHUD_ShieldGauge);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
