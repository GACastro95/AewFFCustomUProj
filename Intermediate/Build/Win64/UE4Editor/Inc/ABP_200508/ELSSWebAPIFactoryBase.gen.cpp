// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWebAPIFactoryBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWebAPIFactoryBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWebAPIFactoryBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWebAPIFactoryBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UELGameInstance_NoRegister();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_CreateWebAPISetting__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_WebRequestErrorDialogEvent__DelegateSignature();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSSuccessMatchData();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWebRequestBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSOnlineError_NoRegister();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FSSServerEndpoint();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FSSModeServerParam();
// End Cross Module References
	DEFINE_FUNCTION(UELSSWebAPIFactoryBase::execGetGameInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELGameInstance**)Z_Param__Result=P_THIS->GetGameInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWebAPIFactoryBase::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWebAPIFactoryBase::execSetInstance)
	{
		P_GET_OBJECT(UELSSWebAPIFactoryBase,Z_Param_Instance);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSWebAPIFactoryBase::SetInstance(Z_Param_Instance);
		P_NATIVE_END;
	}
	void UELSSWebAPIFactoryBase::StaticRegisterNativesUELSSWebAPIFactoryBase()
	{
		UClass* Class = UELSSWebAPIFactoryBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGameInstance", &UELSSWebAPIFactoryBase::execGetGameInstance },
			{ "Reset", &UELSSWebAPIFactoryBase::execReset },
			{ "SetInstance", &UELSSWebAPIFactoryBase::execSetInstance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSWebAPIFactoryBase_GetGameInstance_Statics
	{
		struct ELSSWebAPIFactoryBase_eventGetGameInstance_Parms
		{
			UELGameInstance* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSWebAPIFactoryBase_GetGameInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWebAPIFactoryBase_eventGetGameInstance_Parms, ReturnValue), Z_Construct_UClass_UELGameInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWebAPIFactoryBase_GetGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWebAPIFactoryBase_GetGameInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWebAPIFactoryBase_GetGameInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWebAPIFactoryBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWebAPIFactoryBase_GetGameInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWebAPIFactoryBase, nullptr, "GetGameInstance", nullptr, nullptr, sizeof(ELSSWebAPIFactoryBase_eventGetGameInstance_Parms), Z_Construct_UFunction_UELSSWebAPIFactoryBase_GetGameInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWebAPIFactoryBase_GetGameInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWebAPIFactoryBase_GetGameInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWebAPIFactoryBase_GetGameInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWebAPIFactoryBase_GetGameInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWebAPIFactoryBase_GetGameInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWebAPIFactoryBase_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWebAPIFactoryBase_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWebAPIFactoryBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWebAPIFactoryBase_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWebAPIFactoryBase, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWebAPIFactoryBase_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWebAPIFactoryBase_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWebAPIFactoryBase_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWebAPIFactoryBase_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWebAPIFactoryBase_SetInstance_Statics
	{
		struct ELSSWebAPIFactoryBase_eventSetInstance_Parms
		{
			UELSSWebAPIFactoryBase* Instance;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSWebAPIFactoryBase_SetInstance_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWebAPIFactoryBase_eventSetInstance_Parms, Instance), Z_Construct_UClass_UELSSWebAPIFactoryBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWebAPIFactoryBase_SetInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWebAPIFactoryBase_SetInstance_Statics::NewProp_Instance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWebAPIFactoryBase_SetInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWebAPIFactoryBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWebAPIFactoryBase_SetInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWebAPIFactoryBase, nullptr, "SetInstance", nullptr, nullptr, sizeof(ELSSWebAPIFactoryBase_eventSetInstance_Parms), Z_Construct_UFunction_UELSSWebAPIFactoryBase_SetInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWebAPIFactoryBase_SetInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWebAPIFactoryBase_SetInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWebAPIFactoryBase_SetInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWebAPIFactoryBase_SetInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWebAPIFactoryBase_SetInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSWebAPIFactoryBase_NoRegister()
	{
		return UELSSWebAPIFactoryBase::StaticClass();
	}
	struct Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onCreateWebAPISetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onCreateWebAPISetting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onSSWebAPIErrorDialogOpen_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onSSWebAPIErrorDialogOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ssMatchSessionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ssMatchSessionData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ssHttpRequestList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ssHttpRequestList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ssHttpRequestList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ssOnlineError_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ssOnlineError;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SSServerEndpoint_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSServerEndpoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SSServerEndpoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ssModeServerEnvData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ssModeServerEnvData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSWebAPIFactoryBase_GetGameInstance, "GetGameInstance" }, // 2184472672
		{ &Z_Construct_UFunction_UELSSWebAPIFactoryBase_Reset, "Reset" }, // 2637064681
		{ &Z_Construct_UFunction_UELSSWebAPIFactoryBase_SetInstance, "SetInstance" }, // 1435442043
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWebAPIFactoryBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWebAPIFactoryBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::NewProp_onCreateWebAPISetting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWebAPIFactoryBase" },
		{ "ModuleRelativePath", "Public/ELSSWebAPIFactoryBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::NewProp_onCreateWebAPISetting = { "onCreateWebAPISetting", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWebAPIFactoryBase, onCreateWebAPISetting), Z_Construct_UDelegateFunction_ABP_200508_CreateWebAPISetting__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::NewProp_onCreateWebAPISetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::NewProp_onCreateWebAPISetting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::NewProp_onSSWebAPIErrorDialogOpen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWebAPIFactoryBase" },
		{ "ModuleRelativePath", "Public/ELSSWebAPIFactoryBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::NewProp_onSSWebAPIErrorDialogOpen = { "onSSWebAPIErrorDialogOpen", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWebAPIFactoryBase, onSSWebAPIErrorDialogOpen), Z_Construct_UDelegateFunction_ABP_200508_WebRequestErrorDialogEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::NewProp_onSSWebAPIErrorDialogOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::NewProp_onSSWebAPIErrorDialogOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::NewProp_ssMatchSessionData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWebAPIFactoryBase" },
		{ "ModuleRelativePath", "Public/ELSSWebAPIFactoryBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::NewProp_ssMatchSessionData = { "ssMatchSessionData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWebAPIFactoryBase, ssMatchSessionData), Z_Construct_UScriptStruct_FSSSuccessMatchData, METADATA_PARAMS(Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::NewProp_ssMatchSessionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::NewProp_ssMatchSessionData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::NewProp_ssHttpRequestList_Inner = { "ssHttpRequestList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UELSSWebRequestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::NewProp_ssHttpRequestList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWebAPIFactoryBase" },
		{ "ModuleRelativePath", "Public/ELSSWebAPIFactoryBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::NewProp_ssHttpRequestList = { "ssHttpRequestList", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWebAPIFactoryBase, ssHttpRequestList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::NewProp_ssHttpRequestList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::NewProp_ssHttpRequestList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::NewProp_ssOnlineError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWebAPIFactoryBase" },
		{ "ModuleRelativePath", "Public/ELSSWebAPIFactoryBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::NewProp_ssOnlineError = { "ssOnlineError", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWebAPIFactoryBase, ssOnlineError), Z_Construct_UClass_UELSSOnlineError_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::NewProp_ssOnlineError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::NewProp_ssOnlineError_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::NewProp_SSServerEndpoint_Inner = { "SSServerEndpoint", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSServerEndpoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::NewProp_SSServerEndpoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWebAPIFactoryBase" },
		{ "ModuleRelativePath", "Public/ELSSWebAPIFactoryBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::NewProp_SSServerEndpoint = { "SSServerEndpoint", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWebAPIFactoryBase, SSServerEndpoint), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::NewProp_SSServerEndpoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::NewProp_SSServerEndpoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::NewProp_ssModeServerEnvData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWebAPIFactoryBase" },
		{ "ModuleRelativePath", "Public/ELSSWebAPIFactoryBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::NewProp_ssModeServerEnvData = { "ssModeServerEnvData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWebAPIFactoryBase, ssModeServerEnvData), Z_Construct_UScriptStruct_FSSModeServerParam, METADATA_PARAMS(Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::NewProp_ssModeServerEnvData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::NewProp_ssModeServerEnvData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::NewProp_onCreateWebAPISetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::NewProp_onSSWebAPIErrorDialogOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::NewProp_ssMatchSessionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::NewProp_ssHttpRequestList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::NewProp_ssHttpRequestList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::NewProp_ssOnlineError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::NewProp_SSServerEndpoint_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::NewProp_SSServerEndpoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::NewProp_ssModeServerEnvData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSWebAPIFactoryBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::ClassParams = {
		&UELSSWebAPIFactoryBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSWebAPIFactoryBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSWebAPIFactoryBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSWebAPIFactoryBase, 4036697541);
	template<> ABP_200508_API UClass* StaticClass<UELSSWebAPIFactoryBase>()
	{
		return UELSSWebAPIFactoryBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSWebAPIFactoryBase(Z_Construct_UClass_UELSSWebAPIFactoryBase, &UELSSWebAPIFactoryBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSWebAPIFactoryBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSWebAPIFactoryBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
