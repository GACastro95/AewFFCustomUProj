// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELMenuWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMenuWidgetBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELMenuWidgetBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELMenuWidgetBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELOperationalWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_MenuWidgetOnInAnimFinished__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_MenuWidgetOnOutAnimFinished__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_MenuWidgetOnFinishedWithResult__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_MenuWidgetOnFinishedWithResult_Integer__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_MenuWidgetOnCanceled__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UELMenuWidgetBase::execBroadcastCanceledMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastCanceledMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuWidgetBase::execBroadcastFinishedMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastFinishedMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuWidgetBase::execBroadcastFinishedMenuWithResult_Integer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__WidgetOperationResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastFinishedMenuWithResult_Integer(Z_Param__WidgetOperationResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuWidgetBase::execBroadcastInAnimFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastInAnimFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuWidgetBase::execBroadcastOutAnimFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastOutAnimFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuWidgetBase::execCloseMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseMenu_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuWidgetBase::execIsDecisionKeyboard)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDecisionKeyboard();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuWidgetBase::execIsPreparedMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPreparedMenu_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuWidgetBase::execOpenMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenMenu_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuWidgetBase::execResetTabCursor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetTabCursor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuWidgetBase::execSetDecisionKeyboard)
	{
		P_GET_UBOOL(Z_Param_bFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDecisionKeyboard(Z_Param_bFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuWidgetBase::execSetMenuTop)
	{
		P_GET_OBJECT(UUserWidget,Z_Param_MenuTopWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMenuTop(Z_Param_MenuTopWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuWidgetBase::execUpdateFromStackPrevious)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateFromStackPrevious_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UELMenuWidgetBase_CloseMenu = FName(TEXT("CloseMenu"));
	void UELMenuWidgetBase::CloseMenu()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELMenuWidgetBase_CloseMenu),NULL);
	}
	static FName NAME_UELMenuWidgetBase_IsPreparedMenu = FName(TEXT("IsPreparedMenu"));
	bool UELMenuWidgetBase::IsPreparedMenu()
	{
		ELMenuWidgetBase_eventIsPreparedMenu_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UELMenuWidgetBase_IsPreparedMenu),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELMenuWidgetBase_OnCancel = FName(TEXT("OnCancel"));
	void UELMenuWidgetBase::OnCancel()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELMenuWidgetBase_OnCancel),NULL);
	}
	static FName NAME_UELMenuWidgetBase_OnDecision = FName(TEXT("OnDecision"));
	void UELMenuWidgetBase::OnDecision()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELMenuWidgetBase_OnDecision),NULL);
	}
	static FName NAME_UELMenuWidgetBase_OnDecisionNG = FName(TEXT("OnDecisionNG"));
	void UELMenuWidgetBase::OnDecisionNG()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELMenuWidgetBase_OnDecisionNG),NULL);
	}
	static FName NAME_UELMenuWidgetBase_OnMoveRStickLR = FName(TEXT("OnMoveRStickLR"));
	void UELMenuWidgetBase::OnMoveRStickLR(bool IsLeft)
	{
		ELMenuWidgetBase_eventOnMoveRStickLR_Parms Parms;
		Parms.IsLeft=IsLeft ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELMenuWidgetBase_OnMoveRStickLR),&Parms);
	}
	static FName NAME_UELMenuWidgetBase_OnMoveTab = FName(TEXT("OnMoveTab"));
	void UELMenuWidgetBase::OnMoveTab(bool IsLeft)
	{
		ELMenuWidgetBase_eventOnMoveTab_Parms Parms;
		Parms.IsLeft=IsLeft ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELMenuWidgetBase_OnMoveTab),&Parms);
	}
	static FName NAME_UELMenuWidgetBase_OnSkipMoveTab = FName(TEXT("OnSkipMoveTab"));
	void UELMenuWidgetBase::OnSkipMoveTab(int32 NewTabIndex)
	{
		ELMenuWidgetBase_eventOnSkipMoveTab_Parms Parms;
		Parms.NewTabIndex=NewTabIndex;
		ProcessEvent(FindFunctionChecked(NAME_UELMenuWidgetBase_OnSkipMoveTab),&Parms);
	}
	static FName NAME_UELMenuWidgetBase_OpenMenu = FName(TEXT("OpenMenu"));
	void UELMenuWidgetBase::OpenMenu()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELMenuWidgetBase_OpenMenu),NULL);
	}
	static FName NAME_UELMenuWidgetBase_UpdateFromStackPrevious = FName(TEXT("UpdateFromStackPrevious"));
	void UELMenuWidgetBase::UpdateFromStackPrevious()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELMenuWidgetBase_UpdateFromStackPrevious),NULL);
	}
	void UELMenuWidgetBase::StaticRegisterNativesUELMenuWidgetBase()
	{
		UClass* Class = UELMenuWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastCanceledMenu", &UELMenuWidgetBase::execBroadcastCanceledMenu },
			{ "BroadcastFinishedMenu", &UELMenuWidgetBase::execBroadcastFinishedMenu },
			{ "BroadcastFinishedMenuWithResult_Integer", &UELMenuWidgetBase::execBroadcastFinishedMenuWithResult_Integer },
			{ "BroadcastInAnimFinished", &UELMenuWidgetBase::execBroadcastInAnimFinished },
			{ "BroadcastOutAnimFinished", &UELMenuWidgetBase::execBroadcastOutAnimFinished },
			{ "CloseMenu", &UELMenuWidgetBase::execCloseMenu },
			{ "IsDecisionKeyboard", &UELMenuWidgetBase::execIsDecisionKeyboard },
			{ "IsPreparedMenu", &UELMenuWidgetBase::execIsPreparedMenu },
			{ "OpenMenu", &UELMenuWidgetBase::execOpenMenu },
			{ "ResetTabCursor", &UELMenuWidgetBase::execResetTabCursor },
			{ "SetDecisionKeyboard", &UELMenuWidgetBase::execSetDecisionKeyboard },
			{ "SetMenuTop", &UELMenuWidgetBase::execSetMenuTop },
			{ "UpdateFromStackPrevious", &UELMenuWidgetBase::execUpdateFromStackPrevious },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELMenuWidgetBase_BroadcastCanceledMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuWidgetBase_BroadcastCanceledMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuWidgetBase_BroadcastCanceledMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuWidgetBase, nullptr, "BroadcastCanceledMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuWidgetBase_BroadcastCanceledMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuWidgetBase_BroadcastCanceledMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuWidgetBase_BroadcastCanceledMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuWidgetBase_BroadcastCanceledMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuWidgetBase_BroadcastFinishedMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuWidgetBase_BroadcastFinishedMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuWidgetBase_BroadcastFinishedMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuWidgetBase, nullptr, "BroadcastFinishedMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuWidgetBase_BroadcastFinishedMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuWidgetBase_BroadcastFinishedMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuWidgetBase_BroadcastFinishedMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuWidgetBase_BroadcastFinishedMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuWidgetBase_BroadcastFinishedMenuWithResult_Integer_Statics
	{
		struct ELMenuWidgetBase_eventBroadcastFinishedMenuWithResult_Integer_Parms
		{
			int32 _WidgetOperationResult;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__WidgetOperationResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMenuWidgetBase_BroadcastFinishedMenuWithResult_Integer_Statics::NewProp__WidgetOperationResult = { "_WidgetOperationResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuWidgetBase_eventBroadcastFinishedMenuWithResult_Integer_Parms, _WidgetOperationResult), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMenuWidgetBase_BroadcastFinishedMenuWithResult_Integer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuWidgetBase_BroadcastFinishedMenuWithResult_Integer_Statics::NewProp__WidgetOperationResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuWidgetBase_BroadcastFinishedMenuWithResult_Integer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuWidgetBase_BroadcastFinishedMenuWithResult_Integer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuWidgetBase, nullptr, "BroadcastFinishedMenuWithResult_Integer", nullptr, nullptr, sizeof(ELMenuWidgetBase_eventBroadcastFinishedMenuWithResult_Integer_Parms), Z_Construct_UFunction_UELMenuWidgetBase_BroadcastFinishedMenuWithResult_Integer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuWidgetBase_BroadcastFinishedMenuWithResult_Integer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuWidgetBase_BroadcastFinishedMenuWithResult_Integer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuWidgetBase_BroadcastFinishedMenuWithResult_Integer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuWidgetBase_BroadcastFinishedMenuWithResult_Integer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuWidgetBase_BroadcastFinishedMenuWithResult_Integer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuWidgetBase_BroadcastInAnimFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuWidgetBase_BroadcastInAnimFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuWidgetBase_BroadcastInAnimFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuWidgetBase, nullptr, "BroadcastInAnimFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuWidgetBase_BroadcastInAnimFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuWidgetBase_BroadcastInAnimFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuWidgetBase_BroadcastInAnimFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuWidgetBase_BroadcastInAnimFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuWidgetBase_BroadcastOutAnimFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuWidgetBase_BroadcastOutAnimFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuWidgetBase_BroadcastOutAnimFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuWidgetBase, nullptr, "BroadcastOutAnimFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuWidgetBase_BroadcastOutAnimFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuWidgetBase_BroadcastOutAnimFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuWidgetBase_BroadcastOutAnimFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuWidgetBase_BroadcastOutAnimFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuWidgetBase_CloseMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuWidgetBase_CloseMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuWidgetBase_CloseMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuWidgetBase, nullptr, "CloseMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuWidgetBase_CloseMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuWidgetBase_CloseMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuWidgetBase_CloseMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuWidgetBase_CloseMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuWidgetBase_IsDecisionKeyboard_Statics
	{
		struct ELMenuWidgetBase_eventIsDecisionKeyboard_Parms
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
	void Z_Construct_UFunction_UELMenuWidgetBase_IsDecisionKeyboard_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMenuWidgetBase_eventIsDecisionKeyboard_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMenuWidgetBase_IsDecisionKeyboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMenuWidgetBase_eventIsDecisionKeyboard_Parms), &Z_Construct_UFunction_UELMenuWidgetBase_IsDecisionKeyboard_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMenuWidgetBase_IsDecisionKeyboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuWidgetBase_IsDecisionKeyboard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuWidgetBase_IsDecisionKeyboard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuWidgetBase_IsDecisionKeyboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuWidgetBase, nullptr, "IsDecisionKeyboard", nullptr, nullptr, sizeof(ELMenuWidgetBase_eventIsDecisionKeyboard_Parms), Z_Construct_UFunction_UELMenuWidgetBase_IsDecisionKeyboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuWidgetBase_IsDecisionKeyboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuWidgetBase_IsDecisionKeyboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuWidgetBase_IsDecisionKeyboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuWidgetBase_IsDecisionKeyboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuWidgetBase_IsDecisionKeyboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuWidgetBase_IsPreparedMenu_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELMenuWidgetBase_IsPreparedMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMenuWidgetBase_eventIsPreparedMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMenuWidgetBase_IsPreparedMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMenuWidgetBase_eventIsPreparedMenu_Parms), &Z_Construct_UFunction_UELMenuWidgetBase_IsPreparedMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMenuWidgetBase_IsPreparedMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuWidgetBase_IsPreparedMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuWidgetBase_IsPreparedMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuWidgetBase_IsPreparedMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuWidgetBase, nullptr, "IsPreparedMenu", nullptr, nullptr, sizeof(ELMenuWidgetBase_eventIsPreparedMenu_Parms), Z_Construct_UFunction_UELMenuWidgetBase_IsPreparedMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuWidgetBase_IsPreparedMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuWidgetBase_IsPreparedMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuWidgetBase_IsPreparedMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuWidgetBase_IsPreparedMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuWidgetBase_IsPreparedMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuWidgetBase_OnCancel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuWidgetBase_OnCancel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuWidgetBase_OnCancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuWidgetBase, nullptr, "OnCancel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuWidgetBase_OnCancel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuWidgetBase_OnCancel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuWidgetBase_OnCancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuWidgetBase_OnCancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuWidgetBase_OnDecision_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuWidgetBase_OnDecision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuWidgetBase_OnDecision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuWidgetBase, nullptr, "OnDecision", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuWidgetBase_OnDecision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuWidgetBase_OnDecision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuWidgetBase_OnDecision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuWidgetBase_OnDecision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuWidgetBase_OnDecisionNG_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuWidgetBase_OnDecisionNG_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuWidgetBase_OnDecisionNG_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuWidgetBase, nullptr, "OnDecisionNG", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuWidgetBase_OnDecisionNG_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuWidgetBase_OnDecisionNG_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuWidgetBase_OnDecisionNG()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuWidgetBase_OnDecisionNG_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuWidgetBase_OnMoveRStickLR_Statics
	{
		static void NewProp_IsLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELMenuWidgetBase_OnMoveRStickLR_Statics::NewProp_IsLeft_SetBit(void* Obj)
	{
		((ELMenuWidgetBase_eventOnMoveRStickLR_Parms*)Obj)->IsLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMenuWidgetBase_OnMoveRStickLR_Statics::NewProp_IsLeft = { "IsLeft", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMenuWidgetBase_eventOnMoveRStickLR_Parms), &Z_Construct_UFunction_UELMenuWidgetBase_OnMoveRStickLR_Statics::NewProp_IsLeft_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMenuWidgetBase_OnMoveRStickLR_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuWidgetBase_OnMoveRStickLR_Statics::NewProp_IsLeft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuWidgetBase_OnMoveRStickLR_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuWidgetBase_OnMoveRStickLR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuWidgetBase, nullptr, "OnMoveRStickLR", nullptr, nullptr, sizeof(ELMenuWidgetBase_eventOnMoveRStickLR_Parms), Z_Construct_UFunction_UELMenuWidgetBase_OnMoveRStickLR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuWidgetBase_OnMoveRStickLR_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuWidgetBase_OnMoveRStickLR_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuWidgetBase_OnMoveRStickLR_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuWidgetBase_OnMoveRStickLR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuWidgetBase_OnMoveRStickLR_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuWidgetBase_OnMoveTab_Statics
	{
		static void NewProp_IsLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELMenuWidgetBase_OnMoveTab_Statics::NewProp_IsLeft_SetBit(void* Obj)
	{
		((ELMenuWidgetBase_eventOnMoveTab_Parms*)Obj)->IsLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMenuWidgetBase_OnMoveTab_Statics::NewProp_IsLeft = { "IsLeft", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMenuWidgetBase_eventOnMoveTab_Parms), &Z_Construct_UFunction_UELMenuWidgetBase_OnMoveTab_Statics::NewProp_IsLeft_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMenuWidgetBase_OnMoveTab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuWidgetBase_OnMoveTab_Statics::NewProp_IsLeft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuWidgetBase_OnMoveTab_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuWidgetBase_OnMoveTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuWidgetBase, nullptr, "OnMoveTab", nullptr, nullptr, sizeof(ELMenuWidgetBase_eventOnMoveTab_Parms), Z_Construct_UFunction_UELMenuWidgetBase_OnMoveTab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuWidgetBase_OnMoveTab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuWidgetBase_OnMoveTab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuWidgetBase_OnMoveTab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuWidgetBase_OnMoveTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuWidgetBase_OnMoveTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuWidgetBase_OnSkipMoveTab_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewTabIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMenuWidgetBase_OnSkipMoveTab_Statics::NewProp_NewTabIndex = { "NewTabIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuWidgetBase_eventOnSkipMoveTab_Parms, NewTabIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMenuWidgetBase_OnSkipMoveTab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuWidgetBase_OnSkipMoveTab_Statics::NewProp_NewTabIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuWidgetBase_OnSkipMoveTab_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuWidgetBase_OnSkipMoveTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuWidgetBase, nullptr, "OnSkipMoveTab", nullptr, nullptr, sizeof(ELMenuWidgetBase_eventOnSkipMoveTab_Parms), Z_Construct_UFunction_UELMenuWidgetBase_OnSkipMoveTab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuWidgetBase_OnSkipMoveTab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuWidgetBase_OnSkipMoveTab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuWidgetBase_OnSkipMoveTab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuWidgetBase_OnSkipMoveTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuWidgetBase_OnSkipMoveTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuWidgetBase_OpenMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuWidgetBase_OpenMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuWidgetBase_OpenMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuWidgetBase, nullptr, "OpenMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuWidgetBase_OpenMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuWidgetBase_OpenMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuWidgetBase_OpenMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuWidgetBase_OpenMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuWidgetBase_ResetTabCursor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuWidgetBase_ResetTabCursor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuWidgetBase_ResetTabCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuWidgetBase, nullptr, "ResetTabCursor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuWidgetBase_ResetTabCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuWidgetBase_ResetTabCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuWidgetBase_ResetTabCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuWidgetBase_ResetTabCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuWidgetBase_SetDecisionKeyboard_Statics
	{
		struct ELMenuWidgetBase_eventSetDecisionKeyboard_Parms
		{
			bool bFlag;
		};
		static void NewProp_bFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELMenuWidgetBase_SetDecisionKeyboard_Statics::NewProp_bFlag_SetBit(void* Obj)
	{
		((ELMenuWidgetBase_eventSetDecisionKeyboard_Parms*)Obj)->bFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMenuWidgetBase_SetDecisionKeyboard_Statics::NewProp_bFlag = { "bFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMenuWidgetBase_eventSetDecisionKeyboard_Parms), &Z_Construct_UFunction_UELMenuWidgetBase_SetDecisionKeyboard_Statics::NewProp_bFlag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMenuWidgetBase_SetDecisionKeyboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuWidgetBase_SetDecisionKeyboard_Statics::NewProp_bFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuWidgetBase_SetDecisionKeyboard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuWidgetBase_SetDecisionKeyboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuWidgetBase, nullptr, "SetDecisionKeyboard", nullptr, nullptr, sizeof(ELMenuWidgetBase_eventSetDecisionKeyboard_Parms), Z_Construct_UFunction_UELMenuWidgetBase_SetDecisionKeyboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuWidgetBase_SetDecisionKeyboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuWidgetBase_SetDecisionKeyboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuWidgetBase_SetDecisionKeyboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuWidgetBase_SetDecisionKeyboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuWidgetBase_SetDecisionKeyboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuWidgetBase_SetMenuTop_Statics
	{
		struct ELMenuWidgetBase_eventSetMenuTop_Parms
		{
			UUserWidget* MenuTopWidget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuTopWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MenuTopWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuWidgetBase_SetMenuTop_Statics::NewProp_MenuTopWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMenuWidgetBase_SetMenuTop_Statics::NewProp_MenuTopWidget = { "MenuTopWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuWidgetBase_eventSetMenuTop_Parms, MenuTopWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELMenuWidgetBase_SetMenuTop_Statics::NewProp_MenuTopWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuWidgetBase_SetMenuTop_Statics::NewProp_MenuTopWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMenuWidgetBase_SetMenuTop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuWidgetBase_SetMenuTop_Statics::NewProp_MenuTopWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuWidgetBase_SetMenuTop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuWidgetBase_SetMenuTop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuWidgetBase, nullptr, "SetMenuTop", nullptr, nullptr, sizeof(ELMenuWidgetBase_eventSetMenuTop_Parms), Z_Construct_UFunction_UELMenuWidgetBase_SetMenuTop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuWidgetBase_SetMenuTop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuWidgetBase_SetMenuTop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuWidgetBase_SetMenuTop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuWidgetBase_SetMenuTop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuWidgetBase_SetMenuTop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuWidgetBase_UpdateFromStackPrevious_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuWidgetBase_UpdateFromStackPrevious_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuWidgetBase_UpdateFromStackPrevious_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuWidgetBase, nullptr, "UpdateFromStackPrevious", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuWidgetBase_UpdateFromStackPrevious_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuWidgetBase_UpdateFromStackPrevious_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuWidgetBase_UpdateFromStackPrevious()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuWidgetBase_UpdateFromStackPrevious_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELMenuWidgetBase_NoRegister()
	{
		return UELMenuWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELMenuWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInAnimFinished_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInAnimFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnOutAnimFinished_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOutAnimFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFinishedMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinishedMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFinishedMenuWithResult_Integer_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinishedMenuWithResult_Integer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCanceledMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCanceledMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuTop_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MenuTop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TabIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreTabIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PreTabIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TabCursorIndexArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabCursorIndexArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TabCursorIndexArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreTabIndex2P_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PreTabIndex2P;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TabCursorIndexArray2P_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabCursorIndexArray2P_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TabCursorIndexArray2P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastTabIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastTabIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDecisionKeyboard_MetaData[];
#endif
		static void NewProp_bDecisionKeyboard_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDecisionKeyboard;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELMenuWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELOperationalWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELMenuWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELMenuWidgetBase_BroadcastCanceledMenu, "BroadcastCanceledMenu" }, // 2926983719
		{ &Z_Construct_UFunction_UELMenuWidgetBase_BroadcastFinishedMenu, "BroadcastFinishedMenu" }, // 4021417522
		{ &Z_Construct_UFunction_UELMenuWidgetBase_BroadcastFinishedMenuWithResult_Integer, "BroadcastFinishedMenuWithResult_Integer" }, // 2030469332
		{ &Z_Construct_UFunction_UELMenuWidgetBase_BroadcastInAnimFinished, "BroadcastInAnimFinished" }, // 386178935
		{ &Z_Construct_UFunction_UELMenuWidgetBase_BroadcastOutAnimFinished, "BroadcastOutAnimFinished" }, // 4145765502
		{ &Z_Construct_UFunction_UELMenuWidgetBase_CloseMenu, "CloseMenu" }, // 2345652250
		{ &Z_Construct_UFunction_UELMenuWidgetBase_IsDecisionKeyboard, "IsDecisionKeyboard" }, // 2063654024
		{ &Z_Construct_UFunction_UELMenuWidgetBase_IsPreparedMenu, "IsPreparedMenu" }, // 3456985105
		{ &Z_Construct_UFunction_UELMenuWidgetBase_OnCancel, "OnCancel" }, // 547642828
		{ &Z_Construct_UFunction_UELMenuWidgetBase_OnDecision, "OnDecision" }, // 2605962683
		{ &Z_Construct_UFunction_UELMenuWidgetBase_OnDecisionNG, "OnDecisionNG" }, // 706774044
		{ &Z_Construct_UFunction_UELMenuWidgetBase_OnMoveRStickLR, "OnMoveRStickLR" }, // 3449662163
		{ &Z_Construct_UFunction_UELMenuWidgetBase_OnMoveTab, "OnMoveTab" }, // 433934538
		{ &Z_Construct_UFunction_UELMenuWidgetBase_OnSkipMoveTab, "OnSkipMoveTab" }, // 3474787853
		{ &Z_Construct_UFunction_UELMenuWidgetBase_OpenMenu, "OpenMenu" }, // 1622431710
		{ &Z_Construct_UFunction_UELMenuWidgetBase_ResetTabCursor, "ResetTabCursor" }, // 1904779825
		{ &Z_Construct_UFunction_UELMenuWidgetBase_SetDecisionKeyboard, "SetDecisionKeyboard" }, // 1586397634
		{ &Z_Construct_UFunction_UELMenuWidgetBase_SetMenuTop, "SetMenuTop" }, // 2586172297
		{ &Z_Construct_UFunction_UELMenuWidgetBase_UpdateFromStackPrevious, "UpdateFromStackPrevious" }, // 928731202
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMenuWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELMenuWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELMenuWidgetBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_OnInAnimFinished_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMenuWidgetBase" },
		{ "ModuleRelativePath", "Public/ELMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_OnInAnimFinished = { "OnInAnimFinished", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELMenuWidgetBase, OnInAnimFinished), Z_Construct_UDelegateFunction_ABP_200508_MenuWidgetOnInAnimFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_OnInAnimFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_OnInAnimFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_OnOutAnimFinished_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMenuWidgetBase" },
		{ "ModuleRelativePath", "Public/ELMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_OnOutAnimFinished = { "OnOutAnimFinished", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELMenuWidgetBase, OnOutAnimFinished), Z_Construct_UDelegateFunction_ABP_200508_MenuWidgetOnOutAnimFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_OnOutAnimFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_OnOutAnimFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_OnFinishedMenu_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMenuWidgetBase" },
		{ "ModuleRelativePath", "Public/ELMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_OnFinishedMenu = { "OnFinishedMenu", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELMenuWidgetBase, OnFinishedMenu), Z_Construct_UDelegateFunction_ABP_200508_MenuWidgetOnFinishedWithResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_OnFinishedMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_OnFinishedMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_OnFinishedMenuWithResult_Integer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMenuWidgetBase" },
		{ "ModuleRelativePath", "Public/ELMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_OnFinishedMenuWithResult_Integer = { "OnFinishedMenuWithResult_Integer", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELMenuWidgetBase, OnFinishedMenuWithResult_Integer), Z_Construct_UDelegateFunction_ABP_200508_MenuWidgetOnFinishedWithResult_Integer__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_OnFinishedMenuWithResult_Integer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_OnFinishedMenuWithResult_Integer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_OnCanceledMenu_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMenuWidgetBase" },
		{ "ModuleRelativePath", "Public/ELMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_OnCanceledMenu = { "OnCanceledMenu", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELMenuWidgetBase, OnCanceledMenu), Z_Construct_UDelegateFunction_ABP_200508_MenuWidgetOnCanceled__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_OnCanceledMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_OnCanceledMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_MenuTop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMenuWidgetBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_MenuTop = { "MenuTop", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELMenuWidgetBase, MenuTop), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_MenuTop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_MenuTop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_TabIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMenuWidgetBase" },
		{ "ModuleRelativePath", "Public/ELMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_TabIndex = { "TabIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELMenuWidgetBase, TabIndex), METADATA_PARAMS(Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_TabIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_TabIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_PreTabIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMenuWidgetBase" },
		{ "ModuleRelativePath", "Public/ELMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_PreTabIndex = { "PreTabIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELMenuWidgetBase, PreTabIndex), METADATA_PARAMS(Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_PreTabIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_PreTabIndex_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_TabCursorIndexArray_Inner = { "TabCursorIndexArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_TabCursorIndexArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMenuWidgetBase" },
		{ "ModuleRelativePath", "Public/ELMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_TabCursorIndexArray = { "TabCursorIndexArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELMenuWidgetBase, TabCursorIndexArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_TabCursorIndexArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_TabCursorIndexArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_PreTabIndex2P_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMenuWidgetBase" },
		{ "ModuleRelativePath", "Public/ELMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_PreTabIndex2P = { "PreTabIndex2P", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELMenuWidgetBase, PreTabIndex2P), METADATA_PARAMS(Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_PreTabIndex2P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_PreTabIndex2P_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_TabCursorIndexArray2P_Inner = { "TabCursorIndexArray2P", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_TabCursorIndexArray2P_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMenuWidgetBase" },
		{ "ModuleRelativePath", "Public/ELMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_TabCursorIndexArray2P = { "TabCursorIndexArray2P", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELMenuWidgetBase, TabCursorIndexArray2P), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_TabCursorIndexArray2P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_TabCursorIndexArray2P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_LastTabIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMenuWidgetBase" },
		{ "ModuleRelativePath", "Public/ELMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_LastTabIndex = { "LastTabIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELMenuWidgetBase, LastTabIndex), METADATA_PARAMS(Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_LastTabIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_LastTabIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_bDecisionKeyboard_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMenuWidgetBase" },
		{ "ModuleRelativePath", "Public/ELMenuWidgetBase.h" },
	};
#endif
	void Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_bDecisionKeyboard_SetBit(void* Obj)
	{
		((UELMenuWidgetBase*)Obj)->bDecisionKeyboard = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_bDecisionKeyboard = { "bDecisionKeyboard", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELMenuWidgetBase), &Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_bDecisionKeyboard_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_bDecisionKeyboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_bDecisionKeyboard_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELMenuWidgetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_OnInAnimFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_OnOutAnimFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_OnFinishedMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_OnFinishedMenuWithResult_Integer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_OnCanceledMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_MenuTop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_TabIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_PreTabIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_TabCursorIndexArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_TabCursorIndexArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_PreTabIndex2P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_TabCursorIndexArray2P_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_TabCursorIndexArray2P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_LastTabIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMenuWidgetBase_Statics::NewProp_bDecisionKeyboard,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELMenuWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELMenuWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELMenuWidgetBase_Statics::ClassParams = {
		&UELMenuWidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELMenuWidgetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELMenuWidgetBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELMenuWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELMenuWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELMenuWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELMenuWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELMenuWidgetBase, 3776229438);
	template<> ABP_200508_API UClass* StaticClass<UELMenuWidgetBase>()
	{
		return UELMenuWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELMenuWidgetBase(Z_Construct_UClass_UELMenuWidgetBase, &UELMenuWidgetBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELMenuWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELMenuWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
