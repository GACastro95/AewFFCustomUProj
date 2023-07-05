// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSSessionP2PAFHostMigration.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSessionP2PAFHostMigration() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PAFHostMigration_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PAFHostMigration();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PAdditionalFunctionBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionInfo_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PLatencyInfoPacket_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionUserPacketMap_NoRegister();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionHostMigrationClientResultType();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionHostMigrationStep();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionSettings();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSCommunityEvent();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityUserBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSearchResultsBase_NoRegister();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionHostMigrationType();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionSearchResults_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEOSSessionP2PAFHostMigration::execGetEOSSessionInfoForAfter)
	{
		P_GET_OBJECT_REF(UEOSSessionInfo,Z_Param_Out__pcSessionInfoNext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEOSSessionInfoForAfter(Z_Param_Out__pcSessionInfoNext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PAFHostMigration::execGetEOSSessionInfoForBefore)
	{
		P_GET_OBJECT_REF(UEOSSessionInfo,Z_Param_Out__pcSessionInfoOld);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEOSSessionInfoForBefore(Z_Param_Out__pcSessionInfoOld);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PAFHostMigration::execGetEOSSessionP2PLatencyInfoPacket)
	{
		P_GET_OBJECT_REF(UEOSSessionP2PLatencyInfoPacket,Z_Param_Out__pcLatencyInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEOSSessionP2PLatencyInfoPacket(Z_Param_Out__pcLatencyInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PAFHostMigration::execGetEOSSessionUserPacketMapForNextHost)
	{
		P_GET_OBJECT_REF(UEOSSessionUserPacketMap,Z_Param_Out__pcNextHostUserPacketMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEOSSessionUserPacketMapForNextHost(Z_Param_Out__pcNextHostUserPacketMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PAFHostMigration::execGetHostMigrationClientResultType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSSessionHostMigrationClientResultType*)Z_Param__Result=P_THIS->GetHostMigrationClientResultType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PAFHostMigration::execGetHostMigrationStep)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSSessionHostMigrationStep*)Z_Param__Result=P_THIS->GetHostMigrationStep();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PAFHostMigration::execGetHostPriority)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetHostPriority(Z_Param__strProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PAFHostMigration::execGetMaxRetryToRquestAPICount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxRetryToRquestAPICount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PAFHostMigration::execGetMaxUpdateStateRequestRetryCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxUpdateStateRequestRetryCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PAFHostMigration::execGetNextHostProductUserID)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out__rstNextHostProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetNextHostProductUserID(Z_Param_Out__rstNextHostProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PAFHostMigration::execGetNextHostUserPacketMap)
	{
		P_GET_OBJECT_REF(UEOSSessionUserPacketMap,Z_Param_Out__pcNextHostUserPacketMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetNextHostUserPacketMap(Z_Param_Out__pcNextHostUserPacketMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PAFHostMigration::execGetRetryToRquestAPICount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRetryToRquestAPICount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PAFHostMigration::execGetSessionSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEOSSessionSettings*)Z_Param__Result=P_THIS->GetSessionSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PAFHostMigration::execGetUpdateStateRequestRetryCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetUpdateStateRequestRetryCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PAFHostMigration::execGetWaitMemberNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetWaitMemberNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PAFHostMigration::execIsActiveObserver)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActiveObserver();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PAFHostMigration::execIsMigratingNow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMigratingNow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PAFHostMigration::execIsNextHostOfTheMe)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNextHostOfTheMe();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PAFHostMigration::execOnCommunityEventForHostMigration)
	{
		P_GET_ENUM(EEOSCommunityEvent,Z_Param__enEOSCommunityEvent);
		P_GET_OBJECT(UEOSCommunityBase,Z_Param__pcEOSCommunityBase);
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param__pcEOSCommunityInfo);
		P_GET_OBJECT(UEOSCommunityUserBase,Z_Param__pcEOSLobbyUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCommunityEventForHostMigration(EEOSCommunityEvent(Z_Param__enEOSCommunityEvent),Z_Param__pcEOSCommunityBase,Z_Param__pcEOSCommunityInfo,Z_Param__pcEOSLobbyUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PAFHostMigration::execOnCommunitySearchResultEvent)
	{
		P_GET_OBJECT(UEOSCommunityBase,Z_Param__pcEOSCommunityBase);
		P_GET_OBJECT(UEOSSearchResultsBase,Z_Param__pcEOSSearchResultsBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCommunitySearchResultEvent(Z_Param__pcEOSCommunityBase,Z_Param__pcEOSSearchResultsBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PAFHostMigration::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PAFHostMigration::execSendHostMigrationPacket)
	{
		P_GET_ENUM(EEOSSessionHostMigrationType,Z_Param__enType);
		P_GET_ENUM(EEOSSessionHostMigrationStep,Z_Param__enStep);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendHostMigrationPacket(EEOSSessionHostMigrationType(Z_Param__enType),EEOSSessionHostMigrationStep(Z_Param__enStep));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PAFHostMigration::execSendLatencyInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendLatencyInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PAFHostMigration::execSetActiveObserver)
	{
		P_GET_UBOOL(Z_Param__bActivate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetActiveObserver(Z_Param__bActivate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PAFHostMigration::execSetActiveSessionSetting)
	{
		P_GET_STRUCT_REF(FEOSSessionSettings,Z_Param_Out__stSessionSession);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetActiveSessionSetting(Z_Param_Out__stSessionSession);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PAFHostMigration::execSetRetryParams)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sRetryCountForAPI);
		P_GET_PROPERTY(FIntProperty,Z_Param__sRetryCountForRequestStatus);
		P_GET_PROPERTY(FFloatProperty,Z_Param__fTimerInterval);
		P_GET_PROPERTY(FFloatProperty,Z_Param__fRetryInterval);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRetryParams(Z_Param__sRetryCountForAPI,Z_Param__sRetryCountForRequestStatus,Z_Param__fTimerInterval,Z_Param__fRetryInterval);
		P_NATIVE_END;
	}
	void UEOSSessionP2PAFHostMigration::StaticRegisterNativesUEOSSessionP2PAFHostMigration()
	{
		UClass* Class = UEOSSessionP2PAFHostMigration::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEOSSessionInfoForAfter", &UEOSSessionP2PAFHostMigration::execGetEOSSessionInfoForAfter },
			{ "GetEOSSessionInfoForBefore", &UEOSSessionP2PAFHostMigration::execGetEOSSessionInfoForBefore },
			{ "GetEOSSessionP2PLatencyInfoPacket", &UEOSSessionP2PAFHostMigration::execGetEOSSessionP2PLatencyInfoPacket },
			{ "GetEOSSessionUserPacketMapForNextHost", &UEOSSessionP2PAFHostMigration::execGetEOSSessionUserPacketMapForNextHost },
			{ "GetHostMigrationClientResultType", &UEOSSessionP2PAFHostMigration::execGetHostMigrationClientResultType },
			{ "GetHostMigrationStep", &UEOSSessionP2PAFHostMigration::execGetHostMigrationStep },
			{ "GetHostPriority", &UEOSSessionP2PAFHostMigration::execGetHostPriority },
			{ "GetMaxRetryToRquestAPICount", &UEOSSessionP2PAFHostMigration::execGetMaxRetryToRquestAPICount },
			{ "GetMaxUpdateStateRequestRetryCount", &UEOSSessionP2PAFHostMigration::execGetMaxUpdateStateRequestRetryCount },
			{ "GetNextHostProductUserID", &UEOSSessionP2PAFHostMigration::execGetNextHostProductUserID },
			{ "GetNextHostUserPacketMap", &UEOSSessionP2PAFHostMigration::execGetNextHostUserPacketMap },
			{ "GetRetryToRquestAPICount", &UEOSSessionP2PAFHostMigration::execGetRetryToRquestAPICount },
			{ "GetSessionSettings", &UEOSSessionP2PAFHostMigration::execGetSessionSettings },
			{ "GetUpdateStateRequestRetryCount", &UEOSSessionP2PAFHostMigration::execGetUpdateStateRequestRetryCount },
			{ "GetWaitMemberNum", &UEOSSessionP2PAFHostMigration::execGetWaitMemberNum },
			{ "IsActiveObserver", &UEOSSessionP2PAFHostMigration::execIsActiveObserver },
			{ "IsMigratingNow", &UEOSSessionP2PAFHostMigration::execIsMigratingNow },
			{ "IsNextHostOfTheMe", &UEOSSessionP2PAFHostMigration::execIsNextHostOfTheMe },
			{ "OnCommunityEventForHostMigration", &UEOSSessionP2PAFHostMigration::execOnCommunityEventForHostMigration },
			{ "OnCommunitySearchResultEvent", &UEOSSessionP2PAFHostMigration::execOnCommunitySearchResultEvent },
			{ "Reset", &UEOSSessionP2PAFHostMigration::execReset },
			{ "SendHostMigrationPacket", &UEOSSessionP2PAFHostMigration::execSendHostMigrationPacket },
			{ "SendLatencyInfo", &UEOSSessionP2PAFHostMigration::execSendLatencyInfo },
			{ "SetActiveObserver", &UEOSSessionP2PAFHostMigration::execSetActiveObserver },
			{ "SetActiveSessionSetting", &UEOSSessionP2PAFHostMigration::execSetActiveSessionSetting },
			{ "SetRetryParams", &UEOSSessionP2PAFHostMigration::execSetRetryParams },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionInfoForAfter_Statics
	{
		struct EOSSessionP2PAFHostMigration_eventGetEOSSessionInfoForAfter_Parms
		{
			UEOSSessionInfo* _pcSessionInfoNext;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcSessionInfoNext;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionInfoForAfter_Statics::NewProp__pcSessionInfoNext = { "_pcSessionInfoNext", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFHostMigration_eventGetEOSSessionInfoForAfter_Parms, _pcSessionInfoNext), Z_Construct_UClass_UEOSSessionInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionInfoForAfter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PAFHostMigration_eventGetEOSSessionInfoForAfter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionInfoForAfter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PAFHostMigration_eventGetEOSSessionInfoForAfter_Parms), &Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionInfoForAfter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionInfoForAfter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionInfoForAfter_Statics::NewProp__pcSessionInfoNext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionInfoForAfter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionInfoForAfter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFHostMigration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionInfoForAfter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFHostMigration, nullptr, "GetEOSSessionInfoForAfter", nullptr, nullptr, sizeof(EOSSessionP2PAFHostMigration_eventGetEOSSessionInfoForAfter_Parms), Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionInfoForAfter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionInfoForAfter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionInfoForAfter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionInfoForAfter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionInfoForAfter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionInfoForAfter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionInfoForBefore_Statics
	{
		struct EOSSessionP2PAFHostMigration_eventGetEOSSessionInfoForBefore_Parms
		{
			UEOSSessionInfo* _pcSessionInfoOld;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcSessionInfoOld;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionInfoForBefore_Statics::NewProp__pcSessionInfoOld = { "_pcSessionInfoOld", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFHostMigration_eventGetEOSSessionInfoForBefore_Parms, _pcSessionInfoOld), Z_Construct_UClass_UEOSSessionInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionInfoForBefore_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PAFHostMigration_eventGetEOSSessionInfoForBefore_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionInfoForBefore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PAFHostMigration_eventGetEOSSessionInfoForBefore_Parms), &Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionInfoForBefore_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionInfoForBefore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionInfoForBefore_Statics::NewProp__pcSessionInfoOld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionInfoForBefore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionInfoForBefore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFHostMigration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionInfoForBefore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFHostMigration, nullptr, "GetEOSSessionInfoForBefore", nullptr, nullptr, sizeof(EOSSessionP2PAFHostMigration_eventGetEOSSessionInfoForBefore_Parms), Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionInfoForBefore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionInfoForBefore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionInfoForBefore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionInfoForBefore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionInfoForBefore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionInfoForBefore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionP2PLatencyInfoPacket_Statics
	{
		struct EOSSessionP2PAFHostMigration_eventGetEOSSessionP2PLatencyInfoPacket_Parms
		{
			UEOSSessionP2PLatencyInfoPacket* _pcLatencyInfo;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcLatencyInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionP2PLatencyInfoPacket_Statics::NewProp__pcLatencyInfo = { "_pcLatencyInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFHostMigration_eventGetEOSSessionP2PLatencyInfoPacket_Parms, _pcLatencyInfo), Z_Construct_UClass_UEOSSessionP2PLatencyInfoPacket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionP2PLatencyInfoPacket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PAFHostMigration_eventGetEOSSessionP2PLatencyInfoPacket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionP2PLatencyInfoPacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PAFHostMigration_eventGetEOSSessionP2PLatencyInfoPacket_Parms), &Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionP2PLatencyInfoPacket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionP2PLatencyInfoPacket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionP2PLatencyInfoPacket_Statics::NewProp__pcLatencyInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionP2PLatencyInfoPacket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionP2PLatencyInfoPacket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFHostMigration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionP2PLatencyInfoPacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFHostMigration, nullptr, "GetEOSSessionP2PLatencyInfoPacket", nullptr, nullptr, sizeof(EOSSessionP2PAFHostMigration_eventGetEOSSessionP2PLatencyInfoPacket_Parms), Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionP2PLatencyInfoPacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionP2PLatencyInfoPacket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionP2PLatencyInfoPacket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionP2PLatencyInfoPacket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionP2PLatencyInfoPacket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionP2PLatencyInfoPacket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionUserPacketMapForNextHost_Statics
	{
		struct EOSSessionP2PAFHostMigration_eventGetEOSSessionUserPacketMapForNextHost_Parms
		{
			UEOSSessionUserPacketMap* _pcNextHostUserPacketMap;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcNextHostUserPacketMap;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionUserPacketMapForNextHost_Statics::NewProp__pcNextHostUserPacketMap = { "_pcNextHostUserPacketMap", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFHostMigration_eventGetEOSSessionUserPacketMapForNextHost_Parms, _pcNextHostUserPacketMap), Z_Construct_UClass_UEOSSessionUserPacketMap_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionUserPacketMapForNextHost_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PAFHostMigration_eventGetEOSSessionUserPacketMapForNextHost_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionUserPacketMapForNextHost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PAFHostMigration_eventGetEOSSessionUserPacketMapForNextHost_Parms), &Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionUserPacketMapForNextHost_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionUserPacketMapForNextHost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionUserPacketMapForNextHost_Statics::NewProp__pcNextHostUserPacketMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionUserPacketMapForNextHost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionUserPacketMapForNextHost_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFHostMigration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionUserPacketMapForNextHost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFHostMigration, nullptr, "GetEOSSessionUserPacketMapForNextHost", nullptr, nullptr, sizeof(EOSSessionP2PAFHostMigration_eventGetEOSSessionUserPacketMapForNextHost_Parms), Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionUserPacketMapForNextHost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionUserPacketMapForNextHost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionUserPacketMapForNextHost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionUserPacketMapForNextHost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionUserPacketMapForNextHost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionUserPacketMapForNextHost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostMigrationClientResultType_Statics
	{
		struct EOSSessionP2PAFHostMigration_eventGetHostMigrationClientResultType_Parms
		{
			EEOSSessionHostMigrationClientResultType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostMigrationClientResultType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostMigrationClientResultType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFHostMigration_eventGetHostMigrationClientResultType_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSSessionHostMigrationClientResultType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostMigrationClientResultType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostMigrationClientResultType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostMigrationClientResultType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostMigrationClientResultType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFHostMigration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostMigrationClientResultType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFHostMigration, nullptr, "GetHostMigrationClientResultType", nullptr, nullptr, sizeof(EOSSessionP2PAFHostMigration_eventGetHostMigrationClientResultType_Parms), Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostMigrationClientResultType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostMigrationClientResultType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostMigrationClientResultType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostMigrationClientResultType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostMigrationClientResultType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostMigrationClientResultType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostMigrationStep_Statics
	{
		struct EOSSessionP2PAFHostMigration_eventGetHostMigrationStep_Parms
		{
			EEOSSessionHostMigrationStep ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostMigrationStep_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostMigrationStep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFHostMigration_eventGetHostMigrationStep_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSSessionHostMigrationStep, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostMigrationStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostMigrationStep_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostMigrationStep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostMigrationStep_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFHostMigration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostMigrationStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFHostMigration, nullptr, "GetHostMigrationStep", nullptr, nullptr, sizeof(EOSSessionP2PAFHostMigration_eventGetHostMigrationStep_Parms), Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostMigrationStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostMigrationStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostMigrationStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostMigrationStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostMigrationStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostMigrationStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostPriority_Statics
	{
		struct EOSSessionP2PAFHostMigration_eventGetHostPriority_Parms
		{
			FString _strProductUserID;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strProductUserID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostPriority_Statics::NewProp__strProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostPriority_Statics::NewProp__strProductUserID = { "_strProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFHostMigration_eventGetHostPriority_Parms, _strProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostPriority_Statics::NewProp__strProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostPriority_Statics::NewProp__strProductUserID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFHostMigration_eventGetHostPriority_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostPriority_Statics::NewProp__strProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostPriority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostPriority_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFHostMigration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFHostMigration, nullptr, "GetHostPriority", nullptr, nullptr, sizeof(EOSSessionP2PAFHostMigration_eventGetHostPriority_Parms), Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetMaxRetryToRquestAPICount_Statics
	{
		struct EOSSessionP2PAFHostMigration_eventGetMaxRetryToRquestAPICount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetMaxRetryToRquestAPICount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFHostMigration_eventGetMaxRetryToRquestAPICount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetMaxRetryToRquestAPICount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetMaxRetryToRquestAPICount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetMaxRetryToRquestAPICount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFHostMigration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetMaxRetryToRquestAPICount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFHostMigration, nullptr, "GetMaxRetryToRquestAPICount", nullptr, nullptr, sizeof(EOSSessionP2PAFHostMigration_eventGetMaxRetryToRquestAPICount_Parms), Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetMaxRetryToRquestAPICount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetMaxRetryToRquestAPICount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetMaxRetryToRquestAPICount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetMaxRetryToRquestAPICount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetMaxRetryToRquestAPICount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetMaxRetryToRquestAPICount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetMaxUpdateStateRequestRetryCount_Statics
	{
		struct EOSSessionP2PAFHostMigration_eventGetMaxUpdateStateRequestRetryCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetMaxUpdateStateRequestRetryCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFHostMigration_eventGetMaxUpdateStateRequestRetryCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetMaxUpdateStateRequestRetryCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetMaxUpdateStateRequestRetryCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetMaxUpdateStateRequestRetryCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFHostMigration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetMaxUpdateStateRequestRetryCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFHostMigration, nullptr, "GetMaxUpdateStateRequestRetryCount", nullptr, nullptr, sizeof(EOSSessionP2PAFHostMigration_eventGetMaxUpdateStateRequestRetryCount_Parms), Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetMaxUpdateStateRequestRetryCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetMaxUpdateStateRequestRetryCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetMaxUpdateStateRequestRetryCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetMaxUpdateStateRequestRetryCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetMaxUpdateStateRequestRetryCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetMaxUpdateStateRequestRetryCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetNextHostProductUserID_Statics
	{
		struct EOSSessionP2PAFHostMigration_eventGetNextHostProductUserID_Parms
		{
			FString _rstNextHostProductUserID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__rstNextHostProductUserID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetNextHostProductUserID_Statics::NewProp__rstNextHostProductUserID = { "_rstNextHostProductUserID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFHostMigration_eventGetNextHostProductUserID_Parms, _rstNextHostProductUserID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetNextHostProductUserID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PAFHostMigration_eventGetNextHostProductUserID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetNextHostProductUserID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PAFHostMigration_eventGetNextHostProductUserID_Parms), &Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetNextHostProductUserID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetNextHostProductUserID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetNextHostProductUserID_Statics::NewProp__rstNextHostProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetNextHostProductUserID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetNextHostProductUserID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFHostMigration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetNextHostProductUserID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFHostMigration, nullptr, "GetNextHostProductUserID", nullptr, nullptr, sizeof(EOSSessionP2PAFHostMigration_eventGetNextHostProductUserID_Parms), Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetNextHostProductUserID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetNextHostProductUserID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetNextHostProductUserID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetNextHostProductUserID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetNextHostProductUserID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetNextHostProductUserID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetNextHostUserPacketMap_Statics
	{
		struct EOSSessionP2PAFHostMigration_eventGetNextHostUserPacketMap_Parms
		{
			UEOSSessionUserPacketMap* _pcNextHostUserPacketMap;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcNextHostUserPacketMap;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetNextHostUserPacketMap_Statics::NewProp__pcNextHostUserPacketMap = { "_pcNextHostUserPacketMap", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFHostMigration_eventGetNextHostUserPacketMap_Parms, _pcNextHostUserPacketMap), Z_Construct_UClass_UEOSSessionUserPacketMap_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetNextHostUserPacketMap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PAFHostMigration_eventGetNextHostUserPacketMap_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetNextHostUserPacketMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PAFHostMigration_eventGetNextHostUserPacketMap_Parms), &Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetNextHostUserPacketMap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetNextHostUserPacketMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetNextHostUserPacketMap_Statics::NewProp__pcNextHostUserPacketMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetNextHostUserPacketMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetNextHostUserPacketMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFHostMigration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetNextHostUserPacketMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFHostMigration, nullptr, "GetNextHostUserPacketMap", nullptr, nullptr, sizeof(EOSSessionP2PAFHostMigration_eventGetNextHostUserPacketMap_Parms), Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetNextHostUserPacketMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetNextHostUserPacketMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetNextHostUserPacketMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetNextHostUserPacketMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetNextHostUserPacketMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetNextHostUserPacketMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetRetryToRquestAPICount_Statics
	{
		struct EOSSessionP2PAFHostMigration_eventGetRetryToRquestAPICount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetRetryToRquestAPICount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFHostMigration_eventGetRetryToRquestAPICount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetRetryToRquestAPICount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetRetryToRquestAPICount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetRetryToRquestAPICount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFHostMigration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetRetryToRquestAPICount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFHostMigration, nullptr, "GetRetryToRquestAPICount", nullptr, nullptr, sizeof(EOSSessionP2PAFHostMigration_eventGetRetryToRquestAPICount_Parms), Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetRetryToRquestAPICount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetRetryToRquestAPICount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetRetryToRquestAPICount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetRetryToRquestAPICount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetRetryToRquestAPICount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetRetryToRquestAPICount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetSessionSettings_Statics
	{
		struct EOSSessionP2PAFHostMigration_eventGetSessionSettings_Parms
		{
			FEOSSessionSettings ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetSessionSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFHostMigration_eventGetSessionSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FEOSSessionSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetSessionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetSessionSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetSessionSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFHostMigration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetSessionSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFHostMigration, nullptr, "GetSessionSettings", nullptr, nullptr, sizeof(EOSSessionP2PAFHostMigration_eventGetSessionSettings_Parms), Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetSessionSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetSessionSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetSessionSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetSessionSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetSessionSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetSessionSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetUpdateStateRequestRetryCount_Statics
	{
		struct EOSSessionP2PAFHostMigration_eventGetUpdateStateRequestRetryCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetUpdateStateRequestRetryCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFHostMigration_eventGetUpdateStateRequestRetryCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetUpdateStateRequestRetryCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetUpdateStateRequestRetryCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetUpdateStateRequestRetryCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFHostMigration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetUpdateStateRequestRetryCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFHostMigration, nullptr, "GetUpdateStateRequestRetryCount", nullptr, nullptr, sizeof(EOSSessionP2PAFHostMigration_eventGetUpdateStateRequestRetryCount_Parms), Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetUpdateStateRequestRetryCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetUpdateStateRequestRetryCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetUpdateStateRequestRetryCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetUpdateStateRequestRetryCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetUpdateStateRequestRetryCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetUpdateStateRequestRetryCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetWaitMemberNum_Statics
	{
		struct EOSSessionP2PAFHostMigration_eventGetWaitMemberNum_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetWaitMemberNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFHostMigration_eventGetWaitMemberNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetWaitMemberNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetWaitMemberNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetWaitMemberNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFHostMigration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetWaitMemberNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFHostMigration, nullptr, "GetWaitMemberNum", nullptr, nullptr, sizeof(EOSSessionP2PAFHostMigration_eventGetWaitMemberNum_Parms), Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetWaitMemberNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetWaitMemberNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetWaitMemberNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetWaitMemberNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetWaitMemberNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetWaitMemberNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsActiveObserver_Statics
	{
		struct EOSSessionP2PAFHostMigration_eventIsActiveObserver_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsActiveObserver_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PAFHostMigration_eventIsActiveObserver_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsActiveObserver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PAFHostMigration_eventIsActiveObserver_Parms), &Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsActiveObserver_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsActiveObserver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsActiveObserver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsActiveObserver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFHostMigration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsActiveObserver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFHostMigration, nullptr, "IsActiveObserver", nullptr, nullptr, sizeof(EOSSessionP2PAFHostMigration_eventIsActiveObserver_Parms), Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsActiveObserver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsActiveObserver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsActiveObserver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsActiveObserver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsActiveObserver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsActiveObserver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsMigratingNow_Statics
	{
		struct EOSSessionP2PAFHostMigration_eventIsMigratingNow_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsMigratingNow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PAFHostMigration_eventIsMigratingNow_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsMigratingNow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PAFHostMigration_eventIsMigratingNow_Parms), &Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsMigratingNow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsMigratingNow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsMigratingNow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsMigratingNow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFHostMigration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsMigratingNow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFHostMigration, nullptr, "IsMigratingNow", nullptr, nullptr, sizeof(EOSSessionP2PAFHostMigration_eventIsMigratingNow_Parms), Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsMigratingNow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsMigratingNow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsMigratingNow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsMigratingNow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsMigratingNow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsMigratingNow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsNextHostOfTheMe_Statics
	{
		struct EOSSessionP2PAFHostMigration_eventIsNextHostOfTheMe_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsNextHostOfTheMe_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PAFHostMigration_eventIsNextHostOfTheMe_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsNextHostOfTheMe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PAFHostMigration_eventIsNextHostOfTheMe_Parms), &Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsNextHostOfTheMe_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsNextHostOfTheMe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsNextHostOfTheMe_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsNextHostOfTheMe_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFHostMigration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsNextHostOfTheMe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFHostMigration, nullptr, "IsNextHostOfTheMe", nullptr, nullptr, sizeof(EOSSessionP2PAFHostMigration_eventIsNextHostOfTheMe_Parms), Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsNextHostOfTheMe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsNextHostOfTheMe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsNextHostOfTheMe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsNextHostOfTheMe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsNextHostOfTheMe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsNextHostOfTheMe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_OnCommunityEventForHostMigration_Statics
	{
		struct EOSSessionP2PAFHostMigration_eventOnCommunityEventForHostMigration_Parms
		{
			EEOSCommunityEvent _enEOSCommunityEvent;
			UEOSCommunityBase* _pcEOSCommunityBase;
			UEOSCommunityInfoBase* _pcEOSCommunityInfo;
			UEOSCommunityUserBase* _pcEOSLobbyUser;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enEOSCommunityEvent_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enEOSCommunityEvent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcEOSCommunityBase;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcEOSCommunityInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcEOSLobbyUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_OnCommunityEventForHostMigration_Statics::NewProp__enEOSCommunityEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_OnCommunityEventForHostMigration_Statics::NewProp__enEOSCommunityEvent = { "_enEOSCommunityEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFHostMigration_eventOnCommunityEventForHostMigration_Parms, _enEOSCommunityEvent), Z_Construct_UEnum_yEOSSDK_EEOSCommunityEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_OnCommunityEventForHostMigration_Statics::NewProp__pcEOSCommunityBase = { "_pcEOSCommunityBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFHostMigration_eventOnCommunityEventForHostMigration_Parms, _pcEOSCommunityBase), Z_Construct_UClass_UEOSCommunityBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_OnCommunityEventForHostMigration_Statics::NewProp__pcEOSCommunityInfo = { "_pcEOSCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFHostMigration_eventOnCommunityEventForHostMigration_Parms, _pcEOSCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_OnCommunityEventForHostMigration_Statics::NewProp__pcEOSLobbyUser = { "_pcEOSLobbyUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFHostMigration_eventOnCommunityEventForHostMigration_Parms, _pcEOSLobbyUser), Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_OnCommunityEventForHostMigration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_OnCommunityEventForHostMigration_Statics::NewProp__enEOSCommunityEvent_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_OnCommunityEventForHostMigration_Statics::NewProp__enEOSCommunityEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_OnCommunityEventForHostMigration_Statics::NewProp__pcEOSCommunityBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_OnCommunityEventForHostMigration_Statics::NewProp__pcEOSCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_OnCommunityEventForHostMigration_Statics::NewProp__pcEOSLobbyUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_OnCommunityEventForHostMigration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFHostMigration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_OnCommunityEventForHostMigration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFHostMigration, nullptr, "OnCommunityEventForHostMigration", nullptr, nullptr, sizeof(EOSSessionP2PAFHostMigration_eventOnCommunityEventForHostMigration_Parms), Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_OnCommunityEventForHostMigration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_OnCommunityEventForHostMigration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_OnCommunityEventForHostMigration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_OnCommunityEventForHostMigration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_OnCommunityEventForHostMigration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_OnCommunityEventForHostMigration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_OnCommunitySearchResultEvent_Statics
	{
		struct EOSSessionP2PAFHostMigration_eventOnCommunitySearchResultEvent_Parms
		{
			UEOSCommunityBase* _pcEOSCommunityBase;
			UEOSSearchResultsBase* _pcEOSSearchResultsBase;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcEOSCommunityBase;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcEOSSearchResultsBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_OnCommunitySearchResultEvent_Statics::NewProp__pcEOSCommunityBase = { "_pcEOSCommunityBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFHostMigration_eventOnCommunitySearchResultEvent_Parms, _pcEOSCommunityBase), Z_Construct_UClass_UEOSCommunityBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_OnCommunitySearchResultEvent_Statics::NewProp__pcEOSSearchResultsBase = { "_pcEOSSearchResultsBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFHostMigration_eventOnCommunitySearchResultEvent_Parms, _pcEOSSearchResultsBase), Z_Construct_UClass_UEOSSearchResultsBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_OnCommunitySearchResultEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_OnCommunitySearchResultEvent_Statics::NewProp__pcEOSCommunityBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_OnCommunitySearchResultEvent_Statics::NewProp__pcEOSSearchResultsBase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_OnCommunitySearchResultEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFHostMigration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_OnCommunitySearchResultEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFHostMigration, nullptr, "OnCommunitySearchResultEvent", nullptr, nullptr, sizeof(EOSSessionP2PAFHostMigration_eventOnCommunitySearchResultEvent_Parms), Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_OnCommunitySearchResultEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_OnCommunitySearchResultEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_OnCommunitySearchResultEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_OnCommunitySearchResultEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_OnCommunitySearchResultEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_OnCommunitySearchResultEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_Reset_Statics
	{
		struct EOSSessionP2PAFHostMigration_eventReset_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_Reset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PAFHostMigration_eventReset_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_Reset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PAFHostMigration_eventReset_Parms), &Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_Reset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_Reset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_Reset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFHostMigration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFHostMigration, nullptr, "Reset", nullptr, nullptr, sizeof(EOSSessionP2PAFHostMigration_eventReset_Parms), Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_Reset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_Reset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SendHostMigrationPacket_Statics
	{
		struct EOSSessionP2PAFHostMigration_eventSendHostMigrationPacket_Parms
		{
			EEOSSessionHostMigrationType _enType;
			EEOSSessionHostMigrationStep _enStep;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enStep_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enStep;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SendHostMigrationPacket_Statics::NewProp__enType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SendHostMigrationPacket_Statics::NewProp__enType = { "_enType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFHostMigration_eventSendHostMigrationPacket_Parms, _enType), Z_Construct_UEnum_yEOSSDK_EEOSSessionHostMigrationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SendHostMigrationPacket_Statics::NewProp__enStep_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SendHostMigrationPacket_Statics::NewProp__enStep = { "_enStep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFHostMigration_eventSendHostMigrationPacket_Parms, _enStep), Z_Construct_UEnum_yEOSSDK_EEOSSessionHostMigrationStep, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SendHostMigrationPacket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PAFHostMigration_eventSendHostMigrationPacket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SendHostMigrationPacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PAFHostMigration_eventSendHostMigrationPacket_Parms), &Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SendHostMigrationPacket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SendHostMigrationPacket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SendHostMigrationPacket_Statics::NewProp__enType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SendHostMigrationPacket_Statics::NewProp__enType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SendHostMigrationPacket_Statics::NewProp__enStep_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SendHostMigrationPacket_Statics::NewProp__enStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SendHostMigrationPacket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SendHostMigrationPacket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFHostMigration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SendHostMigrationPacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFHostMigration, nullptr, "SendHostMigrationPacket", nullptr, nullptr, sizeof(EOSSessionP2PAFHostMigration_eventSendHostMigrationPacket_Parms), Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SendHostMigrationPacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SendHostMigrationPacket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SendHostMigrationPacket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SendHostMigrationPacket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SendHostMigrationPacket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SendHostMigrationPacket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SendLatencyInfo_Statics
	{
		struct EOSSessionP2PAFHostMigration_eventSendLatencyInfo_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SendLatencyInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PAFHostMigration_eventSendLatencyInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SendLatencyInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PAFHostMigration_eventSendLatencyInfo_Parms), &Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SendLatencyInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SendLatencyInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SendLatencyInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SendLatencyInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFHostMigration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SendLatencyInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFHostMigration, nullptr, "SendLatencyInfo", nullptr, nullptr, sizeof(EOSSessionP2PAFHostMigration_eventSendLatencyInfo_Parms), Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SendLatencyInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SendLatencyInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SendLatencyInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SendLatencyInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SendLatencyInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SendLatencyInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetActiveObserver_Statics
	{
		struct EOSSessionP2PAFHostMigration_eventSetActiveObserver_Parms
		{
			bool _bActivate;
			bool ReturnValue;
		};
		static void NewProp__bActivate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bActivate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetActiveObserver_Statics::NewProp__bActivate_SetBit(void* Obj)
	{
		((EOSSessionP2PAFHostMigration_eventSetActiveObserver_Parms*)Obj)->_bActivate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetActiveObserver_Statics::NewProp__bActivate = { "_bActivate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PAFHostMigration_eventSetActiveObserver_Parms), &Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetActiveObserver_Statics::NewProp__bActivate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetActiveObserver_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PAFHostMigration_eventSetActiveObserver_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetActiveObserver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PAFHostMigration_eventSetActiveObserver_Parms), &Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetActiveObserver_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetActiveObserver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetActiveObserver_Statics::NewProp__bActivate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetActiveObserver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetActiveObserver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFHostMigration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetActiveObserver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFHostMigration, nullptr, "SetActiveObserver", nullptr, nullptr, sizeof(EOSSessionP2PAFHostMigration_eventSetActiveObserver_Parms), Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetActiveObserver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetActiveObserver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetActiveObserver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetActiveObserver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetActiveObserver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetActiveObserver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetActiveSessionSetting_Statics
	{
		struct EOSSessionP2PAFHostMigration_eventSetActiveSessionSetting_Parms
		{
			FEOSSessionSettings _stSessionSession;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stSessionSession_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stSessionSession;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetActiveSessionSetting_Statics::NewProp__stSessionSession_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetActiveSessionSetting_Statics::NewProp__stSessionSession = { "_stSessionSession", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFHostMigration_eventSetActiveSessionSetting_Parms, _stSessionSession), Z_Construct_UScriptStruct_FEOSSessionSettings, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetActiveSessionSetting_Statics::NewProp__stSessionSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetActiveSessionSetting_Statics::NewProp__stSessionSession_MetaData)) };
	void Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetActiveSessionSetting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PAFHostMigration_eventSetActiveSessionSetting_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetActiveSessionSetting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PAFHostMigration_eventSetActiveSessionSetting_Parms), &Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetActiveSessionSetting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetActiveSessionSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetActiveSessionSetting_Statics::NewProp__stSessionSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetActiveSessionSetting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetActiveSessionSetting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFHostMigration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetActiveSessionSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFHostMigration, nullptr, "SetActiveSessionSetting", nullptr, nullptr, sizeof(EOSSessionP2PAFHostMigration_eventSetActiveSessionSetting_Parms), Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetActiveSessionSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetActiveSessionSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetActiveSessionSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetActiveSessionSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetActiveSessionSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetActiveSessionSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetRetryParams_Statics
	{
		struct EOSSessionP2PAFHostMigration_eventSetRetryParams_Parms
		{
			int32 _sRetryCountForAPI;
			int32 _sRetryCountForRequestStatus;
			float _fTimerInterval;
			float _fRetryInterval;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sRetryCountForAPI;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sRetryCountForRequestStatus;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__fTimerInterval;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__fRetryInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetRetryParams_Statics::NewProp__sRetryCountForAPI = { "_sRetryCountForAPI", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFHostMigration_eventSetRetryParams_Parms, _sRetryCountForAPI), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetRetryParams_Statics::NewProp__sRetryCountForRequestStatus = { "_sRetryCountForRequestStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFHostMigration_eventSetRetryParams_Parms, _sRetryCountForRequestStatus), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetRetryParams_Statics::NewProp__fTimerInterval = { "_fTimerInterval", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFHostMigration_eventSetRetryParams_Parms, _fTimerInterval), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetRetryParams_Statics::NewProp__fRetryInterval = { "_fRetryInterval", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFHostMigration_eventSetRetryParams_Parms, _fRetryInterval), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetRetryParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetRetryParams_Statics::NewProp__sRetryCountForAPI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetRetryParams_Statics::NewProp__sRetryCountForRequestStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetRetryParams_Statics::NewProp__fTimerInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetRetryParams_Statics::NewProp__fRetryInterval,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetRetryParams_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFHostMigration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetRetryParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFHostMigration, nullptr, "SetRetryParams", nullptr, nullptr, sizeof(EOSSessionP2PAFHostMigration_eventSetRetryParams_Parms), Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetRetryParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetRetryParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetRetryParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetRetryParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetRetryParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetRetryParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSSessionP2PAFHostMigration_NoRegister()
	{
		return UEOSSessionP2PAFHostMigration::StaticClass();
	}
	struct Z_Construct_UClass_UEOSSessionP2PAFHostMigration_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcLatencyInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcLatencyInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcNextHostUserPacketMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcNextHostUserPacketMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcSessionInfoOld_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcSessionInfoOld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcSessionInfoNext_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcSessionInfoNext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcCheckForHostSession_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcCheckForHostSession;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSSessionP2PAFHostMigration_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSSessionP2PAdditionalFunctionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSSessionP2PAFHostMigration_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionInfoForAfter, "GetEOSSessionInfoForAfter" }, // 4014152483
		{ &Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionInfoForBefore, "GetEOSSessionInfoForBefore" }, // 3107191255
		{ &Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionP2PLatencyInfoPacket, "GetEOSSessionP2PLatencyInfoPacket" }, // 1238028494
		{ &Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetEOSSessionUserPacketMapForNextHost, "GetEOSSessionUserPacketMapForNextHost" }, // 551014641
		{ &Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostMigrationClientResultType, "GetHostMigrationClientResultType" }, // 1270466965
		{ &Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostMigrationStep, "GetHostMigrationStep" }, // 1902952712
		{ &Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetHostPriority, "GetHostPriority" }, // 2199192710
		{ &Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetMaxRetryToRquestAPICount, "GetMaxRetryToRquestAPICount" }, // 12376117
		{ &Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetMaxUpdateStateRequestRetryCount, "GetMaxUpdateStateRequestRetryCount" }, // 3882216514
		{ &Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetNextHostProductUserID, "GetNextHostProductUserID" }, // 847840080
		{ &Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetNextHostUserPacketMap, "GetNextHostUserPacketMap" }, // 2205638924
		{ &Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetRetryToRquestAPICount, "GetRetryToRquestAPICount" }, // 950621747
		{ &Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetSessionSettings, "GetSessionSettings" }, // 3161971166
		{ &Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetUpdateStateRequestRetryCount, "GetUpdateStateRequestRetryCount" }, // 4281289505
		{ &Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_GetWaitMemberNum, "GetWaitMemberNum" }, // 3559680797
		{ &Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsActiveObserver, "IsActiveObserver" }, // 579528049
		{ &Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsMigratingNow, "IsMigratingNow" }, // 912852509
		{ &Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_IsNextHostOfTheMe, "IsNextHostOfTheMe" }, // 2072732740
		{ &Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_OnCommunityEventForHostMigration, "OnCommunityEventForHostMigration" }, // 724412070
		{ &Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_OnCommunitySearchResultEvent, "OnCommunitySearchResultEvent" }, // 4233804626
		{ &Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_Reset, "Reset" }, // 3295414101
		{ &Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SendHostMigrationPacket, "SendHostMigrationPacket" }, // 3241067428
		{ &Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SendLatencyInfo, "SendLatencyInfo" }, // 1766603914
		{ &Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetActiveObserver, "SetActiveObserver" }, // 1702017039
		{ &Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetActiveSessionSetting, "SetActiveSessionSetting" }, // 3180216518
		{ &Z_Construct_UFunction_UEOSSessionP2PAFHostMigration_SetRetryParams, "SetRetryParams" }, // 2420145131
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2PAFHostMigration_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSSessionP2PAFHostMigration.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFHostMigration.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2PAFHostMigration_Statics::NewProp_m_pcLatencyInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2PAFHostMigration" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFHostMigration.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSSessionP2PAFHostMigration_Statics::NewProp_m_pcLatencyInfo = { "m_pcLatencyInfo", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSessionP2PAFHostMigration, m_pcLatencyInfo), Z_Construct_UClass_UEOSSessionP2PLatencyInfoPacket_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2PAFHostMigration_Statics::NewProp_m_pcLatencyInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2PAFHostMigration_Statics::NewProp_m_pcLatencyInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2PAFHostMigration_Statics::NewProp_m_pcNextHostUserPacketMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2PAFHostMigration" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFHostMigration.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSSessionP2PAFHostMigration_Statics::NewProp_m_pcNextHostUserPacketMap = { "m_pcNextHostUserPacketMap", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSessionP2PAFHostMigration, m_pcNextHostUserPacketMap), Z_Construct_UClass_UEOSSessionUserPacketMap_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2PAFHostMigration_Statics::NewProp_m_pcNextHostUserPacketMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2PAFHostMigration_Statics::NewProp_m_pcNextHostUserPacketMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2PAFHostMigration_Statics::NewProp_m_pcSessionInfoOld_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2PAFHostMigration" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFHostMigration.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSSessionP2PAFHostMigration_Statics::NewProp_m_pcSessionInfoOld = { "m_pcSessionInfoOld", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSessionP2PAFHostMigration, m_pcSessionInfoOld), Z_Construct_UClass_UEOSSessionInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2PAFHostMigration_Statics::NewProp_m_pcSessionInfoOld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2PAFHostMigration_Statics::NewProp_m_pcSessionInfoOld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2PAFHostMigration_Statics::NewProp_m_pcSessionInfoNext_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2PAFHostMigration" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFHostMigration.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSSessionP2PAFHostMigration_Statics::NewProp_m_pcSessionInfoNext = { "m_pcSessionInfoNext", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSessionP2PAFHostMigration, m_pcSessionInfoNext), Z_Construct_UClass_UEOSSessionInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2PAFHostMigration_Statics::NewProp_m_pcSessionInfoNext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2PAFHostMigration_Statics::NewProp_m_pcSessionInfoNext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2PAFHostMigration_Statics::NewProp_m_pcCheckForHostSession_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2PAFHostMigration" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFHostMigration.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSSessionP2PAFHostMigration_Statics::NewProp_m_pcCheckForHostSession = { "m_pcCheckForHostSession", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSessionP2PAFHostMigration, m_pcCheckForHostSession), Z_Construct_UClass_UEOSSessionSearchResults_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2PAFHostMigration_Statics::NewProp_m_pcCheckForHostSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2PAFHostMigration_Statics::NewProp_m_pcCheckForHostSession_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSSessionP2PAFHostMigration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionP2PAFHostMigration_Statics::NewProp_m_pcLatencyInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionP2PAFHostMigration_Statics::NewProp_m_pcNextHostUserPacketMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionP2PAFHostMigration_Statics::NewProp_m_pcSessionInfoOld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionP2PAFHostMigration_Statics::NewProp_m_pcSessionInfoNext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionP2PAFHostMigration_Statics::NewProp_m_pcCheckForHostSession,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSSessionP2PAFHostMigration_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSSessionP2PAFHostMigration>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSSessionP2PAFHostMigration_Statics::ClassParams = {
		&UEOSSessionP2PAFHostMigration::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSSessionP2PAFHostMigration_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2PAFHostMigration_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2PAFHostMigration_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2PAFHostMigration_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSSessionP2PAFHostMigration()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSSessionP2PAFHostMigration_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSSessionP2PAFHostMigration, 3283276175);
	template<> YEOSSDK_API UClass* StaticClass<UEOSSessionP2PAFHostMigration>()
	{
		return UEOSSessionP2PAFHostMigration::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSSessionP2PAFHostMigration(Z_Construct_UClass_UEOSSessionP2PAFHostMigration, &UEOSSessionP2PAFHostMigration::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSSessionP2PAFHostMigration"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSSessionP2PAFHostMigration);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
