// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELTutorialManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELTutorialManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELTutorialManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELTutorialManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_TutorialCompleteDelegate__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_TutorialStartWaitState__DelegateSignature();
	ABP_200508_API UClass* Z_Construct_UClass_AELTutorialExecutorBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELTutorialManager::execCancelTutorial)
	{
		P_GET_UBOOL(Z_Param_WithForceCloseDialog);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CancelTutorial(Z_Param_WithForceCloseDialog);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTutorialManager::execCanShowTutorial)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TutorialIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanShowTutorial(Z_Param_TutorialIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTutorialManager::execExecuteManualEndTutorial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteManualEndTutorial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTutorialManager::execIntervalPseudoPushButtonOK)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Interval);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IntervalPseudoPushButtonOK(Z_Param_Interval);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTutorialManager::execIsConfirmedTutorial)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param__tutorialName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsConfirmedTutorial(Z_Param__tutorialName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTutorialManager::execIsNextTutorial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNextTutorial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTutorialManager::execIsRunningTutorial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRunningTutorial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTutorialManager::execOnCompleteTutorial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCompleteTutorial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTutorialManager::execPseudoChangePage)
	{
		P_GET_UBOOL(Z_Param_isRight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PseudoChangePage(Z_Param_isRight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTutorialManager::execPseudoPushButtonOK)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PseudoPushButtonOK();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTutorialManager::execRequestStartTutorial)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param__tutorialName);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnCompleteDelegate);
		P_GET_UBOOL(Z_Param__displayDecideBtn);
		P_GET_UBOOL(Z_Param__displayBottomHelp);
		P_GET_UBOOL(Z_Param__checkSaveData);
		P_GET_UBOOL(Z_Param__loadingAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestStartTutorial(Z_Param__tutorialName,FTutorialCompleteDelegate(Z_Param_OnCompleteDelegate),Z_Param__displayDecideBtn,Z_Param__displayBottomHelp,Z_Param__checkSaveData,Z_Param__loadingAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTutorialManager::execRequestStartTutorialByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TutorialIndex);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnCompleteDelegate);
		P_GET_UBOOL(Z_Param__displayDecideBtn);
		P_GET_UBOOL(Z_Param__displayBottomHelp);
		P_GET_UBOOL(Z_Param__checkSaveData);
		P_GET_UBOOL(Z_Param__loadingAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestStartTutorialByIndex(Z_Param_TutorialIndex,FTutorialCompleteDelegate(Z_Param_OnCompleteDelegate),Z_Param__displayDecideBtn,Z_Param__displayBottomHelp,Z_Param__checkSaveData,Z_Param__loadingAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTutorialManager::execSetDisableAutoEndTutorial)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnStartWaotStateDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisableAutoEndTutorial(FTutorialStartWaitState(Z_Param_OnStartWaotStateDelegate));
		P_NATIVE_END;
	}
	void UELTutorialManager::StaticRegisterNativesUELTutorialManager()
	{
		UClass* Class = UELTutorialManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelTutorial", &UELTutorialManager::execCancelTutorial },
			{ "CanShowTutorial", &UELTutorialManager::execCanShowTutorial },
			{ "ExecuteManualEndTutorial", &UELTutorialManager::execExecuteManualEndTutorial },
			{ "IntervalPseudoPushButtonOK", &UELTutorialManager::execIntervalPseudoPushButtonOK },
			{ "IsConfirmedTutorial", &UELTutorialManager::execIsConfirmedTutorial },
			{ "IsNextTutorial", &UELTutorialManager::execIsNextTutorial },
			{ "IsRunningTutorial", &UELTutorialManager::execIsRunningTutorial },
			{ "OnCompleteTutorial", &UELTutorialManager::execOnCompleteTutorial },
			{ "PseudoChangePage", &UELTutorialManager::execPseudoChangePage },
			{ "PseudoPushButtonOK", &UELTutorialManager::execPseudoPushButtonOK },
			{ "RequestStartTutorial", &UELTutorialManager::execRequestStartTutorial },
			{ "RequestStartTutorialByIndex", &UELTutorialManager::execRequestStartTutorialByIndex },
			{ "SetDisableAutoEndTutorial", &UELTutorialManager::execSetDisableAutoEndTutorial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELTutorialManager_CancelTutorial_Statics
	{
		struct ELTutorialManager_eventCancelTutorial_Parms
		{
			bool WithForceCloseDialog;
			bool ReturnValue;
		};
		static void NewProp_WithForceCloseDialog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WithForceCloseDialog;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELTutorialManager_CancelTutorial_Statics::NewProp_WithForceCloseDialog_SetBit(void* Obj)
	{
		((ELTutorialManager_eventCancelTutorial_Parms*)Obj)->WithForceCloseDialog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTutorialManager_CancelTutorial_Statics::NewProp_WithForceCloseDialog = { "WithForceCloseDialog", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTutorialManager_eventCancelTutorial_Parms), &Z_Construct_UFunction_UELTutorialManager_CancelTutorial_Statics::NewProp_WithForceCloseDialog_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELTutorialManager_CancelTutorial_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELTutorialManager_eventCancelTutorial_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTutorialManager_CancelTutorial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTutorialManager_eventCancelTutorial_Parms), &Z_Construct_UFunction_UELTutorialManager_CancelTutorial_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTutorialManager_CancelTutorial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTutorialManager_CancelTutorial_Statics::NewProp_WithForceCloseDialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTutorialManager_CancelTutorial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTutorialManager_CancelTutorial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTutorialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTutorialManager_CancelTutorial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTutorialManager, nullptr, "CancelTutorial", nullptr, nullptr, sizeof(ELTutorialManager_eventCancelTutorial_Parms), Z_Construct_UFunction_UELTutorialManager_CancelTutorial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTutorialManager_CancelTutorial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTutorialManager_CancelTutorial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTutorialManager_CancelTutorial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTutorialManager_CancelTutorial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTutorialManager_CancelTutorial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTutorialManager_CanShowTutorial_Statics
	{
		struct ELTutorialManager_eventCanShowTutorial_Parms
		{
			int32 TutorialIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TutorialIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELTutorialManager_CanShowTutorial_Statics::NewProp_TutorialIndex = { "TutorialIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTutorialManager_eventCanShowTutorial_Parms, TutorialIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELTutorialManager_CanShowTutorial_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELTutorialManager_eventCanShowTutorial_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTutorialManager_CanShowTutorial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTutorialManager_eventCanShowTutorial_Parms), &Z_Construct_UFunction_UELTutorialManager_CanShowTutorial_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTutorialManager_CanShowTutorial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTutorialManager_CanShowTutorial_Statics::NewProp_TutorialIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTutorialManager_CanShowTutorial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTutorialManager_CanShowTutorial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTutorialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTutorialManager_CanShowTutorial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTutorialManager, nullptr, "CanShowTutorial", nullptr, nullptr, sizeof(ELTutorialManager_eventCanShowTutorial_Parms), Z_Construct_UFunction_UELTutorialManager_CanShowTutorial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTutorialManager_CanShowTutorial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTutorialManager_CanShowTutorial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTutorialManager_CanShowTutorial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTutorialManager_CanShowTutorial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTutorialManager_CanShowTutorial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTutorialManager_ExecuteManualEndTutorial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTutorialManager_ExecuteManualEndTutorial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTutorialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTutorialManager_ExecuteManualEndTutorial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTutorialManager, nullptr, "ExecuteManualEndTutorial", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTutorialManager_ExecuteManualEndTutorial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTutorialManager_ExecuteManualEndTutorial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTutorialManager_ExecuteManualEndTutorial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTutorialManager_ExecuteManualEndTutorial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTutorialManager_IntervalPseudoPushButtonOK_Statics
	{
		struct ELTutorialManager_eventIntervalPseudoPushButtonOK_Parms
		{
			float Interval;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Interval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELTutorialManager_IntervalPseudoPushButtonOK_Statics::NewProp_Interval = { "Interval", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTutorialManager_eventIntervalPseudoPushButtonOK_Parms, Interval), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTutorialManager_IntervalPseudoPushButtonOK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTutorialManager_IntervalPseudoPushButtonOK_Statics::NewProp_Interval,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTutorialManager_IntervalPseudoPushButtonOK_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTutorialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTutorialManager_IntervalPseudoPushButtonOK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTutorialManager, nullptr, "IntervalPseudoPushButtonOK", nullptr, nullptr, sizeof(ELTutorialManager_eventIntervalPseudoPushButtonOK_Parms), Z_Construct_UFunction_UELTutorialManager_IntervalPseudoPushButtonOK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTutorialManager_IntervalPseudoPushButtonOK_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTutorialManager_IntervalPseudoPushButtonOK_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTutorialManager_IntervalPseudoPushButtonOK_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTutorialManager_IntervalPseudoPushButtonOK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTutorialManager_IntervalPseudoPushButtonOK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTutorialManager_IsConfirmedTutorial_Statics
	{
		struct ELTutorialManager_eventIsConfirmedTutorial_Parms
		{
			FName _tutorialName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__tutorialName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELTutorialManager_IsConfirmedTutorial_Statics::NewProp__tutorialName = { "_tutorialName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTutorialManager_eventIsConfirmedTutorial_Parms, _tutorialName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELTutorialManager_IsConfirmedTutorial_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELTutorialManager_eventIsConfirmedTutorial_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTutorialManager_IsConfirmedTutorial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTutorialManager_eventIsConfirmedTutorial_Parms), &Z_Construct_UFunction_UELTutorialManager_IsConfirmedTutorial_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTutorialManager_IsConfirmedTutorial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTutorialManager_IsConfirmedTutorial_Statics::NewProp__tutorialName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTutorialManager_IsConfirmedTutorial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTutorialManager_IsConfirmedTutorial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTutorialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTutorialManager_IsConfirmedTutorial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTutorialManager, nullptr, "IsConfirmedTutorial", nullptr, nullptr, sizeof(ELTutorialManager_eventIsConfirmedTutorial_Parms), Z_Construct_UFunction_UELTutorialManager_IsConfirmedTutorial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTutorialManager_IsConfirmedTutorial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTutorialManager_IsConfirmedTutorial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTutorialManager_IsConfirmedTutorial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTutorialManager_IsConfirmedTutorial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTutorialManager_IsConfirmedTutorial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTutorialManager_IsNextTutorial_Statics
	{
		struct ELTutorialManager_eventIsNextTutorial_Parms
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
	void Z_Construct_UFunction_UELTutorialManager_IsNextTutorial_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELTutorialManager_eventIsNextTutorial_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTutorialManager_IsNextTutorial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTutorialManager_eventIsNextTutorial_Parms), &Z_Construct_UFunction_UELTutorialManager_IsNextTutorial_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTutorialManager_IsNextTutorial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTutorialManager_IsNextTutorial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTutorialManager_IsNextTutorial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTutorialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTutorialManager_IsNextTutorial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTutorialManager, nullptr, "IsNextTutorial", nullptr, nullptr, sizeof(ELTutorialManager_eventIsNextTutorial_Parms), Z_Construct_UFunction_UELTutorialManager_IsNextTutorial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTutorialManager_IsNextTutorial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTutorialManager_IsNextTutorial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTutorialManager_IsNextTutorial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTutorialManager_IsNextTutorial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTutorialManager_IsNextTutorial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTutorialManager_IsRunningTutorial_Statics
	{
		struct ELTutorialManager_eventIsRunningTutorial_Parms
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
	void Z_Construct_UFunction_UELTutorialManager_IsRunningTutorial_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELTutorialManager_eventIsRunningTutorial_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTutorialManager_IsRunningTutorial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTutorialManager_eventIsRunningTutorial_Parms), &Z_Construct_UFunction_UELTutorialManager_IsRunningTutorial_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTutorialManager_IsRunningTutorial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTutorialManager_IsRunningTutorial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTutorialManager_IsRunningTutorial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTutorialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTutorialManager_IsRunningTutorial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTutorialManager, nullptr, "IsRunningTutorial", nullptr, nullptr, sizeof(ELTutorialManager_eventIsRunningTutorial_Parms), Z_Construct_UFunction_UELTutorialManager_IsRunningTutorial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTutorialManager_IsRunningTutorial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTutorialManager_IsRunningTutorial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTutorialManager_IsRunningTutorial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTutorialManager_IsRunningTutorial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTutorialManager_IsRunningTutorial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTutorialManager_OnCompleteTutorial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTutorialManager_OnCompleteTutorial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTutorialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTutorialManager_OnCompleteTutorial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTutorialManager, nullptr, "OnCompleteTutorial", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTutorialManager_OnCompleteTutorial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTutorialManager_OnCompleteTutorial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTutorialManager_OnCompleteTutorial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTutorialManager_OnCompleteTutorial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTutorialManager_PseudoChangePage_Statics
	{
		struct ELTutorialManager_eventPseudoChangePage_Parms
		{
			bool isRight;
		};
		static void NewProp_isRight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isRight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELTutorialManager_PseudoChangePage_Statics::NewProp_isRight_SetBit(void* Obj)
	{
		((ELTutorialManager_eventPseudoChangePage_Parms*)Obj)->isRight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTutorialManager_PseudoChangePage_Statics::NewProp_isRight = { "isRight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTutorialManager_eventPseudoChangePage_Parms), &Z_Construct_UFunction_UELTutorialManager_PseudoChangePage_Statics::NewProp_isRight_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTutorialManager_PseudoChangePage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTutorialManager_PseudoChangePage_Statics::NewProp_isRight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTutorialManager_PseudoChangePage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTutorialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTutorialManager_PseudoChangePage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTutorialManager, nullptr, "PseudoChangePage", nullptr, nullptr, sizeof(ELTutorialManager_eventPseudoChangePage_Parms), Z_Construct_UFunction_UELTutorialManager_PseudoChangePage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTutorialManager_PseudoChangePage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTutorialManager_PseudoChangePage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTutorialManager_PseudoChangePage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTutorialManager_PseudoChangePage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTutorialManager_PseudoChangePage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTutorialManager_PseudoPushButtonOK_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTutorialManager_PseudoPushButtonOK_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTutorialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTutorialManager_PseudoPushButtonOK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTutorialManager, nullptr, "PseudoPushButtonOK", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTutorialManager_PseudoPushButtonOK_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTutorialManager_PseudoPushButtonOK_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTutorialManager_PseudoPushButtonOK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTutorialManager_PseudoPushButtonOK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTutorialManager_RequestStartTutorial_Statics
	{
		struct ELTutorialManager_eventRequestStartTutorial_Parms
		{
			FName _tutorialName;
			FScriptDelegate OnCompleteDelegate;
			bool _displayDecideBtn;
			bool _displayBottomHelp;
			bool _checkSaveData;
			bool _loadingAsset;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__tutorialName;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnCompleteDelegate;
		static void NewProp__displayDecideBtn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__displayDecideBtn;
		static void NewProp__displayBottomHelp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__displayBottomHelp;
		static void NewProp__checkSaveData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__checkSaveData;
		static void NewProp__loadingAsset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__loadingAsset;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELTutorialManager_RequestStartTutorial_Statics::NewProp__tutorialName = { "_tutorialName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTutorialManager_eventRequestStartTutorial_Parms, _tutorialName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELTutorialManager_RequestStartTutorial_Statics::NewProp_OnCompleteDelegate = { "OnCompleteDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTutorialManager_eventRequestStartTutorial_Parms, OnCompleteDelegate), Z_Construct_UDelegateFunction_ABP_200508_TutorialCompleteDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELTutorialManager_RequestStartTutorial_Statics::NewProp__displayDecideBtn_SetBit(void* Obj)
	{
		((ELTutorialManager_eventRequestStartTutorial_Parms*)Obj)->_displayDecideBtn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTutorialManager_RequestStartTutorial_Statics::NewProp__displayDecideBtn = { "_displayDecideBtn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTutorialManager_eventRequestStartTutorial_Parms), &Z_Construct_UFunction_UELTutorialManager_RequestStartTutorial_Statics::NewProp__displayDecideBtn_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELTutorialManager_RequestStartTutorial_Statics::NewProp__displayBottomHelp_SetBit(void* Obj)
	{
		((ELTutorialManager_eventRequestStartTutorial_Parms*)Obj)->_displayBottomHelp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTutorialManager_RequestStartTutorial_Statics::NewProp__displayBottomHelp = { "_displayBottomHelp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTutorialManager_eventRequestStartTutorial_Parms), &Z_Construct_UFunction_UELTutorialManager_RequestStartTutorial_Statics::NewProp__displayBottomHelp_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELTutorialManager_RequestStartTutorial_Statics::NewProp__checkSaveData_SetBit(void* Obj)
	{
		((ELTutorialManager_eventRequestStartTutorial_Parms*)Obj)->_checkSaveData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTutorialManager_RequestStartTutorial_Statics::NewProp__checkSaveData = { "_checkSaveData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTutorialManager_eventRequestStartTutorial_Parms), &Z_Construct_UFunction_UELTutorialManager_RequestStartTutorial_Statics::NewProp__checkSaveData_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELTutorialManager_RequestStartTutorial_Statics::NewProp__loadingAsset_SetBit(void* Obj)
	{
		((ELTutorialManager_eventRequestStartTutorial_Parms*)Obj)->_loadingAsset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTutorialManager_RequestStartTutorial_Statics::NewProp__loadingAsset = { "_loadingAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTutorialManager_eventRequestStartTutorial_Parms), &Z_Construct_UFunction_UELTutorialManager_RequestStartTutorial_Statics::NewProp__loadingAsset_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELTutorialManager_RequestStartTutorial_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELTutorialManager_eventRequestStartTutorial_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTutorialManager_RequestStartTutorial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTutorialManager_eventRequestStartTutorial_Parms), &Z_Construct_UFunction_UELTutorialManager_RequestStartTutorial_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTutorialManager_RequestStartTutorial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTutorialManager_RequestStartTutorial_Statics::NewProp__tutorialName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTutorialManager_RequestStartTutorial_Statics::NewProp_OnCompleteDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTutorialManager_RequestStartTutorial_Statics::NewProp__displayDecideBtn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTutorialManager_RequestStartTutorial_Statics::NewProp__displayBottomHelp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTutorialManager_RequestStartTutorial_Statics::NewProp__checkSaveData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTutorialManager_RequestStartTutorial_Statics::NewProp__loadingAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTutorialManager_RequestStartTutorial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTutorialManager_RequestStartTutorial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTutorialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTutorialManager_RequestStartTutorial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTutorialManager, nullptr, "RequestStartTutorial", nullptr, nullptr, sizeof(ELTutorialManager_eventRequestStartTutorial_Parms), Z_Construct_UFunction_UELTutorialManager_RequestStartTutorial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTutorialManager_RequestStartTutorial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTutorialManager_RequestStartTutorial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTutorialManager_RequestStartTutorial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTutorialManager_RequestStartTutorial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTutorialManager_RequestStartTutorial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTutorialManager_RequestStartTutorialByIndex_Statics
	{
		struct ELTutorialManager_eventRequestStartTutorialByIndex_Parms
		{
			int32 TutorialIndex;
			FScriptDelegate OnCompleteDelegate;
			bool _displayDecideBtn;
			bool _displayBottomHelp;
			bool _checkSaveData;
			bool _loadingAsset;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TutorialIndex;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnCompleteDelegate;
		static void NewProp__displayDecideBtn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__displayDecideBtn;
		static void NewProp__displayBottomHelp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__displayBottomHelp;
		static void NewProp__checkSaveData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__checkSaveData;
		static void NewProp__loadingAsset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__loadingAsset;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELTutorialManager_RequestStartTutorialByIndex_Statics::NewProp_TutorialIndex = { "TutorialIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTutorialManager_eventRequestStartTutorialByIndex_Parms, TutorialIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELTutorialManager_RequestStartTutorialByIndex_Statics::NewProp_OnCompleteDelegate = { "OnCompleteDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTutorialManager_eventRequestStartTutorialByIndex_Parms, OnCompleteDelegate), Z_Construct_UDelegateFunction_ABP_200508_TutorialCompleteDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELTutorialManager_RequestStartTutorialByIndex_Statics::NewProp__displayDecideBtn_SetBit(void* Obj)
	{
		((ELTutorialManager_eventRequestStartTutorialByIndex_Parms*)Obj)->_displayDecideBtn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTutorialManager_RequestStartTutorialByIndex_Statics::NewProp__displayDecideBtn = { "_displayDecideBtn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTutorialManager_eventRequestStartTutorialByIndex_Parms), &Z_Construct_UFunction_UELTutorialManager_RequestStartTutorialByIndex_Statics::NewProp__displayDecideBtn_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELTutorialManager_RequestStartTutorialByIndex_Statics::NewProp__displayBottomHelp_SetBit(void* Obj)
	{
		((ELTutorialManager_eventRequestStartTutorialByIndex_Parms*)Obj)->_displayBottomHelp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTutorialManager_RequestStartTutorialByIndex_Statics::NewProp__displayBottomHelp = { "_displayBottomHelp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTutorialManager_eventRequestStartTutorialByIndex_Parms), &Z_Construct_UFunction_UELTutorialManager_RequestStartTutorialByIndex_Statics::NewProp__displayBottomHelp_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELTutorialManager_RequestStartTutorialByIndex_Statics::NewProp__checkSaveData_SetBit(void* Obj)
	{
		((ELTutorialManager_eventRequestStartTutorialByIndex_Parms*)Obj)->_checkSaveData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTutorialManager_RequestStartTutorialByIndex_Statics::NewProp__checkSaveData = { "_checkSaveData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTutorialManager_eventRequestStartTutorialByIndex_Parms), &Z_Construct_UFunction_UELTutorialManager_RequestStartTutorialByIndex_Statics::NewProp__checkSaveData_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELTutorialManager_RequestStartTutorialByIndex_Statics::NewProp__loadingAsset_SetBit(void* Obj)
	{
		((ELTutorialManager_eventRequestStartTutorialByIndex_Parms*)Obj)->_loadingAsset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTutorialManager_RequestStartTutorialByIndex_Statics::NewProp__loadingAsset = { "_loadingAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTutorialManager_eventRequestStartTutorialByIndex_Parms), &Z_Construct_UFunction_UELTutorialManager_RequestStartTutorialByIndex_Statics::NewProp__loadingAsset_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELTutorialManager_RequestStartTutorialByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELTutorialManager_eventRequestStartTutorialByIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTutorialManager_RequestStartTutorialByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTutorialManager_eventRequestStartTutorialByIndex_Parms), &Z_Construct_UFunction_UELTutorialManager_RequestStartTutorialByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTutorialManager_RequestStartTutorialByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTutorialManager_RequestStartTutorialByIndex_Statics::NewProp_TutorialIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTutorialManager_RequestStartTutorialByIndex_Statics::NewProp_OnCompleteDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTutorialManager_RequestStartTutorialByIndex_Statics::NewProp__displayDecideBtn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTutorialManager_RequestStartTutorialByIndex_Statics::NewProp__displayBottomHelp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTutorialManager_RequestStartTutorialByIndex_Statics::NewProp__checkSaveData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTutorialManager_RequestStartTutorialByIndex_Statics::NewProp__loadingAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTutorialManager_RequestStartTutorialByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTutorialManager_RequestStartTutorialByIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTutorialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTutorialManager_RequestStartTutorialByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTutorialManager, nullptr, "RequestStartTutorialByIndex", nullptr, nullptr, sizeof(ELTutorialManager_eventRequestStartTutorialByIndex_Parms), Z_Construct_UFunction_UELTutorialManager_RequestStartTutorialByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTutorialManager_RequestStartTutorialByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTutorialManager_RequestStartTutorialByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTutorialManager_RequestStartTutorialByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTutorialManager_RequestStartTutorialByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTutorialManager_RequestStartTutorialByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTutorialManager_SetDisableAutoEndTutorial_Statics
	{
		struct ELTutorialManager_eventSetDisableAutoEndTutorial_Parms
		{
			FScriptDelegate OnStartWaotStateDelegate;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnStartWaotStateDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELTutorialManager_SetDisableAutoEndTutorial_Statics::NewProp_OnStartWaotStateDelegate = { "OnStartWaotStateDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTutorialManager_eventSetDisableAutoEndTutorial_Parms, OnStartWaotStateDelegate), Z_Construct_UDelegateFunction_ABP_200508_TutorialStartWaitState__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTutorialManager_SetDisableAutoEndTutorial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTutorialManager_SetDisableAutoEndTutorial_Statics::NewProp_OnStartWaotStateDelegate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTutorialManager_SetDisableAutoEndTutorial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTutorialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTutorialManager_SetDisableAutoEndTutorial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTutorialManager, nullptr, "SetDisableAutoEndTutorial", nullptr, nullptr, sizeof(ELTutorialManager_eventSetDisableAutoEndTutorial_Parms), Z_Construct_UFunction_UELTutorialManager_SetDisableAutoEndTutorial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTutorialManager_SetDisableAutoEndTutorial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTutorialManager_SetDisableAutoEndTutorial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTutorialManager_SetDisableAutoEndTutorial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTutorialManager_SetDisableAutoEndTutorial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTutorialManager_SetDisableAutoEndTutorial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELTutorialManager_NoRegister()
	{
		return UELTutorialManager::StaticClass();
	}
	struct Z_Construct_UClass_UELTutorialManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompleteDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_CompleteDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pTutorialExecuteActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pTutorialExecuteActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELTutorialManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELTutorialManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELTutorialManager_CancelTutorial, "CancelTutorial" }, // 855902720
		{ &Z_Construct_UFunction_UELTutorialManager_CanShowTutorial, "CanShowTutorial" }, // 3332936542
		{ &Z_Construct_UFunction_UELTutorialManager_ExecuteManualEndTutorial, "ExecuteManualEndTutorial" }, // 1697767186
		{ &Z_Construct_UFunction_UELTutorialManager_IntervalPseudoPushButtonOK, "IntervalPseudoPushButtonOK" }, // 3576946480
		{ &Z_Construct_UFunction_UELTutorialManager_IsConfirmedTutorial, "IsConfirmedTutorial" }, // 1498861282
		{ &Z_Construct_UFunction_UELTutorialManager_IsNextTutorial, "IsNextTutorial" }, // 1470390042
		{ &Z_Construct_UFunction_UELTutorialManager_IsRunningTutorial, "IsRunningTutorial" }, // 3952171353
		{ &Z_Construct_UFunction_UELTutorialManager_OnCompleteTutorial, "OnCompleteTutorial" }, // 4181113129
		{ &Z_Construct_UFunction_UELTutorialManager_PseudoChangePage, "PseudoChangePage" }, // 4170609298
		{ &Z_Construct_UFunction_UELTutorialManager_PseudoPushButtonOK, "PseudoPushButtonOK" }, // 2618178011
		{ &Z_Construct_UFunction_UELTutorialManager_RequestStartTutorial, "RequestStartTutorial" }, // 1626415351
		{ &Z_Construct_UFunction_UELTutorialManager_RequestStartTutorialByIndex, "RequestStartTutorialByIndex" }, // 1952779156
		{ &Z_Construct_UFunction_UELTutorialManager_SetDisableAutoEndTutorial, "SetDisableAutoEndTutorial" }, // 1023756934
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELTutorialManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELTutorialManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELTutorialManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELTutorialManager_Statics::NewProp_CompleteDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELTutorialManager" },
		{ "ModuleRelativePath", "Public/ELTutorialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UELTutorialManager_Statics::NewProp_CompleteDelegate = { "CompleteDelegate", nullptr, (EPropertyFlags)0x0040000000080005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELTutorialManager, CompleteDelegate), Z_Construct_UDelegateFunction_ABP_200508_TutorialCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELTutorialManager_Statics::NewProp_CompleteDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELTutorialManager_Statics::NewProp_CompleteDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELTutorialManager_Statics::NewProp_m_pTutorialExecuteActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELTutorialManager" },
		{ "ModuleRelativePath", "Public/ELTutorialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELTutorialManager_Statics::NewProp_m_pTutorialExecuteActor = { "m_pTutorialExecuteActor", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELTutorialManager, m_pTutorialExecuteActor), Z_Construct_UClass_AELTutorialExecutorBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELTutorialManager_Statics::NewProp_m_pTutorialExecuteActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELTutorialManager_Statics::NewProp_m_pTutorialExecuteActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELTutorialManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELTutorialManager_Statics::NewProp_CompleteDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELTutorialManager_Statics::NewProp_m_pTutorialExecuteActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELTutorialManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELTutorialManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELTutorialManager_Statics::ClassParams = {
		&UELTutorialManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELTutorialManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELTutorialManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELTutorialManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELTutorialManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELTutorialManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELTutorialManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELTutorialManager, 1843812021);
	template<> ABP_200508_API UClass* StaticClass<UELTutorialManager>()
	{
		return UELTutorialManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELTutorialManager(Z_Construct_UClass_UELTutorialManager, &UELTutorialManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELTutorialManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELTutorialManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
