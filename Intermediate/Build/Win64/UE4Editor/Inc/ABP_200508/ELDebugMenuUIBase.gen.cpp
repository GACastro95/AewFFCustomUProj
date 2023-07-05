// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELDebugMenuUIBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELDebugMenuUIBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuUIBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuUIBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELDBG_ReferBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParam();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_FELDebugMenuDialogButtonType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_FELDebugMenuDialogResult();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_ELDebugMenuNotifyDispatcher__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UELDebugMenuUIBase::execAddUI)
	{
		P_GET_STRUCT_REF(FELDebugMenuSimpleUIParam,Z_Param_Out__stParam);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddUI(Z_Param_Out__stParam,Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuUIBase::execDrawSimpleUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawSimpleUI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuUIBase::execFindChildMenuUI)
	{
		P_GET_STRUCT_REF(FELDebugMenuSimpleUIParam,Z_Param_Out__rstParam);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindChildMenuUI(Z_Param_Out__rstParam,Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuUIBase::execIsDisabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDisabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuUIBase::execOnUIUpdated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUIUpdated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuUIBase::execRemoveUI)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveUI(Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuUIBase::execResetUIValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ResetUIValue(Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuUIBase::execSetDisabled)
	{
		P_GET_UBOOL(Z_Param__bDisabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisabled(Z_Param__bDisabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuUIBase::execShowDialog)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strTitle);
		P_GET_PROPERTY(FStrProperty,Z_Param__strMessage);
		P_GET_ENUM(FELDebugMenuDialogButtonType,Z_Param__enButtonType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FELDebugMenuDialogResult*)Z_Param__Result=P_THIS->ShowDialog(Z_Param__strTitle,Z_Param__strMessage,FELDebugMenuDialogButtonType(Z_Param__enButtonType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuUIBase::execUpdateChildMenuUI)
	{
		P_GET_STRUCT_REF(FELDebugMenuSimpleUIParam,Z_Param_Out__rstParam);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateChildMenuUI(Z_Param_Out__rstParam,Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	void UELDebugMenuUIBase::StaticRegisterNativesUELDebugMenuUIBase()
	{
		UClass* Class = UELDebugMenuUIBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddUI", &UELDebugMenuUIBase::execAddUI },
			{ "DrawSimpleUI", &UELDebugMenuUIBase::execDrawSimpleUI },
			{ "FindChildMenuUI", &UELDebugMenuUIBase::execFindChildMenuUI },
			{ "IsDisabled", &UELDebugMenuUIBase::execIsDisabled },
			{ "OnUIUpdated", &UELDebugMenuUIBase::execOnUIUpdated },
			{ "RemoveUI", &UELDebugMenuUIBase::execRemoveUI },
			{ "ResetUIValue", &UELDebugMenuUIBase::execResetUIValue },
			{ "SetDisabled", &UELDebugMenuUIBase::execSetDisabled },
			{ "ShowDialog", &UELDebugMenuUIBase::execShowDialog },
			{ "UpdateChildMenuUI", &UELDebugMenuUIBase::execUpdateChildMenuUI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELDebugMenuUIBase_AddUI_Statics
	{
		struct ELDebugMenuUIBase_eventAddUI_Parms
		{
			FELDebugMenuSimpleUIParam _stParam;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuUIBase_AddUI_Statics::NewProp__stParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELDebugMenuUIBase_AddUI_Statics::NewProp__stParam = { "_stParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuUIBase_eventAddUI_Parms, _stParam), Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParam, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuUIBase_AddUI_Statics::NewProp__stParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuUIBase_AddUI_Statics::NewProp__stParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuUIBase_AddUI_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuUIBase_AddUI_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuUIBase_eventAddUI_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuUIBase_AddUI_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuUIBase_AddUI_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UELDebugMenuUIBase_AddUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuUIBase_eventAddUI_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuUIBase_AddUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuUIBase_eventAddUI_Parms), &Z_Construct_UFunction_UELDebugMenuUIBase_AddUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuUIBase_AddUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuUIBase_AddUI_Statics::NewProp__stParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuUIBase_AddUI_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuUIBase_AddUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuUIBase_AddUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuUIBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuUIBase_AddUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuUIBase, nullptr, "AddUI", nullptr, nullptr, sizeof(ELDebugMenuUIBase_eventAddUI_Parms), Z_Construct_UFunction_UELDebugMenuUIBase_AddUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuUIBase_AddUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuUIBase_AddUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuUIBase_AddUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuUIBase_AddUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuUIBase_AddUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuUIBase_DrawSimpleUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuUIBase_DrawSimpleUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuUIBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuUIBase_DrawSimpleUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuUIBase, nullptr, "DrawSimpleUI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuUIBase_DrawSimpleUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuUIBase_DrawSimpleUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuUIBase_DrawSimpleUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuUIBase_DrawSimpleUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuUIBase_FindChildMenuUI_Statics
	{
		struct ELDebugMenuUIBase_eventFindChildMenuUI_Parms
		{
			FELDebugMenuSimpleUIParam _rstParam;
			FString _strRegistKey;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rstParam;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELDebugMenuUIBase_FindChildMenuUI_Statics::NewProp__rstParam = { "_rstParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuUIBase_eventFindChildMenuUI_Parms, _rstParam), Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuUIBase_FindChildMenuUI_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuUIBase_FindChildMenuUI_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuUIBase_eventFindChildMenuUI_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuUIBase_FindChildMenuUI_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuUIBase_FindChildMenuUI_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UELDebugMenuUIBase_FindChildMenuUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuUIBase_eventFindChildMenuUI_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuUIBase_FindChildMenuUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuUIBase_eventFindChildMenuUI_Parms), &Z_Construct_UFunction_UELDebugMenuUIBase_FindChildMenuUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuUIBase_FindChildMenuUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuUIBase_FindChildMenuUI_Statics::NewProp__rstParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuUIBase_FindChildMenuUI_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuUIBase_FindChildMenuUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuUIBase_FindChildMenuUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuUIBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuUIBase_FindChildMenuUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuUIBase, nullptr, "FindChildMenuUI", nullptr, nullptr, sizeof(ELDebugMenuUIBase_eventFindChildMenuUI_Parms), Z_Construct_UFunction_UELDebugMenuUIBase_FindChildMenuUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuUIBase_FindChildMenuUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuUIBase_FindChildMenuUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuUIBase_FindChildMenuUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuUIBase_FindChildMenuUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuUIBase_FindChildMenuUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuUIBase_IsDisabled_Statics
	{
		struct ELDebugMenuUIBase_eventIsDisabled_Parms
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
	void Z_Construct_UFunction_UELDebugMenuUIBase_IsDisabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuUIBase_eventIsDisabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuUIBase_IsDisabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuUIBase_eventIsDisabled_Parms), &Z_Construct_UFunction_UELDebugMenuUIBase_IsDisabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuUIBase_IsDisabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuUIBase_IsDisabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuUIBase_IsDisabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuUIBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuUIBase_IsDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuUIBase, nullptr, "IsDisabled", nullptr, nullptr, sizeof(ELDebugMenuUIBase_eventIsDisabled_Parms), Z_Construct_UFunction_UELDebugMenuUIBase_IsDisabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuUIBase_IsDisabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuUIBase_IsDisabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuUIBase_IsDisabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuUIBase_IsDisabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuUIBase_IsDisabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuUIBase_OnUIUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuUIBase_OnUIUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuUIBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuUIBase_OnUIUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuUIBase, nullptr, "OnUIUpdated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuUIBase_OnUIUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuUIBase_OnUIUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuUIBase_OnUIUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuUIBase_OnUIUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuUIBase_RemoveUI_Statics
	{
		struct ELDebugMenuUIBase_eventRemoveUI_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuUIBase_RemoveUI_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuUIBase_RemoveUI_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuUIBase_eventRemoveUI_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuUIBase_RemoveUI_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuUIBase_RemoveUI_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UELDebugMenuUIBase_RemoveUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuUIBase_eventRemoveUI_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuUIBase_RemoveUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuUIBase_eventRemoveUI_Parms), &Z_Construct_UFunction_UELDebugMenuUIBase_RemoveUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuUIBase_RemoveUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuUIBase_RemoveUI_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuUIBase_RemoveUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuUIBase_RemoveUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuUIBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuUIBase_RemoveUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuUIBase, nullptr, "RemoveUI", nullptr, nullptr, sizeof(ELDebugMenuUIBase_eventRemoveUI_Parms), Z_Construct_UFunction_UELDebugMenuUIBase_RemoveUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuUIBase_RemoveUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuUIBase_RemoveUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuUIBase_RemoveUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuUIBase_RemoveUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuUIBase_RemoveUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuUIBase_ResetUIValue_Statics
	{
		struct ELDebugMenuUIBase_eventResetUIValue_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuUIBase_ResetUIValue_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuUIBase_ResetUIValue_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuUIBase_eventResetUIValue_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuUIBase_ResetUIValue_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuUIBase_ResetUIValue_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UELDebugMenuUIBase_ResetUIValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuUIBase_eventResetUIValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuUIBase_ResetUIValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuUIBase_eventResetUIValue_Parms), &Z_Construct_UFunction_UELDebugMenuUIBase_ResetUIValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuUIBase_ResetUIValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuUIBase_ResetUIValue_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuUIBase_ResetUIValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuUIBase_ResetUIValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuUIBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuUIBase_ResetUIValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuUIBase, nullptr, "ResetUIValue", nullptr, nullptr, sizeof(ELDebugMenuUIBase_eventResetUIValue_Parms), Z_Construct_UFunction_UELDebugMenuUIBase_ResetUIValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuUIBase_ResetUIValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuUIBase_ResetUIValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuUIBase_ResetUIValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuUIBase_ResetUIValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuUIBase_ResetUIValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuUIBase_SetDisabled_Statics
	{
		struct ELDebugMenuUIBase_eventSetDisabled_Parms
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
	void Z_Construct_UFunction_UELDebugMenuUIBase_SetDisabled_Statics::NewProp__bDisabled_SetBit(void* Obj)
	{
		((ELDebugMenuUIBase_eventSetDisabled_Parms*)Obj)->_bDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuUIBase_SetDisabled_Statics::NewProp__bDisabled = { "_bDisabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuUIBase_eventSetDisabled_Parms), &Z_Construct_UFunction_UELDebugMenuUIBase_SetDisabled_Statics::NewProp__bDisabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuUIBase_SetDisabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuUIBase_SetDisabled_Statics::NewProp__bDisabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuUIBase_SetDisabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuUIBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuUIBase_SetDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuUIBase, nullptr, "SetDisabled", nullptr, nullptr, sizeof(ELDebugMenuUIBase_eventSetDisabled_Parms), Z_Construct_UFunction_UELDebugMenuUIBase_SetDisabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuUIBase_SetDisabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuUIBase_SetDisabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuUIBase_SetDisabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuUIBase_SetDisabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuUIBase_SetDisabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuUIBase_ShowDialog_Statics
	{
		struct ELDebugMenuUIBase_eventShowDialog_Parms
		{
			FString _strTitle;
			FString _strMessage;
			FELDebugMenuDialogButtonType _enButtonType;
			FELDebugMenuDialogResult ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuUIBase_ShowDialog_Statics::NewProp__strTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuUIBase_ShowDialog_Statics::NewProp__strTitle = { "_strTitle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuUIBase_eventShowDialog_Parms, _strTitle), METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuUIBase_ShowDialog_Statics::NewProp__strTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuUIBase_ShowDialog_Statics::NewProp__strTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuUIBase_ShowDialog_Statics::NewProp__strMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuUIBase_ShowDialog_Statics::NewProp__strMessage = { "_strMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuUIBase_eventShowDialog_Parms, _strMessage), METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuUIBase_ShowDialog_Statics::NewProp__strMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuUIBase_ShowDialog_Statics::NewProp__strMessage_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELDebugMenuUIBase_ShowDialog_Statics::NewProp__enButtonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELDebugMenuUIBase_ShowDialog_Statics::NewProp__enButtonType = { "_enButtonType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuUIBase_eventShowDialog_Parms, _enButtonType), Z_Construct_UEnum_ABP_200508_FELDebugMenuDialogButtonType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELDebugMenuUIBase_ShowDialog_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELDebugMenuUIBase_ShowDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuUIBase_eventShowDialog_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_FELDebugMenuDialogResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuUIBase_ShowDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuUIBase_ShowDialog_Statics::NewProp__strTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuUIBase_ShowDialog_Statics::NewProp__strMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuUIBase_ShowDialog_Statics::NewProp__enButtonType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuUIBase_ShowDialog_Statics::NewProp__enButtonType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuUIBase_ShowDialog_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuUIBase_ShowDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuUIBase_ShowDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuUIBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuUIBase_ShowDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuUIBase, nullptr, "ShowDialog", nullptr, nullptr, sizeof(ELDebugMenuUIBase_eventShowDialog_Parms), Z_Construct_UFunction_UELDebugMenuUIBase_ShowDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuUIBase_ShowDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuUIBase_ShowDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuUIBase_ShowDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuUIBase_ShowDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuUIBase_ShowDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuUIBase_UpdateChildMenuUI_Statics
	{
		struct ELDebugMenuUIBase_eventUpdateChildMenuUI_Parms
		{
			FELDebugMenuSimpleUIParam _rstParam;
			FString _strRegistKey;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rstParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rstParam;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuUIBase_UpdateChildMenuUI_Statics::NewProp__rstParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELDebugMenuUIBase_UpdateChildMenuUI_Statics::NewProp__rstParam = { "_rstParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuUIBase_eventUpdateChildMenuUI_Parms, _rstParam), Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParam, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuUIBase_UpdateChildMenuUI_Statics::NewProp__rstParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuUIBase_UpdateChildMenuUI_Statics::NewProp__rstParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuUIBase_UpdateChildMenuUI_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuUIBase_UpdateChildMenuUI_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuUIBase_eventUpdateChildMenuUI_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuUIBase_UpdateChildMenuUI_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuUIBase_UpdateChildMenuUI_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UELDebugMenuUIBase_UpdateChildMenuUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuUIBase_eventUpdateChildMenuUI_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuUIBase_UpdateChildMenuUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuUIBase_eventUpdateChildMenuUI_Parms), &Z_Construct_UFunction_UELDebugMenuUIBase_UpdateChildMenuUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuUIBase_UpdateChildMenuUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuUIBase_UpdateChildMenuUI_Statics::NewProp__rstParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuUIBase_UpdateChildMenuUI_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuUIBase_UpdateChildMenuUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuUIBase_UpdateChildMenuUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuUIBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuUIBase_UpdateChildMenuUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuUIBase, nullptr, "UpdateChildMenuUI", nullptr, nullptr, sizeof(ELDebugMenuUIBase_eventUpdateChildMenuUI_Parms), Z_Construct_UFunction_UELDebugMenuUIBase_UpdateChildMenuUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuUIBase_UpdateChildMenuUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuUIBase_UpdateChildMenuUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuUIBase_UpdateChildMenuUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuUIBase_UpdateChildMenuUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuUIBase_UpdateChildMenuUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELDebugMenuUIBase_NoRegister()
	{
		return UELDebugMenuUIBase::StaticClass();
	}
	struct Z_Construct_UClass_UELDebugMenuUIBase_Statics
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
	UObject* (*const Z_Construct_UClass_UELDebugMenuUIBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELDBG_ReferBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELDebugMenuUIBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELDebugMenuUIBase_AddUI, "AddUI" }, // 830140579
		{ &Z_Construct_UFunction_UELDebugMenuUIBase_DrawSimpleUI, "DrawSimpleUI" }, // 3732512445
		{ &Z_Construct_UFunction_UELDebugMenuUIBase_FindChildMenuUI, "FindChildMenuUI" }, // 3192126444
		{ &Z_Construct_UFunction_UELDebugMenuUIBase_IsDisabled, "IsDisabled" }, // 3385098791
		{ &Z_Construct_UFunction_UELDebugMenuUIBase_OnUIUpdated, "OnUIUpdated" }, // 2466368521
		{ &Z_Construct_UFunction_UELDebugMenuUIBase_RemoveUI, "RemoveUI" }, // 2717193365
		{ &Z_Construct_UFunction_UELDebugMenuUIBase_ResetUIValue, "ResetUIValue" }, // 1768108496
		{ &Z_Construct_UFunction_UELDebugMenuUIBase_SetDisabled, "SetDisabled" }, // 38551276
		{ &Z_Construct_UFunction_UELDebugMenuUIBase_ShowDialog, "ShowDialog" }, // 3324686261
		{ &Z_Construct_UFunction_UELDebugMenuUIBase_UpdateChildMenuUI, "UpdateChildMenuUI" }, // 4084182376
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELDebugMenuUIBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELDebugMenuUIBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELDebugMenuUIBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELDebugMenuUIBase_Statics::NewProp_DebugMenuNotifyDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDebugMenuUIBase" },
		{ "ModuleRelativePath", "Public/ELDebugMenuUIBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELDebugMenuUIBase_Statics::NewProp_DebugMenuNotifyDispatcher = { "DebugMenuNotifyDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELDebugMenuUIBase, DebugMenuNotifyDispatcher), Z_Construct_UDelegateFunction_ABP_200508_ELDebugMenuNotifyDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELDebugMenuUIBase_Statics::NewProp_DebugMenuNotifyDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELDebugMenuUIBase_Statics::NewProp_DebugMenuNotifyDispatcher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELDebugMenuUIBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELDebugMenuUIBase_Statics::NewProp_DebugMenuNotifyDispatcher,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELDebugMenuUIBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELDebugMenuUIBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELDebugMenuUIBase_Statics::ClassParams = {
		&UELDebugMenuUIBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELDebugMenuUIBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELDebugMenuUIBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELDebugMenuUIBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELDebugMenuUIBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELDebugMenuUIBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELDebugMenuUIBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELDebugMenuUIBase, 678527446);
	template<> ABP_200508_API UClass* StaticClass<UELDebugMenuUIBase>()
	{
		return UELDebugMenuUIBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELDebugMenuUIBase(Z_Construct_UClass_UELDebugMenuUIBase, &UELDebugMenuUIBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELDebugMenuUIBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELDebugMenuUIBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
