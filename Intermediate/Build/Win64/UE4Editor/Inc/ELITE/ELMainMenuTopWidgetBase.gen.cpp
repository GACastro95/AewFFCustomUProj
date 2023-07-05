// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELMainMenuTopWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMainMenuTopWidgetBase() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UELMainMenuTopWidgetBase_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UELMainMenuTopWidgetBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELMainMenuWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ELITE();
// End Cross Module References
	DEFINE_FUNCTION(UELMainMenuTopWidgetBase::execGetMenuEOSSSParamStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetMenuEOSSSParamStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMainMenuTopWidgetBase::execOnFinalizeCheckEOSSSParamEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFinalizeCheckEOSSSParamEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMainMenuTopWidgetBase::execOnStartupCheckEOSSSParamEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartupCheckEOSSSParamEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMainMenuTopWidgetBase::execOnUpdateCheckEOSSSParamEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpdateCheckEOSSSParamEvent_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UELMainMenuTopWidgetBase_GetJoinPartyOwnerPUIDImpl = FName(TEXT("GetJoinPartyOwnerPUIDImpl"));
	FString UELMainMenuTopWidgetBase::GetJoinPartyOwnerPUIDImpl()
	{
		ELMainMenuTopWidgetBase_eventGetJoinPartyOwnerPUIDImpl_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuTopWidgetBase_GetJoinPartyOwnerPUIDImpl),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UELMainMenuTopWidgetBase_GetKeyboardFontImpl = FName(TEXT("GetKeyboardFontImpl"));
	bool UELMainMenuTopWidgetBase::GetKeyboardFontImpl()
	{
		ELMainMenuTopWidgetBase_eventGetKeyboardFontImpl_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuTopWidgetBase_GetKeyboardFontImpl),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELMainMenuTopWidgetBase_GetLastSubMenuStateImpl = FName(TEXT("GetLastSubMenuStateImpl"));
	int32 UELMainMenuTopWidgetBase::GetLastSubMenuStateImpl()
	{
		ELMainMenuTopWidgetBase_eventGetLastSubMenuStateImpl_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuTopWidgetBase_GetLastSubMenuStateImpl),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UELMainMenuTopWidgetBase_GetNextSubMenuStateImpl = FName(TEXT("GetNextSubMenuStateImpl"));
	int32 UELMainMenuTopWidgetBase::GetNextSubMenuStateImpl(bool Previous)
	{
		ELMainMenuTopWidgetBase_eventGetNextSubMenuStateImpl_Parms Parms;
		Parms.Previous=Previous ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuTopWidgetBase_GetNextSubMenuStateImpl),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UELMainMenuTopWidgetBase_IsInOnlineMenuImpl = FName(TEXT("IsInOnlineMenuImpl"));
	bool UELMainMenuTopWidgetBase::IsInOnlineMenuImpl()
	{
		ELMainMenuTopWidgetBase_eventIsInOnlineMenuImpl_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuTopWidgetBase_IsInOnlineMenuImpl),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELMainMenuTopWidgetBase_IsJoinOnlineMiniGameImpl = FName(TEXT("IsJoinOnlineMiniGameImpl"));
	bool UELMainMenuTopWidgetBase::IsJoinOnlineMiniGameImpl()
	{
		ELMainMenuTopWidgetBase_eventIsJoinOnlineMiniGameImpl_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuTopWidgetBase_IsJoinOnlineMiniGameImpl),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELMainMenuTopWidgetBase_IsJoinOnlinePatyMatchImpl = FName(TEXT("IsJoinOnlinePatyMatchImpl"));
	bool UELMainMenuTopWidgetBase::IsJoinOnlinePatyMatchImpl()
	{
		ELMainMenuTopWidgetBase_eventIsJoinOnlinePatyMatchImpl_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuTopWidgetBase_IsJoinOnlinePatyMatchImpl),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELMainMenuTopWidgetBase_IsVisibleShopMenuImpl = FName(TEXT("IsVisibleShopMenuImpl"));
	bool UELMainMenuTopWidgetBase::IsVisibleShopMenuImpl()
	{
		ELMainMenuTopWidgetBase_eventIsVisibleShopMenuImpl_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuTopWidgetBase_IsVisibleShopMenuImpl),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELMainMenuTopWidgetBase_OnChangeDefaultSubMenuBlockInput = FName(TEXT("OnChangeDefaultSubMenuBlockInput"));
	void UELMainMenuTopWidgetBase::OnChangeDefaultSubMenuBlockInput(bool Valid)
	{
		ELMainMenuTopWidgetBase_eventOnChangeDefaultSubMenuBlockInput_Parms Parms;
		Parms.Valid=Valid ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuTopWidgetBase_OnChangeDefaultSubMenuBlockInput),&Parms);
	}
	static FName NAME_UELMainMenuTopWidgetBase_OnChangeKeyboardFont = FName(TEXT("OnChangeKeyboardFont"));
	void UELMainMenuTopWidgetBase::OnChangeKeyboardFont(bool Valid)
	{
		ELMainMenuTopWidgetBase_eventOnChangeKeyboardFont_Parms Parms;
		Parms.Valid=Valid ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuTopWidgetBase_OnChangeKeyboardFont),&Parms);
	}
	static FName NAME_UELMainMenuTopWidgetBase_OnChangeSubMenu = FName(TEXT("OnChangeSubMenu"));
	void UELMainMenuTopWidgetBase::OnChangeSubMenu(int32 SubMenuType, int32 TransitionType)
	{
		ELMainMenuTopWidgetBase_eventOnChangeSubMenu_Parms Parms;
		Parms.SubMenuType=SubMenuType;
		Parms.TransitionType=TransitionType;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuTopWidgetBase_OnChangeSubMenu),&Parms);
	}
	static FName NAME_UELMainMenuTopWidgetBase_OnChangeVisibleWrestlerSelectMenu = FName(TEXT("OnChangeVisibleWrestlerSelectMenu"));
	void UELMainMenuTopWidgetBase::OnChangeVisibleWrestlerSelectMenu(bool IsVisible)
	{
		ELMainMenuTopWidgetBase_eventOnChangeVisibleWrestlerSelectMenu_Parms Parms;
		Parms.IsVisible=IsVisible ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuTopWidgetBase_OnChangeVisibleWrestlerSelectMenu),&Parms);
	}
	static FName NAME_UELMainMenuTopWidgetBase_OnCloseSubMenuDialog = FName(TEXT("OnCloseSubMenuDialog"));
	void UELMainMenuTopWidgetBase::OnCloseSubMenuDialog(bool IsCancel)
	{
		ELMainMenuTopWidgetBase_eventOnCloseSubMenuDialog_Parms Parms;
		Parms.IsCancel=IsCancel ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuTopWidgetBase_OnCloseSubMenuDialog),&Parms);
	}
	static FName NAME_UELMainMenuTopWidgetBase_OnMakeDialogCancelRequestPrivateMatch = FName(TEXT("OnMakeDialogCancelRequestPrivateMatch"));
	void UELMainMenuTopWidgetBase::OnMakeDialogCancelRequestPrivateMatch()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuTopWidgetBase_OnMakeDialogCancelRequestPrivateMatch),NULL);
	}
	static FName NAME_UELMainMenuTopWidgetBase_OnNextSubMenu = FName(TEXT("OnNextSubMenu"));
	void UELMainMenuTopWidgetBase::OnNextSubMenu(int32 StackNextType, int32 TransitionType)
	{
		ELMainMenuTopWidgetBase_eventOnNextSubMenu_Parms Parms;
		Parms.StackNextType=StackNextType;
		Parms.TransitionType=TransitionType;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuTopWidgetBase_OnNextSubMenu),&Parms);
	}
	static FName NAME_UELMainMenuTopWidgetBase_OnPrevSubMenu = FName(TEXT("OnPrevSubMenu"));
	void UELMainMenuTopWidgetBase::OnPrevSubMenu(int32 TransitionType)
	{
		ELMainMenuTopWidgetBase_eventOnPrevSubMenu_Parms Parms;
		Parms.TransitionType=TransitionType;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuTopWidgetBase_OnPrevSubMenu),&Parms);
	}
	static FName NAME_UELMainMenuTopWidgetBase_OnRequestInAnimation = FName(TEXT("OnRequestInAnimation"));
	void UELMainMenuTopWidgetBase::OnRequestInAnimation(bool IsShop)
	{
		ELMainMenuTopWidgetBase_eventOnRequestInAnimation_Parms Parms;
		Parms.IsShop=IsShop ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuTopWidgetBase_OnRequestInAnimation),&Parms);
	}
	static FName NAME_UELMainMenuTopWidgetBase_OnRequestOpenOnlineNews = FName(TEXT("OnRequestOpenOnlineNews"));
	void UELMainMenuTopWidgetBase::OnRequestOpenOnlineNews()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuTopWidgetBase_OnRequestOpenOnlineNews),NULL);
	}
	static FName NAME_UELMainMenuTopWidgetBase_OnRestartMainMenuTop = FName(TEXT("OnRestartMainMenuTop"));
	void UELMainMenuTopWidgetBase::OnRestartMainMenuTop()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuTopWidgetBase_OnRestartMainMenuTop),NULL);
	}
	static FName NAME_UELMainMenuTopWidgetBase_OnSetJoinPartyOwnerPUID = FName(TEXT("OnSetJoinPartyOwnerPUID"));
	void UELMainMenuTopWidgetBase::OnSetJoinPartyOwnerPUID(const FString& PUID)
	{
		ELMainMenuTopWidgetBase_eventOnSetJoinPartyOwnerPUID_Parms Parms;
		Parms.PUID=PUID;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuTopWidgetBase_OnSetJoinPartyOwnerPUID),&Parms);
	}
	static FName NAME_UELMainMenuTopWidgetBase_OnSetSelectCursorPUID = FName(TEXT("OnSetSelectCursorPUID"));
	void UELMainMenuTopWidgetBase::OnSetSelectCursorPUID(const FString& PUID)
	{
		ELMainMenuTopWidgetBase_eventOnSetSelectCursorPUID_Parms Parms;
		Parms.PUID=PUID;
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuTopWidgetBase_OnSetSelectCursorPUID),&Parms);
	}
	static FName NAME_UELMainMenuTopWidgetBase_OnStartWrestlerSelectLevel = FName(TEXT("OnStartWrestlerSelectLevel"));
	void UELMainMenuTopWidgetBase::OnStartWrestlerSelectLevel()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuTopWidgetBase_OnStartWrestlerSelectLevel),NULL);
	}
	static FName NAME_UELMainMenuTopWidgetBase_OnUpdateCheckEOSSSParamEvent = FName(TEXT("OnUpdateCheckEOSSSParamEvent"));
	void UELMainMenuTopWidgetBase::OnUpdateCheckEOSSSParamEvent()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELMainMenuTopWidgetBase_OnUpdateCheckEOSSSParamEvent),NULL);
	}
	void UELMainMenuTopWidgetBase::StaticRegisterNativesUELMainMenuTopWidgetBase()
	{
		UClass* Class = UELMainMenuTopWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMenuEOSSSParamStatus", &UELMainMenuTopWidgetBase::execGetMenuEOSSSParamStatus },
			{ "OnFinalizeCheckEOSSSParamEvent", &UELMainMenuTopWidgetBase::execOnFinalizeCheckEOSSSParamEvent },
			{ "OnStartupCheckEOSSSParamEvent", &UELMainMenuTopWidgetBase::execOnStartupCheckEOSSSParamEvent },
			{ "OnUpdateCheckEOSSSParamEvent", &UELMainMenuTopWidgetBase::execOnUpdateCheckEOSSSParamEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetJoinPartyOwnerPUIDImpl_Statics
	{
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetJoinPartyOwnerPUIDImpl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuTopWidgetBase_eventGetJoinPartyOwnerPUIDImpl_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetJoinPartyOwnerPUIDImpl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetJoinPartyOwnerPUIDImpl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetJoinPartyOwnerPUIDImpl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuTopWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetJoinPartyOwnerPUIDImpl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuTopWidgetBase, nullptr, "GetJoinPartyOwnerPUIDImpl", nullptr, nullptr, sizeof(ELMainMenuTopWidgetBase_eventGetJoinPartyOwnerPUIDImpl_Parms), Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetJoinPartyOwnerPUIDImpl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetJoinPartyOwnerPUIDImpl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetJoinPartyOwnerPUIDImpl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetJoinPartyOwnerPUIDImpl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetJoinPartyOwnerPUIDImpl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetJoinPartyOwnerPUIDImpl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetKeyboardFontImpl_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetKeyboardFontImpl_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMainMenuTopWidgetBase_eventGetKeyboardFontImpl_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetKeyboardFontImpl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuTopWidgetBase_eventGetKeyboardFontImpl_Parms), &Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetKeyboardFontImpl_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetKeyboardFontImpl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetKeyboardFontImpl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetKeyboardFontImpl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuTopWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetKeyboardFontImpl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuTopWidgetBase, nullptr, "GetKeyboardFontImpl", nullptr, nullptr, sizeof(ELMainMenuTopWidgetBase_eventGetKeyboardFontImpl_Parms), Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetKeyboardFontImpl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetKeyboardFontImpl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetKeyboardFontImpl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetKeyboardFontImpl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetKeyboardFontImpl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetKeyboardFontImpl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetLastSubMenuStateImpl_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetLastSubMenuStateImpl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuTopWidgetBase_eventGetLastSubMenuStateImpl_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetLastSubMenuStateImpl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetLastSubMenuStateImpl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetLastSubMenuStateImpl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuTopWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetLastSubMenuStateImpl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuTopWidgetBase, nullptr, "GetLastSubMenuStateImpl", nullptr, nullptr, sizeof(ELMainMenuTopWidgetBase_eventGetLastSubMenuStateImpl_Parms), Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetLastSubMenuStateImpl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetLastSubMenuStateImpl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetLastSubMenuStateImpl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetLastSubMenuStateImpl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetLastSubMenuStateImpl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetLastSubMenuStateImpl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetMenuEOSSSParamStatus_Statics
	{
		struct ELMainMenuTopWidgetBase_eventGetMenuEOSSSParamStatus_Parms
		{
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetMenuEOSSSParamStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuTopWidgetBase_eventGetMenuEOSSSParamStatus_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetMenuEOSSSParamStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetMenuEOSSSParamStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetMenuEOSSSParamStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuTopWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetMenuEOSSSParamStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuTopWidgetBase, nullptr, "GetMenuEOSSSParamStatus", nullptr, nullptr, sizeof(ELMainMenuTopWidgetBase_eventGetMenuEOSSSParamStatus_Parms), Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetMenuEOSSSParamStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetMenuEOSSSParamStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetMenuEOSSSParamStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetMenuEOSSSParamStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetMenuEOSSSParamStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetMenuEOSSSParamStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetNextSubMenuStateImpl_Statics
	{
		static void NewProp_Previous_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Previous;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetNextSubMenuStateImpl_Statics::NewProp_Previous_SetBit(void* Obj)
	{
		((ELMainMenuTopWidgetBase_eventGetNextSubMenuStateImpl_Parms*)Obj)->Previous = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetNextSubMenuStateImpl_Statics::NewProp_Previous = { "Previous", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuTopWidgetBase_eventGetNextSubMenuStateImpl_Parms), &Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetNextSubMenuStateImpl_Statics::NewProp_Previous_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetNextSubMenuStateImpl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuTopWidgetBase_eventGetNextSubMenuStateImpl_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetNextSubMenuStateImpl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetNextSubMenuStateImpl_Statics::NewProp_Previous,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetNextSubMenuStateImpl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetNextSubMenuStateImpl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuTopWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetNextSubMenuStateImpl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuTopWidgetBase, nullptr, "GetNextSubMenuStateImpl", nullptr, nullptr, sizeof(ELMainMenuTopWidgetBase_eventGetNextSubMenuStateImpl_Parms), Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetNextSubMenuStateImpl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetNextSubMenuStateImpl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetNextSubMenuStateImpl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetNextSubMenuStateImpl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetNextSubMenuStateImpl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetNextSubMenuStateImpl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsInOnlineMenuImpl_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsInOnlineMenuImpl_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMainMenuTopWidgetBase_eventIsInOnlineMenuImpl_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsInOnlineMenuImpl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuTopWidgetBase_eventIsInOnlineMenuImpl_Parms), &Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsInOnlineMenuImpl_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsInOnlineMenuImpl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsInOnlineMenuImpl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsInOnlineMenuImpl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuTopWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsInOnlineMenuImpl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuTopWidgetBase, nullptr, "IsInOnlineMenuImpl", nullptr, nullptr, sizeof(ELMainMenuTopWidgetBase_eventIsInOnlineMenuImpl_Parms), Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsInOnlineMenuImpl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsInOnlineMenuImpl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsInOnlineMenuImpl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsInOnlineMenuImpl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsInOnlineMenuImpl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsInOnlineMenuImpl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsJoinOnlineMiniGameImpl_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsJoinOnlineMiniGameImpl_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMainMenuTopWidgetBase_eventIsJoinOnlineMiniGameImpl_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsJoinOnlineMiniGameImpl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuTopWidgetBase_eventIsJoinOnlineMiniGameImpl_Parms), &Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsJoinOnlineMiniGameImpl_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsJoinOnlineMiniGameImpl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsJoinOnlineMiniGameImpl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsJoinOnlineMiniGameImpl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuTopWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsJoinOnlineMiniGameImpl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuTopWidgetBase, nullptr, "IsJoinOnlineMiniGameImpl", nullptr, nullptr, sizeof(ELMainMenuTopWidgetBase_eventIsJoinOnlineMiniGameImpl_Parms), Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsJoinOnlineMiniGameImpl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsJoinOnlineMiniGameImpl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsJoinOnlineMiniGameImpl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsJoinOnlineMiniGameImpl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsJoinOnlineMiniGameImpl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsJoinOnlineMiniGameImpl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsJoinOnlinePatyMatchImpl_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsJoinOnlinePatyMatchImpl_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMainMenuTopWidgetBase_eventIsJoinOnlinePatyMatchImpl_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsJoinOnlinePatyMatchImpl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuTopWidgetBase_eventIsJoinOnlinePatyMatchImpl_Parms), &Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsJoinOnlinePatyMatchImpl_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsJoinOnlinePatyMatchImpl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsJoinOnlinePatyMatchImpl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsJoinOnlinePatyMatchImpl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuTopWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsJoinOnlinePatyMatchImpl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuTopWidgetBase, nullptr, "IsJoinOnlinePatyMatchImpl", nullptr, nullptr, sizeof(ELMainMenuTopWidgetBase_eventIsJoinOnlinePatyMatchImpl_Parms), Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsJoinOnlinePatyMatchImpl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsJoinOnlinePatyMatchImpl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsJoinOnlinePatyMatchImpl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsJoinOnlinePatyMatchImpl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsJoinOnlinePatyMatchImpl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsJoinOnlinePatyMatchImpl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsVisibleShopMenuImpl_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsVisibleShopMenuImpl_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMainMenuTopWidgetBase_eventIsVisibleShopMenuImpl_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsVisibleShopMenuImpl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuTopWidgetBase_eventIsVisibleShopMenuImpl_Parms), &Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsVisibleShopMenuImpl_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsVisibleShopMenuImpl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsVisibleShopMenuImpl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsVisibleShopMenuImpl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuTopWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsVisibleShopMenuImpl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuTopWidgetBase, nullptr, "IsVisibleShopMenuImpl", nullptr, nullptr, sizeof(ELMainMenuTopWidgetBase_eventIsVisibleShopMenuImpl_Parms), Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsVisibleShopMenuImpl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsVisibleShopMenuImpl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsVisibleShopMenuImpl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsVisibleShopMenuImpl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsVisibleShopMenuImpl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsVisibleShopMenuImpl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeDefaultSubMenuBlockInput_Statics
	{
		static void NewProp_Valid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Valid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeDefaultSubMenuBlockInput_Statics::NewProp_Valid_SetBit(void* Obj)
	{
		((ELMainMenuTopWidgetBase_eventOnChangeDefaultSubMenuBlockInput_Parms*)Obj)->Valid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeDefaultSubMenuBlockInput_Statics::NewProp_Valid = { "Valid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuTopWidgetBase_eventOnChangeDefaultSubMenuBlockInput_Parms), &Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeDefaultSubMenuBlockInput_Statics::NewProp_Valid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeDefaultSubMenuBlockInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeDefaultSubMenuBlockInput_Statics::NewProp_Valid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeDefaultSubMenuBlockInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuTopWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeDefaultSubMenuBlockInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuTopWidgetBase, nullptr, "OnChangeDefaultSubMenuBlockInput", nullptr, nullptr, sizeof(ELMainMenuTopWidgetBase_eventOnChangeDefaultSubMenuBlockInput_Parms), Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeDefaultSubMenuBlockInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeDefaultSubMenuBlockInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeDefaultSubMenuBlockInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeDefaultSubMenuBlockInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeDefaultSubMenuBlockInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeDefaultSubMenuBlockInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeKeyboardFont_Statics
	{
		static void NewProp_Valid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Valid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeKeyboardFont_Statics::NewProp_Valid_SetBit(void* Obj)
	{
		((ELMainMenuTopWidgetBase_eventOnChangeKeyboardFont_Parms*)Obj)->Valid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeKeyboardFont_Statics::NewProp_Valid = { "Valid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuTopWidgetBase_eventOnChangeKeyboardFont_Parms), &Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeKeyboardFont_Statics::NewProp_Valid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeKeyboardFont_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeKeyboardFont_Statics::NewProp_Valid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeKeyboardFont_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuTopWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeKeyboardFont_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuTopWidgetBase, nullptr, "OnChangeKeyboardFont", nullptr, nullptr, sizeof(ELMainMenuTopWidgetBase_eventOnChangeKeyboardFont_Parms), Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeKeyboardFont_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeKeyboardFont_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeKeyboardFont_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeKeyboardFont_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeKeyboardFont()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeKeyboardFont_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeSubMenu_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubMenuType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TransitionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeSubMenu_Statics::NewProp_SubMenuType = { "SubMenuType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuTopWidgetBase_eventOnChangeSubMenu_Parms, SubMenuType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeSubMenu_Statics::NewProp_TransitionType = { "TransitionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuTopWidgetBase_eventOnChangeSubMenu_Parms, TransitionType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeSubMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeSubMenu_Statics::NewProp_SubMenuType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeSubMenu_Statics::NewProp_TransitionType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeSubMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuTopWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeSubMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuTopWidgetBase, nullptr, "OnChangeSubMenu", nullptr, nullptr, sizeof(ELMainMenuTopWidgetBase_eventOnChangeSubMenu_Parms), Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeSubMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeSubMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeSubMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeSubMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeSubMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeSubMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeVisibleWrestlerSelectMenu_Statics
	{
		static void NewProp_IsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeVisibleWrestlerSelectMenu_Statics::NewProp_IsVisible_SetBit(void* Obj)
	{
		((ELMainMenuTopWidgetBase_eventOnChangeVisibleWrestlerSelectMenu_Parms*)Obj)->IsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeVisibleWrestlerSelectMenu_Statics::NewProp_IsVisible = { "IsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuTopWidgetBase_eventOnChangeVisibleWrestlerSelectMenu_Parms), &Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeVisibleWrestlerSelectMenu_Statics::NewProp_IsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeVisibleWrestlerSelectMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeVisibleWrestlerSelectMenu_Statics::NewProp_IsVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeVisibleWrestlerSelectMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuTopWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeVisibleWrestlerSelectMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuTopWidgetBase, nullptr, "OnChangeVisibleWrestlerSelectMenu", nullptr, nullptr, sizeof(ELMainMenuTopWidgetBase_eventOnChangeVisibleWrestlerSelectMenu_Parms), Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeVisibleWrestlerSelectMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeVisibleWrestlerSelectMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeVisibleWrestlerSelectMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeVisibleWrestlerSelectMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeVisibleWrestlerSelectMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeVisibleWrestlerSelectMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnCloseSubMenuDialog_Statics
	{
		static void NewProp_IsCancel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCancel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnCloseSubMenuDialog_Statics::NewProp_IsCancel_SetBit(void* Obj)
	{
		((ELMainMenuTopWidgetBase_eventOnCloseSubMenuDialog_Parms*)Obj)->IsCancel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnCloseSubMenuDialog_Statics::NewProp_IsCancel = { "IsCancel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuTopWidgetBase_eventOnCloseSubMenuDialog_Parms), &Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnCloseSubMenuDialog_Statics::NewProp_IsCancel_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnCloseSubMenuDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnCloseSubMenuDialog_Statics::NewProp_IsCancel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnCloseSubMenuDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuTopWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnCloseSubMenuDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuTopWidgetBase, nullptr, "OnCloseSubMenuDialog", nullptr, nullptr, sizeof(ELMainMenuTopWidgetBase_eventOnCloseSubMenuDialog_Parms), Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnCloseSubMenuDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnCloseSubMenuDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnCloseSubMenuDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnCloseSubMenuDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnCloseSubMenuDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnCloseSubMenuDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnFinalizeCheckEOSSSParamEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnFinalizeCheckEOSSSParamEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuTopWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnFinalizeCheckEOSSSParamEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuTopWidgetBase, nullptr, "OnFinalizeCheckEOSSSParamEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnFinalizeCheckEOSSSParamEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnFinalizeCheckEOSSSParamEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnFinalizeCheckEOSSSParamEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnFinalizeCheckEOSSSParamEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnMakeDialogCancelRequestPrivateMatch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnMakeDialogCancelRequestPrivateMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuTopWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnMakeDialogCancelRequestPrivateMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuTopWidgetBase, nullptr, "OnMakeDialogCancelRequestPrivateMatch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnMakeDialogCancelRequestPrivateMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnMakeDialogCancelRequestPrivateMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnMakeDialogCancelRequestPrivateMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnMakeDialogCancelRequestPrivateMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnNextSubMenu_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StackNextType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TransitionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnNextSubMenu_Statics::NewProp_StackNextType = { "StackNextType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuTopWidgetBase_eventOnNextSubMenu_Parms, StackNextType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnNextSubMenu_Statics::NewProp_TransitionType = { "TransitionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuTopWidgetBase_eventOnNextSubMenu_Parms, TransitionType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnNextSubMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnNextSubMenu_Statics::NewProp_StackNextType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnNextSubMenu_Statics::NewProp_TransitionType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnNextSubMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuTopWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnNextSubMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuTopWidgetBase, nullptr, "OnNextSubMenu", nullptr, nullptr, sizeof(ELMainMenuTopWidgetBase_eventOnNextSubMenu_Parms), Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnNextSubMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnNextSubMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnNextSubMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnNextSubMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnNextSubMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnNextSubMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnPrevSubMenu_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TransitionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnPrevSubMenu_Statics::NewProp_TransitionType = { "TransitionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuTopWidgetBase_eventOnPrevSubMenu_Parms, TransitionType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnPrevSubMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnPrevSubMenu_Statics::NewProp_TransitionType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnPrevSubMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuTopWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnPrevSubMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuTopWidgetBase, nullptr, "OnPrevSubMenu", nullptr, nullptr, sizeof(ELMainMenuTopWidgetBase_eventOnPrevSubMenu_Parms), Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnPrevSubMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnPrevSubMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnPrevSubMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnPrevSubMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnPrevSubMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnPrevSubMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnRequestInAnimation_Statics
	{
		static void NewProp_IsShop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsShop;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnRequestInAnimation_Statics::NewProp_IsShop_SetBit(void* Obj)
	{
		((ELMainMenuTopWidgetBase_eventOnRequestInAnimation_Parms*)Obj)->IsShop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnRequestInAnimation_Statics::NewProp_IsShop = { "IsShop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMainMenuTopWidgetBase_eventOnRequestInAnimation_Parms), &Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnRequestInAnimation_Statics::NewProp_IsShop_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnRequestInAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnRequestInAnimation_Statics::NewProp_IsShop,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnRequestInAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuTopWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnRequestInAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuTopWidgetBase, nullptr, "OnRequestInAnimation", nullptr, nullptr, sizeof(ELMainMenuTopWidgetBase_eventOnRequestInAnimation_Parms), Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnRequestInAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnRequestInAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnRequestInAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnRequestInAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnRequestInAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnRequestInAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnRequestOpenOnlineNews_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnRequestOpenOnlineNews_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuTopWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnRequestOpenOnlineNews_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuTopWidgetBase, nullptr, "OnRequestOpenOnlineNews", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnRequestOpenOnlineNews_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnRequestOpenOnlineNews_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnRequestOpenOnlineNews()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnRequestOpenOnlineNews_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnRestartMainMenuTop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnRestartMainMenuTop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuTopWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnRestartMainMenuTop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuTopWidgetBase, nullptr, "OnRestartMainMenuTop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnRestartMainMenuTop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnRestartMainMenuTop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnRestartMainMenuTop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnRestartMainMenuTop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnSetJoinPartyOwnerPUID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PUID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnSetJoinPartyOwnerPUID_Statics::NewProp_PUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnSetJoinPartyOwnerPUID_Statics::NewProp_PUID = { "PUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuTopWidgetBase_eventOnSetJoinPartyOwnerPUID_Parms, PUID), METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnSetJoinPartyOwnerPUID_Statics::NewProp_PUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnSetJoinPartyOwnerPUID_Statics::NewProp_PUID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnSetJoinPartyOwnerPUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnSetJoinPartyOwnerPUID_Statics::NewProp_PUID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnSetJoinPartyOwnerPUID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuTopWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnSetJoinPartyOwnerPUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuTopWidgetBase, nullptr, "OnSetJoinPartyOwnerPUID", nullptr, nullptr, sizeof(ELMainMenuTopWidgetBase_eventOnSetJoinPartyOwnerPUID_Parms), Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnSetJoinPartyOwnerPUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnSetJoinPartyOwnerPUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnSetJoinPartyOwnerPUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnSetJoinPartyOwnerPUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnSetJoinPartyOwnerPUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnSetJoinPartyOwnerPUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnSetSelectCursorPUID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PUID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnSetSelectCursorPUID_Statics::NewProp_PUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnSetSelectCursorPUID_Statics::NewProp_PUID = { "PUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMainMenuTopWidgetBase_eventOnSetSelectCursorPUID_Parms, PUID), METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnSetSelectCursorPUID_Statics::NewProp_PUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnSetSelectCursorPUID_Statics::NewProp_PUID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnSetSelectCursorPUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnSetSelectCursorPUID_Statics::NewProp_PUID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnSetSelectCursorPUID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuTopWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnSetSelectCursorPUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuTopWidgetBase, nullptr, "OnSetSelectCursorPUID", nullptr, nullptr, sizeof(ELMainMenuTopWidgetBase_eventOnSetSelectCursorPUID_Parms), Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnSetSelectCursorPUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnSetSelectCursorPUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnSetSelectCursorPUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnSetSelectCursorPUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnSetSelectCursorPUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnSetSelectCursorPUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnStartupCheckEOSSSParamEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnStartupCheckEOSSSParamEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuTopWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnStartupCheckEOSSSParamEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuTopWidgetBase, nullptr, "OnStartupCheckEOSSSParamEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnStartupCheckEOSSSParamEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnStartupCheckEOSSSParamEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnStartupCheckEOSSSParamEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnStartupCheckEOSSSParamEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnStartWrestlerSelectLevel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnStartWrestlerSelectLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuTopWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnStartWrestlerSelectLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuTopWidgetBase, nullptr, "OnStartWrestlerSelectLevel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnStartWrestlerSelectLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnStartWrestlerSelectLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnStartWrestlerSelectLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnStartWrestlerSelectLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnUpdateCheckEOSSSParamEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnUpdateCheckEOSSSParamEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMainMenuTopWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnUpdateCheckEOSSSParamEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMainMenuTopWidgetBase, nullptr, "OnUpdateCheckEOSSSParamEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnUpdateCheckEOSSSParamEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnUpdateCheckEOSSSParamEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnUpdateCheckEOSSSParamEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnUpdateCheckEOSSSParamEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELMainMenuTopWidgetBase_NoRegister()
	{
		return UELMainMenuTopWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELMainMenuTopWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELMainMenuTopWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELMainMenuWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELMainMenuTopWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetJoinPartyOwnerPUIDImpl, "GetJoinPartyOwnerPUIDImpl" }, // 2740376165
		{ &Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetKeyboardFontImpl, "GetKeyboardFontImpl" }, // 2289339629
		{ &Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetLastSubMenuStateImpl, "GetLastSubMenuStateImpl" }, // 2359028939
		{ &Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetMenuEOSSSParamStatus, "GetMenuEOSSSParamStatus" }, // 2586703271
		{ &Z_Construct_UFunction_UELMainMenuTopWidgetBase_GetNextSubMenuStateImpl, "GetNextSubMenuStateImpl" }, // 638490537
		{ &Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsInOnlineMenuImpl, "IsInOnlineMenuImpl" }, // 315772461
		{ &Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsJoinOnlineMiniGameImpl, "IsJoinOnlineMiniGameImpl" }, // 556159834
		{ &Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsJoinOnlinePatyMatchImpl, "IsJoinOnlinePatyMatchImpl" }, // 3597507697
		{ &Z_Construct_UFunction_UELMainMenuTopWidgetBase_IsVisibleShopMenuImpl, "IsVisibleShopMenuImpl" }, // 2494142514
		{ &Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeDefaultSubMenuBlockInput, "OnChangeDefaultSubMenuBlockInput" }, // 280843585
		{ &Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeKeyboardFont, "OnChangeKeyboardFont" }, // 3455699772
		{ &Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeSubMenu, "OnChangeSubMenu" }, // 4079048719
		{ &Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnChangeVisibleWrestlerSelectMenu, "OnChangeVisibleWrestlerSelectMenu" }, // 604666003
		{ &Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnCloseSubMenuDialog, "OnCloseSubMenuDialog" }, // 297594027
		{ &Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnFinalizeCheckEOSSSParamEvent, "OnFinalizeCheckEOSSSParamEvent" }, // 3858011028
		{ &Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnMakeDialogCancelRequestPrivateMatch, "OnMakeDialogCancelRequestPrivateMatch" }, // 4079933652
		{ &Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnNextSubMenu, "OnNextSubMenu" }, // 2359855611
		{ &Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnPrevSubMenu, "OnPrevSubMenu" }, // 245684737
		{ &Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnRequestInAnimation, "OnRequestInAnimation" }, // 3699780945
		{ &Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnRequestOpenOnlineNews, "OnRequestOpenOnlineNews" }, // 3923404711
		{ &Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnRestartMainMenuTop, "OnRestartMainMenuTop" }, // 3572742175
		{ &Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnSetJoinPartyOwnerPUID, "OnSetJoinPartyOwnerPUID" }, // 3102769859
		{ &Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnSetSelectCursorPUID, "OnSetSelectCursorPUID" }, // 3377251977
		{ &Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnStartupCheckEOSSSParamEvent, "OnStartupCheckEOSSSParamEvent" }, // 2744322117
		{ &Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnStartWrestlerSelectLevel, "OnStartWrestlerSelectLevel" }, // 146233762
		{ &Z_Construct_UFunction_UELMainMenuTopWidgetBase_OnUpdateCheckEOSSSParamEvent, "OnUpdateCheckEOSSSParamEvent" }, // 1028886607
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMainMenuTopWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELMainMenuTopWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELMainMenuTopWidgetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELMainMenuTopWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELMainMenuTopWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELMainMenuTopWidgetBase_Statics::ClassParams = {
		&UELMainMenuTopWidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELMainMenuTopWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELMainMenuTopWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELMainMenuTopWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELMainMenuTopWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELMainMenuTopWidgetBase, 4005254106);
	template<> ELITE_API UClass* StaticClass<UELMainMenuTopWidgetBase>()
	{
		return UELMainMenuTopWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELMainMenuTopWidgetBase(Z_Construct_UClass_UELMainMenuTopWidgetBase, &UELMainMenuTopWidgetBase::StaticClass, TEXT("/Script/ELITE"), TEXT("UELMainMenuTopWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELMainMenuTopWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
