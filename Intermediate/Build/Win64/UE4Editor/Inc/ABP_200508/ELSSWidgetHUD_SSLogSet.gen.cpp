// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWidgetHUD_SSLogSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWidgetHUD_SSLogSet() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_SSLogSet();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSLogTextParam();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSLogIconType();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_SSLog_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSSWidgetHUD_SSLogSet::execAddMultiColorLogMessage)
	{
		P_GET_TARRAY_REF(FSSLogTextParam,Z_Param_Out_inTextParam);
		P_GET_ENUM(ESSLogIconType,Z_Param_InIconType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMultiColorLogMessage(Z_Param_Out_inTextParam,ESSLogIconType(Z_Param_InIconType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_SSLogSet::execDeleteLogTextMessage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteLogTextMessage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_SSLogSet::execGetLogIcon)
	{
		P_GET_ENUM(ESSLogIconType,Z_Param_InIconType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetLogIcon(ESSLogIconType(Z_Param_InIconType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_SSLogSet::execIsEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEmpty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_SSLogSet::execResetAllLogs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetAllLogs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_SSLogSet::execUpdateLogArrayPos)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateLogArrayPos();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_SSLogSet::execUpdateLogShowState)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateLogShowState(Z_Param_InDeltaTime);
		P_NATIVE_END;
	}
	void UELSSWidgetHUD_SSLogSet::StaticRegisterNativesUELSSWidgetHUD_SSLogSet()
	{
		UClass* Class = UELSSWidgetHUD_SSLogSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMultiColorLogMessage", &UELSSWidgetHUD_SSLogSet::execAddMultiColorLogMessage },
			{ "DeleteLogTextMessage", &UELSSWidgetHUD_SSLogSet::execDeleteLogTextMessage },
			{ "GetLogIcon", &UELSSWidgetHUD_SSLogSet::execGetLogIcon },
			{ "IsEmpty", &UELSSWidgetHUD_SSLogSet::execIsEmpty },
			{ "ResetAllLogs", &UELSSWidgetHUD_SSLogSet::execResetAllLogs },
			{ "UpdateLogArrayPos", &UELSSWidgetHUD_SSLogSet::execUpdateLogArrayPos },
			{ "UpdateLogShowState", &UELSSWidgetHUD_SSLogSet::execUpdateLogShowState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_AddMultiColorLogMessage_Statics
	{
		struct ELSSWidgetHUD_SSLogSet_eventAddMultiColorLogMessage_Parms
		{
			TArray<FSSLogTextParam> inTextParam;
			ESSLogIconType InIconType;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inTextParam_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inTextParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_inTextParam;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InIconType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InIconType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_AddMultiColorLogMessage_Statics::NewProp_inTextParam_Inner = { "inTextParam", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSLogTextParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_AddMultiColorLogMessage_Statics::NewProp_inTextParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_AddMultiColorLogMessage_Statics::NewProp_inTextParam = { "inTextParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_SSLogSet_eventAddMultiColorLogMessage_Parms, inTextParam), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_AddMultiColorLogMessage_Statics::NewProp_inTextParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_AddMultiColorLogMessage_Statics::NewProp_inTextParam_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_AddMultiColorLogMessage_Statics::NewProp_InIconType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_AddMultiColorLogMessage_Statics::NewProp_InIconType = { "InIconType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_SSLogSet_eventAddMultiColorLogMessage_Parms, InIconType), Z_Construct_UEnum_ABP_200508_ESSLogIconType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_AddMultiColorLogMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_AddMultiColorLogMessage_Statics::NewProp_inTextParam_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_AddMultiColorLogMessage_Statics::NewProp_inTextParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_AddMultiColorLogMessage_Statics::NewProp_InIconType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_AddMultiColorLogMessage_Statics::NewProp_InIconType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_AddMultiColorLogMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSLogSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_AddMultiColorLogMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_SSLogSet, nullptr, "AddMultiColorLogMessage", nullptr, nullptr, sizeof(ELSSWidgetHUD_SSLogSet_eventAddMultiColorLogMessage_Parms), Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_AddMultiColorLogMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_AddMultiColorLogMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_AddMultiColorLogMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_AddMultiColorLogMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_AddMultiColorLogMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_AddMultiColorLogMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_DeleteLogTextMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_DeleteLogTextMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSLogSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_DeleteLogTextMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_SSLogSet, nullptr, "DeleteLogTextMessage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_DeleteLogTextMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_DeleteLogTextMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_DeleteLogTextMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_DeleteLogTextMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_GetLogIcon_Statics
	{
		struct ELSSWidgetHUD_SSLogSet_eventGetLogIcon_Parms
		{
			ESSLogIconType InIconType;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InIconType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InIconType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_GetLogIcon_Statics::NewProp_InIconType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_GetLogIcon_Statics::NewProp_InIconType = { "InIconType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_SSLogSet_eventGetLogIcon_Parms, InIconType), Z_Construct_UEnum_ABP_200508_ESSLogIconType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_GetLogIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_SSLogSet_eventGetLogIcon_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_GetLogIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_GetLogIcon_Statics::NewProp_InIconType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_GetLogIcon_Statics::NewProp_InIconType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_GetLogIcon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_GetLogIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSLogSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_GetLogIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_SSLogSet, nullptr, "GetLogIcon", nullptr, nullptr, sizeof(ELSSWidgetHUD_SSLogSet_eventGetLogIcon_Parms), Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_GetLogIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_GetLogIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_GetLogIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_GetLogIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_GetLogIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_GetLogIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_IsEmpty_Statics
	{
		struct ELSSWidgetHUD_SSLogSet_eventIsEmpty_Parms
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
	void Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_SSLogSet_eventIsEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_IsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_SSLogSet_eventIsEmpty_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_IsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_IsEmpty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_IsEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_IsEmpty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSLogSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_IsEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_SSLogSet, nullptr, "IsEmpty", nullptr, nullptr, sizeof(ELSSWidgetHUD_SSLogSet_eventIsEmpty_Parms), Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_IsEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_IsEmpty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_IsEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_IsEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_IsEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_IsEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_ResetAllLogs_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_ResetAllLogs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSLogSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_ResetAllLogs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_SSLogSet, nullptr, "ResetAllLogs", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_ResetAllLogs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_ResetAllLogs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_ResetAllLogs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_ResetAllLogs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_UpdateLogArrayPos_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_UpdateLogArrayPos_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSLogSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_UpdateLogArrayPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_SSLogSet, nullptr, "UpdateLogArrayPos", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_UpdateLogArrayPos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_UpdateLogArrayPos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_UpdateLogArrayPos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_UpdateLogArrayPos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_UpdateLogShowState_Statics
	{
		struct ELSSWidgetHUD_SSLogSet_eventUpdateLogShowState_Parms
		{
			float InDeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_UpdateLogShowState_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_SSLogSet_eventUpdateLogShowState_Parms, InDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_UpdateLogShowState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_UpdateLogShowState_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_UpdateLogShowState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSLogSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_UpdateLogShowState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_SSLogSet, nullptr, "UpdateLogShowState", nullptr, nullptr, sizeof(ELSSWidgetHUD_SSLogSet_eventUpdateLogShowState_Parms), Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_UpdateLogShowState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_UpdateLogShowState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_UpdateLogShowState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_UpdateLogShowState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_UpdateLogShowState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_UpdateLogShowState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_NoRegister()
	{
		return UELSSWidgetHUD_SSLogSet::StaticClass();
	}
	struct Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogArray_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LogArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LogArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IconArrays_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconArrays_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IconArrays;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogMessageShowTimeElapsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LogMessageShowTimeElapsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAXLOGSHOWTIME_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MAXLOGSHOWTIME;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogSetVerticalBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LogSetVerticalBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_AddMultiColorLogMessage, "AddMultiColorLogMessage" }, // 3928147817
		{ &Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_DeleteLogTextMessage, "DeleteLogTextMessage" }, // 3382155605
		{ &Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_GetLogIcon, "GetLogIcon" }, // 4251252035
		{ &Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_IsEmpty, "IsEmpty" }, // 3578007599
		{ &Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_ResetAllLogs, "ResetAllLogs" }, // 1634479604
		{ &Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_UpdateLogArrayPos, "UpdateLogArrayPos" }, // 1295630740
		{ &Z_Construct_UFunction_UELSSWidgetHUD_SSLogSet_UpdateLogShowState, "UpdateLogShowState" }, // 4256050775
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWidgetHUD_SSLogSet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSLogSet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::NewProp_LogArray_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_SSLogSet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSLogSet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::NewProp_LogArray_Inner = { "LogArray", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UELSSWidgetHUD_SSLog_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::NewProp_LogArray_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::NewProp_LogArray_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::NewProp_LogArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_SSLogSet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSLogSet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::NewProp_LogArray = { "LogArray", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_SSLogSet, LogArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::NewProp_LogArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::NewProp_LogArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::NewProp_IconArrays_Inner = { "IconArrays", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::NewProp_IconArrays_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_SSLogSet" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSLogSet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::NewProp_IconArrays = { "IconArrays", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_SSLogSet, IconArrays), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::NewProp_IconArrays_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::NewProp_IconArrays_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::NewProp_LogMessageShowTimeElapsed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_SSLogSet" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSLogSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::NewProp_LogMessageShowTimeElapsed = { "LogMessageShowTimeElapsed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_SSLogSet, LogMessageShowTimeElapsed), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::NewProp_LogMessageShowTimeElapsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::NewProp_LogMessageShowTimeElapsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::NewProp_MAXLOGSHOWTIME_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_SSLogSet" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSLogSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::NewProp_MAXLOGSHOWTIME = { "MAXLOGSHOWTIME", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_SSLogSet, MAXLOGSHOWTIME), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::NewProp_MAXLOGSHOWTIME_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::NewProp_MAXLOGSHOWTIME_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::NewProp_LogSetVerticalBox_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_SSLogSet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSLogSet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::NewProp_LogSetVerticalBox = { "LogSetVerticalBox", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_SSLogSet, LogSetVerticalBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::NewProp_LogSetVerticalBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::NewProp_LogSetVerticalBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::NewProp_LogArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::NewProp_LogArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::NewProp_IconArrays_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::NewProp_IconArrays,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::NewProp_LogMessageShowTimeElapsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::NewProp_MAXLOGSHOWTIME,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::NewProp_LogSetVerticalBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSWidgetHUD_SSLogSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::ClassParams = {
		&UELSSWidgetHUD_SSLogSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSWidgetHUD_SSLogSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSWidgetHUD_SSLogSet, 2848962740);
	template<> ABP_200508_API UClass* StaticClass<UELSSWidgetHUD_SSLogSet>()
	{
		return UELSSWidgetHUD_SSLogSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSWidgetHUD_SSLogSet(Z_Construct_UClass_UELSSWidgetHUD_SSLogSet, &UELSSWidgetHUD_SSLogSet::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSWidgetHUD_SSLogSet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSWidgetHUD_SSLogSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
