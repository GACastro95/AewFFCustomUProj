// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/OnCreatePlayerSessionSuccessDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnCreatePlayerSessionSuccessDelegate() {}
// Cross Module References
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_OnCreatePlayerSessionSuccess__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCreatePlayerSession_RequestParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ABP_200508_OnCreatePlayerSessionSuccess__DelegateSignature_Statics
	{
		struct _Script_ABP_200508_eventOnCreatePlayerSessionSuccess_Parms
		{
			FCreatePlayerSession_RequestParam Request;
			FGameLiftPlayerSession_Response response;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Request;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_response_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ABP_200508_OnCreatePlayerSessionSuccess__DelegateSignature_Statics::NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ABP_200508_OnCreatePlayerSessionSuccess__DelegateSignature_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ABP_200508_eventOnCreatePlayerSessionSuccess_Parms, Request), Z_Construct_UScriptStruct_FCreatePlayerSession_RequestParam, METADATA_PARAMS(Z_Construct_UDelegateFunction_ABP_200508_OnCreatePlayerSessionSuccess__DelegateSignature_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ABP_200508_OnCreatePlayerSessionSuccess__DelegateSignature_Statics::NewProp_Request_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ABP_200508_OnCreatePlayerSessionSuccess__DelegateSignature_Statics::NewProp_response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ABP_200508_OnCreatePlayerSessionSuccess__DelegateSignature_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ABP_200508_eventOnCreatePlayerSessionSuccess_Parms, response), Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response, METADATA_PARAMS(Z_Construct_UDelegateFunction_ABP_200508_OnCreatePlayerSessionSuccess__DelegateSignature_Statics::NewProp_response_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ABP_200508_OnCreatePlayerSessionSuccess__DelegateSignature_Statics::NewProp_response_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ABP_200508_OnCreatePlayerSessionSuccess__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ABP_200508_OnCreatePlayerSessionSuccess__DelegateSignature_Statics::NewProp_Request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ABP_200508_OnCreatePlayerSessionSuccess__DelegateSignature_Statics::NewProp_response,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ABP_200508_OnCreatePlayerSessionSuccess__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnCreatePlayerSessionSuccessDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ABP_200508_OnCreatePlayerSessionSuccess__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ABP_200508, nullptr, "OnCreatePlayerSessionSuccess__DelegateSignature", nullptr, nullptr, sizeof(_Script_ABP_200508_eventOnCreatePlayerSessionSuccess_Parms), Z_Construct_UDelegateFunction_ABP_200508_OnCreatePlayerSessionSuccess__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ABP_200508_OnCreatePlayerSessionSuccess__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ABP_200508_OnCreatePlayerSessionSuccess__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ABP_200508_OnCreatePlayerSessionSuccess__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ABP_200508_OnCreatePlayerSessionSuccess__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ABP_200508_OnCreatePlayerSessionSuccess__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
