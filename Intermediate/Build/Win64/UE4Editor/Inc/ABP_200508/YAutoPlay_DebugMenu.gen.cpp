// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/YAutoPlay_DebugMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYAutoPlay_DebugMenu() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UYAutoPlay_DebugMenu_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UYAutoPlay_DebugMenu();
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuRootBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
	DEFINE_FUNCTION(UYAutoPlay_DebugMenu::execAddResultText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__Text);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddResultText(Z_Param__Text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoPlay_DebugMenu::execGetAutoPlayDTFileIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAutoPlayDTFileIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoPlay_DebugMenu::execGetAutoPlayKeyInterval)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=P_THIS->GetAutoPlayKeyInterval();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoPlay_DebugMenu::execGetMultiPlayNoInfo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMultiPlayNoInfo(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoPlay_DebugMenu::execGetResultText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetResultText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoPlay_DebugMenu::execGetSelectedByPlayDTFileNameList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetSelectedByPlayDTFileNameList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoPlay_DebugMenu::execGetTableName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetTableName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoPlay_DebugMenu::execIsPauseAutoPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPauseAutoPlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoPlay_DebugMenu::execIsStartAutoPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStartAutoPlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoPlay_DebugMenu::execIsStartRecPadInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStartRecPadInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoPlay_DebugMenu::execIsStopAutoPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStopAutoPlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoPlay_DebugMenu::execPushPauseButtonUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PushPauseButtonUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoPlay_DebugMenu::execPushRecEndUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PushRecEndUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoPlay_DebugMenu::execPushRecStartUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PushRecStartUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoPlay_DebugMenu::execPushStartButtonUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PushStartButtonUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoPlay_DebugMenu::execPushStopButtonUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PushStopButtonUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoPlay_DebugMenu::execSetAutoPlayDTFileIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAutoPlayDTFileIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoPlay_DebugMenu::execSetAutoPlayInfoArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetAutoPlayInfoArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoPlay_DebugMenu::execSetAutoPlayKeyInterval)
	{
		P_GET_STRUCT(FDateTime,Z_Param__time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAutoPlayKeyInterval(Z_Param__time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoPlay_DebugMenu::execSetPauseAutoPlay)
	{
		P_GET_UBOOL(Z_Param__bPause);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPauseAutoPlay(Z_Param__bPause);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoPlay_DebugMenu::execSetResultText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__Text);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetResultText(Z_Param__Text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoPlay_DebugMenu::execSetStartAutoPlay)
	{
		P_GET_UBOOL(Z_Param__bStart);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStartAutoPlay(Z_Param__bStart);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoPlay_DebugMenu::execSetStartRecPadInfo)
	{
		P_GET_UBOOL(Z_Param__bStart);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStartRecPadInfo(Z_Param__bStart);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoPlay_DebugMenu::execSetStopAutoPlay)
	{
		P_GET_UBOOL(Z_Param__bStop);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStopAutoPlay(Z_Param__bStop);
		P_NATIVE_END;
	}
	void UYAutoPlay_DebugMenu::StaticRegisterNativesUYAutoPlay_DebugMenu()
	{
		UClass* Class = UYAutoPlay_DebugMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddResultText", &UYAutoPlay_DebugMenu::execAddResultText },
			{ "GetAutoPlayDTFileIndex", &UYAutoPlay_DebugMenu::execGetAutoPlayDTFileIndex },
			{ "GetAutoPlayKeyInterval", &UYAutoPlay_DebugMenu::execGetAutoPlayKeyInterval },
			{ "GetMultiPlayNoInfo", &UYAutoPlay_DebugMenu::execGetMultiPlayNoInfo },
			{ "GetResultText", &UYAutoPlay_DebugMenu::execGetResultText },
			{ "GetSelectedByPlayDTFileNameList", &UYAutoPlay_DebugMenu::execGetSelectedByPlayDTFileNameList },
			{ "GetTableName", &UYAutoPlay_DebugMenu::execGetTableName },
			{ "IsPauseAutoPlay", &UYAutoPlay_DebugMenu::execIsPauseAutoPlay },
			{ "IsStartAutoPlay", &UYAutoPlay_DebugMenu::execIsStartAutoPlay },
			{ "IsStartRecPadInfo", &UYAutoPlay_DebugMenu::execIsStartRecPadInfo },
			{ "IsStopAutoPlay", &UYAutoPlay_DebugMenu::execIsStopAutoPlay },
			{ "PushPauseButtonUpdate", &UYAutoPlay_DebugMenu::execPushPauseButtonUpdate },
			{ "PushRecEndUpdate", &UYAutoPlay_DebugMenu::execPushRecEndUpdate },
			{ "PushRecStartUpdate", &UYAutoPlay_DebugMenu::execPushRecStartUpdate },
			{ "PushStartButtonUpdate", &UYAutoPlay_DebugMenu::execPushStartButtonUpdate },
			{ "PushStopButtonUpdate", &UYAutoPlay_DebugMenu::execPushStopButtonUpdate },
			{ "SetAutoPlayDTFileIndex", &UYAutoPlay_DebugMenu::execSetAutoPlayDTFileIndex },
			{ "SetAutoPlayInfoArray", &UYAutoPlay_DebugMenu::execSetAutoPlayInfoArray },
			{ "SetAutoPlayKeyInterval", &UYAutoPlay_DebugMenu::execSetAutoPlayKeyInterval },
			{ "SetPauseAutoPlay", &UYAutoPlay_DebugMenu::execSetPauseAutoPlay },
			{ "SetResultText", &UYAutoPlay_DebugMenu::execSetResultText },
			{ "SetStartAutoPlay", &UYAutoPlay_DebugMenu::execSetStartAutoPlay },
			{ "SetStartRecPadInfo", &UYAutoPlay_DebugMenu::execSetStartRecPadInfo },
			{ "SetStopAutoPlay", &UYAutoPlay_DebugMenu::execSetStopAutoPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYAutoPlay_DebugMenu_AddResultText_Statics
	{
		struct YAutoPlay_DebugMenu_eventAddResultText_Parms
		{
			FString _Text;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoPlay_DebugMenu_AddResultText_Statics::NewProp__Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_AddResultText_Statics::NewProp__Text = { "_Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YAutoPlay_DebugMenu_eventAddResultText_Parms, _Text), METADATA_PARAMS(Z_Construct_UFunction_UYAutoPlay_DebugMenu_AddResultText_Statics::NewProp__Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_AddResultText_Statics::NewProp__Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoPlay_DebugMenu_AddResultText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoPlay_DebugMenu_AddResultText_Statics::NewProp__Text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoPlay_DebugMenu_AddResultText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoPlay_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_AddResultText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoPlay_DebugMenu, nullptr, "AddResultText", nullptr, nullptr, sizeof(YAutoPlay_DebugMenu_eventAddResultText_Parms), Z_Construct_UFunction_UYAutoPlay_DebugMenu_AddResultText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_AddResultText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoPlay_DebugMenu_AddResultText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_AddResultText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoPlay_DebugMenu_AddResultText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoPlay_DebugMenu_AddResultText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetAutoPlayDTFileIndex_Statics
	{
		struct YAutoPlay_DebugMenu_eventGetAutoPlayDTFileIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetAutoPlayDTFileIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YAutoPlay_DebugMenu_eventGetAutoPlayDTFileIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetAutoPlayDTFileIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetAutoPlayDTFileIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetAutoPlayDTFileIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoPlay_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetAutoPlayDTFileIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoPlay_DebugMenu, nullptr, "GetAutoPlayDTFileIndex", nullptr, nullptr, sizeof(YAutoPlay_DebugMenu_eventGetAutoPlayDTFileIndex_Parms), Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetAutoPlayDTFileIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetAutoPlayDTFileIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetAutoPlayDTFileIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetAutoPlayDTFileIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetAutoPlayDTFileIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetAutoPlayDTFileIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetAutoPlayKeyInterval_Statics
	{
		struct YAutoPlay_DebugMenu_eventGetAutoPlayKeyInterval_Parms
		{
			FDateTime ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetAutoPlayKeyInterval_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YAutoPlay_DebugMenu_eventGetAutoPlayKeyInterval_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetAutoPlayKeyInterval_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetAutoPlayKeyInterval_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetAutoPlayKeyInterval_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoPlay_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetAutoPlayKeyInterval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoPlay_DebugMenu, nullptr, "GetAutoPlayKeyInterval", nullptr, nullptr, sizeof(YAutoPlay_DebugMenu_eventGetAutoPlayKeyInterval_Parms), Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetAutoPlayKeyInterval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetAutoPlayKeyInterval_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetAutoPlayKeyInterval_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetAutoPlayKeyInterval_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetAutoPlayKeyInterval()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetAutoPlayKeyInterval_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetMultiPlayNoInfo_Statics
	{
		struct YAutoPlay_DebugMenu_eventGetMultiPlayNoInfo_Parms
		{
			int32 Index;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetMultiPlayNoInfo_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YAutoPlay_DebugMenu_eventGetMultiPlayNoInfo_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetMultiPlayNoInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YAutoPlay_DebugMenu_eventGetMultiPlayNoInfo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetMultiPlayNoInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetMultiPlayNoInfo_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetMultiPlayNoInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetMultiPlayNoInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoPlay_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetMultiPlayNoInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoPlay_DebugMenu, nullptr, "GetMultiPlayNoInfo", nullptr, nullptr, sizeof(YAutoPlay_DebugMenu_eventGetMultiPlayNoInfo_Parms), Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetMultiPlayNoInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetMultiPlayNoInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetMultiPlayNoInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetMultiPlayNoInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetMultiPlayNoInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetMultiPlayNoInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetResultText_Statics
	{
		struct YAutoPlay_DebugMenu_eventGetResultText_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetResultText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YAutoPlay_DebugMenu_eventGetResultText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetResultText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetResultText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetResultText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoPlay_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetResultText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoPlay_DebugMenu, nullptr, "GetResultText", nullptr, nullptr, sizeof(YAutoPlay_DebugMenu_eventGetResultText_Parms), Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetResultText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetResultText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetResultText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetResultText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetResultText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetResultText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetSelectedByPlayDTFileNameList_Statics
	{
		struct YAutoPlay_DebugMenu_eventGetSelectedByPlayDTFileNameList_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetSelectedByPlayDTFileNameList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetSelectedByPlayDTFileNameList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YAutoPlay_DebugMenu_eventGetSelectedByPlayDTFileNameList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetSelectedByPlayDTFileNameList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetSelectedByPlayDTFileNameList_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetSelectedByPlayDTFileNameList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetSelectedByPlayDTFileNameList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoPlay_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetSelectedByPlayDTFileNameList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoPlay_DebugMenu, nullptr, "GetSelectedByPlayDTFileNameList", nullptr, nullptr, sizeof(YAutoPlay_DebugMenu_eventGetSelectedByPlayDTFileNameList_Parms), Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetSelectedByPlayDTFileNameList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetSelectedByPlayDTFileNameList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetSelectedByPlayDTFileNameList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetSelectedByPlayDTFileNameList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetSelectedByPlayDTFileNameList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetSelectedByPlayDTFileNameList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetTableName_Statics
	{
		struct YAutoPlay_DebugMenu_eventGetTableName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetTableName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YAutoPlay_DebugMenu_eventGetTableName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetTableName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetTableName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetTableName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoPlay_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetTableName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoPlay_DebugMenu, nullptr, "GetTableName", nullptr, nullptr, sizeof(YAutoPlay_DebugMenu_eventGetTableName_Parms), Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetTableName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetTableName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetTableName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetTableName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetTableName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetTableName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsPauseAutoPlay_Statics
	{
		struct YAutoPlay_DebugMenu_eventIsPauseAutoPlay_Parms
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
	void Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsPauseAutoPlay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YAutoPlay_DebugMenu_eventIsPauseAutoPlay_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsPauseAutoPlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YAutoPlay_DebugMenu_eventIsPauseAutoPlay_Parms), &Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsPauseAutoPlay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsPauseAutoPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsPauseAutoPlay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsPauseAutoPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoPlay_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsPauseAutoPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoPlay_DebugMenu, nullptr, "IsPauseAutoPlay", nullptr, nullptr, sizeof(YAutoPlay_DebugMenu_eventIsPauseAutoPlay_Parms), Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsPauseAutoPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsPauseAutoPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsPauseAutoPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsPauseAutoPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsPauseAutoPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsPauseAutoPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStartAutoPlay_Statics
	{
		struct YAutoPlay_DebugMenu_eventIsStartAutoPlay_Parms
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
	void Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStartAutoPlay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YAutoPlay_DebugMenu_eventIsStartAutoPlay_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStartAutoPlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YAutoPlay_DebugMenu_eventIsStartAutoPlay_Parms), &Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStartAutoPlay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStartAutoPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStartAutoPlay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStartAutoPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoPlay_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStartAutoPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoPlay_DebugMenu, nullptr, "IsStartAutoPlay", nullptr, nullptr, sizeof(YAutoPlay_DebugMenu_eventIsStartAutoPlay_Parms), Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStartAutoPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStartAutoPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStartAutoPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStartAutoPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStartAutoPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStartAutoPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStartRecPadInfo_Statics
	{
		struct YAutoPlay_DebugMenu_eventIsStartRecPadInfo_Parms
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
	void Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStartRecPadInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YAutoPlay_DebugMenu_eventIsStartRecPadInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStartRecPadInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YAutoPlay_DebugMenu_eventIsStartRecPadInfo_Parms), &Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStartRecPadInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStartRecPadInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStartRecPadInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStartRecPadInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoPlay_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStartRecPadInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoPlay_DebugMenu, nullptr, "IsStartRecPadInfo", nullptr, nullptr, sizeof(YAutoPlay_DebugMenu_eventIsStartRecPadInfo_Parms), Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStartRecPadInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStartRecPadInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStartRecPadInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStartRecPadInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStartRecPadInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStartRecPadInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStopAutoPlay_Statics
	{
		struct YAutoPlay_DebugMenu_eventIsStopAutoPlay_Parms
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
	void Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStopAutoPlay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YAutoPlay_DebugMenu_eventIsStopAutoPlay_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStopAutoPlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YAutoPlay_DebugMenu_eventIsStopAutoPlay_Parms), &Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStopAutoPlay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStopAutoPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStopAutoPlay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStopAutoPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoPlay_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStopAutoPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoPlay_DebugMenu, nullptr, "IsStopAutoPlay", nullptr, nullptr, sizeof(YAutoPlay_DebugMenu_eventIsStopAutoPlay_Parms), Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStopAutoPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStopAutoPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStopAutoPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStopAutoPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStopAutoPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStopAutoPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoPlay_DebugMenu_PushPauseButtonUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoPlay_DebugMenu_PushPauseButtonUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoPlay_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_PushPauseButtonUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoPlay_DebugMenu, nullptr, "PushPauseButtonUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoPlay_DebugMenu_PushPauseButtonUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_PushPauseButtonUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoPlay_DebugMenu_PushPauseButtonUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoPlay_DebugMenu_PushPauseButtonUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoPlay_DebugMenu_PushRecEndUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoPlay_DebugMenu_PushRecEndUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoPlay_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_PushRecEndUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoPlay_DebugMenu, nullptr, "PushRecEndUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoPlay_DebugMenu_PushRecEndUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_PushRecEndUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoPlay_DebugMenu_PushRecEndUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoPlay_DebugMenu_PushRecEndUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoPlay_DebugMenu_PushRecStartUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoPlay_DebugMenu_PushRecStartUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoPlay_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_PushRecStartUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoPlay_DebugMenu, nullptr, "PushRecStartUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoPlay_DebugMenu_PushRecStartUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_PushRecStartUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoPlay_DebugMenu_PushRecStartUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoPlay_DebugMenu_PushRecStartUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoPlay_DebugMenu_PushStartButtonUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoPlay_DebugMenu_PushStartButtonUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoPlay_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_PushStartButtonUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoPlay_DebugMenu, nullptr, "PushStartButtonUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoPlay_DebugMenu_PushStartButtonUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_PushStartButtonUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoPlay_DebugMenu_PushStartButtonUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoPlay_DebugMenu_PushStartButtonUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoPlay_DebugMenu_PushStopButtonUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoPlay_DebugMenu_PushStopButtonUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoPlay_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_PushStopButtonUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoPlay_DebugMenu, nullptr, "PushStopButtonUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoPlay_DebugMenu_PushStopButtonUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_PushStopButtonUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoPlay_DebugMenu_PushStopButtonUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoPlay_DebugMenu_PushStopButtonUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetAutoPlayDTFileIndex_Statics
	{
		struct YAutoPlay_DebugMenu_eventSetAutoPlayDTFileIndex_Parms
		{
			int32 Index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetAutoPlayDTFileIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YAutoPlay_DebugMenu_eventSetAutoPlayDTFileIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetAutoPlayDTFileIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetAutoPlayDTFileIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetAutoPlayDTFileIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoPlay_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetAutoPlayDTFileIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoPlay_DebugMenu, nullptr, "SetAutoPlayDTFileIndex", nullptr, nullptr, sizeof(YAutoPlay_DebugMenu_eventSetAutoPlayDTFileIndex_Parms), Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetAutoPlayDTFileIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetAutoPlayDTFileIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetAutoPlayDTFileIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetAutoPlayDTFileIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetAutoPlayDTFileIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetAutoPlayDTFileIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetAutoPlayInfoArray_Statics
	{
		struct YAutoPlay_DebugMenu_eventSetAutoPlayInfoArray_Parms
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
	void Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetAutoPlayInfoArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YAutoPlay_DebugMenu_eventSetAutoPlayInfoArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetAutoPlayInfoArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YAutoPlay_DebugMenu_eventSetAutoPlayInfoArray_Parms), &Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetAutoPlayInfoArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetAutoPlayInfoArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetAutoPlayInfoArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetAutoPlayInfoArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoPlay_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetAutoPlayInfoArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoPlay_DebugMenu, nullptr, "SetAutoPlayInfoArray", nullptr, nullptr, sizeof(YAutoPlay_DebugMenu_eventSetAutoPlayInfoArray_Parms), Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetAutoPlayInfoArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetAutoPlayInfoArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetAutoPlayInfoArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetAutoPlayInfoArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetAutoPlayInfoArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetAutoPlayInfoArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetAutoPlayKeyInterval_Statics
	{
		struct YAutoPlay_DebugMenu_eventSetAutoPlayKeyInterval_Parms
		{
			FDateTime _time;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetAutoPlayKeyInterval_Statics::NewProp__time = { "_time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YAutoPlay_DebugMenu_eventSetAutoPlayKeyInterval_Parms, _time), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetAutoPlayKeyInterval_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetAutoPlayKeyInterval_Statics::NewProp__time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetAutoPlayKeyInterval_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoPlay_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetAutoPlayKeyInterval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoPlay_DebugMenu, nullptr, "SetAutoPlayKeyInterval", nullptr, nullptr, sizeof(YAutoPlay_DebugMenu_eventSetAutoPlayKeyInterval_Parms), Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetAutoPlayKeyInterval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetAutoPlayKeyInterval_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetAutoPlayKeyInterval_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetAutoPlayKeyInterval_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetAutoPlayKeyInterval()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetAutoPlayKeyInterval_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetPauseAutoPlay_Statics
	{
		struct YAutoPlay_DebugMenu_eventSetPauseAutoPlay_Parms
		{
			bool _bPause;
		};
		static void NewProp__bPause_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bPause;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetPauseAutoPlay_Statics::NewProp__bPause_SetBit(void* Obj)
	{
		((YAutoPlay_DebugMenu_eventSetPauseAutoPlay_Parms*)Obj)->_bPause = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetPauseAutoPlay_Statics::NewProp__bPause = { "_bPause", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YAutoPlay_DebugMenu_eventSetPauseAutoPlay_Parms), &Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetPauseAutoPlay_Statics::NewProp__bPause_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetPauseAutoPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetPauseAutoPlay_Statics::NewProp__bPause,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetPauseAutoPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoPlay_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetPauseAutoPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoPlay_DebugMenu, nullptr, "SetPauseAutoPlay", nullptr, nullptr, sizeof(YAutoPlay_DebugMenu_eventSetPauseAutoPlay_Parms), Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetPauseAutoPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetPauseAutoPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetPauseAutoPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetPauseAutoPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetPauseAutoPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetPauseAutoPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetResultText_Statics
	{
		struct YAutoPlay_DebugMenu_eventSetResultText_Parms
		{
			FString _Text;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetResultText_Statics::NewProp__Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetResultText_Statics::NewProp__Text = { "_Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YAutoPlay_DebugMenu_eventSetResultText_Parms, _Text), METADATA_PARAMS(Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetResultText_Statics::NewProp__Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetResultText_Statics::NewProp__Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetResultText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetResultText_Statics::NewProp__Text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetResultText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoPlay_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetResultText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoPlay_DebugMenu, nullptr, "SetResultText", nullptr, nullptr, sizeof(YAutoPlay_DebugMenu_eventSetResultText_Parms), Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetResultText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetResultText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetResultText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetResultText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetResultText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetResultText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStartAutoPlay_Statics
	{
		struct YAutoPlay_DebugMenu_eventSetStartAutoPlay_Parms
		{
			bool _bStart;
		};
		static void NewProp__bStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStartAutoPlay_Statics::NewProp__bStart_SetBit(void* Obj)
	{
		((YAutoPlay_DebugMenu_eventSetStartAutoPlay_Parms*)Obj)->_bStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStartAutoPlay_Statics::NewProp__bStart = { "_bStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YAutoPlay_DebugMenu_eventSetStartAutoPlay_Parms), &Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStartAutoPlay_Statics::NewProp__bStart_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStartAutoPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStartAutoPlay_Statics::NewProp__bStart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStartAutoPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoPlay_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStartAutoPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoPlay_DebugMenu, nullptr, "SetStartAutoPlay", nullptr, nullptr, sizeof(YAutoPlay_DebugMenu_eventSetStartAutoPlay_Parms), Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStartAutoPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStartAutoPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStartAutoPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStartAutoPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStartAutoPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStartAutoPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStartRecPadInfo_Statics
	{
		struct YAutoPlay_DebugMenu_eventSetStartRecPadInfo_Parms
		{
			bool _bStart;
		};
		static void NewProp__bStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStartRecPadInfo_Statics::NewProp__bStart_SetBit(void* Obj)
	{
		((YAutoPlay_DebugMenu_eventSetStartRecPadInfo_Parms*)Obj)->_bStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStartRecPadInfo_Statics::NewProp__bStart = { "_bStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YAutoPlay_DebugMenu_eventSetStartRecPadInfo_Parms), &Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStartRecPadInfo_Statics::NewProp__bStart_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStartRecPadInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStartRecPadInfo_Statics::NewProp__bStart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStartRecPadInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoPlay_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStartRecPadInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoPlay_DebugMenu, nullptr, "SetStartRecPadInfo", nullptr, nullptr, sizeof(YAutoPlay_DebugMenu_eventSetStartRecPadInfo_Parms), Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStartRecPadInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStartRecPadInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStartRecPadInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStartRecPadInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStartRecPadInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStartRecPadInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStopAutoPlay_Statics
	{
		struct YAutoPlay_DebugMenu_eventSetStopAutoPlay_Parms
		{
			bool _bStop;
		};
		static void NewProp__bStop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bStop;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStopAutoPlay_Statics::NewProp__bStop_SetBit(void* Obj)
	{
		((YAutoPlay_DebugMenu_eventSetStopAutoPlay_Parms*)Obj)->_bStop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStopAutoPlay_Statics::NewProp__bStop = { "_bStop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YAutoPlay_DebugMenu_eventSetStopAutoPlay_Parms), &Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStopAutoPlay_Statics::NewProp__bStop_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStopAutoPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStopAutoPlay_Statics::NewProp__bStop,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStopAutoPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoPlay_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStopAutoPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoPlay_DebugMenu, nullptr, "SetStopAutoPlay", nullptr, nullptr, sizeof(YAutoPlay_DebugMenu_eventSetStopAutoPlay_Parms), Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStopAutoPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStopAutoPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStopAutoPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStopAutoPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStopAutoPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStopAutoPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYAutoPlay_DebugMenu_NoRegister()
	{
		return UYAutoPlay_DebugMenu::StaticClass();
	}
	struct Z_Construct_UClass_UYAutoPlay_DebugMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYAutoPlay_DebugMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELDebugMenuRootBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYAutoPlay_DebugMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYAutoPlay_DebugMenu_AddResultText, "AddResultText" }, // 462985666
		{ &Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetAutoPlayDTFileIndex, "GetAutoPlayDTFileIndex" }, // 1502547353
		{ &Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetAutoPlayKeyInterval, "GetAutoPlayKeyInterval" }, // 3332340057
		{ &Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetMultiPlayNoInfo, "GetMultiPlayNoInfo" }, // 3254013412
		{ &Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetResultText, "GetResultText" }, // 4154607772
		{ &Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetSelectedByPlayDTFileNameList, "GetSelectedByPlayDTFileNameList" }, // 1619040670
		{ &Z_Construct_UFunction_UYAutoPlay_DebugMenu_GetTableName, "GetTableName" }, // 2917034593
		{ &Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsPauseAutoPlay, "IsPauseAutoPlay" }, // 3370623356
		{ &Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStartAutoPlay, "IsStartAutoPlay" }, // 2364770157
		{ &Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStartRecPadInfo, "IsStartRecPadInfo" }, // 2551587635
		{ &Z_Construct_UFunction_UYAutoPlay_DebugMenu_IsStopAutoPlay, "IsStopAutoPlay" }, // 3468603603
		{ &Z_Construct_UFunction_UYAutoPlay_DebugMenu_PushPauseButtonUpdate, "PushPauseButtonUpdate" }, // 1670842712
		{ &Z_Construct_UFunction_UYAutoPlay_DebugMenu_PushRecEndUpdate, "PushRecEndUpdate" }, // 108170709
		{ &Z_Construct_UFunction_UYAutoPlay_DebugMenu_PushRecStartUpdate, "PushRecStartUpdate" }, // 3730470764
		{ &Z_Construct_UFunction_UYAutoPlay_DebugMenu_PushStartButtonUpdate, "PushStartButtonUpdate" }, // 3764126739
		{ &Z_Construct_UFunction_UYAutoPlay_DebugMenu_PushStopButtonUpdate, "PushStopButtonUpdate" }, // 3480504417
		{ &Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetAutoPlayDTFileIndex, "SetAutoPlayDTFileIndex" }, // 1652810756
		{ &Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetAutoPlayInfoArray, "SetAutoPlayInfoArray" }, // 2071882455
		{ &Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetAutoPlayKeyInterval, "SetAutoPlayKeyInterval" }, // 2981673083
		{ &Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetPauseAutoPlay, "SetPauseAutoPlay" }, // 832161927
		{ &Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetResultText, "SetResultText" }, // 834187380
		{ &Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStartAutoPlay, "SetStartAutoPlay" }, // 2219489957
		{ &Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStartRecPadInfo, "SetStartRecPadInfo" }, // 3861615400
		{ &Z_Construct_UFunction_UYAutoPlay_DebugMenu_SetStopAutoPlay, "SetStopAutoPlay" }, // 167390955
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYAutoPlay_DebugMenu_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YAutoPlay_DebugMenu.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YAutoPlay_DebugMenu.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYAutoPlay_DebugMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYAutoPlay_DebugMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYAutoPlay_DebugMenu_Statics::ClassParams = {
		&UYAutoPlay_DebugMenu::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UYAutoPlay_DebugMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYAutoPlay_DebugMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYAutoPlay_DebugMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYAutoPlay_DebugMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYAutoPlay_DebugMenu, 3059538214);
	template<> ABP_200508_API UClass* StaticClass<UYAutoPlay_DebugMenu>()
	{
		return UYAutoPlay_DebugMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYAutoPlay_DebugMenu(Z_Construct_UClass_UYAutoPlay_DebugMenu, &UYAutoPlay_DebugMenu::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UYAutoPlay_DebugMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYAutoPlay_DebugMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
