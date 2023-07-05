// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELMainMenuWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMainMenuWidgetBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELMainMenuWidgetBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELMainMenuWidgetBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELMenuWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EKeyMappingType();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_HoldTimerDelegate__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_OnEndDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UELMainMenuWidgetBase::execCalcGridCursor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Current);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChangeXNum);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChangeYNum);
		P_GET_PROPERTY(FIntProperty,Z_Param_Size);
		P_GET_PROPERTY(FIntProperty,Z_Param_Width);
		P_GET_UBOOL(Z_Param_IsRepeat);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Next);
		P_GET_UBOOL_REF(Z_Param_Out_bMoved);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalcGridCursor(Z_Param_Current,Z_Param_ChangeXNum,Z_Param_ChangeYNum,Z_Param_Size,Z_Param_Width,Z_Param_IsRepeat,Z_Param_Out_Next,Z_Param_Out_bMoved);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMainMenuWidgetBase::execCalcGridCursorDown)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Current);
		P_GET_PROPERTY(FIntProperty,Z_Param_Size);
		P_GET_PROPERTY(FIntProperty,Z_Param_Width);
		P_GET_UBOOL(Z_Param_IsRepeat);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Next);
		P_GET_UBOOL_REF(Z_Param_Out_bMoved);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalcGridCursorDown(Z_Param_Current,Z_Param_Size,Z_Param_Width,Z_Param_IsRepeat,Z_Param_Out_Next,Z_Param_Out_bMoved);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMainMenuWidgetBase::execCalcGridCursorLeft)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Current);
		P_GET_PROPERTY(FIntProperty,Z_Param_Size);
		P_GET_PROPERTY(FIntProperty,Z_Param_Width);
		P_GET_UBOOL(Z_Param_IsRepeat);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Next);
		P_GET_UBOOL_REF(Z_Param_Out_bMoved);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalcGridCursorLeft(Z_Param_Current,Z_Param_Size,Z_Param_Width,Z_Param_IsRepeat,Z_Param_Out_Next,Z_Param_Out_bMoved);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMainMenuWidgetBase::execCalcGridCursorRight)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Current);
		P_GET_PROPERTY(FIntProperty,Z_Param_Size);
		P_GET_PROPERTY(FIntProperty,Z_Param_Width);
		P_GET_UBOOL(Z_Param_IsRepeat);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Next);
		P_GET_UBOOL_REF(Z_Param_Out_bMoved);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalcGridCursorRight(Z_Param_Current,Z_Param_Size,Z_Param_Width,Z_Param_IsRepeat,Z_Param_Out_Next,Z_Param_Out_bMoved);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMainMenuWidgetBase::execCalcGridCursorUp)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Current);
		P_GET_PROPERTY(FIntProperty,Z_Param_Size);
		P_GET_PROPERTY(FIntProperty,Z_Param_Width);
		P_GET_UBOOL(Z_Param_IsRepeat);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Next);
		P_GET_UBOOL_REF(Z_Param_Out_bMoved);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalcGridCursorUp(Z_Param_Current,Z_Param_Size,Z_Param_Width,Z_Param_IsRepeat,Z_Param_Out_Next,Z_Param_Out_bMoved);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMainMenuWidgetBase::execCalcListCursor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Current);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChangeNum);
		P_GET_PROPERTY(FIntProperty,Z_Param_Size);
		P_GET_UBOOL(Z_Param_IsRepeat);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Next);
		P_GET_UBOOL_REF(Z_Param_Out_bMoved);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalcListCursor(Z_Param_Current,Z_Param_ChangeNum,Z_Param_Size,Z_Param_IsRepeat,Z_Param_Out_Next,Z_Param_Out_bMoved);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMainMenuWidgetBase::execCalcListCursorDown)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Current);
		P_GET_PROPERTY(FIntProperty,Z_Param_Size);
		P_GET_UBOOL(Z_Param_IsRepeat);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Next);
		P_GET_UBOOL_REF(Z_Param_Out_bMoved);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalcListCursorDown(Z_Param_Current,Z_Param_Size,Z_Param_IsRepeat,Z_Param_Out_Next,Z_Param_Out_bMoved);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMainMenuWidgetBase::execCalcListCursorUp)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Current);
		P_GET_PROPERTY(FIntProperty,Z_Param_Size);
		P_GET_UBOOL(Z_Param_IsRepeat);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Next);
		P_GET_UBOOL_REF(Z_Param_Out_bMoved);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalcListCursorUp(Z_Param_Current,Z_Param_Size,Z_Param_IsRepeat,Z_Param_Out_Next,Z_Param_Out_bMoved);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMainMenuWidgetBase::execCancelHoldOk)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelHoldOk();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMainMenuWidgetBase::execGetHoldOkControllerId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetHoldOkControllerId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMainMenuWidgetBase::execGetLastInputGamepadKeyInfo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__controllerId);
		P_GET_UBOOL_REF(Z_Param_Out__findKey);
		P_GET_ENUM_REF(EKeyMappingType,Z_Param_Out__Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLastInputGamepadKeyInfo(Z_Param__controllerId,Z_Param_Out__findKey,(EKeyMappingType&)(Z_Param_Out__Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMainMenuWidgetBase::execGetLastInputKeyboardKeyInfo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__controllerId);
		P_GET_UBOOL_REF(Z_Param_Out__findKey);
		P_GET_ENUM_REF(EKeyMappingType,Z_Param_Out__Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLastInputKeyboardKeyInfo(Z_Param__controllerId,Z_Param_Out__findKey,(EKeyMappingType&)(Z_Param_Out__Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMainMenuWidgetBase::execGetOkHoldTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetOkHoldTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMainMenuWidgetBase::execIsBlockInputController)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBlockInputController(Z_Param_ControllerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMainMenuWidgetBase::execIsEnableHoldOk)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnableHoldOk();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMainMenuWidgetBase::execIsEnableHoldOkPerController)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnableHoldOkPerController(Z_Param_ControllerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMainMenuWidgetBase::execIsLastInputKeyByKeyboardMouse)
	{
		P_GET_OBJECT(APlayerController,Z_Param__playerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLastInputKeyByKeyboardMouse(Z_Param__playerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMainMenuWidgetBase::execMouseStartHoldOk)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MouseStartHoldOk();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMainMenuWidgetBase::execOnEndNative)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndNative();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMainMenuWidgetBase::execSetBlockInputController)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
		P_GET_UBOOL(Z_Param_bBlock);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBlockInputController(Z_Param_ControllerId,Z_Param_bBlock);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMainMenuWidgetBase::execSetEnableHoldOk)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableHoldOk(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMainMenuWidgetBase::execSetEnableHoldOkAllController)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableHoldOkAllController(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMainMenuWidgetBase::execSetEnableHoldOkPerController)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableHoldOkPerController(Z_Param_ControllerId,Z_Param_bEnable);
		P_NATIVE_END;
	}
	static FName NAME_UELMainMenuWidgetBase_OnInputAnalogLTrigger = FName(TEXT("OnInputAnalogLTrigger"));
	void UELMainMenuWidgetBase::OnInputAnalogLTrigger(AELGameCommonPlayerControllerBase* Controller, float Amount)
	{
		ELMainMenuWidgetBase_eventOnInputAnalogLTrigger_Parms Parms;
		Parms.Controller=Controller;
		Parms.Amount=Amount;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuWidgetBase_OnInputAnalogLTrigger),&Parms);
	}
	static FName NAME_UELMainMenuWidgetBase_OnInputAnalogRTrigger = FName(TEXT("OnInputAnalogRTrigger"));
	void UELMainMenuWidgetBase::OnInputAnalogRTrigger(AELGameCommonPlayerControllerBase* Controller, float Amount)
	{
		ELMainMenuWidgetBase_eventOnInputAnalogRTrigger_Parms Parms;
		Parms.Controller=Controller;
		Parms.Amount=Amount;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuWidgetBase_OnInputAnalogRTrigger),&Parms);
	}
	static FName NAME_UELMainMenuWidgetBase_OnInputAny = FName(TEXT("OnInputAny"));
	void UELMainMenuWidgetBase::OnInputAny(AELGameCommonPlayerControllerBase* Controller)
	{
		ELMainMenuWidgetBase_eventOnInputAny_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuWidgetBase_OnInputAny),&Parms);
	}
	static FName NAME_UELMainMenuWidgetBase_OnInputCancel = FName(TEXT("OnInputCancel"));
	void UELMainMenuWidgetBase::OnInputCancel(AELGameCommonPlayerControllerBase* Controller)
	{
		ELMainMenuWidgetBase_eventOnInputCancel_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuWidgetBase_OnInputCancel),&Parms);
	}
	static FName NAME_UELMainMenuWidgetBase_OnInputChangeOption = FName(TEXT("OnInputChangeOption"));
	void UELMainMenuWidgetBase::OnInputChangeOption(AELGameCommonPlayerControllerBase* Controller)
	{
		ELMainMenuWidgetBase_eventOnInputChangeOption_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuWidgetBase_OnInputChangeOption),&Parms);
	}
	static FName NAME_UELMainMenuWidgetBase_OnInputDecision = FName(TEXT("OnInputDecision"));
	void UELMainMenuWidgetBase::OnInputDecision(AELGameCommonPlayerControllerBase* Controller)
	{
		ELMainMenuWidgetBase_eventOnInputDecision_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuWidgetBase_OnInputDecision),&Parms);
	}
	static FName NAME_UELMainMenuWidgetBase_OnInputDown = FName(TEXT("OnInputDown"));
	void UELMainMenuWidgetBase::OnInputDown(AELGameCommonPlayerControllerBase* Controller, bool IsRepeat)
	{
		ELMainMenuWidgetBase_eventOnInputDown_Parms Parms;
		Parms.Controller=Controller;
		Parms.IsRepeat=IsRepeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuWidgetBase_OnInputDown),&Parms);
	}
	static FName NAME_UELMainMenuWidgetBase_OnInputFaceButtonDown = FName(TEXT("OnInputFaceButtonDown"));
	void UELMainMenuWidgetBase::OnInputFaceButtonDown(AELGameCommonPlayerControllerBase* Controller)
	{
		ELMainMenuWidgetBase_eventOnInputFaceButtonDown_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuWidgetBase_OnInputFaceButtonDown),&Parms);
	}
	static FName NAME_UELMainMenuWidgetBase_OnInputFaceButtonDown_Released = FName(TEXT("OnInputFaceButtonDown_Released"));
	void UELMainMenuWidgetBase::OnInputFaceButtonDown_Released(AELGameCommonPlayerControllerBase* Controller)
	{
		ELMainMenuWidgetBase_eventOnInputFaceButtonDown_Released_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuWidgetBase_OnInputFaceButtonDown_Released),&Parms);
	}
	static FName NAME_UELMainMenuWidgetBase_OnInputFaceButtonLeft = FName(TEXT("OnInputFaceButtonLeft"));
	void UELMainMenuWidgetBase::OnInputFaceButtonLeft(AELGameCommonPlayerControllerBase* Controller)
	{
		ELMainMenuWidgetBase_eventOnInputFaceButtonLeft_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuWidgetBase_OnInputFaceButtonLeft),&Parms);
	}
	static FName NAME_UELMainMenuWidgetBase_OnInputFaceButtonLeft_Released = FName(TEXT("OnInputFaceButtonLeft_Released"));
	void UELMainMenuWidgetBase::OnInputFaceButtonLeft_Released(AELGameCommonPlayerControllerBase* Controller)
	{
		ELMainMenuWidgetBase_eventOnInputFaceButtonLeft_Released_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuWidgetBase_OnInputFaceButtonLeft_Released),&Parms);
	}
	static FName NAME_UELMainMenuWidgetBase_OnInputFaceButtonRight = FName(TEXT("OnInputFaceButtonRight"));
	void UELMainMenuWidgetBase::OnInputFaceButtonRight(AELGameCommonPlayerControllerBase* Controller)
	{
		ELMainMenuWidgetBase_eventOnInputFaceButtonRight_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuWidgetBase_OnInputFaceButtonRight),&Parms);
	}
	static FName NAME_UELMainMenuWidgetBase_OnInputFaceButtonRight_Released = FName(TEXT("OnInputFaceButtonRight_Released"));
	void UELMainMenuWidgetBase::OnInputFaceButtonRight_Released(AELGameCommonPlayerControllerBase* Controller)
	{
		ELMainMenuWidgetBase_eventOnInputFaceButtonRight_Released_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuWidgetBase_OnInputFaceButtonRight_Released),&Parms);
	}
	static FName NAME_UELMainMenuWidgetBase_OnInputFaceButtonUp = FName(TEXT("OnInputFaceButtonUp"));
	void UELMainMenuWidgetBase::OnInputFaceButtonUp(AELGameCommonPlayerControllerBase* Controller)
	{
		ELMainMenuWidgetBase_eventOnInputFaceButtonUp_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuWidgetBase_OnInputFaceButtonUp),&Parms);
	}
	static FName NAME_UELMainMenuWidgetBase_OnInputFaceButtonUp_Released = FName(TEXT("OnInputFaceButtonUp_Released"));
	void UELMainMenuWidgetBase::OnInputFaceButtonUp_Released(AELGameCommonPlayerControllerBase* Controller)
	{
		ELMainMenuWidgetBase_eventOnInputFaceButtonUp_Released_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuWidgetBase_OnInputFaceButtonUp_Released),&Parms);
	}
	static FName NAME_UELMainMenuWidgetBase_OnInputLeft = FName(TEXT("OnInputLeft"));
	void UELMainMenuWidgetBase::OnInputLeft(AELGameCommonPlayerControllerBase* Controller, bool IsRepeat)
	{
		ELMainMenuWidgetBase_eventOnInputLeft_Parms Parms;
		Parms.Controller=Controller;
		Parms.IsRepeat=IsRepeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuWidgetBase_OnInputLeft),&Parms);
	}
	static FName NAME_UELMainMenuWidgetBase_OnInputOK = FName(TEXT("OnInputOK"));
	void UELMainMenuWidgetBase::OnInputOK(AELGameCommonPlayerControllerBase* Controller)
	{
		ELMainMenuWidgetBase_eventOnInputOK_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuWidgetBase_OnInputOK),&Parms);
	}
	static FName NAME_UELMainMenuWidgetBase_OnInputOKWithSetDecidePadID = FName(TEXT("OnInputOKWithSetDecidePadID"));
	void UELMainMenuWidgetBase::OnInputOKWithSetDecidePadID(int32 DecideControllerID)
	{
		ELMainMenuWidgetBase_eventOnInputOKWithSetDecidePadID_Parms Parms;
		Parms.DecideControllerID=DecideControllerID;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuWidgetBase_OnInputOKWithSetDecidePadID),&Parms);
	}
	static FName NAME_UELMainMenuWidgetBase_OnInputOpenChat = FName(TEXT("OnInputOpenChat"));
	void UELMainMenuWidgetBase::OnInputOpenChat(AELGameCommonPlayerControllerBase* Controller)
	{
		ELMainMenuWidgetBase_eventOnInputOpenChat_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuWidgetBase_OnInputOpenChat),&Parms);
	}
	static FName NAME_UELMainMenuWidgetBase_OnInputOpenFriendList = FName(TEXT("OnInputOpenFriendList"));
	void UELMainMenuWidgetBase::OnInputOpenFriendList(AELGameCommonPlayerControllerBase* Controller)
	{
		ELMainMenuWidgetBase_eventOnInputOpenFriendList_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuWidgetBase_OnInputOpenFriendList),&Parms);
	}
	static FName NAME_UELMainMenuWidgetBase_OnInputOpenSettings = FName(TEXT("OnInputOpenSettings"));
	void UELMainMenuWidgetBase::OnInputOpenSettings(AELGameCommonPlayerControllerBase* Controller)
	{
		ELMainMenuWidgetBase_eventOnInputOpenSettings_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuWidgetBase_OnInputOpenSettings),&Parms);
	}
	static FName NAME_UELMainMenuWidgetBase_OnInputOpenStatus = FName(TEXT("OnInputOpenStatus"));
	void UELMainMenuWidgetBase::OnInputOpenStatus(AELGameCommonPlayerControllerBase* Controller)
	{
		ELMainMenuWidgetBase_eventOnInputOpenStatus_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuWidgetBase_OnInputOpenStatus),&Parms);
	}
	static FName NAME_UELMainMenuWidgetBase_OnInputOpenSwitchProfile = FName(TEXT("OnInputOpenSwitchProfile"));
	void UELMainMenuWidgetBase::OnInputOpenSwitchProfile(AELGameCommonPlayerControllerBase* Controller)
	{
		ELMainMenuWidgetBase_eventOnInputOpenSwitchProfile_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuWidgetBase_OnInputOpenSwitchProfile),&Parms);
	}
	static FName NAME_UELMainMenuWidgetBase_OnInputRight = FName(TEXT("OnInputRight"));
	void UELMainMenuWidgetBase::OnInputRight(AELGameCommonPlayerControllerBase* Controller, bool IsRepeat)
	{
		ELMainMenuWidgetBase_eventOnInputRight_Parms Parms;
		Parms.Controller=Controller;
		Parms.IsRepeat=IsRepeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuWidgetBase_OnInputRight),&Parms);
	}
	static FName NAME_UELMainMenuWidgetBase_OnInputRStickDown = FName(TEXT("OnInputRStickDown"));
	void UELMainMenuWidgetBase::OnInputRStickDown(AELGameCommonPlayerControllerBase* Controller, bool IsRepeat)
	{
		ELMainMenuWidgetBase_eventOnInputRStickDown_Parms Parms;
		Parms.Controller=Controller;
		Parms.IsRepeat=IsRepeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuWidgetBase_OnInputRStickDown),&Parms);
	}
	static FName NAME_UELMainMenuWidgetBase_OnInputRStickLeft = FName(TEXT("OnInputRStickLeft"));
	void UELMainMenuWidgetBase::OnInputRStickLeft(AELGameCommonPlayerControllerBase* Controller, bool IsRepeat)
	{
		ELMainMenuWidgetBase_eventOnInputRStickLeft_Parms Parms;
		Parms.Controller=Controller;
		Parms.IsRepeat=IsRepeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuWidgetBase_OnInputRStickLeft),&Parms);
	}
	static FName NAME_UELMainMenuWidgetBase_OnInputRStickRight = FName(TEXT("OnInputRStickRight"));
	void UELMainMenuWidgetBase::OnInputRStickRight(AELGameCommonPlayerControllerBase* Controller, bool IsRepeat)
	{
		ELMainMenuWidgetBase_eventOnInputRStickRight_Parms Parms;
		Parms.Controller=Controller;
		Parms.IsRepeat=IsRepeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuWidgetBase_OnInputRStickRight),&Parms);
	}
	static FName NAME_UELMainMenuWidgetBase_OnInputRStickUp = FName(TEXT("OnInputRStickUp"));
	void UELMainMenuWidgetBase::OnInputRStickUp(AELGameCommonPlayerControllerBase* Controller, bool IsRepeat)
	{
		ELMainMenuWidgetBase_eventOnInputRStickUp_Parms Parms;
		Parms.Controller=Controller;
		Parms.IsRepeat=IsRepeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuWidgetBase_OnInputRStickUp),&Parms);
	}
	static FName NAME_UELMainMenuWidgetBase_OnInputSelect = FName(TEXT("OnInputSelect"));
	void UELMainMenuWidgetBase::OnInputSelect(AELGameCommonPlayerControllerBase* Controller)
	{
		ELMainMenuWidgetBase_eventOnInputSelect_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuWidgetBase_OnInputSelect),&Parms);
	}
	static FName NAME_UELMainMenuWidgetBase_OnInputSmallTabLeft = FName(TEXT("OnInputSmallTabLeft"));
	void UELMainMenuWidgetBase::OnInputSmallTabLeft(AELGameCommonPlayerControllerBase* Controller, bool IsRepeat)
	{
		ELMainMenuWidgetBase_eventOnInputSmallTabLeft_Parms Parms;
		Parms.Controller=Controller;
		Parms.IsRepeat=IsRepeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuWidgetBase_OnInputSmallTabLeft),&Parms);
	}
	static FName NAME_UELMainMenuWidgetBase_OnInputSmallTabRight = FName(TEXT("OnInputSmallTabRight"));
	void UELMainMenuWidgetBase::OnInputSmallTabRight(AELGameCommonPlayerControllerBase* Controller, bool IsRepeat)
	{
		ELMainMenuWidgetBase_eventOnInputSmallTabRight_Parms Parms;
		Parms.Controller=Controller;
		Parms.IsRepeat=IsRepeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuWidgetBase_OnInputSmallTabRight),&Parms);
	}
	static FName NAME_UELMainMenuWidgetBase_OnInputStart = FName(TEXT("OnInputStart"));
	void UELMainMenuWidgetBase::OnInputStart(AELGameCommonPlayerControllerBase* Controller)
	{
		ELMainMenuWidgetBase_eventOnInputStart_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuWidgetBase_OnInputStart),&Parms);
	}
	static FName NAME_UELMainMenuWidgetBase_OnInputStickL = FName(TEXT("OnInputStickL"));
	void UELMainMenuWidgetBase::OnInputStickL(AELGameCommonPlayerControllerBase* Controller)
	{
		ELMainMenuWidgetBase_eventOnInputStickL_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuWidgetBase_OnInputStickL),&Parms);
	}
	static FName NAME_UELMainMenuWidgetBase_OnInputStickR = FName(TEXT("OnInputStickR"));
	void UELMainMenuWidgetBase::OnInputStickR(AELGameCommonPlayerControllerBase* Controller)
	{
		ELMainMenuWidgetBase_eventOnInputStickR_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuWidgetBase_OnInputStickR),&Parms);
	}
	static FName NAME_UELMainMenuWidgetBase_OnInputStickRDirectionX = FName(TEXT("OnInputStickRDirectionX"));
	void UELMainMenuWidgetBase::OnInputStickRDirectionX(AELGameCommonPlayerControllerBase* Controller, float Amount)
	{
		ELMainMenuWidgetBase_eventOnInputStickRDirectionX_Parms Parms;
		Parms.Controller=Controller;
		Parms.Amount=Amount;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuWidgetBase_OnInputStickRDirectionX),&Parms);
	}
	static FName NAME_UELMainMenuWidgetBase_OnInputStickRDirectionY = FName(TEXT("OnInputStickRDirectionY"));
	void UELMainMenuWidgetBase::OnInputStickRDirectionY(AELGameCommonPlayerControllerBase* Controller, float Amount)
	{
		ELMainMenuWidgetBase_eventOnInputStickRDirectionY_Parms Parms;
		Parms.Controller=Controller;
		Parms.Amount=Amount;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuWidgetBase_OnInputStickRDirectionY),&Parms);
	}
	static FName NAME_UELMainMenuWidgetBase_OnInputTabLeft = FName(TEXT("OnInputTabLeft"));
	void UELMainMenuWidgetBase::OnInputTabLeft(AELGameCommonPlayerControllerBase* Controller, bool IsRepeat)
	{
		ELMainMenuWidgetBase_eventOnInputTabLeft_Parms Parms;
		Parms.Controller=Controller;
		Parms.IsRepeat=IsRepeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuWidgetBase_OnInputTabLeft),&Parms);
	}
	static FName NAME_UELMainMenuWidgetBase_OnInputTabRight = FName(TEXT("OnInputTabRight"));
	void UELMainMenuWidgetBase::OnInputTabRight(AELGameCommonPlayerControllerBase* Controller, bool IsRepeat)
	{
		ELMainMenuWidgetBase_eventOnInputTabRight_Parms Parms;
		Parms.Controller=Controller;
		Parms.IsRepeat=IsRepeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuWidgetBase_OnInputTabRight),&Parms);
	}
	static FName NAME_UELMainMenuWidgetBase_OnInputUp = FName(TEXT("OnInputUp"));
	void UELMainMenuWidgetBase::OnInputUp(AELGameCommonPlayerControllerBase* Controller, bool IsRepeat)
	{
		ELMainMenuWidgetBase_eventOnInputUp_Parms Parms;
		Parms.Controller=Controller;
		Parms.IsRepeat=IsRepeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuWidgetBase_OnInputUp),&Parms);
	}
	static FName NAME_UELMainMenuWidgetBase_OnStartNative = FName(TEXT("OnStartNative"));
	void UELMainMenuWidgetBase::OnStartNative()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuWidgetBase_OnStartNative),NULL);
	}
	void UELMainMenuWidgetBase::StaticRegisterNativesUELMainMenuWidgetBase()
	{
		UClass* Class = UELMainMenuWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalcGridCursor", &UELMainMenuWidgetBase::execCalcGridCursor },
			{ "CalcGridCursorDown", &UELMainMenuWidgetBase::execCalcGridCursorDown },
			{ "CalcGridCursorLeft", &UELMainMenuWidgetBase::execCalcGridCursorLeft },
			{ "CalcGridCursorRight", &UELMainMenuWidgetBase::execCalcGridCursorRight },
			{ "CalcGridCursorUp", &UELMainMenuWidgetBase::execCalcGridCursorUp },
			{ "CalcListCursor", &UELMainMenuWidgetBase::execCalcListCursor },
			{ "CalcListCursorDown", &UELMainMenuWidgetBase::execCalcListCursorDown },
			{ "CalcListCursorUp", &UELMainMenuWidgetBase::execCalcListCursorUp },
			{ "CancelHoldOk", &UELMainMenuWidgetBase::execCancelHoldOk },
			{ "GetHoldOkControllerId", &UELMainMenuWidgetBase::execGetHoldOkControllerId },
			{ "GetLastInputGamepadKeyInfo", &UELMainMenuWidgetBase::execGetLastInputGamepadKeyInfo },
			{ "GetLastInputKeyboardKeyInfo", &UELMainMenuWidgetBase::execGetLastInputKeyboardKeyInfo },
			{ "GetOkHoldTime", &UELMainMenuWidgetBase::execGetOkHoldTime },
			{ "IsBlockInputController", &UELMainMenuWidgetBase::execIsBlockInputController },
			{ "IsEnableHoldOk", &UELMainMenuWidgetBase::execIsEnableHoldOk },
			{ "IsEnableHoldOkPerController", &UELMainMenuWidgetBase::execIsEnableHoldOkPerController },
			{ "IsLastInputKeyByKeyboardMouse", &UELMainMenuWidgetBase::execIsLastInputKeyByKeyboardMouse },
			{ "MouseStartHoldOk", &UELMainMenuWidgetBase::execMouseStartHoldOk },
			{ "OnEndNative", &UELMainMenuWidgetBase::execOnEndNative },
			{ "SetBlockInputController", &UELMainMenuWidgetBase::execSetBlockInputController },
			{ "SetEnableHoldOk", &UELMainMenuWidgetBase::execSetEnableHoldOk },
			{ "SetEnableHoldOkAllController", &UELMainMenuWidgetBase::execSetEnableHoldOkAllController },
			{ "SetEnableHoldOkPerController", &UELMainMenuWidgetBase::execSetEnableHoldOkPerController },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursor_Statics
	{
		struct ELMainMenuWidgetBase_eventCalcGridCursor_Parms
		{
			int32 Current;
			int32 ChangeXNum;
			int32 ChangeYNum;
			int32 Size;
			int32 Width;
			bool IsRepeat;
			int32 Next;
			bool bMoved;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Current;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChangeXNum;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChangeYNum;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
		static void NewProp_IsRepeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRepeat;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Next;
		static void NewProp_bMoved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMoved;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursor_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventCalcGridCursor_Parms, Current), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursor_Statics::NewProp_ChangeXNum = { "ChangeXNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventCalcGridCursor_Parms, ChangeXNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursor_Statics::NewProp_ChangeYNum = { "ChangeYNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventCalcGridCursor_Parms, ChangeYNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursor_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventCalcGridCursor_Parms, Size), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursor_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventCalcGridCursor_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursor_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELMainMenuWidgetBase_eventCalcGridCursor_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursor_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuWidgetBase_eventCalcGridCursor_Parms), &Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursor_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursor_Statics::NewProp_Next = { "Next", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventCalcGridCursor_Parms, Next), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursor_Statics::NewProp_bMoved_SetBit(void* Obj)
	{
		((ELMainMenuWidgetBase_eventCalcGridCursor_Parms*)Obj)->bMoved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursor_Statics::NewProp_bMoved = { "bMoved", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuWidgetBase_eventCalcGridCursor_Parms), &Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursor_Statics::NewProp_bMoved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursor_Statics::NewProp_Current,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursor_Statics::NewProp_ChangeXNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursor_Statics::NewProp_ChangeYNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursor_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursor_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursor_Statics::NewProp_IsRepeat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursor_Statics::NewProp_Next,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursor_Statics::NewProp_bMoved,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "CalcGridCursor", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventCalcGridCursor_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorDown_Statics
	{
		struct ELMainMenuWidgetBase_eventCalcGridCursorDown_Parms
		{
			int32 Current;
			int32 Size;
			int32 Width;
			bool IsRepeat;
			int32 Next;
			bool bMoved;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Current;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
		static void NewProp_IsRepeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRepeat;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Next;
		static void NewProp_bMoved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMoved;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorDown_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventCalcGridCursorDown_Parms, Current), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorDown_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventCalcGridCursorDown_Parms, Size), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorDown_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventCalcGridCursorDown_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorDown_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELMainMenuWidgetBase_eventCalcGridCursorDown_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorDown_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuWidgetBase_eventCalcGridCursorDown_Parms), &Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorDown_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorDown_Statics::NewProp_Next = { "Next", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventCalcGridCursorDown_Parms, Next), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorDown_Statics::NewProp_bMoved_SetBit(void* Obj)
	{
		((ELMainMenuWidgetBase_eventCalcGridCursorDown_Parms*)Obj)->bMoved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorDown_Statics::NewProp_bMoved = { "bMoved", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuWidgetBase_eventCalcGridCursorDown_Parms), &Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorDown_Statics::NewProp_bMoved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorDown_Statics::NewProp_Current,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorDown_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorDown_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorDown_Statics::NewProp_IsRepeat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorDown_Statics::NewProp_Next,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorDown_Statics::NewProp_bMoved,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "CalcGridCursorDown", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventCalcGridCursorDown_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorLeft_Statics
	{
		struct ELMainMenuWidgetBase_eventCalcGridCursorLeft_Parms
		{
			int32 Current;
			int32 Size;
			int32 Width;
			bool IsRepeat;
			int32 Next;
			bool bMoved;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Current;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
		static void NewProp_IsRepeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRepeat;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Next;
		static void NewProp_bMoved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMoved;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorLeft_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventCalcGridCursorLeft_Parms, Current), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorLeft_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventCalcGridCursorLeft_Parms, Size), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorLeft_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventCalcGridCursorLeft_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorLeft_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELMainMenuWidgetBase_eventCalcGridCursorLeft_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorLeft_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuWidgetBase_eventCalcGridCursorLeft_Parms), &Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorLeft_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorLeft_Statics::NewProp_Next = { "Next", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventCalcGridCursorLeft_Parms, Next), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorLeft_Statics::NewProp_bMoved_SetBit(void* Obj)
	{
		((ELMainMenuWidgetBase_eventCalcGridCursorLeft_Parms*)Obj)->bMoved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorLeft_Statics::NewProp_bMoved = { "bMoved", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuWidgetBase_eventCalcGridCursorLeft_Parms), &Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorLeft_Statics::NewProp_bMoved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorLeft_Statics::NewProp_Current,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorLeft_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorLeft_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorLeft_Statics::NewProp_IsRepeat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorLeft_Statics::NewProp_Next,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorLeft_Statics::NewProp_bMoved,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "CalcGridCursorLeft", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventCalcGridCursorLeft_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorRight_Statics
	{
		struct ELMainMenuWidgetBase_eventCalcGridCursorRight_Parms
		{
			int32 Current;
			int32 Size;
			int32 Width;
			bool IsRepeat;
			int32 Next;
			bool bMoved;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Current;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
		static void NewProp_IsRepeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRepeat;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Next;
		static void NewProp_bMoved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMoved;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorRight_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventCalcGridCursorRight_Parms, Current), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorRight_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventCalcGridCursorRight_Parms, Size), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorRight_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventCalcGridCursorRight_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorRight_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELMainMenuWidgetBase_eventCalcGridCursorRight_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorRight_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuWidgetBase_eventCalcGridCursorRight_Parms), &Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorRight_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorRight_Statics::NewProp_Next = { "Next", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventCalcGridCursorRight_Parms, Next), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorRight_Statics::NewProp_bMoved_SetBit(void* Obj)
	{
		((ELMainMenuWidgetBase_eventCalcGridCursorRight_Parms*)Obj)->bMoved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorRight_Statics::NewProp_bMoved = { "bMoved", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuWidgetBase_eventCalcGridCursorRight_Parms), &Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorRight_Statics::NewProp_bMoved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorRight_Statics::NewProp_Current,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorRight_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorRight_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorRight_Statics::NewProp_IsRepeat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorRight_Statics::NewProp_Next,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorRight_Statics::NewProp_bMoved,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "CalcGridCursorRight", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventCalcGridCursorRight_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorUp_Statics
	{
		struct ELMainMenuWidgetBase_eventCalcGridCursorUp_Parms
		{
			int32 Current;
			int32 Size;
			int32 Width;
			bool IsRepeat;
			int32 Next;
			bool bMoved;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Current;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
		static void NewProp_IsRepeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRepeat;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Next;
		static void NewProp_bMoved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMoved;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorUp_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventCalcGridCursorUp_Parms, Current), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorUp_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventCalcGridCursorUp_Parms, Size), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorUp_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventCalcGridCursorUp_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorUp_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELMainMenuWidgetBase_eventCalcGridCursorUp_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorUp_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuWidgetBase_eventCalcGridCursorUp_Parms), &Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorUp_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorUp_Statics::NewProp_Next = { "Next", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventCalcGridCursorUp_Parms, Next), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorUp_Statics::NewProp_bMoved_SetBit(void* Obj)
	{
		((ELMainMenuWidgetBase_eventCalcGridCursorUp_Parms*)Obj)->bMoved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorUp_Statics::NewProp_bMoved = { "bMoved", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuWidgetBase_eventCalcGridCursorUp_Parms), &Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorUp_Statics::NewProp_bMoved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorUp_Statics::NewProp_Current,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorUp_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorUp_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorUp_Statics::NewProp_IsRepeat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorUp_Statics::NewProp_Next,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorUp_Statics::NewProp_bMoved,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "CalcGridCursorUp", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventCalcGridCursorUp_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursor_Statics
	{
		struct ELMainMenuWidgetBase_eventCalcListCursor_Parms
		{
			int32 Current;
			int32 ChangeNum;
			int32 Size;
			bool IsRepeat;
			int32 Next;
			bool bMoved;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Current;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChangeNum;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Size;
		static void NewProp_IsRepeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRepeat;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Next;
		static void NewProp_bMoved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMoved;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursor_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventCalcListCursor_Parms, Current), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursor_Statics::NewProp_ChangeNum = { "ChangeNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventCalcListCursor_Parms, ChangeNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursor_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventCalcListCursor_Parms, Size), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursor_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELMainMenuWidgetBase_eventCalcListCursor_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursor_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuWidgetBase_eventCalcListCursor_Parms), &Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursor_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursor_Statics::NewProp_Next = { "Next", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventCalcListCursor_Parms, Next), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursor_Statics::NewProp_bMoved_SetBit(void* Obj)
	{
		((ELMainMenuWidgetBase_eventCalcListCursor_Parms*)Obj)->bMoved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursor_Statics::NewProp_bMoved = { "bMoved", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuWidgetBase_eventCalcListCursor_Parms), &Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursor_Statics::NewProp_bMoved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursor_Statics::NewProp_Current,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursor_Statics::NewProp_ChangeNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursor_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursor_Statics::NewProp_IsRepeat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursor_Statics::NewProp_Next,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursor_Statics::NewProp_bMoved,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "CalcListCursor", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventCalcListCursor_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorDown_Statics
	{
		struct ELMainMenuWidgetBase_eventCalcListCursorDown_Parms
		{
			int32 Current;
			int32 Size;
			bool IsRepeat;
			int32 Next;
			bool bMoved;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Current;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Size;
		static void NewProp_IsRepeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRepeat;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Next;
		static void NewProp_bMoved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMoved;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorDown_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventCalcListCursorDown_Parms, Current), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorDown_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventCalcListCursorDown_Parms, Size), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorDown_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELMainMenuWidgetBase_eventCalcListCursorDown_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorDown_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuWidgetBase_eventCalcListCursorDown_Parms), &Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorDown_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorDown_Statics::NewProp_Next = { "Next", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventCalcListCursorDown_Parms, Next), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorDown_Statics::NewProp_bMoved_SetBit(void* Obj)
	{
		((ELMainMenuWidgetBase_eventCalcListCursorDown_Parms*)Obj)->bMoved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorDown_Statics::NewProp_bMoved = { "bMoved", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuWidgetBase_eventCalcListCursorDown_Parms), &Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorDown_Statics::NewProp_bMoved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorDown_Statics::NewProp_Current,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorDown_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorDown_Statics::NewProp_IsRepeat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorDown_Statics::NewProp_Next,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorDown_Statics::NewProp_bMoved,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "CalcListCursorDown", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventCalcListCursorDown_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorUp_Statics
	{
		struct ELMainMenuWidgetBase_eventCalcListCursorUp_Parms
		{
			int32 Current;
			int32 Size;
			bool IsRepeat;
			int32 Next;
			bool bMoved;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Current;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Size;
		static void NewProp_IsRepeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRepeat;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Next;
		static void NewProp_bMoved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMoved;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorUp_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventCalcListCursorUp_Parms, Current), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorUp_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventCalcListCursorUp_Parms, Size), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorUp_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELMainMenuWidgetBase_eventCalcListCursorUp_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorUp_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuWidgetBase_eventCalcListCursorUp_Parms), &Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorUp_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorUp_Statics::NewProp_Next = { "Next", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventCalcListCursorUp_Parms, Next), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorUp_Statics::NewProp_bMoved_SetBit(void* Obj)
	{
		((ELMainMenuWidgetBase_eventCalcListCursorUp_Parms*)Obj)->bMoved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorUp_Statics::NewProp_bMoved = { "bMoved", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuWidgetBase_eventCalcListCursorUp_Parms), &Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorUp_Statics::NewProp_bMoved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorUp_Statics::NewProp_Current,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorUp_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorUp_Statics::NewProp_IsRepeat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorUp_Statics::NewProp_Next,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorUp_Statics::NewProp_bMoved,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "CalcListCursorUp", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventCalcListCursorUp_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_CancelHoldOk_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_CancelHoldOk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_CancelHoldOk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "CancelHoldOk", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_CancelHoldOk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_CancelHoldOk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_CancelHoldOk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_CancelHoldOk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_GetHoldOkControllerId_Statics
	{
		struct ELMainMenuWidgetBase_eventGetHoldOkControllerId_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_GetHoldOkControllerId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventGetHoldOkControllerId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_GetHoldOkControllerId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_GetHoldOkControllerId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_GetHoldOkControllerId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_GetHoldOkControllerId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "GetHoldOkControllerId", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventGetHoldOkControllerId_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_GetHoldOkControllerId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_GetHoldOkControllerId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_GetHoldOkControllerId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_GetHoldOkControllerId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_GetHoldOkControllerId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_GetHoldOkControllerId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputGamepadKeyInfo_Statics
	{
		struct ELMainMenuWidgetBase_eventGetLastInputGamepadKeyInfo_Parms
		{
			int32 _controllerId;
			bool _findKey;
			EKeyMappingType _Result;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__controllerId;
		static void NewProp__findKey_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__findKey;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputGamepadKeyInfo_Statics::NewProp__controllerId = { "_controllerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventGetLastInputGamepadKeyInfo_Parms, _controllerId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputGamepadKeyInfo_Statics::NewProp__findKey_SetBit(void* Obj)
	{
		((ELMainMenuWidgetBase_eventGetLastInputGamepadKeyInfo_Parms*)Obj)->_findKey = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputGamepadKeyInfo_Statics::NewProp__findKey = { "_findKey", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuWidgetBase_eventGetLastInputGamepadKeyInfo_Parms), &Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputGamepadKeyInfo_Statics::NewProp__findKey_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputGamepadKeyInfo_Statics::NewProp__Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputGamepadKeyInfo_Statics::NewProp__Result = { "_Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventGetLastInputGamepadKeyInfo_Parms, _Result), Z_Construct_UEnum_ABP_200508_EKeyMappingType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputGamepadKeyInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputGamepadKeyInfo_Statics::NewProp__controllerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputGamepadKeyInfo_Statics::NewProp__findKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputGamepadKeyInfo_Statics::NewProp__Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputGamepadKeyInfo_Statics::NewProp__Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputGamepadKeyInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputGamepadKeyInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "GetLastInputGamepadKeyInfo", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventGetLastInputGamepadKeyInfo_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputGamepadKeyInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputGamepadKeyInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputGamepadKeyInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputGamepadKeyInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputGamepadKeyInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputGamepadKeyInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputKeyboardKeyInfo_Statics
	{
		struct ELMainMenuWidgetBase_eventGetLastInputKeyboardKeyInfo_Parms
		{
			int32 _controllerId;
			bool _findKey;
			EKeyMappingType _Result;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__controllerId;
		static void NewProp__findKey_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__findKey;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputKeyboardKeyInfo_Statics::NewProp__controllerId = { "_controllerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventGetLastInputKeyboardKeyInfo_Parms, _controllerId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputKeyboardKeyInfo_Statics::NewProp__findKey_SetBit(void* Obj)
	{
		((ELMainMenuWidgetBase_eventGetLastInputKeyboardKeyInfo_Parms*)Obj)->_findKey = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputKeyboardKeyInfo_Statics::NewProp__findKey = { "_findKey", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuWidgetBase_eventGetLastInputKeyboardKeyInfo_Parms), &Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputKeyboardKeyInfo_Statics::NewProp__findKey_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputKeyboardKeyInfo_Statics::NewProp__Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputKeyboardKeyInfo_Statics::NewProp__Result = { "_Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventGetLastInputKeyboardKeyInfo_Parms, _Result), Z_Construct_UEnum_ABP_200508_EKeyMappingType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputKeyboardKeyInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputKeyboardKeyInfo_Statics::NewProp__controllerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputKeyboardKeyInfo_Statics::NewProp__findKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputKeyboardKeyInfo_Statics::NewProp__Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputKeyboardKeyInfo_Statics::NewProp__Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputKeyboardKeyInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputKeyboardKeyInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "GetLastInputKeyboardKeyInfo", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventGetLastInputKeyboardKeyInfo_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputKeyboardKeyInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputKeyboardKeyInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputKeyboardKeyInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputKeyboardKeyInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputKeyboardKeyInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputKeyboardKeyInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_GetOkHoldTime_Statics
	{
		struct ELMainMenuWidgetBase_eventGetOkHoldTime_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_GetOkHoldTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventGetOkHoldTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_GetOkHoldTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_GetOkHoldTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_GetOkHoldTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_GetOkHoldTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "GetOkHoldTime", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventGetOkHoldTime_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_GetOkHoldTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_GetOkHoldTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_GetOkHoldTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_GetOkHoldTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_GetOkHoldTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_GetOkHoldTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_IsBlockInputController_Statics
	{
		struct ELMainMenuWidgetBase_eventIsBlockInputController_Parms
		{
			int32 ControllerId;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ControllerId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_IsBlockInputController_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventIsBlockInputController_Parms, ControllerId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMainMenuWidgetBase_IsBlockInputController_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMainMenuWidgetBase_eventIsBlockInputController_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_IsBlockInputController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuWidgetBase_eventIsBlockInputController_Parms), &Z_Construct_UFunction_UELMainMenuWidgetBase_IsBlockInputController_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_IsBlockInputController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_IsBlockInputController_Statics::NewProp_ControllerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_IsBlockInputController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_IsBlockInputController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_IsBlockInputController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "IsBlockInputController", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventIsBlockInputController_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_IsBlockInputController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_IsBlockInputController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_IsBlockInputController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_IsBlockInputController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_IsBlockInputController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_IsBlockInputController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_IsEnableHoldOk_Statics
	{
		struct ELMainMenuWidgetBase_eventIsEnableHoldOk_Parms
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
	void Z_Construct_UFunction_UELMainMenuWidgetBase_IsEnableHoldOk_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMainMenuWidgetBase_eventIsEnableHoldOk_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_IsEnableHoldOk_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuWidgetBase_eventIsEnableHoldOk_Parms), &Z_Construct_UFunction_UELMainMenuWidgetBase_IsEnableHoldOk_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_IsEnableHoldOk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_IsEnableHoldOk_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_IsEnableHoldOk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_IsEnableHoldOk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "IsEnableHoldOk", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventIsEnableHoldOk_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_IsEnableHoldOk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_IsEnableHoldOk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_IsEnableHoldOk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_IsEnableHoldOk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_IsEnableHoldOk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_IsEnableHoldOk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_IsEnableHoldOkPerController_Statics
	{
		struct ELMainMenuWidgetBase_eventIsEnableHoldOkPerController_Parms
		{
			int32 ControllerId;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ControllerId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_IsEnableHoldOkPerController_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventIsEnableHoldOkPerController_Parms, ControllerId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMainMenuWidgetBase_IsEnableHoldOkPerController_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMainMenuWidgetBase_eventIsEnableHoldOkPerController_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_IsEnableHoldOkPerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuWidgetBase_eventIsEnableHoldOkPerController_Parms), &Z_Construct_UFunction_UELMainMenuWidgetBase_IsEnableHoldOkPerController_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_IsEnableHoldOkPerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_IsEnableHoldOkPerController_Statics::NewProp_ControllerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_IsEnableHoldOkPerController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_IsEnableHoldOkPerController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_IsEnableHoldOkPerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "IsEnableHoldOkPerController", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventIsEnableHoldOkPerController_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_IsEnableHoldOkPerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_IsEnableHoldOkPerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_IsEnableHoldOkPerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_IsEnableHoldOkPerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_IsEnableHoldOkPerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_IsEnableHoldOkPerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_IsLastInputKeyByKeyboardMouse_Statics
	{
		struct ELMainMenuWidgetBase_eventIsLastInputKeyByKeyboardMouse_Parms
		{
			APlayerController* _playerController;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__playerController;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_IsLastInputKeyByKeyboardMouse_Statics::NewProp__playerController = { "_playerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventIsLastInputKeyByKeyboardMouse_Parms, _playerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMainMenuWidgetBase_IsLastInputKeyByKeyboardMouse_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMainMenuWidgetBase_eventIsLastInputKeyByKeyboardMouse_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_IsLastInputKeyByKeyboardMouse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuWidgetBase_eventIsLastInputKeyByKeyboardMouse_Parms), &Z_Construct_UFunction_UELMainMenuWidgetBase_IsLastInputKeyByKeyboardMouse_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_IsLastInputKeyByKeyboardMouse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_IsLastInputKeyByKeyboardMouse_Statics::NewProp__playerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_IsLastInputKeyByKeyboardMouse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_IsLastInputKeyByKeyboardMouse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_IsLastInputKeyByKeyboardMouse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "IsLastInputKeyByKeyboardMouse", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventIsLastInputKeyByKeyboardMouse_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_IsLastInputKeyByKeyboardMouse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_IsLastInputKeyByKeyboardMouse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_IsLastInputKeyByKeyboardMouse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_IsLastInputKeyByKeyboardMouse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_IsLastInputKeyByKeyboardMouse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_IsLastInputKeyByKeyboardMouse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_MouseStartHoldOk_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_MouseStartHoldOk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_MouseStartHoldOk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "MouseStartHoldOk", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_MouseStartHoldOk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_MouseStartHoldOk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_MouseStartHoldOk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_MouseStartHoldOk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_OnEndNative_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_OnEndNative_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnEndNative_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "OnEndNative", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_OnEndNative_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnEndNative_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_OnEndNative()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_OnEndNative_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAnalogLTrigger_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAnalogLTrigger_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputAnalogLTrigger_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAnalogLTrigger_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputAnalogLTrigger_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAnalogLTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAnalogLTrigger_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAnalogLTrigger_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAnalogLTrigger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAnalogLTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "OnInputAnalogLTrigger", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventOnInputAnalogLTrigger_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAnalogLTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAnalogLTrigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAnalogLTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAnalogLTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAnalogLTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAnalogLTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAnalogRTrigger_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAnalogRTrigger_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputAnalogRTrigger_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAnalogRTrigger_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputAnalogRTrigger_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAnalogRTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAnalogRTrigger_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAnalogRTrigger_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAnalogRTrigger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAnalogRTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "OnInputAnalogRTrigger", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventOnInputAnalogRTrigger_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAnalogRTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAnalogRTrigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAnalogRTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAnalogRTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAnalogRTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAnalogRTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAny_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAny_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputAny_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAny_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAny_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAny_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAny_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "OnInputAny", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventOnInputAny_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAny_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAny_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAny_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAny_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAny()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAny_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputCancel_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputCancel_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputCancel_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputCancel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputCancel_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputCancel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputCancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "OnInputCancel", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventOnInputCancel_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputCancel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputCancel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputCancel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputCancel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputCancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputCancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputChangeOption_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputChangeOption_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputChangeOption_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputChangeOption_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputChangeOption_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputChangeOption_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputChangeOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "OnInputChangeOption", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventOnInputChangeOption_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputChangeOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputChangeOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputChangeOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputChangeOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputChangeOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputChangeOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputDecision_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputDecision_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputDecision_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputDecision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputDecision_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputDecision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputDecision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "OnInputDecision", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventOnInputDecision_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputDecision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputDecision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputDecision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputDecision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputDecision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputDecision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputDown_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static void NewProp_IsRepeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRepeat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputDown_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputDown_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputDown_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELMainMenuWidgetBase_eventOnInputDown_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputDown_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuWidgetBase_eventOnInputDown_Parms), &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputDown_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputDown_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputDown_Statics::NewProp_IsRepeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "OnInputDown", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventOnInputDown_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonDown_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonDown_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputFaceButtonDown_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonDown_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "OnInputFaceButtonDown", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventOnInputFaceButtonDown_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonDown_Released_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonDown_Released_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputFaceButtonDown_Released_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonDown_Released_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonDown_Released_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonDown_Released_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonDown_Released_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "OnInputFaceButtonDown_Released", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventOnInputFaceButtonDown_Released_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonDown_Released_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonDown_Released_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonDown_Released_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonDown_Released_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonDown_Released()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonDown_Released_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonLeft_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonLeft_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputFaceButtonLeft_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonLeft_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "OnInputFaceButtonLeft", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventOnInputFaceButtonLeft_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonLeft_Released_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonLeft_Released_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputFaceButtonLeft_Released_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonLeft_Released_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonLeft_Released_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonLeft_Released_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonLeft_Released_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "OnInputFaceButtonLeft_Released", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventOnInputFaceButtonLeft_Released_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonLeft_Released_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonLeft_Released_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonLeft_Released_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonLeft_Released_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonLeft_Released()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonLeft_Released_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonRight_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonRight_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputFaceButtonRight_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonRight_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "OnInputFaceButtonRight", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventOnInputFaceButtonRight_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonRight_Released_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonRight_Released_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputFaceButtonRight_Released_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonRight_Released_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonRight_Released_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonRight_Released_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonRight_Released_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "OnInputFaceButtonRight_Released", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventOnInputFaceButtonRight_Released_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonRight_Released_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonRight_Released_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonRight_Released_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonRight_Released_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonRight_Released()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonRight_Released_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonUp_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonUp_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputFaceButtonUp_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonUp_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "OnInputFaceButtonUp", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventOnInputFaceButtonUp_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonUp_Released_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonUp_Released_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputFaceButtonUp_Released_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonUp_Released_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonUp_Released_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonUp_Released_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonUp_Released_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "OnInputFaceButtonUp_Released", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventOnInputFaceButtonUp_Released_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonUp_Released_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonUp_Released_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonUp_Released_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonUp_Released_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonUp_Released()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonUp_Released_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputLeft_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static void NewProp_IsRepeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRepeat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputLeft_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputLeft_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputLeft_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELMainMenuWidgetBase_eventOnInputLeft_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputLeft_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuWidgetBase_eventOnInputLeft_Parms), &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputLeft_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputLeft_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputLeft_Statics::NewProp_IsRepeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "OnInputLeft", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventOnInputLeft_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOK_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOK_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputOK_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOK_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOK_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "OnInputOK", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventOnInputOK_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOK_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOK_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOK_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOKWithSetDecidePadID_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DecideControllerID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOKWithSetDecidePadID_Statics::NewProp_DecideControllerID = { "DecideControllerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputOKWithSetDecidePadID_Parms, DecideControllerID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOKWithSetDecidePadID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOKWithSetDecidePadID_Statics::NewProp_DecideControllerID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOKWithSetDecidePadID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOKWithSetDecidePadID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "OnInputOKWithSetDecidePadID", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventOnInputOKWithSetDecidePadID_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOKWithSetDecidePadID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOKWithSetDecidePadID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOKWithSetDecidePadID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOKWithSetDecidePadID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOKWithSetDecidePadID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOKWithSetDecidePadID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenChat_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenChat_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputOpenChat_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenChat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenChat_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenChat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "OnInputOpenChat", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventOnInputOpenChat_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenChat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenChat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenChat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenChat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenChat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenFriendList_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenFriendList_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputOpenFriendList_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenFriendList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenFriendList_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenFriendList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenFriendList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "OnInputOpenFriendList", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventOnInputOpenFriendList_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenFriendList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenFriendList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenFriendList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenFriendList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenFriendList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenFriendList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenSettings_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenSettings_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputOpenSettings_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenSettings_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "OnInputOpenSettings", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventOnInputOpenSettings_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenStatus_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenStatus_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputOpenStatus_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenStatus_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "OnInputOpenStatus", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventOnInputOpenStatus_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenSwitchProfile_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenSwitchProfile_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputOpenSwitchProfile_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenSwitchProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenSwitchProfile_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenSwitchProfile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenSwitchProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "OnInputOpenSwitchProfile", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventOnInputOpenSwitchProfile_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenSwitchProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenSwitchProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenSwitchProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenSwitchProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenSwitchProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenSwitchProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRight_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static void NewProp_IsRepeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRepeat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRight_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputRight_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRight_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELMainMenuWidgetBase_eventOnInputRight_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRight_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuWidgetBase_eventOnInputRight_Parms), &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRight_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRight_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRight_Statics::NewProp_IsRepeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "OnInputRight", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventOnInputRight_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickDown_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static void NewProp_IsRepeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRepeat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickDown_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputRStickDown_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickDown_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELMainMenuWidgetBase_eventOnInputRStickDown_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickDown_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuWidgetBase_eventOnInputRStickDown_Parms), &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickDown_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickDown_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickDown_Statics::NewProp_IsRepeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "OnInputRStickDown", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventOnInputRStickDown_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickLeft_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static void NewProp_IsRepeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRepeat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickLeft_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputRStickLeft_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickLeft_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELMainMenuWidgetBase_eventOnInputRStickLeft_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickLeft_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuWidgetBase_eventOnInputRStickLeft_Parms), &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickLeft_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickLeft_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickLeft_Statics::NewProp_IsRepeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "OnInputRStickLeft", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventOnInputRStickLeft_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickRight_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static void NewProp_IsRepeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRepeat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickRight_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputRStickRight_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickRight_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELMainMenuWidgetBase_eventOnInputRStickRight_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickRight_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuWidgetBase_eventOnInputRStickRight_Parms), &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickRight_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickRight_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickRight_Statics::NewProp_IsRepeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "OnInputRStickRight", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventOnInputRStickRight_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickUp_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static void NewProp_IsRepeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRepeat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickUp_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputRStickUp_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickUp_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELMainMenuWidgetBase_eventOnInputRStickUp_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickUp_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuWidgetBase_eventOnInputRStickUp_Parms), &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickUp_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickUp_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickUp_Statics::NewProp_IsRepeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "OnInputRStickUp", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventOnInputRStickUp_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSelect_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSelect_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputSelect_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSelect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSelect_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSelect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSelect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "OnInputSelect", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventOnInputSelect_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSelect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSelect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSelect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSelect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSelect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSelect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSmallTabLeft_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static void NewProp_IsRepeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRepeat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSmallTabLeft_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputSmallTabLeft_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSmallTabLeft_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELMainMenuWidgetBase_eventOnInputSmallTabLeft_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSmallTabLeft_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuWidgetBase_eventOnInputSmallTabLeft_Parms), &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSmallTabLeft_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSmallTabLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSmallTabLeft_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSmallTabLeft_Statics::NewProp_IsRepeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSmallTabLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSmallTabLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "OnInputSmallTabLeft", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventOnInputSmallTabLeft_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSmallTabLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSmallTabLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSmallTabLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSmallTabLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSmallTabLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSmallTabLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSmallTabRight_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static void NewProp_IsRepeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRepeat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSmallTabRight_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputSmallTabRight_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSmallTabRight_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELMainMenuWidgetBase_eventOnInputSmallTabRight_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSmallTabRight_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuWidgetBase_eventOnInputSmallTabRight_Parms), &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSmallTabRight_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSmallTabRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSmallTabRight_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSmallTabRight_Statics::NewProp_IsRepeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSmallTabRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSmallTabRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "OnInputSmallTabRight", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventOnInputSmallTabRight_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSmallTabRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSmallTabRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSmallTabRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSmallTabRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSmallTabRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSmallTabRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStart_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStart_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputStart_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStart_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "OnInputStart", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventOnInputStart_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickL_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickL_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputStickL_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickL_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickL_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "OnInputStickL", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventOnInputStickL_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickR_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickR_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputStickR_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickR_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickR_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickR_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "OnInputStickR", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventOnInputStickR_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickR_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickR_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickR_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickR_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickRDirectionX_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickRDirectionX_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputStickRDirectionX_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickRDirectionX_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputStickRDirectionX_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickRDirectionX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickRDirectionX_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickRDirectionX_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickRDirectionX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickRDirectionX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "OnInputStickRDirectionX", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventOnInputStickRDirectionX_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickRDirectionX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickRDirectionX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickRDirectionX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickRDirectionX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickRDirectionX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickRDirectionX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickRDirectionY_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickRDirectionY_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputStickRDirectionY_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickRDirectionY_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputStickRDirectionY_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickRDirectionY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickRDirectionY_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickRDirectionY_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickRDirectionY_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickRDirectionY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "OnInputStickRDirectionY", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventOnInputStickRDirectionY_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickRDirectionY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickRDirectionY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickRDirectionY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickRDirectionY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickRDirectionY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickRDirectionY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputTabLeft_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static void NewProp_IsRepeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRepeat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputTabLeft_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputTabLeft_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputTabLeft_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELMainMenuWidgetBase_eventOnInputTabLeft_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputTabLeft_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuWidgetBase_eventOnInputTabLeft_Parms), &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputTabLeft_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputTabLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputTabLeft_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputTabLeft_Statics::NewProp_IsRepeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputTabLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputTabLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "OnInputTabLeft", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventOnInputTabLeft_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputTabLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputTabLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputTabLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputTabLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputTabLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputTabLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputTabRight_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static void NewProp_IsRepeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRepeat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputTabRight_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputTabRight_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputTabRight_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELMainMenuWidgetBase_eventOnInputTabRight_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputTabRight_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuWidgetBase_eventOnInputTabRight_Parms), &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputTabRight_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputTabRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputTabRight_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputTabRight_Statics::NewProp_IsRepeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputTabRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputTabRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "OnInputTabRight", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventOnInputTabRight_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputTabRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputTabRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputTabRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputTabRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputTabRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputTabRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputUp_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static void NewProp_IsRepeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRepeat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputUp_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventOnInputUp_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputUp_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELMainMenuWidgetBase_eventOnInputUp_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputUp_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuWidgetBase_eventOnInputUp_Parms), &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputUp_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputUp_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputUp_Statics::NewProp_IsRepeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "OnInputUp", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventOnInputUp_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_OnStartNative_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_OnStartNative_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_OnStartNative_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "OnStartNative", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_OnStartNative_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_OnStartNative_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_OnStartNative()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_OnStartNative_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_SetBlockInputController_Statics
	{
		struct ELMainMenuWidgetBase_eventSetBlockInputController_Parms
		{
			int32 ControllerId;
			bool bBlock;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ControllerId;
		static void NewProp_bBlock_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlock;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_SetBlockInputController_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventSetBlockInputController_Parms, ControllerId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMainMenuWidgetBase_SetBlockInputController_Statics::NewProp_bBlock_SetBit(void* Obj)
	{
		((ELMainMenuWidgetBase_eventSetBlockInputController_Parms*)Obj)->bBlock = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_SetBlockInputController_Statics::NewProp_bBlock = { "bBlock", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuWidgetBase_eventSetBlockInputController_Parms), &Z_Construct_UFunction_UELMainMenuWidgetBase_SetBlockInputController_Statics::NewProp_bBlock_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_SetBlockInputController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_SetBlockInputController_Statics::NewProp_ControllerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_SetBlockInputController_Statics::NewProp_bBlock,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_SetBlockInputController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_SetBlockInputController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "SetBlockInputController", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventSetBlockInputController_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_SetBlockInputController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_SetBlockInputController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_SetBlockInputController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_SetBlockInputController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_SetBlockInputController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_SetBlockInputController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOk_Statics
	{
		struct ELMainMenuWidgetBase_eventSetEnableHoldOk_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOk_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((ELMainMenuWidgetBase_eventSetEnableHoldOk_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOk_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuWidgetBase_eventSetEnableHoldOk_Parms), &Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOk_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOk_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "SetEnableHoldOk", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventSetEnableHoldOk_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOkAllController_Statics
	{
		struct ELMainMenuWidgetBase_eventSetEnableHoldOkAllController_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOkAllController_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((ELMainMenuWidgetBase_eventSetEnableHoldOkAllController_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOkAllController_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuWidgetBase_eventSetEnableHoldOkAllController_Parms), &Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOkAllController_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOkAllController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOkAllController_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOkAllController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOkAllController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "SetEnableHoldOkAllController", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventSetEnableHoldOkAllController_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOkAllController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOkAllController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOkAllController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOkAllController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOkAllController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOkAllController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOkPerController_Statics
	{
		struct ELMainMenuWidgetBase_eventSetEnableHoldOkPerController_Parms
		{
			int32 ControllerId;
			bool bEnable;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ControllerId;
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOkPerController_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuWidgetBase_eventSetEnableHoldOkPerController_Parms, ControllerId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOkPerController_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((ELMainMenuWidgetBase_eventSetEnableHoldOkPerController_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOkPerController_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuWidgetBase_eventSetEnableHoldOkPerController_Parms), &Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOkPerController_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOkPerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOkPerController_Statics::NewProp_ControllerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOkPerController_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOkPerController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOkPerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuWidgetBase, nullptr, "SetEnableHoldOkPerController", nullptr, nullptr, sizeof(ELMainMenuWidgetBase_eventSetEnableHoldOkPerController_Parms), Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOkPerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOkPerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOkPerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOkPerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOkPerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOkPerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELMainMenuWidgetBase_NoRegister()
	{
		return UELMainMenuWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELMainMenuWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStartHoldTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartHoldTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEndHoldTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndHoldTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEndDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELMainMenuWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELMenuWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELMainMenuWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursor, "CalcGridCursor" }, // 3757702762
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorDown, "CalcGridCursorDown" }, // 414680369
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorLeft, "CalcGridCursorLeft" }, // 3132908199
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorRight, "CalcGridCursorRight" }, // 1209266464
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_CalcGridCursorUp, "CalcGridCursorUp" }, // 99105743
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursor, "CalcListCursor" }, // 3417500028
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorDown, "CalcListCursorDown" }, // 883901917
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_CalcListCursorUp, "CalcListCursorUp" }, // 1156971092
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_CancelHoldOk, "CancelHoldOk" }, // 1557024084
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_GetHoldOkControllerId, "GetHoldOkControllerId" }, // 2230580871
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputGamepadKeyInfo, "GetLastInputGamepadKeyInfo" }, // 2994030037
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_GetLastInputKeyboardKeyInfo, "GetLastInputKeyboardKeyInfo" }, // 3805513415
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_GetOkHoldTime, "GetOkHoldTime" }, // 2768740187
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_IsBlockInputController, "IsBlockInputController" }, // 2301775341
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_IsEnableHoldOk, "IsEnableHoldOk" }, // 3090001352
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_IsEnableHoldOkPerController, "IsEnableHoldOkPerController" }, // 854517541
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_IsLastInputKeyByKeyboardMouse, "IsLastInputKeyByKeyboardMouse" }, // 1997321418
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_MouseStartHoldOk, "MouseStartHoldOk" }, // 2653328631
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_OnEndNative, "OnEndNative" }, // 3151658897
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAnalogLTrigger, "OnInputAnalogLTrigger" }, // 4064307279
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAnalogRTrigger, "OnInputAnalogRTrigger" }, // 3974688654
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputAny, "OnInputAny" }, // 1009095338
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputCancel, "OnInputCancel" }, // 877985281
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputChangeOption, "OnInputChangeOption" }, // 3817215325
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputDecision, "OnInputDecision" }, // 715573533
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputDown, "OnInputDown" }, // 1746028665
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonDown, "OnInputFaceButtonDown" }, // 1911688232
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonDown_Released, "OnInputFaceButtonDown_Released" }, // 116375511
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonLeft, "OnInputFaceButtonLeft" }, // 951955254
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonLeft_Released, "OnInputFaceButtonLeft_Released" }, // 2691345763
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonRight, "OnInputFaceButtonRight" }, // 404967207
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonRight_Released, "OnInputFaceButtonRight_Released" }, // 2415032098
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonUp, "OnInputFaceButtonUp" }, // 1910251172
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputFaceButtonUp_Released, "OnInputFaceButtonUp_Released" }, // 2219069724
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputLeft, "OnInputLeft" }, // 2298725637
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOK, "OnInputOK" }, // 3303623400
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOKWithSetDecidePadID, "OnInputOKWithSetDecidePadID" }, // 2592508074
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenChat, "OnInputOpenChat" }, // 3538950138
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenFriendList, "OnInputOpenFriendList" }, // 1333012218
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenSettings, "OnInputOpenSettings" }, // 1879631239
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenStatus, "OnInputOpenStatus" }, // 2672099981
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputOpenSwitchProfile, "OnInputOpenSwitchProfile" }, // 3385148103
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRight, "OnInputRight" }, // 3511938104
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickDown, "OnInputRStickDown" }, // 2255712373
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickLeft, "OnInputRStickLeft" }, // 825126133
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickRight, "OnInputRStickRight" }, // 927295566
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputRStickUp, "OnInputRStickUp" }, // 1068875631
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSelect, "OnInputSelect" }, // 1083554670
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSmallTabLeft, "OnInputSmallTabLeft" }, // 3844440426
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputSmallTabRight, "OnInputSmallTabRight" }, // 102054700
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStart, "OnInputStart" }, // 3614264663
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickL, "OnInputStickL" }, // 2582159473
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickR, "OnInputStickR" }, // 673941436
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickRDirectionX, "OnInputStickRDirectionX" }, // 2004537362
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputStickRDirectionY, "OnInputStickRDirectionY" }, // 1191798547
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputTabLeft, "OnInputTabLeft" }, // 4204037947
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputTabRight, "OnInputTabRight" }, // 3762432319
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_OnInputUp, "OnInputUp" }, // 2324073311
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_OnStartNative, "OnStartNative" }, // 978462197
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_SetBlockInputController, "SetBlockInputController" }, // 964780942
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOk, "SetEnableHoldOk" }, // 109675690
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOkAllController, "SetEnableHoldOkAllController" }, // 3483955521
		{ &Z_Construct_UFunction_UELMainMenuWidgetBase_SetEnableHoldOkPerController, "SetEnableHoldOkPerController" }, // 2670374578
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMainMenuWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELMainMenuWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMainMenuWidgetBase_Statics::NewProp_OnStartHoldTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMainMenuWidgetBase" },
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELMainMenuWidgetBase_Statics::NewProp_OnStartHoldTimer = { "OnStartHoldTimer", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELMainMenuWidgetBase, OnStartHoldTimer), Z_Construct_UDelegateFunction_ABP_200508_HoldTimerDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELMainMenuWidgetBase_Statics::NewProp_OnStartHoldTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMainMenuWidgetBase_Statics::NewProp_OnStartHoldTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMainMenuWidgetBase_Statics::NewProp_OnEndHoldTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMainMenuWidgetBase" },
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELMainMenuWidgetBase_Statics::NewProp_OnEndHoldTimer = { "OnEndHoldTimer", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELMainMenuWidgetBase, OnEndHoldTimer), Z_Construct_UDelegateFunction_ABP_200508_HoldTimerDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELMainMenuWidgetBase_Statics::NewProp_OnEndHoldTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMainMenuWidgetBase_Statics::NewProp_OnEndHoldTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMainMenuWidgetBase_Statics::NewProp_OnEndDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMainMenuWidgetBase" },
		{ "ModuleRelativePath", "Public/ELMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELMainMenuWidgetBase_Statics::NewProp_OnEndDelegate = { "OnEndDelegate", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELMainMenuWidgetBase, OnEndDelegate), Z_Construct_UDelegateFunction_ABP_200508_OnEndDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELMainMenuWidgetBase_Statics::NewProp_OnEndDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMainMenuWidgetBase_Statics::NewProp_OnEndDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELMainMenuWidgetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMainMenuWidgetBase_Statics::NewProp_OnStartHoldTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMainMenuWidgetBase_Statics::NewProp_OnEndHoldTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMainMenuWidgetBase_Statics::NewProp_OnEndDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELMainMenuWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELMainMenuWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELMainMenuWidgetBase_Statics::ClassParams = {
		&UELMainMenuWidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELMainMenuWidgetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELMainMenuWidgetBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELMainMenuWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELMainMenuWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELMainMenuWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELMainMenuWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELMainMenuWidgetBase, 2984254365);
	template<> ABP_200508_API UClass* StaticClass<UELMainMenuWidgetBase>()
	{
		return UELMainMenuWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELMainMenuWidgetBase(Z_Construct_UClass_UELMainMenuWidgetBase, &UELMainMenuWidgetBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELMainMenuWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELMainMenuWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
