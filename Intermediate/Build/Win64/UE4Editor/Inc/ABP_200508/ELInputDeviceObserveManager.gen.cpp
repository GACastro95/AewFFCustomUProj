// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELInputDeviceObserveManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELInputDeviceObserveManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELInputDeviceObserveManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELInputDeviceObserveManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EInputDeviceGameFlowType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_ChangedInputDevice__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_OpenedDisconnectedDialogDelegate__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_ClosedDisconnectedDialogDelegate__DelegateSignature();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FInputDeviceInfo();
	ABP_200508_API UClass* Z_Construct_UClass_AELNotifyGamepadDisconnected_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELInputDeviceObserveManager::execAddJoinLocalExhibition)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__targetControllerID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddJoinLocalExhibition(Z_Param__targetControllerID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELInputDeviceObserveManager::execBackupOldDeviceInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BackupOldDeviceInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELInputDeviceObserveManager::execChangeGameFlowStatus)
	{
		P_GET_ENUM(EInputDeviceGameFlowType,Z_Param__type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeGameFlowStatus(EInputDeviceGameFlowType(Z_Param__type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELInputDeviceObserveManager::execCheckExistHostController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckExistHostController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELInputDeviceObserveManager::execCheckLocalConnectedDevice)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckLocalConnectedDevice(Z_Param__pWorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELInputDeviceObserveManager::execClearExhibitionPlayerIndexMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearExhibitionPlayerIndexMap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELInputDeviceObserveManager::execClearGameFlowStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearGameFlowStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELInputDeviceObserveManager::execClearJoinLocalExhibition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearJoinLocalExhibition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELInputDeviceObserveManager::execEndCheckConnectionStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndCheckConnectionStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELInputDeviceObserveManager::execGetBindControllerUserName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__targetControllerID);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out__Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetBindControllerUserName(Z_Param__targetControllerID,Z_Param_Out__Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELInputDeviceObserveManager::execGetBindControllerUserNameList)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out__targetControllerIdList);
		P_GET_TARRAY_REF(FText,Z_Param_Out__Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetBindControllerUserNameList(Z_Param_Out__targetControllerIdList,Z_Param_Out__Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELInputDeviceObserveManager::execGetCurrentControllerIds)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out__Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCurrentControllerIds(Z_Param_Out__Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELInputDeviceObserveManager::execGetCurrentGameFlowStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EInputDeviceGameFlowType*)Z_Param__Result=P_THIS->GetCurrentGameFlowStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELInputDeviceObserveManager::execGetExhibitionPlayerIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__targetControllerID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetExhibitionPlayerIndex(Z_Param__targetControllerID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELInputDeviceObserveManager::execGetGameHostPadID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetGameHostPadID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELInputDeviceObserveManager::execGetInputControllerNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetInputControllerNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELInputDeviceObserveManager::execGetJoinedLocalExhibitionControllerIdList)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out__Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetJoinedLocalExhibitionControllerIdList(Z_Param_Out__Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELInputDeviceObserveManager::execIsActiveNotifyDisconnectedDialog)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActiveNotifyDisconnectedDialog();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELInputDeviceObserveManager::execIsAssignedExhibitionPlayerIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAssignedExhibitionPlayerIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELInputDeviceObserveManager::execIsCheckingConnectionStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCheckingConnectionStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELInputDeviceObserveManager::execIsConnectedDevice)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__targetControllerID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsConnectedDevice(Z_Param__targetControllerID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELInputDeviceObserveManager::execIsConnectedHostPad)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsConnectedHostPad();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELInputDeviceObserveManager::execIsHandheldStyle)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHandheldStyle(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELInputDeviceObserveManager::execIsJoyCon)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsJoyCon(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELInputDeviceObserveManager::execOnClosedDisconnectedDialog)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClosedDisconnectedDialog();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELInputDeviceObserveManager::execOnManipulateCursor)
	{
		P_GET_UBOOL(Z_Param__isLeft);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnManipulateCursor(Z_Param__isLeft);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELInputDeviceObserveManager::execOnManipulateDecideBtn)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnManipulateDecideBtn(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELInputDeviceObserveManager::execOnOpenedDisconnectedDialog)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOpenedDisconnectedDialog();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELInputDeviceObserveManager::execSetAssignHostPad)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__targetControllerID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAssignHostPad(Z_Param__targetControllerID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELInputDeviceObserveManager::execSetDecideMatchControllerID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDecideMatchControllerID(Z_Param_ID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELInputDeviceObserveManager::execSetExhibitionPlayerIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__targetControllerID);
		P_GET_PROPERTY(FIntProperty,Z_Param__Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetExhibitionPlayerIndex(Z_Param__targetControllerID,Z_Param__Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELInputDeviceObserveManager::execSetLightbarColor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
		P_GET_STRUCT(FColor,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLightbarColor(Z_Param_ControllerId,Z_Param_Color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELInputDeviceObserveManager::execSetManipulateKeyboardeMode)
	{
		P_GET_UBOOL(Z_Param_Enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetManipulateKeyboardeMode(Z_Param_Enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELInputDeviceObserveManager::execSetShowDisconnectedDeviceId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShowDisconnectedDeviceId(Z_Param_ControllerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELInputDeviceObserveManager::execStartCheckConnectionStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartCheckConnectionStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELInputDeviceObserveManager::execUpdateInputDeviceMap)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__updateSrcDeviceIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param__updateDstDeviceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateInputDeviceMap(Z_Param__updateSrcDeviceIndex,Z_Param__updateDstDeviceIndex);
		P_NATIVE_END;
	}
	void UELInputDeviceObserveManager::StaticRegisterNativesUELInputDeviceObserveManager()
	{
		UClass* Class = UELInputDeviceObserveManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddJoinLocalExhibition", &UELInputDeviceObserveManager::execAddJoinLocalExhibition },
			{ "BackupOldDeviceInfo", &UELInputDeviceObserveManager::execBackupOldDeviceInfo },
			{ "ChangeGameFlowStatus", &UELInputDeviceObserveManager::execChangeGameFlowStatus },
			{ "CheckExistHostController", &UELInputDeviceObserveManager::execCheckExistHostController },
			{ "CheckLocalConnectedDevice", &UELInputDeviceObserveManager::execCheckLocalConnectedDevice },
			{ "ClearExhibitionPlayerIndexMap", &UELInputDeviceObserveManager::execClearExhibitionPlayerIndexMap },
			{ "ClearGameFlowStatus", &UELInputDeviceObserveManager::execClearGameFlowStatus },
			{ "ClearJoinLocalExhibition", &UELInputDeviceObserveManager::execClearJoinLocalExhibition },
			{ "EndCheckConnectionStatus", &UELInputDeviceObserveManager::execEndCheckConnectionStatus },
			{ "GetBindControllerUserName", &UELInputDeviceObserveManager::execGetBindControllerUserName },
			{ "GetBindControllerUserNameList", &UELInputDeviceObserveManager::execGetBindControllerUserNameList },
			{ "GetCurrentControllerIds", &UELInputDeviceObserveManager::execGetCurrentControllerIds },
			{ "GetCurrentGameFlowStatus", &UELInputDeviceObserveManager::execGetCurrentGameFlowStatus },
			{ "GetExhibitionPlayerIndex", &UELInputDeviceObserveManager::execGetExhibitionPlayerIndex },
			{ "GetGameHostPadID", &UELInputDeviceObserveManager::execGetGameHostPadID },
			{ "GetInputControllerNum", &UELInputDeviceObserveManager::execGetInputControllerNum },
			{ "GetJoinedLocalExhibitionControllerIdList", &UELInputDeviceObserveManager::execGetJoinedLocalExhibitionControllerIdList },
			{ "IsActiveNotifyDisconnectedDialog", &UELInputDeviceObserveManager::execIsActiveNotifyDisconnectedDialog },
			{ "IsAssignedExhibitionPlayerIndex", &UELInputDeviceObserveManager::execIsAssignedExhibitionPlayerIndex },
			{ "IsCheckingConnectionStatus", &UELInputDeviceObserveManager::execIsCheckingConnectionStatus },
			{ "IsConnectedDevice", &UELInputDeviceObserveManager::execIsConnectedDevice },
			{ "IsConnectedHostPad", &UELInputDeviceObserveManager::execIsConnectedHostPad },
			{ "IsHandheldStyle", &UELInputDeviceObserveManager::execIsHandheldStyle },
			{ "IsJoyCon", &UELInputDeviceObserveManager::execIsJoyCon },
			{ "OnClosedDisconnectedDialog", &UELInputDeviceObserveManager::execOnClosedDisconnectedDialog },
			{ "OnManipulateCursor", &UELInputDeviceObserveManager::execOnManipulateCursor },
			{ "OnManipulateDecideBtn", &UELInputDeviceObserveManager::execOnManipulateDecideBtn },
			{ "OnOpenedDisconnectedDialog", &UELInputDeviceObserveManager::execOnOpenedDisconnectedDialog },
			{ "SetAssignHostPad", &UELInputDeviceObserveManager::execSetAssignHostPad },
			{ "SetDecideMatchControllerID", &UELInputDeviceObserveManager::execSetDecideMatchControllerID },
			{ "SetExhibitionPlayerIndex", &UELInputDeviceObserveManager::execSetExhibitionPlayerIndex },
			{ "SetLightbarColor", &UELInputDeviceObserveManager::execSetLightbarColor },
			{ "SetManipulateKeyboardeMode", &UELInputDeviceObserveManager::execSetManipulateKeyboardeMode },
			{ "SetShowDisconnectedDeviceId", &UELInputDeviceObserveManager::execSetShowDisconnectedDeviceId },
			{ "StartCheckConnectionStatus", &UELInputDeviceObserveManager::execStartCheckConnectionStatus },
			{ "UpdateInputDeviceMap", &UELInputDeviceObserveManager::execUpdateInputDeviceMap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELInputDeviceObserveManager_AddJoinLocalExhibition_Statics
	{
		struct ELInputDeviceObserveManager_eventAddJoinLocalExhibition_Parms
		{
			int32 _targetControllerID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetControllerID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_AddJoinLocalExhibition_Statics::NewProp__targetControllerID = { "_targetControllerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELInputDeviceObserveManager_eventAddJoinLocalExhibition_Parms, _targetControllerID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELInputDeviceObserveManager_AddJoinLocalExhibition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_AddJoinLocalExhibition_Statics::NewProp__targetControllerID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInputDeviceObserveManager_AddJoinLocalExhibition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELInputDeviceObserveManager_AddJoinLocalExhibition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELInputDeviceObserveManager, nullptr, "AddJoinLocalExhibition", nullptr, nullptr, sizeof(ELInputDeviceObserveManager_eventAddJoinLocalExhibition_Parms), Z_Construct_UFunction_UELInputDeviceObserveManager_AddJoinLocalExhibition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_AddJoinLocalExhibition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELInputDeviceObserveManager_AddJoinLocalExhibition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_AddJoinLocalExhibition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELInputDeviceObserveManager_AddJoinLocalExhibition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELInputDeviceObserveManager_AddJoinLocalExhibition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELInputDeviceObserveManager_BackupOldDeviceInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInputDeviceObserveManager_BackupOldDeviceInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELInputDeviceObserveManager_BackupOldDeviceInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELInputDeviceObserveManager, nullptr, "BackupOldDeviceInfo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELInputDeviceObserveManager_BackupOldDeviceInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_BackupOldDeviceInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELInputDeviceObserveManager_BackupOldDeviceInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELInputDeviceObserveManager_BackupOldDeviceInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELInputDeviceObserveManager_ChangeGameFlowStatus_Statics
	{
		struct ELInputDeviceObserveManager_eventChangeGameFlowStatus_Parms
		{
			EInputDeviceGameFlowType _type;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_ChangeGameFlowStatus_Statics::NewProp__type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_ChangeGameFlowStatus_Statics::NewProp__type = { "_type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELInputDeviceObserveManager_eventChangeGameFlowStatus_Parms, _type), Z_Construct_UEnum_ABP_200508_EInputDeviceGameFlowType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELInputDeviceObserveManager_ChangeGameFlowStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_ChangeGameFlowStatus_Statics::NewProp__type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_ChangeGameFlowStatus_Statics::NewProp__type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInputDeviceObserveManager_ChangeGameFlowStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELInputDeviceObserveManager_ChangeGameFlowStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELInputDeviceObserveManager, nullptr, "ChangeGameFlowStatus", nullptr, nullptr, sizeof(ELInputDeviceObserveManager_eventChangeGameFlowStatus_Parms), Z_Construct_UFunction_UELInputDeviceObserveManager_ChangeGameFlowStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_ChangeGameFlowStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELInputDeviceObserveManager_ChangeGameFlowStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_ChangeGameFlowStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELInputDeviceObserveManager_ChangeGameFlowStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELInputDeviceObserveManager_ChangeGameFlowStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELInputDeviceObserveManager_CheckExistHostController_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInputDeviceObserveManager_CheckExistHostController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELInputDeviceObserveManager_CheckExistHostController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELInputDeviceObserveManager, nullptr, "CheckExistHostController", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELInputDeviceObserveManager_CheckExistHostController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_CheckExistHostController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELInputDeviceObserveManager_CheckExistHostController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELInputDeviceObserveManager_CheckExistHostController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELInputDeviceObserveManager_CheckLocalConnectedDevice_Statics
	{
		struct ELInputDeviceObserveManager_eventCheckLocalConnectedDevice_Parms
		{
			UObject* _pWorldContextObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_CheckLocalConnectedDevice_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELInputDeviceObserveManager_eventCheckLocalConnectedDevice_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELInputDeviceObserveManager_CheckLocalConnectedDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_CheckLocalConnectedDevice_Statics::NewProp__pWorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInputDeviceObserveManager_CheckLocalConnectedDevice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELInputDeviceObserveManager_CheckLocalConnectedDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELInputDeviceObserveManager, nullptr, "CheckLocalConnectedDevice", nullptr, nullptr, sizeof(ELInputDeviceObserveManager_eventCheckLocalConnectedDevice_Parms), Z_Construct_UFunction_UELInputDeviceObserveManager_CheckLocalConnectedDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_CheckLocalConnectedDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELInputDeviceObserveManager_CheckLocalConnectedDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_CheckLocalConnectedDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELInputDeviceObserveManager_CheckLocalConnectedDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELInputDeviceObserveManager_CheckLocalConnectedDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELInputDeviceObserveManager_ClearExhibitionPlayerIndexMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInputDeviceObserveManager_ClearExhibitionPlayerIndexMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELInputDeviceObserveManager_ClearExhibitionPlayerIndexMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELInputDeviceObserveManager, nullptr, "ClearExhibitionPlayerIndexMap", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELInputDeviceObserveManager_ClearExhibitionPlayerIndexMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_ClearExhibitionPlayerIndexMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELInputDeviceObserveManager_ClearExhibitionPlayerIndexMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELInputDeviceObserveManager_ClearExhibitionPlayerIndexMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELInputDeviceObserveManager_ClearGameFlowStatus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInputDeviceObserveManager_ClearGameFlowStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELInputDeviceObserveManager_ClearGameFlowStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELInputDeviceObserveManager, nullptr, "ClearGameFlowStatus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELInputDeviceObserveManager_ClearGameFlowStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_ClearGameFlowStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELInputDeviceObserveManager_ClearGameFlowStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELInputDeviceObserveManager_ClearGameFlowStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELInputDeviceObserveManager_ClearJoinLocalExhibition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInputDeviceObserveManager_ClearJoinLocalExhibition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELInputDeviceObserveManager_ClearJoinLocalExhibition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELInputDeviceObserveManager, nullptr, "ClearJoinLocalExhibition", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELInputDeviceObserveManager_ClearJoinLocalExhibition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_ClearJoinLocalExhibition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELInputDeviceObserveManager_ClearJoinLocalExhibition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELInputDeviceObserveManager_ClearJoinLocalExhibition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELInputDeviceObserveManager_EndCheckConnectionStatus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInputDeviceObserveManager_EndCheckConnectionStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELInputDeviceObserveManager_EndCheckConnectionStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELInputDeviceObserveManager, nullptr, "EndCheckConnectionStatus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELInputDeviceObserveManager_EndCheckConnectionStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_EndCheckConnectionStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELInputDeviceObserveManager_EndCheckConnectionStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELInputDeviceObserveManager_EndCheckConnectionStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELInputDeviceObserveManager_GetBindControllerUserName_Statics
	{
		struct ELInputDeviceObserveManager_eventGetBindControllerUserName_Parms
		{
			int32 _targetControllerID;
			FText _Result;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__targetControllerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetControllerID;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInputDeviceObserveManager_GetBindControllerUserName_Statics::NewProp__targetControllerID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_GetBindControllerUserName_Statics::NewProp__targetControllerID = { "_targetControllerID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELInputDeviceObserveManager_eventGetBindControllerUserName_Parms, _targetControllerID), METADATA_PARAMS(Z_Construct_UFunction_UELInputDeviceObserveManager_GetBindControllerUserName_Statics::NewProp__targetControllerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_GetBindControllerUserName_Statics::NewProp__targetControllerID_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_GetBindControllerUserName_Statics::NewProp__Result = { "_Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELInputDeviceObserveManager_eventGetBindControllerUserName_Parms, _Result), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELInputDeviceObserveManager_GetBindControllerUserName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_GetBindControllerUserName_Statics::NewProp__targetControllerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_GetBindControllerUserName_Statics::NewProp__Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInputDeviceObserveManager_GetBindControllerUserName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELInputDeviceObserveManager_GetBindControllerUserName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELInputDeviceObserveManager, nullptr, "GetBindControllerUserName", nullptr, nullptr, sizeof(ELInputDeviceObserveManager_eventGetBindControllerUserName_Parms), Z_Construct_UFunction_UELInputDeviceObserveManager_GetBindControllerUserName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_GetBindControllerUserName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELInputDeviceObserveManager_GetBindControllerUserName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_GetBindControllerUserName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELInputDeviceObserveManager_GetBindControllerUserName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELInputDeviceObserveManager_GetBindControllerUserName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELInputDeviceObserveManager_GetBindControllerUserNameList_Statics
	{
		struct ELInputDeviceObserveManager_eventGetBindControllerUserNameList_Parms
		{
			TArray<int32> _targetControllerIdList;
			TArray<FText> _Result;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetControllerIdList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__targetControllerIdList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__targetControllerIdList;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__Result_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_GetBindControllerUserNameList_Statics::NewProp__targetControllerIdList_Inner = { "_targetControllerIdList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInputDeviceObserveManager_GetBindControllerUserNameList_Statics::NewProp__targetControllerIdList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_GetBindControllerUserNameList_Statics::NewProp__targetControllerIdList = { "_targetControllerIdList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELInputDeviceObserveManager_eventGetBindControllerUserNameList_Parms, _targetControllerIdList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELInputDeviceObserveManager_GetBindControllerUserNameList_Statics::NewProp__targetControllerIdList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_GetBindControllerUserNameList_Statics::NewProp__targetControllerIdList_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_GetBindControllerUserNameList_Statics::NewProp__Result_Inner = { "_Result", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_GetBindControllerUserNameList_Statics::NewProp__Result = { "_Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELInputDeviceObserveManager_eventGetBindControllerUserNameList_Parms, _Result), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELInputDeviceObserveManager_GetBindControllerUserNameList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_GetBindControllerUserNameList_Statics::NewProp__targetControllerIdList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_GetBindControllerUserNameList_Statics::NewProp__targetControllerIdList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_GetBindControllerUserNameList_Statics::NewProp__Result_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_GetBindControllerUserNameList_Statics::NewProp__Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInputDeviceObserveManager_GetBindControllerUserNameList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELInputDeviceObserveManager_GetBindControllerUserNameList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELInputDeviceObserveManager, nullptr, "GetBindControllerUserNameList", nullptr, nullptr, sizeof(ELInputDeviceObserveManager_eventGetBindControllerUserNameList_Parms), Z_Construct_UFunction_UELInputDeviceObserveManager_GetBindControllerUserNameList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_GetBindControllerUserNameList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELInputDeviceObserveManager_GetBindControllerUserNameList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_GetBindControllerUserNameList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELInputDeviceObserveManager_GetBindControllerUserNameList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELInputDeviceObserveManager_GetBindControllerUserNameList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELInputDeviceObserveManager_GetCurrentControllerIds_Statics
	{
		struct ELInputDeviceObserveManager_eventGetCurrentControllerIds_Parms
		{
			TArray<int32> _Result;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Result_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_GetCurrentControllerIds_Statics::NewProp__Result_Inner = { "_Result", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_GetCurrentControllerIds_Statics::NewProp__Result = { "_Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELInputDeviceObserveManager_eventGetCurrentControllerIds_Parms, _Result), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELInputDeviceObserveManager_GetCurrentControllerIds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_GetCurrentControllerIds_Statics::NewProp__Result_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_GetCurrentControllerIds_Statics::NewProp__Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInputDeviceObserveManager_GetCurrentControllerIds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELInputDeviceObserveManager_GetCurrentControllerIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELInputDeviceObserveManager, nullptr, "GetCurrentControllerIds", nullptr, nullptr, sizeof(ELInputDeviceObserveManager_eventGetCurrentControllerIds_Parms), Z_Construct_UFunction_UELInputDeviceObserveManager_GetCurrentControllerIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_GetCurrentControllerIds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELInputDeviceObserveManager_GetCurrentControllerIds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_GetCurrentControllerIds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELInputDeviceObserveManager_GetCurrentControllerIds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELInputDeviceObserveManager_GetCurrentControllerIds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELInputDeviceObserveManager_GetCurrentGameFlowStatus_Statics
	{
		struct ELInputDeviceObserveManager_eventGetCurrentGameFlowStatus_Parms
		{
			EInputDeviceGameFlowType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_GetCurrentGameFlowStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_GetCurrentGameFlowStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELInputDeviceObserveManager_eventGetCurrentGameFlowStatus_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_EInputDeviceGameFlowType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELInputDeviceObserveManager_GetCurrentGameFlowStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_GetCurrentGameFlowStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_GetCurrentGameFlowStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInputDeviceObserveManager_GetCurrentGameFlowStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELInputDeviceObserveManager_GetCurrentGameFlowStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELInputDeviceObserveManager, nullptr, "GetCurrentGameFlowStatus", nullptr, nullptr, sizeof(ELInputDeviceObserveManager_eventGetCurrentGameFlowStatus_Parms), Z_Construct_UFunction_UELInputDeviceObserveManager_GetCurrentGameFlowStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_GetCurrentGameFlowStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELInputDeviceObserveManager_GetCurrentGameFlowStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_GetCurrentGameFlowStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELInputDeviceObserveManager_GetCurrentGameFlowStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELInputDeviceObserveManager_GetCurrentGameFlowStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELInputDeviceObserveManager_GetExhibitionPlayerIndex_Statics
	{
		struct ELInputDeviceObserveManager_eventGetExhibitionPlayerIndex_Parms
		{
			int32 _targetControllerID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetControllerID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_GetExhibitionPlayerIndex_Statics::NewProp__targetControllerID = { "_targetControllerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELInputDeviceObserveManager_eventGetExhibitionPlayerIndex_Parms, _targetControllerID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_GetExhibitionPlayerIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELInputDeviceObserveManager_eventGetExhibitionPlayerIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELInputDeviceObserveManager_GetExhibitionPlayerIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_GetExhibitionPlayerIndex_Statics::NewProp__targetControllerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_GetExhibitionPlayerIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInputDeviceObserveManager_GetExhibitionPlayerIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELInputDeviceObserveManager_GetExhibitionPlayerIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELInputDeviceObserveManager, nullptr, "GetExhibitionPlayerIndex", nullptr, nullptr, sizeof(ELInputDeviceObserveManager_eventGetExhibitionPlayerIndex_Parms), Z_Construct_UFunction_UELInputDeviceObserveManager_GetExhibitionPlayerIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_GetExhibitionPlayerIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELInputDeviceObserveManager_GetExhibitionPlayerIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_GetExhibitionPlayerIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELInputDeviceObserveManager_GetExhibitionPlayerIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELInputDeviceObserveManager_GetExhibitionPlayerIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELInputDeviceObserveManager_GetGameHostPadID_Statics
	{
		struct ELInputDeviceObserveManager_eventGetGameHostPadID_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_GetGameHostPadID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELInputDeviceObserveManager_eventGetGameHostPadID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELInputDeviceObserveManager_GetGameHostPadID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_GetGameHostPadID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInputDeviceObserveManager_GetGameHostPadID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELInputDeviceObserveManager_GetGameHostPadID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELInputDeviceObserveManager, nullptr, "GetGameHostPadID", nullptr, nullptr, sizeof(ELInputDeviceObserveManager_eventGetGameHostPadID_Parms), Z_Construct_UFunction_UELInputDeviceObserveManager_GetGameHostPadID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_GetGameHostPadID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELInputDeviceObserveManager_GetGameHostPadID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_GetGameHostPadID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELInputDeviceObserveManager_GetGameHostPadID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELInputDeviceObserveManager_GetGameHostPadID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELInputDeviceObserveManager_GetInputControllerNum_Statics
	{
		struct ELInputDeviceObserveManager_eventGetInputControllerNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_GetInputControllerNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELInputDeviceObserveManager_eventGetInputControllerNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELInputDeviceObserveManager_GetInputControllerNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_GetInputControllerNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInputDeviceObserveManager_GetInputControllerNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELInputDeviceObserveManager_GetInputControllerNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELInputDeviceObserveManager, nullptr, "GetInputControllerNum", nullptr, nullptr, sizeof(ELInputDeviceObserveManager_eventGetInputControllerNum_Parms), Z_Construct_UFunction_UELInputDeviceObserveManager_GetInputControllerNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_GetInputControllerNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELInputDeviceObserveManager_GetInputControllerNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_GetInputControllerNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELInputDeviceObserveManager_GetInputControllerNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELInputDeviceObserveManager_GetInputControllerNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELInputDeviceObserveManager_GetJoinedLocalExhibitionControllerIdList_Statics
	{
		struct ELInputDeviceObserveManager_eventGetJoinedLocalExhibitionControllerIdList_Parms
		{
			TArray<int32> _Result;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Result_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_GetJoinedLocalExhibitionControllerIdList_Statics::NewProp__Result_Inner = { "_Result", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_GetJoinedLocalExhibitionControllerIdList_Statics::NewProp__Result = { "_Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELInputDeviceObserveManager_eventGetJoinedLocalExhibitionControllerIdList_Parms, _Result), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELInputDeviceObserveManager_GetJoinedLocalExhibitionControllerIdList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_GetJoinedLocalExhibitionControllerIdList_Statics::NewProp__Result_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_GetJoinedLocalExhibitionControllerIdList_Statics::NewProp__Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInputDeviceObserveManager_GetJoinedLocalExhibitionControllerIdList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELInputDeviceObserveManager_GetJoinedLocalExhibitionControllerIdList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELInputDeviceObserveManager, nullptr, "GetJoinedLocalExhibitionControllerIdList", nullptr, nullptr, sizeof(ELInputDeviceObserveManager_eventGetJoinedLocalExhibitionControllerIdList_Parms), Z_Construct_UFunction_UELInputDeviceObserveManager_GetJoinedLocalExhibitionControllerIdList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_GetJoinedLocalExhibitionControllerIdList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELInputDeviceObserveManager_GetJoinedLocalExhibitionControllerIdList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_GetJoinedLocalExhibitionControllerIdList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELInputDeviceObserveManager_GetJoinedLocalExhibitionControllerIdList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELInputDeviceObserveManager_GetJoinedLocalExhibitionControllerIdList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELInputDeviceObserveManager_IsActiveNotifyDisconnectedDialog_Statics
	{
		struct ELInputDeviceObserveManager_eventIsActiveNotifyDisconnectedDialog_Parms
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
	void Z_Construct_UFunction_UELInputDeviceObserveManager_IsActiveNotifyDisconnectedDialog_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELInputDeviceObserveManager_eventIsActiveNotifyDisconnectedDialog_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_IsActiveNotifyDisconnectedDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELInputDeviceObserveManager_eventIsActiveNotifyDisconnectedDialog_Parms), &Z_Construct_UFunction_UELInputDeviceObserveManager_IsActiveNotifyDisconnectedDialog_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELInputDeviceObserveManager_IsActiveNotifyDisconnectedDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_IsActiveNotifyDisconnectedDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInputDeviceObserveManager_IsActiveNotifyDisconnectedDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELInputDeviceObserveManager_IsActiveNotifyDisconnectedDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELInputDeviceObserveManager, nullptr, "IsActiveNotifyDisconnectedDialog", nullptr, nullptr, sizeof(ELInputDeviceObserveManager_eventIsActiveNotifyDisconnectedDialog_Parms), Z_Construct_UFunction_UELInputDeviceObserveManager_IsActiveNotifyDisconnectedDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_IsActiveNotifyDisconnectedDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELInputDeviceObserveManager_IsActiveNotifyDisconnectedDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_IsActiveNotifyDisconnectedDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELInputDeviceObserveManager_IsActiveNotifyDisconnectedDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELInputDeviceObserveManager_IsActiveNotifyDisconnectedDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELInputDeviceObserveManager_IsAssignedExhibitionPlayerIndex_Statics
	{
		struct ELInputDeviceObserveManager_eventIsAssignedExhibitionPlayerIndex_Parms
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
	void Z_Construct_UFunction_UELInputDeviceObserveManager_IsAssignedExhibitionPlayerIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELInputDeviceObserveManager_eventIsAssignedExhibitionPlayerIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_IsAssignedExhibitionPlayerIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELInputDeviceObserveManager_eventIsAssignedExhibitionPlayerIndex_Parms), &Z_Construct_UFunction_UELInputDeviceObserveManager_IsAssignedExhibitionPlayerIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELInputDeviceObserveManager_IsAssignedExhibitionPlayerIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_IsAssignedExhibitionPlayerIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInputDeviceObserveManager_IsAssignedExhibitionPlayerIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELInputDeviceObserveManager_IsAssignedExhibitionPlayerIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELInputDeviceObserveManager, nullptr, "IsAssignedExhibitionPlayerIndex", nullptr, nullptr, sizeof(ELInputDeviceObserveManager_eventIsAssignedExhibitionPlayerIndex_Parms), Z_Construct_UFunction_UELInputDeviceObserveManager_IsAssignedExhibitionPlayerIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_IsAssignedExhibitionPlayerIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELInputDeviceObserveManager_IsAssignedExhibitionPlayerIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_IsAssignedExhibitionPlayerIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELInputDeviceObserveManager_IsAssignedExhibitionPlayerIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELInputDeviceObserveManager_IsAssignedExhibitionPlayerIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELInputDeviceObserveManager_IsCheckingConnectionStatus_Statics
	{
		struct ELInputDeviceObserveManager_eventIsCheckingConnectionStatus_Parms
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
	void Z_Construct_UFunction_UELInputDeviceObserveManager_IsCheckingConnectionStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELInputDeviceObserveManager_eventIsCheckingConnectionStatus_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_IsCheckingConnectionStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELInputDeviceObserveManager_eventIsCheckingConnectionStatus_Parms), &Z_Construct_UFunction_UELInputDeviceObserveManager_IsCheckingConnectionStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELInputDeviceObserveManager_IsCheckingConnectionStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_IsCheckingConnectionStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInputDeviceObserveManager_IsCheckingConnectionStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELInputDeviceObserveManager_IsCheckingConnectionStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELInputDeviceObserveManager, nullptr, "IsCheckingConnectionStatus", nullptr, nullptr, sizeof(ELInputDeviceObserveManager_eventIsCheckingConnectionStatus_Parms), Z_Construct_UFunction_UELInputDeviceObserveManager_IsCheckingConnectionStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_IsCheckingConnectionStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELInputDeviceObserveManager_IsCheckingConnectionStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_IsCheckingConnectionStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELInputDeviceObserveManager_IsCheckingConnectionStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELInputDeviceObserveManager_IsCheckingConnectionStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELInputDeviceObserveManager_IsConnectedDevice_Statics
	{
		struct ELInputDeviceObserveManager_eventIsConnectedDevice_Parms
		{
			int32 _targetControllerID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetControllerID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_IsConnectedDevice_Statics::NewProp__targetControllerID = { "_targetControllerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELInputDeviceObserveManager_eventIsConnectedDevice_Parms, _targetControllerID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELInputDeviceObserveManager_IsConnectedDevice_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELInputDeviceObserveManager_eventIsConnectedDevice_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_IsConnectedDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELInputDeviceObserveManager_eventIsConnectedDevice_Parms), &Z_Construct_UFunction_UELInputDeviceObserveManager_IsConnectedDevice_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELInputDeviceObserveManager_IsConnectedDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_IsConnectedDevice_Statics::NewProp__targetControllerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_IsConnectedDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInputDeviceObserveManager_IsConnectedDevice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELInputDeviceObserveManager_IsConnectedDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELInputDeviceObserveManager, nullptr, "IsConnectedDevice", nullptr, nullptr, sizeof(ELInputDeviceObserveManager_eventIsConnectedDevice_Parms), Z_Construct_UFunction_UELInputDeviceObserveManager_IsConnectedDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_IsConnectedDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELInputDeviceObserveManager_IsConnectedDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_IsConnectedDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELInputDeviceObserveManager_IsConnectedDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELInputDeviceObserveManager_IsConnectedDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELInputDeviceObserveManager_IsConnectedHostPad_Statics
	{
		struct ELInputDeviceObserveManager_eventIsConnectedHostPad_Parms
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
	void Z_Construct_UFunction_UELInputDeviceObserveManager_IsConnectedHostPad_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELInputDeviceObserveManager_eventIsConnectedHostPad_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_IsConnectedHostPad_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELInputDeviceObserveManager_eventIsConnectedHostPad_Parms), &Z_Construct_UFunction_UELInputDeviceObserveManager_IsConnectedHostPad_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELInputDeviceObserveManager_IsConnectedHostPad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_IsConnectedHostPad_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInputDeviceObserveManager_IsConnectedHostPad_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELInputDeviceObserveManager_IsConnectedHostPad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELInputDeviceObserveManager, nullptr, "IsConnectedHostPad", nullptr, nullptr, sizeof(ELInputDeviceObserveManager_eventIsConnectedHostPad_Parms), Z_Construct_UFunction_UELInputDeviceObserveManager_IsConnectedHostPad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_IsConnectedHostPad_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELInputDeviceObserveManager_IsConnectedHostPad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_IsConnectedHostPad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELInputDeviceObserveManager_IsConnectedHostPad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELInputDeviceObserveManager_IsConnectedHostPad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELInputDeviceObserveManager_IsHandheldStyle_Statics
	{
		struct ELInputDeviceObserveManager_eventIsHandheldStyle_Parms
		{
			int32 Index;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_IsHandheldStyle_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELInputDeviceObserveManager_eventIsHandheldStyle_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELInputDeviceObserveManager_IsHandheldStyle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELInputDeviceObserveManager_eventIsHandheldStyle_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_IsHandheldStyle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELInputDeviceObserveManager_eventIsHandheldStyle_Parms), &Z_Construct_UFunction_UELInputDeviceObserveManager_IsHandheldStyle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELInputDeviceObserveManager_IsHandheldStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_IsHandheldStyle_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_IsHandheldStyle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInputDeviceObserveManager_IsHandheldStyle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELInputDeviceObserveManager_IsHandheldStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELInputDeviceObserveManager, nullptr, "IsHandheldStyle", nullptr, nullptr, sizeof(ELInputDeviceObserveManager_eventIsHandheldStyle_Parms), Z_Construct_UFunction_UELInputDeviceObserveManager_IsHandheldStyle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_IsHandheldStyle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELInputDeviceObserveManager_IsHandheldStyle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_IsHandheldStyle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELInputDeviceObserveManager_IsHandheldStyle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELInputDeviceObserveManager_IsHandheldStyle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELInputDeviceObserveManager_IsJoyCon_Statics
	{
		struct ELInputDeviceObserveManager_eventIsJoyCon_Parms
		{
			int32 Index;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_IsJoyCon_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELInputDeviceObserveManager_eventIsJoyCon_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELInputDeviceObserveManager_IsJoyCon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELInputDeviceObserveManager_eventIsJoyCon_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_IsJoyCon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELInputDeviceObserveManager_eventIsJoyCon_Parms), &Z_Construct_UFunction_UELInputDeviceObserveManager_IsJoyCon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELInputDeviceObserveManager_IsJoyCon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_IsJoyCon_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_IsJoyCon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInputDeviceObserveManager_IsJoyCon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELInputDeviceObserveManager_IsJoyCon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELInputDeviceObserveManager, nullptr, "IsJoyCon", nullptr, nullptr, sizeof(ELInputDeviceObserveManager_eventIsJoyCon_Parms), Z_Construct_UFunction_UELInputDeviceObserveManager_IsJoyCon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_IsJoyCon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELInputDeviceObserveManager_IsJoyCon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_IsJoyCon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELInputDeviceObserveManager_IsJoyCon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELInputDeviceObserveManager_IsJoyCon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELInputDeviceObserveManager_OnClosedDisconnectedDialog_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInputDeviceObserveManager_OnClosedDisconnectedDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELInputDeviceObserveManager_OnClosedDisconnectedDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELInputDeviceObserveManager, nullptr, "OnClosedDisconnectedDialog", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELInputDeviceObserveManager_OnClosedDisconnectedDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_OnClosedDisconnectedDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELInputDeviceObserveManager_OnClosedDisconnectedDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELInputDeviceObserveManager_OnClosedDisconnectedDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELInputDeviceObserveManager_OnManipulateCursor_Statics
	{
		struct ELInputDeviceObserveManager_eventOnManipulateCursor_Parms
		{
			bool _isLeft;
		};
		static void NewProp__isLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELInputDeviceObserveManager_OnManipulateCursor_Statics::NewProp__isLeft_SetBit(void* Obj)
	{
		((ELInputDeviceObserveManager_eventOnManipulateCursor_Parms*)Obj)->_isLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_OnManipulateCursor_Statics::NewProp__isLeft = { "_isLeft", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELInputDeviceObserveManager_eventOnManipulateCursor_Parms), &Z_Construct_UFunction_UELInputDeviceObserveManager_OnManipulateCursor_Statics::NewProp__isLeft_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELInputDeviceObserveManager_OnManipulateCursor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_OnManipulateCursor_Statics::NewProp__isLeft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInputDeviceObserveManager_OnManipulateCursor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELInputDeviceObserveManager_OnManipulateCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELInputDeviceObserveManager, nullptr, "OnManipulateCursor", nullptr, nullptr, sizeof(ELInputDeviceObserveManager_eventOnManipulateCursor_Parms), Z_Construct_UFunction_UELInputDeviceObserveManager_OnManipulateCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_OnManipulateCursor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELInputDeviceObserveManager_OnManipulateCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_OnManipulateCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELInputDeviceObserveManager_OnManipulateCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELInputDeviceObserveManager_OnManipulateCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELInputDeviceObserveManager_OnManipulateDecideBtn_Statics
	{
		struct ELInputDeviceObserveManager_eventOnManipulateDecideBtn_Parms
		{
			APlayerController* PlayerController;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_OnManipulateDecideBtn_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELInputDeviceObserveManager_eventOnManipulateDecideBtn_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELInputDeviceObserveManager_OnManipulateDecideBtn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_OnManipulateDecideBtn_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInputDeviceObserveManager_OnManipulateDecideBtn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELInputDeviceObserveManager_OnManipulateDecideBtn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELInputDeviceObserveManager, nullptr, "OnManipulateDecideBtn", nullptr, nullptr, sizeof(ELInputDeviceObserveManager_eventOnManipulateDecideBtn_Parms), Z_Construct_UFunction_UELInputDeviceObserveManager_OnManipulateDecideBtn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_OnManipulateDecideBtn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELInputDeviceObserveManager_OnManipulateDecideBtn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_OnManipulateDecideBtn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELInputDeviceObserveManager_OnManipulateDecideBtn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELInputDeviceObserveManager_OnManipulateDecideBtn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELInputDeviceObserveManager_OnOpenedDisconnectedDialog_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInputDeviceObserveManager_OnOpenedDisconnectedDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELInputDeviceObserveManager_OnOpenedDisconnectedDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELInputDeviceObserveManager, nullptr, "OnOpenedDisconnectedDialog", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELInputDeviceObserveManager_OnOpenedDisconnectedDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_OnOpenedDisconnectedDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELInputDeviceObserveManager_OnOpenedDisconnectedDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELInputDeviceObserveManager_OnOpenedDisconnectedDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELInputDeviceObserveManager_SetAssignHostPad_Statics
	{
		struct ELInputDeviceObserveManager_eventSetAssignHostPad_Parms
		{
			int32 _targetControllerID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetControllerID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_SetAssignHostPad_Statics::NewProp__targetControllerID = { "_targetControllerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELInputDeviceObserveManager_eventSetAssignHostPad_Parms, _targetControllerID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELInputDeviceObserveManager_SetAssignHostPad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_SetAssignHostPad_Statics::NewProp__targetControllerID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInputDeviceObserveManager_SetAssignHostPad_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELInputDeviceObserveManager_SetAssignHostPad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELInputDeviceObserveManager, nullptr, "SetAssignHostPad", nullptr, nullptr, sizeof(ELInputDeviceObserveManager_eventSetAssignHostPad_Parms), Z_Construct_UFunction_UELInputDeviceObserveManager_SetAssignHostPad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_SetAssignHostPad_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELInputDeviceObserveManager_SetAssignHostPad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_SetAssignHostPad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELInputDeviceObserveManager_SetAssignHostPad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELInputDeviceObserveManager_SetAssignHostPad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELInputDeviceObserveManager_SetDecideMatchControllerID_Statics
	{
		struct ELInputDeviceObserveManager_eventSetDecideMatchControllerID_Parms
		{
			int32 ID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_SetDecideMatchControllerID_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELInputDeviceObserveManager_eventSetDecideMatchControllerID_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELInputDeviceObserveManager_SetDecideMatchControllerID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_SetDecideMatchControllerID_Statics::NewProp_ID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInputDeviceObserveManager_SetDecideMatchControllerID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELInputDeviceObserveManager_SetDecideMatchControllerID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELInputDeviceObserveManager, nullptr, "SetDecideMatchControllerID", nullptr, nullptr, sizeof(ELInputDeviceObserveManager_eventSetDecideMatchControllerID_Parms), Z_Construct_UFunction_UELInputDeviceObserveManager_SetDecideMatchControllerID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_SetDecideMatchControllerID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELInputDeviceObserveManager_SetDecideMatchControllerID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_SetDecideMatchControllerID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELInputDeviceObserveManager_SetDecideMatchControllerID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELInputDeviceObserveManager_SetDecideMatchControllerID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELInputDeviceObserveManager_SetExhibitionPlayerIndex_Statics
	{
		struct ELInputDeviceObserveManager_eventSetExhibitionPlayerIndex_Parms
		{
			int32 _targetControllerID;
			int32 _Index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetControllerID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_SetExhibitionPlayerIndex_Statics::NewProp__targetControllerID = { "_targetControllerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELInputDeviceObserveManager_eventSetExhibitionPlayerIndex_Parms, _targetControllerID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_SetExhibitionPlayerIndex_Statics::NewProp__Index = { "_Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELInputDeviceObserveManager_eventSetExhibitionPlayerIndex_Parms, _Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELInputDeviceObserveManager_SetExhibitionPlayerIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_SetExhibitionPlayerIndex_Statics::NewProp__targetControllerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_SetExhibitionPlayerIndex_Statics::NewProp__Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInputDeviceObserveManager_SetExhibitionPlayerIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELInputDeviceObserveManager_SetExhibitionPlayerIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELInputDeviceObserveManager, nullptr, "SetExhibitionPlayerIndex", nullptr, nullptr, sizeof(ELInputDeviceObserveManager_eventSetExhibitionPlayerIndex_Parms), Z_Construct_UFunction_UELInputDeviceObserveManager_SetExhibitionPlayerIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_SetExhibitionPlayerIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELInputDeviceObserveManager_SetExhibitionPlayerIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_SetExhibitionPlayerIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELInputDeviceObserveManager_SetExhibitionPlayerIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELInputDeviceObserveManager_SetExhibitionPlayerIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELInputDeviceObserveManager_SetLightbarColor_Statics
	{
		struct ELInputDeviceObserveManager_eventSetLightbarColor_Parms
		{
			int32 ControllerId;
			FColor Color;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ControllerId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_SetLightbarColor_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELInputDeviceObserveManager_eventSetLightbarColor_Parms, ControllerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_SetLightbarColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELInputDeviceObserveManager_eventSetLightbarColor_Parms, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELInputDeviceObserveManager_SetLightbarColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_SetLightbarColor_Statics::NewProp_ControllerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_SetLightbarColor_Statics::NewProp_Color,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInputDeviceObserveManager_SetLightbarColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELInputDeviceObserveManager_SetLightbarColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELInputDeviceObserveManager, nullptr, "SetLightbarColor", nullptr, nullptr, sizeof(ELInputDeviceObserveManager_eventSetLightbarColor_Parms), Z_Construct_UFunction_UELInputDeviceObserveManager_SetLightbarColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_SetLightbarColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELInputDeviceObserveManager_SetLightbarColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_SetLightbarColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELInputDeviceObserveManager_SetLightbarColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELInputDeviceObserveManager_SetLightbarColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELInputDeviceObserveManager_SetManipulateKeyboardeMode_Statics
	{
		struct ELInputDeviceObserveManager_eventSetManipulateKeyboardeMode_Parms
		{
			bool Enable;
		};
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELInputDeviceObserveManager_SetManipulateKeyboardeMode_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((ELInputDeviceObserveManager_eventSetManipulateKeyboardeMode_Parms*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_SetManipulateKeyboardeMode_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELInputDeviceObserveManager_eventSetManipulateKeyboardeMode_Parms), &Z_Construct_UFunction_UELInputDeviceObserveManager_SetManipulateKeyboardeMode_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELInputDeviceObserveManager_SetManipulateKeyboardeMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_SetManipulateKeyboardeMode_Statics::NewProp_Enable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInputDeviceObserveManager_SetManipulateKeyboardeMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELInputDeviceObserveManager_SetManipulateKeyboardeMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELInputDeviceObserveManager, nullptr, "SetManipulateKeyboardeMode", nullptr, nullptr, sizeof(ELInputDeviceObserveManager_eventSetManipulateKeyboardeMode_Parms), Z_Construct_UFunction_UELInputDeviceObserveManager_SetManipulateKeyboardeMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_SetManipulateKeyboardeMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELInputDeviceObserveManager_SetManipulateKeyboardeMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_SetManipulateKeyboardeMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELInputDeviceObserveManager_SetManipulateKeyboardeMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELInputDeviceObserveManager_SetManipulateKeyboardeMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELInputDeviceObserveManager_SetShowDisconnectedDeviceId_Statics
	{
		struct ELInputDeviceObserveManager_eventSetShowDisconnectedDeviceId_Parms
		{
			int32 ControllerId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ControllerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInputDeviceObserveManager_SetShowDisconnectedDeviceId_Statics::NewProp_ControllerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_SetShowDisconnectedDeviceId_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELInputDeviceObserveManager_eventSetShowDisconnectedDeviceId_Parms, ControllerId), METADATA_PARAMS(Z_Construct_UFunction_UELInputDeviceObserveManager_SetShowDisconnectedDeviceId_Statics::NewProp_ControllerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_SetShowDisconnectedDeviceId_Statics::NewProp_ControllerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELInputDeviceObserveManager_SetShowDisconnectedDeviceId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_SetShowDisconnectedDeviceId_Statics::NewProp_ControllerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInputDeviceObserveManager_SetShowDisconnectedDeviceId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELInputDeviceObserveManager_SetShowDisconnectedDeviceId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELInputDeviceObserveManager, nullptr, "SetShowDisconnectedDeviceId", nullptr, nullptr, sizeof(ELInputDeviceObserveManager_eventSetShowDisconnectedDeviceId_Parms), Z_Construct_UFunction_UELInputDeviceObserveManager_SetShowDisconnectedDeviceId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_SetShowDisconnectedDeviceId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELInputDeviceObserveManager_SetShowDisconnectedDeviceId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_SetShowDisconnectedDeviceId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELInputDeviceObserveManager_SetShowDisconnectedDeviceId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELInputDeviceObserveManager_SetShowDisconnectedDeviceId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELInputDeviceObserveManager_StartCheckConnectionStatus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInputDeviceObserveManager_StartCheckConnectionStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELInputDeviceObserveManager_StartCheckConnectionStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELInputDeviceObserveManager, nullptr, "StartCheckConnectionStatus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELInputDeviceObserveManager_StartCheckConnectionStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_StartCheckConnectionStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELInputDeviceObserveManager_StartCheckConnectionStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELInputDeviceObserveManager_StartCheckConnectionStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELInputDeviceObserveManager_UpdateInputDeviceMap_Statics
	{
		struct ELInputDeviceObserveManager_eventUpdateInputDeviceMap_Parms
		{
			int32 _updateSrcDeviceIndex;
			int32 _updateDstDeviceIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__updateSrcDeviceIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__updateSrcDeviceIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__updateDstDeviceIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__updateDstDeviceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInputDeviceObserveManager_UpdateInputDeviceMap_Statics::NewProp__updateSrcDeviceIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_UpdateInputDeviceMap_Statics::NewProp__updateSrcDeviceIndex = { "_updateSrcDeviceIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELInputDeviceObserveManager_eventUpdateInputDeviceMap_Parms, _updateSrcDeviceIndex), METADATA_PARAMS(Z_Construct_UFunction_UELInputDeviceObserveManager_UpdateInputDeviceMap_Statics::NewProp__updateSrcDeviceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_UpdateInputDeviceMap_Statics::NewProp__updateSrcDeviceIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInputDeviceObserveManager_UpdateInputDeviceMap_Statics::NewProp__updateDstDeviceIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELInputDeviceObserveManager_UpdateInputDeviceMap_Statics::NewProp__updateDstDeviceIndex = { "_updateDstDeviceIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELInputDeviceObserveManager_eventUpdateInputDeviceMap_Parms, _updateDstDeviceIndex), METADATA_PARAMS(Z_Construct_UFunction_UELInputDeviceObserveManager_UpdateInputDeviceMap_Statics::NewProp__updateDstDeviceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_UpdateInputDeviceMap_Statics::NewProp__updateDstDeviceIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELInputDeviceObserveManager_UpdateInputDeviceMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_UpdateInputDeviceMap_Statics::NewProp__updateSrcDeviceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInputDeviceObserveManager_UpdateInputDeviceMap_Statics::NewProp__updateDstDeviceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInputDeviceObserveManager_UpdateInputDeviceMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELInputDeviceObserveManager_UpdateInputDeviceMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELInputDeviceObserveManager, nullptr, "UpdateInputDeviceMap", nullptr, nullptr, sizeof(ELInputDeviceObserveManager_eventUpdateInputDeviceMap_Parms), Z_Construct_UFunction_UELInputDeviceObserveManager_UpdateInputDeviceMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_UpdateInputDeviceMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELInputDeviceObserveManager_UpdateInputDeviceMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInputDeviceObserveManager_UpdateInputDeviceMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELInputDeviceObserveManager_UpdateInputDeviceMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELInputDeviceObserveManager_UpdateInputDeviceMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELInputDeviceObserveManager_NoRegister()
	{
		return UELInputDeviceObserveManager::StaticClass();
	}
	struct Z_Construct_UClass_UELInputDeviceObserveManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnChangedInputDeviceEventHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChangedInputDeviceEventHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnOpenedDisconnectedDialogHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOpenedDisconnectedDialogHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnClosedDisconnectedDialogHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClosedDisconnectedDialogHandle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_InputDeviceMap_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_InputDeviceMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_InputDeviceMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_InputDeviceMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_DrawDeviceMap_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_DrawDeviceMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DrawDeviceMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_DrawDeviceMap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_ExhibitionPlayerIndexMap_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_ExhibitionPlayerIndexMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ExhibitionPlayerIndexMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_ExhibitionPlayerIndexMap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_JoinedLocalExhibitionControllerIdList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_JoinedLocalExhibitionControllerIdList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_JoinedLocalExhibitionControllerIdList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_ReserveNotifyDisconnectedInputDeviceMap_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_ReserveNotifyDisconnectedInputDeviceMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ReserveNotifyDisconnectedInputDeviceMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_ReserveNotifyDisconnectedInputDeviceMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ReserveNotifyDisconnectedHostController_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_ReserveNotifyDisconnectedHostController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_NotifyGamepadDisconnectedActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_NotifyGamepadDisconnectedActor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_GameFlowType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_GameFlowType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_GameFlowType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_GameHostControllerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_GameHostControllerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ManipulateKeyboardeMode_MetaData[];
#endif
		static void NewProp_m_ManipulateKeyboardeMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_ManipulateKeyboardeMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELInputDeviceObserveManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELInputDeviceObserveManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELInputDeviceObserveManager_AddJoinLocalExhibition, "AddJoinLocalExhibition" }, // 2964080221
		{ &Z_Construct_UFunction_UELInputDeviceObserveManager_BackupOldDeviceInfo, "BackupOldDeviceInfo" }, // 3224866698
		{ &Z_Construct_UFunction_UELInputDeviceObserveManager_ChangeGameFlowStatus, "ChangeGameFlowStatus" }, // 1790456706
		{ &Z_Construct_UFunction_UELInputDeviceObserveManager_CheckExistHostController, "CheckExistHostController" }, // 3682038076
		{ &Z_Construct_UFunction_UELInputDeviceObserveManager_CheckLocalConnectedDevice, "CheckLocalConnectedDevice" }, // 1606259757
		{ &Z_Construct_UFunction_UELInputDeviceObserveManager_ClearExhibitionPlayerIndexMap, "ClearExhibitionPlayerIndexMap" }, // 1685999054
		{ &Z_Construct_UFunction_UELInputDeviceObserveManager_ClearGameFlowStatus, "ClearGameFlowStatus" }, // 332610146
		{ &Z_Construct_UFunction_UELInputDeviceObserveManager_ClearJoinLocalExhibition, "ClearJoinLocalExhibition" }, // 2449703824
		{ &Z_Construct_UFunction_UELInputDeviceObserveManager_EndCheckConnectionStatus, "EndCheckConnectionStatus" }, // 4101420393
		{ &Z_Construct_UFunction_UELInputDeviceObserveManager_GetBindControllerUserName, "GetBindControllerUserName" }, // 1256203851
		{ &Z_Construct_UFunction_UELInputDeviceObserveManager_GetBindControllerUserNameList, "GetBindControllerUserNameList" }, // 1744850162
		{ &Z_Construct_UFunction_UELInputDeviceObserveManager_GetCurrentControllerIds, "GetCurrentControllerIds" }, // 251961726
		{ &Z_Construct_UFunction_UELInputDeviceObserveManager_GetCurrentGameFlowStatus, "GetCurrentGameFlowStatus" }, // 3864128409
		{ &Z_Construct_UFunction_UELInputDeviceObserveManager_GetExhibitionPlayerIndex, "GetExhibitionPlayerIndex" }, // 2194370553
		{ &Z_Construct_UFunction_UELInputDeviceObserveManager_GetGameHostPadID, "GetGameHostPadID" }, // 1924556943
		{ &Z_Construct_UFunction_UELInputDeviceObserveManager_GetInputControllerNum, "GetInputControllerNum" }, // 3202945316
		{ &Z_Construct_UFunction_UELInputDeviceObserveManager_GetJoinedLocalExhibitionControllerIdList, "GetJoinedLocalExhibitionControllerIdList" }, // 1547669644
		{ &Z_Construct_UFunction_UELInputDeviceObserveManager_IsActiveNotifyDisconnectedDialog, "IsActiveNotifyDisconnectedDialog" }, // 4009376822
		{ &Z_Construct_UFunction_UELInputDeviceObserveManager_IsAssignedExhibitionPlayerIndex, "IsAssignedExhibitionPlayerIndex" }, // 1165670964
		{ &Z_Construct_UFunction_UELInputDeviceObserveManager_IsCheckingConnectionStatus, "IsCheckingConnectionStatus" }, // 2003365099
		{ &Z_Construct_UFunction_UELInputDeviceObserveManager_IsConnectedDevice, "IsConnectedDevice" }, // 3606546464
		{ &Z_Construct_UFunction_UELInputDeviceObserveManager_IsConnectedHostPad, "IsConnectedHostPad" }, // 1226186825
		{ &Z_Construct_UFunction_UELInputDeviceObserveManager_IsHandheldStyle, "IsHandheldStyle" }, // 1577579612
		{ &Z_Construct_UFunction_UELInputDeviceObserveManager_IsJoyCon, "IsJoyCon" }, // 3683756143
		{ &Z_Construct_UFunction_UELInputDeviceObserveManager_OnClosedDisconnectedDialog, "OnClosedDisconnectedDialog" }, // 1199297309
		{ &Z_Construct_UFunction_UELInputDeviceObserveManager_OnManipulateCursor, "OnManipulateCursor" }, // 1531774804
		{ &Z_Construct_UFunction_UELInputDeviceObserveManager_OnManipulateDecideBtn, "OnManipulateDecideBtn" }, // 3175201521
		{ &Z_Construct_UFunction_UELInputDeviceObserveManager_OnOpenedDisconnectedDialog, "OnOpenedDisconnectedDialog" }, // 2760441591
		{ &Z_Construct_UFunction_UELInputDeviceObserveManager_SetAssignHostPad, "SetAssignHostPad" }, // 2134296629
		{ &Z_Construct_UFunction_UELInputDeviceObserveManager_SetDecideMatchControllerID, "SetDecideMatchControllerID" }, // 3967709317
		{ &Z_Construct_UFunction_UELInputDeviceObserveManager_SetExhibitionPlayerIndex, "SetExhibitionPlayerIndex" }, // 3237146113
		{ &Z_Construct_UFunction_UELInputDeviceObserveManager_SetLightbarColor, "SetLightbarColor" }, // 3825792890
		{ &Z_Construct_UFunction_UELInputDeviceObserveManager_SetManipulateKeyboardeMode, "SetManipulateKeyboardeMode" }, // 1575446687
		{ &Z_Construct_UFunction_UELInputDeviceObserveManager_SetShowDisconnectedDeviceId, "SetShowDisconnectedDeviceId" }, // 4188443107
		{ &Z_Construct_UFunction_UELInputDeviceObserveManager_StartCheckConnectionStatus, "StartCheckConnectionStatus" }, // 2391033067
		{ &Z_Construct_UFunction_UELInputDeviceObserveManager_UpdateInputDeviceMap, "UpdateInputDeviceMap" }, // 2715937353
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELInputDeviceObserveManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELInputDeviceObserveManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_OnChangedInputDeviceEventHandler_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELInputDeviceObserveManager" },
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_OnChangedInputDeviceEventHandler = { "OnChangedInputDeviceEventHandler", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELInputDeviceObserveManager, OnChangedInputDeviceEventHandler), Z_Construct_UDelegateFunction_ABP_200508_ChangedInputDevice__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_OnChangedInputDeviceEventHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_OnChangedInputDeviceEventHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_OnOpenedDisconnectedDialogHandle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELInputDeviceObserveManager" },
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_OnOpenedDisconnectedDialogHandle = { "OnOpenedDisconnectedDialogHandle", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELInputDeviceObserveManager, OnOpenedDisconnectedDialogHandle), Z_Construct_UDelegateFunction_ABP_200508_OpenedDisconnectedDialogDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_OnOpenedDisconnectedDialogHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_OnOpenedDisconnectedDialogHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_OnClosedDisconnectedDialogHandle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELInputDeviceObserveManager" },
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_OnClosedDisconnectedDialogHandle = { "OnClosedDisconnectedDialogHandle", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELInputDeviceObserveManager, OnClosedDisconnectedDialogHandle), Z_Construct_UDelegateFunction_ABP_200508_ClosedDisconnectedDialogDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_OnClosedDisconnectedDialogHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_OnClosedDisconnectedDialogHandle_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_InputDeviceMap_ValueProp = { "m_InputDeviceMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FInputDeviceInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_InputDeviceMap_Key_KeyProp = { "m_InputDeviceMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_InputDeviceMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELInputDeviceObserveManager" },
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_InputDeviceMap = { "m_InputDeviceMap", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELInputDeviceObserveManager, m_InputDeviceMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_InputDeviceMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_InputDeviceMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_DrawDeviceMap_ValueProp = { "m_DrawDeviceMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FInputDeviceInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_DrawDeviceMap_Key_KeyProp = { "m_DrawDeviceMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_DrawDeviceMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELInputDeviceObserveManager" },
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_DrawDeviceMap = { "m_DrawDeviceMap", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELInputDeviceObserveManager, m_DrawDeviceMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_DrawDeviceMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_DrawDeviceMap_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_ExhibitionPlayerIndexMap_ValueProp = { "m_ExhibitionPlayerIndexMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_ExhibitionPlayerIndexMap_Key_KeyProp = { "m_ExhibitionPlayerIndexMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_ExhibitionPlayerIndexMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELInputDeviceObserveManager" },
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_ExhibitionPlayerIndexMap = { "m_ExhibitionPlayerIndexMap", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELInputDeviceObserveManager, m_ExhibitionPlayerIndexMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_ExhibitionPlayerIndexMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_ExhibitionPlayerIndexMap_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_JoinedLocalExhibitionControllerIdList_Inner = { "m_JoinedLocalExhibitionControllerIdList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_JoinedLocalExhibitionControllerIdList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELInputDeviceObserveManager" },
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_JoinedLocalExhibitionControllerIdList = { "m_JoinedLocalExhibitionControllerIdList", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELInputDeviceObserveManager, m_JoinedLocalExhibitionControllerIdList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_JoinedLocalExhibitionControllerIdList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_JoinedLocalExhibitionControllerIdList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_ReserveNotifyDisconnectedInputDeviceMap_ValueProp = { "m_ReserveNotifyDisconnectedInputDeviceMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FInputDeviceInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_ReserveNotifyDisconnectedInputDeviceMap_Key_KeyProp = { "m_ReserveNotifyDisconnectedInputDeviceMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_ReserveNotifyDisconnectedInputDeviceMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELInputDeviceObserveManager" },
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_ReserveNotifyDisconnectedInputDeviceMap = { "m_ReserveNotifyDisconnectedInputDeviceMap", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELInputDeviceObserveManager, m_ReserveNotifyDisconnectedInputDeviceMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_ReserveNotifyDisconnectedInputDeviceMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_ReserveNotifyDisconnectedInputDeviceMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_ReserveNotifyDisconnectedHostController_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELInputDeviceObserveManager" },
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_ReserveNotifyDisconnectedHostController = { "m_ReserveNotifyDisconnectedHostController", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELInputDeviceObserveManager, m_ReserveNotifyDisconnectedHostController), Z_Construct_UScriptStruct_FInputDeviceInfo, METADATA_PARAMS(Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_ReserveNotifyDisconnectedHostController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_ReserveNotifyDisconnectedHostController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_NotifyGamepadDisconnectedActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELInputDeviceObserveManager" },
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_NotifyGamepadDisconnectedActor = { "m_NotifyGamepadDisconnectedActor", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELInputDeviceObserveManager, m_NotifyGamepadDisconnectedActor), Z_Construct_UClass_AELNotifyGamepadDisconnected_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_NotifyGamepadDisconnectedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_NotifyGamepadDisconnectedActor_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_GameFlowType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_GameFlowType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELInputDeviceObserveManager" },
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_GameFlowType = { "m_GameFlowType", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELInputDeviceObserveManager, m_GameFlowType), Z_Construct_UEnum_ABP_200508_EInputDeviceGameFlowType, METADATA_PARAMS(Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_GameFlowType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_GameFlowType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_GameHostControllerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELInputDeviceObserveManager" },
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_GameHostControllerID = { "m_GameHostControllerID", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELInputDeviceObserveManager, m_GameHostControllerID), METADATA_PARAMS(Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_GameHostControllerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_GameHostControllerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_ManipulateKeyboardeMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELInputDeviceObserveManager" },
		{ "ModuleRelativePath", "Public/ELInputDeviceObserveManager.h" },
	};
#endif
	void Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_ManipulateKeyboardeMode_SetBit(void* Obj)
	{
		((UELInputDeviceObserveManager*)Obj)->m_ManipulateKeyboardeMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_ManipulateKeyboardeMode = { "m_ManipulateKeyboardeMode", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELInputDeviceObserveManager), &Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_ManipulateKeyboardeMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_ManipulateKeyboardeMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_ManipulateKeyboardeMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELInputDeviceObserveManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_OnChangedInputDeviceEventHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_OnOpenedDisconnectedDialogHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_OnClosedDisconnectedDialogHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_InputDeviceMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_InputDeviceMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_InputDeviceMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_DrawDeviceMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_DrawDeviceMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_DrawDeviceMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_ExhibitionPlayerIndexMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_ExhibitionPlayerIndexMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_ExhibitionPlayerIndexMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_JoinedLocalExhibitionControllerIdList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_JoinedLocalExhibitionControllerIdList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_ReserveNotifyDisconnectedInputDeviceMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_ReserveNotifyDisconnectedInputDeviceMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_ReserveNotifyDisconnectedInputDeviceMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_ReserveNotifyDisconnectedHostController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_NotifyGamepadDisconnectedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_GameFlowType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_GameFlowType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_GameHostControllerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELInputDeviceObserveManager_Statics::NewProp_m_ManipulateKeyboardeMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELInputDeviceObserveManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELInputDeviceObserveManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELInputDeviceObserveManager_Statics::ClassParams = {
		&UELInputDeviceObserveManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELInputDeviceObserveManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELInputDeviceObserveManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELInputDeviceObserveManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELInputDeviceObserveManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELInputDeviceObserveManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELInputDeviceObserveManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELInputDeviceObserveManager, 3110891320);
	template<> ABP_200508_API UClass* StaticClass<UELInputDeviceObserveManager>()
	{
		return UELInputDeviceObserveManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELInputDeviceObserveManager(Z_Construct_UClass_UELInputDeviceObserveManager, &UELInputDeviceObserveManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELInputDeviceObserveManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELInputDeviceObserveManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
