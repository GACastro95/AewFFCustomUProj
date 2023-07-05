// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NVIDIAGfeSDK/Public/OnGetNumberOfHighlightsCallbackDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnGetNumberOfHighlightsCallbackDelegate() {}
// Cross Module References
	NVIDIAGFESDK_API UFunction* Z_Construct_UDelegateFunction_NVIDIAGfeSDK_OnGetNumberOfHighlightsCallback__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_NVIDIAGfeSDK();
	NVIDIAGFESDK_API UEnum* Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKReturnCode();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_NVIDIAGfeSDK_OnGetNumberOfHighlightsCallback__DelegateSignature_Statics
	{
		struct _Script_NVIDIAGfeSDK_eventOnGetNumberOfHighlightsCallback_Parms
		{
			EGfeSDKReturnCode GfeSdkReturnCode;
			int32 NumberOfHighlights;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GfeSdkReturnCode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GfeSdkReturnCode;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfHighlights;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_NVIDIAGfeSDK_OnGetNumberOfHighlightsCallback__DelegateSignature_Statics::NewProp_GfeSdkReturnCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_NVIDIAGfeSDK_OnGetNumberOfHighlightsCallback__DelegateSignature_Statics::NewProp_GfeSdkReturnCode = { "GfeSdkReturnCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_NVIDIAGfeSDK_eventOnGetNumberOfHighlightsCallback_Parms, GfeSdkReturnCode), Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKReturnCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_NVIDIAGfeSDK_OnGetNumberOfHighlightsCallback__DelegateSignature_Statics::NewProp_NumberOfHighlights = { "NumberOfHighlights", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_NVIDIAGfeSDK_eventOnGetNumberOfHighlightsCallback_Parms, NumberOfHighlights), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NVIDIAGfeSDK_OnGetNumberOfHighlightsCallback__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NVIDIAGfeSDK_OnGetNumberOfHighlightsCallback__DelegateSignature_Statics::NewProp_GfeSdkReturnCode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NVIDIAGfeSDK_OnGetNumberOfHighlightsCallback__DelegateSignature_Statics::NewProp_GfeSdkReturnCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NVIDIAGfeSDK_OnGetNumberOfHighlightsCallback__DelegateSignature_Statics::NewProp_NumberOfHighlights,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NVIDIAGfeSDK_OnGetNumberOfHighlightsCallback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnGetNumberOfHighlightsCallbackDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NVIDIAGfeSDK_OnGetNumberOfHighlightsCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NVIDIAGfeSDK, nullptr, "OnGetNumberOfHighlightsCallback__DelegateSignature", nullptr, nullptr, sizeof(_Script_NVIDIAGfeSDK_eventOnGetNumberOfHighlightsCallback_Parms), Z_Construct_UDelegateFunction_NVIDIAGfeSDK_OnGetNumberOfHighlightsCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NVIDIAGfeSDK_OnGetNumberOfHighlightsCallback__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_NVIDIAGfeSDK_OnGetNumberOfHighlightsCallback__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NVIDIAGfeSDK_OnGetNumberOfHighlightsCallback__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_NVIDIAGfeSDK_OnGetNumberOfHighlightsCallback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_NVIDIAGfeSDK_OnGetNumberOfHighlightsCallback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
