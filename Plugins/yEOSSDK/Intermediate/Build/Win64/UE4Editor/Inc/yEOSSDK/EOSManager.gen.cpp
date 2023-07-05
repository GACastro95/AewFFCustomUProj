// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSManager() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSManager_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSManager();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSInstanceManagerBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAchievement_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAntiCheatClient_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAntiCheatDedicatedServer_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAuth_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLeaderboard_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2P_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSReports_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSanctions_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSStats_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSVoice_NoRegister();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSApplicationStatus();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSFileAccessor_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLobby_NoRegister();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSNetworkStatus();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSRelayControl();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSession_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSTitleStorage_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserManager_NoRegister();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSProductSetting();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSEngineAPIVersionSettings();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSDKLogLevel();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSUpdateType();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAPIRequestManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEOSManager::execConfirmNetworkRequest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConfirmNetworkRequest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSManager::execCreateAchievement)
	{
		P_GET_OBJECT(UEOSUserBase,Z_Param__pOwnerUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSAchievement**)Z_Param__Result=P_THIS->CreateAchievement(Z_Param__pOwnerUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSManager::execCreateAntiCheatClient)
	{
		P_GET_OBJECT(UEOSUserBase,Z_Param__pOwnerUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSAntiCheatClient**)Z_Param__Result=P_THIS->CreateAntiCheatClient(Z_Param__pOwnerUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSManager::execCreateAntiCheatServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSAntiCheatDedicatedServer**)Z_Param__Result=P_THIS->CreateAntiCheatServer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSManager::execCreateAuth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSAuth**)Z_Param__Result=P_THIS->CreateAuth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSManager::execCreateEOSManager)
	{
		P_GET_OBJECT_REF(UEOSManager,Z_Param_Out_EOSManager);
		P_GET_PROPERTY(FByteProperty,Z_Param__uInstanceID);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEOSManager::CreateEOSManager(Z_Param_Out_EOSManager,Z_Param__uInstanceID,Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSManager::execCreateLeaderboard)
	{
		P_GET_OBJECT(UEOSUserBase,Z_Param__pOwnerUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSLeaderboard**)Z_Param__Result=P_THIS->CreateLeaderboard(Z_Param__pOwnerUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSManager::execCreateNatP2P)
	{
		P_GET_OBJECT(UEOSUserBase,Z_Param__pOwnerUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSNatP2P**)Z_Param__Result=P_THIS->CreateNatP2P(Z_Param__pOwnerUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSManager::execCreateReports)
	{
		P_GET_OBJECT(UEOSUserBase,Z_Param__pOwnerUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSReports**)Z_Param__Result=P_THIS->CreateReports(Z_Param__pOwnerUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSManager::execCreateSanctions)
	{
		P_GET_OBJECT(UEOSUserBase,Z_Param__pOwnerUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSSanctions**)Z_Param__Result=P_THIS->CreateSanctions(Z_Param__pOwnerUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSManager::execCreateStats)
	{
		P_GET_OBJECT(UEOSUserBase,Z_Param__pOwnerUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSStats**)Z_Param__Result=P_THIS->CreateStats(Z_Param__pOwnerUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSManager::execCreateVoice)
	{
		P_GET_OBJECT(UEOSUserBase,Z_Param__pOwnerUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSVoice**)Z_Param__Result=P_THIS->CreateVoice(Z_Param__pOwnerUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSManager::execGetApplicationStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSApplicationStatus*)Z_Param__Result=P_THIS->GetApplicationStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSManager::execGetDesktopCrossplayStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDesktopCrossplayStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSManager::execGetFileAccessor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSFileAccessor**)Z_Param__Result=P_THIS->GetFileAccessor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSManager::execGetLobby)
	{
		P_GET_OBJECT(UEOSUserBase,Z_Param__pOwnerUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSLobby**)Z_Param__Result=P_THIS->GetLobby(Z_Param__pOwnerUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSManager::execGetNetworkStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSNetworkStatus*)Z_Param__Result=P_THIS->GetNetworkStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSManager::execGetPortRange)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Port);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Range);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPortRange(Z_Param_Out_Port,Z_Param_Out_Range);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSManager::execGetRelayControl)
	{
		P_GET_ENUM_REF(EEOSRelayControl,Z_Param_Out_RelayControl);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetRelayControl((EEOSRelayControl&)(Z_Param_Out_RelayControl));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSManager::execGetSession)
	{
		P_GET_OBJECT(UEOSUserBase,Z_Param__pOwnerUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSSession**)Z_Param__Result=P_THIS->GetSession(Z_Param__pOwnerUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSManager::execGetTitleStorage)
	{
		P_GET_OBJECT(UEOSUserBase,Z_Param__pOwnerUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSTitleStorage**)Z_Param__Result=P_THIS->GetTitleStorage(Z_Param__pOwnerUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSManager::execGetUserManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSUserManager**)Z_Param__Result=P_THIS->GetUserManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSManager::execInitialize)
	{
		P_GET_STRUCT(FEOSProductSetting,Z_Param__stSetting);
		P_GET_PROPERTY(FStrProperty,Z_Param__strEncryptKey);
		P_GET_PROPERTY(FStrProperty,Z_Param__strCacheDirPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Initialize(Z_Param__stSetting,Z_Param__strEncryptKey,Z_Param__strCacheDirPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSManager::execInitSDK)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strGameName);
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductVersion);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InitSDK(Z_Param__strGameName,Z_Param__strProductVersion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSManager::execIsValidHandle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidHandle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSManager::execReleaseSDK)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReleaseSDK();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSManager::execSetActiveAuth)
	{
		P_GET_OBJECT(UEOSAuth,Z_Param__pcEOSAuth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveAuth(Z_Param__pcEOSAuth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSManager::execSetApiVersion)
	{
		P_GET_STRUCT(FEOSEngineAPIVersionSettings,Z_Param__stAPIVerSetting);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEOSManager::SetApiVersion(Z_Param__stAPIVerSetting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSManager::execSetApplicationStatus)
	{
		P_GET_ENUM(EEOSApplicationStatus,Z_Param_Status);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetApplicationStatus(EEOSApplicationStatus(Z_Param_Status));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSManager::execSetNetworkStatus)
	{
		P_GET_ENUM(EEOSNetworkStatus,Z_Param_Status);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetNetworkStatus(EEOSNetworkStatus(Z_Param_Status));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSManager::execSetPortRange)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Port);
		P_GET_PROPERTY(FIntProperty,Z_Param_Range);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetPortRange(Z_Param_Port,Z_Param_Range);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSManager::execSetRelayControl)
	{
		P_GET_ENUM(EEOSRelayControl,Z_Param_RelayControl);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetRelayControl(EEOSRelayControl(Z_Param_RelayControl));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSManager::execSetSDKLogLevel)
	{
		P_GET_ENUM(EEOSSDKLogLevel,Z_Param__enSDKLogLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEOSManager::SetSDKLogLevel(EEOSSDKLogLevel(Z_Param__enSDKLogLevel));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSManager::execSetupAntiCheat)
	{
		P_GET_OBJECT(UEOSUserBase,Z_Param__pOwnerUser);
		P_GET_UBOOL(Z_Param_isClient);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetupAntiCheat(Z_Param__pOwnerUser,Z_Param_isClient);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSManager::execSetUpdateType)
	{
		P_GET_ENUM(EEOSUpdateType,Z_Param__enType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetUpdateType(EEOSUpdateType(Z_Param__enType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSManager::execUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Update();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSManager::execUpdateForDispose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateForDispose();
		P_NATIVE_END;
	}
	void UEOSManager::StaticRegisterNativesUEOSManager()
	{
		UClass* Class = UEOSManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConfirmNetworkRequest", &UEOSManager::execConfirmNetworkRequest },
			{ "CreateAchievement", &UEOSManager::execCreateAchievement },
			{ "CreateAntiCheatClient", &UEOSManager::execCreateAntiCheatClient },
			{ "CreateAntiCheatServer", &UEOSManager::execCreateAntiCheatServer },
			{ "CreateAuth", &UEOSManager::execCreateAuth },
			{ "CreateEOSManager", &UEOSManager::execCreateEOSManager },
			{ "CreateLeaderboard", &UEOSManager::execCreateLeaderboard },
			{ "CreateNatP2P", &UEOSManager::execCreateNatP2P },
			{ "CreateReports", &UEOSManager::execCreateReports },
			{ "CreateSanctions", &UEOSManager::execCreateSanctions },
			{ "CreateStats", &UEOSManager::execCreateStats },
			{ "CreateVoice", &UEOSManager::execCreateVoice },
			{ "GetApplicationStatus", &UEOSManager::execGetApplicationStatus },
			{ "GetDesktopCrossplayStatus", &UEOSManager::execGetDesktopCrossplayStatus },
			{ "GetFileAccessor", &UEOSManager::execGetFileAccessor },
			{ "GetLobby", &UEOSManager::execGetLobby },
			{ "GetNetworkStatus", &UEOSManager::execGetNetworkStatus },
			{ "GetPortRange", &UEOSManager::execGetPortRange },
			{ "GetRelayControl", &UEOSManager::execGetRelayControl },
			{ "GetSession", &UEOSManager::execGetSession },
			{ "GetTitleStorage", &UEOSManager::execGetTitleStorage },
			{ "GetUserManager", &UEOSManager::execGetUserManager },
			{ "Initialize", &UEOSManager::execInitialize },
			{ "InitSDK", &UEOSManager::execInitSDK },
			{ "IsValidHandle", &UEOSManager::execIsValidHandle },
			{ "ReleaseSDK", &UEOSManager::execReleaseSDK },
			{ "SetActiveAuth", &UEOSManager::execSetActiveAuth },
			{ "SetApiVersion", &UEOSManager::execSetApiVersion },
			{ "SetApplicationStatus", &UEOSManager::execSetApplicationStatus },
			{ "SetNetworkStatus", &UEOSManager::execSetNetworkStatus },
			{ "SetPortRange", &UEOSManager::execSetPortRange },
			{ "SetRelayControl", &UEOSManager::execSetRelayControl },
			{ "SetSDKLogLevel", &UEOSManager::execSetSDKLogLevel },
			{ "SetupAntiCheat", &UEOSManager::execSetupAntiCheat },
			{ "SetUpdateType", &UEOSManager::execSetUpdateType },
			{ "Update", &UEOSManager::execUpdate },
			{ "UpdateForDispose", &UEOSManager::execUpdateForDispose },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSManager_ConfirmNetworkRequest_Statics
	{
		struct EOSManager_eventConfirmNetworkRequest_Parms
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
	void Z_Construct_UFunction_UEOSManager_ConfirmNetworkRequest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSManager_eventConfirmNetworkRequest_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSManager_ConfirmNetworkRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSManager_eventConfirmNetworkRequest_Parms), &Z_Construct_UFunction_UEOSManager_ConfirmNetworkRequest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSManager_ConfirmNetworkRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_ConfirmNetworkRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_ConfirmNetworkRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSManager_ConfirmNetworkRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSManager, nullptr, "ConfirmNetworkRequest", nullptr, nullptr, sizeof(EOSManager_eventConfirmNetworkRequest_Parms), Z_Construct_UFunction_UEOSManager_ConfirmNetworkRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_ConfirmNetworkRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_ConfirmNetworkRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_ConfirmNetworkRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSManager_ConfirmNetworkRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSManager_ConfirmNetworkRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSManager_CreateAchievement_Statics
	{
		struct EOSManager_eventCreateAchievement_Parms
		{
			UEOSUserBase* _pOwnerUser;
			UEOSAchievement* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pOwnerUser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSManager_CreateAchievement_Statics::NewProp__pOwnerUser = { "_pOwnerUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventCreateAchievement_Parms, _pOwnerUser), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSManager_CreateAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventCreateAchievement_Parms, ReturnValue), Z_Construct_UClass_UEOSAchievement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSManager_CreateAchievement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_CreateAchievement_Statics::NewProp__pOwnerUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_CreateAchievement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_CreateAchievement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSManager_CreateAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSManager, nullptr, "CreateAchievement", nullptr, nullptr, sizeof(EOSManager_eventCreateAchievement_Parms), Z_Construct_UFunction_UEOSManager_CreateAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_CreateAchievement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_CreateAchievement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_CreateAchievement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSManager_CreateAchievement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSManager_CreateAchievement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSManager_CreateAntiCheatClient_Statics
	{
		struct EOSManager_eventCreateAntiCheatClient_Parms
		{
			UEOSUserBase* _pOwnerUser;
			UEOSAntiCheatClient* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pOwnerUser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSManager_CreateAntiCheatClient_Statics::NewProp__pOwnerUser = { "_pOwnerUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventCreateAntiCheatClient_Parms, _pOwnerUser), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSManager_CreateAntiCheatClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventCreateAntiCheatClient_Parms, ReturnValue), Z_Construct_UClass_UEOSAntiCheatClient_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSManager_CreateAntiCheatClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_CreateAntiCheatClient_Statics::NewProp__pOwnerUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_CreateAntiCheatClient_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_CreateAntiCheatClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSManager_CreateAntiCheatClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSManager, nullptr, "CreateAntiCheatClient", nullptr, nullptr, sizeof(EOSManager_eventCreateAntiCheatClient_Parms), Z_Construct_UFunction_UEOSManager_CreateAntiCheatClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_CreateAntiCheatClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_CreateAntiCheatClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_CreateAntiCheatClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSManager_CreateAntiCheatClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSManager_CreateAntiCheatClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSManager_CreateAntiCheatServer_Statics
	{
		struct EOSManager_eventCreateAntiCheatServer_Parms
		{
			UEOSAntiCheatDedicatedServer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSManager_CreateAntiCheatServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventCreateAntiCheatServer_Parms, ReturnValue), Z_Construct_UClass_UEOSAntiCheatDedicatedServer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSManager_CreateAntiCheatServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_CreateAntiCheatServer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_CreateAntiCheatServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSManager_CreateAntiCheatServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSManager, nullptr, "CreateAntiCheatServer", nullptr, nullptr, sizeof(EOSManager_eventCreateAntiCheatServer_Parms), Z_Construct_UFunction_UEOSManager_CreateAntiCheatServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_CreateAntiCheatServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_CreateAntiCheatServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_CreateAntiCheatServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSManager_CreateAntiCheatServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSManager_CreateAntiCheatServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSManager_CreateAuth_Statics
	{
		struct EOSManager_eventCreateAuth_Parms
		{
			UEOSAuth* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSManager_CreateAuth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventCreateAuth_Parms, ReturnValue), Z_Construct_UClass_UEOSAuth_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSManager_CreateAuth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_CreateAuth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_CreateAuth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSManager_CreateAuth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSManager, nullptr, "CreateAuth", nullptr, nullptr, sizeof(EOSManager_eventCreateAuth_Parms), Z_Construct_UFunction_UEOSManager_CreateAuth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_CreateAuth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_CreateAuth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_CreateAuth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSManager_CreateAuth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSManager_CreateAuth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSManager_CreateEOSManager_Statics
	{
		struct EOSManager_eventCreateEOSManager_Parms
		{
			UEOSManager* EOSManager;
			uint8 _uInstanceID;
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EOSManager;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__uInstanceID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSManager_CreateEOSManager_Statics::NewProp_EOSManager = { "EOSManager", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventCreateEOSManager_Parms, EOSManager), Z_Construct_UClass_UEOSManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSManager_CreateEOSManager_Statics::NewProp__uInstanceID = { "_uInstanceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventCreateEOSManager_Parms, _uInstanceID), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSManager_CreateEOSManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventCreateEOSManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSManager_CreateEOSManager_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSManager_eventCreateEOSManager_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSManager_CreateEOSManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSManager_eventCreateEOSManager_Parms), &Z_Construct_UFunction_UEOSManager_CreateEOSManager_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSManager_CreateEOSManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_CreateEOSManager_Statics::NewProp_EOSManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_CreateEOSManager_Statics::NewProp__uInstanceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_CreateEOSManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_CreateEOSManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_CreateEOSManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSManager_CreateEOSManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSManager, nullptr, "CreateEOSManager", nullptr, nullptr, sizeof(EOSManager_eventCreateEOSManager_Parms), Z_Construct_UFunction_UEOSManager_CreateEOSManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_CreateEOSManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_CreateEOSManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_CreateEOSManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSManager_CreateEOSManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSManager_CreateEOSManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSManager_CreateLeaderboard_Statics
	{
		struct EOSManager_eventCreateLeaderboard_Parms
		{
			UEOSUserBase* _pOwnerUser;
			UEOSLeaderboard* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pOwnerUser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSManager_CreateLeaderboard_Statics::NewProp__pOwnerUser = { "_pOwnerUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventCreateLeaderboard_Parms, _pOwnerUser), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSManager_CreateLeaderboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventCreateLeaderboard_Parms, ReturnValue), Z_Construct_UClass_UEOSLeaderboard_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSManager_CreateLeaderboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_CreateLeaderboard_Statics::NewProp__pOwnerUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_CreateLeaderboard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_CreateLeaderboard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSManager_CreateLeaderboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSManager, nullptr, "CreateLeaderboard", nullptr, nullptr, sizeof(EOSManager_eventCreateLeaderboard_Parms), Z_Construct_UFunction_UEOSManager_CreateLeaderboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_CreateLeaderboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_CreateLeaderboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_CreateLeaderboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSManager_CreateLeaderboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSManager_CreateLeaderboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSManager_CreateNatP2P_Statics
	{
		struct EOSManager_eventCreateNatP2P_Parms
		{
			UEOSUserBase* _pOwnerUser;
			UEOSNatP2P* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pOwnerUser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSManager_CreateNatP2P_Statics::NewProp__pOwnerUser = { "_pOwnerUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventCreateNatP2P_Parms, _pOwnerUser), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSManager_CreateNatP2P_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventCreateNatP2P_Parms, ReturnValue), Z_Construct_UClass_UEOSNatP2P_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSManager_CreateNatP2P_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_CreateNatP2P_Statics::NewProp__pOwnerUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_CreateNatP2P_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_CreateNatP2P_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSManager_CreateNatP2P_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSManager, nullptr, "CreateNatP2P", nullptr, nullptr, sizeof(EOSManager_eventCreateNatP2P_Parms), Z_Construct_UFunction_UEOSManager_CreateNatP2P_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_CreateNatP2P_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_CreateNatP2P_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_CreateNatP2P_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSManager_CreateNatP2P()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSManager_CreateNatP2P_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSManager_CreateReports_Statics
	{
		struct EOSManager_eventCreateReports_Parms
		{
			UEOSUserBase* _pOwnerUser;
			UEOSReports* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pOwnerUser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSManager_CreateReports_Statics::NewProp__pOwnerUser = { "_pOwnerUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventCreateReports_Parms, _pOwnerUser), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSManager_CreateReports_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventCreateReports_Parms, ReturnValue), Z_Construct_UClass_UEOSReports_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSManager_CreateReports_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_CreateReports_Statics::NewProp__pOwnerUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_CreateReports_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_CreateReports_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSManager_CreateReports_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSManager, nullptr, "CreateReports", nullptr, nullptr, sizeof(EOSManager_eventCreateReports_Parms), Z_Construct_UFunction_UEOSManager_CreateReports_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_CreateReports_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_CreateReports_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_CreateReports_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSManager_CreateReports()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSManager_CreateReports_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSManager_CreateSanctions_Statics
	{
		struct EOSManager_eventCreateSanctions_Parms
		{
			UEOSUserBase* _pOwnerUser;
			UEOSSanctions* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pOwnerUser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSManager_CreateSanctions_Statics::NewProp__pOwnerUser = { "_pOwnerUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventCreateSanctions_Parms, _pOwnerUser), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSManager_CreateSanctions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventCreateSanctions_Parms, ReturnValue), Z_Construct_UClass_UEOSSanctions_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSManager_CreateSanctions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_CreateSanctions_Statics::NewProp__pOwnerUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_CreateSanctions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_CreateSanctions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSManager_CreateSanctions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSManager, nullptr, "CreateSanctions", nullptr, nullptr, sizeof(EOSManager_eventCreateSanctions_Parms), Z_Construct_UFunction_UEOSManager_CreateSanctions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_CreateSanctions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_CreateSanctions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_CreateSanctions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSManager_CreateSanctions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSManager_CreateSanctions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSManager_CreateStats_Statics
	{
		struct EOSManager_eventCreateStats_Parms
		{
			UEOSUserBase* _pOwnerUser;
			UEOSStats* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pOwnerUser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSManager_CreateStats_Statics::NewProp__pOwnerUser = { "_pOwnerUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventCreateStats_Parms, _pOwnerUser), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSManager_CreateStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventCreateStats_Parms, ReturnValue), Z_Construct_UClass_UEOSStats_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSManager_CreateStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_CreateStats_Statics::NewProp__pOwnerUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_CreateStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_CreateStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSManager_CreateStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSManager, nullptr, "CreateStats", nullptr, nullptr, sizeof(EOSManager_eventCreateStats_Parms), Z_Construct_UFunction_UEOSManager_CreateStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_CreateStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_CreateStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_CreateStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSManager_CreateStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSManager_CreateStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSManager_CreateVoice_Statics
	{
		struct EOSManager_eventCreateVoice_Parms
		{
			UEOSUserBase* _pOwnerUser;
			UEOSVoice* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pOwnerUser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSManager_CreateVoice_Statics::NewProp__pOwnerUser = { "_pOwnerUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventCreateVoice_Parms, _pOwnerUser), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSManager_CreateVoice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventCreateVoice_Parms, ReturnValue), Z_Construct_UClass_UEOSVoice_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSManager_CreateVoice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_CreateVoice_Statics::NewProp__pOwnerUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_CreateVoice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_CreateVoice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSManager_CreateVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSManager, nullptr, "CreateVoice", nullptr, nullptr, sizeof(EOSManager_eventCreateVoice_Parms), Z_Construct_UFunction_UEOSManager_CreateVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_CreateVoice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_CreateVoice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_CreateVoice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSManager_CreateVoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSManager_CreateVoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSManager_GetApplicationStatus_Statics
	{
		struct EOSManager_eventGetApplicationStatus_Parms
		{
			EEOSApplicationStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSManager_GetApplicationStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSManager_GetApplicationStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventGetApplicationStatus_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSApplicationStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSManager_GetApplicationStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_GetApplicationStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_GetApplicationStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_GetApplicationStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSManager_GetApplicationStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSManager, nullptr, "GetApplicationStatus", nullptr, nullptr, sizeof(EOSManager_eventGetApplicationStatus_Parms), Z_Construct_UFunction_UEOSManager_GetApplicationStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_GetApplicationStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_GetApplicationStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_GetApplicationStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSManager_GetApplicationStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSManager_GetApplicationStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSManager_GetDesktopCrossplayStatus_Statics
	{
		struct EOSManager_eventGetDesktopCrossplayStatus_Parms
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
	void Z_Construct_UFunction_UEOSManager_GetDesktopCrossplayStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSManager_eventGetDesktopCrossplayStatus_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSManager_GetDesktopCrossplayStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSManager_eventGetDesktopCrossplayStatus_Parms), &Z_Construct_UFunction_UEOSManager_GetDesktopCrossplayStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSManager_GetDesktopCrossplayStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_GetDesktopCrossplayStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_GetDesktopCrossplayStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSManager_GetDesktopCrossplayStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSManager, nullptr, "GetDesktopCrossplayStatus", nullptr, nullptr, sizeof(EOSManager_eventGetDesktopCrossplayStatus_Parms), Z_Construct_UFunction_UEOSManager_GetDesktopCrossplayStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_GetDesktopCrossplayStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_GetDesktopCrossplayStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_GetDesktopCrossplayStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSManager_GetDesktopCrossplayStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSManager_GetDesktopCrossplayStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSManager_GetFileAccessor_Statics
	{
		struct EOSManager_eventGetFileAccessor_Parms
		{
			UEOSFileAccessor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSManager_GetFileAccessor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventGetFileAccessor_Parms, ReturnValue), Z_Construct_UClass_UEOSFileAccessor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSManager_GetFileAccessor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_GetFileAccessor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_GetFileAccessor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSManager_GetFileAccessor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSManager, nullptr, "GetFileAccessor", nullptr, nullptr, sizeof(EOSManager_eventGetFileAccessor_Parms), Z_Construct_UFunction_UEOSManager_GetFileAccessor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_GetFileAccessor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_GetFileAccessor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_GetFileAccessor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSManager_GetFileAccessor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSManager_GetFileAccessor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSManager_GetLobby_Statics
	{
		struct EOSManager_eventGetLobby_Parms
		{
			UEOSUserBase* _pOwnerUser;
			UEOSLobby* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pOwnerUser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSManager_GetLobby_Statics::NewProp__pOwnerUser = { "_pOwnerUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventGetLobby_Parms, _pOwnerUser), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSManager_GetLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventGetLobby_Parms, ReturnValue), Z_Construct_UClass_UEOSLobby_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSManager_GetLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_GetLobby_Statics::NewProp__pOwnerUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_GetLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_GetLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSManager_GetLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSManager, nullptr, "GetLobby", nullptr, nullptr, sizeof(EOSManager_eventGetLobby_Parms), Z_Construct_UFunction_UEOSManager_GetLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_GetLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_GetLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_GetLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSManager_GetLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSManager_GetLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSManager_GetNetworkStatus_Statics
	{
		struct EOSManager_eventGetNetworkStatus_Parms
		{
			EEOSNetworkStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSManager_GetNetworkStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSManager_GetNetworkStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventGetNetworkStatus_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSNetworkStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSManager_GetNetworkStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_GetNetworkStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_GetNetworkStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_GetNetworkStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSManager_GetNetworkStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSManager, nullptr, "GetNetworkStatus", nullptr, nullptr, sizeof(EOSManager_eventGetNetworkStatus_Parms), Z_Construct_UFunction_UEOSManager_GetNetworkStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_GetNetworkStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_GetNetworkStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_GetNetworkStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSManager_GetNetworkStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSManager_GetNetworkStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSManager_GetPortRange_Statics
	{
		struct EOSManager_eventGetPortRange_Parms
		{
			int32 Port;
			int32 Range;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Range;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSManager_GetPortRange_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventGetPortRange_Parms, Port), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSManager_GetPortRange_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventGetPortRange_Parms, Range), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSManager_GetPortRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSManager_eventGetPortRange_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSManager_GetPortRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSManager_eventGetPortRange_Parms), &Z_Construct_UFunction_UEOSManager_GetPortRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSManager_GetPortRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_GetPortRange_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_GetPortRange_Statics::NewProp_Range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_GetPortRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_GetPortRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSManager_GetPortRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSManager, nullptr, "GetPortRange", nullptr, nullptr, sizeof(EOSManager_eventGetPortRange_Parms), Z_Construct_UFunction_UEOSManager_GetPortRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_GetPortRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_GetPortRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_GetPortRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSManager_GetPortRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSManager_GetPortRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSManager_GetRelayControl_Statics
	{
		struct EOSManager_eventGetRelayControl_Parms
		{
			EEOSRelayControl RelayControl;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RelayControl_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RelayControl;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSManager_GetRelayControl_Statics::NewProp_RelayControl_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSManager_GetRelayControl_Statics::NewProp_RelayControl = { "RelayControl", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventGetRelayControl_Parms, RelayControl), Z_Construct_UEnum_yEOSSDK_EEOSRelayControl, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSManager_GetRelayControl_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSManager_eventGetRelayControl_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSManager_GetRelayControl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSManager_eventGetRelayControl_Parms), &Z_Construct_UFunction_UEOSManager_GetRelayControl_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSManager_GetRelayControl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_GetRelayControl_Statics::NewProp_RelayControl_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_GetRelayControl_Statics::NewProp_RelayControl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_GetRelayControl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_GetRelayControl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSManager_GetRelayControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSManager, nullptr, "GetRelayControl", nullptr, nullptr, sizeof(EOSManager_eventGetRelayControl_Parms), Z_Construct_UFunction_UEOSManager_GetRelayControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_GetRelayControl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_GetRelayControl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_GetRelayControl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSManager_GetRelayControl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSManager_GetRelayControl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSManager_GetSession_Statics
	{
		struct EOSManager_eventGetSession_Parms
		{
			UEOSUserBase* _pOwnerUser;
			UEOSSession* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pOwnerUser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSManager_GetSession_Statics::NewProp__pOwnerUser = { "_pOwnerUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventGetSession_Parms, _pOwnerUser), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSManager_GetSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventGetSession_Parms, ReturnValue), Z_Construct_UClass_UEOSSession_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSManager_GetSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_GetSession_Statics::NewProp__pOwnerUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_GetSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_GetSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSManager_GetSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSManager, nullptr, "GetSession", nullptr, nullptr, sizeof(EOSManager_eventGetSession_Parms), Z_Construct_UFunction_UEOSManager_GetSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_GetSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_GetSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_GetSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSManager_GetSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSManager_GetSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSManager_GetTitleStorage_Statics
	{
		struct EOSManager_eventGetTitleStorage_Parms
		{
			UEOSUserBase* _pOwnerUser;
			UEOSTitleStorage* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pOwnerUser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSManager_GetTitleStorage_Statics::NewProp__pOwnerUser = { "_pOwnerUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventGetTitleStorage_Parms, _pOwnerUser), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSManager_GetTitleStorage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventGetTitleStorage_Parms, ReturnValue), Z_Construct_UClass_UEOSTitleStorage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSManager_GetTitleStorage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_GetTitleStorage_Statics::NewProp__pOwnerUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_GetTitleStorage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_GetTitleStorage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSManager_GetTitleStorage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSManager, nullptr, "GetTitleStorage", nullptr, nullptr, sizeof(EOSManager_eventGetTitleStorage_Parms), Z_Construct_UFunction_UEOSManager_GetTitleStorage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_GetTitleStorage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_GetTitleStorage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_GetTitleStorage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSManager_GetTitleStorage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSManager_GetTitleStorage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSManager_GetUserManager_Statics
	{
		struct EOSManager_eventGetUserManager_Parms
		{
			UEOSUserManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSManager_GetUserManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventGetUserManager_Parms, ReturnValue), Z_Construct_UClass_UEOSUserManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSManager_GetUserManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_GetUserManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_GetUserManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSManager_GetUserManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSManager, nullptr, "GetUserManager", nullptr, nullptr, sizeof(EOSManager_eventGetUserManager_Parms), Z_Construct_UFunction_UEOSManager_GetUserManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_GetUserManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_GetUserManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_GetUserManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSManager_GetUserManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSManager_GetUserManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSManager_Initialize_Statics
	{
		struct EOSManager_eventInitialize_Parms
		{
			FEOSProductSetting _stSetting;
			FString _strEncryptKey;
			FString _strCacheDirPath;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stSetting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strEncryptKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strEncryptKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strCacheDirPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strCacheDirPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSManager_Initialize_Statics::NewProp__stSetting = { "_stSetting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventInitialize_Parms, _stSetting), Z_Construct_UScriptStruct_FEOSProductSetting, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_Initialize_Statics::NewProp__strEncryptKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSManager_Initialize_Statics::NewProp__strEncryptKey = { "_strEncryptKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventInitialize_Parms, _strEncryptKey), METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_Initialize_Statics::NewProp__strEncryptKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_Initialize_Statics::NewProp__strEncryptKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_Initialize_Statics::NewProp__strCacheDirPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSManager_Initialize_Statics::NewProp__strCacheDirPath = { "_strCacheDirPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventInitialize_Parms, _strCacheDirPath), METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_Initialize_Statics::NewProp__strCacheDirPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_Initialize_Statics::NewProp__strCacheDirPath_MetaData)) };
	void Z_Construct_UFunction_UEOSManager_Initialize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSManager_eventInitialize_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSManager_Initialize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSManager_eventInitialize_Parms), &Z_Construct_UFunction_UEOSManager_Initialize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSManager_Initialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_Initialize_Statics::NewProp__stSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_Initialize_Statics::NewProp__strEncryptKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_Initialize_Statics::NewProp__strCacheDirPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_Initialize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_Initialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSManager_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSManager, nullptr, "Initialize", nullptr, nullptr, sizeof(EOSManager_eventInitialize_Parms), Z_Construct_UFunction_UEOSManager_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSManager_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSManager_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSManager_InitSDK_Statics
	{
		struct EOSManager_eventInitSDK_Parms
		{
			FString _strGameName;
			FString _strProductVersion;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strGameName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strGameName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strProductVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strProductVersion;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_InitSDK_Statics::NewProp__strGameName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSManager_InitSDK_Statics::NewProp__strGameName = { "_strGameName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventInitSDK_Parms, _strGameName), METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_InitSDK_Statics::NewProp__strGameName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_InitSDK_Statics::NewProp__strGameName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_InitSDK_Statics::NewProp__strProductVersion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSManager_InitSDK_Statics::NewProp__strProductVersion = { "_strProductVersion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventInitSDK_Parms, _strProductVersion), METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_InitSDK_Statics::NewProp__strProductVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_InitSDK_Statics::NewProp__strProductVersion_MetaData)) };
	void Z_Construct_UFunction_UEOSManager_InitSDK_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSManager_eventInitSDK_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSManager_InitSDK_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSManager_eventInitSDK_Parms), &Z_Construct_UFunction_UEOSManager_InitSDK_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSManager_InitSDK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_InitSDK_Statics::NewProp__strGameName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_InitSDK_Statics::NewProp__strProductVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_InitSDK_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_InitSDK_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSManager_InitSDK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSManager, nullptr, "InitSDK", nullptr, nullptr, sizeof(EOSManager_eventInitSDK_Parms), Z_Construct_UFunction_UEOSManager_InitSDK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_InitSDK_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_InitSDK_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_InitSDK_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSManager_InitSDK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSManager_InitSDK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSManager_IsValidHandle_Statics
	{
		struct EOSManager_eventIsValidHandle_Parms
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
	void Z_Construct_UFunction_UEOSManager_IsValidHandle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSManager_eventIsValidHandle_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSManager_IsValidHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSManager_eventIsValidHandle_Parms), &Z_Construct_UFunction_UEOSManager_IsValidHandle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSManager_IsValidHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_IsValidHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_IsValidHandle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSManager_IsValidHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSManager, nullptr, "IsValidHandle", nullptr, nullptr, sizeof(EOSManager_eventIsValidHandle_Parms), Z_Construct_UFunction_UEOSManager_IsValidHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_IsValidHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_IsValidHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_IsValidHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSManager_IsValidHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSManager_IsValidHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSManager_ReleaseSDK_Statics
	{
		struct EOSManager_eventReleaseSDK_Parms
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
	void Z_Construct_UFunction_UEOSManager_ReleaseSDK_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSManager_eventReleaseSDK_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSManager_ReleaseSDK_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSManager_eventReleaseSDK_Parms), &Z_Construct_UFunction_UEOSManager_ReleaseSDK_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSManager_ReleaseSDK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_ReleaseSDK_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_ReleaseSDK_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSManager_ReleaseSDK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSManager, nullptr, "ReleaseSDK", nullptr, nullptr, sizeof(EOSManager_eventReleaseSDK_Parms), Z_Construct_UFunction_UEOSManager_ReleaseSDK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_ReleaseSDK_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_ReleaseSDK_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_ReleaseSDK_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSManager_ReleaseSDK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSManager_ReleaseSDK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSManager_SetActiveAuth_Statics
	{
		struct EOSManager_eventSetActiveAuth_Parms
		{
			UEOSAuth* _pcEOSAuth;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcEOSAuth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSManager_SetActiveAuth_Statics::NewProp__pcEOSAuth = { "_pcEOSAuth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventSetActiveAuth_Parms, _pcEOSAuth), Z_Construct_UClass_UEOSAuth_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSManager_SetActiveAuth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_SetActiveAuth_Statics::NewProp__pcEOSAuth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_SetActiveAuth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSManager_SetActiveAuth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSManager, nullptr, "SetActiveAuth", nullptr, nullptr, sizeof(EOSManager_eventSetActiveAuth_Parms), Z_Construct_UFunction_UEOSManager_SetActiveAuth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_SetActiveAuth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_SetActiveAuth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_SetActiveAuth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSManager_SetActiveAuth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSManager_SetActiveAuth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSManager_SetApiVersion_Statics
	{
		struct EOSManager_eventSetApiVersion_Parms
		{
			FEOSEngineAPIVersionSettings _stAPIVerSetting;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stAPIVerSetting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSManager_SetApiVersion_Statics::NewProp__stAPIVerSetting = { "_stAPIVerSetting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventSetApiVersion_Parms, _stAPIVerSetting), Z_Construct_UScriptStruct_FEOSEngineAPIVersionSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSManager_SetApiVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_SetApiVersion_Statics::NewProp__stAPIVerSetting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_SetApiVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSManager_SetApiVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSManager, nullptr, "SetApiVersion", nullptr, nullptr, sizeof(EOSManager_eventSetApiVersion_Parms), Z_Construct_UFunction_UEOSManager_SetApiVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_SetApiVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_SetApiVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_SetApiVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSManager_SetApiVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSManager_SetApiVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSManager_SetApplicationStatus_Statics
	{
		struct EOSManager_eventSetApplicationStatus_Parms
		{
			EEOSApplicationStatus Status;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Status;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSManager_SetApplicationStatus_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSManager_SetApplicationStatus_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventSetApplicationStatus_Parms, Status), Z_Construct_UEnum_yEOSSDK_EEOSApplicationStatus, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSManager_SetApplicationStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSManager_eventSetApplicationStatus_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSManager_SetApplicationStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSManager_eventSetApplicationStatus_Parms), &Z_Construct_UFunction_UEOSManager_SetApplicationStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSManager_SetApplicationStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_SetApplicationStatus_Statics::NewProp_Status_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_SetApplicationStatus_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_SetApplicationStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_SetApplicationStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSManager_SetApplicationStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSManager, nullptr, "SetApplicationStatus", nullptr, nullptr, sizeof(EOSManager_eventSetApplicationStatus_Parms), Z_Construct_UFunction_UEOSManager_SetApplicationStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_SetApplicationStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_SetApplicationStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_SetApplicationStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSManager_SetApplicationStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSManager_SetApplicationStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSManager_SetNetworkStatus_Statics
	{
		struct EOSManager_eventSetNetworkStatus_Parms
		{
			EEOSNetworkStatus Status;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Status;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSManager_SetNetworkStatus_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSManager_SetNetworkStatus_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventSetNetworkStatus_Parms, Status), Z_Construct_UEnum_yEOSSDK_EEOSNetworkStatus, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSManager_SetNetworkStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSManager_eventSetNetworkStatus_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSManager_SetNetworkStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSManager_eventSetNetworkStatus_Parms), &Z_Construct_UFunction_UEOSManager_SetNetworkStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSManager_SetNetworkStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_SetNetworkStatus_Statics::NewProp_Status_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_SetNetworkStatus_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_SetNetworkStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_SetNetworkStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSManager_SetNetworkStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSManager, nullptr, "SetNetworkStatus", nullptr, nullptr, sizeof(EOSManager_eventSetNetworkStatus_Parms), Z_Construct_UFunction_UEOSManager_SetNetworkStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_SetNetworkStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_SetNetworkStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_SetNetworkStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSManager_SetNetworkStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSManager_SetNetworkStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSManager_SetPortRange_Statics
	{
		struct EOSManager_eventSetPortRange_Parms
		{
			int32 Port;
			int32 Range;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Range;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSManager_SetPortRange_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventSetPortRange_Parms, Port), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSManager_SetPortRange_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventSetPortRange_Parms, Range), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSManager_SetPortRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSManager_eventSetPortRange_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSManager_SetPortRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSManager_eventSetPortRange_Parms), &Z_Construct_UFunction_UEOSManager_SetPortRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSManager_SetPortRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_SetPortRange_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_SetPortRange_Statics::NewProp_Range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_SetPortRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_SetPortRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSManager_SetPortRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSManager, nullptr, "SetPortRange", nullptr, nullptr, sizeof(EOSManager_eventSetPortRange_Parms), Z_Construct_UFunction_UEOSManager_SetPortRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_SetPortRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_SetPortRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_SetPortRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSManager_SetPortRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSManager_SetPortRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSManager_SetRelayControl_Statics
	{
		struct EOSManager_eventSetRelayControl_Parms
		{
			EEOSRelayControl RelayControl;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RelayControl_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RelayControl;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSManager_SetRelayControl_Statics::NewProp_RelayControl_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSManager_SetRelayControl_Statics::NewProp_RelayControl = { "RelayControl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventSetRelayControl_Parms, RelayControl), Z_Construct_UEnum_yEOSSDK_EEOSRelayControl, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSManager_SetRelayControl_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSManager_eventSetRelayControl_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSManager_SetRelayControl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSManager_eventSetRelayControl_Parms), &Z_Construct_UFunction_UEOSManager_SetRelayControl_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSManager_SetRelayControl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_SetRelayControl_Statics::NewProp_RelayControl_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_SetRelayControl_Statics::NewProp_RelayControl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_SetRelayControl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_SetRelayControl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSManager_SetRelayControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSManager, nullptr, "SetRelayControl", nullptr, nullptr, sizeof(EOSManager_eventSetRelayControl_Parms), Z_Construct_UFunction_UEOSManager_SetRelayControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_SetRelayControl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_SetRelayControl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_SetRelayControl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSManager_SetRelayControl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSManager_SetRelayControl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSManager_SetSDKLogLevel_Statics
	{
		struct EOSManager_eventSetSDKLogLevel_Parms
		{
			EEOSSDKLogLevel _enSDKLogLevel;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enSDKLogLevel_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enSDKLogLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSManager_SetSDKLogLevel_Statics::NewProp__enSDKLogLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSManager_SetSDKLogLevel_Statics::NewProp__enSDKLogLevel = { "_enSDKLogLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventSetSDKLogLevel_Parms, _enSDKLogLevel), Z_Construct_UEnum_yEOSSDK_EEOSSDKLogLevel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSManager_SetSDKLogLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_SetSDKLogLevel_Statics::NewProp__enSDKLogLevel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_SetSDKLogLevel_Statics::NewProp__enSDKLogLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_SetSDKLogLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSManager_SetSDKLogLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSManager, nullptr, "SetSDKLogLevel", nullptr, nullptr, sizeof(EOSManager_eventSetSDKLogLevel_Parms), Z_Construct_UFunction_UEOSManager_SetSDKLogLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_SetSDKLogLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_SetSDKLogLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_SetSDKLogLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSManager_SetSDKLogLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSManager_SetSDKLogLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSManager_SetupAntiCheat_Statics
	{
		struct EOSManager_eventSetupAntiCheat_Parms
		{
			UEOSUserBase* _pOwnerUser;
			bool isClient;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pOwnerUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isClient_MetaData[];
#endif
		static void NewProp_isClient_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isClient;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSManager_SetupAntiCheat_Statics::NewProp__pOwnerUser = { "_pOwnerUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventSetupAntiCheat_Parms, _pOwnerUser), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_SetupAntiCheat_Statics::NewProp_isClient_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEOSManager_SetupAntiCheat_Statics::NewProp_isClient_SetBit(void* Obj)
	{
		((EOSManager_eventSetupAntiCheat_Parms*)Obj)->isClient = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSManager_SetupAntiCheat_Statics::NewProp_isClient = { "isClient", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSManager_eventSetupAntiCheat_Parms), &Z_Construct_UFunction_UEOSManager_SetupAntiCheat_Statics::NewProp_isClient_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_SetupAntiCheat_Statics::NewProp_isClient_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_SetupAntiCheat_Statics::NewProp_isClient_MetaData)) };
	void Z_Construct_UFunction_UEOSManager_SetupAntiCheat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSManager_eventSetupAntiCheat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSManager_SetupAntiCheat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSManager_eventSetupAntiCheat_Parms), &Z_Construct_UFunction_UEOSManager_SetupAntiCheat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSManager_SetupAntiCheat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_SetupAntiCheat_Statics::NewProp__pOwnerUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_SetupAntiCheat_Statics::NewProp_isClient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_SetupAntiCheat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_SetupAntiCheat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSManager_SetupAntiCheat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSManager, nullptr, "SetupAntiCheat", nullptr, nullptr, sizeof(EOSManager_eventSetupAntiCheat_Parms), Z_Construct_UFunction_UEOSManager_SetupAntiCheat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_SetupAntiCheat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_SetupAntiCheat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_SetupAntiCheat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSManager_SetupAntiCheat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSManager_SetupAntiCheat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSManager_SetUpdateType_Statics
	{
		struct EOSManager_eventSetUpdateType_Parms
		{
			EEOSUpdateType _enType;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSManager_SetUpdateType_Statics::NewProp__enType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSManager_SetUpdateType_Statics::NewProp__enType = { "_enType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSManager_eventSetUpdateType_Parms, _enType), Z_Construct_UEnum_yEOSSDK_EEOSUpdateType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSManager_SetUpdateType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSManager_eventSetUpdateType_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSManager_SetUpdateType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSManager_eventSetUpdateType_Parms), &Z_Construct_UFunction_UEOSManager_SetUpdateType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSManager_SetUpdateType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_SetUpdateType_Statics::NewProp__enType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_SetUpdateType_Statics::NewProp__enType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_SetUpdateType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_SetUpdateType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSManager_SetUpdateType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSManager, nullptr, "SetUpdateType", nullptr, nullptr, sizeof(EOSManager_eventSetUpdateType_Parms), Z_Construct_UFunction_UEOSManager_SetUpdateType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_SetUpdateType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_SetUpdateType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_SetUpdateType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSManager_SetUpdateType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSManager_SetUpdateType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSManager_Update_Statics
	{
		struct EOSManager_eventUpdate_Parms
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
	void Z_Construct_UFunction_UEOSManager_Update_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSManager_eventUpdate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSManager_Update_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSManager_eventUpdate_Parms), &Z_Construct_UFunction_UEOSManager_Update_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSManager_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_Update_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSManager_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSManager, nullptr, "Update", nullptr, nullptr, sizeof(EOSManager_eventUpdate_Parms), Z_Construct_UFunction_UEOSManager_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSManager_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSManager_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSManager_UpdateForDispose_Statics
	{
		struct EOSManager_eventUpdateForDispose_Parms
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
	void Z_Construct_UFunction_UEOSManager_UpdateForDispose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSManager_eventUpdateForDispose_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSManager_UpdateForDispose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSManager_eventUpdateForDispose_Parms), &Z_Construct_UFunction_UEOSManager_UpdateForDispose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSManager_UpdateForDispose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSManager_UpdateForDispose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSManager_UpdateForDispose_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSManager_UpdateForDispose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSManager, nullptr, "UpdateForDispose", nullptr, nullptr, sizeof(EOSManager_eventUpdateForDispose_Parms), Z_Construct_UFunction_UEOSManager_UpdateForDispose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_UpdateForDispose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSManager_UpdateForDispose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSManager_UpdateForDispose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSManager_UpdateForDispose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSManager_UpdateForDispose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSManager_NoRegister()
	{
		return UEOSManager::StaticClass();
	}
	struct Z_Construct_UClass_UEOSManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcActiveUserEOSAuth_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcActiveUserEOSAuth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcFileAccessor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcFileAccessor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcUserManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcUserManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcLobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcLobby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcSession_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcSession;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcTitleStorage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcTitleStorage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcAPIRequestManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcAPIRequestManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSInstanceManagerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSManager_ConfirmNetworkRequest, "ConfirmNetworkRequest" }, // 1085128272
		{ &Z_Construct_UFunction_UEOSManager_CreateAchievement, "CreateAchievement" }, // 3641746673
		{ &Z_Construct_UFunction_UEOSManager_CreateAntiCheatClient, "CreateAntiCheatClient" }, // 1747380373
		{ &Z_Construct_UFunction_UEOSManager_CreateAntiCheatServer, "CreateAntiCheatServer" }, // 1056676452
		{ &Z_Construct_UFunction_UEOSManager_CreateAuth, "CreateAuth" }, // 2954788380
		{ &Z_Construct_UFunction_UEOSManager_CreateEOSManager, "CreateEOSManager" }, // 587663272
		{ &Z_Construct_UFunction_UEOSManager_CreateLeaderboard, "CreateLeaderboard" }, // 305744629
		{ &Z_Construct_UFunction_UEOSManager_CreateNatP2P, "CreateNatP2P" }, // 2299079351
		{ &Z_Construct_UFunction_UEOSManager_CreateReports, "CreateReports" }, // 836556070
		{ &Z_Construct_UFunction_UEOSManager_CreateSanctions, "CreateSanctions" }, // 1782003259
		{ &Z_Construct_UFunction_UEOSManager_CreateStats, "CreateStats" }, // 4021301045
		{ &Z_Construct_UFunction_UEOSManager_CreateVoice, "CreateVoice" }, // 3084409378
		{ &Z_Construct_UFunction_UEOSManager_GetApplicationStatus, "GetApplicationStatus" }, // 673632035
		{ &Z_Construct_UFunction_UEOSManager_GetDesktopCrossplayStatus, "GetDesktopCrossplayStatus" }, // 4224189656
		{ &Z_Construct_UFunction_UEOSManager_GetFileAccessor, "GetFileAccessor" }, // 3488892020
		{ &Z_Construct_UFunction_UEOSManager_GetLobby, "GetLobby" }, // 1778721132
		{ &Z_Construct_UFunction_UEOSManager_GetNetworkStatus, "GetNetworkStatus" }, // 4266646138
		{ &Z_Construct_UFunction_UEOSManager_GetPortRange, "GetPortRange" }, // 282209685
		{ &Z_Construct_UFunction_UEOSManager_GetRelayControl, "GetRelayControl" }, // 1830657118
		{ &Z_Construct_UFunction_UEOSManager_GetSession, "GetSession" }, // 2321724740
		{ &Z_Construct_UFunction_UEOSManager_GetTitleStorage, "GetTitleStorage" }, // 3529284001
		{ &Z_Construct_UFunction_UEOSManager_GetUserManager, "GetUserManager" }, // 948356223
		{ &Z_Construct_UFunction_UEOSManager_Initialize, "Initialize" }, // 3832313379
		{ &Z_Construct_UFunction_UEOSManager_InitSDK, "InitSDK" }, // 531551315
		{ &Z_Construct_UFunction_UEOSManager_IsValidHandle, "IsValidHandle" }, // 3780970354
		{ &Z_Construct_UFunction_UEOSManager_ReleaseSDK, "ReleaseSDK" }, // 2654638593
		{ &Z_Construct_UFunction_UEOSManager_SetActiveAuth, "SetActiveAuth" }, // 2092872273
		{ &Z_Construct_UFunction_UEOSManager_SetApiVersion, "SetApiVersion" }, // 2423264353
		{ &Z_Construct_UFunction_UEOSManager_SetApplicationStatus, "SetApplicationStatus" }, // 1672855767
		{ &Z_Construct_UFunction_UEOSManager_SetNetworkStatus, "SetNetworkStatus" }, // 2834374528
		{ &Z_Construct_UFunction_UEOSManager_SetPortRange, "SetPortRange" }, // 3770229839
		{ &Z_Construct_UFunction_UEOSManager_SetRelayControl, "SetRelayControl" }, // 199203141
		{ &Z_Construct_UFunction_UEOSManager_SetSDKLogLevel, "SetSDKLogLevel" }, // 3419331834
		{ &Z_Construct_UFunction_UEOSManager_SetupAntiCheat, "SetupAntiCheat" }, // 1849515769
		{ &Z_Construct_UFunction_UEOSManager_SetUpdateType, "SetUpdateType" }, // 240449600
		{ &Z_Construct_UFunction_UEOSManager_Update, "Update" }, // 3435254763
		{ &Z_Construct_UFunction_UEOSManager_UpdateForDispose, "UpdateForDispose" }, // 1839972991
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSManager_Statics::NewProp_m_pcActiveUserEOSAuth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSManager" },
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSManager_Statics::NewProp_m_pcActiveUserEOSAuth = { "m_pcActiveUserEOSAuth", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSManager, m_pcActiveUserEOSAuth), Z_Construct_UClass_UEOSAuth_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSManager_Statics::NewProp_m_pcActiveUserEOSAuth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSManager_Statics::NewProp_m_pcActiveUserEOSAuth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSManager_Statics::NewProp_m_pcFileAccessor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSManager" },
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSManager_Statics::NewProp_m_pcFileAccessor = { "m_pcFileAccessor", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSManager, m_pcFileAccessor), Z_Construct_UClass_UEOSFileAccessor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSManager_Statics::NewProp_m_pcFileAccessor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSManager_Statics::NewProp_m_pcFileAccessor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSManager_Statics::NewProp_m_pcUserManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSManager" },
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSManager_Statics::NewProp_m_pcUserManager = { "m_pcUserManager", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSManager, m_pcUserManager), Z_Construct_UClass_UEOSUserManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSManager_Statics::NewProp_m_pcUserManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSManager_Statics::NewProp_m_pcUserManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSManager_Statics::NewProp_m_pcLobby_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSManager" },
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSManager_Statics::NewProp_m_pcLobby = { "m_pcLobby", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSManager, m_pcLobby), Z_Construct_UClass_UEOSLobby_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSManager_Statics::NewProp_m_pcLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSManager_Statics::NewProp_m_pcLobby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSManager_Statics::NewProp_m_pcSession_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSManager" },
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSManager_Statics::NewProp_m_pcSession = { "m_pcSession", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSManager, m_pcSession), Z_Construct_UClass_UEOSSession_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSManager_Statics::NewProp_m_pcSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSManager_Statics::NewProp_m_pcSession_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSManager_Statics::NewProp_m_pcTitleStorage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSManager" },
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSManager_Statics::NewProp_m_pcTitleStorage = { "m_pcTitleStorage", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSManager, m_pcTitleStorage), Z_Construct_UClass_UEOSTitleStorage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSManager_Statics::NewProp_m_pcTitleStorage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSManager_Statics::NewProp_m_pcTitleStorage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSManager_Statics::NewProp_m_pcAPIRequestManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSManager" },
		{ "ModuleRelativePath", "Public/EOSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSManager_Statics::NewProp_m_pcAPIRequestManager = { "m_pcAPIRequestManager", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSManager, m_pcAPIRequestManager), Z_Construct_UClass_UEOSAPIRequestManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSManager_Statics::NewProp_m_pcAPIRequestManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSManager_Statics::NewProp_m_pcAPIRequestManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSManager_Statics::NewProp_m_pcActiveUserEOSAuth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSManager_Statics::NewProp_m_pcFileAccessor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSManager_Statics::NewProp_m_pcUserManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSManager_Statics::NewProp_m_pcLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSManager_Statics::NewProp_m_pcSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSManager_Statics::NewProp_m_pcTitleStorage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSManager_Statics::NewProp_m_pcAPIRequestManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSManager_Statics::ClassParams = {
		&UEOSManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSManager, 1397502456);
	template<> YEOSSDK_API UClass* StaticClass<UEOSManager>()
	{
		return UEOSManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSManager(Z_Construct_UClass_UEOSManager, &UEOSManager::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
