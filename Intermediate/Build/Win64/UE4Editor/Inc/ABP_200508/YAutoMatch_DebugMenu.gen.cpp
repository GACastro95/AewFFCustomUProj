// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/YAutoMatch_DebugMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYAutoMatch_DebugMenu() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UYAutoMatch_DebugMenu_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UYAutoMatch_DebugMenu();
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuRootBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FAutoMatchSettings();
// End Cross Module References
	DEFINE_FUNCTION(UYAutoMatch_DebugMenu::execAddResultText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__Text);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddResultText(Z_Param__Text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoMatch_DebugMenu::execGetOnlineIdentificationNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetOnlineIdentificationNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoMatch_DebugMenu::execGetOnlinePlayerNo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetOnlinePlayerNo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoMatch_DebugMenu::execGetOnlineType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetOnlineType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoMatch_DebugMenu::execGetResultText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetResultText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoMatch_DebugMenu::execGetTableName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetTableName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoMatch_DebugMenu::execIsEndAutoMatch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEndAutoMatch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoMatch_DebugMenu::execIsErrorCheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsErrorCheck();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoMatch_DebugMenu::execIsOnlineHost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOnlineHost();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoMatch_DebugMenu::execIsOnlineMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOnlineMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoMatch_DebugMenu::execIsPreEndAutoMatch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPreEndAutoMatch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoMatch_DebugMenu::execIsStopMatch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStopMatch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoMatch_DebugMenu::execIsVictorySceneMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsVictorySceneMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoMatch_DebugMenu::execSetEndAutoMatch)
	{
		P_GET_UBOOL(Z_Param__bEnd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEndAutoMatch(Z_Param__bEnd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoMatch_DebugMenu::execSetErrorCheck)
	{
		P_GET_UBOOL(Z_Param__Error);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetErrorCheck(Z_Param__Error);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoMatch_DebugMenu::execSetOnlineHost)
	{
		P_GET_UBOOL(Z_Param__Host);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnlineHost(Z_Param__Host);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoMatch_DebugMenu::execSetOnlineIdentificationNum)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__num);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnlineIdentificationNum(Z_Param__num);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoMatch_DebugMenu::execSetOnlineMode)
	{
		P_GET_UBOOL(Z_Param__Online);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnlineMode(Z_Param__Online);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoMatch_DebugMenu::execSetOnlinePlayerNo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__No);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnlinePlayerNo(Z_Param__No);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoMatch_DebugMenu::execSetOnlineType)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnlineType(Z_Param__type);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoMatch_DebugMenu::execSetPreEndAutoMatch)
	{
		P_GET_UBOOL(Z_Param__bEnd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPreEndAutoMatch(Z_Param__bEnd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoMatch_DebugMenu::execSetResultText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__Text);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetResultText(Z_Param__Text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoMatch_DebugMenu::execSetStopMatch)
	{
		P_GET_UBOOL(Z_Param__stop);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStopMatch(Z_Param__stop);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAutoMatch_DebugMenu::execSetup)
	{
		P_GET_STRUCT_REF(FAutoMatchSettings,Z_Param_Out__stSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Setup(Z_Param_Out__stSettings);
		P_NATIVE_END;
	}
	void UYAutoMatch_DebugMenu::StaticRegisterNativesUYAutoMatch_DebugMenu()
	{
		UClass* Class = UYAutoMatch_DebugMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddResultText", &UYAutoMatch_DebugMenu::execAddResultText },
			{ "GetOnlineIdentificationNum", &UYAutoMatch_DebugMenu::execGetOnlineIdentificationNum },
			{ "GetOnlinePlayerNo", &UYAutoMatch_DebugMenu::execGetOnlinePlayerNo },
			{ "GetOnlineType", &UYAutoMatch_DebugMenu::execGetOnlineType },
			{ "GetResultText", &UYAutoMatch_DebugMenu::execGetResultText },
			{ "GetTableName", &UYAutoMatch_DebugMenu::execGetTableName },
			{ "IsEndAutoMatch", &UYAutoMatch_DebugMenu::execIsEndAutoMatch },
			{ "IsErrorCheck", &UYAutoMatch_DebugMenu::execIsErrorCheck },
			{ "IsOnlineHost", &UYAutoMatch_DebugMenu::execIsOnlineHost },
			{ "IsOnlineMode", &UYAutoMatch_DebugMenu::execIsOnlineMode },
			{ "IsPreEndAutoMatch", &UYAutoMatch_DebugMenu::execIsPreEndAutoMatch },
			{ "IsStopMatch", &UYAutoMatch_DebugMenu::execIsStopMatch },
			{ "IsVictorySceneMode", &UYAutoMatch_DebugMenu::execIsVictorySceneMode },
			{ "SetEndAutoMatch", &UYAutoMatch_DebugMenu::execSetEndAutoMatch },
			{ "SetErrorCheck", &UYAutoMatch_DebugMenu::execSetErrorCheck },
			{ "SetOnlineHost", &UYAutoMatch_DebugMenu::execSetOnlineHost },
			{ "SetOnlineIdentificationNum", &UYAutoMatch_DebugMenu::execSetOnlineIdentificationNum },
			{ "SetOnlineMode", &UYAutoMatch_DebugMenu::execSetOnlineMode },
			{ "SetOnlinePlayerNo", &UYAutoMatch_DebugMenu::execSetOnlinePlayerNo },
			{ "SetOnlineType", &UYAutoMatch_DebugMenu::execSetOnlineType },
			{ "SetPreEndAutoMatch", &UYAutoMatch_DebugMenu::execSetPreEndAutoMatch },
			{ "SetResultText", &UYAutoMatch_DebugMenu::execSetResultText },
			{ "SetStopMatch", &UYAutoMatch_DebugMenu::execSetStopMatch },
			{ "Setup", &UYAutoMatch_DebugMenu::execSetup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYAutoMatch_DebugMenu_AddResultText_Statics
	{
		struct YAutoMatch_DebugMenu_eventAddResultText_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoMatch_DebugMenu_AddResultText_Statics::NewProp__Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_AddResultText_Statics::NewProp__Text = { "_Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YAutoMatch_DebugMenu_eventAddResultText_Parms, _Text), METADATA_PARAMS(Z_Construct_UFunction_UYAutoMatch_DebugMenu_AddResultText_Statics::NewProp__Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_AddResultText_Statics::NewProp__Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoMatch_DebugMenu_AddResultText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoMatch_DebugMenu_AddResultText_Statics::NewProp__Text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoMatch_DebugMenu_AddResultText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoMatch_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_AddResultText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoMatch_DebugMenu, nullptr, "AddResultText", nullptr, nullptr, sizeof(YAutoMatch_DebugMenu_eventAddResultText_Parms), Z_Construct_UFunction_UYAutoMatch_DebugMenu_AddResultText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_AddResultText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoMatch_DebugMenu_AddResultText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_AddResultText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoMatch_DebugMenu_AddResultText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoMatch_DebugMenu_AddResultText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetOnlineIdentificationNum_Statics
	{
		struct YAutoMatch_DebugMenu_eventGetOnlineIdentificationNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetOnlineIdentificationNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YAutoMatch_DebugMenu_eventGetOnlineIdentificationNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetOnlineIdentificationNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetOnlineIdentificationNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetOnlineIdentificationNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoMatch_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetOnlineIdentificationNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoMatch_DebugMenu, nullptr, "GetOnlineIdentificationNum", nullptr, nullptr, sizeof(YAutoMatch_DebugMenu_eventGetOnlineIdentificationNum_Parms), Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetOnlineIdentificationNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetOnlineIdentificationNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetOnlineIdentificationNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetOnlineIdentificationNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetOnlineIdentificationNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetOnlineIdentificationNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetOnlinePlayerNo_Statics
	{
		struct YAutoMatch_DebugMenu_eventGetOnlinePlayerNo_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetOnlinePlayerNo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YAutoMatch_DebugMenu_eventGetOnlinePlayerNo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetOnlinePlayerNo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetOnlinePlayerNo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetOnlinePlayerNo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoMatch_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetOnlinePlayerNo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoMatch_DebugMenu, nullptr, "GetOnlinePlayerNo", nullptr, nullptr, sizeof(YAutoMatch_DebugMenu_eventGetOnlinePlayerNo_Parms), Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetOnlinePlayerNo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetOnlinePlayerNo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetOnlinePlayerNo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetOnlinePlayerNo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetOnlinePlayerNo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetOnlinePlayerNo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetOnlineType_Statics
	{
		struct YAutoMatch_DebugMenu_eventGetOnlineType_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetOnlineType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YAutoMatch_DebugMenu_eventGetOnlineType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetOnlineType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetOnlineType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetOnlineType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoMatch_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetOnlineType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoMatch_DebugMenu, nullptr, "GetOnlineType", nullptr, nullptr, sizeof(YAutoMatch_DebugMenu_eventGetOnlineType_Parms), Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetOnlineType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetOnlineType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetOnlineType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetOnlineType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetOnlineType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetOnlineType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetResultText_Statics
	{
		struct YAutoMatch_DebugMenu_eventGetResultText_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetResultText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YAutoMatch_DebugMenu_eventGetResultText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetResultText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetResultText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetResultText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoMatch_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetResultText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoMatch_DebugMenu, nullptr, "GetResultText", nullptr, nullptr, sizeof(YAutoMatch_DebugMenu_eventGetResultText_Parms), Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetResultText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetResultText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetResultText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetResultText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetResultText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetResultText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetTableName_Statics
	{
		struct YAutoMatch_DebugMenu_eventGetTableName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetTableName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YAutoMatch_DebugMenu_eventGetTableName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetTableName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetTableName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetTableName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoMatch_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetTableName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoMatch_DebugMenu, nullptr, "GetTableName", nullptr, nullptr, sizeof(YAutoMatch_DebugMenu_eventGetTableName_Parms), Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetTableName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetTableName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetTableName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetTableName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetTableName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetTableName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsEndAutoMatch_Statics
	{
		struct YAutoMatch_DebugMenu_eventIsEndAutoMatch_Parms
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
	void Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsEndAutoMatch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YAutoMatch_DebugMenu_eventIsEndAutoMatch_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsEndAutoMatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YAutoMatch_DebugMenu_eventIsEndAutoMatch_Parms), &Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsEndAutoMatch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsEndAutoMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsEndAutoMatch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsEndAutoMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoMatch_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsEndAutoMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoMatch_DebugMenu, nullptr, "IsEndAutoMatch", nullptr, nullptr, sizeof(YAutoMatch_DebugMenu_eventIsEndAutoMatch_Parms), Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsEndAutoMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsEndAutoMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsEndAutoMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsEndAutoMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsEndAutoMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsEndAutoMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsErrorCheck_Statics
	{
		struct YAutoMatch_DebugMenu_eventIsErrorCheck_Parms
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
	void Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsErrorCheck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YAutoMatch_DebugMenu_eventIsErrorCheck_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsErrorCheck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YAutoMatch_DebugMenu_eventIsErrorCheck_Parms), &Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsErrorCheck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsErrorCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsErrorCheck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsErrorCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoMatch_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsErrorCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoMatch_DebugMenu, nullptr, "IsErrorCheck", nullptr, nullptr, sizeof(YAutoMatch_DebugMenu_eventIsErrorCheck_Parms), Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsErrorCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsErrorCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsErrorCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsErrorCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsErrorCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsErrorCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsOnlineHost_Statics
	{
		struct YAutoMatch_DebugMenu_eventIsOnlineHost_Parms
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
	void Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsOnlineHost_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YAutoMatch_DebugMenu_eventIsOnlineHost_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsOnlineHost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YAutoMatch_DebugMenu_eventIsOnlineHost_Parms), &Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsOnlineHost_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsOnlineHost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsOnlineHost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsOnlineHost_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoMatch_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsOnlineHost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoMatch_DebugMenu, nullptr, "IsOnlineHost", nullptr, nullptr, sizeof(YAutoMatch_DebugMenu_eventIsOnlineHost_Parms), Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsOnlineHost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsOnlineHost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsOnlineHost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsOnlineHost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsOnlineHost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsOnlineHost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsOnlineMode_Statics
	{
		struct YAutoMatch_DebugMenu_eventIsOnlineMode_Parms
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
	void Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsOnlineMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YAutoMatch_DebugMenu_eventIsOnlineMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsOnlineMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YAutoMatch_DebugMenu_eventIsOnlineMode_Parms), &Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsOnlineMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsOnlineMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsOnlineMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsOnlineMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoMatch_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsOnlineMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoMatch_DebugMenu, nullptr, "IsOnlineMode", nullptr, nullptr, sizeof(YAutoMatch_DebugMenu_eventIsOnlineMode_Parms), Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsOnlineMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsOnlineMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsOnlineMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsOnlineMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsOnlineMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsOnlineMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsPreEndAutoMatch_Statics
	{
		struct YAutoMatch_DebugMenu_eventIsPreEndAutoMatch_Parms
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
	void Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsPreEndAutoMatch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YAutoMatch_DebugMenu_eventIsPreEndAutoMatch_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsPreEndAutoMatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YAutoMatch_DebugMenu_eventIsPreEndAutoMatch_Parms), &Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsPreEndAutoMatch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsPreEndAutoMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsPreEndAutoMatch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsPreEndAutoMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoMatch_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsPreEndAutoMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoMatch_DebugMenu, nullptr, "IsPreEndAutoMatch", nullptr, nullptr, sizeof(YAutoMatch_DebugMenu_eventIsPreEndAutoMatch_Parms), Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsPreEndAutoMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsPreEndAutoMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsPreEndAutoMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsPreEndAutoMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsPreEndAutoMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsPreEndAutoMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsStopMatch_Statics
	{
		struct YAutoMatch_DebugMenu_eventIsStopMatch_Parms
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
	void Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsStopMatch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YAutoMatch_DebugMenu_eventIsStopMatch_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsStopMatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YAutoMatch_DebugMenu_eventIsStopMatch_Parms), &Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsStopMatch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsStopMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsStopMatch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsStopMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoMatch_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsStopMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoMatch_DebugMenu, nullptr, "IsStopMatch", nullptr, nullptr, sizeof(YAutoMatch_DebugMenu_eventIsStopMatch_Parms), Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsStopMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsStopMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsStopMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsStopMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsStopMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsStopMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsVictorySceneMode_Statics
	{
		struct YAutoMatch_DebugMenu_eventIsVictorySceneMode_Parms
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
	void Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsVictorySceneMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YAutoMatch_DebugMenu_eventIsVictorySceneMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsVictorySceneMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YAutoMatch_DebugMenu_eventIsVictorySceneMode_Parms), &Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsVictorySceneMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsVictorySceneMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsVictorySceneMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsVictorySceneMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoMatch_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsVictorySceneMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoMatch_DebugMenu, nullptr, "IsVictorySceneMode", nullptr, nullptr, sizeof(YAutoMatch_DebugMenu_eventIsVictorySceneMode_Parms), Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsVictorySceneMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsVictorySceneMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsVictorySceneMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsVictorySceneMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsVictorySceneMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsVictorySceneMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetEndAutoMatch_Statics
	{
		struct YAutoMatch_DebugMenu_eventSetEndAutoMatch_Parms
		{
			bool _bEnd;
		};
		static void NewProp__bEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bEnd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetEndAutoMatch_Statics::NewProp__bEnd_SetBit(void* Obj)
	{
		((YAutoMatch_DebugMenu_eventSetEndAutoMatch_Parms*)Obj)->_bEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetEndAutoMatch_Statics::NewProp__bEnd = { "_bEnd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YAutoMatch_DebugMenu_eventSetEndAutoMatch_Parms), &Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetEndAutoMatch_Statics::NewProp__bEnd_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetEndAutoMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetEndAutoMatch_Statics::NewProp__bEnd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetEndAutoMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoMatch_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetEndAutoMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoMatch_DebugMenu, nullptr, "SetEndAutoMatch", nullptr, nullptr, sizeof(YAutoMatch_DebugMenu_eventSetEndAutoMatch_Parms), Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetEndAutoMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetEndAutoMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetEndAutoMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetEndAutoMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetEndAutoMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetEndAutoMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetErrorCheck_Statics
	{
		struct YAutoMatch_DebugMenu_eventSetErrorCheck_Parms
		{
			bool _Error;
		};
		static void NewProp__Error_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__Error;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetErrorCheck_Statics::NewProp__Error_SetBit(void* Obj)
	{
		((YAutoMatch_DebugMenu_eventSetErrorCheck_Parms*)Obj)->_Error = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetErrorCheck_Statics::NewProp__Error = { "_Error", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YAutoMatch_DebugMenu_eventSetErrorCheck_Parms), &Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetErrorCheck_Statics::NewProp__Error_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetErrorCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetErrorCheck_Statics::NewProp__Error,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetErrorCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoMatch_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetErrorCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoMatch_DebugMenu, nullptr, "SetErrorCheck", nullptr, nullptr, sizeof(YAutoMatch_DebugMenu_eventSetErrorCheck_Parms), Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetErrorCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetErrorCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetErrorCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetErrorCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetErrorCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetErrorCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineHost_Statics
	{
		struct YAutoMatch_DebugMenu_eventSetOnlineHost_Parms
		{
			bool _Host;
		};
		static void NewProp__Host_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__Host;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineHost_Statics::NewProp__Host_SetBit(void* Obj)
	{
		((YAutoMatch_DebugMenu_eventSetOnlineHost_Parms*)Obj)->_Host = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineHost_Statics::NewProp__Host = { "_Host", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YAutoMatch_DebugMenu_eventSetOnlineHost_Parms), &Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineHost_Statics::NewProp__Host_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineHost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineHost_Statics::NewProp__Host,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineHost_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoMatch_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineHost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoMatch_DebugMenu, nullptr, "SetOnlineHost", nullptr, nullptr, sizeof(YAutoMatch_DebugMenu_eventSetOnlineHost_Parms), Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineHost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineHost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineHost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineHost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineHost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineHost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineIdentificationNum_Statics
	{
		struct YAutoMatch_DebugMenu_eventSetOnlineIdentificationNum_Parms
		{
			int32 _num;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__num;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineIdentificationNum_Statics::NewProp__num = { "_num", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YAutoMatch_DebugMenu_eventSetOnlineIdentificationNum_Parms, _num), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineIdentificationNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineIdentificationNum_Statics::NewProp__num,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineIdentificationNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoMatch_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineIdentificationNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoMatch_DebugMenu, nullptr, "SetOnlineIdentificationNum", nullptr, nullptr, sizeof(YAutoMatch_DebugMenu_eventSetOnlineIdentificationNum_Parms), Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineIdentificationNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineIdentificationNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineIdentificationNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineIdentificationNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineIdentificationNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineIdentificationNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineMode_Statics
	{
		struct YAutoMatch_DebugMenu_eventSetOnlineMode_Parms
		{
			bool _Online;
		};
		static void NewProp__Online_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__Online;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineMode_Statics::NewProp__Online_SetBit(void* Obj)
	{
		((YAutoMatch_DebugMenu_eventSetOnlineMode_Parms*)Obj)->_Online = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineMode_Statics::NewProp__Online = { "_Online", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YAutoMatch_DebugMenu_eventSetOnlineMode_Parms), &Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineMode_Statics::NewProp__Online_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineMode_Statics::NewProp__Online,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoMatch_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoMatch_DebugMenu, nullptr, "SetOnlineMode", nullptr, nullptr, sizeof(YAutoMatch_DebugMenu_eventSetOnlineMode_Parms), Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlinePlayerNo_Statics
	{
		struct YAutoMatch_DebugMenu_eventSetOnlinePlayerNo_Parms
		{
			int32 _No;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__No;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlinePlayerNo_Statics::NewProp__No = { "_No", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YAutoMatch_DebugMenu_eventSetOnlinePlayerNo_Parms, _No), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlinePlayerNo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlinePlayerNo_Statics::NewProp__No,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlinePlayerNo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoMatch_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlinePlayerNo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoMatch_DebugMenu, nullptr, "SetOnlinePlayerNo", nullptr, nullptr, sizeof(YAutoMatch_DebugMenu_eventSetOnlinePlayerNo_Parms), Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlinePlayerNo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlinePlayerNo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlinePlayerNo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlinePlayerNo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlinePlayerNo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlinePlayerNo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineType_Statics
	{
		struct YAutoMatch_DebugMenu_eventSetOnlineType_Parms
		{
			FString _type;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineType_Statics::NewProp__type_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineType_Statics::NewProp__type = { "_type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YAutoMatch_DebugMenu_eventSetOnlineType_Parms, _type), METADATA_PARAMS(Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineType_Statics::NewProp__type_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineType_Statics::NewProp__type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineType_Statics::NewProp__type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoMatch_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoMatch_DebugMenu, nullptr, "SetOnlineType", nullptr, nullptr, sizeof(YAutoMatch_DebugMenu_eventSetOnlineType_Parms), Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetPreEndAutoMatch_Statics
	{
		struct YAutoMatch_DebugMenu_eventSetPreEndAutoMatch_Parms
		{
			bool _bEnd;
		};
		static void NewProp__bEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bEnd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetPreEndAutoMatch_Statics::NewProp__bEnd_SetBit(void* Obj)
	{
		((YAutoMatch_DebugMenu_eventSetPreEndAutoMatch_Parms*)Obj)->_bEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetPreEndAutoMatch_Statics::NewProp__bEnd = { "_bEnd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YAutoMatch_DebugMenu_eventSetPreEndAutoMatch_Parms), &Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetPreEndAutoMatch_Statics::NewProp__bEnd_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetPreEndAutoMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetPreEndAutoMatch_Statics::NewProp__bEnd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetPreEndAutoMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoMatch_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetPreEndAutoMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoMatch_DebugMenu, nullptr, "SetPreEndAutoMatch", nullptr, nullptr, sizeof(YAutoMatch_DebugMenu_eventSetPreEndAutoMatch_Parms), Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetPreEndAutoMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetPreEndAutoMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetPreEndAutoMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetPreEndAutoMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetPreEndAutoMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetPreEndAutoMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetResultText_Statics
	{
		struct YAutoMatch_DebugMenu_eventSetResultText_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetResultText_Statics::NewProp__Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetResultText_Statics::NewProp__Text = { "_Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YAutoMatch_DebugMenu_eventSetResultText_Parms, _Text), METADATA_PARAMS(Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetResultText_Statics::NewProp__Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetResultText_Statics::NewProp__Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetResultText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetResultText_Statics::NewProp__Text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetResultText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoMatch_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetResultText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoMatch_DebugMenu, nullptr, "SetResultText", nullptr, nullptr, sizeof(YAutoMatch_DebugMenu_eventSetResultText_Parms), Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetResultText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetResultText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetResultText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetResultText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetResultText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetResultText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetStopMatch_Statics
	{
		struct YAutoMatch_DebugMenu_eventSetStopMatch_Parms
		{
			bool _stop;
		};
		static void NewProp__stop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__stop;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetStopMatch_Statics::NewProp__stop_SetBit(void* Obj)
	{
		((YAutoMatch_DebugMenu_eventSetStopMatch_Parms*)Obj)->_stop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetStopMatch_Statics::NewProp__stop = { "_stop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YAutoMatch_DebugMenu_eventSetStopMatch_Parms), &Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetStopMatch_Statics::NewProp__stop_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetStopMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetStopMatch_Statics::NewProp__stop,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetStopMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoMatch_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetStopMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoMatch_DebugMenu, nullptr, "SetStopMatch", nullptr, nullptr, sizeof(YAutoMatch_DebugMenu_eventSetStopMatch_Parms), Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetStopMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetStopMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetStopMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetStopMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetStopMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetStopMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAutoMatch_DebugMenu_Setup_Statics
	{
		struct YAutoMatch_DebugMenu_eventSetup_Parms
		{
			FAutoMatchSettings _stSettings;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoMatch_DebugMenu_Setup_Statics::NewProp__stSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_Setup_Statics::NewProp__stSettings = { "_stSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YAutoMatch_DebugMenu_eventSetup_Parms, _stSettings), Z_Construct_UScriptStruct_FAutoMatchSettings, METADATA_PARAMS(Z_Construct_UFunction_UYAutoMatch_DebugMenu_Setup_Statics::NewProp__stSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_Setup_Statics::NewProp__stSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAutoMatch_DebugMenu_Setup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAutoMatch_DebugMenu_Setup_Statics::NewProp__stSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAutoMatch_DebugMenu_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAutoMatch_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAutoMatch_DebugMenu_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAutoMatch_DebugMenu, nullptr, "Setup", nullptr, nullptr, sizeof(YAutoMatch_DebugMenu_eventSetup_Parms), Z_Construct_UFunction_UYAutoMatch_DebugMenu_Setup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_Setup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAutoMatch_DebugMenu_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAutoMatch_DebugMenu_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAutoMatch_DebugMenu_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAutoMatch_DebugMenu_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYAutoMatch_DebugMenu_NoRegister()
	{
		return UYAutoMatch_DebugMenu::StaticClass();
	}
	struct Z_Construct_UClass_UYAutoMatch_DebugMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYAutoMatch_DebugMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELDebugMenuRootBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYAutoMatch_DebugMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYAutoMatch_DebugMenu_AddResultText, "AddResultText" }, // 84634804
		{ &Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetOnlineIdentificationNum, "GetOnlineIdentificationNum" }, // 3734338292
		{ &Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetOnlinePlayerNo, "GetOnlinePlayerNo" }, // 2833033960
		{ &Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetOnlineType, "GetOnlineType" }, // 1165735158
		{ &Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetResultText, "GetResultText" }, // 53745092
		{ &Z_Construct_UFunction_UYAutoMatch_DebugMenu_GetTableName, "GetTableName" }, // 2608065375
		{ &Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsEndAutoMatch, "IsEndAutoMatch" }, // 2226012334
		{ &Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsErrorCheck, "IsErrorCheck" }, // 3656778796
		{ &Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsOnlineHost, "IsOnlineHost" }, // 2522824109
		{ &Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsOnlineMode, "IsOnlineMode" }, // 157542740
		{ &Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsPreEndAutoMatch, "IsPreEndAutoMatch" }, // 1037772198
		{ &Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsStopMatch, "IsStopMatch" }, // 1583884256
		{ &Z_Construct_UFunction_UYAutoMatch_DebugMenu_IsVictorySceneMode, "IsVictorySceneMode" }, // 1780391518
		{ &Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetEndAutoMatch, "SetEndAutoMatch" }, // 4015685786
		{ &Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetErrorCheck, "SetErrorCheck" }, // 158179098
		{ &Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineHost, "SetOnlineHost" }, // 3341462513
		{ &Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineIdentificationNum, "SetOnlineIdentificationNum" }, // 2200443757
		{ &Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineMode, "SetOnlineMode" }, // 3272103710
		{ &Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlinePlayerNo, "SetOnlinePlayerNo" }, // 3163745015
		{ &Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetOnlineType, "SetOnlineType" }, // 1102166180
		{ &Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetPreEndAutoMatch, "SetPreEndAutoMatch" }, // 1990929419
		{ &Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetResultText, "SetResultText" }, // 1153430282
		{ &Z_Construct_UFunction_UYAutoMatch_DebugMenu_SetStopMatch, "SetStopMatch" }, // 1405461080
		{ &Z_Construct_UFunction_UYAutoMatch_DebugMenu_Setup, "Setup" }, // 2686829958
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYAutoMatch_DebugMenu_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YAutoMatch_DebugMenu.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YAutoMatch_DebugMenu.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYAutoMatch_DebugMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYAutoMatch_DebugMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYAutoMatch_DebugMenu_Statics::ClassParams = {
		&UYAutoMatch_DebugMenu::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UYAutoMatch_DebugMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYAutoMatch_DebugMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYAutoMatch_DebugMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYAutoMatch_DebugMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYAutoMatch_DebugMenu, 2875895857);
	template<> ABP_200508_API UClass* StaticClass<UYAutoMatch_DebugMenu>()
	{
		return UYAutoMatch_DebugMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYAutoMatch_DebugMenu(Z_Construct_UClass_UYAutoMatch_DebugMenu, &UYAutoMatch_DebugMenu::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UYAutoMatch_DebugMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYAutoMatch_DebugMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
