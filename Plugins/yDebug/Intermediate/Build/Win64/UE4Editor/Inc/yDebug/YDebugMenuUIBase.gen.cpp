// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yDebug/Public/YDebugMenuUIBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYDebugMenuUIBase() {}
// Cross Module References
	YDEBUG_API UClass* Z_Construct_UClass_UYDebugMenuUIBase_NoRegister();
	YDEBUG_API UClass* Z_Construct_UClass_UYDebugMenuUIBase();
	YDEBUG_API UClass* Z_Construct_UClass_UYDBG_ReferBase();
	UPackage* Z_Construct_UPackage__Script_yDebug();
	YDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParam();
	YDEBUG_API UEnum* Z_Construct_UEnum_yDebug_FYDebugMenuDialogButtonType();
	YDEBUG_API UEnum* Z_Construct_UEnum_yDebug_FYDebugMenuDialogResult();
	YDEBUG_API UFunction* Z_Construct_UDelegateFunction_yDebug_DebugMenuNotifyDispatcher__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UYDebugMenuUIBase::execAddUI)
	{
		P_GET_STRUCT_REF(FYDebugMenuSimpleUIParam,Z_Param_Out__stParam);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddUI(Z_Param_Out__stParam,Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuUIBase::execDrawSimpleUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawSimpleUI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuUIBase::execFindChildMenuUI)
	{
		P_GET_STRUCT_REF(FYDebugMenuSimpleUIParam,Z_Param_Out__stDebugMenuSimpleUIParam);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindChildMenuUI(Z_Param_Out__stDebugMenuSimpleUIParam,Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuUIBase::execIsDisabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDisabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuUIBase::execRemoveUI)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveUI(Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuUIBase::execResetUIValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ResetUIValue(Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuUIBase::execSetDisabled)
	{
		P_GET_UBOOL(Z_Param__bDisabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisabled(Z_Param__bDisabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuUIBase::execShowDialog)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strTitle);
		P_GET_PROPERTY(FStrProperty,Z_Param__strMessage);
		P_GET_ENUM(FYDebugMenuDialogButtonType,Z_Param__enButtonType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FYDebugMenuDialogResult*)Z_Param__Result=P_THIS->ShowDialog(Z_Param__strTitle,Z_Param__strMessage,FYDebugMenuDialogButtonType(Z_Param__enButtonType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuUIBase::execUpdateChildMenuUI)
	{
		P_GET_STRUCT_REF(FYDebugMenuSimpleUIParam,Z_Param_Out__stDebugMenuSimpleUIParam);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateChildMenuUI(Z_Param_Out__stDebugMenuSimpleUIParam,Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	void UYDebugMenuUIBase::StaticRegisterNativesUYDebugMenuUIBase()
	{
		UClass* Class = UYDebugMenuUIBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddUI", &UYDebugMenuUIBase::execAddUI },
			{ "DrawSimpleUI", &UYDebugMenuUIBase::execDrawSimpleUI },
			{ "FindChildMenuUI", &UYDebugMenuUIBase::execFindChildMenuUI },
			{ "IsDisabled", &UYDebugMenuUIBase::execIsDisabled },
			{ "RemoveUI", &UYDebugMenuUIBase::execRemoveUI },
			{ "ResetUIValue", &UYDebugMenuUIBase::execResetUIValue },
			{ "SetDisabled", &UYDebugMenuUIBase::execSetDisabled },
			{ "ShowDialog", &UYDebugMenuUIBase::execShowDialog },
			{ "UpdateChildMenuUI", &UYDebugMenuUIBase::execUpdateChildMenuUI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYDebugMenuUIBase_AddUI_Statics
	{
		struct YDebugMenuUIBase_eventAddUI_Parms
		{
			FYDebugMenuSimpleUIParam _stParam;
			FString _strRegistKey;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strRegistKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strRegistKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuUIBase_AddUI_Statics::NewProp__stParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYDebugMenuUIBase_AddUI_Statics::NewProp__stParam = { "_stParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuUIBase_eventAddUI_Parms, _stParam), Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParam, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuUIBase_AddUI_Statics::NewProp__stParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuUIBase_AddUI_Statics::NewProp__stParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuUIBase_AddUI_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuUIBase_AddUI_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuUIBase_eventAddUI_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuUIBase_AddUI_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuUIBase_AddUI_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UYDebugMenuUIBase_AddUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuUIBase_eventAddUI_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuUIBase_AddUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuUIBase_eventAddUI_Parms), &Z_Construct_UFunction_UYDebugMenuUIBase_AddUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuUIBase_AddUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuUIBase_AddUI_Statics::NewProp__stParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuUIBase_AddUI_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuUIBase_AddUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuUIBase_AddUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuUIBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuUIBase_AddUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuUIBase, nullptr, "AddUI", nullptr, nullptr, sizeof(YDebugMenuUIBase_eventAddUI_Parms), Z_Construct_UFunction_UYDebugMenuUIBase_AddUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuUIBase_AddUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuUIBase_AddUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuUIBase_AddUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuUIBase_AddUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuUIBase_AddUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuUIBase_DrawSimpleUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuUIBase_DrawSimpleUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuUIBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuUIBase_DrawSimpleUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuUIBase, nullptr, "DrawSimpleUI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuUIBase_DrawSimpleUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuUIBase_DrawSimpleUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuUIBase_DrawSimpleUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuUIBase_DrawSimpleUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuUIBase_FindChildMenuUI_Statics
	{
		struct YDebugMenuUIBase_eventFindChildMenuUI_Parms
		{
			FYDebugMenuSimpleUIParam _stDebugMenuSimpleUIParam;
			FString _strRegistKey;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stDebugMenuSimpleUIParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strRegistKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strRegistKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYDebugMenuUIBase_FindChildMenuUI_Statics::NewProp__stDebugMenuSimpleUIParam = { "_stDebugMenuSimpleUIParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuUIBase_eventFindChildMenuUI_Parms, _stDebugMenuSimpleUIParam), Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuUIBase_FindChildMenuUI_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuUIBase_FindChildMenuUI_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuUIBase_eventFindChildMenuUI_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuUIBase_FindChildMenuUI_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuUIBase_FindChildMenuUI_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UYDebugMenuUIBase_FindChildMenuUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuUIBase_eventFindChildMenuUI_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuUIBase_FindChildMenuUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuUIBase_eventFindChildMenuUI_Parms), &Z_Construct_UFunction_UYDebugMenuUIBase_FindChildMenuUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuUIBase_FindChildMenuUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuUIBase_FindChildMenuUI_Statics::NewProp__stDebugMenuSimpleUIParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuUIBase_FindChildMenuUI_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuUIBase_FindChildMenuUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuUIBase_FindChildMenuUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuUIBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuUIBase_FindChildMenuUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuUIBase, nullptr, "FindChildMenuUI", nullptr, nullptr, sizeof(YDebugMenuUIBase_eventFindChildMenuUI_Parms), Z_Construct_UFunction_UYDebugMenuUIBase_FindChildMenuUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuUIBase_FindChildMenuUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuUIBase_FindChildMenuUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuUIBase_FindChildMenuUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuUIBase_FindChildMenuUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuUIBase_FindChildMenuUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuUIBase_IsDisabled_Statics
	{
		struct YDebugMenuUIBase_eventIsDisabled_Parms
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
	void Z_Construct_UFunction_UYDebugMenuUIBase_IsDisabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuUIBase_eventIsDisabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuUIBase_IsDisabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuUIBase_eventIsDisabled_Parms), &Z_Construct_UFunction_UYDebugMenuUIBase_IsDisabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuUIBase_IsDisabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuUIBase_IsDisabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuUIBase_IsDisabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuUIBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuUIBase_IsDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuUIBase, nullptr, "IsDisabled", nullptr, nullptr, sizeof(YDebugMenuUIBase_eventIsDisabled_Parms), Z_Construct_UFunction_UYDebugMenuUIBase_IsDisabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuUIBase_IsDisabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuUIBase_IsDisabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuUIBase_IsDisabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuUIBase_IsDisabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuUIBase_IsDisabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuUIBase_RemoveUI_Statics
	{
		struct YDebugMenuUIBase_eventRemoveUI_Parms
		{
			FString _strRegistKey;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strRegistKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strRegistKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuUIBase_RemoveUI_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuUIBase_RemoveUI_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuUIBase_eventRemoveUI_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuUIBase_RemoveUI_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuUIBase_RemoveUI_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UYDebugMenuUIBase_RemoveUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuUIBase_eventRemoveUI_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuUIBase_RemoveUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuUIBase_eventRemoveUI_Parms), &Z_Construct_UFunction_UYDebugMenuUIBase_RemoveUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuUIBase_RemoveUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuUIBase_RemoveUI_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuUIBase_RemoveUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuUIBase_RemoveUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuUIBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuUIBase_RemoveUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuUIBase, nullptr, "RemoveUI", nullptr, nullptr, sizeof(YDebugMenuUIBase_eventRemoveUI_Parms), Z_Construct_UFunction_UYDebugMenuUIBase_RemoveUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuUIBase_RemoveUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuUIBase_RemoveUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuUIBase_RemoveUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuUIBase_RemoveUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuUIBase_RemoveUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuUIBase_ResetUIValue_Statics
	{
		struct YDebugMenuUIBase_eventResetUIValue_Parms
		{
			FString _strRegistKey;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strRegistKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strRegistKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuUIBase_ResetUIValue_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuUIBase_ResetUIValue_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuUIBase_eventResetUIValue_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuUIBase_ResetUIValue_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuUIBase_ResetUIValue_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UYDebugMenuUIBase_ResetUIValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuUIBase_eventResetUIValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuUIBase_ResetUIValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuUIBase_eventResetUIValue_Parms), &Z_Construct_UFunction_UYDebugMenuUIBase_ResetUIValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuUIBase_ResetUIValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuUIBase_ResetUIValue_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuUIBase_ResetUIValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuUIBase_ResetUIValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuUIBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuUIBase_ResetUIValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuUIBase, nullptr, "ResetUIValue", nullptr, nullptr, sizeof(YDebugMenuUIBase_eventResetUIValue_Parms), Z_Construct_UFunction_UYDebugMenuUIBase_ResetUIValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuUIBase_ResetUIValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuUIBase_ResetUIValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuUIBase_ResetUIValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuUIBase_ResetUIValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuUIBase_ResetUIValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuUIBase_SetDisabled_Statics
	{
		struct YDebugMenuUIBase_eventSetDisabled_Parms
		{
			bool _bDisabled;
		};
		static void NewProp__bDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bDisabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYDebugMenuUIBase_SetDisabled_Statics::NewProp__bDisabled_SetBit(void* Obj)
	{
		((YDebugMenuUIBase_eventSetDisabled_Parms*)Obj)->_bDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuUIBase_SetDisabled_Statics::NewProp__bDisabled = { "_bDisabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuUIBase_eventSetDisabled_Parms), &Z_Construct_UFunction_UYDebugMenuUIBase_SetDisabled_Statics::NewProp__bDisabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuUIBase_SetDisabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuUIBase_SetDisabled_Statics::NewProp__bDisabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuUIBase_SetDisabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuUIBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuUIBase_SetDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuUIBase, nullptr, "SetDisabled", nullptr, nullptr, sizeof(YDebugMenuUIBase_eventSetDisabled_Parms), Z_Construct_UFunction_UYDebugMenuUIBase_SetDisabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuUIBase_SetDisabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuUIBase_SetDisabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuUIBase_SetDisabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuUIBase_SetDisabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuUIBase_SetDisabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuUIBase_ShowDialog_Statics
	{
		struct YDebugMenuUIBase_eventShowDialog_Parms
		{
			FString _strTitle;
			FString _strMessage;
			FYDebugMenuDialogButtonType _enButtonType;
			FYDebugMenuDialogResult ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strMessage;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enButtonType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enButtonType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuUIBase_ShowDialog_Statics::NewProp__strTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuUIBase_ShowDialog_Statics::NewProp__strTitle = { "_strTitle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuUIBase_eventShowDialog_Parms, _strTitle), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuUIBase_ShowDialog_Statics::NewProp__strTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuUIBase_ShowDialog_Statics::NewProp__strTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuUIBase_ShowDialog_Statics::NewProp__strMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuUIBase_ShowDialog_Statics::NewProp__strMessage = { "_strMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuUIBase_eventShowDialog_Parms, _strMessage), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuUIBase_ShowDialog_Statics::NewProp__strMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuUIBase_ShowDialog_Statics::NewProp__strMessage_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYDebugMenuUIBase_ShowDialog_Statics::NewProp__enButtonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYDebugMenuUIBase_ShowDialog_Statics::NewProp__enButtonType = { "_enButtonType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuUIBase_eventShowDialog_Parms, _enButtonType), Z_Construct_UEnum_yDebug_FYDebugMenuDialogButtonType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYDebugMenuUIBase_ShowDialog_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYDebugMenuUIBase_ShowDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuUIBase_eventShowDialog_Parms, ReturnValue), Z_Construct_UEnum_yDebug_FYDebugMenuDialogResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuUIBase_ShowDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuUIBase_ShowDialog_Statics::NewProp__strTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuUIBase_ShowDialog_Statics::NewProp__strMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuUIBase_ShowDialog_Statics::NewProp__enButtonType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuUIBase_ShowDialog_Statics::NewProp__enButtonType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuUIBase_ShowDialog_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuUIBase_ShowDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuUIBase_ShowDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuUIBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuUIBase_ShowDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuUIBase, nullptr, "ShowDialog", nullptr, nullptr, sizeof(YDebugMenuUIBase_eventShowDialog_Parms), Z_Construct_UFunction_UYDebugMenuUIBase_ShowDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuUIBase_ShowDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuUIBase_ShowDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuUIBase_ShowDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuUIBase_ShowDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuUIBase_ShowDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuUIBase_UpdateChildMenuUI_Statics
	{
		struct YDebugMenuUIBase_eventUpdateChildMenuUI_Parms
		{
			FYDebugMenuSimpleUIParam _stDebugMenuSimpleUIParam;
			FString _strRegistKey;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stDebugMenuSimpleUIParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stDebugMenuSimpleUIParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strRegistKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strRegistKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuUIBase_UpdateChildMenuUI_Statics::NewProp__stDebugMenuSimpleUIParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYDebugMenuUIBase_UpdateChildMenuUI_Statics::NewProp__stDebugMenuSimpleUIParam = { "_stDebugMenuSimpleUIParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuUIBase_eventUpdateChildMenuUI_Parms, _stDebugMenuSimpleUIParam), Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParam, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuUIBase_UpdateChildMenuUI_Statics::NewProp__stDebugMenuSimpleUIParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuUIBase_UpdateChildMenuUI_Statics::NewProp__stDebugMenuSimpleUIParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuUIBase_UpdateChildMenuUI_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuUIBase_UpdateChildMenuUI_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuUIBase_eventUpdateChildMenuUI_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuUIBase_UpdateChildMenuUI_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuUIBase_UpdateChildMenuUI_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UYDebugMenuUIBase_UpdateChildMenuUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuUIBase_eventUpdateChildMenuUI_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuUIBase_UpdateChildMenuUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuUIBase_eventUpdateChildMenuUI_Parms), &Z_Construct_UFunction_UYDebugMenuUIBase_UpdateChildMenuUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuUIBase_UpdateChildMenuUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuUIBase_UpdateChildMenuUI_Statics::NewProp__stDebugMenuSimpleUIParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuUIBase_UpdateChildMenuUI_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuUIBase_UpdateChildMenuUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuUIBase_UpdateChildMenuUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuUIBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuUIBase_UpdateChildMenuUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuUIBase, nullptr, "UpdateChildMenuUI", nullptr, nullptr, sizeof(YDebugMenuUIBase_eventUpdateChildMenuUI_Parms), Z_Construct_UFunction_UYDebugMenuUIBase_UpdateChildMenuUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuUIBase_UpdateChildMenuUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuUIBase_UpdateChildMenuUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuUIBase_UpdateChildMenuUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuUIBase_UpdateChildMenuUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuUIBase_UpdateChildMenuUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYDebugMenuUIBase_NoRegister()
	{
		return UYDebugMenuUIBase::StaticClass();
	}
	struct Z_Construct_UClass_UYDebugMenuUIBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugMenuNotifyDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_DebugMenuNotifyDispatcher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYDebugMenuUIBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UYDBG_ReferBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yDebug,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYDebugMenuUIBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYDebugMenuUIBase_AddUI, "AddUI" }, // 3993877153
		{ &Z_Construct_UFunction_UYDebugMenuUIBase_DrawSimpleUI, "DrawSimpleUI" }, // 324306445
		{ &Z_Construct_UFunction_UYDebugMenuUIBase_FindChildMenuUI, "FindChildMenuUI" }, // 2401586284
		{ &Z_Construct_UFunction_UYDebugMenuUIBase_IsDisabled, "IsDisabled" }, // 260027863
		{ &Z_Construct_UFunction_UYDebugMenuUIBase_RemoveUI, "RemoveUI" }, // 2174687189
		{ &Z_Construct_UFunction_UYDebugMenuUIBase_ResetUIValue, "ResetUIValue" }, // 962396400
		{ &Z_Construct_UFunction_UYDebugMenuUIBase_SetDisabled, "SetDisabled" }, // 2780913685
		{ &Z_Construct_UFunction_UYDebugMenuUIBase_ShowDialog, "ShowDialog" }, // 618983294
		{ &Z_Construct_UFunction_UYDebugMenuUIBase_UpdateChildMenuUI, "UpdateChildMenuUI" }, // 346580457
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYDebugMenuUIBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YDebugMenuUIBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YDebugMenuUIBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYDebugMenuUIBase_Statics::NewProp_DebugMenuNotifyDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDebugMenuUIBase" },
		{ "ModuleRelativePath", "Public/YDebugMenuUIBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UYDebugMenuUIBase_Statics::NewProp_DebugMenuNotifyDispatcher = { "DebugMenuNotifyDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYDebugMenuUIBase, DebugMenuNotifyDispatcher), Z_Construct_UDelegateFunction_yDebug_DebugMenuNotifyDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UYDebugMenuUIBase_Statics::NewProp_DebugMenuNotifyDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYDebugMenuUIBase_Statics::NewProp_DebugMenuNotifyDispatcher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYDebugMenuUIBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYDebugMenuUIBase_Statics::NewProp_DebugMenuNotifyDispatcher,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYDebugMenuUIBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYDebugMenuUIBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYDebugMenuUIBase_Statics::ClassParams = {
		&UYDebugMenuUIBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UYDebugMenuUIBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UYDebugMenuUIBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UYDebugMenuUIBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYDebugMenuUIBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYDebugMenuUIBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYDebugMenuUIBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYDebugMenuUIBase, 2280771650);
	template<> YDEBUG_API UClass* StaticClass<UYDebugMenuUIBase>()
	{
		return UYDebugMenuUIBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYDebugMenuUIBase(Z_Construct_UClass_UYDebugMenuUIBase, &UYDebugMenuUIBase::StaticClass, TEXT("/Script/yDebug"), TEXT("UYDebugMenuUIBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYDebugMenuUIBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
