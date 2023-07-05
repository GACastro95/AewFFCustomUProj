// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSPanelOutGameBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSPanelOutGameBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSPanelOutGameBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSPanelOutGameBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSPanelBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EOutGamePanelEventType();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSUIManagerOutGame_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSPrepareMovieStack();
	ABP_200508_API UClass* Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EPlayMovieDelayTimeType();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSUIManagerBase_NoRegister();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_OutGamePanelEvent__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UELSSPanelOutGameBase::execActivateOutGameEvent)
	{
		P_GET_ENUM(EOutGamePanelEventType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateOutGameEvent(EOutGamePanelEventType(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelOutGameBase::execClose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Close();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelOutGameBase::execGetOutGameUIManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSUIManagerOutGame**)Z_Param__Result=P_THIS->GetOutGameUIManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelOutGameBase::execGetPrepareMovieData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSSPrepareMovieStack*)Z_Param__Result=P_THIS->GetPrepareMovieData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelOutGameBase::execOpen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Open();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelOutGameBase::execPlaySE)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_seName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PlaySE(Z_Param_seName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelOutGameBase::execSetPanelVisible)
	{
		P_GET_UBOOL(Z_Param_IsOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPanelVisible(Z_Param_IsOn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelOutGameBase::execSetPrepareMovieData)
	{
		P_GET_STRUCT_REF(FSSPrepareMovieStack,Z_Param_Out_dat);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPrepareMovieData(Z_Param_Out_dat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelOutGameBase::execSetup)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_OBJECT(AELSSUIManagerBase,Z_Param_uiManager);
		P_GET_OBJECT(UUserWidget,Z_Param_commonWidget);
		P_GET_OBJECT(UUserWidget,Z_Param_movieWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Setup(Z_Param_ID,Z_Param_uiManager,Z_Param_commonWidget,Z_Param_movieWidget);
		P_NATIVE_END;
	}
	static FName NAME_UELSSPanelOutGameBase_Event_PanelClose = FName(TEXT("Event_PanelClose"));
	void UELSSPanelOutGameBase::Event_PanelClose()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelOutGameBase_Event_PanelClose),NULL);
	}
	static FName NAME_UELSSPanelOutGameBase_Event_PanelOpen = FName(TEXT("Event_PanelOpen"));
	void UELSSPanelOutGameBase::Event_PanelOpen()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelOutGameBase_Event_PanelOpen),NULL);
	}
	static FName NAME_UELSSPanelOutGameBase_Event_PanelSetup = FName(TEXT("Event_PanelSetup"));
	void UELSSPanelOutGameBase::Event_PanelSetup()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelOutGameBase_Event_PanelSetup),NULL);
	}
	static FName NAME_UELSSPanelOutGameBase_Event_Setup = FName(TEXT("Event_Setup"));
	void UELSSPanelOutGameBase::Event_Setup(UUserWidget* movieWidget)
	{
		ELSSPanelOutGameBase_eventEvent_Setup_Parms Parms;
		Parms.movieWidget=movieWidget;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelOutGameBase_Event_Setup),&Parms);
	}
	static FName NAME_UELSSPanelOutGameBase_OnInputAnalogLTrigger = FName(TEXT("OnInputAnalogLTrigger"));
	void UELSSPanelOutGameBase::OnInputAnalogLTrigger(AELGameCommonPlayerControllerBase* Controller, float Amount)
	{
		ELSSPanelOutGameBase_eventOnInputAnalogLTrigger_Parms Parms;
		Parms.Controller=Controller;
		Parms.Amount=Amount;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelOutGameBase_OnInputAnalogLTrigger),&Parms);
	}
	static FName NAME_UELSSPanelOutGameBase_OnInputAnalogRTrigger = FName(TEXT("OnInputAnalogRTrigger"));
	void UELSSPanelOutGameBase::OnInputAnalogRTrigger(AELGameCommonPlayerControllerBase* Controller, float Amount)
	{
		ELSSPanelOutGameBase_eventOnInputAnalogRTrigger_Parms Parms;
		Parms.Controller=Controller;
		Parms.Amount=Amount;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelOutGameBase_OnInputAnalogRTrigger),&Parms);
	}
	static FName NAME_UELSSPanelOutGameBase_OnInputAny = FName(TEXT("OnInputAny"));
	void UELSSPanelOutGameBase::OnInputAny(AELGameCommonPlayerControllerBase* Controller)
	{
		ELSSPanelOutGameBase_eventOnInputAny_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelOutGameBase_OnInputAny),&Parms);
	}
	static FName NAME_UELSSPanelOutGameBase_OnInputCancel = FName(TEXT("OnInputCancel"));
	void UELSSPanelOutGameBase::OnInputCancel(AELGameCommonPlayerControllerBase* Controller)
	{
		ELSSPanelOutGameBase_eventOnInputCancel_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelOutGameBase_OnInputCancel),&Parms);
	}
	static FName NAME_UELSSPanelOutGameBase_OnInputChangeOption = FName(TEXT("OnInputChangeOption"));
	void UELSSPanelOutGameBase::OnInputChangeOption(AELGameCommonPlayerControllerBase* Controller)
	{
		ELSSPanelOutGameBase_eventOnInputChangeOption_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelOutGameBase_OnInputChangeOption),&Parms);
	}
	static FName NAME_UELSSPanelOutGameBase_OnInputDecision = FName(TEXT("OnInputDecision"));
	void UELSSPanelOutGameBase::OnInputDecision(AELGameCommonPlayerControllerBase* Controller)
	{
		ELSSPanelOutGameBase_eventOnInputDecision_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelOutGameBase_OnInputDecision),&Parms);
	}
	static FName NAME_UELSSPanelOutGameBase_OnInputDown = FName(TEXT("OnInputDown"));
	void UELSSPanelOutGameBase::OnInputDown(AELGameCommonPlayerControllerBase* Controller, bool IsRepeat)
	{
		ELSSPanelOutGameBase_eventOnInputDown_Parms Parms;
		Parms.Controller=Controller;
		Parms.IsRepeat=IsRepeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelOutGameBase_OnInputDown),&Parms);
	}
	static FName NAME_UELSSPanelOutGameBase_OnInputFaceButtonDown = FName(TEXT("OnInputFaceButtonDown"));
	void UELSSPanelOutGameBase::OnInputFaceButtonDown(AELGameCommonPlayerControllerBase* Controller)
	{
		ELSSPanelOutGameBase_eventOnInputFaceButtonDown_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelOutGameBase_OnInputFaceButtonDown),&Parms);
	}
	static FName NAME_UELSSPanelOutGameBase_OnInputFaceButtonLeft = FName(TEXT("OnInputFaceButtonLeft"));
	void UELSSPanelOutGameBase::OnInputFaceButtonLeft(AELGameCommonPlayerControllerBase* Controller)
	{
		ELSSPanelOutGameBase_eventOnInputFaceButtonLeft_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelOutGameBase_OnInputFaceButtonLeft),&Parms);
	}
	static FName NAME_UELSSPanelOutGameBase_OnInputFaceButtonRight = FName(TEXT("OnInputFaceButtonRight"));
	void UELSSPanelOutGameBase::OnInputFaceButtonRight(AELGameCommonPlayerControllerBase* Controller)
	{
		ELSSPanelOutGameBase_eventOnInputFaceButtonRight_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelOutGameBase_OnInputFaceButtonRight),&Parms);
	}
	static FName NAME_UELSSPanelOutGameBase_OnInputFaceButtonUp = FName(TEXT("OnInputFaceButtonUp"));
	void UELSSPanelOutGameBase::OnInputFaceButtonUp(AELGameCommonPlayerControllerBase* Controller)
	{
		ELSSPanelOutGameBase_eventOnInputFaceButtonUp_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelOutGameBase_OnInputFaceButtonUp),&Parms);
	}
	static FName NAME_UELSSPanelOutGameBase_OnInputLeft = FName(TEXT("OnInputLeft"));
	void UELSSPanelOutGameBase::OnInputLeft(AELGameCommonPlayerControllerBase* Controller, bool IsRepeat)
	{
		ELSSPanelOutGameBase_eventOnInputLeft_Parms Parms;
		Parms.Controller=Controller;
		Parms.IsRepeat=IsRepeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelOutGameBase_OnInputLeft),&Parms);
	}
	static FName NAME_UELSSPanelOutGameBase_OnInputOK = FName(TEXT("OnInputOK"));
	void UELSSPanelOutGameBase::OnInputOK(AELGameCommonPlayerControllerBase* Controller)
	{
		ELSSPanelOutGameBase_eventOnInputOK_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelOutGameBase_OnInputOK),&Parms);
	}
	static FName NAME_UELSSPanelOutGameBase_OnInputOpenChat = FName(TEXT("OnInputOpenChat"));
	void UELSSPanelOutGameBase::OnInputOpenChat(AELGameCommonPlayerControllerBase* Controller)
	{
		ELSSPanelOutGameBase_eventOnInputOpenChat_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelOutGameBase_OnInputOpenChat),&Parms);
	}
	static FName NAME_UELSSPanelOutGameBase_OnInputOpenFriendList = FName(TEXT("OnInputOpenFriendList"));
	void UELSSPanelOutGameBase::OnInputOpenFriendList(AELGameCommonPlayerControllerBase* Controller)
	{
		ELSSPanelOutGameBase_eventOnInputOpenFriendList_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelOutGameBase_OnInputOpenFriendList),&Parms);
	}
	static FName NAME_UELSSPanelOutGameBase_OnInputOpenSettings = FName(TEXT("OnInputOpenSettings"));
	void UELSSPanelOutGameBase::OnInputOpenSettings(AELGameCommonPlayerControllerBase* Controller)
	{
		ELSSPanelOutGameBase_eventOnInputOpenSettings_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelOutGameBase_OnInputOpenSettings),&Parms);
	}
	static FName NAME_UELSSPanelOutGameBase_OnInputOpenStatus = FName(TEXT("OnInputOpenStatus"));
	void UELSSPanelOutGameBase::OnInputOpenStatus(AELGameCommonPlayerControllerBase* Controller)
	{
		ELSSPanelOutGameBase_eventOnInputOpenStatus_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelOutGameBase_OnInputOpenStatus),&Parms);
	}
	static FName NAME_UELSSPanelOutGameBase_OnInputRight = FName(TEXT("OnInputRight"));
	void UELSSPanelOutGameBase::OnInputRight(AELGameCommonPlayerControllerBase* Controller, bool IsRepeat)
	{
		ELSSPanelOutGameBase_eventOnInputRight_Parms Parms;
		Parms.Controller=Controller;
		Parms.IsRepeat=IsRepeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelOutGameBase_OnInputRight),&Parms);
	}
	static FName NAME_UELSSPanelOutGameBase_OnInputRStickDown = FName(TEXT("OnInputRStickDown"));
	void UELSSPanelOutGameBase::OnInputRStickDown(AELGameCommonPlayerControllerBase* Controller, bool IsRepeat)
	{
		ELSSPanelOutGameBase_eventOnInputRStickDown_Parms Parms;
		Parms.Controller=Controller;
		Parms.IsRepeat=IsRepeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelOutGameBase_OnInputRStickDown),&Parms);
	}
	static FName NAME_UELSSPanelOutGameBase_OnInputRStickLeft = FName(TEXT("OnInputRStickLeft"));
	void UELSSPanelOutGameBase::OnInputRStickLeft(AELGameCommonPlayerControllerBase* Controller, bool IsRepeat)
	{
		ELSSPanelOutGameBase_eventOnInputRStickLeft_Parms Parms;
		Parms.Controller=Controller;
		Parms.IsRepeat=IsRepeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelOutGameBase_OnInputRStickLeft),&Parms);
	}
	static FName NAME_UELSSPanelOutGameBase_OnInputRStickRight = FName(TEXT("OnInputRStickRight"));
	void UELSSPanelOutGameBase::OnInputRStickRight(AELGameCommonPlayerControllerBase* Controller, bool IsRepeat)
	{
		ELSSPanelOutGameBase_eventOnInputRStickRight_Parms Parms;
		Parms.Controller=Controller;
		Parms.IsRepeat=IsRepeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelOutGameBase_OnInputRStickRight),&Parms);
	}
	static FName NAME_UELSSPanelOutGameBase_OnInputRStickUp = FName(TEXT("OnInputRStickUp"));
	void UELSSPanelOutGameBase::OnInputRStickUp(AELGameCommonPlayerControllerBase* Controller, bool IsRepeat)
	{
		ELSSPanelOutGameBase_eventOnInputRStickUp_Parms Parms;
		Parms.Controller=Controller;
		Parms.IsRepeat=IsRepeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelOutGameBase_OnInputRStickUp),&Parms);
	}
	static FName NAME_UELSSPanelOutGameBase_OnInputSelect = FName(TEXT("OnInputSelect"));
	void UELSSPanelOutGameBase::OnInputSelect(AELGameCommonPlayerControllerBase* Controller)
	{
		ELSSPanelOutGameBase_eventOnInputSelect_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelOutGameBase_OnInputSelect),&Parms);
	}
	static FName NAME_UELSSPanelOutGameBase_OnInputSmallTabLeft = FName(TEXT("OnInputSmallTabLeft"));
	void UELSSPanelOutGameBase::OnInputSmallTabLeft(AELGameCommonPlayerControllerBase* Controller, bool IsRepeat)
	{
		ELSSPanelOutGameBase_eventOnInputSmallTabLeft_Parms Parms;
		Parms.Controller=Controller;
		Parms.IsRepeat=IsRepeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelOutGameBase_OnInputSmallTabLeft),&Parms);
	}
	static FName NAME_UELSSPanelOutGameBase_OnInputSmallTabRight = FName(TEXT("OnInputSmallTabRight"));
	void UELSSPanelOutGameBase::OnInputSmallTabRight(AELGameCommonPlayerControllerBase* Controller, bool IsRepeat)
	{
		ELSSPanelOutGameBase_eventOnInputSmallTabRight_Parms Parms;
		Parms.Controller=Controller;
		Parms.IsRepeat=IsRepeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelOutGameBase_OnInputSmallTabRight),&Parms);
	}
	static FName NAME_UELSSPanelOutGameBase_OnInputStart = FName(TEXT("OnInputStart"));
	void UELSSPanelOutGameBase::OnInputStart(AELGameCommonPlayerControllerBase* Controller)
	{
		ELSSPanelOutGameBase_eventOnInputStart_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelOutGameBase_OnInputStart),&Parms);
	}
	static FName NAME_UELSSPanelOutGameBase_OnInputStickL = FName(TEXT("OnInputStickL"));
	void UELSSPanelOutGameBase::OnInputStickL(AELGameCommonPlayerControllerBase* Controller)
	{
		ELSSPanelOutGameBase_eventOnInputStickL_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelOutGameBase_OnInputStickL),&Parms);
	}
	static FName NAME_UELSSPanelOutGameBase_OnInputStickR = FName(TEXT("OnInputStickR"));
	void UELSSPanelOutGameBase::OnInputStickR(AELGameCommonPlayerControllerBase* Controller)
	{
		ELSSPanelOutGameBase_eventOnInputStickR_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelOutGameBase_OnInputStickR),&Parms);
	}
	static FName NAME_UELSSPanelOutGameBase_OnInputStickRDirectionX = FName(TEXT("OnInputStickRDirectionX"));
	void UELSSPanelOutGameBase::OnInputStickRDirectionX(AELGameCommonPlayerControllerBase* Controller, float Amount)
	{
		ELSSPanelOutGameBase_eventOnInputStickRDirectionX_Parms Parms;
		Parms.Controller=Controller;
		Parms.Amount=Amount;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelOutGameBase_OnInputStickRDirectionX),&Parms);
	}
	static FName NAME_UELSSPanelOutGameBase_OnInputStickRDirectionY = FName(TEXT("OnInputStickRDirectionY"));
	void UELSSPanelOutGameBase::OnInputStickRDirectionY(AELGameCommonPlayerControllerBase* Controller, float Amount)
	{
		ELSSPanelOutGameBase_eventOnInputStickRDirectionY_Parms Parms;
		Parms.Controller=Controller;
		Parms.Amount=Amount;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelOutGameBase_OnInputStickRDirectionY),&Parms);
	}
	static FName NAME_UELSSPanelOutGameBase_OnInputTabLeft = FName(TEXT("OnInputTabLeft"));
	void UELSSPanelOutGameBase::OnInputTabLeft(AELGameCommonPlayerControllerBase* Controller, bool IsRepeat)
	{
		ELSSPanelOutGameBase_eventOnInputTabLeft_Parms Parms;
		Parms.Controller=Controller;
		Parms.IsRepeat=IsRepeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelOutGameBase_OnInputTabLeft),&Parms);
	}
	static FName NAME_UELSSPanelOutGameBase_OnInputTabRight = FName(TEXT("OnInputTabRight"));
	void UELSSPanelOutGameBase::OnInputTabRight(AELGameCommonPlayerControllerBase* Controller, bool IsRepeat)
	{
		ELSSPanelOutGameBase_eventOnInputTabRight_Parms Parms;
		Parms.Controller=Controller;
		Parms.IsRepeat=IsRepeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelOutGameBase_OnInputTabRight),&Parms);
	}
	static FName NAME_UELSSPanelOutGameBase_OnInputUp = FName(TEXT("OnInputUp"));
	void UELSSPanelOutGameBase::OnInputUp(AELGameCommonPlayerControllerBase* Controller, bool IsRepeat)
	{
		ELSSPanelOutGameBase_eventOnInputUp_Parms Parms;
		Parms.Controller=Controller;
		Parms.IsRepeat=IsRepeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelOutGameBase_OnInputUp),&Parms);
	}
	static FName NAME_UELSSPanelOutGameBase_OnPanelResume = FName(TEXT("OnPanelResume"));
	void UELSSPanelOutGameBase::OnPanelResume()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelOutGameBase_OnPanelResume),NULL);
	}
	static FName NAME_UELSSPanelOutGameBase_PlayBGM = FName(TEXT("PlayBGM"));
	void UELSSPanelOutGameBase::PlayBGM(const int32 bgmId)
	{
		ELSSPanelOutGameBase_eventPlayBGM_Parms Parms;
		Parms.bgmId=bgmId;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelOutGameBase_PlayBGM),&Parms);
	}
	static FName NAME_UELSSPanelOutGameBase_PlayMovie = FName(TEXT("PlayMovie"));
	void UELSSPanelOutGameBase::PlayMovie(const FString& MovieID, bool IsLoop, bool isAutoPlay, float addDelayTime, EPlayMovieDelayTimeType delayType)
	{
		ELSSPanelOutGameBase_eventPlayMovie_Parms Parms;
		Parms.MovieID=MovieID;
		Parms.IsLoop=IsLoop ? true : false;
		Parms.isAutoPlay=isAutoPlay ? true : false;
		Parms.addDelayTime=addDelayTime;
		Parms.delayType=delayType;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelOutGameBase_PlayMovie),&Parms);
	}
	void UELSSPanelOutGameBase::StaticRegisterNativesUELSSPanelOutGameBase()
	{
		UClass* Class = UELSSPanelOutGameBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateOutGameEvent", &UELSSPanelOutGameBase::execActivateOutGameEvent },
			{ "Close", &UELSSPanelOutGameBase::execClose },
			{ "GetOutGameUIManager", &UELSSPanelOutGameBase::execGetOutGameUIManager },
			{ "GetPrepareMovieData", &UELSSPanelOutGameBase::execGetPrepareMovieData },
			{ "Open", &UELSSPanelOutGameBase::execOpen },
			{ "PlaySE", &UELSSPanelOutGameBase::execPlaySE },
			{ "SetPanelVisible", &UELSSPanelOutGameBase::execSetPanelVisible },
			{ "SetPrepareMovieData", &UELSSPanelOutGameBase::execSetPrepareMovieData },
			{ "Setup", &UELSSPanelOutGameBase::execSetup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_ActivateOutGameEvent_Statics
	{
		struct ELSSPanelOutGameBase_eventActivateOutGameEvent_Parms
		{
			EOutGamePanelEventType Type;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_ActivateOutGameEvent_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_ActivateOutGameEvent_Statics::NewProp_Type_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_ActivateOutGameEvent_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventActivateOutGameEvent_Parms, Type), Z_Construct_UEnum_ABP_200508_EOutGamePanelEventType, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_ActivateOutGameEvent_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_ActivateOutGameEvent_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_ActivateOutGameEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_ActivateOutGameEvent_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_ActivateOutGameEvent_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_ActivateOutGameEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_ActivateOutGameEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "ActivateOutGameEvent", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventActivateOutGameEvent_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_ActivateOutGameEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_ActivateOutGameEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_ActivateOutGameEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_ActivateOutGameEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_ActivateOutGameEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_ActivateOutGameEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_Close_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_Close_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_Close_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "Close", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_Close_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_Close_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_Close()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_Close_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_Event_PanelClose_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_Event_PanelClose_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_Event_PanelClose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "Event_PanelClose", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_Event_PanelClose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_Event_PanelClose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_Event_PanelClose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_Event_PanelClose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_Event_PanelOpen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_Event_PanelOpen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_Event_PanelOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "Event_PanelOpen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_Event_PanelOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_Event_PanelOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_Event_PanelOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_Event_PanelOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_Event_PanelSetup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_Event_PanelSetup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_Event_PanelSetup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "Event_PanelSetup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_Event_PanelSetup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_Event_PanelSetup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_Event_PanelSetup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_Event_PanelSetup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_Event_Setup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_movieWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_movieWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_Event_Setup_Statics::NewProp_movieWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_Event_Setup_Statics::NewProp_movieWidget = { "movieWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventEvent_Setup_Parms, movieWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_Event_Setup_Statics::NewProp_movieWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_Event_Setup_Statics::NewProp_movieWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_Event_Setup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_Event_Setup_Statics::NewProp_movieWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_Event_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_Event_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "Event_Setup", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventEvent_Setup_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_Event_Setup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_Event_Setup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_Event_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_Event_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_Event_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_Event_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_GetOutGameUIManager_Statics
	{
		struct ELSSPanelOutGameBase_eventGetOutGameUIManager_Parms
		{
			AELSSUIManagerOutGame* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_GetOutGameUIManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventGetOutGameUIManager_Parms, ReturnValue), Z_Construct_UClass_AELSSUIManagerOutGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_GetOutGameUIManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_GetOutGameUIManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_GetOutGameUIManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_GetOutGameUIManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "GetOutGameUIManager", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventGetOutGameUIManager_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_GetOutGameUIManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_GetOutGameUIManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_GetOutGameUIManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_GetOutGameUIManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_GetOutGameUIManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_GetOutGameUIManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_GetPrepareMovieData_Statics
	{
		struct ELSSPanelOutGameBase_eventGetPrepareMovieData_Parms
		{
			FSSPrepareMovieStack ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_GetPrepareMovieData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventGetPrepareMovieData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSSPrepareMovieStack, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_GetPrepareMovieData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_GetPrepareMovieData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_GetPrepareMovieData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_GetPrepareMovieData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "GetPrepareMovieData", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventGetPrepareMovieData_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_GetPrepareMovieData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_GetPrepareMovieData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_GetPrepareMovieData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_GetPrepareMovieData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_GetPrepareMovieData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_GetPrepareMovieData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAnalogLTrigger_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAnalogLTrigger_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventOnInputAnalogLTrigger_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAnalogLTrigger_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventOnInputAnalogLTrigger_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAnalogLTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAnalogLTrigger_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAnalogLTrigger_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAnalogLTrigger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAnalogLTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "OnInputAnalogLTrigger", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventOnInputAnalogLTrigger_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAnalogLTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAnalogLTrigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAnalogLTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAnalogLTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAnalogLTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAnalogLTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAnalogRTrigger_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAnalogRTrigger_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventOnInputAnalogRTrigger_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAnalogRTrigger_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventOnInputAnalogRTrigger_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAnalogRTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAnalogRTrigger_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAnalogRTrigger_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAnalogRTrigger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAnalogRTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "OnInputAnalogRTrigger", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventOnInputAnalogRTrigger_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAnalogRTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAnalogRTrigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAnalogRTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAnalogRTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAnalogRTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAnalogRTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAny_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAny_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventOnInputAny_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAny_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAny_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAny_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAny_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "OnInputAny", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventOnInputAny_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAny_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAny_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAny_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAny_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAny()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAny_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputCancel_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputCancel_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventOnInputCancel_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputCancel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputCancel_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputCancel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputCancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "OnInputCancel", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventOnInputCancel_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputCancel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputCancel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputCancel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputCancel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputCancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputCancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputChangeOption_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputChangeOption_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventOnInputChangeOption_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputChangeOption_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputChangeOption_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputChangeOption_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputChangeOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "OnInputChangeOption", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventOnInputChangeOption_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputChangeOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputChangeOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputChangeOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputChangeOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputChangeOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputChangeOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputDecision_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputDecision_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventOnInputDecision_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputDecision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputDecision_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputDecision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputDecision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "OnInputDecision", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventOnInputDecision_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputDecision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputDecision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputDecision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputDecision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputDecision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputDecision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputDown_Statics
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputDown_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventOnInputDown_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputDown_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELSSPanelOutGameBase_eventOnInputDown_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputDown_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelOutGameBase_eventOnInputDown_Parms), &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputDown_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputDown_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputDown_Statics::NewProp_IsRepeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "OnInputDown", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventOnInputDown_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonDown_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonDown_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventOnInputFaceButtonDown_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonDown_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "OnInputFaceButtonDown", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventOnInputFaceButtonDown_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonLeft_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonLeft_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventOnInputFaceButtonLeft_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonLeft_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "OnInputFaceButtonLeft", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventOnInputFaceButtonLeft_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonRight_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonRight_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventOnInputFaceButtonRight_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonRight_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "OnInputFaceButtonRight", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventOnInputFaceButtonRight_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonUp_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonUp_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventOnInputFaceButtonUp_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonUp_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "OnInputFaceButtonUp", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventOnInputFaceButtonUp_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputLeft_Statics
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputLeft_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventOnInputLeft_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputLeft_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELSSPanelOutGameBase_eventOnInputLeft_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputLeft_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelOutGameBase_eventOnInputLeft_Parms), &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputLeft_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputLeft_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputLeft_Statics::NewProp_IsRepeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "OnInputLeft", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventOnInputLeft_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOK_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOK_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventOnInputOK_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOK_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOK_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "OnInputOK", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventOnInputOK_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOK_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOK_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOK_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenChat_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenChat_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventOnInputOpenChat_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenChat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenChat_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenChat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "OnInputOpenChat", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventOnInputOpenChat_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenChat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenChat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenChat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenChat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenChat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenFriendList_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenFriendList_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventOnInputOpenFriendList_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenFriendList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenFriendList_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenFriendList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenFriendList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "OnInputOpenFriendList", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventOnInputOpenFriendList_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenFriendList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenFriendList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenFriendList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenFriendList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenFriendList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenFriendList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenSettings_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenSettings_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventOnInputOpenSettings_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenSettings_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "OnInputOpenSettings", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventOnInputOpenSettings_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenStatus_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenStatus_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventOnInputOpenStatus_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenStatus_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "OnInputOpenStatus", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventOnInputOpenStatus_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRight_Statics
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRight_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventOnInputRight_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRight_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELSSPanelOutGameBase_eventOnInputRight_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRight_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelOutGameBase_eventOnInputRight_Parms), &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRight_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRight_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRight_Statics::NewProp_IsRepeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "OnInputRight", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventOnInputRight_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickDown_Statics
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickDown_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventOnInputRStickDown_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickDown_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELSSPanelOutGameBase_eventOnInputRStickDown_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickDown_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelOutGameBase_eventOnInputRStickDown_Parms), &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickDown_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickDown_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickDown_Statics::NewProp_IsRepeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "OnInputRStickDown", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventOnInputRStickDown_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickLeft_Statics
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickLeft_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventOnInputRStickLeft_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickLeft_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELSSPanelOutGameBase_eventOnInputRStickLeft_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickLeft_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelOutGameBase_eventOnInputRStickLeft_Parms), &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickLeft_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickLeft_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickLeft_Statics::NewProp_IsRepeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "OnInputRStickLeft", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventOnInputRStickLeft_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickRight_Statics
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickRight_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventOnInputRStickRight_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickRight_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELSSPanelOutGameBase_eventOnInputRStickRight_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickRight_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelOutGameBase_eventOnInputRStickRight_Parms), &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickRight_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickRight_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickRight_Statics::NewProp_IsRepeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "OnInputRStickRight", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventOnInputRStickRight_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickUp_Statics
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickUp_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventOnInputRStickUp_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickUp_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELSSPanelOutGameBase_eventOnInputRStickUp_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickUp_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelOutGameBase_eventOnInputRStickUp_Parms), &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickUp_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickUp_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickUp_Statics::NewProp_IsRepeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "OnInputRStickUp", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventOnInputRStickUp_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSelect_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSelect_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventOnInputSelect_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSelect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSelect_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSelect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSelect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "OnInputSelect", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventOnInputSelect_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSelect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSelect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSelect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSelect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSelect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSelect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSmallTabLeft_Statics
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSmallTabLeft_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventOnInputSmallTabLeft_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSmallTabLeft_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELSSPanelOutGameBase_eventOnInputSmallTabLeft_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSmallTabLeft_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelOutGameBase_eventOnInputSmallTabLeft_Parms), &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSmallTabLeft_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSmallTabLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSmallTabLeft_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSmallTabLeft_Statics::NewProp_IsRepeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSmallTabLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSmallTabLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "OnInputSmallTabLeft", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventOnInputSmallTabLeft_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSmallTabLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSmallTabLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSmallTabLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSmallTabLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSmallTabLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSmallTabLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSmallTabRight_Statics
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSmallTabRight_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventOnInputSmallTabRight_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSmallTabRight_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELSSPanelOutGameBase_eventOnInputSmallTabRight_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSmallTabRight_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelOutGameBase_eventOnInputSmallTabRight_Parms), &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSmallTabRight_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSmallTabRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSmallTabRight_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSmallTabRight_Statics::NewProp_IsRepeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSmallTabRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSmallTabRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "OnInputSmallTabRight", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventOnInputSmallTabRight_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSmallTabRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSmallTabRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSmallTabRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSmallTabRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSmallTabRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSmallTabRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStart_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStart_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventOnInputStart_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStart_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "OnInputStart", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventOnInputStart_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickL_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickL_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventOnInputStickL_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickL_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickL_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "OnInputStickL", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventOnInputStickL_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickR_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickR_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventOnInputStickR_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickR_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickR_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickR_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "OnInputStickR", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventOnInputStickR_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickR_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickR_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickR_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickR_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickRDirectionX_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickRDirectionX_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventOnInputStickRDirectionX_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickRDirectionX_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventOnInputStickRDirectionX_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickRDirectionX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickRDirectionX_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickRDirectionX_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickRDirectionX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickRDirectionX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "OnInputStickRDirectionX", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventOnInputStickRDirectionX_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickRDirectionX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickRDirectionX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickRDirectionX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickRDirectionX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickRDirectionX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickRDirectionX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickRDirectionY_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickRDirectionY_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventOnInputStickRDirectionY_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickRDirectionY_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventOnInputStickRDirectionY_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickRDirectionY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickRDirectionY_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickRDirectionY_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickRDirectionY_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickRDirectionY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "OnInputStickRDirectionY", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventOnInputStickRDirectionY_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickRDirectionY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickRDirectionY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickRDirectionY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickRDirectionY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickRDirectionY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickRDirectionY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputTabLeft_Statics
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputTabLeft_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventOnInputTabLeft_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputTabLeft_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELSSPanelOutGameBase_eventOnInputTabLeft_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputTabLeft_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelOutGameBase_eventOnInputTabLeft_Parms), &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputTabLeft_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputTabLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputTabLeft_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputTabLeft_Statics::NewProp_IsRepeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputTabLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputTabLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "OnInputTabLeft", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventOnInputTabLeft_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputTabLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputTabLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputTabLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputTabLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputTabLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputTabLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputTabRight_Statics
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputTabRight_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventOnInputTabRight_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputTabRight_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELSSPanelOutGameBase_eventOnInputTabRight_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputTabRight_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelOutGameBase_eventOnInputTabRight_Parms), &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputTabRight_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputTabRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputTabRight_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputTabRight_Statics::NewProp_IsRepeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputTabRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputTabRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "OnInputTabRight", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventOnInputTabRight_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputTabRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputTabRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputTabRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputTabRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputTabRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputTabRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputUp_Statics
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputUp_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventOnInputUp_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputUp_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELSSPanelOutGameBase_eventOnInputUp_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputUp_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelOutGameBase_eventOnInputUp_Parms), &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputUp_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputUp_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputUp_Statics::NewProp_IsRepeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "OnInputUp", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventOnInputUp_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_OnPanelResume_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_OnPanelResume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_OnPanelResume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "OnPanelResume", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_OnPanelResume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_OnPanelResume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_OnPanelResume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_OnPanelResume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_Open_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_Open_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_Open_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "Open", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_Open_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_Open_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_Open()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_Open_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_PlayBGM_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bgmId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bgmId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_PlayBGM_Statics::NewProp_bgmId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_PlayBGM_Statics::NewProp_bgmId = { "bgmId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventPlayBGM_Parms, bgmId), METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_PlayBGM_Statics::NewProp_bgmId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_PlayBGM_Statics::NewProp_bgmId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_PlayBGM_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_PlayBGM_Statics::NewProp_bgmId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_PlayBGM_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_PlayBGM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "PlayBGM", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventPlayBGM_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_PlayBGM_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_PlayBGM_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_PlayBGM_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_PlayBGM_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_PlayBGM()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_PlayBGM_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_PlayMovie_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovieID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MovieID;
		static void NewProp_IsLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLoop;
		static void NewProp_isAutoPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAutoPlay;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_addDelayTime;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_delayType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_delayType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_PlayMovie_Statics::NewProp_MovieID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_PlayMovie_Statics::NewProp_MovieID = { "MovieID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventPlayMovie_Parms, MovieID), METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_PlayMovie_Statics::NewProp_MovieID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_PlayMovie_Statics::NewProp_MovieID_MetaData)) };
	void Z_Construct_UFunction_UELSSPanelOutGameBase_PlayMovie_Statics::NewProp_IsLoop_SetBit(void* Obj)
	{
		((ELSSPanelOutGameBase_eventPlayMovie_Parms*)Obj)->IsLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_PlayMovie_Statics::NewProp_IsLoop = { "IsLoop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelOutGameBase_eventPlayMovie_Parms), &Z_Construct_UFunction_UELSSPanelOutGameBase_PlayMovie_Statics::NewProp_IsLoop_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSPanelOutGameBase_PlayMovie_Statics::NewProp_isAutoPlay_SetBit(void* Obj)
	{
		((ELSSPanelOutGameBase_eventPlayMovie_Parms*)Obj)->isAutoPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_PlayMovie_Statics::NewProp_isAutoPlay = { "isAutoPlay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelOutGameBase_eventPlayMovie_Parms), &Z_Construct_UFunction_UELSSPanelOutGameBase_PlayMovie_Statics::NewProp_isAutoPlay_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_PlayMovie_Statics::NewProp_addDelayTime = { "addDelayTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventPlayMovie_Parms, addDelayTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_PlayMovie_Statics::NewProp_delayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_PlayMovie_Statics::NewProp_delayType = { "delayType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventPlayMovie_Parms, delayType), Z_Construct_UEnum_ABP_200508_EPlayMovieDelayTimeType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_PlayMovie_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_PlayMovie_Statics::NewProp_MovieID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_PlayMovie_Statics::NewProp_IsLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_PlayMovie_Statics::NewProp_isAutoPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_PlayMovie_Statics::NewProp_addDelayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_PlayMovie_Statics::NewProp_delayType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_PlayMovie_Statics::NewProp_delayType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_PlayMovie_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_PlayMovie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "PlayMovie", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventPlayMovie_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_PlayMovie_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_PlayMovie_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_PlayMovie_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_PlayMovie_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_PlayMovie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_PlayMovie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_PlaySE_Statics
	{
		struct ELSSPanelOutGameBase_eventPlaySE_Parms
		{
			FString seName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_seName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_seName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_PlaySE_Statics::NewProp_seName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_PlaySE_Statics::NewProp_seName = { "seName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventPlaySE_Parms, seName), METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_PlaySE_Statics::NewProp_seName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_PlaySE_Statics::NewProp_seName_MetaData)) };
	void Z_Construct_UFunction_UELSSPanelOutGameBase_PlaySE_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPanelOutGameBase_eventPlaySE_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_PlaySE_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelOutGameBase_eventPlaySE_Parms), &Z_Construct_UFunction_UELSSPanelOutGameBase_PlaySE_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_PlaySE_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_PlaySE_Statics::NewProp_seName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_PlaySE_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_PlaySE_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_PlaySE_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "PlaySE", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventPlaySE_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_PlaySE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_PlaySE_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_PlaySE_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_PlaySE_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_PlaySE()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_PlaySE_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_SetPanelVisible_Statics
	{
		struct ELSSPanelOutGameBase_eventSetPanelVisible_Parms
		{
			bool IsOn;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsOn_MetaData[];
#endif
		static void NewProp_IsOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_SetPanelVisible_Statics::NewProp_IsOn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELSSPanelOutGameBase_SetPanelVisible_Statics::NewProp_IsOn_SetBit(void* Obj)
	{
		((ELSSPanelOutGameBase_eventSetPanelVisible_Parms*)Obj)->IsOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_SetPanelVisible_Statics::NewProp_IsOn = { "IsOn", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelOutGameBase_eventSetPanelVisible_Parms), &Z_Construct_UFunction_UELSSPanelOutGameBase_SetPanelVisible_Statics::NewProp_IsOn_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_SetPanelVisible_Statics::NewProp_IsOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_SetPanelVisible_Statics::NewProp_IsOn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_SetPanelVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_SetPanelVisible_Statics::NewProp_IsOn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_SetPanelVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_SetPanelVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "SetPanelVisible", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventSetPanelVisible_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_SetPanelVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_SetPanelVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_SetPanelVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_SetPanelVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_SetPanelVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_SetPanelVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_SetPrepareMovieData_Statics
	{
		struct ELSSPanelOutGameBase_eventSetPrepareMovieData_Parms
		{
			FSSPrepareMovieStack dat;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_dat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_SetPrepareMovieData_Statics::NewProp_dat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_SetPrepareMovieData_Statics::NewProp_dat = { "dat", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventSetPrepareMovieData_Parms, dat), Z_Construct_UScriptStruct_FSSPrepareMovieStack, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_SetPrepareMovieData_Statics::NewProp_dat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_SetPrepareMovieData_Statics::NewProp_dat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_SetPrepareMovieData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_SetPrepareMovieData_Statics::NewProp_dat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_SetPrepareMovieData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_SetPrepareMovieData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "SetPrepareMovieData", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventSetPrepareMovieData_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_SetPrepareMovieData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_SetPrepareMovieData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_SetPrepareMovieData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_SetPrepareMovieData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_SetPrepareMovieData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_SetPrepareMovieData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameBase_Setup_Statics
	{
		struct ELSSPanelOutGameBase_eventSetup_Parms
		{
			int32 ID;
			AELSSUIManagerBase* uiManager;
			UUserWidget* commonWidget;
			UUserWidget* movieWidget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_uiManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_commonWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_commonWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_movieWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_movieWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_Setup_Statics::NewProp_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_Setup_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventSetup_Parms, ID), METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_Setup_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_Setup_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_Setup_Statics::NewProp_uiManager = { "uiManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventSetup_Parms, uiManager), Z_Construct_UClass_AELSSUIManagerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_Setup_Statics::NewProp_commonWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_Setup_Statics::NewProp_commonWidget = { "commonWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventSetup_Parms, commonWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_Setup_Statics::NewProp_commonWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_Setup_Statics::NewProp_commonWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_Setup_Statics::NewProp_movieWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameBase_Setup_Statics::NewProp_movieWidget = { "movieWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameBase_eventSetup_Parms, movieWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_Setup_Statics::NewProp_movieWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_Setup_Statics::NewProp_movieWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameBase_Setup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_Setup_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_Setup_Statics::NewProp_uiManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_Setup_Statics::NewProp_commonWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameBase_Setup_Statics::NewProp_movieWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameBase_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameBase_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameBase, nullptr, "Setup", nullptr, nullptr, sizeof(ELSSPanelOutGameBase_eventSetup_Parms), Z_Construct_UFunction_UELSSPanelOutGameBase_Setup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_Setup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameBase_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameBase_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameBase_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameBase_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSPanelOutGameBase_NoRegister()
	{
		return UELSSPanelOutGameBase::StaticClass();
	}
	struct Z_Construct_UClass_UELSSPanelOutGameBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onPanelResultEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onPanelResultEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_panelId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_panelId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_uiOutGameManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_uiOutGameManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_uiMovieWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_uiMovieWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_prepareMovieData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_prepareMovieData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isParentInputEnable_MetaData[];
#endif
		static void NewProp_isParentInputEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isParentInputEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSPanelOutGameBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSPanelBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSPanelOutGameBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_ActivateOutGameEvent, "ActivateOutGameEvent" }, // 2723159155
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_Close, "Close" }, // 2020699210
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_Event_PanelClose, "Event_PanelClose" }, // 1010566392
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_Event_PanelOpen, "Event_PanelOpen" }, // 1785053109
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_Event_PanelSetup, "Event_PanelSetup" }, // 2490523212
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_Event_Setup, "Event_Setup" }, // 299923418
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_GetOutGameUIManager, "GetOutGameUIManager" }, // 1583045558
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_GetPrepareMovieData, "GetPrepareMovieData" }, // 129015879
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAnalogLTrigger, "OnInputAnalogLTrigger" }, // 1284129904
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAnalogRTrigger, "OnInputAnalogRTrigger" }, // 358052277
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputAny, "OnInputAny" }, // 1824332499
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputCancel, "OnInputCancel" }, // 1140818555
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputChangeOption, "OnInputChangeOption" }, // 1751110750
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputDecision, "OnInputDecision" }, // 3299162904
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputDown, "OnInputDown" }, // 3354775753
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonDown, "OnInputFaceButtonDown" }, // 1440075058
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonLeft, "OnInputFaceButtonLeft" }, // 889218912
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonRight, "OnInputFaceButtonRight" }, // 3902746855
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputFaceButtonUp, "OnInputFaceButtonUp" }, // 871065325
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputLeft, "OnInputLeft" }, // 770616901
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOK, "OnInputOK" }, // 109865828
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenChat, "OnInputOpenChat" }, // 1187692739
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenFriendList, "OnInputOpenFriendList" }, // 2299289499
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenSettings, "OnInputOpenSettings" }, // 4056569687
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputOpenStatus, "OnInputOpenStatus" }, // 681269419
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRight, "OnInputRight" }, // 3203340487
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickDown, "OnInputRStickDown" }, // 1661720938
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickLeft, "OnInputRStickLeft" }, // 3811004383
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickRight, "OnInputRStickRight" }, // 1296496562
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputRStickUp, "OnInputRStickUp" }, // 2534028040
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSelect, "OnInputSelect" }, // 2957566999
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSmallTabLeft, "OnInputSmallTabLeft" }, // 720271370
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputSmallTabRight, "OnInputSmallTabRight" }, // 2992377475
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStart, "OnInputStart" }, // 3147989175
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickL, "OnInputStickL" }, // 1232364990
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickR, "OnInputStickR" }, // 2420921175
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickRDirectionX, "OnInputStickRDirectionX" }, // 3798046470
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputStickRDirectionY, "OnInputStickRDirectionY" }, // 3371407620
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputTabLeft, "OnInputTabLeft" }, // 1730172006
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputTabRight, "OnInputTabRight" }, // 512567149
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_OnInputUp, "OnInputUp" }, // 1412336414
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_OnPanelResume, "OnPanelResume" }, // 1896916507
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_Open, "Open" }, // 3532438699
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_PlayBGM, "PlayBGM" }, // 780628254
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_PlayMovie, "PlayMovie" }, // 2000239823
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_PlaySE, "PlaySE" }, // 2189149920
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_SetPanelVisible, "SetPanelVisible" }, // 221125591
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_SetPrepareMovieData, "SetPrepareMovieData" }, // 1783877513
		{ &Z_Construct_UFunction_UELSSPanelOutGameBase_Setup, "Setup" }, // 3525159834
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPanelOutGameBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSPanelOutGameBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPanelOutGameBase_Statics::NewProp_onPanelResultEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPanelOutGameBase" },
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELSSPanelOutGameBase_Statics::NewProp_onPanelResultEvent = { "onPanelResultEvent", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSPanelOutGameBase, onPanelResultEvent), Z_Construct_UDelegateFunction_ABP_200508_OutGamePanelEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELSSPanelOutGameBase_Statics::NewProp_onPanelResultEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelOutGameBase_Statics::NewProp_onPanelResultEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPanelOutGameBase_Statics::NewProp_panelId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPanelOutGameBase" },
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSPanelOutGameBase_Statics::NewProp_panelId = { "panelId", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSPanelOutGameBase, panelId), METADATA_PARAMS(Z_Construct_UClass_UELSSPanelOutGameBase_Statics::NewProp_panelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelOutGameBase_Statics::NewProp_panelId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPanelOutGameBase_Statics::NewProp_uiOutGameManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPanelOutGameBase" },
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSPanelOutGameBase_Statics::NewProp_uiOutGameManager = { "uiOutGameManager", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSPanelOutGameBase, uiOutGameManager), Z_Construct_UClass_AELSSUIManagerOutGame_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSPanelOutGameBase_Statics::NewProp_uiOutGameManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelOutGameBase_Statics::NewProp_uiOutGameManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPanelOutGameBase_Statics::NewProp_uiMovieWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPanelOutGameBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSPanelOutGameBase_Statics::NewProp_uiMovieWidget = { "uiMovieWidget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSPanelOutGameBase, uiMovieWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSPanelOutGameBase_Statics::NewProp_uiMovieWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelOutGameBase_Statics::NewProp_uiMovieWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPanelOutGameBase_Statics::NewProp_prepareMovieData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPanelOutGameBase" },
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSPanelOutGameBase_Statics::NewProp_prepareMovieData = { "prepareMovieData", nullptr, (EPropertyFlags)0x0020088000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSPanelOutGameBase, prepareMovieData), Z_Construct_UScriptStruct_FSSPrepareMovieStack, METADATA_PARAMS(Z_Construct_UClass_UELSSPanelOutGameBase_Statics::NewProp_prepareMovieData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelOutGameBase_Statics::NewProp_prepareMovieData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPanelOutGameBase_Statics::NewProp_isParentInputEnable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPanelOutGameBase" },
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameBase.h" },
	};
#endif
	void Z_Construct_UClass_UELSSPanelOutGameBase_Statics::NewProp_isParentInputEnable_SetBit(void* Obj)
	{
		((UELSSPanelOutGameBase*)Obj)->isParentInputEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSPanelOutGameBase_Statics::NewProp_isParentInputEnable = { "isParentInputEnable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSPanelOutGameBase), &Z_Construct_UClass_UELSSPanelOutGameBase_Statics::NewProp_isParentInputEnable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSPanelOutGameBase_Statics::NewProp_isParentInputEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelOutGameBase_Statics::NewProp_isParentInputEnable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSPanelOutGameBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSPanelOutGameBase_Statics::NewProp_onPanelResultEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSPanelOutGameBase_Statics::NewProp_panelId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSPanelOutGameBase_Statics::NewProp_uiOutGameManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSPanelOutGameBase_Statics::NewProp_uiMovieWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSPanelOutGameBase_Statics::NewProp_prepareMovieData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSPanelOutGameBase_Statics::NewProp_isParentInputEnable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSPanelOutGameBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSPanelOutGameBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSPanelOutGameBase_Statics::ClassParams = {
		&UELSSPanelOutGameBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSPanelOutGameBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelOutGameBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSPanelOutGameBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelOutGameBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSPanelOutGameBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSPanelOutGameBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSPanelOutGameBase, 3028417611);
	template<> ABP_200508_API UClass* StaticClass<UELSSPanelOutGameBase>()
	{
		return UELSSPanelOutGameBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSPanelOutGameBase(Z_Construct_UClass_UELSSPanelOutGameBase, &UELSSPanelOutGameBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSPanelOutGameBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSPanelOutGameBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
