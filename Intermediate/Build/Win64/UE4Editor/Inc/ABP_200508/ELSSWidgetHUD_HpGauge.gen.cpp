// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWidgetHUD_HpGauge.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWidgetHUD_HpGauge() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_HpGauge_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_HpGauge();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSCharacterHpType();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UELSSWidgetHUD_HpGauge::execApplyDownHp)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InNowWrestlerDownHp);
		P_GET_PROPERTY(FIntProperty,Z_Param_InWrestlerDownHp);
		P_GET_PROPERTY(FIntProperty,Z_Param_InMaxWrestlerDownHp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyDownHp(Z_Param_InNowWrestlerDownHp,Z_Param_InWrestlerDownHp,Z_Param_InMaxWrestlerDownHp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_HpGauge::execApplyWrestlerDownHpGauge)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InWrestlerDownHpRatio);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyWrestlerDownHpGauge(Z_Param_InWrestlerDownHpRatio);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_HpGauge::execApplyWrestlerHp)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InNowWrestlerHp);
		P_GET_PROPERTY(FIntProperty,Z_Param_InWrestlerHp);
		P_GET_PROPERTY(FIntProperty,Z_Param_inMaxHP);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyWrestlerHp(Z_Param_InNowWrestlerHp,Z_Param_InWrestlerHp,Z_Param_inMaxHP);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_HpGauge::execApplyWrestlerHpGauge)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InWrestlerHpRatio);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyWrestlerHpGauge(Z_Param_InWrestlerHpRatio);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_HpGauge::execGetScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_inDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetScale(Z_Param_inDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_HpGauge::execGetTargetActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetTargetActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_HpGauge::execSetDurationType)
	{
		P_GET_ENUM(ESSCharacterHpType,Z_Param_InHpType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDurationType(ESSCharacterHpType(Z_Param_InHpType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_HpGauge::execSetTargetActor)
	{
		P_GET_OBJECT(AActor,Z_Param_inTargetActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetActor(Z_Param_inTargetActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_HpGauge::execSetVisibleGauge)
	{
		P_GET_UBOOL(Z_Param_inIsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibleGauge(Z_Param_inIsVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_HpGauge::execShowOff)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowOff();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_HpGauge::execUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update(Z_Param_InDeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_HpGauge::execUpdateDownHp)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateDownHp(Z_Param_InDeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_HpGauge::execUpdatePos)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->UpdatePos();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_HpGauge::execUpdateShow)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_inDistance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateShow(Z_Param_inDistance,Z_Param_InDeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_HpGauge::execUpdateWrestlerHp)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateWrestlerHp(Z_Param_InDeltaTime);
		P_NATIVE_END;
	}
	static FName NAME_UELSSWidgetHUD_HpGauge_Init = FName(TEXT("Init"));
	void UELSSWidgetHUD_HpGauge::Init(APlayerController* NewPlayerController)
	{
		ELSSWidgetHUD_HpGauge_eventInit_Parms Parms;
		Parms.NewPlayerController=NewPlayerController;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_HpGauge_Init),&Parms);
	}
	static FName NAME_UELSSWidgetHUD_HpGauge_UpdateOffset = FName(TEXT("UpdateOffset"));
	void UELSSWidgetHUD_HpGauge::UpdateOffset()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_HpGauge_UpdateOffset),NULL);
	}
	void UELSSWidgetHUD_HpGauge::StaticRegisterNativesUELSSWidgetHUD_HpGauge()
	{
		UClass* Class = UELSSWidgetHUD_HpGauge::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyDownHp", &UELSSWidgetHUD_HpGauge::execApplyDownHp },
			{ "ApplyWrestlerDownHpGauge", &UELSSWidgetHUD_HpGauge::execApplyWrestlerDownHpGauge },
			{ "ApplyWrestlerHp", &UELSSWidgetHUD_HpGauge::execApplyWrestlerHp },
			{ "ApplyWrestlerHpGauge", &UELSSWidgetHUD_HpGauge::execApplyWrestlerHpGauge },
			{ "GetScale", &UELSSWidgetHUD_HpGauge::execGetScale },
			{ "GetTargetActor", &UELSSWidgetHUD_HpGauge::execGetTargetActor },
			{ "SetDurationType", &UELSSWidgetHUD_HpGauge::execSetDurationType },
			{ "SetTargetActor", &UELSSWidgetHUD_HpGauge::execSetTargetActor },
			{ "SetVisibleGauge", &UELSSWidgetHUD_HpGauge::execSetVisibleGauge },
			{ "ShowOff", &UELSSWidgetHUD_HpGauge::execShowOff },
			{ "Update", &UELSSWidgetHUD_HpGauge::execUpdate },
			{ "UpdateDownHp", &UELSSWidgetHUD_HpGauge::execUpdateDownHp },
			{ "UpdatePos", &UELSSWidgetHUD_HpGauge::execUpdatePos },
			{ "UpdateShow", &UELSSWidgetHUD_HpGauge::execUpdateShow },
			{ "UpdateWrestlerHp", &UELSSWidgetHUD_HpGauge::execUpdateWrestlerHp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyDownHp_Statics
	{
		struct ELSSWidgetHUD_HpGauge_eventApplyDownHp_Parms
		{
			int32 InNowWrestlerDownHp;
			int32 InWrestlerDownHp;
			int32 InMaxWrestlerDownHp;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InNowWrestlerDownHp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InWrestlerDownHp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InMaxWrestlerDownHp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyDownHp_Statics::NewProp_InNowWrestlerDownHp = { "InNowWrestlerDownHp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_HpGauge_eventApplyDownHp_Parms, InNowWrestlerDownHp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyDownHp_Statics::NewProp_InWrestlerDownHp = { "InWrestlerDownHp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_HpGauge_eventApplyDownHp_Parms, InWrestlerDownHp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyDownHp_Statics::NewProp_InMaxWrestlerDownHp = { "InMaxWrestlerDownHp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_HpGauge_eventApplyDownHp_Parms, InMaxWrestlerDownHp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyDownHp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyDownHp_Statics::NewProp_InNowWrestlerDownHp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyDownHp_Statics::NewProp_InWrestlerDownHp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyDownHp_Statics::NewProp_InMaxWrestlerDownHp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyDownHp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyDownHp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_HpGauge, nullptr, "ApplyDownHp", nullptr, nullptr, sizeof(ELSSWidgetHUD_HpGauge_eventApplyDownHp_Parms), Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyDownHp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyDownHp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyDownHp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyDownHp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyDownHp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyDownHp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerDownHpGauge_Statics
	{
		struct ELSSWidgetHUD_HpGauge_eventApplyWrestlerDownHpGauge_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerDownHpGauge_Statics::NewProp_InWrestlerDownHpRatio = { "InWrestlerDownHpRatio", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_HpGauge_eventApplyWrestlerDownHpGauge_Parms, InWrestlerDownHpRatio), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerDownHpGauge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerDownHpGauge_Statics::NewProp_InWrestlerDownHpRatio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerDownHpGauge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerDownHpGauge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_HpGauge, nullptr, "ApplyWrestlerDownHpGauge", nullptr, nullptr, sizeof(ELSSWidgetHUD_HpGauge_eventApplyWrestlerDownHpGauge_Parms), Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerDownHpGauge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerDownHpGauge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerDownHpGauge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerDownHpGauge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerDownHpGauge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerDownHpGauge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerHp_Statics
	{
		struct ELSSWidgetHUD_HpGauge_eventApplyWrestlerHp_Parms
		{
			int32 InNowWrestlerHp;
			int32 InWrestlerHp;
			int32 inMaxHP;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InNowWrestlerHp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InWrestlerHp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inMaxHP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerHp_Statics::NewProp_InNowWrestlerHp = { "InNowWrestlerHp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_HpGauge_eventApplyWrestlerHp_Parms, InNowWrestlerHp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerHp_Statics::NewProp_InWrestlerHp = { "InWrestlerHp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_HpGauge_eventApplyWrestlerHp_Parms, InWrestlerHp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerHp_Statics::NewProp_inMaxHP = { "inMaxHP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_HpGauge_eventApplyWrestlerHp_Parms, inMaxHP), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerHp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerHp_Statics::NewProp_InNowWrestlerHp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerHp_Statics::NewProp_InWrestlerHp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerHp_Statics::NewProp_inMaxHP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerHp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerHp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_HpGauge, nullptr, "ApplyWrestlerHp", nullptr, nullptr, sizeof(ELSSWidgetHUD_HpGauge_eventApplyWrestlerHp_Parms), Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerHp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerHp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerHp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerHp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerHp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerHp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerHpGauge_Statics
	{
		struct ELSSWidgetHUD_HpGauge_eventApplyWrestlerHpGauge_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerHpGauge_Statics::NewProp_InWrestlerHpRatio = { "InWrestlerHpRatio", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_HpGauge_eventApplyWrestlerHpGauge_Parms, InWrestlerHpRatio), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerHpGauge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerHpGauge_Statics::NewProp_InWrestlerHpRatio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerHpGauge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerHpGauge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_HpGauge, nullptr, "ApplyWrestlerHpGauge", nullptr, nullptr, sizeof(ELSSWidgetHUD_HpGauge_eventApplyWrestlerHpGauge_Parms), Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerHpGauge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerHpGauge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerHpGauge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerHpGauge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerHpGauge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerHpGauge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_GetScale_Statics
	{
		struct ELSSWidgetHUD_HpGauge_eventGetScale_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_GetScale_Statics::NewProp_inDistance = { "inDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_HpGauge_eventGetScale_Parms, inDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_GetScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_HpGauge_eventGetScale_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_GetScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_GetScale_Statics::NewProp_inDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_GetScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_GetScale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_GetScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_HpGauge, nullptr, "GetScale", nullptr, nullptr, sizeof(ELSSWidgetHUD_HpGauge_eventGetScale_Parms), Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_GetScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_GetScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_GetScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_GetScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_GetScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_GetScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_GetTargetActor_Statics
	{
		struct ELSSWidgetHUD_HpGauge_eventGetTargetActor_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_GetTargetActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_HpGauge_eventGetTargetActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_GetTargetActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_GetTargetActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_GetTargetActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_GetTargetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_HpGauge, nullptr, "GetTargetActor", nullptr, nullptr, sizeof(ELSSWidgetHUD_HpGauge_eventGetTargetActor_Parms), Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_GetTargetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_GetTargetActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_GetTargetActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_GetTargetActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_GetTargetActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_GetTargetActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_Init_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_Init_Statics::NewProp_NewPlayerController = { "NewPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_HpGauge_eventInit_Parms, NewPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_Init_Statics::NewProp_NewPlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_HpGauge, nullptr, "Init", nullptr, nullptr, sizeof(ELSSWidgetHUD_HpGauge_eventInit_Parms), Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetDurationType_Statics
	{
		struct ELSSWidgetHUD_HpGauge_eventSetDurationType_Parms
		{
			ESSCharacterHpType InHpType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InHpType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InHpType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetDurationType_Statics::NewProp_InHpType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetDurationType_Statics::NewProp_InHpType = { "InHpType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_HpGauge_eventSetDurationType_Parms, InHpType), Z_Construct_UEnum_ABP_200508_ESSCharacterHpType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetDurationType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetDurationType_Statics::NewProp_InHpType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetDurationType_Statics::NewProp_InHpType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetDurationType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetDurationType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_HpGauge, nullptr, "SetDurationType", nullptr, nullptr, sizeof(ELSSWidgetHUD_HpGauge_eventSetDurationType_Parms), Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetDurationType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetDurationType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetDurationType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetDurationType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetDurationType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetDurationType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetTargetActor_Statics
	{
		struct ELSSWidgetHUD_HpGauge_eventSetTargetActor_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetTargetActor_Statics::NewProp_inTargetActor = { "inTargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_HpGauge_eventSetTargetActor_Parms, inTargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetTargetActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetTargetActor_Statics::NewProp_inTargetActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetTargetActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetTargetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_HpGauge, nullptr, "SetTargetActor", nullptr, nullptr, sizeof(ELSSWidgetHUD_HpGauge_eventSetTargetActor_Parms), Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetTargetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetTargetActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetTargetActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetTargetActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetTargetActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetTargetActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetVisibleGauge_Statics
	{
		struct ELSSWidgetHUD_HpGauge_eventSetVisibleGauge_Parms
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
	void Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetVisibleGauge_Statics::NewProp_inIsVisible_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_HpGauge_eventSetVisibleGauge_Parms*)Obj)->inIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetVisibleGauge_Statics::NewProp_inIsVisible = { "inIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_HpGauge_eventSetVisibleGauge_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetVisibleGauge_Statics::NewProp_inIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetVisibleGauge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetVisibleGauge_Statics::NewProp_inIsVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetVisibleGauge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetVisibleGauge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_HpGauge, nullptr, "SetVisibleGauge", nullptr, nullptr, sizeof(ELSSWidgetHUD_HpGauge_eventSetVisibleGauge_Parms), Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetVisibleGauge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetVisibleGauge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetVisibleGauge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetVisibleGauge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetVisibleGauge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetVisibleGauge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ShowOff_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ShowOff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ShowOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_HpGauge, nullptr, "ShowOff", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ShowOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ShowOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ShowOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ShowOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_Update_Statics
	{
		struct ELSSWidgetHUD_HpGauge_eventUpdate_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_Update_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_HpGauge_eventUpdate_Parms, InDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_Update_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_HpGauge, nullptr, "Update", nullptr, nullptr, sizeof(ELSSWidgetHUD_HpGauge_eventUpdate_Parms), Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateDownHp_Statics
	{
		struct ELSSWidgetHUD_HpGauge_eventUpdateDownHp_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateDownHp_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_HpGauge_eventUpdateDownHp_Parms, InDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateDownHp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateDownHp_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateDownHp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateDownHp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_HpGauge, nullptr, "UpdateDownHp", nullptr, nullptr, sizeof(ELSSWidgetHUD_HpGauge_eventUpdateDownHp_Parms), Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateDownHp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateDownHp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateDownHp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateDownHp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateDownHp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateDownHp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateOffset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_HpGauge, nullptr, "UpdateOffset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdatePos_Statics
	{
		struct ELSSWidgetHUD_HpGauge_eventUpdatePos_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdatePos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_HpGauge_eventUpdatePos_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdatePos_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdatePos_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdatePos_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdatePos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_HpGauge, nullptr, "UpdatePos", nullptr, nullptr, sizeof(ELSSWidgetHUD_HpGauge_eventUpdatePos_Parms), Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdatePos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdatePos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdatePos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdatePos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdatePos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdatePos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateShow_Statics
	{
		struct ELSSWidgetHUD_HpGauge_eventUpdateShow_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateShow_Statics::NewProp_inDistance = { "inDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_HpGauge_eventUpdateShow_Parms, inDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateShow_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_HpGauge_eventUpdateShow_Parms, InDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateShow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateShow_Statics::NewProp_inDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateShow_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateShow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateShow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_HpGauge, nullptr, "UpdateShow", nullptr, nullptr, sizeof(ELSSWidgetHUD_HpGauge_eventUpdateShow_Parms), Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateShow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateShow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateShow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateShow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateShow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateShow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateWrestlerHp_Statics
	{
		struct ELSSWidgetHUD_HpGauge_eventUpdateWrestlerHp_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateWrestlerHp_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_HpGauge_eventUpdateWrestlerHp_Parms, InDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateWrestlerHp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateWrestlerHp_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateWrestlerHp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateWrestlerHp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_HpGauge, nullptr, "UpdateWrestlerHp", nullptr, nullptr, sizeof(ELSSWidgetHUD_HpGauge_eventUpdateWrestlerHp_Parms), Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateWrestlerHp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateWrestlerHp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateWrestlerHp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateWrestlerHp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateWrestlerHp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateWrestlerHp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSWidgetHUD_HpGauge_NoRegister()
	{
		return UELSSWidgetHUD_HpGauge::StaticClass();
	}
	struct Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GaugeWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GaugeWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KOGaugeWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KOGaugeWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HPGaugeWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HPGaugeWidget;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HpMaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HpMaxValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownHpMaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DownHpMaxValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdealHp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IdealHp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdealDownHp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IdealDownHp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerHp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WrestlerHp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerDownHp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WrestlerDownHp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HpDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HpDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownHpDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DownHpDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HpElapsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HpElapsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownHpElapsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DownHpElapsed;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarShowElapsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BarShowElapsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsShowDownHp_MetaData[];
#endif
		static void NewProp_IsShowDownHp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsShowDownHp;
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
	UObject* (*const Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyDownHp, "ApplyDownHp" }, // 3357528398
		{ &Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerDownHpGauge, "ApplyWrestlerDownHpGauge" }, // 1865482944
		{ &Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerHp, "ApplyWrestlerHp" }, // 1545847197
		{ &Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ApplyWrestlerHpGauge, "ApplyWrestlerHpGauge" }, // 3582395552
		{ &Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_GetScale, "GetScale" }, // 1566679141
		{ &Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_GetTargetActor, "GetTargetActor" }, // 1804584612
		{ &Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_Init, "Init" }, // 3130391914
		{ &Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetDurationType, "SetDurationType" }, // 500943010
		{ &Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetTargetActor, "SetTargetActor" }, // 2476706728
		{ &Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_SetVisibleGauge, "SetVisibleGauge" }, // 560594776
		{ &Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_ShowOff, "ShowOff" }, // 3043357009
		{ &Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_Update, "Update" }, // 3055123246
		{ &Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateDownHp, "UpdateDownHp" }, // 2513104474
		{ &Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateOffset, "UpdateOffset" }, // 4038008225
		{ &Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdatePos, "UpdatePos" }, // 85032962
		{ &Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateShow, "UpdateShow" }, // 1955036900
		{ &Z_Construct_UFunction_UELSSWidgetHUD_HpGauge_UpdateWrestlerHp, "UpdateWrestlerHp" }, // 433444888
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWidgetHUD_HpGauge.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_HpGaugeMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_HpGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_HpGaugeMaterial = { "HpGaugeMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, HpGaugeMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_HpGaugeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_HpGaugeMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_HpGaugeDiffMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_HpGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_HpGaugeDiffMaterial = { "HpGaugeDiffMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, HpGaugeDiffMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_HpGaugeDiffMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_HpGaugeDiffMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_KOGaugeMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_HpGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_KOGaugeMaterial = { "KOGaugeMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, KOGaugeMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_KOGaugeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_KOGaugeMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_GaugeWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_HpGauge" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_GaugeWidget = { "GaugeWidget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, GaugeWidget), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_GaugeWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_GaugeWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_KOGaugeWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_HpGauge" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_KOGaugeWidget = { "KOGaugeWidget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, KOGaugeWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_KOGaugeWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_KOGaugeWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_HPGaugeWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_HpGauge" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_HPGaugeWidget = { "HPGaugeWidget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, HPGaugeWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_HPGaugeWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_HPGaugeWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_TargetActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_HpGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_TargetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_TargetActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_PlayerController_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_HpGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_PlayerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_Offset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_HpGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_HpMaxValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_HpGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_HpMaxValue = { "HpMaxValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, HpMaxValue), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_HpMaxValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_HpMaxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_DownHpMaxValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_HpGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_DownHpMaxValue = { "DownHpMaxValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, DownHpMaxValue), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_DownHpMaxValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_DownHpMaxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_IdealHp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_HpGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_IdealHp = { "IdealHp", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, IdealHp), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_IdealHp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_IdealHp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_IdealDownHp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_HpGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_IdealDownHp = { "IdealDownHp", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, IdealDownHp), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_IdealDownHp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_IdealDownHp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_WrestlerHp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_HpGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_WrestlerHp = { "WrestlerHp", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, WrestlerHp), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_WrestlerHp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_WrestlerHp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_WrestlerDownHp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_HpGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_WrestlerDownHp = { "WrestlerDownHp", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, WrestlerDownHp), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_WrestlerDownHp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_WrestlerDownHp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_HpDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_HpGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_HpDuration = { "HpDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, HpDuration), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_HpDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_HpDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_DownHpDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_HpGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_DownHpDuration = { "DownHpDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, DownHpDuration), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_DownHpDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_DownHpDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_HpElapsed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_HpGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_HpElapsed = { "HpElapsed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, HpElapsed), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_HpElapsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_HpElapsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_DownHpElapsed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_HpGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_DownHpElapsed = { "DownHpElapsed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, DownHpElapsed), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_DownHpElapsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_DownHpElapsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_IsCompleteHpDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_HpGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_IsCompleteHpDuration_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_HpGauge*)Obj)->IsCompleteHpDuration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_IsCompleteHpDuration = { "IsCompleteHpDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_HpGauge), &Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_IsCompleteHpDuration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_IsCompleteHpDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_IsCompleteHpDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_IsCompleteDownHpDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_HpGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_IsCompleteDownHpDuration_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_HpGauge*)Obj)->IsCompleteDownHpDuration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_IsCompleteDownHpDuration = { "IsCompleteDownHpDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_HpGauge), &Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_IsCompleteDownHpDuration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_IsCompleteDownHpDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_IsCompleteDownHpDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_BarShowElapsed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_HpGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_BarShowElapsed = { "BarShowElapsed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, BarShowElapsed), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_BarShowElapsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_BarShowElapsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_IsShowDownHp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_HpGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_IsShowDownHp_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_HpGauge*)Obj)->IsShowDownHp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_IsShowDownHp = { "IsShowDownHp", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_HpGauge), &Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_IsShowDownHp_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_IsShowDownHp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_IsShowDownHp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_IsGaugeVisible_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_HpGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_IsGaugeVisible_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_HpGauge*)Obj)->IsGaugeVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_IsGaugeVisible = { "IsGaugeVisible", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_HpGauge), &Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_IsGaugeVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_IsGaugeVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_IsGaugeVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_HpGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, MaxDistance), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_MaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_MaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_MinDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_HpGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_MinDistance = { "MinDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, MinDistance), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_MinDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_MinDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_MAXSCALE_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_HpGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_MAXSCALE = { "MAXSCALE", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, MAXSCALE), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_MAXSCALE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_MAXSCALE_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_MINSCALE_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_HpGauge" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HpGauge.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_MINSCALE = { "MINSCALE", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, MINSCALE), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_MINSCALE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_MINSCALE_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_HpGaugeMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_HpGaugeDiffMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_KOGaugeMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_GaugeWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_KOGaugeWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_HPGaugeWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_TargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_HpMaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_DownHpMaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_IdealHp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_IdealDownHp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_WrestlerHp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_WrestlerDownHp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_HpDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_DownHpDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_HpElapsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_DownHpElapsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_IsCompleteHpDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_IsCompleteDownHpDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_BarShowElapsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_IsShowDownHp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_IsGaugeVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_MaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_MinDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_MAXSCALE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::NewProp_MINSCALE,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSWidgetHUD_HpGauge>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::ClassParams = {
		&UELSSWidgetHUD_HpGauge::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSWidgetHUD_HpGauge()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSWidgetHUD_HpGauge, 2569538199);
	template<> ABP_200508_API UClass* StaticClass<UELSSWidgetHUD_HpGauge>()
	{
		return UELSSWidgetHUD_HpGauge::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSWidgetHUD_HpGauge(Z_Construct_UClass_UELSSWidgetHUD_HpGauge, &UELSSWidgetHUD_HpGauge::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSWidgetHUD_HpGauge"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSWidgetHUD_HpGauge);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
