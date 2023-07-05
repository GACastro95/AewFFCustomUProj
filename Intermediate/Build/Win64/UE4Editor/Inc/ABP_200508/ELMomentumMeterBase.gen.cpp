// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELMomentumMeterBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMomentumMeterBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELMomentumMeterBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELMomentumMeterBase();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_AELCharacter_Native_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EEliteMeterStateType_N();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESeesawBuffType_N();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ESpecialMovesType();
// End Cross Module References
	DEFINE_FUNCTION(UELMomentumMeterBase::execGetMeterPercent_N)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMeterPercent_N();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMomentumMeterBase::execGetMeterRate_N)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMeterRate_N();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMomentumMeterBase::execGetMeterValue_N)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMeterValue_N();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMomentumMeterBase::execGetRemoveSec_N)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRemoveSec_N();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMomentumMeterBase::execGetState_N)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEliteMeterStateType_N*)Z_Param__Result=P_THIS->GetState_N();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMomentumMeterBase::execIsDangerState_N)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDangerState_N();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMomentumMeterBase::execIsExciteState_N)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsExciteState_N();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMomentumMeterBase::execIsRemoveState_N)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRemoveState_N();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMomentumMeterBase::execIsSpecialState_N)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSpecialState_N();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMomentumMeterBase::execSetParam)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_inHandsInPocketAddRate);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inHandsInPocketDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParam(Z_Param_inHandsInPocketAddRate,Z_Param_inHandsInPocketDuration);
		P_NATIVE_END;
	}
	static FName NAME_UELMomentumMeterBase_AddMeterValue_Impl = FName(TEXT("AddMeterValue_Impl"));
	void UELMomentumMeterBase::AddMeterValue_Impl(float Value, bool Direct)
	{
		ELMomentumMeterBase_eventAddMeterValue_Impl_Parms Parms;
		Parms.Value=Value;
		Parms.Direct=Direct ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELMomentumMeterBase_AddMeterValue_Impl),&Parms);
	}
	static FName NAME_UELMomentumMeterBase_GetFixAddValueForNavigationState_Impl = FName(TEXT("GetFixAddValueForNavigationState_Impl"));
	float UELMomentumMeterBase::GetFixAddValueForNavigationState_Impl(float DeltaTime, AELCharacter_Native* Chara)
	{
		ELMomentumMeterBase_eventGetFixAddValueForNavigationState_Impl_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		Parms.Chara=Chara;
		ProcessEvent(FindFunctionChecked(NAME_UELMomentumMeterBase_GetFixAddValueForNavigationState_Impl),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UELMomentumMeterBase_MomentumStock_Impl = FName(TEXT("MomentumStock_Impl"));
	bool UELMomentumMeterBase::MomentumStock_Impl()
	{
		ELMomentumMeterBase_eventMomentumStock_Impl_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UELMomentumMeterBase_MomentumStock_Impl),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELMomentumMeterBase_SetMeterPercent_Impl = FName(TEXT("SetMeterPercent_Impl"));
	void UELMomentumMeterBase::SetMeterPercent_Impl(float Percent, bool WithFeedback)
	{
		ELMomentumMeterBase_eventSetMeterPercent_Impl_Parms Parms;
		Parms.Percent=Percent;
		Parms.WithFeedback=WithFeedback ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELMomentumMeterBase_SetMeterPercent_Impl),&Parms);
	}
	static FName NAME_UELMomentumMeterBase_SetSeesawBuff_Impl = FName(TEXT("SetSeesawBuff_Impl"));
	void UELMomentumMeterBase::SetSeesawBuff_Impl(AELCharacter_Native* Chara, ESeesawBuffType_N NewBuffType)
	{
		ELMomentumMeterBase_eventSetSeesawBuff_Impl_Parms Parms;
		Parms.Chara=Chara;
		Parms.NewBuffType=NewBuffType;
		ProcessEvent(FindFunctionChecked(NAME_UELMomentumMeterBase_SetSeesawBuff_Impl),&Parms);
	}
	static FName NAME_UELMomentumMeterBase_SubMeterValue_Impl = FName(TEXT("SubMeterValue_Impl"));
	void UELMomentumMeterBase::SubMeterValue_Impl(float Value, bool Direct, ESpecialMovesType RecieveSpecialDamageType, bool RemoveMode)
	{
		ELMomentumMeterBase_eventSubMeterValue_Impl_Parms Parms;
		Parms.Value=Value;
		Parms.Direct=Direct ? true : false;
		Parms.RecieveSpecialDamageType=RecieveSpecialDamageType;
		Parms.RemoveMode=RemoveMode ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELMomentumMeterBase_SubMeterValue_Impl),&Parms);
	}
	void UELMomentumMeterBase::StaticRegisterNativesUELMomentumMeterBase()
	{
		UClass* Class = UELMomentumMeterBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMeterPercent_N", &UELMomentumMeterBase::execGetMeterPercent_N },
			{ "GetMeterRate_N", &UELMomentumMeterBase::execGetMeterRate_N },
			{ "GetMeterValue_N", &UELMomentumMeterBase::execGetMeterValue_N },
			{ "GetRemoveSec_N", &UELMomentumMeterBase::execGetRemoveSec_N },
			{ "GetState_N", &UELMomentumMeterBase::execGetState_N },
			{ "IsDangerState_N", &UELMomentumMeterBase::execIsDangerState_N },
			{ "IsExciteState_N", &UELMomentumMeterBase::execIsExciteState_N },
			{ "IsRemoveState_N", &UELMomentumMeterBase::execIsRemoveState_N },
			{ "IsSpecialState_N", &UELMomentumMeterBase::execIsSpecialState_N },
			{ "SetParam", &UELMomentumMeterBase::execSetParam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELMomentumMeterBase_AddMeterValue_Impl_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static void NewProp_Direct_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Direct;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELMomentumMeterBase_AddMeterValue_Impl_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMomentumMeterBase_eventAddMeterValue_Impl_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMomentumMeterBase_AddMeterValue_Impl_Statics::NewProp_Direct_SetBit(void* Obj)
	{
		((ELMomentumMeterBase_eventAddMeterValue_Impl_Parms*)Obj)->Direct = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMomentumMeterBase_AddMeterValue_Impl_Statics::NewProp_Direct = { "Direct", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMomentumMeterBase_eventAddMeterValue_Impl_Parms), &Z_Construct_UFunction_UELMomentumMeterBase_AddMeterValue_Impl_Statics::NewProp_Direct_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMomentumMeterBase_AddMeterValue_Impl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMomentumMeterBase_AddMeterValue_Impl_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMomentumMeterBase_AddMeterValue_Impl_Statics::NewProp_Direct,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMomentumMeterBase_AddMeterValue_Impl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMomentumMeterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMomentumMeterBase_AddMeterValue_Impl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMomentumMeterBase, nullptr, "AddMeterValue_Impl", nullptr, nullptr, sizeof(ELMomentumMeterBase_eventAddMeterValue_Impl_Parms), Z_Construct_UFunction_UELMomentumMeterBase_AddMeterValue_Impl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMomentumMeterBase_AddMeterValue_Impl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMomentumMeterBase_AddMeterValue_Impl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMomentumMeterBase_AddMeterValue_Impl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMomentumMeterBase_AddMeterValue_Impl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMomentumMeterBase_AddMeterValue_Impl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMomentumMeterBase_GetFixAddValueForNavigationState_Impl_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Chara;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELMomentumMeterBase_GetFixAddValueForNavigationState_Impl_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMomentumMeterBase_eventGetFixAddValueForNavigationState_Impl_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMomentumMeterBase_GetFixAddValueForNavigationState_Impl_Statics::NewProp_Chara = { "Chara", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMomentumMeterBase_eventGetFixAddValueForNavigationState_Impl_Parms, Chara), Z_Construct_UClass_AELCharacter_Native_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELMomentumMeterBase_GetFixAddValueForNavigationState_Impl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMomentumMeterBase_eventGetFixAddValueForNavigationState_Impl_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMomentumMeterBase_GetFixAddValueForNavigationState_Impl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMomentumMeterBase_GetFixAddValueForNavigationState_Impl_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMomentumMeterBase_GetFixAddValueForNavigationState_Impl_Statics::NewProp_Chara,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMomentumMeterBase_GetFixAddValueForNavigationState_Impl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMomentumMeterBase_GetFixAddValueForNavigationState_Impl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMomentumMeterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMomentumMeterBase_GetFixAddValueForNavigationState_Impl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMomentumMeterBase, nullptr, "GetFixAddValueForNavigationState_Impl", nullptr, nullptr, sizeof(ELMomentumMeterBase_eventGetFixAddValueForNavigationState_Impl_Parms), Z_Construct_UFunction_UELMomentumMeterBase_GetFixAddValueForNavigationState_Impl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMomentumMeterBase_GetFixAddValueForNavigationState_Impl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMomentumMeterBase_GetFixAddValueForNavigationState_Impl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMomentumMeterBase_GetFixAddValueForNavigationState_Impl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMomentumMeterBase_GetFixAddValueForNavigationState_Impl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMomentumMeterBase_GetFixAddValueForNavigationState_Impl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMomentumMeterBase_GetMeterPercent_N_Statics
	{
		struct ELMomentumMeterBase_eventGetMeterPercent_N_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELMomentumMeterBase_GetMeterPercent_N_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMomentumMeterBase_eventGetMeterPercent_N_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMomentumMeterBase_GetMeterPercent_N_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMomentumMeterBase_GetMeterPercent_N_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMomentumMeterBase_GetMeterPercent_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMomentumMeterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMomentumMeterBase_GetMeterPercent_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMomentumMeterBase, nullptr, "GetMeterPercent_N", nullptr, nullptr, sizeof(ELMomentumMeterBase_eventGetMeterPercent_N_Parms), Z_Construct_UFunction_UELMomentumMeterBase_GetMeterPercent_N_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMomentumMeterBase_GetMeterPercent_N_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMomentumMeterBase_GetMeterPercent_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMomentumMeterBase_GetMeterPercent_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMomentumMeterBase_GetMeterPercent_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMomentumMeterBase_GetMeterPercent_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMomentumMeterBase_GetMeterRate_N_Statics
	{
		struct ELMomentumMeterBase_eventGetMeterRate_N_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELMomentumMeterBase_GetMeterRate_N_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMomentumMeterBase_eventGetMeterRate_N_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMomentumMeterBase_GetMeterRate_N_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMomentumMeterBase_GetMeterRate_N_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMomentumMeterBase_GetMeterRate_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMomentumMeterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMomentumMeterBase_GetMeterRate_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMomentumMeterBase, nullptr, "GetMeterRate_N", nullptr, nullptr, sizeof(ELMomentumMeterBase_eventGetMeterRate_N_Parms), Z_Construct_UFunction_UELMomentumMeterBase_GetMeterRate_N_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMomentumMeterBase_GetMeterRate_N_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMomentumMeterBase_GetMeterRate_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMomentumMeterBase_GetMeterRate_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMomentumMeterBase_GetMeterRate_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMomentumMeterBase_GetMeterRate_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMomentumMeterBase_GetMeterValue_N_Statics
	{
		struct ELMomentumMeterBase_eventGetMeterValue_N_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELMomentumMeterBase_GetMeterValue_N_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMomentumMeterBase_eventGetMeterValue_N_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMomentumMeterBase_GetMeterValue_N_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMomentumMeterBase_GetMeterValue_N_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMomentumMeterBase_GetMeterValue_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMomentumMeterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMomentumMeterBase_GetMeterValue_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMomentumMeterBase, nullptr, "GetMeterValue_N", nullptr, nullptr, sizeof(ELMomentumMeterBase_eventGetMeterValue_N_Parms), Z_Construct_UFunction_UELMomentumMeterBase_GetMeterValue_N_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMomentumMeterBase_GetMeterValue_N_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMomentumMeterBase_GetMeterValue_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMomentumMeterBase_GetMeterValue_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMomentumMeterBase_GetMeterValue_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMomentumMeterBase_GetMeterValue_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMomentumMeterBase_GetRemoveSec_N_Statics
	{
		struct ELMomentumMeterBase_eventGetRemoveSec_N_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELMomentumMeterBase_GetRemoveSec_N_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMomentumMeterBase_eventGetRemoveSec_N_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMomentumMeterBase_GetRemoveSec_N_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMomentumMeterBase_GetRemoveSec_N_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMomentumMeterBase_GetRemoveSec_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMomentumMeterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMomentumMeterBase_GetRemoveSec_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMomentumMeterBase, nullptr, "GetRemoveSec_N", nullptr, nullptr, sizeof(ELMomentumMeterBase_eventGetRemoveSec_N_Parms), Z_Construct_UFunction_UELMomentumMeterBase_GetRemoveSec_N_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMomentumMeterBase_GetRemoveSec_N_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMomentumMeterBase_GetRemoveSec_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMomentumMeterBase_GetRemoveSec_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMomentumMeterBase_GetRemoveSec_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMomentumMeterBase_GetRemoveSec_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMomentumMeterBase_GetState_N_Statics
	{
		struct ELMomentumMeterBase_eventGetState_N_Parms
		{
			EEliteMeterStateType_N ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELMomentumMeterBase_GetState_N_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELMomentumMeterBase_GetState_N_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMomentumMeterBase_eventGetState_N_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_EEliteMeterStateType_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMomentumMeterBase_GetState_N_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMomentumMeterBase_GetState_N_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMomentumMeterBase_GetState_N_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMomentumMeterBase_GetState_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMomentumMeterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMomentumMeterBase_GetState_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMomentumMeterBase, nullptr, "GetState_N", nullptr, nullptr, sizeof(ELMomentumMeterBase_eventGetState_N_Parms), Z_Construct_UFunction_UELMomentumMeterBase_GetState_N_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMomentumMeterBase_GetState_N_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMomentumMeterBase_GetState_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMomentumMeterBase_GetState_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMomentumMeterBase_GetState_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMomentumMeterBase_GetState_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMomentumMeterBase_IsDangerState_N_Statics
	{
		struct ELMomentumMeterBase_eventIsDangerState_N_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELMomentumMeterBase_IsDangerState_N_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMomentumMeterBase_eventIsDangerState_N_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMomentumMeterBase_IsDangerState_N_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMomentumMeterBase_eventIsDangerState_N_Parms), &Z_Construct_UFunction_UELMomentumMeterBase_IsDangerState_N_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMomentumMeterBase_IsDangerState_N_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMomentumMeterBase_IsDangerState_N_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMomentumMeterBase_IsDangerState_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMomentumMeterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMomentumMeterBase_IsDangerState_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMomentumMeterBase, nullptr, "IsDangerState_N", nullptr, nullptr, sizeof(ELMomentumMeterBase_eventIsDangerState_N_Parms), Z_Construct_UFunction_UELMomentumMeterBase_IsDangerState_N_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMomentumMeterBase_IsDangerState_N_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMomentumMeterBase_IsDangerState_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMomentumMeterBase_IsDangerState_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMomentumMeterBase_IsDangerState_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMomentumMeterBase_IsDangerState_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMomentumMeterBase_IsExciteState_N_Statics
	{
		struct ELMomentumMeterBase_eventIsExciteState_N_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELMomentumMeterBase_IsExciteState_N_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMomentumMeterBase_eventIsExciteState_N_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMomentumMeterBase_IsExciteState_N_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMomentumMeterBase_eventIsExciteState_N_Parms), &Z_Construct_UFunction_UELMomentumMeterBase_IsExciteState_N_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMomentumMeterBase_IsExciteState_N_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMomentumMeterBase_IsExciteState_N_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMomentumMeterBase_IsExciteState_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMomentumMeterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMomentumMeterBase_IsExciteState_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMomentumMeterBase, nullptr, "IsExciteState_N", nullptr, nullptr, sizeof(ELMomentumMeterBase_eventIsExciteState_N_Parms), Z_Construct_UFunction_UELMomentumMeterBase_IsExciteState_N_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMomentumMeterBase_IsExciteState_N_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMomentumMeterBase_IsExciteState_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMomentumMeterBase_IsExciteState_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMomentumMeterBase_IsExciteState_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMomentumMeterBase_IsExciteState_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMomentumMeterBase_IsRemoveState_N_Statics
	{
		struct ELMomentumMeterBase_eventIsRemoveState_N_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELMomentumMeterBase_IsRemoveState_N_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMomentumMeterBase_eventIsRemoveState_N_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMomentumMeterBase_IsRemoveState_N_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMomentumMeterBase_eventIsRemoveState_N_Parms), &Z_Construct_UFunction_UELMomentumMeterBase_IsRemoveState_N_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMomentumMeterBase_IsRemoveState_N_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMomentumMeterBase_IsRemoveState_N_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMomentumMeterBase_IsRemoveState_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMomentumMeterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMomentumMeterBase_IsRemoveState_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMomentumMeterBase, nullptr, "IsRemoveState_N", nullptr, nullptr, sizeof(ELMomentumMeterBase_eventIsRemoveState_N_Parms), Z_Construct_UFunction_UELMomentumMeterBase_IsRemoveState_N_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMomentumMeterBase_IsRemoveState_N_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMomentumMeterBase_IsRemoveState_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMomentumMeterBase_IsRemoveState_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMomentumMeterBase_IsRemoveState_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMomentumMeterBase_IsRemoveState_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMomentumMeterBase_IsSpecialState_N_Statics
	{
		struct ELMomentumMeterBase_eventIsSpecialState_N_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELMomentumMeterBase_IsSpecialState_N_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMomentumMeterBase_eventIsSpecialState_N_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMomentumMeterBase_IsSpecialState_N_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMomentumMeterBase_eventIsSpecialState_N_Parms), &Z_Construct_UFunction_UELMomentumMeterBase_IsSpecialState_N_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMomentumMeterBase_IsSpecialState_N_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMomentumMeterBase_IsSpecialState_N_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMomentumMeterBase_IsSpecialState_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMomentumMeterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMomentumMeterBase_IsSpecialState_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMomentumMeterBase, nullptr, "IsSpecialState_N", nullptr, nullptr, sizeof(ELMomentumMeterBase_eventIsSpecialState_N_Parms), Z_Construct_UFunction_UELMomentumMeterBase_IsSpecialState_N_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMomentumMeterBase_IsSpecialState_N_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMomentumMeterBase_IsSpecialState_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMomentumMeterBase_IsSpecialState_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMomentumMeterBase_IsSpecialState_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMomentumMeterBase_IsSpecialState_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMomentumMeterBase_MomentumStock_Impl_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELMomentumMeterBase_MomentumStock_Impl_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMomentumMeterBase_eventMomentumStock_Impl_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMomentumMeterBase_MomentumStock_Impl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMomentumMeterBase_eventMomentumStock_Impl_Parms), &Z_Construct_UFunction_UELMomentumMeterBase_MomentumStock_Impl_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMomentumMeterBase_MomentumStock_Impl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMomentumMeterBase_MomentumStock_Impl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMomentumMeterBase_MomentumStock_Impl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMomentumMeterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMomentumMeterBase_MomentumStock_Impl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMomentumMeterBase, nullptr, "MomentumStock_Impl", nullptr, nullptr, sizeof(ELMomentumMeterBase_eventMomentumStock_Impl_Parms), Z_Construct_UFunction_UELMomentumMeterBase_MomentumStock_Impl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMomentumMeterBase_MomentumStock_Impl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMomentumMeterBase_MomentumStock_Impl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMomentumMeterBase_MomentumStock_Impl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMomentumMeterBase_MomentumStock_Impl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMomentumMeterBase_MomentumStock_Impl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMomentumMeterBase_SetMeterPercent_Impl_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Percent;
		static void NewProp_WithFeedback_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WithFeedback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELMomentumMeterBase_SetMeterPercent_Impl_Statics::NewProp_Percent = { "Percent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMomentumMeterBase_eventSetMeterPercent_Impl_Parms, Percent), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMomentumMeterBase_SetMeterPercent_Impl_Statics::NewProp_WithFeedback_SetBit(void* Obj)
	{
		((ELMomentumMeterBase_eventSetMeterPercent_Impl_Parms*)Obj)->WithFeedback = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMomentumMeterBase_SetMeterPercent_Impl_Statics::NewProp_WithFeedback = { "WithFeedback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMomentumMeterBase_eventSetMeterPercent_Impl_Parms), &Z_Construct_UFunction_UELMomentumMeterBase_SetMeterPercent_Impl_Statics::NewProp_WithFeedback_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMomentumMeterBase_SetMeterPercent_Impl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMomentumMeterBase_SetMeterPercent_Impl_Statics::NewProp_Percent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMomentumMeterBase_SetMeterPercent_Impl_Statics::NewProp_WithFeedback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMomentumMeterBase_SetMeterPercent_Impl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMomentumMeterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMomentumMeterBase_SetMeterPercent_Impl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMomentumMeterBase, nullptr, "SetMeterPercent_Impl", nullptr, nullptr, sizeof(ELMomentumMeterBase_eventSetMeterPercent_Impl_Parms), Z_Construct_UFunction_UELMomentumMeterBase_SetMeterPercent_Impl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMomentumMeterBase_SetMeterPercent_Impl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMomentumMeterBase_SetMeterPercent_Impl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMomentumMeterBase_SetMeterPercent_Impl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMomentumMeterBase_SetMeterPercent_Impl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMomentumMeterBase_SetMeterPercent_Impl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMomentumMeterBase_SetParam_Statics
	{
		struct ELMomentumMeterBase_eventSetParam_Parms
		{
			float inHandsInPocketAddRate;
			float inHandsInPocketDuration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inHandsInPocketAddRate;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inHandsInPocketDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELMomentumMeterBase_SetParam_Statics::NewProp_inHandsInPocketAddRate = { "inHandsInPocketAddRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMomentumMeterBase_eventSetParam_Parms, inHandsInPocketAddRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELMomentumMeterBase_SetParam_Statics::NewProp_inHandsInPocketDuration = { "inHandsInPocketDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMomentumMeterBase_eventSetParam_Parms, inHandsInPocketDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMomentumMeterBase_SetParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMomentumMeterBase_SetParam_Statics::NewProp_inHandsInPocketAddRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMomentumMeterBase_SetParam_Statics::NewProp_inHandsInPocketDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMomentumMeterBase_SetParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMomentumMeterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMomentumMeterBase_SetParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMomentumMeterBase, nullptr, "SetParam", nullptr, nullptr, sizeof(ELMomentumMeterBase_eventSetParam_Parms), Z_Construct_UFunction_UELMomentumMeterBase_SetParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMomentumMeterBase_SetParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMomentumMeterBase_SetParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMomentumMeterBase_SetParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMomentumMeterBase_SetParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMomentumMeterBase_SetParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMomentumMeterBase_SetSeesawBuff_Impl_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Chara;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewBuffType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewBuffType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMomentumMeterBase_SetSeesawBuff_Impl_Statics::NewProp_Chara = { "Chara", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMomentumMeterBase_eventSetSeesawBuff_Impl_Parms, Chara), Z_Construct_UClass_AELCharacter_Native_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELMomentumMeterBase_SetSeesawBuff_Impl_Statics::NewProp_NewBuffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELMomentumMeterBase_SetSeesawBuff_Impl_Statics::NewProp_NewBuffType = { "NewBuffType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMomentumMeterBase_eventSetSeesawBuff_Impl_Parms, NewBuffType), Z_Construct_UEnum_ABP_200508_ESeesawBuffType_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMomentumMeterBase_SetSeesawBuff_Impl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMomentumMeterBase_SetSeesawBuff_Impl_Statics::NewProp_Chara,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMomentumMeterBase_SetSeesawBuff_Impl_Statics::NewProp_NewBuffType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMomentumMeterBase_SetSeesawBuff_Impl_Statics::NewProp_NewBuffType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMomentumMeterBase_SetSeesawBuff_Impl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMomentumMeterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMomentumMeterBase_SetSeesawBuff_Impl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMomentumMeterBase, nullptr, "SetSeesawBuff_Impl", nullptr, nullptr, sizeof(ELMomentumMeterBase_eventSetSeesawBuff_Impl_Parms), Z_Construct_UFunction_UELMomentumMeterBase_SetSeesawBuff_Impl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMomentumMeterBase_SetSeesawBuff_Impl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMomentumMeterBase_SetSeesawBuff_Impl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMomentumMeterBase_SetSeesawBuff_Impl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMomentumMeterBase_SetSeesawBuff_Impl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMomentumMeterBase_SetSeesawBuff_Impl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMomentumMeterBase_SubMeterValue_Impl_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static void NewProp_Direct_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Direct;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RecieveSpecialDamageType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RecieveSpecialDamageType;
		static void NewProp_RemoveMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RemoveMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELMomentumMeterBase_SubMeterValue_Impl_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMomentumMeterBase_eventSubMeterValue_Impl_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMomentumMeterBase_SubMeterValue_Impl_Statics::NewProp_Direct_SetBit(void* Obj)
	{
		((ELMomentumMeterBase_eventSubMeterValue_Impl_Parms*)Obj)->Direct = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMomentumMeterBase_SubMeterValue_Impl_Statics::NewProp_Direct = { "Direct", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMomentumMeterBase_eventSubMeterValue_Impl_Parms), &Z_Construct_UFunction_UELMomentumMeterBase_SubMeterValue_Impl_Statics::NewProp_Direct_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELMomentumMeterBase_SubMeterValue_Impl_Statics::NewProp_RecieveSpecialDamageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELMomentumMeterBase_SubMeterValue_Impl_Statics::NewProp_RecieveSpecialDamageType = { "RecieveSpecialDamageType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMomentumMeterBase_eventSubMeterValue_Impl_Parms, RecieveSpecialDamageType), Z_Construct_UEnum_ELITE_Game_ESpecialMovesType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMomentumMeterBase_SubMeterValue_Impl_Statics::NewProp_RemoveMode_SetBit(void* Obj)
	{
		((ELMomentumMeterBase_eventSubMeterValue_Impl_Parms*)Obj)->RemoveMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMomentumMeterBase_SubMeterValue_Impl_Statics::NewProp_RemoveMode = { "RemoveMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMomentumMeterBase_eventSubMeterValue_Impl_Parms), &Z_Construct_UFunction_UELMomentumMeterBase_SubMeterValue_Impl_Statics::NewProp_RemoveMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMomentumMeterBase_SubMeterValue_Impl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMomentumMeterBase_SubMeterValue_Impl_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMomentumMeterBase_SubMeterValue_Impl_Statics::NewProp_Direct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMomentumMeterBase_SubMeterValue_Impl_Statics::NewProp_RecieveSpecialDamageType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMomentumMeterBase_SubMeterValue_Impl_Statics::NewProp_RecieveSpecialDamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMomentumMeterBase_SubMeterValue_Impl_Statics::NewProp_RemoveMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMomentumMeterBase_SubMeterValue_Impl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMomentumMeterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMomentumMeterBase_SubMeterValue_Impl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMomentumMeterBase, nullptr, "SubMeterValue_Impl", nullptr, nullptr, sizeof(ELMomentumMeterBase_eventSubMeterValue_Impl_Parms), Z_Construct_UFunction_UELMomentumMeterBase_SubMeterValue_Impl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMomentumMeterBase_SubMeterValue_Impl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMomentumMeterBase_SubMeterValue_Impl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMomentumMeterBase_SubMeterValue_Impl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMomentumMeterBase_SubMeterValue_Impl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMomentumMeterBase_SubMeterValue_Impl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELMomentumMeterBase_NoRegister()
	{
		return UELMomentumMeterBase::StaticClass();
	}
	struct Z_Construct_UClass_UELMomentumMeterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeterValue_N_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MeterValue_N;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeterDefaultValue_N_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MeterDefaultValue_N;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExciteState_MetaData[];
#endif
		static void NewProp_bExciteState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExciteState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpecialState_MetaData[];
#endif
		static void NewProp_bSpecialState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpecialState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDangerState_MetaData[];
#endif
		static void NewProp_bDangerState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDangerState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EliteMeterState_N_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EliteMeterState_N_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EliteMeterState_N;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlimitedState_N_MetaData[];
#endif
		static void NewProp_UnlimitedState_N_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UnlimitedState_N;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveState_N_MetaData[];
#endif
		static void NewProp_RemoveState_N_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RemoveState_N;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveSec_N_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RemoveSec_N;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveValue_N_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RemoveValue_N;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveEndPercent_N_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RemoveEndPercent_N;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELMomentumMeterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELMomentumMeterBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELMomentumMeterBase_AddMeterValue_Impl, "AddMeterValue_Impl" }, // 2655710380
		{ &Z_Construct_UFunction_UELMomentumMeterBase_GetFixAddValueForNavigationState_Impl, "GetFixAddValueForNavigationState_Impl" }, // 2030808321
		{ &Z_Construct_UFunction_UELMomentumMeterBase_GetMeterPercent_N, "GetMeterPercent_N" }, // 3240722979
		{ &Z_Construct_UFunction_UELMomentumMeterBase_GetMeterRate_N, "GetMeterRate_N" }, // 1340606509
		{ &Z_Construct_UFunction_UELMomentumMeterBase_GetMeterValue_N, "GetMeterValue_N" }, // 2876146566
		{ &Z_Construct_UFunction_UELMomentumMeterBase_GetRemoveSec_N, "GetRemoveSec_N" }, // 1974684461
		{ &Z_Construct_UFunction_UELMomentumMeterBase_GetState_N, "GetState_N" }, // 116069350
		{ &Z_Construct_UFunction_UELMomentumMeterBase_IsDangerState_N, "IsDangerState_N" }, // 2114419520
		{ &Z_Construct_UFunction_UELMomentumMeterBase_IsExciteState_N, "IsExciteState_N" }, // 3013006065
		{ &Z_Construct_UFunction_UELMomentumMeterBase_IsRemoveState_N, "IsRemoveState_N" }, // 3029158785
		{ &Z_Construct_UFunction_UELMomentumMeterBase_IsSpecialState_N, "IsSpecialState_N" }, // 3128723680
		{ &Z_Construct_UFunction_UELMomentumMeterBase_MomentumStock_Impl, "MomentumStock_Impl" }, // 1451241805
		{ &Z_Construct_UFunction_UELMomentumMeterBase_SetMeterPercent_Impl, "SetMeterPercent_Impl" }, // 2924156485
		{ &Z_Construct_UFunction_UELMomentumMeterBase_SetParam, "SetParam" }, // 2643032381
		{ &Z_Construct_UFunction_UELMomentumMeterBase_SetSeesawBuff_Impl, "SetSeesawBuff_Impl" }, // 1059513067
		{ &Z_Construct_UFunction_UELMomentumMeterBase_SubMeterValue_Impl, "SubMeterValue_Impl" }, // 1551000755
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMomentumMeterBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ELMomentumMeterBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELMomentumMeterBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_MeterValue_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMomentumMeterBase" },
		{ "ModuleRelativePath", "Public/ELMomentumMeterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_MeterValue_N = { "MeterValue_N", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELMomentumMeterBase, MeterValue_N), METADATA_PARAMS(Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_MeterValue_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_MeterValue_N_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_MeterDefaultValue_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMomentumMeterBase" },
		{ "ModuleRelativePath", "Public/ELMomentumMeterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_MeterDefaultValue_N = { "MeterDefaultValue_N", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELMomentumMeterBase, MeterDefaultValue_N), METADATA_PARAMS(Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_MeterDefaultValue_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_MeterDefaultValue_N_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_bExciteState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMomentumMeterBase" },
		{ "ModuleRelativePath", "Public/ELMomentumMeterBase.h" },
	};
#endif
	void Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_bExciteState_SetBit(void* Obj)
	{
		((UELMomentumMeterBase*)Obj)->bExciteState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_bExciteState = { "bExciteState", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELMomentumMeterBase), &Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_bExciteState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_bExciteState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_bExciteState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_bSpecialState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMomentumMeterBase" },
		{ "ModuleRelativePath", "Public/ELMomentumMeterBase.h" },
	};
#endif
	void Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_bSpecialState_SetBit(void* Obj)
	{
		((UELMomentumMeterBase*)Obj)->bSpecialState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_bSpecialState = { "bSpecialState", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELMomentumMeterBase), &Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_bSpecialState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_bSpecialState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_bSpecialState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_bDangerState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMomentumMeterBase" },
		{ "ModuleRelativePath", "Public/ELMomentumMeterBase.h" },
	};
#endif
	void Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_bDangerState_SetBit(void* Obj)
	{
		((UELMomentumMeterBase*)Obj)->bDangerState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_bDangerState = { "bDangerState", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELMomentumMeterBase), &Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_bDangerState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_bDangerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_bDangerState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_EliteMeterState_N_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_EliteMeterState_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMomentumMeterBase" },
		{ "ModuleRelativePath", "Public/ELMomentumMeterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_EliteMeterState_N = { "EliteMeterState_N", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELMomentumMeterBase, EliteMeterState_N), Z_Construct_UEnum_ABP_200508_EEliteMeterStateType_N, METADATA_PARAMS(Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_EliteMeterState_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_EliteMeterState_N_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_UnlimitedState_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMomentumMeterBase" },
		{ "ModuleRelativePath", "Public/ELMomentumMeterBase.h" },
	};
#endif
	void Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_UnlimitedState_N_SetBit(void* Obj)
	{
		((UELMomentumMeterBase*)Obj)->UnlimitedState_N = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_UnlimitedState_N = { "UnlimitedState_N", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELMomentumMeterBase), &Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_UnlimitedState_N_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_UnlimitedState_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_UnlimitedState_N_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_RemoveState_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMomentumMeterBase" },
		{ "ModuleRelativePath", "Public/ELMomentumMeterBase.h" },
	};
#endif
	void Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_RemoveState_N_SetBit(void* Obj)
	{
		((UELMomentumMeterBase*)Obj)->RemoveState_N = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_RemoveState_N = { "RemoveState_N", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELMomentumMeterBase), &Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_RemoveState_N_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_RemoveState_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_RemoveState_N_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_RemoveSec_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMomentumMeterBase" },
		{ "ModuleRelativePath", "Public/ELMomentumMeterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_RemoveSec_N = { "RemoveSec_N", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELMomentumMeterBase, RemoveSec_N), METADATA_PARAMS(Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_RemoveSec_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_RemoveSec_N_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_RemoveValue_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMomentumMeterBase" },
		{ "ModuleRelativePath", "Public/ELMomentumMeterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_RemoveValue_N = { "RemoveValue_N", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELMomentumMeterBase, RemoveValue_N), METADATA_PARAMS(Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_RemoveValue_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_RemoveValue_N_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_RemoveEndPercent_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMomentumMeterBase" },
		{ "ModuleRelativePath", "Public/ELMomentumMeterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_RemoveEndPercent_N = { "RemoveEndPercent_N", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELMomentumMeterBase, RemoveEndPercent_N), METADATA_PARAMS(Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_RemoveEndPercent_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_RemoveEndPercent_N_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELMomentumMeterBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_MeterValue_N,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_MeterDefaultValue_N,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_bExciteState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_bSpecialState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_bDangerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_EliteMeterState_N_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_EliteMeterState_N,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_UnlimitedState_N,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_RemoveState_N,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_RemoveSec_N,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_RemoveValue_N,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMomentumMeterBase_Statics::NewProp_RemoveEndPercent_N,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELMomentumMeterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELMomentumMeterBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELMomentumMeterBase_Statics::ClassParams = {
		&UELMomentumMeterBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELMomentumMeterBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELMomentumMeterBase_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UELMomentumMeterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELMomentumMeterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELMomentumMeterBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELMomentumMeterBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELMomentumMeterBase, 7820431);
	template<> ABP_200508_API UClass* StaticClass<UELMomentumMeterBase>()
	{
		return UELMomentumMeterBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELMomentumMeterBase(Z_Construct_UClass_UELMomentumMeterBase, &UELMomentumMeterBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELMomentumMeterBase"), false, nullptr, nullptr, nullptr);

	void UELMomentumMeterBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bExciteState(TEXT("bExciteState"));
		static const FName Name_bSpecialState(TEXT("bSpecialState"));
		static const FName Name_bDangerState(TEXT("bDangerState"));
		static const FName Name_EliteMeterState_N(TEXT("EliteMeterState_N"));
		static const FName Name_UnlimitedState_N(TEXT("UnlimitedState_N"));
		static const FName Name_RemoveState_N(TEXT("RemoveState_N"));

		const bool bIsValid = true
			&& Name_bExciteState == ClassReps[(int32)ENetFields_Private::bExciteState].Property->GetFName()
			&& Name_bSpecialState == ClassReps[(int32)ENetFields_Private::bSpecialState].Property->GetFName()
			&& Name_bDangerState == ClassReps[(int32)ENetFields_Private::bDangerState].Property->GetFName()
			&& Name_EliteMeterState_N == ClassReps[(int32)ENetFields_Private::EliteMeterState_N].Property->GetFName()
			&& Name_UnlimitedState_N == ClassReps[(int32)ENetFields_Private::UnlimitedState_N].Property->GetFName()
			&& Name_RemoveState_N == ClassReps[(int32)ENetFields_Private::RemoveState_N].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UELMomentumMeterBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELMomentumMeterBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
