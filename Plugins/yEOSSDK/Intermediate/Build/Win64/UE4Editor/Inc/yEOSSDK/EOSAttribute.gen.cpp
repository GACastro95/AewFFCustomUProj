// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSAttribute.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSAttribute() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAttribute_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAttribute();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommon();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSAttrJudgeType();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSAttrVariableType();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSAttrVisibility();
// End Cross Module References
	DEFINE_FUNCTION(UEOSAttribute::execCopyFrom)
	{
		P_GET_OBJECT(UEOSAttribute,Z_Param__pcAttr);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CopyFrom(Z_Param__pcAttr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAttribute::execCreate)
	{
		P_GET_OBJECT_REF(UEOSAttribute,Z_Param_Out__pcInst);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEOSAttribute::Create(Z_Param_Out__pcInst);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAttribute::execGetBoolean)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBoolean();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAttribute::execGetFloat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFloat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAttribute::execGetInt32)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetInt32();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAttribute::execGetInt64)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->GetInt64();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAttribute::execGetJudgeType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSAttrJudgeType*)Z_Param__Result=P_THIS->GetJudgeType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAttribute::execGetName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAttribute::execGetString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAttribute::execGetValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAttribute::execGetVariableType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSAttrVariableType*)Z_Param__Result=P_THIS->GetVariableType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAttribute::execGetVisibility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSAttrVisibility*)Z_Param__Result=P_THIS->GetVisibility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAttribute::execSetBoolean)
	{
		P_GET_UBOOL(Z_Param__bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoolean(Z_Param__bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAttribute::execSetFloat)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__fValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFloat(Z_Param__fValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAttribute::execSetInt32)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInt32(Z_Param__sValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAttribute::execSetInt64)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param__sValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInt64(Z_Param__sValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAttribute::execSetJudgeType)
	{
		P_GET_ENUM(EEOSAttrJudgeType,Z_Param__enType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetJudgeType(EEOSAttrJudgeType(Z_Param__enType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAttribute::execSetName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetName(Z_Param__strName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAttribute::execSetString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetString(Z_Param__strValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAttribute::execSetValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValue(Z_Param__strValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAttribute::execSetVariableType)
	{
		P_GET_ENUM(EEOSAttrVariableType,Z_Param__enType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVariableType(EEOSAttrVariableType(Z_Param__enType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAttribute::execSetVisibility)
	{
		P_GET_ENUM(EEOSAttrVisibility,Z_Param__enVisibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibility(EEOSAttrVisibility(Z_Param__enVisibility));
		P_NATIVE_END;
	}
	void UEOSAttribute::StaticRegisterNativesUEOSAttribute()
	{
		UClass* Class = UEOSAttribute::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyFrom", &UEOSAttribute::execCopyFrom },
			{ "Create", &UEOSAttribute::execCreate },
			{ "GetBoolean", &UEOSAttribute::execGetBoolean },
			{ "GetFloat", &UEOSAttribute::execGetFloat },
			{ "GetInt32", &UEOSAttribute::execGetInt32 },
			{ "GetInt64", &UEOSAttribute::execGetInt64 },
			{ "GetJudgeType", &UEOSAttribute::execGetJudgeType },
			{ "GetName", &UEOSAttribute::execGetName },
			{ "GetString", &UEOSAttribute::execGetString },
			{ "GetValue", &UEOSAttribute::execGetValue },
			{ "GetVariableType", &UEOSAttribute::execGetVariableType },
			{ "GetVisibility", &UEOSAttribute::execGetVisibility },
			{ "SetBoolean", &UEOSAttribute::execSetBoolean },
			{ "SetFloat", &UEOSAttribute::execSetFloat },
			{ "SetInt32", &UEOSAttribute::execSetInt32 },
			{ "SetInt64", &UEOSAttribute::execSetInt64 },
			{ "SetJudgeType", &UEOSAttribute::execSetJudgeType },
			{ "SetName", &UEOSAttribute::execSetName },
			{ "SetString", &UEOSAttribute::execSetString },
			{ "SetValue", &UEOSAttribute::execSetValue },
			{ "SetVariableType", &UEOSAttribute::execSetVariableType },
			{ "SetVisibility", &UEOSAttribute::execSetVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSAttribute_CopyFrom_Statics
	{
		struct EOSAttribute_eventCopyFrom_Parms
		{
			const UEOSAttribute* _pcAttr;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pcAttr_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcAttr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAttribute_CopyFrom_Statics::NewProp__pcAttr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSAttribute_CopyFrom_Statics::NewProp__pcAttr = { "_pcAttr", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAttribute_eventCopyFrom_Parms, _pcAttr), Z_Construct_UClass_UEOSAttribute_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEOSAttribute_CopyFrom_Statics::NewProp__pcAttr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_CopyFrom_Statics::NewProp__pcAttr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAttribute_CopyFrom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAttribute_CopyFrom_Statics::NewProp__pcAttr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAttribute_CopyFrom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAttribute_CopyFrom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAttribute, nullptr, "CopyFrom", nullptr, nullptr, sizeof(EOSAttribute_eventCopyFrom_Parms), Z_Construct_UFunction_UEOSAttribute_CopyFrom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_CopyFrom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAttribute_CopyFrom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_CopyFrom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAttribute_CopyFrom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAttribute_CopyFrom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAttribute_Create_Statics
	{
		struct EOSAttribute_eventCreate_Parms
		{
			UEOSAttribute* _pcInst;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcInst;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSAttribute_Create_Statics::NewProp__pcInst = { "_pcInst", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAttribute_eventCreate_Parms, _pcInst), Z_Construct_UClass_UEOSAttribute_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSAttribute_Create_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSAttribute_eventCreate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAttribute_Create_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAttribute_eventCreate_Parms), &Z_Construct_UFunction_UEOSAttribute_Create_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAttribute_Create_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAttribute_Create_Statics::NewProp__pcInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAttribute_Create_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAttribute_Create_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAttribute_Create_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAttribute, nullptr, "Create", nullptr, nullptr, sizeof(EOSAttribute_eventCreate_Parms), Z_Construct_UFunction_UEOSAttribute_Create_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_Create_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAttribute_Create_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_Create_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAttribute_Create()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAttribute_Create_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAttribute_GetBoolean_Statics
	{
		struct EOSAttribute_eventGetBoolean_Parms
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
	void Z_Construct_UFunction_UEOSAttribute_GetBoolean_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSAttribute_eventGetBoolean_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAttribute_GetBoolean_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAttribute_eventGetBoolean_Parms), &Z_Construct_UFunction_UEOSAttribute_GetBoolean_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAttribute_GetBoolean_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAttribute_GetBoolean_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAttribute_GetBoolean_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAttribute_GetBoolean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAttribute, nullptr, "GetBoolean", nullptr, nullptr, sizeof(EOSAttribute_eventGetBoolean_Parms), Z_Construct_UFunction_UEOSAttribute_GetBoolean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_GetBoolean_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAttribute_GetBoolean_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_GetBoolean_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAttribute_GetBoolean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAttribute_GetBoolean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAttribute_GetFloat_Statics
	{
		struct EOSAttribute_eventGetFloat_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEOSAttribute_GetFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAttribute_eventGetFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAttribute_GetFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAttribute_GetFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAttribute_GetFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAttribute_GetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAttribute, nullptr, "GetFloat", nullptr, nullptr, sizeof(EOSAttribute_eventGetFloat_Parms), Z_Construct_UFunction_UEOSAttribute_GetFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_GetFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAttribute_GetFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_GetFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAttribute_GetFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAttribute_GetFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAttribute_GetInt32_Statics
	{
		struct EOSAttribute_eventGetInt32_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSAttribute_GetInt32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAttribute_eventGetInt32_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAttribute_GetInt32_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAttribute_GetInt32_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAttribute_GetInt32_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAttribute_GetInt32_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAttribute, nullptr, "GetInt32", nullptr, nullptr, sizeof(EOSAttribute_eventGetInt32_Parms), Z_Construct_UFunction_UEOSAttribute_GetInt32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_GetInt32_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAttribute_GetInt32_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_GetInt32_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAttribute_GetInt32()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAttribute_GetInt32_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAttribute_GetInt64_Statics
	{
		struct EOSAttribute_eventGetInt64_Parms
		{
			int64 ReturnValue;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UEOSAttribute_GetInt64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAttribute_eventGetInt64_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAttribute_GetInt64_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAttribute_GetInt64_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAttribute_GetInt64_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAttribute_GetInt64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAttribute, nullptr, "GetInt64", nullptr, nullptr, sizeof(EOSAttribute_eventGetInt64_Parms), Z_Construct_UFunction_UEOSAttribute_GetInt64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_GetInt64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAttribute_GetInt64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_GetInt64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAttribute_GetInt64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAttribute_GetInt64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAttribute_GetJudgeType_Statics
	{
		struct EOSAttribute_eventGetJudgeType_Parms
		{
			EEOSAttrJudgeType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSAttribute_GetJudgeType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSAttribute_GetJudgeType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAttribute_eventGetJudgeType_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSAttrJudgeType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAttribute_GetJudgeType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAttribute_GetJudgeType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAttribute_GetJudgeType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAttribute_GetJudgeType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAttribute_GetJudgeType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAttribute, nullptr, "GetJudgeType", nullptr, nullptr, sizeof(EOSAttribute_eventGetJudgeType_Parms), Z_Construct_UFunction_UEOSAttribute_GetJudgeType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_GetJudgeType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAttribute_GetJudgeType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_GetJudgeType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAttribute_GetJudgeType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAttribute_GetJudgeType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAttribute_GetName_Statics
	{
		struct EOSAttribute_eventGetName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSAttribute_GetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAttribute_eventGetName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAttribute_GetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAttribute_GetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAttribute_GetName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAttribute_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAttribute, nullptr, "GetName", nullptr, nullptr, sizeof(EOSAttribute_eventGetName_Parms), Z_Construct_UFunction_UEOSAttribute_GetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_GetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAttribute_GetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_GetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAttribute_GetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAttribute_GetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAttribute_GetString_Statics
	{
		struct EOSAttribute_eventGetString_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSAttribute_GetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAttribute_eventGetString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAttribute_GetString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAttribute_GetString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAttribute_GetString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAttribute_GetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAttribute, nullptr, "GetString", nullptr, nullptr, sizeof(EOSAttribute_eventGetString_Parms), Z_Construct_UFunction_UEOSAttribute_GetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_GetString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAttribute_GetString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_GetString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAttribute_GetString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAttribute_GetString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAttribute_GetValue_Statics
	{
		struct EOSAttribute_eventGetValue_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSAttribute_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAttribute_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAttribute_GetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAttribute_GetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAttribute_GetValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAttribute_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAttribute, nullptr, "GetValue", nullptr, nullptr, sizeof(EOSAttribute_eventGetValue_Parms), Z_Construct_UFunction_UEOSAttribute_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_GetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAttribute_GetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAttribute_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAttribute_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAttribute_GetVariableType_Statics
	{
		struct EOSAttribute_eventGetVariableType_Parms
		{
			EEOSAttrVariableType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSAttribute_GetVariableType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSAttribute_GetVariableType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAttribute_eventGetVariableType_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSAttrVariableType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAttribute_GetVariableType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAttribute_GetVariableType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAttribute_GetVariableType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAttribute_GetVariableType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAttribute_GetVariableType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAttribute, nullptr, "GetVariableType", nullptr, nullptr, sizeof(EOSAttribute_eventGetVariableType_Parms), Z_Construct_UFunction_UEOSAttribute_GetVariableType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_GetVariableType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAttribute_GetVariableType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_GetVariableType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAttribute_GetVariableType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAttribute_GetVariableType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAttribute_GetVisibility_Statics
	{
		struct EOSAttribute_eventGetVisibility_Parms
		{
			EEOSAttrVisibility ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSAttribute_GetVisibility_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSAttribute_GetVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAttribute_eventGetVisibility_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSAttrVisibility, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAttribute_GetVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAttribute_GetVisibility_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAttribute_GetVisibility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAttribute_GetVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAttribute_GetVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAttribute, nullptr, "GetVisibility", nullptr, nullptr, sizeof(EOSAttribute_eventGetVisibility_Parms), Z_Construct_UFunction_UEOSAttribute_GetVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_GetVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAttribute_GetVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_GetVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAttribute_GetVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAttribute_GetVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAttribute_SetBoolean_Statics
	{
		struct EOSAttribute_eventSetBoolean_Parms
		{
			bool _bValue;
		};
		static void NewProp__bValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEOSAttribute_SetBoolean_Statics::NewProp__bValue_SetBit(void* Obj)
	{
		((EOSAttribute_eventSetBoolean_Parms*)Obj)->_bValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAttribute_SetBoolean_Statics::NewProp__bValue = { "_bValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAttribute_eventSetBoolean_Parms), &Z_Construct_UFunction_UEOSAttribute_SetBoolean_Statics::NewProp__bValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAttribute_SetBoolean_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAttribute_SetBoolean_Statics::NewProp__bValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAttribute_SetBoolean_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAttribute_SetBoolean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAttribute, nullptr, "SetBoolean", nullptr, nullptr, sizeof(EOSAttribute_eventSetBoolean_Parms), Z_Construct_UFunction_UEOSAttribute_SetBoolean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_SetBoolean_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAttribute_SetBoolean_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_SetBoolean_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAttribute_SetBoolean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAttribute_SetBoolean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAttribute_SetFloat_Statics
	{
		struct EOSAttribute_eventSetFloat_Parms
		{
			float _fValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__fValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEOSAttribute_SetFloat_Statics::NewProp__fValue = { "_fValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAttribute_eventSetFloat_Parms, _fValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAttribute_SetFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAttribute_SetFloat_Statics::NewProp__fValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAttribute_SetFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAttribute_SetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAttribute, nullptr, "SetFloat", nullptr, nullptr, sizeof(EOSAttribute_eventSetFloat_Parms), Z_Construct_UFunction_UEOSAttribute_SetFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_SetFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAttribute_SetFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_SetFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAttribute_SetFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAttribute_SetFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAttribute_SetInt32_Statics
	{
		struct EOSAttribute_eventSetInt32_Parms
		{
			int32 _sValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSAttribute_SetInt32_Statics::NewProp__sValue = { "_sValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAttribute_eventSetInt32_Parms, _sValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAttribute_SetInt32_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAttribute_SetInt32_Statics::NewProp__sValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAttribute_SetInt32_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAttribute_SetInt32_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAttribute, nullptr, "SetInt32", nullptr, nullptr, sizeof(EOSAttribute_eventSetInt32_Parms), Z_Construct_UFunction_UEOSAttribute_SetInt32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_SetInt32_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAttribute_SetInt32_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_SetInt32_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAttribute_SetInt32()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAttribute_SetInt32_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAttribute_SetInt64_Statics
	{
		struct EOSAttribute_eventSetInt64_Parms
		{
			int64 _sValue;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp__sValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UEOSAttribute_SetInt64_Statics::NewProp__sValue = { "_sValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAttribute_eventSetInt64_Parms, _sValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAttribute_SetInt64_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAttribute_SetInt64_Statics::NewProp__sValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAttribute_SetInt64_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAttribute_SetInt64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAttribute, nullptr, "SetInt64", nullptr, nullptr, sizeof(EOSAttribute_eventSetInt64_Parms), Z_Construct_UFunction_UEOSAttribute_SetInt64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_SetInt64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAttribute_SetInt64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_SetInt64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAttribute_SetInt64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAttribute_SetInt64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAttribute_SetJudgeType_Statics
	{
		struct EOSAttribute_eventSetJudgeType_Parms
		{
			EEOSAttrJudgeType _enType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSAttribute_SetJudgeType_Statics::NewProp__enType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSAttribute_SetJudgeType_Statics::NewProp__enType = { "_enType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAttribute_eventSetJudgeType_Parms, _enType), Z_Construct_UEnum_yEOSSDK_EEOSAttrJudgeType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAttribute_SetJudgeType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAttribute_SetJudgeType_Statics::NewProp__enType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAttribute_SetJudgeType_Statics::NewProp__enType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAttribute_SetJudgeType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAttribute_SetJudgeType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAttribute, nullptr, "SetJudgeType", nullptr, nullptr, sizeof(EOSAttribute_eventSetJudgeType_Parms), Z_Construct_UFunction_UEOSAttribute_SetJudgeType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_SetJudgeType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAttribute_SetJudgeType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_SetJudgeType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAttribute_SetJudgeType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAttribute_SetJudgeType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAttribute_SetName_Statics
	{
		struct EOSAttribute_eventSetName_Parms
		{
			FString _strName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAttribute_SetName_Statics::NewProp__strName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSAttribute_SetName_Statics::NewProp__strName = { "_strName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAttribute_eventSetName_Parms, _strName), METADATA_PARAMS(Z_Construct_UFunction_UEOSAttribute_SetName_Statics::NewProp__strName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_SetName_Statics::NewProp__strName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAttribute_SetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAttribute_SetName_Statics::NewProp__strName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAttribute_SetName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAttribute_SetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAttribute, nullptr, "SetName", nullptr, nullptr, sizeof(EOSAttribute_eventSetName_Parms), Z_Construct_UFunction_UEOSAttribute_SetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_SetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAttribute_SetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_SetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAttribute_SetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAttribute_SetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAttribute_SetString_Statics
	{
		struct EOSAttribute_eventSetString_Parms
		{
			FString _strValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAttribute_SetString_Statics::NewProp__strValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSAttribute_SetString_Statics::NewProp__strValue = { "_strValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAttribute_eventSetString_Parms, _strValue), METADATA_PARAMS(Z_Construct_UFunction_UEOSAttribute_SetString_Statics::NewProp__strValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_SetString_Statics::NewProp__strValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAttribute_SetString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAttribute_SetString_Statics::NewProp__strValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAttribute_SetString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAttribute_SetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAttribute, nullptr, "SetString", nullptr, nullptr, sizeof(EOSAttribute_eventSetString_Parms), Z_Construct_UFunction_UEOSAttribute_SetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_SetString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAttribute_SetString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_SetString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAttribute_SetString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAttribute_SetString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAttribute_SetValue_Statics
	{
		struct EOSAttribute_eventSetValue_Parms
		{
			FString _strValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAttribute_SetValue_Statics::NewProp__strValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSAttribute_SetValue_Statics::NewProp__strValue = { "_strValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAttribute_eventSetValue_Parms, _strValue), METADATA_PARAMS(Z_Construct_UFunction_UEOSAttribute_SetValue_Statics::NewProp__strValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_SetValue_Statics::NewProp__strValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAttribute_SetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAttribute_SetValue_Statics::NewProp__strValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAttribute_SetValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAttribute_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAttribute, nullptr, "SetValue", nullptr, nullptr, sizeof(EOSAttribute_eventSetValue_Parms), Z_Construct_UFunction_UEOSAttribute_SetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_SetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAttribute_SetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_SetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAttribute_SetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAttribute_SetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAttribute_SetVariableType_Statics
	{
		struct EOSAttribute_eventSetVariableType_Parms
		{
			EEOSAttrVariableType _enType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSAttribute_SetVariableType_Statics::NewProp__enType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSAttribute_SetVariableType_Statics::NewProp__enType = { "_enType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAttribute_eventSetVariableType_Parms, _enType), Z_Construct_UEnum_yEOSSDK_EEOSAttrVariableType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAttribute_SetVariableType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAttribute_SetVariableType_Statics::NewProp__enType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAttribute_SetVariableType_Statics::NewProp__enType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAttribute_SetVariableType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAttribute_SetVariableType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAttribute, nullptr, "SetVariableType", nullptr, nullptr, sizeof(EOSAttribute_eventSetVariableType_Parms), Z_Construct_UFunction_UEOSAttribute_SetVariableType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_SetVariableType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAttribute_SetVariableType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_SetVariableType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAttribute_SetVariableType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAttribute_SetVariableType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAttribute_SetVisibility_Statics
	{
		struct EOSAttribute_eventSetVisibility_Parms
		{
			EEOSAttrVisibility _enVisibility;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enVisibility_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enVisibility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSAttribute_SetVisibility_Statics::NewProp__enVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSAttribute_SetVisibility_Statics::NewProp__enVisibility = { "_enVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAttribute_eventSetVisibility_Parms, _enVisibility), Z_Construct_UEnum_yEOSSDK_EEOSAttrVisibility, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAttribute_SetVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAttribute_SetVisibility_Statics::NewProp__enVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAttribute_SetVisibility_Statics::NewProp__enVisibility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAttribute_SetVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAttribute_SetVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAttribute, nullptr, "SetVisibility", nullptr, nullptr, sizeof(EOSAttribute_eventSetVisibility_Parms), Z_Construct_UFunction_UEOSAttribute_SetVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_SetVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAttribute_SetVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAttribute_SetVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAttribute_SetVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAttribute_SetVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSAttribute_NoRegister()
	{
		return UEOSAttribute::StaticClass();
	}
	struct Z_Construct_UClass_UEOSAttribute_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_strName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_strName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_cString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_sInt64_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_m_sInt64;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_fFloat_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_fFloat;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_enVariableType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_enVariableType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_enVariableType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_enJudgeType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_enJudgeType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_enJudgeType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_enVisibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_enVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_enVisibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bBool_MetaData[];
#endif
		static void NewProp_m_bBool_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bBool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSAttribute_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCommon,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSAttribute_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSAttribute_CopyFrom, "CopyFrom" }, // 2273795098
		{ &Z_Construct_UFunction_UEOSAttribute_Create, "Create" }, // 2488290239
		{ &Z_Construct_UFunction_UEOSAttribute_GetBoolean, "GetBoolean" }, // 2632682006
		{ &Z_Construct_UFunction_UEOSAttribute_GetFloat, "GetFloat" }, // 2313196312
		{ &Z_Construct_UFunction_UEOSAttribute_GetInt32, "GetInt32" }, // 3431767478
		{ &Z_Construct_UFunction_UEOSAttribute_GetInt64, "GetInt64" }, // 375549377
		{ &Z_Construct_UFunction_UEOSAttribute_GetJudgeType, "GetJudgeType" }, // 1515009346
		{ &Z_Construct_UFunction_UEOSAttribute_GetName, "GetName" }, // 358953089
		{ &Z_Construct_UFunction_UEOSAttribute_GetString, "GetString" }, // 2691693563
		{ &Z_Construct_UFunction_UEOSAttribute_GetValue, "GetValue" }, // 4016643698
		{ &Z_Construct_UFunction_UEOSAttribute_GetVariableType, "GetVariableType" }, // 2529707403
		{ &Z_Construct_UFunction_UEOSAttribute_GetVisibility, "GetVisibility" }, // 169951080
		{ &Z_Construct_UFunction_UEOSAttribute_SetBoolean, "SetBoolean" }, // 253258938
		{ &Z_Construct_UFunction_UEOSAttribute_SetFloat, "SetFloat" }, // 1415202243
		{ &Z_Construct_UFunction_UEOSAttribute_SetInt32, "SetInt32" }, // 3093007216
		{ &Z_Construct_UFunction_UEOSAttribute_SetInt64, "SetInt64" }, // 2936257347
		{ &Z_Construct_UFunction_UEOSAttribute_SetJudgeType, "SetJudgeType" }, // 3367339971
		{ &Z_Construct_UFunction_UEOSAttribute_SetName, "SetName" }, // 2254222961
		{ &Z_Construct_UFunction_UEOSAttribute_SetString, "SetString" }, // 2756632529
		{ &Z_Construct_UFunction_UEOSAttribute_SetValue, "SetValue" }, // 2180167319
		{ &Z_Construct_UFunction_UEOSAttribute_SetVariableType, "SetVariableType" }, // 2824000923
		{ &Z_Construct_UFunction_UEOSAttribute_SetVisibility, "SetVisibility" }, // 1564512974
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSAttribute_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSAttribute.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSAttribute.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_strName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAttribute" },
		{ "ModuleRelativePath", "Public/EOSAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_strName = { "m_strName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSAttribute, m_strName), METADATA_PARAMS(Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_strName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_strName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_cString_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAttribute" },
		{ "ModuleRelativePath", "Public/EOSAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_cString = { "m_cString", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSAttribute, m_cString), METADATA_PARAMS(Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_cString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_cString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_sInt64_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAttribute" },
		{ "ModuleRelativePath", "Public/EOSAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_sInt64 = { "m_sInt64", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSAttribute, m_sInt64), METADATA_PARAMS(Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_sInt64_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_sInt64_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_fFloat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAttribute" },
		{ "ModuleRelativePath", "Public/EOSAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_fFloat = { "m_fFloat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSAttribute, m_fFloat), METADATA_PARAMS(Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_fFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_fFloat_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_enVariableType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_enVariableType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAttribute" },
		{ "ModuleRelativePath", "Public/EOSAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_enVariableType = { "m_enVariableType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSAttribute, m_enVariableType), Z_Construct_UEnum_yEOSSDK_EEOSAttrVariableType, METADATA_PARAMS(Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_enVariableType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_enVariableType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_enJudgeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_enJudgeType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAttribute" },
		{ "ModuleRelativePath", "Public/EOSAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_enJudgeType = { "m_enJudgeType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSAttribute, m_enJudgeType), Z_Construct_UEnum_yEOSSDK_EEOSAttrJudgeType, METADATA_PARAMS(Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_enJudgeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_enJudgeType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_enVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_enVisibility_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAttribute" },
		{ "ModuleRelativePath", "Public/EOSAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_enVisibility = { "m_enVisibility", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSAttribute, m_enVisibility), Z_Construct_UEnum_yEOSSDK_EEOSAttrVisibility, METADATA_PARAMS(Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_enVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_enVisibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_bBool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAttribute" },
		{ "ModuleRelativePath", "Public/EOSAttribute.h" },
	};
#endif
	void Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_bBool_SetBit(void* Obj)
	{
		((UEOSAttribute*)Obj)->m_bBool = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_bBool = { "m_bBool", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEOSAttribute), &Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_bBool_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_bBool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_bBool_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_strName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_cString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_sInt64,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_fFloat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_enVariableType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_enVariableType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_enJudgeType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_enJudgeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_enVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_enVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSAttribute_Statics::NewProp_m_bBool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSAttribute_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSAttribute>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSAttribute_Statics::ClassParams = {
		&UEOSAttribute::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSAttribute_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAttribute_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSAttribute_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAttribute_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSAttribute()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSAttribute_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSAttribute, 2190948205);
	template<> YEOSSDK_API UClass* StaticClass<UEOSAttribute>()
	{
		return UEOSAttribute::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSAttribute(Z_Construct_UClass_UEOSAttribute, &UEOSAttribute::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSAttribute"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSAttribute);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
