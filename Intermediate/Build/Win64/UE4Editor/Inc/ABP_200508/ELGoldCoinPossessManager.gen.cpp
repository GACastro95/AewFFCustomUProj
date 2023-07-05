// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELGoldCoinPossessManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELGoldCoinPossessManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELGoldCoinPossessManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELGoldCoinPossessManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSUserContentsEvent();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserContentsBase_NoRegister();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUserContentProgress();
	YGS2CLIENT_API UEnum* Z_Construct_UEnum_yGS2Client_EYGS2ErrorType();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2RequestBase_NoRegister();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_DonwloadedGoldCoinDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UELGoldCoinPossessManager::execOnEosUserContentsEvent)
	{
		P_GET_ENUM(EEOSUserContentsEvent,Z_Param__enUserContentsEvent);
		P_GET_OBJECT(UEOSUserContentsBase,Z_Param__pcUserContentsBase);
		P_GET_STRUCT_REF(FEOSUserContentProgress,Z_Param_Out__rstProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEosUserContentsEvent(EEOSUserContentsEvent(Z_Param__enUserContentsEvent),Z_Param__pcUserContentsBase,Z_Param_Out__rstProgress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGoldCoinPossessManager::execOnYGS2Response_DownloadData)
	{
		P_GET_ENUM(EYGS2ErrorType,Z_Param__errorType);
		P_GET_OBJECT(UYGS2RequestBase,Z_Param__requestBaseInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnYGS2Response_DownloadData(EYGS2ErrorType(Z_Param__errorType),Z_Param__requestBaseInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGoldCoinPossessManager::execOnYGS2Response_UploadData)
	{
		P_GET_ENUM(EYGS2ErrorType,Z_Param__errorType);
		P_GET_OBJECT(UYGS2RequestBase,Z_Param__requestBaseInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnYGS2Response_UploadData(EYGS2ErrorType(Z_Param__errorType),Z_Param__requestBaseInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGoldCoinPossessManager::execRequestDownloadData)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResultDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestDownloadData(FDonwloadedGoldCoinDelegate(Z_Param_OnResultDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGoldCoinPossessManager::execRequestDownloadDataFromEOS)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResultDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestDownloadDataFromEOS(FDonwloadedGoldCoinDelegate(Z_Param_OnResultDelegate));
		P_NATIVE_END;
	}
	void UELGoldCoinPossessManager::StaticRegisterNativesUELGoldCoinPossessManager()
	{
		UClass* Class = UELGoldCoinPossessManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnEosUserContentsEvent", &UELGoldCoinPossessManager::execOnEosUserContentsEvent },
			{ "OnYGS2Response_DownloadData", &UELGoldCoinPossessManager::execOnYGS2Response_DownloadData },
			{ "OnYGS2Response_UploadData", &UELGoldCoinPossessManager::execOnYGS2Response_UploadData },
			{ "RequestDownloadData", &UELGoldCoinPossessManager::execRequestDownloadData },
			{ "RequestDownloadDataFromEOS", &UELGoldCoinPossessManager::execRequestDownloadDataFromEOS },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELGoldCoinPossessManager_OnEosUserContentsEvent_Statics
	{
		struct ELGoldCoinPossessManager_eventOnEosUserContentsEvent_Parms
		{
			EEOSUserContentsEvent _enUserContentsEvent;
			UEOSUserContentsBase* _pcUserContentsBase;
			FEOSUserContentProgress _rstProgress;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enUserContentsEvent_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enUserContentsEvent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcUserContentsBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rstProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rstProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELGoldCoinPossessManager_OnEosUserContentsEvent_Statics::NewProp__enUserContentsEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELGoldCoinPossessManager_OnEosUserContentsEvent_Statics::NewProp__enUserContentsEvent = { "_enUserContentsEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGoldCoinPossessManager_eventOnEosUserContentsEvent_Parms, _enUserContentsEvent), Z_Construct_UEnum_yEOSSDK_EEOSUserContentsEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELGoldCoinPossessManager_OnEosUserContentsEvent_Statics::NewProp__pcUserContentsBase = { "_pcUserContentsBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGoldCoinPossessManager_eventOnEosUserContentsEvent_Parms, _pcUserContentsBase), Z_Construct_UClass_UEOSUserContentsBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGoldCoinPossessManager_OnEosUserContentsEvent_Statics::NewProp__rstProgress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELGoldCoinPossessManager_OnEosUserContentsEvent_Statics::NewProp__rstProgress = { "_rstProgress", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGoldCoinPossessManager_eventOnEosUserContentsEvent_Parms, _rstProgress), Z_Construct_UScriptStruct_FEOSUserContentProgress, METADATA_PARAMS(Z_Construct_UFunction_UELGoldCoinPossessManager_OnEosUserContentsEvent_Statics::NewProp__rstProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGoldCoinPossessManager_OnEosUserContentsEvent_Statics::NewProp__rstProgress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGoldCoinPossessManager_OnEosUserContentsEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGoldCoinPossessManager_OnEosUserContentsEvent_Statics::NewProp__enUserContentsEvent_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGoldCoinPossessManager_OnEosUserContentsEvent_Statics::NewProp__enUserContentsEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGoldCoinPossessManager_OnEosUserContentsEvent_Statics::NewProp__pcUserContentsBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGoldCoinPossessManager_OnEosUserContentsEvent_Statics::NewProp__rstProgress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGoldCoinPossessManager_OnEosUserContentsEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGoldCoinPossessManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGoldCoinPossessManager_OnEosUserContentsEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGoldCoinPossessManager, nullptr, "OnEosUserContentsEvent", nullptr, nullptr, sizeof(ELGoldCoinPossessManager_eventOnEosUserContentsEvent_Parms), Z_Construct_UFunction_UELGoldCoinPossessManager_OnEosUserContentsEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGoldCoinPossessManager_OnEosUserContentsEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGoldCoinPossessManager_OnEosUserContentsEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGoldCoinPossessManager_OnEosUserContentsEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGoldCoinPossessManager_OnEosUserContentsEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGoldCoinPossessManager_OnEosUserContentsEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGoldCoinPossessManager_OnYGS2Response_DownloadData_Statics
	{
		struct ELGoldCoinPossessManager_eventOnYGS2Response_DownloadData_Parms
		{
			EYGS2ErrorType _errorType;
			UYGS2RequestBase* _requestBaseInstance;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__errorType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__errorType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__requestBaseInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELGoldCoinPossessManager_OnYGS2Response_DownloadData_Statics::NewProp__errorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELGoldCoinPossessManager_OnYGS2Response_DownloadData_Statics::NewProp__errorType = { "_errorType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGoldCoinPossessManager_eventOnYGS2Response_DownloadData_Parms, _errorType), Z_Construct_UEnum_yGS2Client_EYGS2ErrorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELGoldCoinPossessManager_OnYGS2Response_DownloadData_Statics::NewProp__requestBaseInstance = { "_requestBaseInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGoldCoinPossessManager_eventOnYGS2Response_DownloadData_Parms, _requestBaseInstance), Z_Construct_UClass_UYGS2RequestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGoldCoinPossessManager_OnYGS2Response_DownloadData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGoldCoinPossessManager_OnYGS2Response_DownloadData_Statics::NewProp__errorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGoldCoinPossessManager_OnYGS2Response_DownloadData_Statics::NewProp__errorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGoldCoinPossessManager_OnYGS2Response_DownloadData_Statics::NewProp__requestBaseInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGoldCoinPossessManager_OnYGS2Response_DownloadData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGoldCoinPossessManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGoldCoinPossessManager_OnYGS2Response_DownloadData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGoldCoinPossessManager, nullptr, "OnYGS2Response_DownloadData", nullptr, nullptr, sizeof(ELGoldCoinPossessManager_eventOnYGS2Response_DownloadData_Parms), Z_Construct_UFunction_UELGoldCoinPossessManager_OnYGS2Response_DownloadData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGoldCoinPossessManager_OnYGS2Response_DownloadData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGoldCoinPossessManager_OnYGS2Response_DownloadData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGoldCoinPossessManager_OnYGS2Response_DownloadData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGoldCoinPossessManager_OnYGS2Response_DownloadData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGoldCoinPossessManager_OnYGS2Response_DownloadData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGoldCoinPossessManager_OnYGS2Response_UploadData_Statics
	{
		struct ELGoldCoinPossessManager_eventOnYGS2Response_UploadData_Parms
		{
			EYGS2ErrorType _errorType;
			UYGS2RequestBase* _requestBaseInstance;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__errorType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__errorType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__requestBaseInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELGoldCoinPossessManager_OnYGS2Response_UploadData_Statics::NewProp__errorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELGoldCoinPossessManager_OnYGS2Response_UploadData_Statics::NewProp__errorType = { "_errorType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGoldCoinPossessManager_eventOnYGS2Response_UploadData_Parms, _errorType), Z_Construct_UEnum_yGS2Client_EYGS2ErrorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELGoldCoinPossessManager_OnYGS2Response_UploadData_Statics::NewProp__requestBaseInstance = { "_requestBaseInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGoldCoinPossessManager_eventOnYGS2Response_UploadData_Parms, _requestBaseInstance), Z_Construct_UClass_UYGS2RequestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGoldCoinPossessManager_OnYGS2Response_UploadData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGoldCoinPossessManager_OnYGS2Response_UploadData_Statics::NewProp__errorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGoldCoinPossessManager_OnYGS2Response_UploadData_Statics::NewProp__errorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGoldCoinPossessManager_OnYGS2Response_UploadData_Statics::NewProp__requestBaseInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGoldCoinPossessManager_OnYGS2Response_UploadData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGoldCoinPossessManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGoldCoinPossessManager_OnYGS2Response_UploadData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGoldCoinPossessManager, nullptr, "OnYGS2Response_UploadData", nullptr, nullptr, sizeof(ELGoldCoinPossessManager_eventOnYGS2Response_UploadData_Parms), Z_Construct_UFunction_UELGoldCoinPossessManager_OnYGS2Response_UploadData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGoldCoinPossessManager_OnYGS2Response_UploadData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGoldCoinPossessManager_OnYGS2Response_UploadData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGoldCoinPossessManager_OnYGS2Response_UploadData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGoldCoinPossessManager_OnYGS2Response_UploadData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGoldCoinPossessManager_OnYGS2Response_UploadData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGoldCoinPossessManager_RequestDownloadData_Statics
	{
		struct ELGoldCoinPossessManager_eventRequestDownloadData_Parms
		{
			FScriptDelegate OnResultDelegate;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResultDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELGoldCoinPossessManager_RequestDownloadData_Statics::NewProp_OnResultDelegate = { "OnResultDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGoldCoinPossessManager_eventRequestDownloadData_Parms, OnResultDelegate), Z_Construct_UDelegateFunction_ABP_200508_DonwloadedGoldCoinDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGoldCoinPossessManager_RequestDownloadData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGoldCoinPossessManager_RequestDownloadData_Statics::NewProp_OnResultDelegate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGoldCoinPossessManager_RequestDownloadData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGoldCoinPossessManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGoldCoinPossessManager_RequestDownloadData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGoldCoinPossessManager, nullptr, "RequestDownloadData", nullptr, nullptr, sizeof(ELGoldCoinPossessManager_eventRequestDownloadData_Parms), Z_Construct_UFunction_UELGoldCoinPossessManager_RequestDownloadData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGoldCoinPossessManager_RequestDownloadData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGoldCoinPossessManager_RequestDownloadData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGoldCoinPossessManager_RequestDownloadData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGoldCoinPossessManager_RequestDownloadData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGoldCoinPossessManager_RequestDownloadData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGoldCoinPossessManager_RequestDownloadDataFromEOS_Statics
	{
		struct ELGoldCoinPossessManager_eventRequestDownloadDataFromEOS_Parms
		{
			FScriptDelegate OnResultDelegate;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResultDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELGoldCoinPossessManager_RequestDownloadDataFromEOS_Statics::NewProp_OnResultDelegate = { "OnResultDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGoldCoinPossessManager_eventRequestDownloadDataFromEOS_Parms, OnResultDelegate), Z_Construct_UDelegateFunction_ABP_200508_DonwloadedGoldCoinDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELGoldCoinPossessManager_RequestDownloadDataFromEOS_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELGoldCoinPossessManager_eventRequestDownloadDataFromEOS_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELGoldCoinPossessManager_RequestDownloadDataFromEOS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELGoldCoinPossessManager_eventRequestDownloadDataFromEOS_Parms), &Z_Construct_UFunction_UELGoldCoinPossessManager_RequestDownloadDataFromEOS_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGoldCoinPossessManager_RequestDownloadDataFromEOS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGoldCoinPossessManager_RequestDownloadDataFromEOS_Statics::NewProp_OnResultDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGoldCoinPossessManager_RequestDownloadDataFromEOS_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGoldCoinPossessManager_RequestDownloadDataFromEOS_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGoldCoinPossessManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGoldCoinPossessManager_RequestDownloadDataFromEOS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGoldCoinPossessManager, nullptr, "RequestDownloadDataFromEOS", nullptr, nullptr, sizeof(ELGoldCoinPossessManager_eventRequestDownloadDataFromEOS_Parms), Z_Construct_UFunction_UELGoldCoinPossessManager_RequestDownloadDataFromEOS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGoldCoinPossessManager_RequestDownloadDataFromEOS_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGoldCoinPossessManager_RequestDownloadDataFromEOS_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGoldCoinPossessManager_RequestDownloadDataFromEOS_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGoldCoinPossessManager_RequestDownloadDataFromEOS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGoldCoinPossessManager_RequestDownloadDataFromEOS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELGoldCoinPossessManager_NoRegister()
	{
		return UELGoldCoinPossessManager::StaticClass();
	}
	struct Z_Construct_UClass_UELGoldCoinPossessManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELGoldCoinPossessManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELGoldCoinPossessManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELGoldCoinPossessManager_OnEosUserContentsEvent, "OnEosUserContentsEvent" }, // 2183314210
		{ &Z_Construct_UFunction_UELGoldCoinPossessManager_OnYGS2Response_DownloadData, "OnYGS2Response_DownloadData" }, // 2712642629
		{ &Z_Construct_UFunction_UELGoldCoinPossessManager_OnYGS2Response_UploadData, "OnYGS2Response_UploadData" }, // 472105735
		{ &Z_Construct_UFunction_UELGoldCoinPossessManager_RequestDownloadData, "RequestDownloadData" }, // 1671911921
		{ &Z_Construct_UFunction_UELGoldCoinPossessManager_RequestDownloadDataFromEOS, "RequestDownloadDataFromEOS" }, // 1033693607
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGoldCoinPossessManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELGoldCoinPossessManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELGoldCoinPossessManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELGoldCoinPossessManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELGoldCoinPossessManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELGoldCoinPossessManager_Statics::ClassParams = {
		&UELGoldCoinPossessManager::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELGoldCoinPossessManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELGoldCoinPossessManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELGoldCoinPossessManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELGoldCoinPossessManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELGoldCoinPossessManager, 964847779);
	template<> ABP_200508_API UClass* StaticClass<UELGoldCoinPossessManager>()
	{
		return UELGoldCoinPossessManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELGoldCoinPossessManager(Z_Construct_UClass_UELGoldCoinPossessManager, &UELGoldCoinPossessManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELGoldCoinPossessManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELGoldCoinPossessManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
