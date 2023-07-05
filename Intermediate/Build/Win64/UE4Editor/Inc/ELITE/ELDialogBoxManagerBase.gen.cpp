// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELDialogBoxManagerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELDialogBoxManagerBase() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UELDialogBoxManagerBase_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UELDialogBoxManagerBase();
	ELITE_CORE_API UClass* Z_Construct_UClass_USingletonBase();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayDialogBoxStackInfo();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_yEnMenuWidgetType();
	ABP_200508_API UClass* Z_Construct_UClass_UELOperationalWidgetBase_NoRegister();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_DialogBoxResultDelegate__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_DialogBoxBeginResultDelegate__DelegateSignature();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_yEnDialogBoxChoices();
	ABP_200508_API UClass* Z_Construct_UClass_UELDialogBoxWidgetBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELDialogBoxManagerBase::execDisplayDialogBoxStackListEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayDialogBoxStackListEmpty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDialogBoxManagerBase::execDisplayDialogBoxStackListFindItem)
	{
		P_GET_STRUCT_REF(FDisplayDialogBoxStackInfo,Z_Param_Out_ReturnItem);
		P_GET_ENUM(yEnMenuWidgetType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DisplayDialogBoxStackListFindItem(Z_Param_Out_ReturnItem,yEnMenuWidgetType(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDialogBoxManagerBase::execDisplayDialogBoxStackListGetItem)
	{
		P_GET_STRUCT_REF(FDisplayDialogBoxStackInfo,Z_Param_Out_ReturnItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DisplayDialogBoxStackListGetItem(Z_Param_Out_ReturnItem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDialogBoxManagerBase::execDisplayDialogBoxStackListPopItem)
	{
		P_GET_STRUCT_REF(FDisplayDialogBoxStackInfo,Z_Param_Out_ReturnItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DisplayDialogBoxStackListPopItem(Z_Param_Out_ReturnItem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDialogBoxManagerBase::execDisplayDialogBoxStackListPushItem)
	{
		P_GET_OBJECT(UELOperationalWidgetBase,Z_Param_Widget);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_BeginResultDelegate);
		P_GET_ENUM(yEnMenuWidgetType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayDialogBoxStackListPushItem(Z_Param_Widget,FDialogBoxResultDelegate(Z_Param_Delegate),FDialogBoxBeginResultDelegate(Z_Param_BeginResultDelegate),yEnMenuWidgetType(Z_Param_Type));
		P_NATIVE_END;
	}
	static FName NAME_UELDialogBoxManagerBase_CallDialogResult = FName(TEXT("CallDialogResult"));
	void UELDialogBoxManagerBase::CallDialogResult(bool IsCancel)
	{
		ELDialogBoxManagerBase_eventCallDialogResult_Parms Parms;
		Parms.IsCancel=IsCancel ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELDialogBoxManagerBase_CallDialogResult),&Parms);
	}
	static FName NAME_UELDialogBoxManagerBase_GetCurrentDialogWidgetType = FName(TEXT("GetCurrentDialogWidgetType"));
	yEnMenuWidgetType UELDialogBoxManagerBase::GetCurrentDialogWidgetType() const
	{
		ELDialogBoxManagerBase_eventGetCurrentDialogWidgetType_Parms Parms;
		const_cast<UELDialogBoxManagerBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UELDialogBoxManagerBase_GetCurrentDialogWidgetType),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UELDialogBoxManagerBase_IsOpenedDialog = FName(TEXT("IsOpenedDialog"));
	bool UELDialogBoxManagerBase::IsOpenedDialog()
	{
		ELDialogBoxManagerBase_eventIsOpenedDialog_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UELDialogBoxManagerBase_IsOpenedDialog),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELDialogBoxManagerBase_IsOpenedDialogOrTutorial = FName(TEXT("IsOpenedDialogOrTutorial"));
	bool UELDialogBoxManagerBase::IsOpenedDialogOrTutorial()
	{
		ELDialogBoxManagerBase_eventIsOpenedDialogOrTutorial_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UELDialogBoxManagerBase_IsOpenedDialogOrTutorial),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELDialogBoxManagerBase_IsStackedDialog = FName(TEXT("IsStackedDialog"));
	bool UELDialogBoxManagerBase::IsStackedDialog() const
	{
		ELDialogBoxManagerBase_eventIsStackedDialog_Parms Parms;
		const_cast<UELDialogBoxManagerBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UELDialogBoxManagerBase_IsStackedDialog),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog = FName(TEXT("RequestDisconnectedGamePadMessageDialog"));
	void UELDialogBoxManagerBase::RequestDisconnectedGamePadMessageDialog(int32 MessageType, FText const& Text, TArray<yEnDialogBoxChoices> const& Choises, bool IsSystemDialog, FDialogBoxResultDelegate const& ResultDelegate, FDialogBoxBeginResultDelegate const& BeginResultDelegate, UELDialogBoxWidgetBase*& ResultDialog, bool& ResultOpen)
	{
		ELDialogBoxManagerBase_eventRequestDisconnectedGamePadMessageDialog_Parms Parms;
		Parms.MessageType=MessageType;
		Parms.Text=Text;
		Parms.Choises=Choises;
		Parms.IsSystemDialog=IsSystemDialog ? true : false;
		Parms.ResultDelegate=ResultDelegate;
		Parms.BeginResultDelegate=BeginResultDelegate;
		Parms.ResultDialog=ResultDialog;
		Parms.ResultOpen=ResultOpen ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog),&Parms);
		ResultDialog=Parms.ResultDialog;
		ResultOpen=Parms.ResultOpen;
	}
	static FName NAME_UELDialogBoxManagerBase_RequestForceCloseDialog = FName(TEXT("RequestForceCloseDialog"));
	void UELDialogBoxManagerBase::RequestForceCloseDialog(bool CloseALL)
	{
		ELDialogBoxManagerBase_eventRequestForceCloseDialog_Parms Parms;
		Parms.CloseALL=CloseALL ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELDialogBoxManagerBase_RequestForceCloseDialog),&Parms);
	}
	static FName NAME_UELDialogBoxManagerBase_RequestOpenMessageDialog = FName(TEXT("RequestOpenMessageDialog"));
	void UELDialogBoxManagerBase::RequestOpenMessageDialog(int32 MessageType, FText const& Text, TArray<yEnDialogBoxChoices> const& Choises, FDialogBoxResultDelegate const& ResultDelegate, const int32 DefaultIndex, bool IsSystemDialog, UELDialogBoxWidgetBase*& ResultDialog, bool& ResultOpen)
	{
		ELDialogBoxManagerBase_eventRequestOpenMessageDialog_Parms Parms;
		Parms.MessageType=MessageType;
		Parms.Text=Text;
		Parms.Choises=Choises;
		Parms.ResultDelegate=ResultDelegate;
		Parms.DefaultIndex=DefaultIndex;
		Parms.IsSystemDialog=IsSystemDialog ? true : false;
		Parms.ResultDialog=ResultDialog;
		Parms.ResultOpen=ResultOpen ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELDialogBoxManagerBase_RequestOpenMessageDialog),&Parms);
		ResultDialog=Parms.ResultDialog;
		ResultOpen=Parms.ResultOpen;
	}
	static FName NAME_UELDialogBoxManagerBase_RequestOpenMessageDialogNoResult = FName(TEXT("RequestOpenMessageDialogNoResult"));
	void UELDialogBoxManagerBase::RequestOpenMessageDialogNoResult(int32 MessageType, FText const& Text, const yEnDialogBoxChoices Choise, bool IsSystemDialog, UELDialogBoxWidgetBase*& ResultDialog, bool& ResultOpen)
	{
		ELDialogBoxManagerBase_eventRequestOpenMessageDialogNoResult_Parms Parms;
		Parms.MessageType=MessageType;
		Parms.Text=Text;
		Parms.Choise=Choise;
		Parms.IsSystemDialog=IsSystemDialog ? true : false;
		Parms.ResultDialog=ResultDialog;
		Parms.ResultOpen=ResultOpen ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELDialogBoxManagerBase_RequestOpenMessageDialogNoResult),&Parms);
		ResultDialog=Parms.ResultDialog;
		ResultOpen=Parms.ResultOpen;
	}
	static FName NAME_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog = FName(TEXT("RequestOpenOnlyPictureDialog"));
	void UELDialogBoxManagerBase::RequestOpenOnlyPictureDialog(const UTexture2D* Texture, FText const& HeaderText, TArray<FText> const& AskTexts, FDialogBoxResultDelegate const& ResultDelegate, UELDialogBoxWidgetBase*& ResultDialog, bool& ResultOpen)
	{
		ELDialogBoxManagerBase_eventRequestOpenOnlyPictureDialog_Parms Parms;
		Parms.Texture=Texture;
		Parms.HeaderText=HeaderText;
		Parms.AskTexts=AskTexts;
		Parms.ResultDelegate=ResultDelegate;
		Parms.ResultDialog=ResultDialog;
		Parms.ResultOpen=ResultOpen ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog),&Parms);
		ResultDialog=Parms.ResultDialog;
		ResultOpen=Parms.ResultOpen;
	}
	static FName NAME_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog = FName(TEXT("RequestOpenOnlyTextDialog"));
	void UELDialogBoxManagerBase::RequestOpenOnlyTextDialog(FText const& HeaderText, FText const& MainText, TArray<FText> const& AskTexts, FDialogBoxResultDelegate const& ResultDelegate, UELDialogBoxWidgetBase*& ResultDialog, bool& ResultOpen)
	{
		ELDialogBoxManagerBase_eventRequestOpenOnlyTextDialog_Parms Parms;
		Parms.HeaderText=HeaderText;
		Parms.MainText=MainText;
		Parms.AskTexts=AskTexts;
		Parms.ResultDelegate=ResultDelegate;
		Parms.ResultDialog=ResultDialog;
		Parms.ResultOpen=ResultOpen ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog),&Parms);
		ResultDialog=Parms.ResultDialog;
		ResultOpen=Parms.ResultOpen;
	}
	static FName NAME_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog = FName(TEXT("RequestOpenSingleItemGetDialog"));
	void UELDialogBoxManagerBase::RequestOpenSingleItemGetDialog(TSoftObjectPtr<UTexture2D> const& Texture, FText const& HeaderText, FText const& MainText, TArray<FText> const& AskTexts, FDialogBoxResultDelegate const& ResultDelegate, UELDialogBoxWidgetBase*& ResultDialog, bool& ResultOpen)
	{
		ELDialogBoxManagerBase_eventRequestOpenSingleItemGetDialog_Parms Parms;
		Parms.Texture=Texture;
		Parms.HeaderText=HeaderText;
		Parms.MainText=MainText;
		Parms.AskTexts=AskTexts;
		Parms.ResultDelegate=ResultDelegate;
		Parms.ResultDialog=ResultDialog;
		Parms.ResultOpen=ResultOpen ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog),&Parms);
		ResultDialog=Parms.ResultDialog;
		ResultOpen=Parms.ResultOpen;
	}
	static FName NAME_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog = FName(TEXT("RequestOpenSinglePictureAndTextDialog"));
	void UELDialogBoxManagerBase::RequestOpenSinglePictureAndTextDialog(const UTexture2D* Texture, FText const& HeaderText, FText const& TargetText, TArray<FText> const& AskTexts, FDialogBoxResultDelegate const& ResultDelegate, UELDialogBoxWidgetBase*& ResultDialog, bool& ResultOpen)
	{
		ELDialogBoxManagerBase_eventRequestOpenSinglePictureAndTextDialog_Parms Parms;
		Parms.Texture=Texture;
		Parms.HeaderText=HeaderText;
		Parms.TargetText=TargetText;
		Parms.AskTexts=AskTexts;
		Parms.ResultDelegate=ResultDelegate;
		Parms.ResultDialog=ResultDialog;
		Parms.ResultOpen=ResultOpen ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog),&Parms);
		ResultDialog=Parms.ResultDialog;
		ResultOpen=Parms.ResultOpen;
	}
	static FName NAME_UELDialogBoxManagerBase_RequestOpenTextEntryDialog = FName(TEXT("RequestOpenTextEntryDialog"));
	void UELDialogBoxManagerBase::RequestOpenTextEntryDialog(FText const& Title, const FString& Text, const int32 MaxNum, FDialogBoxResultDelegate const& ResultDelegate, bool UseInfoText, bool IsSystemDialog, UELDialogBoxWidgetBase*& ResultDialog, bool& ResultOpen)
	{
		ELDialogBoxManagerBase_eventRequestOpenTextEntryDialog_Parms Parms;
		Parms.Title=Title;
		Parms.Text=Text;
		Parms.MaxNum=MaxNum;
		Parms.ResultDelegate=ResultDelegate;
		Parms.UseInfoText=UseInfoText ? true : false;
		Parms.IsSystemDialog=IsSystemDialog ? true : false;
		Parms.ResultDialog=ResultDialog;
		Parms.ResultOpen=ResultOpen ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELDialogBoxManagerBase_RequestOpenTextEntryDialog),&Parms);
		ResultDialog=Parms.ResultDialog;
		ResultOpen=Parms.ResultOpen;
	}
	static FName NAME_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog = FName(TEXT("RequestOpenThreePictureAndTextDialog"));
	void UELDialogBoxManagerBase::RequestOpenThreePictureAndTextDialog(TArray<UTexture2D*> const& Texture, FText const& HeaderText, TArray<FText> const& MainTextList, TArray<FText> const& AskTexts, FDialogBoxResultDelegate const& ResultDelegate, UELDialogBoxWidgetBase*& ResultDialog, bool& ResultOpen)
	{
		ELDialogBoxManagerBase_eventRequestOpenThreePictureAndTextDialog_Parms Parms;
		Parms.Texture=Texture;
		Parms.HeaderText=HeaderText;
		Parms.MainTextList=MainTextList;
		Parms.AskTexts=AskTexts;
		Parms.ResultDelegate=ResultDelegate;
		Parms.ResultDialog=ResultDialog;
		Parms.ResultOpen=ResultOpen ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog),&Parms);
		ResultDialog=Parms.ResultDialog;
		ResultOpen=Parms.ResultOpen;
	}
	static FName NAME_UELDialogBoxManagerBase_RequestOpenTutorialDialog = FName(TEXT("RequestOpenTutorialDialog"));
	void UELDialogBoxManagerBase::RequestOpenTutorialDialog(FDialogBoxResultDelegate const& ResultDelegate, UELDialogBoxWidgetBase*& ResultDialog, bool& ResultOpen)
	{
		ELDialogBoxManagerBase_eventRequestOpenTutorialDialog_Parms Parms;
		Parms.ResultDelegate=ResultDelegate;
		Parms.ResultDialog=ResultDialog;
		Parms.ResultOpen=ResultOpen ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELDialogBoxManagerBase_RequestOpenTutorialDialog),&Parms);
		ResultDialog=Parms.ResultDialog;
		ResultOpen=Parms.ResultOpen;
	}
	void UELDialogBoxManagerBase::StaticRegisterNativesUELDialogBoxManagerBase()
	{
		UClass* Class = UELDialogBoxManagerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisplayDialogBoxStackListEmpty", &UELDialogBoxManagerBase::execDisplayDialogBoxStackListEmpty },
			{ "DisplayDialogBoxStackListFindItem", &UELDialogBoxManagerBase::execDisplayDialogBoxStackListFindItem },
			{ "DisplayDialogBoxStackListGetItem", &UELDialogBoxManagerBase::execDisplayDialogBoxStackListGetItem },
			{ "DisplayDialogBoxStackListPopItem", &UELDialogBoxManagerBase::execDisplayDialogBoxStackListPopItem },
			{ "DisplayDialogBoxStackListPushItem", &UELDialogBoxManagerBase::execDisplayDialogBoxStackListPushItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELDialogBoxManagerBase_CallDialogResult_Statics
	{
		static void NewProp_IsCancel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCancel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELDialogBoxManagerBase_CallDialogResult_Statics::NewProp_IsCancel_SetBit(void* Obj)
	{
		((ELDialogBoxManagerBase_eventCallDialogResult_Parms*)Obj)->IsCancel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_CallDialogResult_Statics::NewProp_IsCancel = { "IsCancel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDialogBoxManagerBase_eventCallDialogResult_Parms), &Z_Construct_UFunction_UELDialogBoxManagerBase_CallDialogResult_Statics::NewProp_IsCancel_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDialogBoxManagerBase_CallDialogResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_CallDialogResult_Statics::NewProp_IsCancel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_CallDialogResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDialogBoxManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDialogBoxManagerBase_CallDialogResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDialogBoxManagerBase, nullptr, "CallDialogResult", nullptr, nullptr, sizeof(ELDialogBoxManagerBase_eventCallDialogResult_Parms), Z_Construct_UFunction_UELDialogBoxManagerBase_CallDialogResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_CallDialogResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_CallDialogResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_CallDialogResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDialogBoxManagerBase_CallDialogResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDialogBoxManagerBase_CallDialogResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListEmpty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListEmpty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDialogBoxManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDialogBoxManagerBase, nullptr, "DisplayDialogBoxStackListEmpty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListFindItem_Statics
	{
		struct ELDialogBoxManagerBase_eventDisplayDialogBoxStackListFindItem_Parms
		{
			FDisplayDialogBoxStackInfo ReturnItem;
			yEnMenuWidgetType Type;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnItem;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListFindItem_Statics::NewProp_ReturnItem = { "ReturnItem", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventDisplayDialogBoxStackListFindItem_Parms, ReturnItem), Z_Construct_UScriptStruct_FDisplayDialogBoxStackInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListFindItem_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListFindItem_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventDisplayDialogBoxStackListFindItem_Parms, Type), Z_Construct_UEnum_ABP_200508_yEnMenuWidgetType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListFindItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDialogBoxManagerBase_eventDisplayDialogBoxStackListFindItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListFindItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDialogBoxManagerBase_eventDisplayDialogBoxStackListFindItem_Parms), &Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListFindItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListFindItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListFindItem_Statics::NewProp_ReturnItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListFindItem_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListFindItem_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListFindItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListFindItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDialogBoxManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListFindItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDialogBoxManagerBase, nullptr, "DisplayDialogBoxStackListFindItem", nullptr, nullptr, sizeof(ELDialogBoxManagerBase_eventDisplayDialogBoxStackListFindItem_Parms), Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListFindItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListFindItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListFindItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListFindItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListFindItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListFindItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListGetItem_Statics
	{
		struct ELDialogBoxManagerBase_eventDisplayDialogBoxStackListGetItem_Parms
		{
			FDisplayDialogBoxStackInfo ReturnItem;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnItem;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListGetItem_Statics::NewProp_ReturnItem = { "ReturnItem", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventDisplayDialogBoxStackListGetItem_Parms, ReturnItem), Z_Construct_UScriptStruct_FDisplayDialogBoxStackInfo, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListGetItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDialogBoxManagerBase_eventDisplayDialogBoxStackListGetItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListGetItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDialogBoxManagerBase_eventDisplayDialogBoxStackListGetItem_Parms), &Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListGetItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListGetItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListGetItem_Statics::NewProp_ReturnItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListGetItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListGetItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDialogBoxManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListGetItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDialogBoxManagerBase, nullptr, "DisplayDialogBoxStackListGetItem", nullptr, nullptr, sizeof(ELDialogBoxManagerBase_eventDisplayDialogBoxStackListGetItem_Parms), Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListGetItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListGetItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListGetItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListGetItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListGetItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListGetItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListPopItem_Statics
	{
		struct ELDialogBoxManagerBase_eventDisplayDialogBoxStackListPopItem_Parms
		{
			FDisplayDialogBoxStackInfo ReturnItem;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnItem;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListPopItem_Statics::NewProp_ReturnItem = { "ReturnItem", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventDisplayDialogBoxStackListPopItem_Parms, ReturnItem), Z_Construct_UScriptStruct_FDisplayDialogBoxStackInfo, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListPopItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDialogBoxManagerBase_eventDisplayDialogBoxStackListPopItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListPopItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDialogBoxManagerBase_eventDisplayDialogBoxStackListPopItem_Parms), &Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListPopItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListPopItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListPopItem_Statics::NewProp_ReturnItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListPopItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListPopItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDialogBoxManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListPopItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDialogBoxManagerBase, nullptr, "DisplayDialogBoxStackListPopItem", nullptr, nullptr, sizeof(ELDialogBoxManagerBase_eventDisplayDialogBoxStackListPopItem_Parms), Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListPopItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListPopItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListPopItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListPopItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListPopItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListPopItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListPushItem_Statics
	{
		struct ELDialogBoxManagerBase_eventDisplayDialogBoxStackListPushItem_Parms
		{
			UELOperationalWidgetBase* Widget;
			FScriptDelegate Delegate;
			FScriptDelegate BeginResultDelegate;
			yEnMenuWidgetType Type;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_BeginResultDelegate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListPushItem_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListPushItem_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventDisplayDialogBoxStackListPushItem_Parms, Widget), Z_Construct_UClass_UELOperationalWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListPushItem_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListPushItem_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListPushItem_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventDisplayDialogBoxStackListPushItem_Parms, Delegate), Z_Construct_UDelegateFunction_ABP_200508_DialogBoxResultDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListPushItem_Statics::NewProp_BeginResultDelegate = { "BeginResultDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventDisplayDialogBoxStackListPushItem_Parms, BeginResultDelegate), Z_Construct_UDelegateFunction_ABP_200508_DialogBoxBeginResultDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListPushItem_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListPushItem_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventDisplayDialogBoxStackListPushItem_Parms, Type), Z_Construct_UEnum_ABP_200508_yEnMenuWidgetType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListPushItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListPushItem_Statics::NewProp_Widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListPushItem_Statics::NewProp_Delegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListPushItem_Statics::NewProp_BeginResultDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListPushItem_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListPushItem_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListPushItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDialogBoxManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListPushItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDialogBoxManagerBase, nullptr, "DisplayDialogBoxStackListPushItem", nullptr, nullptr, sizeof(ELDialogBoxManagerBase_eventDisplayDialogBoxStackListPushItem_Parms), Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListPushItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListPushItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListPushItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListPushItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListPushItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListPushItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDialogBoxManagerBase_GetCurrentDialogWidgetType_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_GetCurrentDialogWidgetType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_GetCurrentDialogWidgetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventGetCurrentDialogWidgetType_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_yEnMenuWidgetType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDialogBoxManagerBase_GetCurrentDialogWidgetType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_GetCurrentDialogWidgetType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_GetCurrentDialogWidgetType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_GetCurrentDialogWidgetType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDialogBoxManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDialogBoxManagerBase_GetCurrentDialogWidgetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDialogBoxManagerBase, nullptr, "GetCurrentDialogWidgetType", nullptr, nullptr, sizeof(ELDialogBoxManagerBase_eventGetCurrentDialogWidgetType_Parms), Z_Construct_UFunction_UELDialogBoxManagerBase_GetCurrentDialogWidgetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_GetCurrentDialogWidgetType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_GetCurrentDialogWidgetType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_GetCurrentDialogWidgetType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDialogBoxManagerBase_GetCurrentDialogWidgetType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDialogBoxManagerBase_GetCurrentDialogWidgetType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDialogBoxManagerBase_IsOpenedDialog_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELDialogBoxManagerBase_IsOpenedDialog_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDialogBoxManagerBase_eventIsOpenedDialog_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_IsOpenedDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDialogBoxManagerBase_eventIsOpenedDialog_Parms), &Z_Construct_UFunction_UELDialogBoxManagerBase_IsOpenedDialog_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDialogBoxManagerBase_IsOpenedDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_IsOpenedDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_IsOpenedDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDialogBoxManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDialogBoxManagerBase_IsOpenedDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDialogBoxManagerBase, nullptr, "IsOpenedDialog", nullptr, nullptr, sizeof(ELDialogBoxManagerBase_eventIsOpenedDialog_Parms), Z_Construct_UFunction_UELDialogBoxManagerBase_IsOpenedDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_IsOpenedDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_IsOpenedDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_IsOpenedDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDialogBoxManagerBase_IsOpenedDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDialogBoxManagerBase_IsOpenedDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDialogBoxManagerBase_IsOpenedDialogOrTutorial_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELDialogBoxManagerBase_IsOpenedDialogOrTutorial_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDialogBoxManagerBase_eventIsOpenedDialogOrTutorial_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_IsOpenedDialogOrTutorial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDialogBoxManagerBase_eventIsOpenedDialogOrTutorial_Parms), &Z_Construct_UFunction_UELDialogBoxManagerBase_IsOpenedDialogOrTutorial_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDialogBoxManagerBase_IsOpenedDialogOrTutorial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_IsOpenedDialogOrTutorial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_IsOpenedDialogOrTutorial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDialogBoxManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDialogBoxManagerBase_IsOpenedDialogOrTutorial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDialogBoxManagerBase, nullptr, "IsOpenedDialogOrTutorial", nullptr, nullptr, sizeof(ELDialogBoxManagerBase_eventIsOpenedDialogOrTutorial_Parms), Z_Construct_UFunction_UELDialogBoxManagerBase_IsOpenedDialogOrTutorial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_IsOpenedDialogOrTutorial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_IsOpenedDialogOrTutorial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_IsOpenedDialogOrTutorial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDialogBoxManagerBase_IsOpenedDialogOrTutorial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDialogBoxManagerBase_IsOpenedDialogOrTutorial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDialogBoxManagerBase_IsStackedDialog_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELDialogBoxManagerBase_IsStackedDialog_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDialogBoxManagerBase_eventIsStackedDialog_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_IsStackedDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDialogBoxManagerBase_eventIsStackedDialog_Parms), &Z_Construct_UFunction_UELDialogBoxManagerBase_IsStackedDialog_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDialogBoxManagerBase_IsStackedDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_IsStackedDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_IsStackedDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDialogBoxManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDialogBoxManagerBase_IsStackedDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDialogBoxManagerBase, nullptr, "IsStackedDialog", nullptr, nullptr, sizeof(ELDialogBoxManagerBase_eventIsStackedDialog_Parms), Z_Construct_UFunction_UELDialogBoxManagerBase_IsStackedDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_IsStackedDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_IsStackedDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_IsStackedDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDialogBoxManagerBase_IsStackedDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDialogBoxManagerBase_IsStackedDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MessageType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Choises_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Choises_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Choises_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Choises;
		static void NewProp_IsSystemDialog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSystemDialog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResultDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeginResultDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_BeginResultDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultDialog_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResultDialog;
		static void NewProp_ResultOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ResultOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::NewProp_MessageType = { "MessageType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestDisconnectedGamePadMessageDialog_Parms, MessageType), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestDisconnectedGamePadMessageDialog_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::NewProp_Choises_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::NewProp_Choises_Inner = { "Choises", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ABP_200508_yEnDialogBoxChoices, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::NewProp_Choises_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::NewProp_Choises = { "Choises", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestDisconnectedGamePadMessageDialog_Parms, Choises), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::NewProp_Choises_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::NewProp_Choises_MetaData)) };
	void Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::NewProp_IsSystemDialog_SetBit(void* Obj)
	{
		((ELDialogBoxManagerBase_eventRequestDisconnectedGamePadMessageDialog_Parms*)Obj)->IsSystemDialog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::NewProp_IsSystemDialog = { "IsSystemDialog", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDialogBoxManagerBase_eventRequestDisconnectedGamePadMessageDialog_Parms), &Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::NewProp_IsSystemDialog_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::NewProp_ResultDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::NewProp_ResultDelegate = { "ResultDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestDisconnectedGamePadMessageDialog_Parms, ResultDelegate), Z_Construct_UDelegateFunction_ABP_200508_DialogBoxResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::NewProp_ResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::NewProp_ResultDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::NewProp_BeginResultDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::NewProp_BeginResultDelegate = { "BeginResultDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestDisconnectedGamePadMessageDialog_Parms, BeginResultDelegate), Z_Construct_UDelegateFunction_ABP_200508_DialogBoxBeginResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::NewProp_BeginResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::NewProp_BeginResultDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::NewProp_ResultDialog_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::NewProp_ResultDialog = { "ResultDialog", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestDisconnectedGamePadMessageDialog_Parms, ResultDialog), Z_Construct_UClass_UELDialogBoxWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::NewProp_ResultDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::NewProp_ResultDialog_MetaData)) };
	void Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::NewProp_ResultOpen_SetBit(void* Obj)
	{
		((ELDialogBoxManagerBase_eventRequestDisconnectedGamePadMessageDialog_Parms*)Obj)->ResultOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::NewProp_ResultOpen = { "ResultOpen", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDialogBoxManagerBase_eventRequestDisconnectedGamePadMessageDialog_Parms), &Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::NewProp_ResultOpen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::NewProp_MessageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::NewProp_Choises_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::NewProp_Choises_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::NewProp_Choises,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::NewProp_IsSystemDialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::NewProp_ResultDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::NewProp_BeginResultDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::NewProp_ResultDialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::NewProp_ResultOpen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDialogBoxManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDialogBoxManagerBase, nullptr, "RequestDisconnectedGamePadMessageDialog", nullptr, nullptr, sizeof(ELDialogBoxManagerBase_eventRequestDisconnectedGamePadMessageDialog_Parms), Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDialogBoxManagerBase_RequestForceCloseDialog_Statics
	{
		static void NewProp_CloseALL_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CloseALL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELDialogBoxManagerBase_RequestForceCloseDialog_Statics::NewProp_CloseALL_SetBit(void* Obj)
	{
		((ELDialogBoxManagerBase_eventRequestForceCloseDialog_Parms*)Obj)->CloseALL = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestForceCloseDialog_Statics::NewProp_CloseALL = { "CloseALL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDialogBoxManagerBase_eventRequestForceCloseDialog_Parms), &Z_Construct_UFunction_UELDialogBoxManagerBase_RequestForceCloseDialog_Statics::NewProp_CloseALL_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDialogBoxManagerBase_RequestForceCloseDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestForceCloseDialog_Statics::NewProp_CloseALL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestForceCloseDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDialogBoxManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestForceCloseDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDialogBoxManagerBase, nullptr, "RequestForceCloseDialog", nullptr, nullptr, sizeof(ELDialogBoxManagerBase_eventRequestForceCloseDialog_Parms), Z_Construct_UFunction_UELDialogBoxManagerBase_RequestForceCloseDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestForceCloseDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestForceCloseDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestForceCloseDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDialogBoxManagerBase_RequestForceCloseDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDialogBoxManagerBase_RequestForceCloseDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MessageType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Choises_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Choises_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Choises_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Choises;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResultDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultIndex;
		static void NewProp_IsSystemDialog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSystemDialog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultDialog_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResultDialog;
		static void NewProp_ResultOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ResultOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::NewProp_MessageType = { "MessageType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenMessageDialog_Parms, MessageType), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenMessageDialog_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::NewProp_Choises_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::NewProp_Choises_Inner = { "Choises", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ABP_200508_yEnDialogBoxChoices, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::NewProp_Choises_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::NewProp_Choises = { "Choises", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenMessageDialog_Parms, Choises), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::NewProp_Choises_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::NewProp_Choises_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::NewProp_ResultDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::NewProp_ResultDelegate = { "ResultDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenMessageDialog_Parms, ResultDelegate), Z_Construct_UDelegateFunction_ABP_200508_DialogBoxResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::NewProp_ResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::NewProp_ResultDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::NewProp_DefaultIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::NewProp_DefaultIndex = { "DefaultIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenMessageDialog_Parms, DefaultIndex), METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::NewProp_DefaultIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::NewProp_DefaultIndex_MetaData)) };
	void Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::NewProp_IsSystemDialog_SetBit(void* Obj)
	{
		((ELDialogBoxManagerBase_eventRequestOpenMessageDialog_Parms*)Obj)->IsSystemDialog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::NewProp_IsSystemDialog = { "IsSystemDialog", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDialogBoxManagerBase_eventRequestOpenMessageDialog_Parms), &Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::NewProp_IsSystemDialog_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::NewProp_ResultDialog_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::NewProp_ResultDialog = { "ResultDialog", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenMessageDialog_Parms, ResultDialog), Z_Construct_UClass_UELDialogBoxWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::NewProp_ResultDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::NewProp_ResultDialog_MetaData)) };
	void Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::NewProp_ResultOpen_SetBit(void* Obj)
	{
		((ELDialogBoxManagerBase_eventRequestOpenMessageDialog_Parms*)Obj)->ResultOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::NewProp_ResultOpen = { "ResultOpen", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDialogBoxManagerBase_eventRequestOpenMessageDialog_Parms), &Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::NewProp_ResultOpen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::NewProp_MessageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::NewProp_Choises_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::NewProp_Choises_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::NewProp_Choises,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::NewProp_ResultDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::NewProp_DefaultIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::NewProp_IsSystemDialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::NewProp_ResultDialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::NewProp_ResultOpen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDialogBoxManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDialogBoxManagerBase, nullptr, "RequestOpenMessageDialog", nullptr, nullptr, sizeof(ELDialogBoxManagerBase_eventRequestOpenMessageDialog_Parms), Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialogNoResult_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MessageType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Choise_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Choise_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Choise;
		static void NewProp_IsSystemDialog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSystemDialog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultDialog_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResultDialog;
		static void NewProp_ResultOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ResultOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialogNoResult_Statics::NewProp_MessageType = { "MessageType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenMessageDialogNoResult_Parms, MessageType), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialogNoResult_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialogNoResult_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenMessageDialogNoResult_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialogNoResult_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialogNoResult_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialogNoResult_Statics::NewProp_Choise_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialogNoResult_Statics::NewProp_Choise_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialogNoResult_Statics::NewProp_Choise = { "Choise", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenMessageDialogNoResult_Parms, Choise), Z_Construct_UEnum_ABP_200508_yEnDialogBoxChoices, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialogNoResult_Statics::NewProp_Choise_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialogNoResult_Statics::NewProp_Choise_MetaData)) };
	void Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialogNoResult_Statics::NewProp_IsSystemDialog_SetBit(void* Obj)
	{
		((ELDialogBoxManagerBase_eventRequestOpenMessageDialogNoResult_Parms*)Obj)->IsSystemDialog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialogNoResult_Statics::NewProp_IsSystemDialog = { "IsSystemDialog", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDialogBoxManagerBase_eventRequestOpenMessageDialogNoResult_Parms), &Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialogNoResult_Statics::NewProp_IsSystemDialog_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialogNoResult_Statics::NewProp_ResultDialog_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialogNoResult_Statics::NewProp_ResultDialog = { "ResultDialog", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenMessageDialogNoResult_Parms, ResultDialog), Z_Construct_UClass_UELDialogBoxWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialogNoResult_Statics::NewProp_ResultDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialogNoResult_Statics::NewProp_ResultDialog_MetaData)) };
	void Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialogNoResult_Statics::NewProp_ResultOpen_SetBit(void* Obj)
	{
		((ELDialogBoxManagerBase_eventRequestOpenMessageDialogNoResult_Parms*)Obj)->ResultOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialogNoResult_Statics::NewProp_ResultOpen = { "ResultOpen", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDialogBoxManagerBase_eventRequestOpenMessageDialogNoResult_Parms), &Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialogNoResult_Statics::NewProp_ResultOpen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialogNoResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialogNoResult_Statics::NewProp_MessageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialogNoResult_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialogNoResult_Statics::NewProp_Choise_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialogNoResult_Statics::NewProp_Choise,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialogNoResult_Statics::NewProp_IsSystemDialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialogNoResult_Statics::NewProp_ResultDialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialogNoResult_Statics::NewProp_ResultOpen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialogNoResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDialogBoxManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialogNoResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDialogBoxManagerBase, nullptr, "RequestOpenMessageDialogNoResult", nullptr, nullptr, sizeof(ELDialogBoxManagerBase_eventRequestOpenMessageDialogNoResult_Parms), Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialogNoResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialogNoResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialogNoResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialogNoResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialogNoResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialogNoResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeaderText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_HeaderText;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_AskTexts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AskTexts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AskTexts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResultDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultDialog_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResultDialog;
		static void NewProp_ResultOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ResultOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog_Statics::NewProp_Texture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenOnlyPictureDialog_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog_Statics::NewProp_HeaderText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog_Statics::NewProp_HeaderText = { "HeaderText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenOnlyPictureDialog_Parms, HeaderText), METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog_Statics::NewProp_HeaderText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog_Statics::NewProp_HeaderText_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog_Statics::NewProp_AskTexts_Inner = { "AskTexts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog_Statics::NewProp_AskTexts_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog_Statics::NewProp_AskTexts = { "AskTexts", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenOnlyPictureDialog_Parms, AskTexts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog_Statics::NewProp_AskTexts_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog_Statics::NewProp_AskTexts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog_Statics::NewProp_ResultDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog_Statics::NewProp_ResultDelegate = { "ResultDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenOnlyPictureDialog_Parms, ResultDelegate), Z_Construct_UDelegateFunction_ABP_200508_DialogBoxResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog_Statics::NewProp_ResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog_Statics::NewProp_ResultDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog_Statics::NewProp_ResultDialog_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog_Statics::NewProp_ResultDialog = { "ResultDialog", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenOnlyPictureDialog_Parms, ResultDialog), Z_Construct_UClass_UELDialogBoxWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog_Statics::NewProp_ResultDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog_Statics::NewProp_ResultDialog_MetaData)) };
	void Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog_Statics::NewProp_ResultOpen_SetBit(void* Obj)
	{
		((ELDialogBoxManagerBase_eventRequestOpenOnlyPictureDialog_Parms*)Obj)->ResultOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog_Statics::NewProp_ResultOpen = { "ResultOpen", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDialogBoxManagerBase_eventRequestOpenOnlyPictureDialog_Parms), &Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog_Statics::NewProp_ResultOpen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog_Statics::NewProp_HeaderText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog_Statics::NewProp_AskTexts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog_Statics::NewProp_AskTexts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog_Statics::NewProp_ResultDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog_Statics::NewProp_ResultDialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog_Statics::NewProp_ResultOpen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDialogBoxManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDialogBoxManagerBase, nullptr, "RequestOpenOnlyPictureDialog", nullptr, nullptr, sizeof(ELDialogBoxManagerBase_eventRequestOpenOnlyPictureDialog_Parms), Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeaderText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_HeaderText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_MainText;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_AskTexts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AskTexts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AskTexts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResultDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultDialog_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResultDialog;
		static void NewProp_ResultOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ResultOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog_Statics::NewProp_HeaderText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog_Statics::NewProp_HeaderText = { "HeaderText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenOnlyTextDialog_Parms, HeaderText), METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog_Statics::NewProp_HeaderText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog_Statics::NewProp_HeaderText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog_Statics::NewProp_MainText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog_Statics::NewProp_MainText = { "MainText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenOnlyTextDialog_Parms, MainText), METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog_Statics::NewProp_MainText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog_Statics::NewProp_MainText_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog_Statics::NewProp_AskTexts_Inner = { "AskTexts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog_Statics::NewProp_AskTexts_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog_Statics::NewProp_AskTexts = { "AskTexts", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenOnlyTextDialog_Parms, AskTexts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog_Statics::NewProp_AskTexts_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog_Statics::NewProp_AskTexts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog_Statics::NewProp_ResultDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog_Statics::NewProp_ResultDelegate = { "ResultDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenOnlyTextDialog_Parms, ResultDelegate), Z_Construct_UDelegateFunction_ABP_200508_DialogBoxResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog_Statics::NewProp_ResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog_Statics::NewProp_ResultDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog_Statics::NewProp_ResultDialog_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog_Statics::NewProp_ResultDialog = { "ResultDialog", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenOnlyTextDialog_Parms, ResultDialog), Z_Construct_UClass_UELDialogBoxWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog_Statics::NewProp_ResultDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog_Statics::NewProp_ResultDialog_MetaData)) };
	void Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog_Statics::NewProp_ResultOpen_SetBit(void* Obj)
	{
		((ELDialogBoxManagerBase_eventRequestOpenOnlyTextDialog_Parms*)Obj)->ResultOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog_Statics::NewProp_ResultOpen = { "ResultOpen", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDialogBoxManagerBase_eventRequestOpenOnlyTextDialog_Parms), &Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog_Statics::NewProp_ResultOpen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog_Statics::NewProp_HeaderText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog_Statics::NewProp_MainText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog_Statics::NewProp_AskTexts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog_Statics::NewProp_AskTexts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog_Statics::NewProp_ResultDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog_Statics::NewProp_ResultDialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog_Statics::NewProp_ResultOpen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDialogBoxManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDialogBoxManagerBase, nullptr, "RequestOpenOnlyTextDialog", nullptr, nullptr, sizeof(ELDialogBoxManagerBase_eventRequestOpenOnlyTextDialog_Parms), Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeaderText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_HeaderText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_MainText;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_AskTexts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AskTexts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AskTexts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResultDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultDialog_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResultDialog;
		static void NewProp_ResultOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ResultOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::NewProp_Texture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000008000182, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenSingleItemGetDialog_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::NewProp_HeaderText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::NewProp_HeaderText = { "HeaderText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenSingleItemGetDialog_Parms, HeaderText), METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::NewProp_HeaderText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::NewProp_HeaderText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::NewProp_MainText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::NewProp_MainText = { "MainText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenSingleItemGetDialog_Parms, MainText), METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::NewProp_MainText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::NewProp_MainText_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::NewProp_AskTexts_Inner = { "AskTexts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::NewProp_AskTexts_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::NewProp_AskTexts = { "AskTexts", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenSingleItemGetDialog_Parms, AskTexts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::NewProp_AskTexts_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::NewProp_AskTexts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::NewProp_ResultDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::NewProp_ResultDelegate = { "ResultDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenSingleItemGetDialog_Parms, ResultDelegate), Z_Construct_UDelegateFunction_ABP_200508_DialogBoxResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::NewProp_ResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::NewProp_ResultDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::NewProp_ResultDialog_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::NewProp_ResultDialog = { "ResultDialog", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenSingleItemGetDialog_Parms, ResultDialog), Z_Construct_UClass_UELDialogBoxWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::NewProp_ResultDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::NewProp_ResultDialog_MetaData)) };
	void Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::NewProp_ResultOpen_SetBit(void* Obj)
	{
		((ELDialogBoxManagerBase_eventRequestOpenSingleItemGetDialog_Parms*)Obj)->ResultOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::NewProp_ResultOpen = { "ResultOpen", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDialogBoxManagerBase_eventRequestOpenSingleItemGetDialog_Parms), &Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::NewProp_ResultOpen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::NewProp_HeaderText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::NewProp_MainText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::NewProp_AskTexts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::NewProp_AskTexts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::NewProp_ResultDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::NewProp_ResultDialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::NewProp_ResultOpen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDialogBoxManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDialogBoxManagerBase, nullptr, "RequestOpenSingleItemGetDialog", nullptr, nullptr, sizeof(ELDialogBoxManagerBase_eventRequestOpenSingleItemGetDialog_Parms), Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeaderText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_HeaderText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TargetText;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_AskTexts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AskTexts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AskTexts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResultDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultDialog_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResultDialog;
		static void NewProp_ResultOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ResultOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::NewProp_Texture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenSinglePictureAndTextDialog_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::NewProp_HeaderText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::NewProp_HeaderText = { "HeaderText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenSinglePictureAndTextDialog_Parms, HeaderText), METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::NewProp_HeaderText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::NewProp_HeaderText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::NewProp_TargetText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::NewProp_TargetText = { "TargetText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenSinglePictureAndTextDialog_Parms, TargetText), METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::NewProp_TargetText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::NewProp_TargetText_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::NewProp_AskTexts_Inner = { "AskTexts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::NewProp_AskTexts_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::NewProp_AskTexts = { "AskTexts", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenSinglePictureAndTextDialog_Parms, AskTexts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::NewProp_AskTexts_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::NewProp_AskTexts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::NewProp_ResultDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::NewProp_ResultDelegate = { "ResultDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenSinglePictureAndTextDialog_Parms, ResultDelegate), Z_Construct_UDelegateFunction_ABP_200508_DialogBoxResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::NewProp_ResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::NewProp_ResultDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::NewProp_ResultDialog_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::NewProp_ResultDialog = { "ResultDialog", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenSinglePictureAndTextDialog_Parms, ResultDialog), Z_Construct_UClass_UELDialogBoxWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::NewProp_ResultDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::NewProp_ResultDialog_MetaData)) };
	void Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::NewProp_ResultOpen_SetBit(void* Obj)
	{
		((ELDialogBoxManagerBase_eventRequestOpenSinglePictureAndTextDialog_Parms*)Obj)->ResultOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::NewProp_ResultOpen = { "ResultOpen", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDialogBoxManagerBase_eventRequestOpenSinglePictureAndTextDialog_Parms), &Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::NewProp_ResultOpen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::NewProp_HeaderText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::NewProp_TargetText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::NewProp_AskTexts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::NewProp_AskTexts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::NewProp_ResultDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::NewProp_ResultDialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::NewProp_ResultOpen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDialogBoxManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDialogBoxManagerBase, nullptr, "RequestOpenSinglePictureAndTextDialog", nullptr, nullptr, sizeof(ELDialogBoxManagerBase_eventRequestOpenSinglePictureAndTextDialog_Parms), Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResultDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseInfoText_MetaData[];
#endif
		static void NewProp_UseInfoText_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseInfoText;
		static void NewProp_IsSystemDialog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSystemDialog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultDialog_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResultDialog;
		static void NewProp_ResultOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ResultOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::NewProp_Title_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenTextEntryDialog_Parms, Title), METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenTextEntryDialog_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::NewProp_MaxNum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::NewProp_MaxNum = { "MaxNum", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenTextEntryDialog_Parms, MaxNum), METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::NewProp_MaxNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::NewProp_MaxNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::NewProp_ResultDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::NewProp_ResultDelegate = { "ResultDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenTextEntryDialog_Parms, ResultDelegate), Z_Construct_UDelegateFunction_ABP_200508_DialogBoxResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::NewProp_ResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::NewProp_ResultDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::NewProp_UseInfoText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::NewProp_UseInfoText_SetBit(void* Obj)
	{
		((ELDialogBoxManagerBase_eventRequestOpenTextEntryDialog_Parms*)Obj)->UseInfoText = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::NewProp_UseInfoText = { "UseInfoText", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDialogBoxManagerBase_eventRequestOpenTextEntryDialog_Parms), &Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::NewProp_UseInfoText_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::NewProp_UseInfoText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::NewProp_UseInfoText_MetaData)) };
	void Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::NewProp_IsSystemDialog_SetBit(void* Obj)
	{
		((ELDialogBoxManagerBase_eventRequestOpenTextEntryDialog_Parms*)Obj)->IsSystemDialog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::NewProp_IsSystemDialog = { "IsSystemDialog", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDialogBoxManagerBase_eventRequestOpenTextEntryDialog_Parms), &Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::NewProp_IsSystemDialog_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::NewProp_ResultDialog_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::NewProp_ResultDialog = { "ResultDialog", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenTextEntryDialog_Parms, ResultDialog), Z_Construct_UClass_UELDialogBoxWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::NewProp_ResultDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::NewProp_ResultDialog_MetaData)) };
	void Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::NewProp_ResultOpen_SetBit(void* Obj)
	{
		((ELDialogBoxManagerBase_eventRequestOpenTextEntryDialog_Parms*)Obj)->ResultOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::NewProp_ResultOpen = { "ResultOpen", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDialogBoxManagerBase_eventRequestOpenTextEntryDialog_Parms), &Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::NewProp_ResultOpen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::NewProp_MaxNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::NewProp_ResultDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::NewProp_UseInfoText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::NewProp_IsSystemDialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::NewProp_ResultDialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::NewProp_ResultOpen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDialogBoxManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDialogBoxManagerBase, nullptr, "RequestOpenTextEntryDialog", nullptr, nullptr, sizeof(ELDialogBoxManagerBase_eventRequestOpenTextEntryDialog_Parms), Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeaderText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_HeaderText;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_MainTextList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainTextList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MainTextList;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_AskTexts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AskTexts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AskTexts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResultDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultDialog_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResultDialog;
		static void NewProp_ResultOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ResultOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::NewProp_Texture_Inner = { "Texture", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::NewProp_Texture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenThreePictureAndTextDialog_Parms, Texture), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::NewProp_HeaderText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::NewProp_HeaderText = { "HeaderText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenThreePictureAndTextDialog_Parms, HeaderText), METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::NewProp_HeaderText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::NewProp_HeaderText_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::NewProp_MainTextList_Inner = { "MainTextList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::NewProp_MainTextList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::NewProp_MainTextList = { "MainTextList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenThreePictureAndTextDialog_Parms, MainTextList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::NewProp_MainTextList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::NewProp_MainTextList_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::NewProp_AskTexts_Inner = { "AskTexts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::NewProp_AskTexts_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::NewProp_AskTexts = { "AskTexts", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenThreePictureAndTextDialog_Parms, AskTexts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::NewProp_AskTexts_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::NewProp_AskTexts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::NewProp_ResultDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::NewProp_ResultDelegate = { "ResultDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenThreePictureAndTextDialog_Parms, ResultDelegate), Z_Construct_UDelegateFunction_ABP_200508_DialogBoxResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::NewProp_ResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::NewProp_ResultDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::NewProp_ResultDialog_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::NewProp_ResultDialog = { "ResultDialog", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenThreePictureAndTextDialog_Parms, ResultDialog), Z_Construct_UClass_UELDialogBoxWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::NewProp_ResultDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::NewProp_ResultDialog_MetaData)) };
	void Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::NewProp_ResultOpen_SetBit(void* Obj)
	{
		((ELDialogBoxManagerBase_eventRequestOpenThreePictureAndTextDialog_Parms*)Obj)->ResultOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::NewProp_ResultOpen = { "ResultOpen", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDialogBoxManagerBase_eventRequestOpenThreePictureAndTextDialog_Parms), &Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::NewProp_ResultOpen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::NewProp_Texture_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::NewProp_HeaderText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::NewProp_MainTextList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::NewProp_MainTextList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::NewProp_AskTexts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::NewProp_AskTexts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::NewProp_ResultDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::NewProp_ResultDialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::NewProp_ResultOpen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDialogBoxManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDialogBoxManagerBase, nullptr, "RequestOpenThreePictureAndTextDialog", nullptr, nullptr, sizeof(ELDialogBoxManagerBase_eventRequestOpenThreePictureAndTextDialog_Parms), Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTutorialDialog_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResultDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultDialog_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResultDialog;
		static void NewProp_ResultOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ResultOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTutorialDialog_Statics::NewProp_ResultDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTutorialDialog_Statics::NewProp_ResultDelegate = { "ResultDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenTutorialDialog_Parms, ResultDelegate), Z_Construct_UDelegateFunction_ABP_200508_DialogBoxResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTutorialDialog_Statics::NewProp_ResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTutorialDialog_Statics::NewProp_ResultDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTutorialDialog_Statics::NewProp_ResultDialog_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTutorialDialog_Statics::NewProp_ResultDialog = { "ResultDialog", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxManagerBase_eventRequestOpenTutorialDialog_Parms, ResultDialog), Z_Construct_UClass_UELDialogBoxWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTutorialDialog_Statics::NewProp_ResultDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTutorialDialog_Statics::NewProp_ResultDialog_MetaData)) };
	void Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTutorialDialog_Statics::NewProp_ResultOpen_SetBit(void* Obj)
	{
		((ELDialogBoxManagerBase_eventRequestOpenTutorialDialog_Parms*)Obj)->ResultOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTutorialDialog_Statics::NewProp_ResultOpen = { "ResultOpen", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDialogBoxManagerBase_eventRequestOpenTutorialDialog_Parms), &Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTutorialDialog_Statics::NewProp_ResultOpen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTutorialDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTutorialDialog_Statics::NewProp_ResultDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTutorialDialog_Statics::NewProp_ResultDialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTutorialDialog_Statics::NewProp_ResultOpen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTutorialDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDialogBoxManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTutorialDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDialogBoxManagerBase, nullptr, "RequestOpenTutorialDialog", nullptr, nullptr, sizeof(ELDialogBoxManagerBase_eventRequestOpenTutorialDialog_Parms), Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTutorialDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTutorialDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTutorialDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTutorialDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTutorialDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTutorialDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELDialogBoxManagerBase_NoRegister()
	{
		return UELDialogBoxManagerBase::StaticClass();
	}
	struct Z_Construct_UClass_UELDialogBoxManagerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELDialogBoxManagerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingletonBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELDialogBoxManagerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELDialogBoxManagerBase_CallDialogResult, "CallDialogResult" }, // 1026105556
		{ &Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListEmpty, "DisplayDialogBoxStackListEmpty" }, // 3952201093
		{ &Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListFindItem, "DisplayDialogBoxStackListFindItem" }, // 225740080
		{ &Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListGetItem, "DisplayDialogBoxStackListGetItem" }, // 2938755386
		{ &Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListPopItem, "DisplayDialogBoxStackListPopItem" }, // 4043177432
		{ &Z_Construct_UFunction_UELDialogBoxManagerBase_DisplayDialogBoxStackListPushItem, "DisplayDialogBoxStackListPushItem" }, // 1491759641
		{ &Z_Construct_UFunction_UELDialogBoxManagerBase_GetCurrentDialogWidgetType, "GetCurrentDialogWidgetType" }, // 1819006057
		{ &Z_Construct_UFunction_UELDialogBoxManagerBase_IsOpenedDialog, "IsOpenedDialog" }, // 361926697
		{ &Z_Construct_UFunction_UELDialogBoxManagerBase_IsOpenedDialogOrTutorial, "IsOpenedDialogOrTutorial" }, // 629835235
		{ &Z_Construct_UFunction_UELDialogBoxManagerBase_IsStackedDialog, "IsStackedDialog" }, // 42995821
		{ &Z_Construct_UFunction_UELDialogBoxManagerBase_RequestDisconnectedGamePadMessageDialog, "RequestDisconnectedGamePadMessageDialog" }, // 2664394506
		{ &Z_Construct_UFunction_UELDialogBoxManagerBase_RequestForceCloseDialog, "RequestForceCloseDialog" }, // 2496629095
		{ &Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialog, "RequestOpenMessageDialog" }, // 969598769
		{ &Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenMessageDialogNoResult, "RequestOpenMessageDialogNoResult" }, // 378768507
		{ &Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyPictureDialog, "RequestOpenOnlyPictureDialog" }, // 237178922
		{ &Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenOnlyTextDialog, "RequestOpenOnlyTextDialog" }, // 3396333581
		{ &Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSingleItemGetDialog, "RequestOpenSingleItemGetDialog" }, // 3009780461
		{ &Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenSinglePictureAndTextDialog, "RequestOpenSinglePictureAndTextDialog" }, // 554032019
		{ &Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTextEntryDialog, "RequestOpenTextEntryDialog" }, // 146157618
		{ &Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenThreePictureAndTextDialog, "RequestOpenThreePictureAndTextDialog" }, // 2971802714
		{ &Z_Construct_UFunction_UELDialogBoxManagerBase_RequestOpenTutorialDialog, "RequestOpenTutorialDialog" }, // 1091900583
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELDialogBoxManagerBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELDialogBoxManagerBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELDialogBoxManagerBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELDialogBoxManagerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELDialogBoxManagerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELDialogBoxManagerBase_Statics::ClassParams = {
		&UELDialogBoxManagerBase::StaticClass,
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
		0x001002A1u,
		METADATA_PARAMS(Z_Construct_UClass_UELDialogBoxManagerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELDialogBoxManagerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELDialogBoxManagerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELDialogBoxManagerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELDialogBoxManagerBase, 1566194035);
	template<> ELITE_API UClass* StaticClass<UELDialogBoxManagerBase>()
	{
		return UELDialogBoxManagerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELDialogBoxManagerBase(Z_Construct_UClass_UELDialogBoxManagerBase, &UELDialogBoxManagerBase::StaticClass, TEXT("/Script/ELITE"), TEXT("UELDialogBoxManagerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELDialogBoxManagerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
