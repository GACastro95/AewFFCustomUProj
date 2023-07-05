// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWebRequestBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWebRequestBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWebRequestBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWebRequestBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSRequestData();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_yEnDialogBoxResult();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_eSSModeAPIType();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData();
	YGS2CLIENT_API UFunction* Z_Construct_UDelegateFunction_yGS2Client_ErrorRequestRetryEvent__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UELSSWebRequestBase::execAnyRequestWebAPI)
	{
		P_GET_STRUCT_REF(FELSSRequestData,Z_Param_Out_activateData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AnyRequestWebAPI(Z_Param_Out_activateData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWebRequestBase::execErrorDialogEnd)
	{
		P_GET_ENUM(yEnDialogBoxResult,Z_Param_dialogResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ErrorDialogEnd(yEnDialogBoxResult(Z_Param_dialogResult));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWebRequestBase::execGetRequestURL)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetRequestURL();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWebRequestBase::execRequestCancel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestCancel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWebRequestBase::execRequestWebAPI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestWebAPI();
		P_NATIVE_END;
	}
	void UELSSWebRequestBase::StaticRegisterNativesUELSSWebRequestBase()
	{
		UClass* Class = UELSSWebRequestBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnyRequestWebAPI", &UELSSWebRequestBase::execAnyRequestWebAPI },
			{ "ErrorDialogEnd", &UELSSWebRequestBase::execErrorDialogEnd },
			{ "GetRequestURL", &UELSSWebRequestBase::execGetRequestURL },
			{ "RequestCancel", &UELSSWebRequestBase::execRequestCancel },
			{ "RequestWebAPI", &UELSSWebRequestBase::execRequestWebAPI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSWebRequestBase_AnyRequestWebAPI_Statics
	{
		struct ELSSWebRequestBase_eventAnyRequestWebAPI_Parms
		{
			FELSSRequestData activateData;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_activateData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_activateData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWebRequestBase_AnyRequestWebAPI_Statics::NewProp_activateData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSWebRequestBase_AnyRequestWebAPI_Statics::NewProp_activateData = { "activateData", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWebRequestBase_eventAnyRequestWebAPI_Parms, activateData), Z_Construct_UScriptStruct_FELSSRequestData, METADATA_PARAMS(Z_Construct_UFunction_UELSSWebRequestBase_AnyRequestWebAPI_Statics::NewProp_activateData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWebRequestBase_AnyRequestWebAPI_Statics::NewProp_activateData_MetaData)) };
	void Z_Construct_UFunction_UELSSWebRequestBase_AnyRequestWebAPI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSWebRequestBase_eventAnyRequestWebAPI_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWebRequestBase_AnyRequestWebAPI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWebRequestBase_eventAnyRequestWebAPI_Parms), &Z_Construct_UFunction_UELSSWebRequestBase_AnyRequestWebAPI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWebRequestBase_AnyRequestWebAPI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWebRequestBase_AnyRequestWebAPI_Statics::NewProp_activateData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWebRequestBase_AnyRequestWebAPI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWebRequestBase_AnyRequestWebAPI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWebRequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWebRequestBase_AnyRequestWebAPI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWebRequestBase, nullptr, "AnyRequestWebAPI", nullptr, nullptr, sizeof(ELSSWebRequestBase_eventAnyRequestWebAPI_Parms), Z_Construct_UFunction_UELSSWebRequestBase_AnyRequestWebAPI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWebRequestBase_AnyRequestWebAPI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWebRequestBase_AnyRequestWebAPI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWebRequestBase_AnyRequestWebAPI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWebRequestBase_AnyRequestWebAPI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWebRequestBase_AnyRequestWebAPI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWebRequestBase_ErrorDialogEnd_Statics
	{
		struct ELSSWebRequestBase_eventErrorDialogEnd_Parms
		{
			yEnDialogBoxResult dialogResult;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_dialogResult_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dialogResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_dialogResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWebRequestBase_ErrorDialogEnd_Statics::NewProp_dialogResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWebRequestBase_ErrorDialogEnd_Statics::NewProp_dialogResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWebRequestBase_ErrorDialogEnd_Statics::NewProp_dialogResult = { "dialogResult", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWebRequestBase_eventErrorDialogEnd_Parms, dialogResult), Z_Construct_UEnum_ABP_200508_yEnDialogBoxResult, METADATA_PARAMS(Z_Construct_UFunction_UELSSWebRequestBase_ErrorDialogEnd_Statics::NewProp_dialogResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWebRequestBase_ErrorDialogEnd_Statics::NewProp_dialogResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWebRequestBase_ErrorDialogEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWebRequestBase_ErrorDialogEnd_Statics::NewProp_dialogResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWebRequestBase_ErrorDialogEnd_Statics::NewProp_dialogResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWebRequestBase_ErrorDialogEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWebRequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWebRequestBase_ErrorDialogEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWebRequestBase, nullptr, "ErrorDialogEnd", nullptr, nullptr, sizeof(ELSSWebRequestBase_eventErrorDialogEnd_Parms), Z_Construct_UFunction_UELSSWebRequestBase_ErrorDialogEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWebRequestBase_ErrorDialogEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWebRequestBase_ErrorDialogEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWebRequestBase_ErrorDialogEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWebRequestBase_ErrorDialogEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWebRequestBase_ErrorDialogEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWebRequestBase_GetRequestURL_Statics
	{
		struct ELSSWebRequestBase_eventGetRequestURL_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSWebRequestBase_GetRequestURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWebRequestBase_eventGetRequestURL_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWebRequestBase_GetRequestURL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWebRequestBase_GetRequestURL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWebRequestBase_GetRequestURL_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWebRequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWebRequestBase_GetRequestURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWebRequestBase, nullptr, "GetRequestURL", nullptr, nullptr, sizeof(ELSSWebRequestBase_eventGetRequestURL_Parms), Z_Construct_UFunction_UELSSWebRequestBase_GetRequestURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWebRequestBase_GetRequestURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWebRequestBase_GetRequestURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWebRequestBase_GetRequestURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWebRequestBase_GetRequestURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWebRequestBase_GetRequestURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWebRequestBase_RequestCancel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWebRequestBase_RequestCancel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWebRequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWebRequestBase_RequestCancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWebRequestBase, nullptr, "RequestCancel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWebRequestBase_RequestCancel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWebRequestBase_RequestCancel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWebRequestBase_RequestCancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWebRequestBase_RequestCancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWebRequestBase_RequestWebAPI_Statics
	{
		struct ELSSWebRequestBase_eventRequestWebAPI_Parms
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
	void Z_Construct_UFunction_UELSSWebRequestBase_RequestWebAPI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSWebRequestBase_eventRequestWebAPI_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWebRequestBase_RequestWebAPI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWebRequestBase_eventRequestWebAPI_Parms), &Z_Construct_UFunction_UELSSWebRequestBase_RequestWebAPI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWebRequestBase_RequestWebAPI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWebRequestBase_RequestWebAPI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWebRequestBase_RequestWebAPI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWebRequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWebRequestBase_RequestWebAPI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWebRequestBase, nullptr, "RequestWebAPI", nullptr, nullptr, sizeof(ELSSWebRequestBase_eventRequestWebAPI_Parms), Z_Construct_UFunction_UELSSWebRequestBase_RequestWebAPI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWebRequestBase_RequestWebAPI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWebRequestBase_RequestWebAPI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWebRequestBase_RequestWebAPI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWebRequestBase_RequestWebAPI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWebRequestBase_RequestWebAPI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSWebRequestBase_NoRegister()
	{
		return UELSSWebRequestBase::StaticClass();
	}
	struct Z_Construct_UClass_UELSSWebRequestBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_requestAPIType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_requestAPIType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_requestAPIType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mErrDialogData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mErrDialogData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mErrRetryEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_mErrRetryEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSWebRequestBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSWebRequestBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSWebRequestBase_AnyRequestWebAPI, "AnyRequestWebAPI" }, // 1224329280
		{ &Z_Construct_UFunction_UELSSWebRequestBase_ErrorDialogEnd, "ErrorDialogEnd" }, // 2050089783
		{ &Z_Construct_UFunction_UELSSWebRequestBase_GetRequestURL, "GetRequestURL" }, // 3977930601
		{ &Z_Construct_UFunction_UELSSWebRequestBase_RequestCancel, "RequestCancel" }, // 1188655474
		{ &Z_Construct_UFunction_UELSSWebRequestBase_RequestWebAPI, "RequestWebAPI" }, // 3398572135
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWebRequestBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWebRequestBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWebRequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELSSWebRequestBase_Statics::NewProp_requestAPIType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWebRequestBase_Statics::NewProp_requestAPIType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWebRequestBase" },
		{ "ModuleRelativePath", "Public/ELSSWebRequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELSSWebRequestBase_Statics::NewProp_requestAPIType = { "requestAPIType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWebRequestBase, requestAPIType), Z_Construct_UEnum_ABP_200508_eSSModeAPIType, METADATA_PARAMS(Z_Construct_UClass_UELSSWebRequestBase_Statics::NewProp_requestAPIType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWebRequestBase_Statics::NewProp_requestAPIType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWebRequestBase_Statics::NewProp_mErrDialogData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWebRequestBase" },
		{ "ModuleRelativePath", "Public/ELSSWebRequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSWebRequestBase_Statics::NewProp_mErrDialogData = { "mErrDialogData", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWebRequestBase, mErrDialogData), Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData, METADATA_PARAMS(Z_Construct_UClass_UELSSWebRequestBase_Statics::NewProp_mErrDialogData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWebRequestBase_Statics::NewProp_mErrDialogData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWebRequestBase_Statics::NewProp_mErrRetryEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWebRequestBase" },
		{ "ModuleRelativePath", "Public/ELSSWebRequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELSSWebRequestBase_Statics::NewProp_mErrRetryEvent = { "mErrRetryEvent", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWebRequestBase, mErrRetryEvent), Z_Construct_UDelegateFunction_yGS2Client_ErrorRequestRetryEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELSSWebRequestBase_Statics::NewProp_mErrRetryEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWebRequestBase_Statics::NewProp_mErrRetryEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSWebRequestBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWebRequestBase_Statics::NewProp_requestAPIType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWebRequestBase_Statics::NewProp_requestAPIType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWebRequestBase_Statics::NewProp_mErrDialogData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWebRequestBase_Statics::NewProp_mErrRetryEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSWebRequestBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSWebRequestBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSWebRequestBase_Statics::ClassParams = {
		&UELSSWebRequestBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSWebRequestBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWebRequestBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSWebRequestBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWebRequestBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSWebRequestBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSWebRequestBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSWebRequestBase, 227472713);
	template<> ABP_200508_API UClass* StaticClass<UELSSWebRequestBase>()
	{
		return UELSSWebRequestBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSWebRequestBase(Z_Construct_UClass_UELSSWebRequestBase, &UELSSWebRequestBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSWebRequestBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSWebRequestBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
