// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSGameMatchMakeSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSGameMatchMakeSystem() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSGameMatchMakeSystem_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSGameMatchMakeSystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSPlayerEquipSettings();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FPingData();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FRequest_ErrSetupData();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_eSSModeAPIType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_eSSRequestResultType();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSFlexMatchMakeStop_ResponseData();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_ResponseData();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_ResponseData();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_SSGameMatchMakeErrorEvent__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_SSGameMatchMakeEvent__DelegateSignature();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSSuccessMatchData();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_eSSGameMatchMakeState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSSGameMatchMakeSystem::execCanStopMatchMake)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanStopMatchMake();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameMatchMakeSystem::execCreateGameMatchMakeSystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELSSGameMatchMakeSystem**)Z_Param__Result=P_THIS->CreateGameMatchMakeSystem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameMatchMakeSystem::execCreateJoinGameServerData)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_joinData);
		P_GET_STRUCT_REF(FSSWrestlerMovePresetParam,Z_Param_Out_presetData);
		P_GET_STRUCT_REF(FSSPlayerEquipSettings,Z_Param_Out_equipSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateJoinGameServerData(Z_Param_Out_joinData,Z_Param_Out_presetData,Z_Param_Out_equipSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameMatchMakeSystem::execDebugGetOverrideRegionInfo)
	{
		P_GET_UBOOL_REF(Z_Param_Out_outUseOverride);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_outSelectedRegionName);
		P_GET_TARRAY_REF(FPingData,Z_Param_Out_outTargetRegionData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugGetOverrideRegionInfo(Z_Param_Out_outUseOverride,Z_Param_Out_outSelectedRegionName,Z_Param_Out_outTargetRegionData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameMatchMakeSystem::execErrorCommonEvent)
	{
		P_GET_UBOOL(Z_Param_isDialogYES);
		P_GET_STRUCT(FRequest_ErrSetupData,Z_Param_errDialogData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ErrorCommonEvent(Z_Param_isDialogYES,Z_Param_errDialogData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameMatchMakeSystem::execErrorRetryEvent)
	{
		P_GET_STRUCT_REF(FRequest_ErrSetupData,Z_Param_Out_apiErrData);
		P_GET_PROPERTY(FIntProperty,Z_Param_errRetryCnt);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ErrorRetryEvent(Z_Param_Out_apiErrData,Z_Param_errRetryCnt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameMatchMakeSystem::execForceMatchEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceMatchEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameMatchMakeSystem::execIsMatchMakeCheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMatchMakeCheck();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameMatchMakeSystem::execPreviewMatchRequestData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PreviewMatchRequestData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameMatchMakeSystem::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameMatchMakeSystem::execRestart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Restart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameMatchMakeSystem::execRestartMatchMake)
	{
		P_GET_TARRAY(FPingData,Z_Param_regionLatencieData);
		P_GET_PROPERTY(FStrProperty,Z_Param_ssBuildVersion);
		P_GET_PROPERTY(FStrProperty,Z_Param_selectRegion);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RestartMatchMake(Z_Param_regionLatencieData,Z_Param_ssBuildVersion,Z_Param_selectRegion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameMatchMakeSystem::execRetryMatchMake)
	{
		P_GET_ENUM(eSSModeAPIType,Z_Param_retryAPI);
		P_GET_PROPERTY(FIntProperty,Z_Param_retryCnt);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RetryMatchMake(eSSModeAPIType(Z_Param_retryAPI),Z_Param_retryCnt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameMatchMakeSystem::execSSWebAPI_FlexMatchCancelResult)
	{
		P_GET_ENUM(eSSRequestResultType,Z_Param_responseType);
		P_GET_STRUCT_REF(FELSSFlexMatchMakeStop_ResponseData,Z_Param_Out_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SSWebAPI_FlexMatchCancelResult(eSSRequestResultType(Z_Param_responseType),Z_Param_Out_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameMatchMakeSystem::execSSWebAPI_FlexMatchStartResult)
	{
		P_GET_STRUCT_REF(FELSSFlexMatchMakeStart_ResponseData,Z_Param_Out_response);
		P_GET_ENUM(eSSRequestResultType,Z_Param_responseType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SSWebAPI_FlexMatchStartResult(Z_Param_Out_response,eSSRequestResultType(Z_Param_responseType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameMatchMakeSystem::execSSWebAPI_FlexMatchStatusResult)
	{
		P_GET_STRUCT_REF(FELSSFlexMatchMakeStatus_ResponseData,Z_Param_Out_response);
		P_GET_ENUM(eSSRequestResultType,Z_Param_responseType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SSWebAPI_FlexMatchStatusResult(Z_Param_Out_response,eSSRequestResultType(Z_Param_responseType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameMatchMakeSystem::execStartMatchMakeRequest)
	{
		P_GET_TARRAY(FPingData,Z_Param_regionLatencieData);
		P_GET_PROPERTY(FStrProperty,Z_Param_ssBuildVersion);
		P_GET_PROPERTY(FStrProperty,Z_Param_selectRegion);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartMatchMakeRequest(Z_Param_regionLatencieData,Z_Param_ssBuildVersion,Z_Param_selectRegion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameMatchMakeSystem::execStopMatchMakeRequest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StopMatchMakeRequest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameMatchMakeSystem::execUpdateMatchMakeRequest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateMatchMakeRequest();
		P_NATIVE_END;
	}
	static FName NAME_UELSSGameMatchMakeSystem_StartFlexMatchDataTimer = FName(TEXT("StartFlexMatchDataTimer"));
	void UELSSGameMatchMakeSystem::StartFlexMatchDataTimer()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSGameMatchMakeSystem_StartFlexMatchDataTimer),NULL);
	}
	void UELSSGameMatchMakeSystem::StaticRegisterNativesUELSSGameMatchMakeSystem()
	{
		UClass* Class = UELSSGameMatchMakeSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanStopMatchMake", &UELSSGameMatchMakeSystem::execCanStopMatchMake },
			{ "CreateGameMatchMakeSystem", &UELSSGameMatchMakeSystem::execCreateGameMatchMakeSystem },
			{ "CreateJoinGameServerData", &UELSSGameMatchMakeSystem::execCreateJoinGameServerData },
			{ "DebugGetOverrideRegionInfo", &UELSSGameMatchMakeSystem::execDebugGetOverrideRegionInfo },
			{ "ErrorCommonEvent", &UELSSGameMatchMakeSystem::execErrorCommonEvent },
			{ "ErrorRetryEvent", &UELSSGameMatchMakeSystem::execErrorRetryEvent },
			{ "ForceMatchEnd", &UELSSGameMatchMakeSystem::execForceMatchEnd },
			{ "IsMatchMakeCheck", &UELSSGameMatchMakeSystem::execIsMatchMakeCheck },
			{ "PreviewMatchRequestData", &UELSSGameMatchMakeSystem::execPreviewMatchRequestData },
			{ "Reset", &UELSSGameMatchMakeSystem::execReset },
			{ "Restart", &UELSSGameMatchMakeSystem::execRestart },
			{ "RestartMatchMake", &UELSSGameMatchMakeSystem::execRestartMatchMake },
			{ "RetryMatchMake", &UELSSGameMatchMakeSystem::execRetryMatchMake },
			{ "SSWebAPI_FlexMatchCancelResult", &UELSSGameMatchMakeSystem::execSSWebAPI_FlexMatchCancelResult },
			{ "SSWebAPI_FlexMatchStartResult", &UELSSGameMatchMakeSystem::execSSWebAPI_FlexMatchStartResult },
			{ "SSWebAPI_FlexMatchStatusResult", &UELSSGameMatchMakeSystem::execSSWebAPI_FlexMatchStatusResult },
			{ "StartMatchMakeRequest", &UELSSGameMatchMakeSystem::execStartMatchMakeRequest },
			{ "StopMatchMakeRequest", &UELSSGameMatchMakeSystem::execStopMatchMakeRequest },
			{ "UpdateMatchMakeRequest", &UELSSGameMatchMakeSystem::execUpdateMatchMakeRequest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSGameMatchMakeSystem_CanStopMatchMake_Statics
	{
		struct ELSSGameMatchMakeSystem_eventCanStopMatchMake_Parms
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
	void Z_Construct_UFunction_UELSSGameMatchMakeSystem_CanStopMatchMake_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameMatchMakeSystem_eventCanStopMatchMake_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_CanStopMatchMake_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameMatchMakeSystem_eventCanStopMatchMake_Parms), &Z_Construct_UFunction_UELSSGameMatchMakeSystem_CanStopMatchMake_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameMatchMakeSystem_CanStopMatchMake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameMatchMakeSystem_CanStopMatchMake_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameMatchMakeSystem_CanStopMatchMake_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_CanStopMatchMake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameMatchMakeSystem, nullptr, "CanStopMatchMake", nullptr, nullptr, sizeof(ELSSGameMatchMakeSystem_eventCanStopMatchMake_Parms), Z_Construct_UFunction_UELSSGameMatchMakeSystem_CanStopMatchMake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_CanStopMatchMake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameMatchMakeSystem_CanStopMatchMake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_CanStopMatchMake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameMatchMakeSystem_CanStopMatchMake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameMatchMakeSystem_CanStopMatchMake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameMatchMakeSystem_CreateGameMatchMakeSystem_Statics
	{
		struct ELSSGameMatchMakeSystem_eventCreateGameMatchMakeSystem_Parms
		{
			UELSSGameMatchMakeSystem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_CreateGameMatchMakeSystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMatchMakeSystem_eventCreateGameMatchMakeSystem_Parms, ReturnValue), Z_Construct_UClass_UELSSGameMatchMakeSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameMatchMakeSystem_CreateGameMatchMakeSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameMatchMakeSystem_CreateGameMatchMakeSystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameMatchMakeSystem_CreateGameMatchMakeSystem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_CreateGameMatchMakeSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameMatchMakeSystem, nullptr, "CreateGameMatchMakeSystem", nullptr, nullptr, sizeof(ELSSGameMatchMakeSystem_eventCreateGameMatchMakeSystem_Parms), Z_Construct_UFunction_UELSSGameMatchMakeSystem_CreateGameMatchMakeSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_CreateGameMatchMakeSystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameMatchMakeSystem_CreateGameMatchMakeSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_CreateGameMatchMakeSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameMatchMakeSystem_CreateGameMatchMakeSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameMatchMakeSystem_CreateGameMatchMakeSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameMatchMakeSystem_CreateJoinGameServerData_Statics
	{
		struct ELSSGameMatchMakeSystem_eventCreateJoinGameServerData_Parms
		{
			FString joinData;
			FSSWrestlerMovePresetParam presetData;
			FSSPlayerEquipSettings equipSettings;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_joinData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_presetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_presetData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_equipSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_equipSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_CreateJoinGameServerData_Statics::NewProp_joinData = { "joinData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMatchMakeSystem_eventCreateJoinGameServerData_Parms, joinData), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameMatchMakeSystem_CreateJoinGameServerData_Statics::NewProp_presetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_CreateJoinGameServerData_Statics::NewProp_presetData = { "presetData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMatchMakeSystem_eventCreateJoinGameServerData_Parms, presetData), Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameMatchMakeSystem_CreateJoinGameServerData_Statics::NewProp_presetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_CreateJoinGameServerData_Statics::NewProp_presetData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameMatchMakeSystem_CreateJoinGameServerData_Statics::NewProp_equipSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_CreateJoinGameServerData_Statics::NewProp_equipSettings = { "equipSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMatchMakeSystem_eventCreateJoinGameServerData_Parms, equipSettings), Z_Construct_UScriptStruct_FSSPlayerEquipSettings, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameMatchMakeSystem_CreateJoinGameServerData_Statics::NewProp_equipSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_CreateJoinGameServerData_Statics::NewProp_equipSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameMatchMakeSystem_CreateJoinGameServerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameMatchMakeSystem_CreateJoinGameServerData_Statics::NewProp_joinData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameMatchMakeSystem_CreateJoinGameServerData_Statics::NewProp_presetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameMatchMakeSystem_CreateJoinGameServerData_Statics::NewProp_equipSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameMatchMakeSystem_CreateJoinGameServerData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_CreateJoinGameServerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameMatchMakeSystem, nullptr, "CreateJoinGameServerData", nullptr, nullptr, sizeof(ELSSGameMatchMakeSystem_eventCreateJoinGameServerData_Parms), Z_Construct_UFunction_UELSSGameMatchMakeSystem_CreateJoinGameServerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_CreateJoinGameServerData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameMatchMakeSystem_CreateJoinGameServerData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_CreateJoinGameServerData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameMatchMakeSystem_CreateJoinGameServerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameMatchMakeSystem_CreateJoinGameServerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameMatchMakeSystem_DebugGetOverrideRegionInfo_Statics
	{
		struct ELSSGameMatchMakeSystem_eventDebugGetOverrideRegionInfo_Parms
		{
			bool outUseOverride;
			FString outSelectedRegionName;
			TArray<FPingData> outTargetRegionData;
		};
		static void NewProp_outUseOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_outUseOverride;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_outSelectedRegionName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outTargetRegionData_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_outTargetRegionData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSGameMatchMakeSystem_DebugGetOverrideRegionInfo_Statics::NewProp_outUseOverride_SetBit(void* Obj)
	{
		((ELSSGameMatchMakeSystem_eventDebugGetOverrideRegionInfo_Parms*)Obj)->outUseOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_DebugGetOverrideRegionInfo_Statics::NewProp_outUseOverride = { "outUseOverride", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameMatchMakeSystem_eventDebugGetOverrideRegionInfo_Parms), &Z_Construct_UFunction_UELSSGameMatchMakeSystem_DebugGetOverrideRegionInfo_Statics::NewProp_outUseOverride_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_DebugGetOverrideRegionInfo_Statics::NewProp_outSelectedRegionName = { "outSelectedRegionName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMatchMakeSystem_eventDebugGetOverrideRegionInfo_Parms, outSelectedRegionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_DebugGetOverrideRegionInfo_Statics::NewProp_outTargetRegionData_Inner = { "outTargetRegionData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPingData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_DebugGetOverrideRegionInfo_Statics::NewProp_outTargetRegionData = { "outTargetRegionData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMatchMakeSystem_eventDebugGetOverrideRegionInfo_Parms, outTargetRegionData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameMatchMakeSystem_DebugGetOverrideRegionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameMatchMakeSystem_DebugGetOverrideRegionInfo_Statics::NewProp_outUseOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameMatchMakeSystem_DebugGetOverrideRegionInfo_Statics::NewProp_outSelectedRegionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameMatchMakeSystem_DebugGetOverrideRegionInfo_Statics::NewProp_outTargetRegionData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameMatchMakeSystem_DebugGetOverrideRegionInfo_Statics::NewProp_outTargetRegionData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameMatchMakeSystem_DebugGetOverrideRegionInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_DebugGetOverrideRegionInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameMatchMakeSystem, nullptr, "DebugGetOverrideRegionInfo", nullptr, nullptr, sizeof(ELSSGameMatchMakeSystem_eventDebugGetOverrideRegionInfo_Parms), Z_Construct_UFunction_UELSSGameMatchMakeSystem_DebugGetOverrideRegionInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_DebugGetOverrideRegionInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameMatchMakeSystem_DebugGetOverrideRegionInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_DebugGetOverrideRegionInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameMatchMakeSystem_DebugGetOverrideRegionInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameMatchMakeSystem_DebugGetOverrideRegionInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorCommonEvent_Statics
	{
		struct ELSSGameMatchMakeSystem_eventErrorCommonEvent_Parms
		{
			bool isDialogYES;
			FRequest_ErrSetupData errDialogData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isDialogYES_MetaData[];
#endif
		static void NewProp_isDialogYES_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDialogYES;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errDialogData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_errDialogData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorCommonEvent_Statics::NewProp_isDialogYES_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorCommonEvent_Statics::NewProp_isDialogYES_SetBit(void* Obj)
	{
		((ELSSGameMatchMakeSystem_eventErrorCommonEvent_Parms*)Obj)->isDialogYES = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorCommonEvent_Statics::NewProp_isDialogYES = { "isDialogYES", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameMatchMakeSystem_eventErrorCommonEvent_Parms), &Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorCommonEvent_Statics::NewProp_isDialogYES_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorCommonEvent_Statics::NewProp_isDialogYES_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorCommonEvent_Statics::NewProp_isDialogYES_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorCommonEvent_Statics::NewProp_errDialogData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorCommonEvent_Statics::NewProp_errDialogData = { "errDialogData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMatchMakeSystem_eventErrorCommonEvent_Parms, errDialogData), Z_Construct_UScriptStruct_FRequest_ErrSetupData, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorCommonEvent_Statics::NewProp_errDialogData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorCommonEvent_Statics::NewProp_errDialogData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorCommonEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorCommonEvent_Statics::NewProp_isDialogYES,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorCommonEvent_Statics::NewProp_errDialogData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorCommonEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorCommonEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameMatchMakeSystem, nullptr, "ErrorCommonEvent", nullptr, nullptr, sizeof(ELSSGameMatchMakeSystem_eventErrorCommonEvent_Parms), Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorCommonEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorCommonEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorCommonEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorCommonEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorCommonEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorCommonEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorRetryEvent_Statics
	{
		struct ELSSGameMatchMakeSystem_eventErrorRetryEvent_Parms
		{
			FRequest_ErrSetupData apiErrData;
			int32 errRetryCnt;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_apiErrData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_apiErrData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errRetryCnt_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_errRetryCnt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorRetryEvent_Statics::NewProp_apiErrData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorRetryEvent_Statics::NewProp_apiErrData = { "apiErrData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMatchMakeSystem_eventErrorRetryEvent_Parms, apiErrData), Z_Construct_UScriptStruct_FRequest_ErrSetupData, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorRetryEvent_Statics::NewProp_apiErrData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorRetryEvent_Statics::NewProp_apiErrData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorRetryEvent_Statics::NewProp_errRetryCnt_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorRetryEvent_Statics::NewProp_errRetryCnt = { "errRetryCnt", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMatchMakeSystem_eventErrorRetryEvent_Parms, errRetryCnt), METADATA_PARAMS(Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorRetryEvent_Statics::NewProp_errRetryCnt_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorRetryEvent_Statics::NewProp_errRetryCnt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorRetryEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorRetryEvent_Statics::NewProp_apiErrData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorRetryEvent_Statics::NewProp_errRetryCnt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorRetryEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorRetryEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameMatchMakeSystem, nullptr, "ErrorRetryEvent", nullptr, nullptr, sizeof(ELSSGameMatchMakeSystem_eventErrorRetryEvent_Parms), Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorRetryEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorRetryEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorRetryEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorRetryEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorRetryEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorRetryEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameMatchMakeSystem_ForceMatchEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameMatchMakeSystem_ForceMatchEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_ForceMatchEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameMatchMakeSystem, nullptr, "ForceMatchEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameMatchMakeSystem_ForceMatchEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_ForceMatchEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameMatchMakeSystem_ForceMatchEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameMatchMakeSystem_ForceMatchEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameMatchMakeSystem_IsMatchMakeCheck_Statics
	{
		struct ELSSGameMatchMakeSystem_eventIsMatchMakeCheck_Parms
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
	void Z_Construct_UFunction_UELSSGameMatchMakeSystem_IsMatchMakeCheck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameMatchMakeSystem_eventIsMatchMakeCheck_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_IsMatchMakeCheck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameMatchMakeSystem_eventIsMatchMakeCheck_Parms), &Z_Construct_UFunction_UELSSGameMatchMakeSystem_IsMatchMakeCheck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameMatchMakeSystem_IsMatchMakeCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameMatchMakeSystem_IsMatchMakeCheck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameMatchMakeSystem_IsMatchMakeCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_IsMatchMakeCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameMatchMakeSystem, nullptr, "IsMatchMakeCheck", nullptr, nullptr, sizeof(ELSSGameMatchMakeSystem_eventIsMatchMakeCheck_Parms), Z_Construct_UFunction_UELSSGameMatchMakeSystem_IsMatchMakeCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_IsMatchMakeCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameMatchMakeSystem_IsMatchMakeCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_IsMatchMakeCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameMatchMakeSystem_IsMatchMakeCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameMatchMakeSystem_IsMatchMakeCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameMatchMakeSystem_PreviewMatchRequestData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameMatchMakeSystem_PreviewMatchRequestData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_PreviewMatchRequestData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameMatchMakeSystem, nullptr, "PreviewMatchRequestData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameMatchMakeSystem_PreviewMatchRequestData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_PreviewMatchRequestData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameMatchMakeSystem_PreviewMatchRequestData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameMatchMakeSystem_PreviewMatchRequestData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameMatchMakeSystem_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameMatchMakeSystem_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameMatchMakeSystem, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameMatchMakeSystem_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameMatchMakeSystem_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameMatchMakeSystem_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameMatchMakeSystem_Restart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameMatchMakeSystem_Restart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_Restart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameMatchMakeSystem, nullptr, "Restart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameMatchMakeSystem_Restart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_Restart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameMatchMakeSystem_Restart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameMatchMakeSystem_Restart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameMatchMakeSystem_RestartMatchMake_Statics
	{
		struct ELSSGameMatchMakeSystem_eventRestartMatchMake_Parms
		{
			TArray<FPingData> regionLatencieData;
			FString ssBuildVersion;
			FString selectRegion;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_regionLatencieData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_regionLatencieData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_regionLatencieData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ssBuildVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ssBuildVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selectRegion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_selectRegion;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_RestartMatchMake_Statics::NewProp_regionLatencieData_Inner = { "regionLatencieData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPingData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameMatchMakeSystem_RestartMatchMake_Statics::NewProp_regionLatencieData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_RestartMatchMake_Statics::NewProp_regionLatencieData = { "regionLatencieData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMatchMakeSystem_eventRestartMatchMake_Parms, regionLatencieData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameMatchMakeSystem_RestartMatchMake_Statics::NewProp_regionLatencieData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_RestartMatchMake_Statics::NewProp_regionLatencieData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameMatchMakeSystem_RestartMatchMake_Statics::NewProp_ssBuildVersion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_RestartMatchMake_Statics::NewProp_ssBuildVersion = { "ssBuildVersion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMatchMakeSystem_eventRestartMatchMake_Parms, ssBuildVersion), METADATA_PARAMS(Z_Construct_UFunction_UELSSGameMatchMakeSystem_RestartMatchMake_Statics::NewProp_ssBuildVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_RestartMatchMake_Statics::NewProp_ssBuildVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameMatchMakeSystem_RestartMatchMake_Statics::NewProp_selectRegion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_RestartMatchMake_Statics::NewProp_selectRegion = { "selectRegion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMatchMakeSystem_eventRestartMatchMake_Parms, selectRegion), METADATA_PARAMS(Z_Construct_UFunction_UELSSGameMatchMakeSystem_RestartMatchMake_Statics::NewProp_selectRegion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_RestartMatchMake_Statics::NewProp_selectRegion_MetaData)) };
	void Z_Construct_UFunction_UELSSGameMatchMakeSystem_RestartMatchMake_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameMatchMakeSystem_eventRestartMatchMake_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_RestartMatchMake_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameMatchMakeSystem_eventRestartMatchMake_Parms), &Z_Construct_UFunction_UELSSGameMatchMakeSystem_RestartMatchMake_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameMatchMakeSystem_RestartMatchMake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameMatchMakeSystem_RestartMatchMake_Statics::NewProp_regionLatencieData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameMatchMakeSystem_RestartMatchMake_Statics::NewProp_regionLatencieData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameMatchMakeSystem_RestartMatchMake_Statics::NewProp_ssBuildVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameMatchMakeSystem_RestartMatchMake_Statics::NewProp_selectRegion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameMatchMakeSystem_RestartMatchMake_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameMatchMakeSystem_RestartMatchMake_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_RestartMatchMake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameMatchMakeSystem, nullptr, "RestartMatchMake", nullptr, nullptr, sizeof(ELSSGameMatchMakeSystem_eventRestartMatchMake_Parms), Z_Construct_UFunction_UELSSGameMatchMakeSystem_RestartMatchMake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_RestartMatchMake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameMatchMakeSystem_RestartMatchMake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_RestartMatchMake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameMatchMakeSystem_RestartMatchMake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameMatchMakeSystem_RestartMatchMake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameMatchMakeSystem_RetryMatchMake_Statics
	{
		struct ELSSGameMatchMakeSystem_eventRetryMatchMake_Parms
		{
			eSSModeAPIType retryAPI;
			int32 retryCnt;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_retryAPI_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_retryAPI_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_retryAPI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_retryCnt_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_retryCnt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_RetryMatchMake_Statics::NewProp_retryAPI_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameMatchMakeSystem_RetryMatchMake_Statics::NewProp_retryAPI_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_RetryMatchMake_Statics::NewProp_retryAPI = { "retryAPI", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMatchMakeSystem_eventRetryMatchMake_Parms, retryAPI), Z_Construct_UEnum_ABP_200508_eSSModeAPIType, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameMatchMakeSystem_RetryMatchMake_Statics::NewProp_retryAPI_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_RetryMatchMake_Statics::NewProp_retryAPI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameMatchMakeSystem_RetryMatchMake_Statics::NewProp_retryCnt_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_RetryMatchMake_Statics::NewProp_retryCnt = { "retryCnt", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMatchMakeSystem_eventRetryMatchMake_Parms, retryCnt), METADATA_PARAMS(Z_Construct_UFunction_UELSSGameMatchMakeSystem_RetryMatchMake_Statics::NewProp_retryCnt_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_RetryMatchMake_Statics::NewProp_retryCnt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameMatchMakeSystem_RetryMatchMake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameMatchMakeSystem_RetryMatchMake_Statics::NewProp_retryAPI_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameMatchMakeSystem_RetryMatchMake_Statics::NewProp_retryAPI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameMatchMakeSystem_RetryMatchMake_Statics::NewProp_retryCnt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameMatchMakeSystem_RetryMatchMake_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_RetryMatchMake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameMatchMakeSystem, nullptr, "RetryMatchMake", nullptr, nullptr, sizeof(ELSSGameMatchMakeSystem_eventRetryMatchMake_Parms), Z_Construct_UFunction_UELSSGameMatchMakeSystem_RetryMatchMake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_RetryMatchMake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameMatchMakeSystem_RetryMatchMake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_RetryMatchMake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameMatchMakeSystem_RetryMatchMake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameMatchMakeSystem_RetryMatchMake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchCancelResult_Statics
	{
		struct ELSSGameMatchMakeSystem_eventSSWebAPI_FlexMatchCancelResult_Parms
		{
			eSSRequestResultType responseType;
			FELSSFlexMatchMakeStop_ResponseData response;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_responseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_responseType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_response_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchCancelResult_Statics::NewProp_responseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchCancelResult_Statics::NewProp_responseType = { "responseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMatchMakeSystem_eventSSWebAPI_FlexMatchCancelResult_Parms, responseType), Z_Construct_UEnum_ABP_200508_eSSRequestResultType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchCancelResult_Statics::NewProp_response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchCancelResult_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMatchMakeSystem_eventSSWebAPI_FlexMatchCancelResult_Parms, response), Z_Construct_UScriptStruct_FELSSFlexMatchMakeStop_ResponseData, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchCancelResult_Statics::NewProp_response_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchCancelResult_Statics::NewProp_response_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchCancelResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchCancelResult_Statics::NewProp_responseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchCancelResult_Statics::NewProp_responseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchCancelResult_Statics::NewProp_response,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchCancelResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchCancelResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameMatchMakeSystem, nullptr, "SSWebAPI_FlexMatchCancelResult", nullptr, nullptr, sizeof(ELSSGameMatchMakeSystem_eventSSWebAPI_FlexMatchCancelResult_Parms), Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchCancelResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchCancelResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchCancelResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchCancelResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchCancelResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchCancelResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchStartResult_Statics
	{
		struct ELSSGameMatchMakeSystem_eventSSWebAPI_FlexMatchStartResult_Parms
		{
			FELSSFlexMatchMakeStart_ResponseData response;
			eSSRequestResultType responseType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_response_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_responseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_responseType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchStartResult_Statics::NewProp_response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchStartResult_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMatchMakeSystem_eventSSWebAPI_FlexMatchStartResult_Parms, response), Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_ResponseData, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchStartResult_Statics::NewProp_response_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchStartResult_Statics::NewProp_response_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchStartResult_Statics::NewProp_responseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchStartResult_Statics::NewProp_responseType = { "responseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMatchMakeSystem_eventSSWebAPI_FlexMatchStartResult_Parms, responseType), Z_Construct_UEnum_ABP_200508_eSSRequestResultType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchStartResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchStartResult_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchStartResult_Statics::NewProp_responseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchStartResult_Statics::NewProp_responseType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchStartResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchStartResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameMatchMakeSystem, nullptr, "SSWebAPI_FlexMatchStartResult", nullptr, nullptr, sizeof(ELSSGameMatchMakeSystem_eventSSWebAPI_FlexMatchStartResult_Parms), Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchStartResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchStartResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchStartResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchStartResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchStartResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchStartResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchStatusResult_Statics
	{
		struct ELSSGameMatchMakeSystem_eventSSWebAPI_FlexMatchStatusResult_Parms
		{
			FELSSFlexMatchMakeStatus_ResponseData response;
			eSSRequestResultType responseType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_response_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_responseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_responseType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchStatusResult_Statics::NewProp_response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchStatusResult_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMatchMakeSystem_eventSSWebAPI_FlexMatchStatusResult_Parms, response), Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_ResponseData, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchStatusResult_Statics::NewProp_response_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchStatusResult_Statics::NewProp_response_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchStatusResult_Statics::NewProp_responseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchStatusResult_Statics::NewProp_responseType = { "responseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMatchMakeSystem_eventSSWebAPI_FlexMatchStatusResult_Parms, responseType), Z_Construct_UEnum_ABP_200508_eSSRequestResultType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchStatusResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchStatusResult_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchStatusResult_Statics::NewProp_responseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchStatusResult_Statics::NewProp_responseType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchStatusResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchStatusResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameMatchMakeSystem, nullptr, "SSWebAPI_FlexMatchStatusResult", nullptr, nullptr, sizeof(ELSSGameMatchMakeSystem_eventSSWebAPI_FlexMatchStatusResult_Parms), Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchStatusResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchStatusResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchStatusResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchStatusResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchStatusResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchStatusResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameMatchMakeSystem_StartFlexMatchDataTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameMatchMakeSystem_StartFlexMatchDataTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_StartFlexMatchDataTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameMatchMakeSystem, nullptr, "StartFlexMatchDataTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameMatchMakeSystem_StartFlexMatchDataTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_StartFlexMatchDataTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameMatchMakeSystem_StartFlexMatchDataTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameMatchMakeSystem_StartFlexMatchDataTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameMatchMakeSystem_StartMatchMakeRequest_Statics
	{
		struct ELSSGameMatchMakeSystem_eventStartMatchMakeRequest_Parms
		{
			TArray<FPingData> regionLatencieData;
			FString ssBuildVersion;
			FString selectRegion;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_regionLatencieData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_regionLatencieData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_regionLatencieData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ssBuildVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ssBuildVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selectRegion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_selectRegion;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_StartMatchMakeRequest_Statics::NewProp_regionLatencieData_Inner = { "regionLatencieData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPingData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameMatchMakeSystem_StartMatchMakeRequest_Statics::NewProp_regionLatencieData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_StartMatchMakeRequest_Statics::NewProp_regionLatencieData = { "regionLatencieData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMatchMakeSystem_eventStartMatchMakeRequest_Parms, regionLatencieData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameMatchMakeSystem_StartMatchMakeRequest_Statics::NewProp_regionLatencieData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_StartMatchMakeRequest_Statics::NewProp_regionLatencieData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameMatchMakeSystem_StartMatchMakeRequest_Statics::NewProp_ssBuildVersion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_StartMatchMakeRequest_Statics::NewProp_ssBuildVersion = { "ssBuildVersion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMatchMakeSystem_eventStartMatchMakeRequest_Parms, ssBuildVersion), METADATA_PARAMS(Z_Construct_UFunction_UELSSGameMatchMakeSystem_StartMatchMakeRequest_Statics::NewProp_ssBuildVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_StartMatchMakeRequest_Statics::NewProp_ssBuildVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameMatchMakeSystem_StartMatchMakeRequest_Statics::NewProp_selectRegion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_StartMatchMakeRequest_Statics::NewProp_selectRegion = { "selectRegion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMatchMakeSystem_eventStartMatchMakeRequest_Parms, selectRegion), METADATA_PARAMS(Z_Construct_UFunction_UELSSGameMatchMakeSystem_StartMatchMakeRequest_Statics::NewProp_selectRegion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_StartMatchMakeRequest_Statics::NewProp_selectRegion_MetaData)) };
	void Z_Construct_UFunction_UELSSGameMatchMakeSystem_StartMatchMakeRequest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameMatchMakeSystem_eventStartMatchMakeRequest_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_StartMatchMakeRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameMatchMakeSystem_eventStartMatchMakeRequest_Parms), &Z_Construct_UFunction_UELSSGameMatchMakeSystem_StartMatchMakeRequest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameMatchMakeSystem_StartMatchMakeRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameMatchMakeSystem_StartMatchMakeRequest_Statics::NewProp_regionLatencieData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameMatchMakeSystem_StartMatchMakeRequest_Statics::NewProp_regionLatencieData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameMatchMakeSystem_StartMatchMakeRequest_Statics::NewProp_ssBuildVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameMatchMakeSystem_StartMatchMakeRequest_Statics::NewProp_selectRegion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameMatchMakeSystem_StartMatchMakeRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameMatchMakeSystem_StartMatchMakeRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_StartMatchMakeRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameMatchMakeSystem, nullptr, "StartMatchMakeRequest", nullptr, nullptr, sizeof(ELSSGameMatchMakeSystem_eventStartMatchMakeRequest_Parms), Z_Construct_UFunction_UELSSGameMatchMakeSystem_StartMatchMakeRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_StartMatchMakeRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameMatchMakeSystem_StartMatchMakeRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_StartMatchMakeRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameMatchMakeSystem_StartMatchMakeRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameMatchMakeSystem_StartMatchMakeRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameMatchMakeSystem_StopMatchMakeRequest_Statics
	{
		struct ELSSGameMatchMakeSystem_eventStopMatchMakeRequest_Parms
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
	void Z_Construct_UFunction_UELSSGameMatchMakeSystem_StopMatchMakeRequest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameMatchMakeSystem_eventStopMatchMakeRequest_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_StopMatchMakeRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameMatchMakeSystem_eventStopMatchMakeRequest_Parms), &Z_Construct_UFunction_UELSSGameMatchMakeSystem_StopMatchMakeRequest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameMatchMakeSystem_StopMatchMakeRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameMatchMakeSystem_StopMatchMakeRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameMatchMakeSystem_StopMatchMakeRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_StopMatchMakeRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameMatchMakeSystem, nullptr, "StopMatchMakeRequest", nullptr, nullptr, sizeof(ELSSGameMatchMakeSystem_eventStopMatchMakeRequest_Parms), Z_Construct_UFunction_UELSSGameMatchMakeSystem_StopMatchMakeRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_StopMatchMakeRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameMatchMakeSystem_StopMatchMakeRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_StopMatchMakeRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameMatchMakeSystem_StopMatchMakeRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameMatchMakeSystem_StopMatchMakeRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameMatchMakeSystem_UpdateMatchMakeRequest_Statics
	{
		struct ELSSGameMatchMakeSystem_eventUpdateMatchMakeRequest_Parms
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
	void Z_Construct_UFunction_UELSSGameMatchMakeSystem_UpdateMatchMakeRequest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameMatchMakeSystem_eventUpdateMatchMakeRequest_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_UpdateMatchMakeRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameMatchMakeSystem_eventUpdateMatchMakeRequest_Parms), &Z_Construct_UFunction_UELSSGameMatchMakeSystem_UpdateMatchMakeRequest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameMatchMakeSystem_UpdateMatchMakeRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameMatchMakeSystem_UpdateMatchMakeRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameMatchMakeSystem_UpdateMatchMakeRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameMatchMakeSystem_UpdateMatchMakeRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameMatchMakeSystem, nullptr, "UpdateMatchMakeRequest", nullptr, nullptr, sizeof(ELSSGameMatchMakeSystem_eventUpdateMatchMakeRequest_Parms), Z_Construct_UFunction_UELSSGameMatchMakeSystem_UpdateMatchMakeRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_UpdateMatchMakeRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameMatchMakeSystem_UpdateMatchMakeRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameMatchMakeSystem_UpdateMatchMakeRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameMatchMakeSystem_UpdateMatchMakeRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameMatchMakeSystem_UpdateMatchMakeRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSGameMatchMakeSystem_NoRegister()
	{
		return UELSSGameMatchMakeSystem::StaticClass();
	}
	struct Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onSSGameMatchMakeErrorEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onSSGameMatchMakeErrorEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onSSGameMatchMakeEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onSSGameMatchMakeEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ssMatchSuccessData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ssMatchSuccessData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ssMatchMakeState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ssMatchMakeState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ssMatchMakeState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ssIsNextUpdateWaitSkip_MetaData[];
#endif
		static void NewProp_ssIsNextUpdateWaitSkip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ssIsNextUpdateWaitSkip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ssIsRequestCancel_MetaData[];
#endif
		static void NewProp_ssIsRequestCancel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ssIsRequestCancel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ssMatchRequestRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ssMatchRequestRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ssCancelRequestRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ssCancelRequestRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTicketId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrentTicketId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestedCancel_MetaData[];
#endif
		static void NewProp_RequestedCancel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RequestedCancel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSGameMatchMakeSystem_CanStopMatchMake, "CanStopMatchMake" }, // 2869753624
		{ &Z_Construct_UFunction_UELSSGameMatchMakeSystem_CreateGameMatchMakeSystem, "CreateGameMatchMakeSystem" }, // 144969664
		{ &Z_Construct_UFunction_UELSSGameMatchMakeSystem_CreateJoinGameServerData, "CreateJoinGameServerData" }, // 2650232331
		{ &Z_Construct_UFunction_UELSSGameMatchMakeSystem_DebugGetOverrideRegionInfo, "DebugGetOverrideRegionInfo" }, // 963840072
		{ &Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorCommonEvent, "ErrorCommonEvent" }, // 919276902
		{ &Z_Construct_UFunction_UELSSGameMatchMakeSystem_ErrorRetryEvent, "ErrorRetryEvent" }, // 2781648509
		{ &Z_Construct_UFunction_UELSSGameMatchMakeSystem_ForceMatchEnd, "ForceMatchEnd" }, // 2613630858
		{ &Z_Construct_UFunction_UELSSGameMatchMakeSystem_IsMatchMakeCheck, "IsMatchMakeCheck" }, // 3421836051
		{ &Z_Construct_UFunction_UELSSGameMatchMakeSystem_PreviewMatchRequestData, "PreviewMatchRequestData" }, // 1617413061
		{ &Z_Construct_UFunction_UELSSGameMatchMakeSystem_Reset, "Reset" }, // 1838643934
		{ &Z_Construct_UFunction_UELSSGameMatchMakeSystem_Restart, "Restart" }, // 175057300
		{ &Z_Construct_UFunction_UELSSGameMatchMakeSystem_RestartMatchMake, "RestartMatchMake" }, // 3905801932
		{ &Z_Construct_UFunction_UELSSGameMatchMakeSystem_RetryMatchMake, "RetryMatchMake" }, // 180073775
		{ &Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchCancelResult, "SSWebAPI_FlexMatchCancelResult" }, // 3982187183
		{ &Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchStartResult, "SSWebAPI_FlexMatchStartResult" }, // 823623618
		{ &Z_Construct_UFunction_UELSSGameMatchMakeSystem_SSWebAPI_FlexMatchStatusResult, "SSWebAPI_FlexMatchStatusResult" }, // 2391876048
		{ &Z_Construct_UFunction_UELSSGameMatchMakeSystem_StartFlexMatchDataTimer, "StartFlexMatchDataTimer" }, // 3605957476
		{ &Z_Construct_UFunction_UELSSGameMatchMakeSystem_StartMatchMakeRequest, "StartMatchMakeRequest" }, // 3248531454
		{ &Z_Construct_UFunction_UELSSGameMatchMakeSystem_StopMatchMakeRequest, "StopMatchMakeRequest" }, // 879219030
		{ &Z_Construct_UFunction_UELSSGameMatchMakeSystem_UpdateMatchMakeRequest, "UpdateMatchMakeRequest" }, // 1736438127
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSGameMatchMakeSystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSGameMatchMakeSystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_onSSGameMatchMakeErrorEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameMatchMakeSystem" },
		{ "ModuleRelativePath", "Public/ELSSGameMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_onSSGameMatchMakeErrorEvent = { "onSSGameMatchMakeErrorEvent", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSGameMatchMakeSystem, onSSGameMatchMakeErrorEvent), Z_Construct_UDelegateFunction_ABP_200508_SSGameMatchMakeErrorEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_onSSGameMatchMakeErrorEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_onSSGameMatchMakeErrorEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_onSSGameMatchMakeEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameMatchMakeSystem" },
		{ "ModuleRelativePath", "Public/ELSSGameMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_onSSGameMatchMakeEvent = { "onSSGameMatchMakeEvent", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSGameMatchMakeSystem, onSSGameMatchMakeEvent), Z_Construct_UDelegateFunction_ABP_200508_SSGameMatchMakeEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_onSSGameMatchMakeEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_onSSGameMatchMakeEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_ssMatchSuccessData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameMatchMakeSystem" },
		{ "ModuleRelativePath", "Public/ELSSGameMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_ssMatchSuccessData = { "ssMatchSuccessData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSGameMatchMakeSystem, ssMatchSuccessData), Z_Construct_UScriptStruct_FSSSuccessMatchData, METADATA_PARAMS(Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_ssMatchSuccessData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_ssMatchSuccessData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_ssMatchMakeState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_ssMatchMakeState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameMatchMakeSystem" },
		{ "ModuleRelativePath", "Public/ELSSGameMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_ssMatchMakeState = { "ssMatchMakeState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSGameMatchMakeSystem, ssMatchMakeState), Z_Construct_UEnum_ABP_200508_eSSGameMatchMakeState, METADATA_PARAMS(Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_ssMatchMakeState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_ssMatchMakeState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_ssIsNextUpdateWaitSkip_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameMatchMakeSystem" },
		{ "ModuleRelativePath", "Public/ELSSGameMatchMakeSystem.h" },
	};
#endif
	void Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_ssIsNextUpdateWaitSkip_SetBit(void* Obj)
	{
		((UELSSGameMatchMakeSystem*)Obj)->ssIsNextUpdateWaitSkip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_ssIsNextUpdateWaitSkip = { "ssIsNextUpdateWaitSkip", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSGameMatchMakeSystem), &Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_ssIsNextUpdateWaitSkip_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_ssIsNextUpdateWaitSkip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_ssIsNextUpdateWaitSkip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_ssIsRequestCancel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameMatchMakeSystem" },
		{ "ModuleRelativePath", "Public/ELSSGameMatchMakeSystem.h" },
	};
#endif
	void Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_ssIsRequestCancel_SetBit(void* Obj)
	{
		((UELSSGameMatchMakeSystem*)Obj)->ssIsRequestCancel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_ssIsRequestCancel = { "ssIsRequestCancel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSGameMatchMakeSystem), &Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_ssIsRequestCancel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_ssIsRequestCancel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_ssIsRequestCancel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_ssMatchRequestRef_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameMatchMakeSystem" },
		{ "ModuleRelativePath", "Public/ELSSGameMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_ssMatchRequestRef = { "ssMatchRequestRef", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSGameMatchMakeSystem, ssMatchRequestRef), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_ssMatchRequestRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_ssMatchRequestRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_ssCancelRequestRef_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameMatchMakeSystem" },
		{ "ModuleRelativePath", "Public/ELSSGameMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_ssCancelRequestRef = { "ssCancelRequestRef", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSGameMatchMakeSystem, ssCancelRequestRef), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_ssCancelRequestRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_ssCancelRequestRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_CurrentTicketId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameMatchMakeSystem" },
		{ "ModuleRelativePath", "Public/ELSSGameMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_CurrentTicketId = { "CurrentTicketId", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSGameMatchMakeSystem, CurrentTicketId), METADATA_PARAMS(Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_CurrentTicketId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_CurrentTicketId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_RequestedCancel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameMatchMakeSystem" },
		{ "ModuleRelativePath", "Public/ELSSGameMatchMakeSystem.h" },
	};
#endif
	void Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_RequestedCancel_SetBit(void* Obj)
	{
		((UELSSGameMatchMakeSystem*)Obj)->RequestedCancel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_RequestedCancel = { "RequestedCancel", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSGameMatchMakeSystem), &Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_RequestedCancel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_RequestedCancel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_RequestedCancel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_onSSGameMatchMakeErrorEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_onSSGameMatchMakeEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_ssMatchSuccessData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_ssMatchMakeState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_ssMatchMakeState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_ssIsNextUpdateWaitSkip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_ssIsRequestCancel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_ssMatchRequestRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_ssCancelRequestRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_CurrentTicketId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::NewProp_RequestedCancel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSGameMatchMakeSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::ClassParams = {
		&UELSSGameMatchMakeSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSGameMatchMakeSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSGameMatchMakeSystem, 2962010067);
	template<> ABP_200508_API UClass* StaticClass<UELSSGameMatchMakeSystem>()
	{
		return UELSSGameMatchMakeSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSGameMatchMakeSystem(Z_Construct_UClass_UELSSGameMatchMakeSystem, &UELSSGameMatchMakeSystem::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSGameMatchMakeSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSGameMatchMakeSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
