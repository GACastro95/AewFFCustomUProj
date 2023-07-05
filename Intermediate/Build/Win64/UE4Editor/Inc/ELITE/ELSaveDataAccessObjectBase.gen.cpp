// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELSaveDataAccessObjectBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSaveDataAccessObjectBase() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UELSaveDataAccessObjectBase_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UELSaveDataAccessObjectBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESaveDataAccessorEvent();
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_AccessorBase_NoRegister();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ESaveDataType();
	ELITE_API UFunction* Z_Construct_UDelegateFunction_ELITE_SaveDataCreatedDelegate__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataObjectBase_NoRegister();
	ELITE_API UFunction* Z_Construct_UDelegateFunction_ELITE_SaveDataLoadedDelegate__DelegateSignature();
	ELITE_API UFunction* Z_Construct_UDelegateFunction_ELITE_SaveDataUpdatedDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
	DEFINE_FUNCTION(UELSaveDataAccessObjectBase::execCallback_RequestProcessEnd)
	{
		P_GET_ENUM(ESaveDataAccessorEvent,Z_Param_Event);
		P_GET_OBJECT(USaveData_AccessorBase,Z_Param_SaveDataAccessor);
		P_GET_ENUM(ESaveDataProcResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Callback_RequestProcessEnd(ESaveDataAccessorEvent(Z_Param_Event),Z_Param_SaveDataAccessor,ESaveDataProcResult(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSaveDataAccessObjectBase::execCreateData)
	{
		P_GET_ENUM(ESaveDataType,Z_Param__saveDataType);
		P_GET_PROPERTY(FDelegateProperty,Z_Param__delegate);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateData(ESaveDataType(Z_Param__saveDataType),FSaveDataCreatedDelegate(Z_Param__delegate),Z_Param_Timeout);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSaveDataAccessObjectBase::execCreateSaveDataAccessObject)
	{
		P_GET_ENUM(ESaveDataType,Z_Param_SaveDataType);
		P_GET_OBJECT(UObject,Z_Param_Outer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELSaveDataAccessObjectBase**)Z_Param__Result=UELSaveDataAccessObjectBase::CreateSaveDataAccessObject(ESaveDataType(Z_Param_SaveDataType),Z_Param_Outer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSaveDataAccessObjectBase::execGetLastResult)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESaveDataProcResult*)Z_Param__Result=P_THIS->GetLastResult();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSaveDataAccessObjectBase::execGetRequestedSaveDataType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESaveDataType*)Z_Param__Result=P_THIS->GetRequestedSaveDataType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSaveDataAccessObjectBase::execGetSaveDataObject)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_GET_ENUM_REF(ESaveDataProcResult,Z_Param_Out_ProcResult);
		P_GET_OBJECT(USaveData_AccessorBase,Z_Param_SaveDataAccessor);
		P_GET_PROPERTY(FByteProperty,Z_Param_AccessFlags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USaveDataObjectBase**)Z_Param__Result=P_THIS->GetSaveDataObject(Z_Param_Class,(ESaveDataProcResult&)(Z_Param_Out_ProcResult),Z_Param_SaveDataAccessor,Z_Param_AccessFlags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSaveDataAccessObjectBase::execIsAccessCache)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAccessCache();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSaveDataAccessObjectBase::execIsRequestComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRequestComplete_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSaveDataAccessObjectBase::execIsSupportSaveDataType)
	{
		P_GET_ENUM_REF(ESaveDataType,Z_Param_Out_SaveDataType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSupportSaveDataType_Implementation((ESaveDataType&)(Z_Param_Out_SaveDataType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSaveDataAccessObjectBase::execLoad)
	{
		P_GET_OBJECT(UObject,Z_Param_Outer);
		P_GET_ENUM(ESaveDataType,Z_Param_InSaveDataType);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELSaveDataAccessObjectBase**)Z_Param__Result=UELSaveDataAccessObjectBase::Load(Z_Param_Outer,ESaveDataType(Z_Param_InSaveDataType),FSaveDataLoadedDelegate(Z_Param_Delegate),Z_Param_Timeout);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSaveDataAccessObjectBase::execLoadData)
	{
		P_GET_ENUM(ESaveDataType,Z_Param__saveDataType);
		P_GET_PROPERTY(FDelegateProperty,Z_Param__delegate);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadData(ESaveDataType(Z_Param__saveDataType),FSaveDataLoadedDelegate(Z_Param__delegate),Z_Param_Timeout);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSaveDataAccessObjectBase::execOnCreatedData)
	{
		P_GET_UBOOL(Z_Param__isSuccess);
		P_GET_OBJECT(USaveData_AccessorBase,Z_Param__saveDataAccessor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCreatedData_Implementation(Z_Param__isSuccess,Z_Param__saveDataAccessor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSaveDataAccessObjectBase::execOnLoadedData)
	{
		P_GET_UBOOL(Z_Param__isSuccess);
		P_GET_OBJECT(USaveData_AccessorBase,Z_Param__saveDataAccessor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLoadedData_Implementation(Z_Param__isSuccess,Z_Param__saveDataAccessor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSaveDataAccessObjectBase::execOnRequestTermination)
	{
		P_GET_UBOOL(Z_Param_IsSuccess);
		P_GET_ENUM(ESaveDataProcResult,Z_Param_InProcResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESaveDataProcResult*)Z_Param__Result=P_THIS->OnRequestTermination_Implementation(Z_Param_IsSuccess,ESaveDataProcResult(Z_Param_InProcResult));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSaveDataAccessObjectBase::execOnStartCreateData)
	{
		P_GET_ENUM_REF(ESaveDataProcResult,Z_Param_Out_ProcResult);
		P_GET_ENUM(ESaveDataType,Z_Param__saveDataType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnStartCreateData_Implementation((ESaveDataProcResult&)(Z_Param_Out_ProcResult),ESaveDataType(Z_Param__saveDataType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSaveDataAccessObjectBase::execOnStartLoadData)
	{
		P_GET_ENUM_REF(ESaveDataProcResult,Z_Param_Out_ProcResult);
		P_GET_ENUM(ESaveDataType,Z_Param__saveDataType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnStartLoadData_Implementation((ESaveDataProcResult&)(Z_Param_Out_ProcResult),ESaveDataType(Z_Param__saveDataType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSaveDataAccessObjectBase::execOnStartUpdateData)
	{
		P_GET_ENUM_REF(ESaveDataProcResult,Z_Param_Out_ProcResult);
		P_GET_ENUM(ESaveDataType,Z_Param__saveDataType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnStartUpdateData_Implementation((ESaveDataProcResult&)(Z_Param_Out_ProcResult),ESaveDataType(Z_Param__saveDataType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSaveDataAccessObjectBase::execOnUnbindAccessor)
	{
		P_GET_OBJECT(USaveData_AccessorBase,Z_Param_SaveDataAccessor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUnbindAccessor_Implementation(Z_Param_SaveDataAccessor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSaveDataAccessObjectBase::execReadData)
	{
		P_GET_OBJECT(USaveDataObjectBase,Z_Param_SaveDataObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReadData_Implementation(Z_Param_SaveDataObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSaveDataAccessObjectBase::execRequestTermination)
	{
		P_GET_UBOOL(Z_Param_IsSuccess);
		P_GET_ENUM(ESaveDataProcResult,Z_Param_ProcResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestTermination(Z_Param_IsSuccess,ESaveDataProcResult(Z_Param_ProcResult));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSaveDataAccessObjectBase::execSave)
	{
		P_GET_OBJECT(UObject,Z_Param_Outer);
		P_GET_ENUM(ESaveDataType,Z_Param_InSaveDataType);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELSaveDataAccessObjectBase**)Z_Param__Result=UELSaveDataAccessObjectBase::Save(Z_Param_Outer,ESaveDataType(Z_Param_InSaveDataType),FSaveDataCreatedDelegate(Z_Param_Delegate),Z_Param_Timeout);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSaveDataAccessObjectBase::execUpdate)
	{
		P_GET_OBJECT(UObject,Z_Param_Outer);
		P_GET_ENUM(ESaveDataType,Z_Param_InSaveDataType);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELSaveDataAccessObjectBase**)Z_Param__Result=UELSaveDataAccessObjectBase::Update(Z_Param_Outer,ESaveDataType(Z_Param_InSaveDataType),FSaveDataUpdatedDelegate(Z_Param_Delegate),Z_Param_Timeout);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSaveDataAccessObjectBase::execUpdateData)
	{
		P_GET_ENUM(ESaveDataType,Z_Param__saveDataType);
		P_GET_PROPERTY(FDelegateProperty,Z_Param__delegate);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateData(ESaveDataType(Z_Param__saveDataType),FSaveDataUpdatedDelegate(Z_Param__delegate),Z_Param_Timeout);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSaveDataAccessObjectBase::execWriteData)
	{
		P_GET_OBJECT(USaveDataObjectBase,Z_Param_SaveDataObject);
		P_GET_UBOOL(Z_Param_bInitialize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->WriteData_Implementation(Z_Param_SaveDataObject,Z_Param_bInitialize);
		P_NATIVE_END;
	}
	static FName NAME_UELSaveDataAccessObjectBase_IsRequestComplete = FName(TEXT("IsRequestComplete"));
	bool UELSaveDataAccessObjectBase::IsRequestComplete()
	{
		ELSaveDataAccessObjectBase_eventIsRequestComplete_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UELSaveDataAccessObjectBase_IsRequestComplete),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELSaveDataAccessObjectBase_IsSupportSaveDataType = FName(TEXT("IsSupportSaveDataType"));
	bool UELSaveDataAccessObjectBase::IsSupportSaveDataType(ESaveDataType const& SaveDataType)
	{
		ELSaveDataAccessObjectBase_eventIsSupportSaveDataType_Parms Parms;
		Parms.SaveDataType=SaveDataType;
		ProcessEvent(FindFunctionChecked(NAME_UELSaveDataAccessObjectBase_IsSupportSaveDataType),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELSaveDataAccessObjectBase_OnCreatedData = FName(TEXT("OnCreatedData"));
	void UELSaveDataAccessObjectBase::OnCreatedData(bool _isSuccess, USaveData_AccessorBase* _saveDataAccessor)
	{
		ELSaveDataAccessObjectBase_eventOnCreatedData_Parms Parms;
		Parms._isSuccess=_isSuccess ? true : false;
		Parms._saveDataAccessor=_saveDataAccessor;
		ProcessEvent(FindFunctionChecked(NAME_UELSaveDataAccessObjectBase_OnCreatedData),&Parms);
	}
	static FName NAME_UELSaveDataAccessObjectBase_OnLoadedData = FName(TEXT("OnLoadedData"));
	void UELSaveDataAccessObjectBase::OnLoadedData(bool _isSuccess, USaveData_AccessorBase* _saveDataAccessor)
	{
		ELSaveDataAccessObjectBase_eventOnLoadedData_Parms Parms;
		Parms._isSuccess=_isSuccess ? true : false;
		Parms._saveDataAccessor=_saveDataAccessor;
		ProcessEvent(FindFunctionChecked(NAME_UELSaveDataAccessObjectBase_OnLoadedData),&Parms);
	}
	static FName NAME_UELSaveDataAccessObjectBase_OnRequestTermination = FName(TEXT("OnRequestTermination"));
	ESaveDataProcResult UELSaveDataAccessObjectBase::OnRequestTermination(bool IsSuccess, const ESaveDataProcResult InProcResult)
	{
		ELSaveDataAccessObjectBase_eventOnRequestTermination_Parms Parms;
		Parms.IsSuccess=IsSuccess ? true : false;
		Parms.InProcResult=InProcResult;
		ProcessEvent(FindFunctionChecked(NAME_UELSaveDataAccessObjectBase_OnRequestTermination),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UELSaveDataAccessObjectBase_OnStartCreateData = FName(TEXT("OnStartCreateData"));
	bool UELSaveDataAccessObjectBase::OnStartCreateData(ESaveDataProcResult& ProcResult, ESaveDataType _saveDataType)
	{
		ELSaveDataAccessObjectBase_eventOnStartCreateData_Parms Parms;
		Parms.ProcResult=ProcResult;
		Parms._saveDataType=_saveDataType;
		ProcessEvent(FindFunctionChecked(NAME_UELSaveDataAccessObjectBase_OnStartCreateData),&Parms);
		ProcResult=Parms.ProcResult;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELSaveDataAccessObjectBase_OnStartLoadData = FName(TEXT("OnStartLoadData"));
	bool UELSaveDataAccessObjectBase::OnStartLoadData(ESaveDataProcResult& ProcResult, ESaveDataType _saveDataType)
	{
		ELSaveDataAccessObjectBase_eventOnStartLoadData_Parms Parms;
		Parms.ProcResult=ProcResult;
		Parms._saveDataType=_saveDataType;
		ProcessEvent(FindFunctionChecked(NAME_UELSaveDataAccessObjectBase_OnStartLoadData),&Parms);
		ProcResult=Parms.ProcResult;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELSaveDataAccessObjectBase_OnStartUpdateData = FName(TEXT("OnStartUpdateData"));
	bool UELSaveDataAccessObjectBase::OnStartUpdateData(ESaveDataProcResult& ProcResult, ESaveDataType _saveDataType)
	{
		ELSaveDataAccessObjectBase_eventOnStartUpdateData_Parms Parms;
		Parms.ProcResult=ProcResult;
		Parms._saveDataType=_saveDataType;
		ProcessEvent(FindFunctionChecked(NAME_UELSaveDataAccessObjectBase_OnStartUpdateData),&Parms);
		ProcResult=Parms.ProcResult;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELSaveDataAccessObjectBase_OnUnbindAccessor = FName(TEXT("OnUnbindAccessor"));
	void UELSaveDataAccessObjectBase::OnUnbindAccessor(USaveData_AccessorBase* SaveDataAccessor)
	{
		ELSaveDataAccessObjectBase_eventOnUnbindAccessor_Parms Parms;
		Parms.SaveDataAccessor=SaveDataAccessor;
		ProcessEvent(FindFunctionChecked(NAME_UELSaveDataAccessObjectBase_OnUnbindAccessor),&Parms);
	}
	static FName NAME_UELSaveDataAccessObjectBase_ReadData = FName(TEXT("ReadData"));
	bool UELSaveDataAccessObjectBase::ReadData(USaveDataObjectBase* SaveDataObject)
	{
		ELSaveDataAccessObjectBase_eventReadData_Parms Parms;
		Parms.SaveDataObject=SaveDataObject;
		ProcessEvent(FindFunctionChecked(NAME_UELSaveDataAccessObjectBase_ReadData),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELSaveDataAccessObjectBase_WriteData = FName(TEXT("WriteData"));
	bool UELSaveDataAccessObjectBase::WriteData(USaveDataObjectBase* SaveDataObject, bool bInitialize)
	{
		ELSaveDataAccessObjectBase_eventWriteData_Parms Parms;
		Parms.SaveDataObject=SaveDataObject;
		Parms.bInitialize=bInitialize ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELSaveDataAccessObjectBase_WriteData),&Parms);
		return !!Parms.ReturnValue;
	}
	void UELSaveDataAccessObjectBase::StaticRegisterNativesUELSaveDataAccessObjectBase()
	{
		UClass* Class = UELSaveDataAccessObjectBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Callback_RequestProcessEnd", &UELSaveDataAccessObjectBase::execCallback_RequestProcessEnd },
			{ "CreateData", &UELSaveDataAccessObjectBase::execCreateData },
			{ "CreateSaveDataAccessObject", &UELSaveDataAccessObjectBase::execCreateSaveDataAccessObject },
			{ "GetLastResult", &UELSaveDataAccessObjectBase::execGetLastResult },
			{ "GetRequestedSaveDataType", &UELSaveDataAccessObjectBase::execGetRequestedSaveDataType },
			{ "GetSaveDataObject", &UELSaveDataAccessObjectBase::execGetSaveDataObject },
			{ "IsAccessCache", &UELSaveDataAccessObjectBase::execIsAccessCache },
			{ "IsRequestComplete", &UELSaveDataAccessObjectBase::execIsRequestComplete },
			{ "IsSupportSaveDataType", &UELSaveDataAccessObjectBase::execIsSupportSaveDataType },
			{ "Load", &UELSaveDataAccessObjectBase::execLoad },
			{ "LoadData", &UELSaveDataAccessObjectBase::execLoadData },
			{ "OnCreatedData", &UELSaveDataAccessObjectBase::execOnCreatedData },
			{ "OnLoadedData", &UELSaveDataAccessObjectBase::execOnLoadedData },
			{ "OnRequestTermination", &UELSaveDataAccessObjectBase::execOnRequestTermination },
			{ "OnStartCreateData", &UELSaveDataAccessObjectBase::execOnStartCreateData },
			{ "OnStartLoadData", &UELSaveDataAccessObjectBase::execOnStartLoadData },
			{ "OnStartUpdateData", &UELSaveDataAccessObjectBase::execOnStartUpdateData },
			{ "OnUnbindAccessor", &UELSaveDataAccessObjectBase::execOnUnbindAccessor },
			{ "ReadData", &UELSaveDataAccessObjectBase::execReadData },
			{ "RequestTermination", &UELSaveDataAccessObjectBase::execRequestTermination },
			{ "Save", &UELSaveDataAccessObjectBase::execSave },
			{ "Update", &UELSaveDataAccessObjectBase::execUpdate },
			{ "UpdateData", &UELSaveDataAccessObjectBase::execUpdateData },
			{ "WriteData", &UELSaveDataAccessObjectBase::execWriteData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSaveDataAccessObjectBase_Callback_RequestProcessEnd_Statics
	{
		struct ELSaveDataAccessObjectBase_eventCallback_RequestProcessEnd_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_Callback_RequestProcessEnd_Statics::NewProp_Event_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_Callback_RequestProcessEnd_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventCallback_RequestProcessEnd_Parms, Event), Z_Construct_UEnum_ABP_200508_ESaveDataAccessorEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_Callback_RequestProcessEnd_Statics::NewProp_SaveDataAccessor = { "SaveDataAccessor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventCallback_RequestProcessEnd_Parms, SaveDataAccessor), Z_Construct_UClass_USaveData_AccessorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_Callback_RequestProcessEnd_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_Callback_RequestProcessEnd_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventCallback_RequestProcessEnd_Parms, Result), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSaveDataAccessObjectBase_Callback_RequestProcessEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_Callback_RequestProcessEnd_Statics::NewProp_Event_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_Callback_RequestProcessEnd_Statics::NewProp_Event,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_Callback_RequestProcessEnd_Statics::NewProp_SaveDataAccessor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_Callback_RequestProcessEnd_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_Callback_RequestProcessEnd_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObjectBase_Callback_RequestProcessEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSaveDataAccessObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_Callback_RequestProcessEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSaveDataAccessObjectBase, nullptr, "Callback_RequestProcessEnd", nullptr, nullptr, sizeof(ELSaveDataAccessObjectBase_eventCallback_RequestProcessEnd_Parms), Z_Construct_UFunction_UELSaveDataAccessObjectBase_Callback_RequestProcessEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_Callback_RequestProcessEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObjectBase_Callback_RequestProcessEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_Callback_RequestProcessEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSaveDataAccessObjectBase_Callback_RequestProcessEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSaveDataAccessObjectBase_Callback_RequestProcessEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateData_Statics
	{
		struct ELSaveDataAccessObjectBase_eventCreateData_Parms
		{
			ESaveDataType _saveDataType;
			FScriptDelegate _delegate;
			float Timeout;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__saveDataType;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp__delegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateData_Statics::NewProp__saveDataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateData_Statics::NewProp__saveDataType = { "_saveDataType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventCreateData_Parms, _saveDataType), Z_Construct_UEnum_ELITE_Game_ESaveDataType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateData_Statics::NewProp__delegate = { "_delegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventCreateData_Parms, _delegate), Z_Construct_UDelegateFunction_ELITE_SaveDataCreatedDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateData_Statics::NewProp_Timeout_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateData_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventCreateData_Parms, Timeout), METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateData_Statics::NewProp_Timeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateData_Statics::NewProp_Timeout_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateData_Statics::NewProp__saveDataType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateData_Statics::NewProp__saveDataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateData_Statics::NewProp__delegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateData_Statics::NewProp_Timeout,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSaveDataAccessObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSaveDataAccessObjectBase, nullptr, "CreateData", nullptr, nullptr, sizeof(ELSaveDataAccessObjectBase_eventCreateData_Parms), Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateSaveDataAccessObject_Statics
	{
		struct ELSaveDataAccessObjectBase_eventCreateSaveDataAccessObject_Parms
		{
			ESaveDataType SaveDataType;
			UObject* Outer;
			UELSaveDataAccessObjectBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SaveDataType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveDataType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SaveDataType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Outer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateSaveDataAccessObject_Statics::NewProp_SaveDataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateSaveDataAccessObject_Statics::NewProp_SaveDataType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateSaveDataAccessObject_Statics::NewProp_SaveDataType = { "SaveDataType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventCreateSaveDataAccessObject_Parms, SaveDataType), Z_Construct_UEnum_ELITE_Game_ESaveDataType, METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateSaveDataAccessObject_Statics::NewProp_SaveDataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateSaveDataAccessObject_Statics::NewProp_SaveDataType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateSaveDataAccessObject_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventCreateSaveDataAccessObject_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateSaveDataAccessObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventCreateSaveDataAccessObject_Parms, ReturnValue), Z_Construct_UClass_UELSaveDataAccessObjectBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateSaveDataAccessObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateSaveDataAccessObject_Statics::NewProp_SaveDataType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateSaveDataAccessObject_Statics::NewProp_SaveDataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateSaveDataAccessObject_Statics::NewProp_Outer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateSaveDataAccessObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateSaveDataAccessObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSaveDataAccessObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateSaveDataAccessObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSaveDataAccessObjectBase, nullptr, "CreateSaveDataAccessObject", nullptr, nullptr, sizeof(ELSaveDataAccessObjectBase_eventCreateSaveDataAccessObject_Parms), Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateSaveDataAccessObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateSaveDataAccessObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateSaveDataAccessObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateSaveDataAccessObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateSaveDataAccessObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateSaveDataAccessObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetLastResult_Statics
	{
		struct ELSaveDataAccessObjectBase_eventGetLastResult_Parms
		{
			ESaveDataProcResult ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetLastResult_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetLastResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventGetLastResult_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetLastResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetLastResult_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetLastResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetLastResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSaveDataAccessObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetLastResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSaveDataAccessObjectBase, nullptr, "GetLastResult", nullptr, nullptr, sizeof(ELSaveDataAccessObjectBase_eventGetLastResult_Parms), Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetLastResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetLastResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetLastResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetLastResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetLastResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetLastResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetRequestedSaveDataType_Statics
	{
		struct ELSaveDataAccessObjectBase_eventGetRequestedSaveDataType_Parms
		{
			ESaveDataType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetRequestedSaveDataType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetRequestedSaveDataType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventGetRequestedSaveDataType_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_ESaveDataType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetRequestedSaveDataType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetRequestedSaveDataType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetRequestedSaveDataType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetRequestedSaveDataType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSaveDataAccessObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetRequestedSaveDataType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSaveDataAccessObjectBase, nullptr, "GetRequestedSaveDataType", nullptr, nullptr, sizeof(ELSaveDataAccessObjectBase_eventGetRequestedSaveDataType_Parms), Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetRequestedSaveDataType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetRequestedSaveDataType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetRequestedSaveDataType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetRequestedSaveDataType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetRequestedSaveDataType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetRequestedSaveDataType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetSaveDataObject_Statics
	{
		struct ELSaveDataAccessObjectBase_eventGetSaveDataObject_Parms
		{
			TSubclassOf<USaveDataObjectBase>  Class;
			ESaveDataProcResult ProcResult;
			USaveData_AccessorBase* SaveDataAccessor;
			uint8 AccessFlags;
			USaveDataObjectBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProcResult_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ProcResult;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveDataAccessor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccessFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AccessFlags;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetSaveDataObject_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventGetSaveDataObject_Parms, Class), Z_Construct_UClass_USaveDataObjectBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetSaveDataObject_Statics::NewProp_ProcResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetSaveDataObject_Statics::NewProp_ProcResult = { "ProcResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventGetSaveDataObject_Parms, ProcResult), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetSaveDataObject_Statics::NewProp_SaveDataAccessor = { "SaveDataAccessor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventGetSaveDataObject_Parms, SaveDataAccessor), Z_Construct_UClass_USaveData_AccessorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetSaveDataObject_Statics::NewProp_AccessFlags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetSaveDataObject_Statics::NewProp_AccessFlags = { "AccessFlags", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventGetSaveDataObject_Parms, AccessFlags), nullptr, METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetSaveDataObject_Statics::NewProp_AccessFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetSaveDataObject_Statics::NewProp_AccessFlags_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetSaveDataObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventGetSaveDataObject_Parms, ReturnValue), Z_Construct_UClass_USaveDataObjectBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetSaveDataObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetSaveDataObject_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetSaveDataObject_Statics::NewProp_ProcResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetSaveDataObject_Statics::NewProp_ProcResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetSaveDataObject_Statics::NewProp_SaveDataAccessor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetSaveDataObject_Statics::NewProp_AccessFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetSaveDataObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetSaveDataObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSaveDataAccessObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetSaveDataObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSaveDataAccessObjectBase, nullptr, "GetSaveDataObject", nullptr, nullptr, sizeof(ELSaveDataAccessObjectBase_eventGetSaveDataObject_Parms), Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetSaveDataObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetSaveDataObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetSaveDataObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetSaveDataObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetSaveDataObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetSaveDataObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsAccessCache_Statics
	{
		struct ELSaveDataAccessObjectBase_eventIsAccessCache_Parms
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
	void Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsAccessCache_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSaveDataAccessObjectBase_eventIsAccessCache_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsAccessCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSaveDataAccessObjectBase_eventIsAccessCache_Parms), &Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsAccessCache_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsAccessCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsAccessCache_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsAccessCache_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSaveDataAccessObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsAccessCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSaveDataAccessObjectBase, nullptr, "IsAccessCache", nullptr, nullptr, sizeof(ELSaveDataAccessObjectBase_eventIsAccessCache_Parms), Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsAccessCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsAccessCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsAccessCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsAccessCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsAccessCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsAccessCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsRequestComplete_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsRequestComplete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSaveDataAccessObjectBase_eventIsRequestComplete_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsRequestComplete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSaveDataAccessObjectBase_eventIsRequestComplete_Parms), &Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsRequestComplete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsRequestComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsRequestComplete_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsRequestComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSaveDataAccessObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsRequestComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSaveDataAccessObjectBase, nullptr, "IsRequestComplete", nullptr, nullptr, sizeof(ELSaveDataAccessObjectBase_eventIsRequestComplete_Parms), Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsRequestComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsRequestComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsRequestComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsRequestComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsRequestComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsRequestComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsSupportSaveDataType_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SaveDataType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveDataType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SaveDataType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsSupportSaveDataType_Statics::NewProp_SaveDataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsSupportSaveDataType_Statics::NewProp_SaveDataType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsSupportSaveDataType_Statics::NewProp_SaveDataType = { "SaveDataType", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventIsSupportSaveDataType_Parms, SaveDataType), Z_Construct_UEnum_ELITE_Game_ESaveDataType, METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsSupportSaveDataType_Statics::NewProp_SaveDataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsSupportSaveDataType_Statics::NewProp_SaveDataType_MetaData)) };
	void Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsSupportSaveDataType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSaveDataAccessObjectBase_eventIsSupportSaveDataType_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsSupportSaveDataType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSaveDataAccessObjectBase_eventIsSupportSaveDataType_Parms), &Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsSupportSaveDataType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsSupportSaveDataType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsSupportSaveDataType_Statics::NewProp_SaveDataType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsSupportSaveDataType_Statics::NewProp_SaveDataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsSupportSaveDataType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsSupportSaveDataType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSaveDataAccessObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsSupportSaveDataType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSaveDataAccessObjectBase, nullptr, "IsSupportSaveDataType", nullptr, nullptr, sizeof(ELSaveDataAccessObjectBase_eventIsSupportSaveDataType_Parms), Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsSupportSaveDataType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsSupportSaveDataType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsSupportSaveDataType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsSupportSaveDataType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsSupportSaveDataType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsSupportSaveDataType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSaveDataAccessObjectBase_Load_Statics
	{
		struct ELSaveDataAccessObjectBase_eventLoad_Parms
		{
			UObject* Outer;
			ESaveDataType InSaveDataType;
			FScriptDelegate Delegate;
			float Timeout;
			UELSaveDataAccessObjectBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Outer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InSaveDataType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSaveDataType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InSaveDataType;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_Load_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventLoad_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_Load_Statics::NewProp_InSaveDataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObjectBase_Load_Statics::NewProp_InSaveDataType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_Load_Statics::NewProp_InSaveDataType = { "InSaveDataType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventLoad_Parms, InSaveDataType), Z_Construct_UEnum_ELITE_Game_ESaveDataType, METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObjectBase_Load_Statics::NewProp_InSaveDataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_Load_Statics::NewProp_InSaveDataType_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_Load_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventLoad_Parms, Delegate), Z_Construct_UDelegateFunction_ELITE_SaveDataLoadedDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObjectBase_Load_Statics::NewProp_Timeout_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_Load_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventLoad_Parms, Timeout), METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObjectBase_Load_Statics::NewProp_Timeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_Load_Statics::NewProp_Timeout_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_Load_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventLoad_Parms, ReturnValue), Z_Construct_UClass_UELSaveDataAccessObjectBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSaveDataAccessObjectBase_Load_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_Load_Statics::NewProp_Outer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_Load_Statics::NewProp_InSaveDataType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_Load_Statics::NewProp_InSaveDataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_Load_Statics::NewProp_Delegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_Load_Statics::NewProp_Timeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_Load_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObjectBase_Load_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSaveDataAccessObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_Load_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSaveDataAccessObjectBase, nullptr, "Load", nullptr, nullptr, sizeof(ELSaveDataAccessObjectBase_eventLoad_Parms), Z_Construct_UFunction_UELSaveDataAccessObjectBase_Load_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_Load_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObjectBase_Load_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_Load_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSaveDataAccessObjectBase_Load()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSaveDataAccessObjectBase_Load_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSaveDataAccessObjectBase_LoadData_Statics
	{
		struct ELSaveDataAccessObjectBase_eventLoadData_Parms
		{
			ESaveDataType _saveDataType;
			FScriptDelegate _delegate;
			float Timeout;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__saveDataType;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp__delegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_LoadData_Statics::NewProp__saveDataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_LoadData_Statics::NewProp__saveDataType = { "_saveDataType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventLoadData_Parms, _saveDataType), Z_Construct_UEnum_ELITE_Game_ESaveDataType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_LoadData_Statics::NewProp__delegate = { "_delegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventLoadData_Parms, _delegate), Z_Construct_UDelegateFunction_ELITE_SaveDataLoadedDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObjectBase_LoadData_Statics::NewProp_Timeout_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_LoadData_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventLoadData_Parms, Timeout), METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObjectBase_LoadData_Statics::NewProp_Timeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_LoadData_Statics::NewProp_Timeout_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSaveDataAccessObjectBase_LoadData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_LoadData_Statics::NewProp__saveDataType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_LoadData_Statics::NewProp__saveDataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_LoadData_Statics::NewProp__delegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_LoadData_Statics::NewProp_Timeout,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObjectBase_LoadData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSaveDataAccessObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_LoadData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSaveDataAccessObjectBase, nullptr, "LoadData", nullptr, nullptr, sizeof(ELSaveDataAccessObjectBase_eventLoadData_Parms), Z_Construct_UFunction_UELSaveDataAccessObjectBase_LoadData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_LoadData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObjectBase_LoadData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_LoadData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSaveDataAccessObjectBase_LoadData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSaveDataAccessObjectBase_LoadData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnCreatedData_Statics
	{
		static void NewProp__isSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isSuccess;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__saveDataAccessor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnCreatedData_Statics::NewProp__isSuccess_SetBit(void* Obj)
	{
		((ELSaveDataAccessObjectBase_eventOnCreatedData_Parms*)Obj)->_isSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnCreatedData_Statics::NewProp__isSuccess = { "_isSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSaveDataAccessObjectBase_eventOnCreatedData_Parms), &Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnCreatedData_Statics::NewProp__isSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnCreatedData_Statics::NewProp__saveDataAccessor = { "_saveDataAccessor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventOnCreatedData_Parms, _saveDataAccessor), Z_Construct_UClass_USaveData_AccessorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnCreatedData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnCreatedData_Statics::NewProp__isSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnCreatedData_Statics::NewProp__saveDataAccessor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnCreatedData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSaveDataAccessObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnCreatedData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSaveDataAccessObjectBase, nullptr, "OnCreatedData", nullptr, nullptr, sizeof(ELSaveDataAccessObjectBase_eventOnCreatedData_Parms), Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnCreatedData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnCreatedData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnCreatedData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnCreatedData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnCreatedData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnCreatedData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnLoadedData_Statics
	{
		static void NewProp__isSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isSuccess;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__saveDataAccessor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnLoadedData_Statics::NewProp__isSuccess_SetBit(void* Obj)
	{
		((ELSaveDataAccessObjectBase_eventOnLoadedData_Parms*)Obj)->_isSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnLoadedData_Statics::NewProp__isSuccess = { "_isSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSaveDataAccessObjectBase_eventOnLoadedData_Parms), &Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnLoadedData_Statics::NewProp__isSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnLoadedData_Statics::NewProp__saveDataAccessor = { "_saveDataAccessor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventOnLoadedData_Parms, _saveDataAccessor), Z_Construct_UClass_USaveData_AccessorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnLoadedData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnLoadedData_Statics::NewProp__isSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnLoadedData_Statics::NewProp__saveDataAccessor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnLoadedData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSaveDataAccessObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnLoadedData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSaveDataAccessObjectBase, nullptr, "OnLoadedData", nullptr, nullptr, sizeof(ELSaveDataAccessObjectBase_eventOnLoadedData_Parms), Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnLoadedData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnLoadedData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnLoadedData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnLoadedData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnLoadedData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnLoadedData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnRequestTermination_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSuccess_MetaData[];
#endif
		static void NewProp_IsSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSuccess;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InProcResult_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InProcResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InProcResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnRequestTermination_Statics::NewProp_IsSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnRequestTermination_Statics::NewProp_IsSuccess_SetBit(void* Obj)
	{
		((ELSaveDataAccessObjectBase_eventOnRequestTermination_Parms*)Obj)->IsSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnRequestTermination_Statics::NewProp_IsSuccess = { "IsSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSaveDataAccessObjectBase_eventOnRequestTermination_Parms), &Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnRequestTermination_Statics::NewProp_IsSuccess_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnRequestTermination_Statics::NewProp_IsSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnRequestTermination_Statics::NewProp_IsSuccess_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnRequestTermination_Statics::NewProp_InProcResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnRequestTermination_Statics::NewProp_InProcResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnRequestTermination_Statics::NewProp_InProcResult = { "InProcResult", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventOnRequestTermination_Parms, InProcResult), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnRequestTermination_Statics::NewProp_InProcResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnRequestTermination_Statics::NewProp_InProcResult_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnRequestTermination_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnRequestTermination_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventOnRequestTermination_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnRequestTermination_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnRequestTermination_Statics::NewProp_IsSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnRequestTermination_Statics::NewProp_InProcResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnRequestTermination_Statics::NewProp_InProcResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnRequestTermination_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnRequestTermination_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnRequestTermination_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSaveDataAccessObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnRequestTermination_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSaveDataAccessObjectBase, nullptr, "OnRequestTermination", nullptr, nullptr, sizeof(ELSaveDataAccessObjectBase_eventOnRequestTermination_Parms), Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnRequestTermination_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnRequestTermination_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnRequestTermination_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnRequestTermination_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnRequestTermination()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnRequestTermination_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartCreateData_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProcResult_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ProcResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__saveDataType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartCreateData_Statics::NewProp_ProcResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartCreateData_Statics::NewProp_ProcResult = { "ProcResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventOnStartCreateData_Parms, ProcResult), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartCreateData_Statics::NewProp__saveDataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartCreateData_Statics::NewProp__saveDataType = { "_saveDataType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventOnStartCreateData_Parms, _saveDataType), Z_Construct_UEnum_ELITE_Game_ESaveDataType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartCreateData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSaveDataAccessObjectBase_eventOnStartCreateData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartCreateData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSaveDataAccessObjectBase_eventOnStartCreateData_Parms), &Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartCreateData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartCreateData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartCreateData_Statics::NewProp_ProcResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartCreateData_Statics::NewProp_ProcResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartCreateData_Statics::NewProp__saveDataType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartCreateData_Statics::NewProp__saveDataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartCreateData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartCreateData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSaveDataAccessObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartCreateData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSaveDataAccessObjectBase, nullptr, "OnStartCreateData", nullptr, nullptr, sizeof(ELSaveDataAccessObjectBase_eventOnStartCreateData_Parms), Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartCreateData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartCreateData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartCreateData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartCreateData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartCreateData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartCreateData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartLoadData_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProcResult_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ProcResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__saveDataType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartLoadData_Statics::NewProp_ProcResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartLoadData_Statics::NewProp_ProcResult = { "ProcResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventOnStartLoadData_Parms, ProcResult), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartLoadData_Statics::NewProp__saveDataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartLoadData_Statics::NewProp__saveDataType = { "_saveDataType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventOnStartLoadData_Parms, _saveDataType), Z_Construct_UEnum_ELITE_Game_ESaveDataType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartLoadData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSaveDataAccessObjectBase_eventOnStartLoadData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartLoadData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSaveDataAccessObjectBase_eventOnStartLoadData_Parms), &Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartLoadData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartLoadData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartLoadData_Statics::NewProp_ProcResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartLoadData_Statics::NewProp_ProcResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartLoadData_Statics::NewProp__saveDataType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartLoadData_Statics::NewProp__saveDataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartLoadData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartLoadData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSaveDataAccessObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartLoadData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSaveDataAccessObjectBase, nullptr, "OnStartLoadData", nullptr, nullptr, sizeof(ELSaveDataAccessObjectBase_eventOnStartLoadData_Parms), Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartLoadData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartLoadData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartLoadData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartLoadData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartLoadData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartLoadData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartUpdateData_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProcResult_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ProcResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__saveDataType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartUpdateData_Statics::NewProp_ProcResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartUpdateData_Statics::NewProp_ProcResult = { "ProcResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventOnStartUpdateData_Parms, ProcResult), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartUpdateData_Statics::NewProp__saveDataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartUpdateData_Statics::NewProp__saveDataType = { "_saveDataType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventOnStartUpdateData_Parms, _saveDataType), Z_Construct_UEnum_ELITE_Game_ESaveDataType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartUpdateData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSaveDataAccessObjectBase_eventOnStartUpdateData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartUpdateData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSaveDataAccessObjectBase_eventOnStartUpdateData_Parms), &Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartUpdateData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartUpdateData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartUpdateData_Statics::NewProp_ProcResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartUpdateData_Statics::NewProp_ProcResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartUpdateData_Statics::NewProp__saveDataType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartUpdateData_Statics::NewProp__saveDataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartUpdateData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartUpdateData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSaveDataAccessObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartUpdateData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSaveDataAccessObjectBase, nullptr, "OnStartUpdateData", nullptr, nullptr, sizeof(ELSaveDataAccessObjectBase_eventOnStartUpdateData_Parms), Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartUpdateData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartUpdateData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartUpdateData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartUpdateData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartUpdateData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartUpdateData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnUnbindAccessor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveDataAccessor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnUnbindAccessor_Statics::NewProp_SaveDataAccessor = { "SaveDataAccessor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventOnUnbindAccessor_Parms, SaveDataAccessor), Z_Construct_UClass_USaveData_AccessorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnUnbindAccessor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnUnbindAccessor_Statics::NewProp_SaveDataAccessor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnUnbindAccessor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSaveDataAccessObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnUnbindAccessor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSaveDataAccessObjectBase, nullptr, "OnUnbindAccessor", nullptr, nullptr, sizeof(ELSaveDataAccessObjectBase_eventOnUnbindAccessor_Parms), Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnUnbindAccessor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnUnbindAccessor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnUnbindAccessor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnUnbindAccessor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnUnbindAccessor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnUnbindAccessor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSaveDataAccessObjectBase_ReadData_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveDataObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_ReadData_Statics::NewProp_SaveDataObject = { "SaveDataObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventReadData_Parms, SaveDataObject), Z_Construct_UClass_USaveDataObjectBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSaveDataAccessObjectBase_ReadData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSaveDataAccessObjectBase_eventReadData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_ReadData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSaveDataAccessObjectBase_eventReadData_Parms), &Z_Construct_UFunction_UELSaveDataAccessObjectBase_ReadData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSaveDataAccessObjectBase_ReadData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_ReadData_Statics::NewProp_SaveDataObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_ReadData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObjectBase_ReadData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSaveDataAccessObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_ReadData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSaveDataAccessObjectBase, nullptr, "ReadData", nullptr, nullptr, sizeof(ELSaveDataAccessObjectBase_eventReadData_Parms), Z_Construct_UFunction_UELSaveDataAccessObjectBase_ReadData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_ReadData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObjectBase_ReadData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_ReadData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSaveDataAccessObjectBase_ReadData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSaveDataAccessObjectBase_ReadData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSaveDataAccessObjectBase_RequestTermination_Statics
	{
		struct ELSaveDataAccessObjectBase_eventRequestTermination_Parms
		{
			bool IsSuccess;
			ESaveDataProcResult ProcResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSuccess_MetaData[];
#endif
		static void NewProp_IsSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSuccess;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProcResult_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ProcResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObjectBase_RequestTermination_Statics::NewProp_IsSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELSaveDataAccessObjectBase_RequestTermination_Statics::NewProp_IsSuccess_SetBit(void* Obj)
	{
		((ELSaveDataAccessObjectBase_eventRequestTermination_Parms*)Obj)->IsSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_RequestTermination_Statics::NewProp_IsSuccess = { "IsSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSaveDataAccessObjectBase_eventRequestTermination_Parms), &Z_Construct_UFunction_UELSaveDataAccessObjectBase_RequestTermination_Statics::NewProp_IsSuccess_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObjectBase_RequestTermination_Statics::NewProp_IsSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_RequestTermination_Statics::NewProp_IsSuccess_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_RequestTermination_Statics::NewProp_ProcResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObjectBase_RequestTermination_Statics::NewProp_ProcResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_RequestTermination_Statics::NewProp_ProcResult = { "ProcResult", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventRequestTermination_Parms, ProcResult), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObjectBase_RequestTermination_Statics::NewProp_ProcResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_RequestTermination_Statics::NewProp_ProcResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSaveDataAccessObjectBase_RequestTermination_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_RequestTermination_Statics::NewProp_IsSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_RequestTermination_Statics::NewProp_ProcResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_RequestTermination_Statics::NewProp_ProcResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObjectBase_RequestTermination_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSaveDataAccessObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_RequestTermination_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSaveDataAccessObjectBase, nullptr, "RequestTermination", nullptr, nullptr, sizeof(ELSaveDataAccessObjectBase_eventRequestTermination_Parms), Z_Construct_UFunction_UELSaveDataAccessObjectBase_RequestTermination_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_RequestTermination_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObjectBase_RequestTermination_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_RequestTermination_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSaveDataAccessObjectBase_RequestTermination()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSaveDataAccessObjectBase_RequestTermination_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSaveDataAccessObjectBase_Save_Statics
	{
		struct ELSaveDataAccessObjectBase_eventSave_Parms
		{
			UObject* Outer;
			ESaveDataType InSaveDataType;
			FScriptDelegate Delegate;
			float Timeout;
			UELSaveDataAccessObjectBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Outer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InSaveDataType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSaveDataType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InSaveDataType;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_Save_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventSave_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_Save_Statics::NewProp_InSaveDataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObjectBase_Save_Statics::NewProp_InSaveDataType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_Save_Statics::NewProp_InSaveDataType = { "InSaveDataType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventSave_Parms, InSaveDataType), Z_Construct_UEnum_ELITE_Game_ESaveDataType, METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObjectBase_Save_Statics::NewProp_InSaveDataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_Save_Statics::NewProp_InSaveDataType_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_Save_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventSave_Parms, Delegate), Z_Construct_UDelegateFunction_ELITE_SaveDataCreatedDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObjectBase_Save_Statics::NewProp_Timeout_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_Save_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventSave_Parms, Timeout), METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObjectBase_Save_Statics::NewProp_Timeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_Save_Statics::NewProp_Timeout_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_Save_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventSave_Parms, ReturnValue), Z_Construct_UClass_UELSaveDataAccessObjectBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSaveDataAccessObjectBase_Save_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_Save_Statics::NewProp_Outer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_Save_Statics::NewProp_InSaveDataType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_Save_Statics::NewProp_InSaveDataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_Save_Statics::NewProp_Delegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_Save_Statics::NewProp_Timeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_Save_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObjectBase_Save_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSaveDataAccessObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_Save_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSaveDataAccessObjectBase, nullptr, "Save", nullptr, nullptr, sizeof(ELSaveDataAccessObjectBase_eventSave_Parms), Z_Construct_UFunction_UELSaveDataAccessObjectBase_Save_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_Save_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObjectBase_Save_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_Save_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSaveDataAccessObjectBase_Save()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSaveDataAccessObjectBase_Save_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSaveDataAccessObjectBase_Update_Statics
	{
		struct ELSaveDataAccessObjectBase_eventUpdate_Parms
		{
			UObject* Outer;
			ESaveDataType InSaveDataType;
			FScriptDelegate Delegate;
			float Timeout;
			UELSaveDataAccessObjectBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Outer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InSaveDataType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSaveDataType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InSaveDataType;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_Update_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventUpdate_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_Update_Statics::NewProp_InSaveDataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObjectBase_Update_Statics::NewProp_InSaveDataType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_Update_Statics::NewProp_InSaveDataType = { "InSaveDataType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventUpdate_Parms, InSaveDataType), Z_Construct_UEnum_ELITE_Game_ESaveDataType, METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObjectBase_Update_Statics::NewProp_InSaveDataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_Update_Statics::NewProp_InSaveDataType_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_Update_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventUpdate_Parms, Delegate), Z_Construct_UDelegateFunction_ELITE_SaveDataUpdatedDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObjectBase_Update_Statics::NewProp_Timeout_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_Update_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventUpdate_Parms, Timeout), METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObjectBase_Update_Statics::NewProp_Timeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_Update_Statics::NewProp_Timeout_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_Update_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventUpdate_Parms, ReturnValue), Z_Construct_UClass_UELSaveDataAccessObjectBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSaveDataAccessObjectBase_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_Update_Statics::NewProp_Outer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_Update_Statics::NewProp_InSaveDataType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_Update_Statics::NewProp_InSaveDataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_Update_Statics::NewProp_Delegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_Update_Statics::NewProp_Timeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_Update_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObjectBase_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSaveDataAccessObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSaveDataAccessObjectBase, nullptr, "Update", nullptr, nullptr, sizeof(ELSaveDataAccessObjectBase_eventUpdate_Parms), Z_Construct_UFunction_UELSaveDataAccessObjectBase_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObjectBase_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSaveDataAccessObjectBase_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSaveDataAccessObjectBase_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSaveDataAccessObjectBase_UpdateData_Statics
	{
		struct ELSaveDataAccessObjectBase_eventUpdateData_Parms
		{
			ESaveDataType _saveDataType;
			FScriptDelegate _delegate;
			float Timeout;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__saveDataType;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp__delegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_UpdateData_Statics::NewProp__saveDataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_UpdateData_Statics::NewProp__saveDataType = { "_saveDataType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventUpdateData_Parms, _saveDataType), Z_Construct_UEnum_ELITE_Game_ESaveDataType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_UpdateData_Statics::NewProp__delegate = { "_delegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventUpdateData_Parms, _delegate), Z_Construct_UDelegateFunction_ELITE_SaveDataUpdatedDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObjectBase_UpdateData_Statics::NewProp_Timeout_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_UpdateData_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventUpdateData_Parms, Timeout), METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObjectBase_UpdateData_Statics::NewProp_Timeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_UpdateData_Statics::NewProp_Timeout_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSaveDataAccessObjectBase_UpdateData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_UpdateData_Statics::NewProp__saveDataType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_UpdateData_Statics::NewProp__saveDataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_UpdateData_Statics::NewProp__delegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_UpdateData_Statics::NewProp_Timeout,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObjectBase_UpdateData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSaveDataAccessObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_UpdateData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSaveDataAccessObjectBase, nullptr, "UpdateData", nullptr, nullptr, sizeof(ELSaveDataAccessObjectBase_eventUpdateData_Parms), Z_Construct_UFunction_UELSaveDataAccessObjectBase_UpdateData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_UpdateData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObjectBase_UpdateData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_UpdateData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSaveDataAccessObjectBase_UpdateData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSaveDataAccessObjectBase_UpdateData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSaveDataAccessObjectBase_WriteData_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveDataObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInitialize_MetaData[];
#endif
		static void NewProp_bInitialize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInitialize;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_WriteData_Statics::NewProp_SaveDataObject = { "SaveDataObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObjectBase_eventWriteData_Parms, SaveDataObject), Z_Construct_UClass_USaveDataObjectBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObjectBase_WriteData_Statics::NewProp_bInitialize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELSaveDataAccessObjectBase_WriteData_Statics::NewProp_bInitialize_SetBit(void* Obj)
	{
		((ELSaveDataAccessObjectBase_eventWriteData_Parms*)Obj)->bInitialize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_WriteData_Statics::NewProp_bInitialize = { "bInitialize", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSaveDataAccessObjectBase_eventWriteData_Parms), &Z_Construct_UFunction_UELSaveDataAccessObjectBase_WriteData_Statics::NewProp_bInitialize_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObjectBase_WriteData_Statics::NewProp_bInitialize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_WriteData_Statics::NewProp_bInitialize_MetaData)) };
	void Z_Construct_UFunction_UELSaveDataAccessObjectBase_WriteData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSaveDataAccessObjectBase_eventWriteData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_WriteData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSaveDataAccessObjectBase_eventWriteData_Parms), &Z_Construct_UFunction_UELSaveDataAccessObjectBase_WriteData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSaveDataAccessObjectBase_WriteData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_WriteData_Statics::NewProp_SaveDataObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_WriteData_Statics::NewProp_bInitialize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObjectBase_WriteData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObjectBase_WriteData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSaveDataAccessObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSaveDataAccessObjectBase_WriteData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSaveDataAccessObjectBase, nullptr, "WriteData", nullptr, nullptr, sizeof(ELSaveDataAccessObjectBase_eventWriteData_Parms), Z_Construct_UFunction_UELSaveDataAccessObjectBase_WriteData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_WriteData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObjectBase_WriteData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObjectBase_WriteData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSaveDataAccessObjectBase_WriteData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSaveDataAccessObjectBase_WriteData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSaveDataAccessObjectBase_NoRegister()
	{
		return UELSaveDataAccessObjectBase::StaticClass();
	}
	struct Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAccessCache_MetaData[];
#endif
		static void NewProp_bAccessCache_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAccessCache;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_IsCachedData_MetaData[];
#endif
		static void NewProp_m_IsCachedData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_IsCachedData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_SaveDataType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_SaveDataType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_SaveDataType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LastResult_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LastResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RequestTimer;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileNameList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileNameList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FileNameList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveOnlyAccessor_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveOnlyAccessor_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SaveOnlyAccessor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CreatedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_m_CreatedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_LoadedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_m_LoadedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_UpdatedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_m_UpdatedDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSaveDataAccessObjectBase_Callback_RequestProcessEnd, "Callback_RequestProcessEnd" }, // 4264789327
		{ &Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateData, "CreateData" }, // 3010530180
		{ &Z_Construct_UFunction_UELSaveDataAccessObjectBase_CreateSaveDataAccessObject, "CreateSaveDataAccessObject" }, // 1260686911
		{ &Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetLastResult, "GetLastResult" }, // 2841784519
		{ &Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetRequestedSaveDataType, "GetRequestedSaveDataType" }, // 1581514843
		{ &Z_Construct_UFunction_UELSaveDataAccessObjectBase_GetSaveDataObject, "GetSaveDataObject" }, // 1985702335
		{ &Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsAccessCache, "IsAccessCache" }, // 2999811033
		{ &Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsRequestComplete, "IsRequestComplete" }, // 1534891264
		{ &Z_Construct_UFunction_UELSaveDataAccessObjectBase_IsSupportSaveDataType, "IsSupportSaveDataType" }, // 128497616
		{ &Z_Construct_UFunction_UELSaveDataAccessObjectBase_Load, "Load" }, // 1420287374
		{ &Z_Construct_UFunction_UELSaveDataAccessObjectBase_LoadData, "LoadData" }, // 1419483989
		{ &Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnCreatedData, "OnCreatedData" }, // 2252262581
		{ &Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnLoadedData, "OnLoadedData" }, // 296538188
		{ &Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnRequestTermination, "OnRequestTermination" }, // 18691206
		{ &Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartCreateData, "OnStartCreateData" }, // 2044414158
		{ &Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartLoadData, "OnStartLoadData" }, // 990678470
		{ &Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnStartUpdateData, "OnStartUpdateData" }, // 3442857311
		{ &Z_Construct_UFunction_UELSaveDataAccessObjectBase_OnUnbindAccessor, "OnUnbindAccessor" }, // 2489342369
		{ &Z_Construct_UFunction_UELSaveDataAccessObjectBase_ReadData, "ReadData" }, // 1194315870
		{ &Z_Construct_UFunction_UELSaveDataAccessObjectBase_RequestTermination, "RequestTermination" }, // 4228731395
		{ &Z_Construct_UFunction_UELSaveDataAccessObjectBase_Save, "Save" }, // 3434063346
		{ &Z_Construct_UFunction_UELSaveDataAccessObjectBase_Update, "Update" }, // 3138500797
		{ &Z_Construct_UFunction_UELSaveDataAccessObjectBase_UpdateData, "UpdateData" }, // 4043654162
		{ &Z_Construct_UFunction_UELSaveDataAccessObjectBase_WriteData, "WriteData" }, // 615149319
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSaveDataAccessObjectBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSaveDataAccessObjectBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_bAccessCache_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSaveDataAccessObjectBase" },
		{ "ModuleRelativePath", "Public/ELSaveDataAccessObjectBase.h" },
	};
#endif
	void Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_bAccessCache_SetBit(void* Obj)
	{
		((UELSaveDataAccessObjectBase*)Obj)->bAccessCache = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_bAccessCache = { "bAccessCache", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSaveDataAccessObjectBase), &Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_bAccessCache_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_bAccessCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_bAccessCache_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_m_IsCachedData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSaveDataAccessObjectBase" },
		{ "ModuleRelativePath", "Public/ELSaveDataAccessObjectBase.h" },
	};
#endif
	void Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_m_IsCachedData_SetBit(void* Obj)
	{
		((UELSaveDataAccessObjectBase*)Obj)->m_IsCachedData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_m_IsCachedData = { "m_IsCachedData", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSaveDataAccessObjectBase), &Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_m_IsCachedData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_m_IsCachedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_m_IsCachedData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_World_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSaveDataAccessObjectBase" },
		{ "ModuleRelativePath", "Public/ELSaveDataAccessObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0044000000002001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSaveDataAccessObjectBase, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_World_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_m_SaveDataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_m_SaveDataType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSaveDataAccessObjectBase" },
		{ "ModuleRelativePath", "Public/ELSaveDataAccessObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_m_SaveDataType = { "m_SaveDataType", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSaveDataAccessObjectBase, m_SaveDataType), Z_Construct_UEnum_ELITE_Game_ESaveDataType, METADATA_PARAMS(Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_m_SaveDataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_m_SaveDataType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_LastResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_LastResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSaveDataAccessObjectBase" },
		{ "ModuleRelativePath", "Public/ELSaveDataAccessObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_LastResult = { "LastResult", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSaveDataAccessObjectBase, LastResult), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_LastResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_LastResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_RequestTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSaveDataAccessObjectBase" },
		{ "ModuleRelativePath", "Public/ELSaveDataAccessObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_RequestTimer = { "RequestTimer", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSaveDataAccessObjectBase, RequestTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_RequestTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_RequestTimer_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_FileNameList_Inner = { "FileNameList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_FileNameList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSaveDataAccessObjectBase" },
		{ "ModuleRelativePath", "Public/ELSaveDataAccessObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_FileNameList = { "FileNameList", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSaveDataAccessObjectBase, FileNameList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_FileNameList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_FileNameList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_SaveOnlyAccessor_Inner = { "SaveOnlyAccessor", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USaveData_AccessorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_SaveOnlyAccessor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSaveDataAccessObjectBase" },
		{ "ModuleRelativePath", "Public/ELSaveDataAccessObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_SaveOnlyAccessor = { "SaveOnlyAccessor", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSaveDataAccessObjectBase, SaveOnlyAccessor), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_SaveOnlyAccessor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_SaveOnlyAccessor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_m_CreatedDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSaveDataAccessObjectBase" },
		{ "ModuleRelativePath", "Public/ELSaveDataAccessObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_m_CreatedDelegate = { "m_CreatedDelegate", nullptr, (EPropertyFlags)0x0040000000082005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSaveDataAccessObjectBase, m_CreatedDelegate), Z_Construct_UDelegateFunction_ELITE_SaveDataCreatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_m_CreatedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_m_CreatedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_m_LoadedDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSaveDataAccessObjectBase" },
		{ "ModuleRelativePath", "Public/ELSaveDataAccessObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_m_LoadedDelegate = { "m_LoadedDelegate", nullptr, (EPropertyFlags)0x0040000000082005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSaveDataAccessObjectBase, m_LoadedDelegate), Z_Construct_UDelegateFunction_ELITE_SaveDataLoadedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_m_LoadedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_m_LoadedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_m_UpdatedDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSaveDataAccessObjectBase" },
		{ "ModuleRelativePath", "Public/ELSaveDataAccessObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_m_UpdatedDelegate = { "m_UpdatedDelegate", nullptr, (EPropertyFlags)0x0040000000082005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSaveDataAccessObjectBase, m_UpdatedDelegate), Z_Construct_UDelegateFunction_ELITE_SaveDataUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_m_UpdatedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_m_UpdatedDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_bAccessCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_m_IsCachedData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_m_SaveDataType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_m_SaveDataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_LastResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_LastResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_RequestTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_FileNameList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_FileNameList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_SaveOnlyAccessor_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_SaveOnlyAccessor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_m_CreatedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_m_LoadedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::NewProp_m_UpdatedDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSaveDataAccessObjectBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::ClassParams = {
		&UELSaveDataAccessObjectBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSaveDataAccessObjectBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSaveDataAccessObjectBase, 2453766984);
	template<> ELITE_API UClass* StaticClass<UELSaveDataAccessObjectBase>()
	{
		return UELSaveDataAccessObjectBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSaveDataAccessObjectBase(Z_Construct_UClass_UELSaveDataAccessObjectBase, &UELSaveDataAccessObjectBase::StaticClass, TEXT("/Script/ELITE"), TEXT("UELSaveDataAccessObjectBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSaveDataAccessObjectBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
