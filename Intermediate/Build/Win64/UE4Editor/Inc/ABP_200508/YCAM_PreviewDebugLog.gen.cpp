// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/YCAM_PreviewDebugLog.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYCAM_PreviewDebugLog() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UYCAM_PreviewDebugLog_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UYCAM_PreviewDebugLog();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FAnimErrInfo();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EAnimErrType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
	DEFINE_FUNCTION(UYCAM_PreviewDebugLog::execAddErrorLog)
	{
		P_GET_STRUCT_REF(FAnimErrInfo,Z_Param_Out_In_AnimErrInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddErrorLog(Z_Param_Out_In_AnimErrInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYCAM_PreviewDebugLog::execErrInfoToString)
	{
		P_GET_STRUCT_REF(FAnimErrInfo,Z_Param_Out_In_ErrInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->ErrInfoToString(Z_Param_Out_In_ErrInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYCAM_PreviewDebugLog::execErrStringToDistanceOffsetInfo)
	{
		P_GET_STRUCT_REF(FAnimErrInfo,Z_Param_Out_Out_ErrInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_In_LogDateTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UYCAM_PreviewDebugLog::ErrStringToDistanceOffsetInfo(Z_Param_Out_Out_ErrInfo,Z_Param_In_LogDateTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYCAM_PreviewDebugLog::execErrTypeToIsScreenShot)
	{
		P_GET_ENUM(EAnimErrType,Z_Param_In_ErrType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ErrTypeToIsScreenShot(EAnimErrType(Z_Param_In_ErrType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYCAM_PreviewDebugLog::execErrTypeToString)
	{
		P_GET_ENUM(EAnimErrType,Z_Param_In_ErrType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->ErrTypeToString(EAnimErrType(Z_Param_In_ErrType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYCAM_PreviewDebugLog::execExportErrorLog)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExportErrorLog();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYCAM_PreviewDebugLog::execInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYCAM_PreviewDebugLog::execIsDuplicateLog)
	{
		P_GET_STRUCT_REF(FAnimErrInfo,Z_Param_Out_In_AnimErrInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDuplicateLog(Z_Param_Out_In_AnimErrInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYCAM_PreviewDebugLog::execSetDebugEndTime)
	{
		P_GET_STRUCT(FDateTime,Z_Param_In_EndTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDebugEndTime(Z_Param_In_EndTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYCAM_PreviewDebugLog::execSetDebugStartTime)
	{
		P_GET_STRUCT(FDateTime,Z_Param_In_StartTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDebugStartTime(Z_Param_In_StartTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYCAM_PreviewDebugLog::execUninit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Uninit_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UYCAM_PreviewDebugLog_Uninit = FName(TEXT("Uninit"));
	void UYCAM_PreviewDebugLog::Uninit()
	{
		ProcessEvent(FindFunctionChecked(NAME_UYCAM_PreviewDebugLog_Uninit),NULL);
	}
	void UYCAM_PreviewDebugLog::StaticRegisterNativesUYCAM_PreviewDebugLog()
	{
		UClass* Class = UYCAM_PreviewDebugLog::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddErrorLog", &UYCAM_PreviewDebugLog::execAddErrorLog },
			{ "ErrInfoToString", &UYCAM_PreviewDebugLog::execErrInfoToString },
			{ "ErrStringToDistanceOffsetInfo", &UYCAM_PreviewDebugLog::execErrStringToDistanceOffsetInfo },
			{ "ErrTypeToIsScreenShot", &UYCAM_PreviewDebugLog::execErrTypeToIsScreenShot },
			{ "ErrTypeToString", &UYCAM_PreviewDebugLog::execErrTypeToString },
			{ "ExportErrorLog", &UYCAM_PreviewDebugLog::execExportErrorLog },
			{ "Init", &UYCAM_PreviewDebugLog::execInit },
			{ "IsDuplicateLog", &UYCAM_PreviewDebugLog::execIsDuplicateLog },
			{ "SetDebugEndTime", &UYCAM_PreviewDebugLog::execSetDebugEndTime },
			{ "SetDebugStartTime", &UYCAM_PreviewDebugLog::execSetDebugStartTime },
			{ "Uninit", &UYCAM_PreviewDebugLog::execUninit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYCAM_PreviewDebugLog_AddErrorLog_Statics
	{
		struct YCAM_PreviewDebugLog_eventAddErrorLog_Parms
		{
			FAnimErrInfo In_AnimErrInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_In_AnimErrInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_In_AnimErrInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCAM_PreviewDebugLog_AddErrorLog_Statics::NewProp_In_AnimErrInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYCAM_PreviewDebugLog_AddErrorLog_Statics::NewProp_In_AnimErrInfo = { "In_AnimErrInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YCAM_PreviewDebugLog_eventAddErrorLog_Parms, In_AnimErrInfo), Z_Construct_UScriptStruct_FAnimErrInfo, METADATA_PARAMS(Z_Construct_UFunction_UYCAM_PreviewDebugLog_AddErrorLog_Statics::NewProp_In_AnimErrInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_PreviewDebugLog_AddErrorLog_Statics::NewProp_In_AnimErrInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYCAM_PreviewDebugLog_AddErrorLog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYCAM_PreviewDebugLog_AddErrorLog_Statics::NewProp_In_AnimErrInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCAM_PreviewDebugLog_AddErrorLog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_PreviewDebugLog.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYCAM_PreviewDebugLog_AddErrorLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYCAM_PreviewDebugLog, nullptr, "AddErrorLog", nullptr, nullptr, sizeof(YCAM_PreviewDebugLog_eventAddErrorLog_Parms), Z_Construct_UFunction_UYCAM_PreviewDebugLog_AddErrorLog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_PreviewDebugLog_AddErrorLog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYCAM_PreviewDebugLog_AddErrorLog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_PreviewDebugLog_AddErrorLog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYCAM_PreviewDebugLog_AddErrorLog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYCAM_PreviewDebugLog_AddErrorLog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrInfoToString_Statics
	{
		struct YCAM_PreviewDebugLog_eventErrInfoToString_Parms
		{
			FAnimErrInfo In_ErrInfo;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_In_ErrInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_In_ErrInfo;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrInfoToString_Statics::NewProp_In_ErrInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrInfoToString_Statics::NewProp_In_ErrInfo = { "In_ErrInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YCAM_PreviewDebugLog_eventErrInfoToString_Parms, In_ErrInfo), Z_Construct_UScriptStruct_FAnimErrInfo, METADATA_PARAMS(Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrInfoToString_Statics::NewProp_In_ErrInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrInfoToString_Statics::NewProp_In_ErrInfo_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrInfoToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YCAM_PreviewDebugLog_eventErrInfoToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrInfoToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrInfoToString_Statics::NewProp_In_ErrInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrInfoToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrInfoToString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_PreviewDebugLog.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrInfoToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYCAM_PreviewDebugLog, nullptr, "ErrInfoToString", nullptr, nullptr, sizeof(YCAM_PreviewDebugLog_eventErrInfoToString_Parms), Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrInfoToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrInfoToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrInfoToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrInfoToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrInfoToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrInfoToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrStringToDistanceOffsetInfo_Statics
	{
		struct YCAM_PreviewDebugLog_eventErrStringToDistanceOffsetInfo_Parms
		{
			FAnimErrInfo Out_ErrInfo;
			FString In_LogDateTime;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Out_ErrInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_In_LogDateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_In_LogDateTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrStringToDistanceOffsetInfo_Statics::NewProp_Out_ErrInfo = { "Out_ErrInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YCAM_PreviewDebugLog_eventErrStringToDistanceOffsetInfo_Parms, Out_ErrInfo), Z_Construct_UScriptStruct_FAnimErrInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrStringToDistanceOffsetInfo_Statics::NewProp_In_LogDateTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrStringToDistanceOffsetInfo_Statics::NewProp_In_LogDateTime = { "In_LogDateTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YCAM_PreviewDebugLog_eventErrStringToDistanceOffsetInfo_Parms, In_LogDateTime), METADATA_PARAMS(Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrStringToDistanceOffsetInfo_Statics::NewProp_In_LogDateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrStringToDistanceOffsetInfo_Statics::NewProp_In_LogDateTime_MetaData)) };
	void Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrStringToDistanceOffsetInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YCAM_PreviewDebugLog_eventErrStringToDistanceOffsetInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrStringToDistanceOffsetInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YCAM_PreviewDebugLog_eventErrStringToDistanceOffsetInfo_Parms), &Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrStringToDistanceOffsetInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrStringToDistanceOffsetInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrStringToDistanceOffsetInfo_Statics::NewProp_Out_ErrInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrStringToDistanceOffsetInfo_Statics::NewProp_In_LogDateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrStringToDistanceOffsetInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrStringToDistanceOffsetInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_PreviewDebugLog.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrStringToDistanceOffsetInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYCAM_PreviewDebugLog, nullptr, "ErrStringToDistanceOffsetInfo", nullptr, nullptr, sizeof(YCAM_PreviewDebugLog_eventErrStringToDistanceOffsetInfo_Parms), Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrStringToDistanceOffsetInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrStringToDistanceOffsetInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrStringToDistanceOffsetInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrStringToDistanceOffsetInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrStringToDistanceOffsetInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrStringToDistanceOffsetInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrTypeToIsScreenShot_Statics
	{
		struct YCAM_PreviewDebugLog_eventErrTypeToIsScreenShot_Parms
		{
			EAnimErrType In_ErrType;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_In_ErrType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_In_ErrType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrTypeToIsScreenShot_Statics::NewProp_In_ErrType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrTypeToIsScreenShot_Statics::NewProp_In_ErrType = { "In_ErrType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YCAM_PreviewDebugLog_eventErrTypeToIsScreenShot_Parms, In_ErrType), Z_Construct_UEnum_ABP_200508_EAnimErrType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrTypeToIsScreenShot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YCAM_PreviewDebugLog_eventErrTypeToIsScreenShot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrTypeToIsScreenShot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YCAM_PreviewDebugLog_eventErrTypeToIsScreenShot_Parms), &Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrTypeToIsScreenShot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrTypeToIsScreenShot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrTypeToIsScreenShot_Statics::NewProp_In_ErrType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrTypeToIsScreenShot_Statics::NewProp_In_ErrType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrTypeToIsScreenShot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrTypeToIsScreenShot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_PreviewDebugLog.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrTypeToIsScreenShot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYCAM_PreviewDebugLog, nullptr, "ErrTypeToIsScreenShot", nullptr, nullptr, sizeof(YCAM_PreviewDebugLog_eventErrTypeToIsScreenShot_Parms), Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrTypeToIsScreenShot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrTypeToIsScreenShot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrTypeToIsScreenShot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrTypeToIsScreenShot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrTypeToIsScreenShot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrTypeToIsScreenShot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrTypeToString_Statics
	{
		struct YCAM_PreviewDebugLog_eventErrTypeToString_Parms
		{
			EAnimErrType In_ErrType;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_In_ErrType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_In_ErrType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrTypeToString_Statics::NewProp_In_ErrType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrTypeToString_Statics::NewProp_In_ErrType = { "In_ErrType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YCAM_PreviewDebugLog_eventErrTypeToString_Parms, In_ErrType), Z_Construct_UEnum_ABP_200508_EAnimErrType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrTypeToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YCAM_PreviewDebugLog_eventErrTypeToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrTypeToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrTypeToString_Statics::NewProp_In_ErrType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrTypeToString_Statics::NewProp_In_ErrType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrTypeToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrTypeToString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_PreviewDebugLog.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrTypeToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYCAM_PreviewDebugLog, nullptr, "ErrTypeToString", nullptr, nullptr, sizeof(YCAM_PreviewDebugLog_eventErrTypeToString_Parms), Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrTypeToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrTypeToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrTypeToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrTypeToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrTypeToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrTypeToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYCAM_PreviewDebugLog_ExportErrorLog_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCAM_PreviewDebugLog_ExportErrorLog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_PreviewDebugLog.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYCAM_PreviewDebugLog_ExportErrorLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYCAM_PreviewDebugLog, nullptr, "ExportErrorLog", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYCAM_PreviewDebugLog_ExportErrorLog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_PreviewDebugLog_ExportErrorLog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYCAM_PreviewDebugLog_ExportErrorLog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYCAM_PreviewDebugLog_ExportErrorLog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYCAM_PreviewDebugLog_Init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCAM_PreviewDebugLog_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_PreviewDebugLog.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYCAM_PreviewDebugLog_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYCAM_PreviewDebugLog, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYCAM_PreviewDebugLog_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_PreviewDebugLog_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYCAM_PreviewDebugLog_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYCAM_PreviewDebugLog_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYCAM_PreviewDebugLog_IsDuplicateLog_Statics
	{
		struct YCAM_PreviewDebugLog_eventIsDuplicateLog_Parms
		{
			FAnimErrInfo In_AnimErrInfo;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_In_AnimErrInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_In_AnimErrInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCAM_PreviewDebugLog_IsDuplicateLog_Statics::NewProp_In_AnimErrInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYCAM_PreviewDebugLog_IsDuplicateLog_Statics::NewProp_In_AnimErrInfo = { "In_AnimErrInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YCAM_PreviewDebugLog_eventIsDuplicateLog_Parms, In_AnimErrInfo), Z_Construct_UScriptStruct_FAnimErrInfo, METADATA_PARAMS(Z_Construct_UFunction_UYCAM_PreviewDebugLog_IsDuplicateLog_Statics::NewProp_In_AnimErrInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_PreviewDebugLog_IsDuplicateLog_Statics::NewProp_In_AnimErrInfo_MetaData)) };
	void Z_Construct_UFunction_UYCAM_PreviewDebugLog_IsDuplicateLog_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YCAM_PreviewDebugLog_eventIsDuplicateLog_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYCAM_PreviewDebugLog_IsDuplicateLog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YCAM_PreviewDebugLog_eventIsDuplicateLog_Parms), &Z_Construct_UFunction_UYCAM_PreviewDebugLog_IsDuplicateLog_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYCAM_PreviewDebugLog_IsDuplicateLog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYCAM_PreviewDebugLog_IsDuplicateLog_Statics::NewProp_In_AnimErrInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYCAM_PreviewDebugLog_IsDuplicateLog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCAM_PreviewDebugLog_IsDuplicateLog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_PreviewDebugLog.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYCAM_PreviewDebugLog_IsDuplicateLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYCAM_PreviewDebugLog, nullptr, "IsDuplicateLog", nullptr, nullptr, sizeof(YCAM_PreviewDebugLog_eventIsDuplicateLog_Parms), Z_Construct_UFunction_UYCAM_PreviewDebugLog_IsDuplicateLog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_PreviewDebugLog_IsDuplicateLog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYCAM_PreviewDebugLog_IsDuplicateLog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_PreviewDebugLog_IsDuplicateLog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYCAM_PreviewDebugLog_IsDuplicateLog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYCAM_PreviewDebugLog_IsDuplicateLog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYCAM_PreviewDebugLog_SetDebugEndTime_Statics
	{
		struct YCAM_PreviewDebugLog_eventSetDebugEndTime_Parms
		{
			FDateTime In_EndTime;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_In_EndTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYCAM_PreviewDebugLog_SetDebugEndTime_Statics::NewProp_In_EndTime = { "In_EndTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YCAM_PreviewDebugLog_eventSetDebugEndTime_Parms, In_EndTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYCAM_PreviewDebugLog_SetDebugEndTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYCAM_PreviewDebugLog_SetDebugEndTime_Statics::NewProp_In_EndTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCAM_PreviewDebugLog_SetDebugEndTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_PreviewDebugLog.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYCAM_PreviewDebugLog_SetDebugEndTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYCAM_PreviewDebugLog, nullptr, "SetDebugEndTime", nullptr, nullptr, sizeof(YCAM_PreviewDebugLog_eventSetDebugEndTime_Parms), Z_Construct_UFunction_UYCAM_PreviewDebugLog_SetDebugEndTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_PreviewDebugLog_SetDebugEndTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYCAM_PreviewDebugLog_SetDebugEndTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_PreviewDebugLog_SetDebugEndTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYCAM_PreviewDebugLog_SetDebugEndTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYCAM_PreviewDebugLog_SetDebugEndTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYCAM_PreviewDebugLog_SetDebugStartTime_Statics
	{
		struct YCAM_PreviewDebugLog_eventSetDebugStartTime_Parms
		{
			FDateTime In_StartTime;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_In_StartTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYCAM_PreviewDebugLog_SetDebugStartTime_Statics::NewProp_In_StartTime = { "In_StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YCAM_PreviewDebugLog_eventSetDebugStartTime_Parms, In_StartTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYCAM_PreviewDebugLog_SetDebugStartTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYCAM_PreviewDebugLog_SetDebugStartTime_Statics::NewProp_In_StartTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCAM_PreviewDebugLog_SetDebugStartTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_PreviewDebugLog.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYCAM_PreviewDebugLog_SetDebugStartTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYCAM_PreviewDebugLog, nullptr, "SetDebugStartTime", nullptr, nullptr, sizeof(YCAM_PreviewDebugLog_eventSetDebugStartTime_Parms), Z_Construct_UFunction_UYCAM_PreviewDebugLog_SetDebugStartTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_PreviewDebugLog_SetDebugStartTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYCAM_PreviewDebugLog_SetDebugStartTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_PreviewDebugLog_SetDebugStartTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYCAM_PreviewDebugLog_SetDebugStartTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYCAM_PreviewDebugLog_SetDebugStartTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYCAM_PreviewDebugLog_Uninit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCAM_PreviewDebugLog_Uninit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_PreviewDebugLog.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYCAM_PreviewDebugLog_Uninit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYCAM_PreviewDebugLog, nullptr, "Uninit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYCAM_PreviewDebugLog_Uninit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_PreviewDebugLog_Uninit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYCAM_PreviewDebugLog_Uninit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYCAM_PreviewDebugLog_Uninit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYCAM_PreviewDebugLog_NoRegister()
	{
		return UYCAM_PreviewDebugLog::StaticClass();
	}
	struct Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrLogs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrLogs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ErrLogs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveFolderPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveFolderPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrAnimLogHeader_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrAnimLogHeader;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrAnimLogFileTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrAnimLogFileTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrAnimLogMovesLogPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrAnimLogMovesLogPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugEndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugEndTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isPrintOutputLog_MetaData[];
#endif
		static void NewProp_isPrintOutputLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isPrintOutputLog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isPoolLog_MetaData[];
#endif
		static void NewProp_isPoolLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isPoolLog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isScreenShot_MetaData[];
#endif
		static void NewProp_isScreenShot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isScreenShot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYCAM_PreviewDebugLog_AddErrorLog, "AddErrorLog" }, // 1771336785
		{ &Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrInfoToString, "ErrInfoToString" }, // 318458976
		{ &Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrStringToDistanceOffsetInfo, "ErrStringToDistanceOffsetInfo" }, // 3074916988
		{ &Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrTypeToIsScreenShot, "ErrTypeToIsScreenShot" }, // 1483253643
		{ &Z_Construct_UFunction_UYCAM_PreviewDebugLog_ErrTypeToString, "ErrTypeToString" }, // 3821075251
		{ &Z_Construct_UFunction_UYCAM_PreviewDebugLog_ExportErrorLog, "ExportErrorLog" }, // 4188930233
		{ &Z_Construct_UFunction_UYCAM_PreviewDebugLog_Init, "Init" }, // 1056672874
		{ &Z_Construct_UFunction_UYCAM_PreviewDebugLog_IsDuplicateLog, "IsDuplicateLog" }, // 1569891646
		{ &Z_Construct_UFunction_UYCAM_PreviewDebugLog_SetDebugEndTime, "SetDebugEndTime" }, // 2153870609
		{ &Z_Construct_UFunction_UYCAM_PreviewDebugLog_SetDebugStartTime, "SetDebugStartTime" }, // 3753510115
		{ &Z_Construct_UFunction_UYCAM_PreviewDebugLog_Uninit, "Uninit" }, // 3430641938
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YCAM_PreviewDebugLog.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YCAM_PreviewDebugLog.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_ErrLogs_Inner = { "ErrLogs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_ErrLogs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YCAM_PreviewDebugLog" },
		{ "ModuleRelativePath", "Public/YCAM_PreviewDebugLog.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_ErrLogs = { "ErrLogs", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYCAM_PreviewDebugLog, ErrLogs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_ErrLogs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_ErrLogs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_SaveFolderPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YCAM_PreviewDebugLog" },
		{ "ModuleRelativePath", "Public/YCAM_PreviewDebugLog.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_SaveFolderPath = { "SaveFolderPath", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYCAM_PreviewDebugLog, SaveFolderPath), METADATA_PARAMS(Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_SaveFolderPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_SaveFolderPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_ErrAnimLogHeader_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YCAM_PreviewDebugLog" },
		{ "ModuleRelativePath", "Public/YCAM_PreviewDebugLog.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_ErrAnimLogHeader = { "ErrAnimLogHeader", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYCAM_PreviewDebugLog, ErrAnimLogHeader), METADATA_PARAMS(Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_ErrAnimLogHeader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_ErrAnimLogHeader_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_ErrAnimLogFileTitle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YCAM_PreviewDebugLog" },
		{ "ModuleRelativePath", "Public/YCAM_PreviewDebugLog.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_ErrAnimLogFileTitle = { "ErrAnimLogFileTitle", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYCAM_PreviewDebugLog, ErrAnimLogFileTitle), METADATA_PARAMS(Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_ErrAnimLogFileTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_ErrAnimLogFileTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_ErrAnimLogMovesLogPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YCAM_PreviewDebugLog" },
		{ "ModuleRelativePath", "Public/YCAM_PreviewDebugLog.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_ErrAnimLogMovesLogPath = { "ErrAnimLogMovesLogPath", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYCAM_PreviewDebugLog, ErrAnimLogMovesLogPath), METADATA_PARAMS(Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_ErrAnimLogMovesLogPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_ErrAnimLogMovesLogPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_DebugStartTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YCAM_PreviewDebugLog" },
		{ "ModuleRelativePath", "Public/YCAM_PreviewDebugLog.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_DebugStartTime = { "DebugStartTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYCAM_PreviewDebugLog, DebugStartTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_DebugStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_DebugStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_DebugEndTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YCAM_PreviewDebugLog" },
		{ "ModuleRelativePath", "Public/YCAM_PreviewDebugLog.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_DebugEndTime = { "DebugEndTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYCAM_PreviewDebugLog, DebugEndTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_DebugEndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_DebugEndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_isPrintOutputLog_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YCAM_PreviewDebugLog" },
		{ "ModuleRelativePath", "Public/YCAM_PreviewDebugLog.h" },
	};
#endif
	void Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_isPrintOutputLog_SetBit(void* Obj)
	{
		((UYCAM_PreviewDebugLog*)Obj)->isPrintOutputLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_isPrintOutputLog = { "isPrintOutputLog", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UYCAM_PreviewDebugLog), &Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_isPrintOutputLog_SetBit, METADATA_PARAMS(Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_isPrintOutputLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_isPrintOutputLog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_isPoolLog_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YCAM_PreviewDebugLog" },
		{ "ModuleRelativePath", "Public/YCAM_PreviewDebugLog.h" },
	};
#endif
	void Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_isPoolLog_SetBit(void* Obj)
	{
		((UYCAM_PreviewDebugLog*)Obj)->isPoolLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_isPoolLog = { "isPoolLog", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UYCAM_PreviewDebugLog), &Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_isPoolLog_SetBit, METADATA_PARAMS(Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_isPoolLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_isPoolLog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_isScreenShot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YCAM_PreviewDebugLog" },
		{ "ModuleRelativePath", "Public/YCAM_PreviewDebugLog.h" },
	};
#endif
	void Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_isScreenShot_SetBit(void* Obj)
	{
		((UYCAM_PreviewDebugLog*)Obj)->isScreenShot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_isScreenShot = { "isScreenShot", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UYCAM_PreviewDebugLog), &Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_isScreenShot_SetBit, METADATA_PARAMS(Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_isScreenShot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_isScreenShot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_ErrLogs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_ErrLogs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_SaveFolderPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_ErrAnimLogHeader,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_ErrAnimLogFileTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_ErrAnimLogMovesLogPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_DebugStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_DebugEndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_isPrintOutputLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_isPoolLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::NewProp_isScreenShot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYCAM_PreviewDebugLog>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::ClassParams = {
		&UYCAM_PreviewDebugLog::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYCAM_PreviewDebugLog()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYCAM_PreviewDebugLog, 3528923613);
	template<> ABP_200508_API UClass* StaticClass<UYCAM_PreviewDebugLog>()
	{
		return UYCAM_PreviewDebugLog::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYCAM_PreviewDebugLog(Z_Construct_UClass_UYCAM_PreviewDebugLog, &UYCAM_PreviewDebugLog::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UYCAM_PreviewDebugLog"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYCAM_PreviewDebugLog);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
