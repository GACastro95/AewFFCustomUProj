// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELTitleWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELTitleWidgetBase() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UELTitleWidgetBase_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UELTitleWidgetBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELMenuWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESaveDataAccessorEvent();
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_AccessorBase_NoRegister();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult();
	ABP_200508_API UClass* Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELTitleWidgetBase::execCallBack_EndConvert)
	{
		P_GET_ENUM(ESaveDataAccessorEvent,Z_Param_Event);
		P_GET_OBJECT(USaveData_AccessorBase,Z_Param_SaveDataAccessor);
		P_GET_ENUM(ESaveDataProcResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallBack_EndConvert(ESaveDataAccessorEvent(Z_Param_Event),Z_Param_SaveDataAccessor,ESaveDataProcResult(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTitleWidgetBase::execCallBack_EndDelete)
	{
		P_GET_ENUM(ESaveDataAccessorEvent,Z_Param_Event);
		P_GET_OBJECT(USaveData_AccessorBase,Z_Param_SaveDataAccessor);
		P_GET_ENUM(ESaveDataProcResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallBack_EndDelete(ESaveDataAccessorEvent(Z_Param_Event),Z_Param_SaveDataAccessor,ESaveDataProcResult(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTitleWidgetBase::execDeleteSaveData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteSaveData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTitleWidgetBase::execPreStartConvertSaveData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PreStartConvertSaveData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTitleWidgetBase::execStartConvertSaveData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartConvertSaveData();
		P_NATIVE_END;
	}
	static FName NAME_UELTitleWidgetBase_OnEndConvertSaveData = FName(TEXT("OnEndConvertSaveData"));
	void UELTitleWidgetBase::OnEndConvertSaveData(bool IsConvertFailed, bool IsChangeLanguageType, const int32 ChangeLanguageType, const ESaveDataProcResult SaveDataProcResult)
	{
		ELTitleWidgetBase_eventOnEndConvertSaveData_Parms Parms;
		Parms.IsConvertFailed=IsConvertFailed ? true : false;
		Parms.IsChangeLanguageType=IsChangeLanguageType ? true : false;
		Parms.ChangeLanguageType=ChangeLanguageType;
		Parms.SaveDataProcResult=SaveDataProcResult;
		ProcessEvent(FindFunctionChecked(NAME_UELTitleWidgetBase_OnEndConvertSaveData),&Parms);
	}
	static FName NAME_UELTitleWidgetBase_OnPressedAnalogL = FName(TEXT("OnPressedAnalogL"));
	void UELTitleWidgetBase::OnPressedAnalogL()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELTitleWidgetBase_OnPressedAnalogL),NULL);
	}
	static FName NAME_UELTitleWidgetBase_OnPressedAnyKey = FName(TEXT("OnPressedAnyKey"));
	void UELTitleWidgetBase::OnPressedAnyKey(AELGameCommonPlayerControllerBase* Controller)
	{
		ELTitleWidgetBase_eventOnPressedAnyKey_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UELTitleWidgetBase_OnPressedAnyKey),&Parms);
	}
	static FName NAME_UELTitleWidgetBase_OnPressedCancel = FName(TEXT("OnPressedCancel"));
	void UELTitleWidgetBase::OnPressedCancel()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELTitleWidgetBase_OnPressedCancel),NULL);
	}
	static FName NAME_UELTitleWidgetBase_OnPressedDecide = FName(TEXT("OnPressedDecide"));
	void UELTitleWidgetBase::OnPressedDecide(AELGameCommonPlayerControllerBase* Controller)
	{
		ELTitleWidgetBase_eventOnPressedDecide_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UELTitleWidgetBase_OnPressedDecide),&Parms);
	}
	void UELTitleWidgetBase::StaticRegisterNativesUELTitleWidgetBase()
	{
		UClass* Class = UELTitleWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallBack_EndConvert", &UELTitleWidgetBase::execCallBack_EndConvert },
			{ "CallBack_EndDelete", &UELTitleWidgetBase::execCallBack_EndDelete },
			{ "DeleteSaveData", &UELTitleWidgetBase::execDeleteSaveData },
			{ "PreStartConvertSaveData", &UELTitleWidgetBase::execPreStartConvertSaveData },
			{ "StartConvertSaveData", &UELTitleWidgetBase::execStartConvertSaveData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndConvert_Statics
	{
		struct ELTitleWidgetBase_eventCallBack_EndConvert_Parms
		{
			ESaveDataAccessorEvent Event;
			USaveData_AccessorBase* SaveDataAccessor;
			ESaveDataProcResult Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Event_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Event;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveDataAccessor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndConvert_Statics::NewProp_Event_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndConvert_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleWidgetBase_eventCallBack_EndConvert_Parms, Event), Z_Construct_UEnum_ABP_200508_ESaveDataAccessorEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndConvert_Statics::NewProp_SaveDataAccessor = { "SaveDataAccessor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleWidgetBase_eventCallBack_EndConvert_Parms, SaveDataAccessor), Z_Construct_UClass_USaveData_AccessorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndConvert_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndConvert_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleWidgetBase_eventCallBack_EndConvert_Parms, Result), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndConvert_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndConvert_Statics::NewProp_Event_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndConvert_Statics::NewProp_Event,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndConvert_Statics::NewProp_SaveDataAccessor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndConvert_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndConvert_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndConvert_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTitleWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndConvert_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTitleWidgetBase, nullptr, "CallBack_EndConvert", nullptr, nullptr, sizeof(ELTitleWidgetBase_eventCallBack_EndConvert_Parms), Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndConvert_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndConvert_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndConvert_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndConvert_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndConvert()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndConvert_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndDelete_Statics
	{
		struct ELTitleWidgetBase_eventCallBack_EndDelete_Parms
		{
			ESaveDataAccessorEvent Event;
			USaveData_AccessorBase* SaveDataAccessor;
			ESaveDataProcResult Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Event_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Event;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveDataAccessor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndDelete_Statics::NewProp_Event_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndDelete_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleWidgetBase_eventCallBack_EndDelete_Parms, Event), Z_Construct_UEnum_ABP_200508_ESaveDataAccessorEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndDelete_Statics::NewProp_SaveDataAccessor = { "SaveDataAccessor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleWidgetBase_eventCallBack_EndDelete_Parms, SaveDataAccessor), Z_Construct_UClass_USaveData_AccessorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndDelete_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndDelete_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleWidgetBase_eventCallBack_EndDelete_Parms, Result), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndDelete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndDelete_Statics::NewProp_Event_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndDelete_Statics::NewProp_Event,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndDelete_Statics::NewProp_SaveDataAccessor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndDelete_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndDelete_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndDelete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTitleWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndDelete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTitleWidgetBase, nullptr, "CallBack_EndDelete", nullptr, nullptr, sizeof(ELTitleWidgetBase_eventCallBack_EndDelete_Parms), Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndDelete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndDelete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndDelete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndDelete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndDelete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndDelete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTitleWidgetBase_DeleteSaveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleWidgetBase_DeleteSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTitleWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTitleWidgetBase_DeleteSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTitleWidgetBase, nullptr, "DeleteSaveData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTitleWidgetBase_DeleteSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleWidgetBase_DeleteSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTitleWidgetBase_DeleteSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTitleWidgetBase_DeleteSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTitleWidgetBase_OnEndConvertSaveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsConvertFailed_MetaData[];
#endif
		static void NewProp_IsConvertFailed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsConvertFailed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsChangeLanguageType_MetaData[];
#endif
		static void NewProp_IsChangeLanguageType_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsChangeLanguageType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangeLanguageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChangeLanguageType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SaveDataProcResult_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveDataProcResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SaveDataProcResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleWidgetBase_OnEndConvertSaveData_Statics::NewProp_IsConvertFailed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELTitleWidgetBase_OnEndConvertSaveData_Statics::NewProp_IsConvertFailed_SetBit(void* Obj)
	{
		((ELTitleWidgetBase_eventOnEndConvertSaveData_Parms*)Obj)->IsConvertFailed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTitleWidgetBase_OnEndConvertSaveData_Statics::NewProp_IsConvertFailed = { "IsConvertFailed", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTitleWidgetBase_eventOnEndConvertSaveData_Parms), &Z_Construct_UFunction_UELTitleWidgetBase_OnEndConvertSaveData_Statics::NewProp_IsConvertFailed_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELTitleWidgetBase_OnEndConvertSaveData_Statics::NewProp_IsConvertFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleWidgetBase_OnEndConvertSaveData_Statics::NewProp_IsConvertFailed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleWidgetBase_OnEndConvertSaveData_Statics::NewProp_IsChangeLanguageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELTitleWidgetBase_OnEndConvertSaveData_Statics::NewProp_IsChangeLanguageType_SetBit(void* Obj)
	{
		((ELTitleWidgetBase_eventOnEndConvertSaveData_Parms*)Obj)->IsChangeLanguageType = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTitleWidgetBase_OnEndConvertSaveData_Statics::NewProp_IsChangeLanguageType = { "IsChangeLanguageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTitleWidgetBase_eventOnEndConvertSaveData_Parms), &Z_Construct_UFunction_UELTitleWidgetBase_OnEndConvertSaveData_Statics::NewProp_IsChangeLanguageType_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELTitleWidgetBase_OnEndConvertSaveData_Statics::NewProp_IsChangeLanguageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleWidgetBase_OnEndConvertSaveData_Statics::NewProp_IsChangeLanguageType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleWidgetBase_OnEndConvertSaveData_Statics::NewProp_ChangeLanguageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELTitleWidgetBase_OnEndConvertSaveData_Statics::NewProp_ChangeLanguageType = { "ChangeLanguageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleWidgetBase_eventOnEndConvertSaveData_Parms, ChangeLanguageType), METADATA_PARAMS(Z_Construct_UFunction_UELTitleWidgetBase_OnEndConvertSaveData_Statics::NewProp_ChangeLanguageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleWidgetBase_OnEndConvertSaveData_Statics::NewProp_ChangeLanguageType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTitleWidgetBase_OnEndConvertSaveData_Statics::NewProp_SaveDataProcResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleWidgetBase_OnEndConvertSaveData_Statics::NewProp_SaveDataProcResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTitleWidgetBase_OnEndConvertSaveData_Statics::NewProp_SaveDataProcResult = { "SaveDataProcResult", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleWidgetBase_eventOnEndConvertSaveData_Parms, SaveDataProcResult), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(Z_Construct_UFunction_UELTitleWidgetBase_OnEndConvertSaveData_Statics::NewProp_SaveDataProcResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleWidgetBase_OnEndConvertSaveData_Statics::NewProp_SaveDataProcResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTitleWidgetBase_OnEndConvertSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleWidgetBase_OnEndConvertSaveData_Statics::NewProp_IsConvertFailed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleWidgetBase_OnEndConvertSaveData_Statics::NewProp_IsChangeLanguageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleWidgetBase_OnEndConvertSaveData_Statics::NewProp_ChangeLanguageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleWidgetBase_OnEndConvertSaveData_Statics::NewProp_SaveDataProcResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleWidgetBase_OnEndConvertSaveData_Statics::NewProp_SaveDataProcResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleWidgetBase_OnEndConvertSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTitleWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTitleWidgetBase_OnEndConvertSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTitleWidgetBase, nullptr, "OnEndConvertSaveData", nullptr, nullptr, sizeof(ELTitleWidgetBase_eventOnEndConvertSaveData_Parms), Z_Construct_UFunction_UELTitleWidgetBase_OnEndConvertSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleWidgetBase_OnEndConvertSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTitleWidgetBase_OnEndConvertSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleWidgetBase_OnEndConvertSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTitleWidgetBase_OnEndConvertSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTitleWidgetBase_OnEndConvertSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTitleWidgetBase_OnPressedAnalogL_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleWidgetBase_OnPressedAnalogL_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTitleWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTitleWidgetBase_OnPressedAnalogL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTitleWidgetBase, nullptr, "OnPressedAnalogL", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTitleWidgetBase_OnPressedAnalogL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleWidgetBase_OnPressedAnalogL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTitleWidgetBase_OnPressedAnalogL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTitleWidgetBase_OnPressedAnalogL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTitleWidgetBase_OnPressedAnyKey_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELTitleWidgetBase_OnPressedAnyKey_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleWidgetBase_eventOnPressedAnyKey_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTitleWidgetBase_OnPressedAnyKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleWidgetBase_OnPressedAnyKey_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleWidgetBase_OnPressedAnyKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTitleWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTitleWidgetBase_OnPressedAnyKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTitleWidgetBase, nullptr, "OnPressedAnyKey", nullptr, nullptr, sizeof(ELTitleWidgetBase_eventOnPressedAnyKey_Parms), Z_Construct_UFunction_UELTitleWidgetBase_OnPressedAnyKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleWidgetBase_OnPressedAnyKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTitleWidgetBase_OnPressedAnyKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleWidgetBase_OnPressedAnyKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTitleWidgetBase_OnPressedAnyKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTitleWidgetBase_OnPressedAnyKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTitleWidgetBase_OnPressedCancel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleWidgetBase_OnPressedCancel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTitleWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTitleWidgetBase_OnPressedCancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTitleWidgetBase, nullptr, "OnPressedCancel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTitleWidgetBase_OnPressedCancel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleWidgetBase_OnPressedCancel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTitleWidgetBase_OnPressedCancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTitleWidgetBase_OnPressedCancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTitleWidgetBase_OnPressedDecide_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELTitleWidgetBase_OnPressedDecide_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleWidgetBase_eventOnPressedDecide_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTitleWidgetBase_OnPressedDecide_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleWidgetBase_OnPressedDecide_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleWidgetBase_OnPressedDecide_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTitleWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTitleWidgetBase_OnPressedDecide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTitleWidgetBase, nullptr, "OnPressedDecide", nullptr, nullptr, sizeof(ELTitleWidgetBase_eventOnPressedDecide_Parms), Z_Construct_UFunction_UELTitleWidgetBase_OnPressedDecide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleWidgetBase_OnPressedDecide_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTitleWidgetBase_OnPressedDecide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleWidgetBase_OnPressedDecide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTitleWidgetBase_OnPressedDecide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTitleWidgetBase_OnPressedDecide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTitleWidgetBase_PreStartConvertSaveData_Statics
	{
		struct ELTitleWidgetBase_eventPreStartConvertSaveData_Parms
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
	void Z_Construct_UFunction_UELTitleWidgetBase_PreStartConvertSaveData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELTitleWidgetBase_eventPreStartConvertSaveData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTitleWidgetBase_PreStartConvertSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTitleWidgetBase_eventPreStartConvertSaveData_Parms), &Z_Construct_UFunction_UELTitleWidgetBase_PreStartConvertSaveData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTitleWidgetBase_PreStartConvertSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleWidgetBase_PreStartConvertSaveData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleWidgetBase_PreStartConvertSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTitleWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTitleWidgetBase_PreStartConvertSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTitleWidgetBase, nullptr, "PreStartConvertSaveData", nullptr, nullptr, sizeof(ELTitleWidgetBase_eventPreStartConvertSaveData_Parms), Z_Construct_UFunction_UELTitleWidgetBase_PreStartConvertSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleWidgetBase_PreStartConvertSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTitleWidgetBase_PreStartConvertSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleWidgetBase_PreStartConvertSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTitleWidgetBase_PreStartConvertSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTitleWidgetBase_PreStartConvertSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTitleWidgetBase_StartConvertSaveData_Statics
	{
		struct ELTitleWidgetBase_eventStartConvertSaveData_Parms
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
	void Z_Construct_UFunction_UELTitleWidgetBase_StartConvertSaveData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELTitleWidgetBase_eventStartConvertSaveData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTitleWidgetBase_StartConvertSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTitleWidgetBase_eventStartConvertSaveData_Parms), &Z_Construct_UFunction_UELTitleWidgetBase_StartConvertSaveData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTitleWidgetBase_StartConvertSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleWidgetBase_StartConvertSaveData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleWidgetBase_StartConvertSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTitleWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTitleWidgetBase_StartConvertSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTitleWidgetBase, nullptr, "StartConvertSaveData", nullptr, nullptr, sizeof(ELTitleWidgetBase_eventStartConvertSaveData_Parms), Z_Construct_UFunction_UELTitleWidgetBase_StartConvertSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleWidgetBase_StartConvertSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTitleWidgetBase_StartConvertSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleWidgetBase_StartConvertSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTitleWidgetBase_StartConvertSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTitleWidgetBase_StartConvertSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELTitleWidgetBase_NoRegister()
	{
		return UELTitleWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELTitleWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_DeleteSaveDataAccessors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DeleteSaveDataAccessors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_DeleteSaveDataAccessors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_ConvertSaveDataAccessors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ConvertSaveDataAccessors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_ConvertSaveDataAccessors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELTitleWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELMenuWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELTitleWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndConvert, "CallBack_EndConvert" }, // 1177830441
		{ &Z_Construct_UFunction_UELTitleWidgetBase_CallBack_EndDelete, "CallBack_EndDelete" }, // 708183617
		{ &Z_Construct_UFunction_UELTitleWidgetBase_DeleteSaveData, "DeleteSaveData" }, // 2959014644
		{ &Z_Construct_UFunction_UELTitleWidgetBase_OnEndConvertSaveData, "OnEndConvertSaveData" }, // 83337706
		{ &Z_Construct_UFunction_UELTitleWidgetBase_OnPressedAnalogL, "OnPressedAnalogL" }, // 4200650646
		{ &Z_Construct_UFunction_UELTitleWidgetBase_OnPressedAnyKey, "OnPressedAnyKey" }, // 3744255291
		{ &Z_Construct_UFunction_UELTitleWidgetBase_OnPressedCancel, "OnPressedCancel" }, // 4149024223
		{ &Z_Construct_UFunction_UELTitleWidgetBase_OnPressedDecide, "OnPressedDecide" }, // 233607646
		{ &Z_Construct_UFunction_UELTitleWidgetBase_PreStartConvertSaveData, "PreStartConvertSaveData" }, // 1826400640
		{ &Z_Construct_UFunction_UELTitleWidgetBase_StartConvertSaveData, "StartConvertSaveData" }, // 4086974872
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELTitleWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELTitleWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELTitleWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELTitleWidgetBase_Statics::NewProp_m_DeleteSaveDataAccessors_Inner = { "m_DeleteSaveDataAccessors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USaveData_AccessorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELTitleWidgetBase_Statics::NewProp_m_DeleteSaveDataAccessors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELTitleWidgetBase" },
		{ "ModuleRelativePath", "Public/ELTitleWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELTitleWidgetBase_Statics::NewProp_m_DeleteSaveDataAccessors = { "m_DeleteSaveDataAccessors", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELTitleWidgetBase, m_DeleteSaveDataAccessors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELTitleWidgetBase_Statics::NewProp_m_DeleteSaveDataAccessors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELTitleWidgetBase_Statics::NewProp_m_DeleteSaveDataAccessors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELTitleWidgetBase_Statics::NewProp_m_ConvertSaveDataAccessors_Inner = { "m_ConvertSaveDataAccessors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USaveData_AccessorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELTitleWidgetBase_Statics::NewProp_m_ConvertSaveDataAccessors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELTitleWidgetBase" },
		{ "ModuleRelativePath", "Public/ELTitleWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELTitleWidgetBase_Statics::NewProp_m_ConvertSaveDataAccessors = { "m_ConvertSaveDataAccessors", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELTitleWidgetBase, m_ConvertSaveDataAccessors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELTitleWidgetBase_Statics::NewProp_m_ConvertSaveDataAccessors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELTitleWidgetBase_Statics::NewProp_m_ConvertSaveDataAccessors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELTitleWidgetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELTitleWidgetBase_Statics::NewProp_m_DeleteSaveDataAccessors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELTitleWidgetBase_Statics::NewProp_m_DeleteSaveDataAccessors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELTitleWidgetBase_Statics::NewProp_m_ConvertSaveDataAccessors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELTitleWidgetBase_Statics::NewProp_m_ConvertSaveDataAccessors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELTitleWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELTitleWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELTitleWidgetBase_Statics::ClassParams = {
		&UELTitleWidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELTitleWidgetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELTitleWidgetBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELTitleWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELTitleWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELTitleWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELTitleWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELTitleWidgetBase, 1054850564);
	template<> ELITE_API UClass* StaticClass<UELTitleWidgetBase>()
	{
		return UELTitleWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELTitleWidgetBase(Z_Construct_UClass_UELTitleWidgetBase, &UELTitleWidgetBase::StaticClass, TEXT("/Script/ELITE"), TEXT("UELTitleWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELTitleWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
