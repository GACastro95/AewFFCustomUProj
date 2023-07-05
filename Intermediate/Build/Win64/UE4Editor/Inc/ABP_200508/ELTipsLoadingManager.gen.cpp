// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELTipsLoadingManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELTipsLoadingManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELTipsLoadingManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELTipsLoadingManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ETipsLoadingCategory();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_TipsLoadingCompleteDelegate__DelegateSignature();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FTipsLoadingResourceInfo();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Ref();
	ABP_200508_API UClass* Z_Construct_UClass_AELTipsLoadingExecutorBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELTipsLoadingManager::execClearOverrideNextLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearOverrideNextLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTipsLoadingManager::execDebug_StartScreen)
	{
		P_GET_ENUM(ETipsLoadingCategory,Z_Param__displayCategory);
		P_GET_PROPERTY(FIntProperty,Z_Param__selectTipsIndex);
		P_GET_PROPERTY(FDelegateProperty,Z_Param__completeDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Debug_StartScreen(ETipsLoadingCategory(Z_Param__displayCategory),Z_Param__selectTipsIndex,FTipsLoadingCompleteDelegate(Z_Param__completeDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTipsLoadingManager::execEndScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndScreen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTipsLoadingManager::execGetResourceInfo)
	{
		P_GET_ENUM(ETipsLoadingCategory,Z_Param__displayCategory);
		P_GET_PROPERTY(FIntProperty,Z_Param__targetIndex);
		P_GET_STRUCT_REF(FTipsLoadingResourceInfo,Z_Param_Out__outResourceInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetResourceInfo(ETipsLoadingCategory(Z_Param__displayCategory),Z_Param__targetIndex,Z_Param_Out__outResourceInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTipsLoadingManager::execOnCompleteLoading)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCompleteLoading();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTipsLoadingManager::execSetOverrideNextLevel)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out__nextLevel);
		P_GET_PROPERTY(FStrProperty,Z_Param__optionString);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOverrideNextLevel(Z_Param_Out__nextLevel,Z_Param__optionString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTipsLoadingManager::execStartScreen)
	{
		P_GET_ENUM(ETipsLoadingCategory,Z_Param__displayCategory);
		P_GET_PROPERTY(FDelegateProperty,Z_Param__completeDelegate);
		P_GET_UBOOL(Z_Param__isFadeInStart);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartScreen(ETipsLoadingCategory(Z_Param__displayCategory),FTipsLoadingCompleteDelegate(Z_Param__completeDelegate),Z_Param__isFadeInStart);
		P_NATIVE_END;
	}
	void UELTipsLoadingManager::StaticRegisterNativesUELTipsLoadingManager()
	{
		UClass* Class = UELTipsLoadingManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearOverrideNextLevel", &UELTipsLoadingManager::execClearOverrideNextLevel },
			{ "Debug_StartScreen", &UELTipsLoadingManager::execDebug_StartScreen },
			{ "EndScreen", &UELTipsLoadingManager::execEndScreen },
			{ "GetResourceInfo", &UELTipsLoadingManager::execGetResourceInfo },
			{ "OnCompleteLoading", &UELTipsLoadingManager::execOnCompleteLoading },
			{ "SetOverrideNextLevel", &UELTipsLoadingManager::execSetOverrideNextLevel },
			{ "StartScreen", &UELTipsLoadingManager::execStartScreen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELTipsLoadingManager_ClearOverrideNextLevel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTipsLoadingManager_ClearOverrideNextLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTipsLoadingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTipsLoadingManager_ClearOverrideNextLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTipsLoadingManager, nullptr, "ClearOverrideNextLevel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTipsLoadingManager_ClearOverrideNextLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTipsLoadingManager_ClearOverrideNextLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTipsLoadingManager_ClearOverrideNextLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTipsLoadingManager_ClearOverrideNextLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTipsLoadingManager_Debug_StartScreen_Statics
	{
		struct ELTipsLoadingManager_eventDebug_StartScreen_Parms
		{
			ETipsLoadingCategory _displayCategory;
			int32 _selectTipsIndex;
			FScriptDelegate _completeDelegate;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__displayCategory_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__displayCategory;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__selectTipsIndex;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp__completeDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTipsLoadingManager_Debug_StartScreen_Statics::NewProp__displayCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTipsLoadingManager_Debug_StartScreen_Statics::NewProp__displayCategory = { "_displayCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTipsLoadingManager_eventDebug_StartScreen_Parms, _displayCategory), Z_Construct_UEnum_ELITE_Game_ETipsLoadingCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELTipsLoadingManager_Debug_StartScreen_Statics::NewProp__selectTipsIndex = { "_selectTipsIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTipsLoadingManager_eventDebug_StartScreen_Parms, _selectTipsIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELTipsLoadingManager_Debug_StartScreen_Statics::NewProp__completeDelegate = { "_completeDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTipsLoadingManager_eventDebug_StartScreen_Parms, _completeDelegate), Z_Construct_UDelegateFunction_ABP_200508_TipsLoadingCompleteDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELTipsLoadingManager_Debug_StartScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELTipsLoadingManager_eventDebug_StartScreen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTipsLoadingManager_Debug_StartScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTipsLoadingManager_eventDebug_StartScreen_Parms), &Z_Construct_UFunction_UELTipsLoadingManager_Debug_StartScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTipsLoadingManager_Debug_StartScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTipsLoadingManager_Debug_StartScreen_Statics::NewProp__displayCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTipsLoadingManager_Debug_StartScreen_Statics::NewProp__displayCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTipsLoadingManager_Debug_StartScreen_Statics::NewProp__selectTipsIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTipsLoadingManager_Debug_StartScreen_Statics::NewProp__completeDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTipsLoadingManager_Debug_StartScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTipsLoadingManager_Debug_StartScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTipsLoadingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTipsLoadingManager_Debug_StartScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTipsLoadingManager, nullptr, "Debug_StartScreen", nullptr, nullptr, sizeof(ELTipsLoadingManager_eventDebug_StartScreen_Parms), Z_Construct_UFunction_UELTipsLoadingManager_Debug_StartScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTipsLoadingManager_Debug_StartScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTipsLoadingManager_Debug_StartScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTipsLoadingManager_Debug_StartScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTipsLoadingManager_Debug_StartScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTipsLoadingManager_Debug_StartScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTipsLoadingManager_EndScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTipsLoadingManager_EndScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTipsLoadingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTipsLoadingManager_EndScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTipsLoadingManager, nullptr, "EndScreen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTipsLoadingManager_EndScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTipsLoadingManager_EndScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTipsLoadingManager_EndScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTipsLoadingManager_EndScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTipsLoadingManager_GetResourceInfo_Statics
	{
		struct ELTipsLoadingManager_eventGetResourceInfo_Parms
		{
			ETipsLoadingCategory _displayCategory;
			int32 _targetIndex;
			FTipsLoadingResourceInfo _outResourceInfo;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__displayCategory_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__displayCategory;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outResourceInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTipsLoadingManager_GetResourceInfo_Statics::NewProp__displayCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTipsLoadingManager_GetResourceInfo_Statics::NewProp__displayCategory = { "_displayCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTipsLoadingManager_eventGetResourceInfo_Parms, _displayCategory), Z_Construct_UEnum_ELITE_Game_ETipsLoadingCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELTipsLoadingManager_GetResourceInfo_Statics::NewProp__targetIndex = { "_targetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTipsLoadingManager_eventGetResourceInfo_Parms, _targetIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELTipsLoadingManager_GetResourceInfo_Statics::NewProp__outResourceInfo = { "_outResourceInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTipsLoadingManager_eventGetResourceInfo_Parms, _outResourceInfo), Z_Construct_UScriptStruct_FTipsLoadingResourceInfo, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELTipsLoadingManager_GetResourceInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELTipsLoadingManager_eventGetResourceInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTipsLoadingManager_GetResourceInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTipsLoadingManager_eventGetResourceInfo_Parms), &Z_Construct_UFunction_UELTipsLoadingManager_GetResourceInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTipsLoadingManager_GetResourceInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTipsLoadingManager_GetResourceInfo_Statics::NewProp__displayCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTipsLoadingManager_GetResourceInfo_Statics::NewProp__displayCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTipsLoadingManager_GetResourceInfo_Statics::NewProp__targetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTipsLoadingManager_GetResourceInfo_Statics::NewProp__outResourceInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTipsLoadingManager_GetResourceInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTipsLoadingManager_GetResourceInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTipsLoadingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTipsLoadingManager_GetResourceInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTipsLoadingManager, nullptr, "GetResourceInfo", nullptr, nullptr, sizeof(ELTipsLoadingManager_eventGetResourceInfo_Parms), Z_Construct_UFunction_UELTipsLoadingManager_GetResourceInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTipsLoadingManager_GetResourceInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTipsLoadingManager_GetResourceInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTipsLoadingManager_GetResourceInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTipsLoadingManager_GetResourceInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTipsLoadingManager_GetResourceInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTipsLoadingManager_OnCompleteLoading_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTipsLoadingManager_OnCompleteLoading_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTipsLoadingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTipsLoadingManager_OnCompleteLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTipsLoadingManager, nullptr, "OnCompleteLoading", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTipsLoadingManager_OnCompleteLoading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTipsLoadingManager_OnCompleteLoading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTipsLoadingManager_OnCompleteLoading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTipsLoadingManager_OnCompleteLoading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTipsLoadingManager_SetOverrideNextLevel_Statics
	{
		struct ELTipsLoadingManager_eventSetOverrideNextLevel_Parms
		{
			FName _nextLevel;
			FString _optionString;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__nextLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__nextLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__optionString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__optionString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTipsLoadingManager_SetOverrideNextLevel_Statics::NewProp__nextLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELTipsLoadingManager_SetOverrideNextLevel_Statics::NewProp__nextLevel = { "_nextLevel", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTipsLoadingManager_eventSetOverrideNextLevel_Parms, _nextLevel), METADATA_PARAMS(Z_Construct_UFunction_UELTipsLoadingManager_SetOverrideNextLevel_Statics::NewProp__nextLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTipsLoadingManager_SetOverrideNextLevel_Statics::NewProp__nextLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTipsLoadingManager_SetOverrideNextLevel_Statics::NewProp__optionString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELTipsLoadingManager_SetOverrideNextLevel_Statics::NewProp__optionString = { "_optionString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTipsLoadingManager_eventSetOverrideNextLevel_Parms, _optionString), METADATA_PARAMS(Z_Construct_UFunction_UELTipsLoadingManager_SetOverrideNextLevel_Statics::NewProp__optionString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTipsLoadingManager_SetOverrideNextLevel_Statics::NewProp__optionString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTipsLoadingManager_SetOverrideNextLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTipsLoadingManager_SetOverrideNextLevel_Statics::NewProp__nextLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTipsLoadingManager_SetOverrideNextLevel_Statics::NewProp__optionString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTipsLoadingManager_SetOverrideNextLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTipsLoadingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTipsLoadingManager_SetOverrideNextLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTipsLoadingManager, nullptr, "SetOverrideNextLevel", nullptr, nullptr, sizeof(ELTipsLoadingManager_eventSetOverrideNextLevel_Parms), Z_Construct_UFunction_UELTipsLoadingManager_SetOverrideNextLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTipsLoadingManager_SetOverrideNextLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTipsLoadingManager_SetOverrideNextLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTipsLoadingManager_SetOverrideNextLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTipsLoadingManager_SetOverrideNextLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTipsLoadingManager_SetOverrideNextLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTipsLoadingManager_StartScreen_Statics
	{
		struct ELTipsLoadingManager_eventStartScreen_Parms
		{
			ETipsLoadingCategory _displayCategory;
			FScriptDelegate _completeDelegate;
			bool _isFadeInStart;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__displayCategory_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__displayCategory;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp__completeDelegate;
		static void NewProp__isFadeInStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isFadeInStart;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTipsLoadingManager_StartScreen_Statics::NewProp__displayCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTipsLoadingManager_StartScreen_Statics::NewProp__displayCategory = { "_displayCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTipsLoadingManager_eventStartScreen_Parms, _displayCategory), Z_Construct_UEnum_ELITE_Game_ETipsLoadingCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELTipsLoadingManager_StartScreen_Statics::NewProp__completeDelegate = { "_completeDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTipsLoadingManager_eventStartScreen_Parms, _completeDelegate), Z_Construct_UDelegateFunction_ABP_200508_TipsLoadingCompleteDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELTipsLoadingManager_StartScreen_Statics::NewProp__isFadeInStart_SetBit(void* Obj)
	{
		((ELTipsLoadingManager_eventStartScreen_Parms*)Obj)->_isFadeInStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTipsLoadingManager_StartScreen_Statics::NewProp__isFadeInStart = { "_isFadeInStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTipsLoadingManager_eventStartScreen_Parms), &Z_Construct_UFunction_UELTipsLoadingManager_StartScreen_Statics::NewProp__isFadeInStart_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELTipsLoadingManager_StartScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELTipsLoadingManager_eventStartScreen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTipsLoadingManager_StartScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTipsLoadingManager_eventStartScreen_Parms), &Z_Construct_UFunction_UELTipsLoadingManager_StartScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTipsLoadingManager_StartScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTipsLoadingManager_StartScreen_Statics::NewProp__displayCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTipsLoadingManager_StartScreen_Statics::NewProp__displayCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTipsLoadingManager_StartScreen_Statics::NewProp__completeDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTipsLoadingManager_StartScreen_Statics::NewProp__isFadeInStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTipsLoadingManager_StartScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTipsLoadingManager_StartScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTipsLoadingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTipsLoadingManager_StartScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTipsLoadingManager, nullptr, "StartScreen", nullptr, nullptr, sizeof(ELTipsLoadingManager_eventStartScreen_Parms), Z_Construct_UFunction_UELTipsLoadingManager_StartScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTipsLoadingManager_StartScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTipsLoadingManager_StartScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTipsLoadingManager_StartScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTipsLoadingManager_StartScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTipsLoadingManager_StartScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELTipsLoadingManager_NoRegister()
	{
		return UELTipsLoadingManager::StaticClass();
	}
	struct Z_Construct_UClass_UELTipsLoadingManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseOverrideNextLevel_MetaData[];
#endif
		static void NewProp_UseOverrideNextLevel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseOverrideNextLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideNextLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverrideNextLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideNextLevelOption_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OverrideNextLevelOption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompleteDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_CompleteDelegate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_ExecCountInfoMap_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_ExecCountInfoMap_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_ExecCountInfoMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ExecCountInfoMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_ExecCountInfoMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pLoadingExecuteActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pLoadingExecuteActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELTipsLoadingManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELTipsLoadingManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELTipsLoadingManager_ClearOverrideNextLevel, "ClearOverrideNextLevel" }, // 2591816795
		{ &Z_Construct_UFunction_UELTipsLoadingManager_Debug_StartScreen, "Debug_StartScreen" }, // 1170719766
		{ &Z_Construct_UFunction_UELTipsLoadingManager_EndScreen, "EndScreen" }, // 1336192675
		{ &Z_Construct_UFunction_UELTipsLoadingManager_GetResourceInfo, "GetResourceInfo" }, // 1111562284
		{ &Z_Construct_UFunction_UELTipsLoadingManager_OnCompleteLoading, "OnCompleteLoading" }, // 3609247449
		{ &Z_Construct_UFunction_UELTipsLoadingManager_SetOverrideNextLevel, "SetOverrideNextLevel" }, // 3359600128
		{ &Z_Construct_UFunction_UELTipsLoadingManager_StartScreen, "StartScreen" }, // 1042753083
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELTipsLoadingManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELTipsLoadingManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELTipsLoadingManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELTipsLoadingManager_Statics::NewProp_UseOverrideNextLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELTipsLoadingManager" },
		{ "ModuleRelativePath", "Public/ELTipsLoadingManager.h" },
	};
#endif
	void Z_Construct_UClass_UELTipsLoadingManager_Statics::NewProp_UseOverrideNextLevel_SetBit(void* Obj)
	{
		((UELTipsLoadingManager*)Obj)->UseOverrideNextLevel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELTipsLoadingManager_Statics::NewProp_UseOverrideNextLevel = { "UseOverrideNextLevel", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELTipsLoadingManager), &Z_Construct_UClass_UELTipsLoadingManager_Statics::NewProp_UseOverrideNextLevel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELTipsLoadingManager_Statics::NewProp_UseOverrideNextLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELTipsLoadingManager_Statics::NewProp_UseOverrideNextLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELTipsLoadingManager_Statics::NewProp_OverrideNextLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELTipsLoadingManager" },
		{ "ModuleRelativePath", "Public/ELTipsLoadingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UELTipsLoadingManager_Statics::NewProp_OverrideNextLevel = { "OverrideNextLevel", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELTipsLoadingManager, OverrideNextLevel), METADATA_PARAMS(Z_Construct_UClass_UELTipsLoadingManager_Statics::NewProp_OverrideNextLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELTipsLoadingManager_Statics::NewProp_OverrideNextLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELTipsLoadingManager_Statics::NewProp_OverrideNextLevelOption_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELTipsLoadingManager" },
		{ "ModuleRelativePath", "Public/ELTipsLoadingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELTipsLoadingManager_Statics::NewProp_OverrideNextLevelOption = { "OverrideNextLevelOption", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELTipsLoadingManager, OverrideNextLevelOption), METADATA_PARAMS(Z_Construct_UClass_UELTipsLoadingManager_Statics::NewProp_OverrideNextLevelOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELTipsLoadingManager_Statics::NewProp_OverrideNextLevelOption_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELTipsLoadingManager_Statics::NewProp_CompleteDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELTipsLoadingManager" },
		{ "ModuleRelativePath", "Public/ELTipsLoadingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UELTipsLoadingManager_Statics::NewProp_CompleteDelegate = { "CompleteDelegate", nullptr, (EPropertyFlags)0x0040000000080005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELTipsLoadingManager, CompleteDelegate), Z_Construct_UDelegateFunction_ABP_200508_TipsLoadingCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELTipsLoadingManager_Statics::NewProp_CompleteDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELTipsLoadingManager_Statics::NewProp_CompleteDelegate_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELTipsLoadingManager_Statics::NewProp_m_ExecCountInfoMap_ValueProp = { "m_ExecCountInfoMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Ref, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELTipsLoadingManager_Statics::NewProp_m_ExecCountInfoMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELTipsLoadingManager_Statics::NewProp_m_ExecCountInfoMap_Key_KeyProp = { "m_ExecCountInfoMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Game_ETipsLoadingCategory, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELTipsLoadingManager_Statics::NewProp_m_ExecCountInfoMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELTipsLoadingManager" },
		{ "ModuleRelativePath", "Public/ELTipsLoadingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELTipsLoadingManager_Statics::NewProp_m_ExecCountInfoMap = { "m_ExecCountInfoMap", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELTipsLoadingManager, m_ExecCountInfoMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELTipsLoadingManager_Statics::NewProp_m_ExecCountInfoMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELTipsLoadingManager_Statics::NewProp_m_ExecCountInfoMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELTipsLoadingManager_Statics::NewProp_m_pLoadingExecuteActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELTipsLoadingManager" },
		{ "ModuleRelativePath", "Public/ELTipsLoadingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELTipsLoadingManager_Statics::NewProp_m_pLoadingExecuteActor = { "m_pLoadingExecuteActor", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELTipsLoadingManager, m_pLoadingExecuteActor), Z_Construct_UClass_AELTipsLoadingExecutorBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELTipsLoadingManager_Statics::NewProp_m_pLoadingExecuteActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELTipsLoadingManager_Statics::NewProp_m_pLoadingExecuteActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELTipsLoadingManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELTipsLoadingManager_Statics::NewProp_UseOverrideNextLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELTipsLoadingManager_Statics::NewProp_OverrideNextLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELTipsLoadingManager_Statics::NewProp_OverrideNextLevelOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELTipsLoadingManager_Statics::NewProp_CompleteDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELTipsLoadingManager_Statics::NewProp_m_ExecCountInfoMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELTipsLoadingManager_Statics::NewProp_m_ExecCountInfoMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELTipsLoadingManager_Statics::NewProp_m_ExecCountInfoMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELTipsLoadingManager_Statics::NewProp_m_ExecCountInfoMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELTipsLoadingManager_Statics::NewProp_m_pLoadingExecuteActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELTipsLoadingManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELTipsLoadingManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELTipsLoadingManager_Statics::ClassParams = {
		&UELTipsLoadingManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELTipsLoadingManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELTipsLoadingManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELTipsLoadingManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELTipsLoadingManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELTipsLoadingManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELTipsLoadingManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELTipsLoadingManager, 460604621);
	template<> ABP_200508_API UClass* StaticClass<UELTipsLoadingManager>()
	{
		return UELTipsLoadingManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELTipsLoadingManager(Z_Construct_UClass_UELTipsLoadingManager, &UELTipsLoadingManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELTipsLoadingManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELTipsLoadingManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
