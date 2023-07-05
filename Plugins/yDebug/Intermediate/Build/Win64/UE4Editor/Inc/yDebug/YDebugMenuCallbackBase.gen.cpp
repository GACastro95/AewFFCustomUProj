// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yDebug/Public/YDebugMenuCallbackBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYDebugMenuCallbackBase() {}
// Cross Module References
	YDEBUG_API UClass* Z_Construct_UClass_UYDebugMenuCallbackBase_NoRegister();
	YDEBUG_API UClass* Z_Construct_UClass_UYDebugMenuCallbackBase();
	YDEBUG_API UClass* Z_Construct_UClass_UYDBG_ReferBase();
	UPackage* Z_Construct_UPackage__Script_yDebug();
	YDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParamBase();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	YDEBUG_API UFunction* Z_Construct_UDelegateFunction_yDebug_YDebugMenuCallbackDispatcher__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UYDebugMenuCallbackBase::execCreateDebugMenuCallbackInstance)
	{
		P_GET_OBJECT_REF(UYDebugMenuCallbackBase,Z_Param_Out_Instance);
		P_GET_PROPERTY(FStrProperty,Z_Param_BPPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UYDebugMenuCallbackBase::CreateDebugMenuCallbackInstance(Z_Param_Out_Instance,Z_Param_BPPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuCallbackBase::execGeRegistKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GeRegistKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuCallbackBase::execGetUIParam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FYDebugMenuSimpleUIParamBase*)Z_Param__Result=P_THIS->GetUIParam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuCallbackBase::execGetWorldForBP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWorld**)Z_Param__Result=P_THIS->GetWorldForBP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuCallbackBase::execOnClickUI_Direct)
	{
		P_GET_STRUCT_REF(FYDebugMenuSimpleUIParamBase,Z_Param_Out_UIParam);
		P_GET_PROPERTY(FStrProperty,Z_Param_RegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickUI_Direct(Z_Param_Out_UIParam,Z_Param_RegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuCallbackBase::execOnResetUI_Direct)
	{
		P_GET_STRUCT_REF(FYDebugMenuSimpleUIParamBase,Z_Param_Out_UIParam);
		P_GET_PROPERTY(FStrProperty,Z_Param_RegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnResetUI_Direct(Z_Param_Out_UIParam,Z_Param_RegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuCallbackBase::execOnSetupUI_Direct)
	{
		P_GET_STRUCT_REF(FYDebugMenuSimpleUIParamBase,Z_Param_Out_UIParam);
		P_GET_PROPERTY(FStrProperty,Z_Param_RegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSetupUI_Direct(Z_Param_Out_UIParam,Z_Param_RegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuCallbackBase::execOnUIValueChanged_Direct)
	{
		P_GET_STRUCT_REF(FYDebugMenuSimpleUIParamBase,Z_Param_Out_UIParam);
		P_GET_PROPERTY(FStrProperty,Z_Param_RegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUIValueChanged_Direct(Z_Param_Out_UIParam,Z_Param_RegistKey);
		P_NATIVE_END;
	}
	static FName NAME_UYDebugMenuCallbackBase_OnClickUI = FName(TEXT("OnClickUI"));
	void UYDebugMenuCallbackBase::OnClickUI(FYDebugMenuSimpleUIParamBase const& UIParam, const FString& RegistKey)
	{
		YDebugMenuCallbackBase_eventOnClickUI_Parms Parms;
		Parms.UIParam=UIParam;
		Parms.RegistKey=RegistKey;
		ProcessEvent(FindFunctionChecked(NAME_UYDebugMenuCallbackBase_OnClickUI),&Parms);
	}
	static FName NAME_UYDebugMenuCallbackBase_OnResetUI = FName(TEXT("OnResetUI"));
	void UYDebugMenuCallbackBase::OnResetUI(FYDebugMenuSimpleUIParamBase const& UIParam, const FString& RegistKey)
	{
		YDebugMenuCallbackBase_eventOnResetUI_Parms Parms;
		Parms.UIParam=UIParam;
		Parms.RegistKey=RegistKey;
		ProcessEvent(FindFunctionChecked(NAME_UYDebugMenuCallbackBase_OnResetUI),&Parms);
	}
	static FName NAME_UYDebugMenuCallbackBase_OnSetupUI = FName(TEXT("OnSetupUI"));
	void UYDebugMenuCallbackBase::OnSetupUI(FYDebugMenuSimpleUIParamBase const& UIParam, const FString& RegistKey)
	{
		YDebugMenuCallbackBase_eventOnSetupUI_Parms Parms;
		Parms.UIParam=UIParam;
		Parms.RegistKey=RegistKey;
		ProcessEvent(FindFunctionChecked(NAME_UYDebugMenuCallbackBase_OnSetupUI),&Parms);
	}
	static FName NAME_UYDebugMenuCallbackBase_OnUIValueChanged = FName(TEXT("OnUIValueChanged"));
	void UYDebugMenuCallbackBase::OnUIValueChanged(FYDebugMenuSimpleUIParamBase const& UIParam, const FString& RegistKey)
	{
		YDebugMenuCallbackBase_eventOnUIValueChanged_Parms Parms;
		Parms.UIParam=UIParam;
		Parms.RegistKey=RegistKey;
		ProcessEvent(FindFunctionChecked(NAME_UYDebugMenuCallbackBase_OnUIValueChanged),&Parms);
	}
	void UYDebugMenuCallbackBase::StaticRegisterNativesUYDebugMenuCallbackBase()
	{
		UClass* Class = UYDebugMenuCallbackBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateDebugMenuCallbackInstance", &UYDebugMenuCallbackBase::execCreateDebugMenuCallbackInstance },
			{ "GeRegistKey", &UYDebugMenuCallbackBase::execGeRegistKey },
			{ "GetUIParam", &UYDebugMenuCallbackBase::execGetUIParam },
			{ "GetWorldForBP", &UYDebugMenuCallbackBase::execGetWorldForBP },
			{ "OnClickUI_Direct", &UYDebugMenuCallbackBase::execOnClickUI_Direct },
			{ "OnResetUI_Direct", &UYDebugMenuCallbackBase::execOnResetUI_Direct },
			{ "OnSetupUI_Direct", &UYDebugMenuCallbackBase::execOnSetupUI_Direct },
			{ "OnUIValueChanged_Direct", &UYDebugMenuCallbackBase::execOnUIValueChanged_Direct },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYDebugMenuCallbackBase_CreateDebugMenuCallbackInstance_Statics
	{
		struct YDebugMenuCallbackBase_eventCreateDebugMenuCallbackInstance_Parms
		{
			UYDebugMenuCallbackBase* Instance;
			FString BPPath;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BPPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BPPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYDebugMenuCallbackBase_CreateDebugMenuCallbackInstance_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuCallbackBase_eventCreateDebugMenuCallbackInstance_Parms, Instance), Z_Construct_UClass_UYDebugMenuCallbackBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuCallbackBase_CreateDebugMenuCallbackInstance_Statics::NewProp_BPPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuCallbackBase_CreateDebugMenuCallbackInstance_Statics::NewProp_BPPath = { "BPPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuCallbackBase_eventCreateDebugMenuCallbackInstance_Parms, BPPath), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuCallbackBase_CreateDebugMenuCallbackInstance_Statics::NewProp_BPPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuCallbackBase_CreateDebugMenuCallbackInstance_Statics::NewProp_BPPath_MetaData)) };
	void Z_Construct_UFunction_UYDebugMenuCallbackBase_CreateDebugMenuCallbackInstance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuCallbackBase_eventCreateDebugMenuCallbackInstance_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuCallbackBase_CreateDebugMenuCallbackInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuCallbackBase_eventCreateDebugMenuCallbackInstance_Parms), &Z_Construct_UFunction_UYDebugMenuCallbackBase_CreateDebugMenuCallbackInstance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuCallbackBase_CreateDebugMenuCallbackInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuCallbackBase_CreateDebugMenuCallbackInstance_Statics::NewProp_Instance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuCallbackBase_CreateDebugMenuCallbackInstance_Statics::NewProp_BPPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuCallbackBase_CreateDebugMenuCallbackInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuCallbackBase_CreateDebugMenuCallbackInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuCallbackBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuCallbackBase_CreateDebugMenuCallbackInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuCallbackBase, nullptr, "CreateDebugMenuCallbackInstance", nullptr, nullptr, sizeof(YDebugMenuCallbackBase_eventCreateDebugMenuCallbackInstance_Parms), Z_Construct_UFunction_UYDebugMenuCallbackBase_CreateDebugMenuCallbackInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuCallbackBase_CreateDebugMenuCallbackInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuCallbackBase_CreateDebugMenuCallbackInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuCallbackBase_CreateDebugMenuCallbackInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuCallbackBase_CreateDebugMenuCallbackInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuCallbackBase_CreateDebugMenuCallbackInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuCallbackBase_GeRegistKey_Statics
	{
		struct YDebugMenuCallbackBase_eventGeRegistKey_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuCallbackBase_GeRegistKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuCallbackBase_eventGeRegistKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuCallbackBase_GeRegistKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuCallbackBase_GeRegistKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuCallbackBase_GeRegistKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuCallbackBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuCallbackBase_GeRegistKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuCallbackBase, nullptr, "GeRegistKey", nullptr, nullptr, sizeof(YDebugMenuCallbackBase_eventGeRegistKey_Parms), Z_Construct_UFunction_UYDebugMenuCallbackBase_GeRegistKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuCallbackBase_GeRegistKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuCallbackBase_GeRegistKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuCallbackBase_GeRegistKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuCallbackBase_GeRegistKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuCallbackBase_GeRegistKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuCallbackBase_GetUIParam_Statics
	{
		struct YDebugMenuCallbackBase_eventGetUIParam_Parms
		{
			FYDebugMenuSimpleUIParamBase ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYDebugMenuCallbackBase_GetUIParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuCallbackBase_eventGetUIParam_Parms, ReturnValue), Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParamBase, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuCallbackBase_GetUIParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuCallbackBase_GetUIParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuCallbackBase_GetUIParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuCallbackBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuCallbackBase_GetUIParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuCallbackBase, nullptr, "GetUIParam", nullptr, nullptr, sizeof(YDebugMenuCallbackBase_eventGetUIParam_Parms), Z_Construct_UFunction_UYDebugMenuCallbackBase_GetUIParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuCallbackBase_GetUIParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuCallbackBase_GetUIParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuCallbackBase_GetUIParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuCallbackBase_GetUIParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuCallbackBase_GetUIParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuCallbackBase_GetWorldForBP_Statics
	{
		struct YDebugMenuCallbackBase_eventGetWorldForBP_Parms
		{
			UWorld* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYDebugMenuCallbackBase_GetWorldForBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuCallbackBase_eventGetWorldForBP_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuCallbackBase_GetWorldForBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuCallbackBase_GetWorldForBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuCallbackBase_GetWorldForBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuCallbackBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuCallbackBase_GetWorldForBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuCallbackBase, nullptr, "GetWorldForBP", nullptr, nullptr, sizeof(YDebugMenuCallbackBase_eventGetWorldForBP_Parms), Z_Construct_UFunction_UYDebugMenuCallbackBase_GetWorldForBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuCallbackBase_GetWorldForBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuCallbackBase_GetWorldForBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuCallbackBase_GetWorldForBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuCallbackBase_GetWorldForBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuCallbackBase_GetWorldForBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UIParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegistKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RegistKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI_Statics::NewProp_UIParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI_Statics::NewProp_UIParam = { "UIParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuCallbackBase_eventOnClickUI_Parms, UIParam), Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParamBase, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI_Statics::NewProp_UIParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI_Statics::NewProp_UIParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI_Statics::NewProp_RegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI_Statics::NewProp_RegistKey = { "RegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuCallbackBase_eventOnClickUI_Parms, RegistKey), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI_Statics::NewProp_RegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI_Statics::NewProp_RegistKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI_Statics::NewProp_UIParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI_Statics::NewProp_RegistKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuCallbackBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuCallbackBase, nullptr, "OnClickUI", nullptr, nullptr, sizeof(YDebugMenuCallbackBase_eventOnClickUI_Parms), Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI_Direct_Statics
	{
		struct YDebugMenuCallbackBase_eventOnClickUI_Direct_Parms
		{
			FYDebugMenuSimpleUIParamBase UIParam;
			FString RegistKey;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UIParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegistKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RegistKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI_Direct_Statics::NewProp_UIParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI_Direct_Statics::NewProp_UIParam = { "UIParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuCallbackBase_eventOnClickUI_Direct_Parms, UIParam), Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParamBase, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI_Direct_Statics::NewProp_UIParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI_Direct_Statics::NewProp_UIParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI_Direct_Statics::NewProp_RegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI_Direct_Statics::NewProp_RegistKey = { "RegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuCallbackBase_eventOnClickUI_Direct_Parms, RegistKey), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI_Direct_Statics::NewProp_RegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI_Direct_Statics::NewProp_RegistKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI_Direct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI_Direct_Statics::NewProp_UIParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI_Direct_Statics::NewProp_RegistKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI_Direct_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuCallbackBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI_Direct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuCallbackBase, nullptr, "OnClickUI_Direct", nullptr, nullptr, sizeof(YDebugMenuCallbackBase_eventOnClickUI_Direct_Parms), Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI_Direct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI_Direct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI_Direct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI_Direct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI_Direct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI_Direct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UIParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegistKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RegistKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI_Statics::NewProp_UIParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI_Statics::NewProp_UIParam = { "UIParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuCallbackBase_eventOnResetUI_Parms, UIParam), Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParamBase, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI_Statics::NewProp_UIParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI_Statics::NewProp_UIParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI_Statics::NewProp_RegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI_Statics::NewProp_RegistKey = { "RegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuCallbackBase_eventOnResetUI_Parms, RegistKey), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI_Statics::NewProp_RegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI_Statics::NewProp_RegistKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI_Statics::NewProp_UIParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI_Statics::NewProp_RegistKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuCallbackBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuCallbackBase, nullptr, "OnResetUI", nullptr, nullptr, sizeof(YDebugMenuCallbackBase_eventOnResetUI_Parms), Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI_Direct_Statics
	{
		struct YDebugMenuCallbackBase_eventOnResetUI_Direct_Parms
		{
			FYDebugMenuSimpleUIParamBase UIParam;
			FString RegistKey;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UIParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegistKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RegistKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI_Direct_Statics::NewProp_UIParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI_Direct_Statics::NewProp_UIParam = { "UIParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuCallbackBase_eventOnResetUI_Direct_Parms, UIParam), Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParamBase, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI_Direct_Statics::NewProp_UIParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI_Direct_Statics::NewProp_UIParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI_Direct_Statics::NewProp_RegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI_Direct_Statics::NewProp_RegistKey = { "RegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuCallbackBase_eventOnResetUI_Direct_Parms, RegistKey), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI_Direct_Statics::NewProp_RegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI_Direct_Statics::NewProp_RegistKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI_Direct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI_Direct_Statics::NewProp_UIParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI_Direct_Statics::NewProp_RegistKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI_Direct_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuCallbackBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI_Direct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuCallbackBase, nullptr, "OnResetUI_Direct", nullptr, nullptr, sizeof(YDebugMenuCallbackBase_eventOnResetUI_Direct_Parms), Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI_Direct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI_Direct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI_Direct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI_Direct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI_Direct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI_Direct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UIParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegistKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RegistKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI_Statics::NewProp_UIParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI_Statics::NewProp_UIParam = { "UIParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuCallbackBase_eventOnSetupUI_Parms, UIParam), Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParamBase, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI_Statics::NewProp_UIParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI_Statics::NewProp_UIParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI_Statics::NewProp_RegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI_Statics::NewProp_RegistKey = { "RegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuCallbackBase_eventOnSetupUI_Parms, RegistKey), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI_Statics::NewProp_RegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI_Statics::NewProp_RegistKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI_Statics::NewProp_UIParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI_Statics::NewProp_RegistKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuCallbackBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuCallbackBase, nullptr, "OnSetupUI", nullptr, nullptr, sizeof(YDebugMenuCallbackBase_eventOnSetupUI_Parms), Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI_Direct_Statics
	{
		struct YDebugMenuCallbackBase_eventOnSetupUI_Direct_Parms
		{
			FYDebugMenuSimpleUIParamBase UIParam;
			FString RegistKey;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UIParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegistKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RegistKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI_Direct_Statics::NewProp_UIParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI_Direct_Statics::NewProp_UIParam = { "UIParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuCallbackBase_eventOnSetupUI_Direct_Parms, UIParam), Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParamBase, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI_Direct_Statics::NewProp_UIParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI_Direct_Statics::NewProp_UIParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI_Direct_Statics::NewProp_RegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI_Direct_Statics::NewProp_RegistKey = { "RegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuCallbackBase_eventOnSetupUI_Direct_Parms, RegistKey), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI_Direct_Statics::NewProp_RegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI_Direct_Statics::NewProp_RegistKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI_Direct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI_Direct_Statics::NewProp_UIParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI_Direct_Statics::NewProp_RegistKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI_Direct_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuCallbackBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI_Direct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuCallbackBase, nullptr, "OnSetupUI_Direct", nullptr, nullptr, sizeof(YDebugMenuCallbackBase_eventOnSetupUI_Direct_Parms), Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI_Direct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI_Direct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI_Direct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI_Direct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI_Direct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI_Direct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UIParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegistKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RegistKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged_Statics::NewProp_UIParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged_Statics::NewProp_UIParam = { "UIParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuCallbackBase_eventOnUIValueChanged_Parms, UIParam), Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParamBase, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged_Statics::NewProp_UIParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged_Statics::NewProp_UIParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged_Statics::NewProp_RegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged_Statics::NewProp_RegistKey = { "RegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuCallbackBase_eventOnUIValueChanged_Parms, RegistKey), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged_Statics::NewProp_RegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged_Statics::NewProp_RegistKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged_Statics::NewProp_UIParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged_Statics::NewProp_RegistKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuCallbackBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuCallbackBase, nullptr, "OnUIValueChanged", nullptr, nullptr, sizeof(YDebugMenuCallbackBase_eventOnUIValueChanged_Parms), Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged_Direct_Statics
	{
		struct YDebugMenuCallbackBase_eventOnUIValueChanged_Direct_Parms
		{
			FYDebugMenuSimpleUIParamBase UIParam;
			FString RegistKey;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UIParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegistKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RegistKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged_Direct_Statics::NewProp_UIParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged_Direct_Statics::NewProp_UIParam = { "UIParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuCallbackBase_eventOnUIValueChanged_Direct_Parms, UIParam), Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParamBase, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged_Direct_Statics::NewProp_UIParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged_Direct_Statics::NewProp_UIParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged_Direct_Statics::NewProp_RegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged_Direct_Statics::NewProp_RegistKey = { "RegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuCallbackBase_eventOnUIValueChanged_Direct_Parms, RegistKey), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged_Direct_Statics::NewProp_RegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged_Direct_Statics::NewProp_RegistKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged_Direct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged_Direct_Statics::NewProp_UIParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged_Direct_Statics::NewProp_RegistKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged_Direct_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuCallbackBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged_Direct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuCallbackBase, nullptr, "OnUIValueChanged_Direct", nullptr, nullptr, sizeof(YDebugMenuCallbackBase_eventOnUIValueChanged_Direct_Parms), Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged_Direct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged_Direct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged_Direct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged_Direct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged_Direct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged_Direct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYDebugMenuCallbackBase_NoRegister()
	{
		return UYDebugMenuCallbackBase::StaticClass();
	}
	struct Z_Construct_UClass_UYDebugMenuCallbackBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSetupUIDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSetupUIDispatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnResetUIDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResetUIDispatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnClickUIDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnClickUIDispatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUIValueChangedDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnUIValueChangedDispatcher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYDebugMenuCallbackBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UYDBG_ReferBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yDebug,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYDebugMenuCallbackBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYDebugMenuCallbackBase_CreateDebugMenuCallbackInstance, "CreateDebugMenuCallbackInstance" }, // 4254451177
		{ &Z_Construct_UFunction_UYDebugMenuCallbackBase_GeRegistKey, "GeRegistKey" }, // 375896529
		{ &Z_Construct_UFunction_UYDebugMenuCallbackBase_GetUIParam, "GetUIParam" }, // 1370991195
		{ &Z_Construct_UFunction_UYDebugMenuCallbackBase_GetWorldForBP, "GetWorldForBP" }, // 3202160068
		{ &Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI, "OnClickUI" }, // 1661324747
		{ &Z_Construct_UFunction_UYDebugMenuCallbackBase_OnClickUI_Direct, "OnClickUI_Direct" }, // 253808969
		{ &Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI, "OnResetUI" }, // 1405308217
		{ &Z_Construct_UFunction_UYDebugMenuCallbackBase_OnResetUI_Direct, "OnResetUI_Direct" }, // 1342653270
		{ &Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI, "OnSetupUI" }, // 1299667175
		{ &Z_Construct_UFunction_UYDebugMenuCallbackBase_OnSetupUI_Direct, "OnSetupUI_Direct" }, // 760830342
		{ &Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged, "OnUIValueChanged" }, // 2689160120
		{ &Z_Construct_UFunction_UYDebugMenuCallbackBase_OnUIValueChanged_Direct, "OnUIValueChanged_Direct" }, // 954472064
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYDebugMenuCallbackBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YDebugMenuCallbackBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YDebugMenuCallbackBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYDebugMenuCallbackBase_Statics::NewProp_OnSetupUIDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDebugMenuCallbackBase" },
		{ "ModuleRelativePath", "Public/YDebugMenuCallbackBase.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UYDebugMenuCallbackBase_Statics::NewProp_OnSetupUIDispatcher = { "OnSetupUIDispatcher", nullptr, (EPropertyFlags)0x0010000000080005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYDebugMenuCallbackBase, OnSetupUIDispatcher), Z_Construct_UDelegateFunction_yDebug_YDebugMenuCallbackDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UYDebugMenuCallbackBase_Statics::NewProp_OnSetupUIDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYDebugMenuCallbackBase_Statics::NewProp_OnSetupUIDispatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYDebugMenuCallbackBase_Statics::NewProp_OnResetUIDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDebugMenuCallbackBase" },
		{ "ModuleRelativePath", "Public/YDebugMenuCallbackBase.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UYDebugMenuCallbackBase_Statics::NewProp_OnResetUIDispatcher = { "OnResetUIDispatcher", nullptr, (EPropertyFlags)0x0010000000080005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYDebugMenuCallbackBase, OnResetUIDispatcher), Z_Construct_UDelegateFunction_yDebug_YDebugMenuCallbackDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UYDebugMenuCallbackBase_Statics::NewProp_OnResetUIDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYDebugMenuCallbackBase_Statics::NewProp_OnResetUIDispatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYDebugMenuCallbackBase_Statics::NewProp_OnClickUIDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDebugMenuCallbackBase" },
		{ "ModuleRelativePath", "Public/YDebugMenuCallbackBase.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UYDebugMenuCallbackBase_Statics::NewProp_OnClickUIDispatcher = { "OnClickUIDispatcher", nullptr, (EPropertyFlags)0x0010000000080005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYDebugMenuCallbackBase, OnClickUIDispatcher), Z_Construct_UDelegateFunction_yDebug_YDebugMenuCallbackDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UYDebugMenuCallbackBase_Statics::NewProp_OnClickUIDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYDebugMenuCallbackBase_Statics::NewProp_OnClickUIDispatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYDebugMenuCallbackBase_Statics::NewProp_OnUIValueChangedDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDebugMenuCallbackBase" },
		{ "ModuleRelativePath", "Public/YDebugMenuCallbackBase.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UYDebugMenuCallbackBase_Statics::NewProp_OnUIValueChangedDispatcher = { "OnUIValueChangedDispatcher", nullptr, (EPropertyFlags)0x0010000000080005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYDebugMenuCallbackBase, OnUIValueChangedDispatcher), Z_Construct_UDelegateFunction_yDebug_YDebugMenuCallbackDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UYDebugMenuCallbackBase_Statics::NewProp_OnUIValueChangedDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYDebugMenuCallbackBase_Statics::NewProp_OnUIValueChangedDispatcher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYDebugMenuCallbackBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYDebugMenuCallbackBase_Statics::NewProp_OnSetupUIDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYDebugMenuCallbackBase_Statics::NewProp_OnResetUIDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYDebugMenuCallbackBase_Statics::NewProp_OnClickUIDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYDebugMenuCallbackBase_Statics::NewProp_OnUIValueChangedDispatcher,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYDebugMenuCallbackBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYDebugMenuCallbackBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYDebugMenuCallbackBase_Statics::ClassParams = {
		&UYDebugMenuCallbackBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UYDebugMenuCallbackBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UYDebugMenuCallbackBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UYDebugMenuCallbackBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYDebugMenuCallbackBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYDebugMenuCallbackBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYDebugMenuCallbackBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYDebugMenuCallbackBase, 2860431857);
	template<> YDEBUG_API UClass* StaticClass<UYDebugMenuCallbackBase>()
	{
		return UYDebugMenuCallbackBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYDebugMenuCallbackBase(Z_Construct_UClass_UYDebugMenuCallbackBase, &UYDebugMenuCallbackBase::StaticClass, TEXT("/Script/yDebug"), TEXT("UYDebugMenuCallbackBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYDebugMenuCallbackBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
