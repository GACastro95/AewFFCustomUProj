// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSStatsEventDispatcherDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSStatsEventDispatcherDelegate() {}
// Cross Module References
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSStatsEventDispatcher__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSStatsEvent();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSStats_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_yEOSSDK_EOSStatsEventDispatcher__DelegateSignature_Statics
	{
		struct _Script_yEOSSDK_eventEOSStatsEventDispatcher_Parms
		{
			EEOSStatsEvent EOSStatsEvent;
			UEOSStats* EOSStats;
			FString ProductUserID;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EOSStatsEvent_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EOSStatsEvent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EOSStats;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_yEOSSDK_EOSStatsEventDispatcher__DelegateSignature_Statics::NewProp_EOSStatsEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_yEOSSDK_EOSStatsEventDispatcher__DelegateSignature_Statics::NewProp_EOSStatsEvent = { "EOSStatsEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_yEOSSDK_eventEOSStatsEventDispatcher_Parms, EOSStatsEvent), Z_Construct_UEnum_yEOSSDK_EEOSStatsEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_yEOSSDK_EOSStatsEventDispatcher__DelegateSignature_Statics::NewProp_EOSStats = { "EOSStats", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_yEOSSDK_eventEOSStatsEventDispatcher_Parms, EOSStats), Z_Construct_UClass_UEOSStats_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_yEOSSDK_EOSStatsEventDispatcher__DelegateSignature_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_yEOSSDK_EOSStatsEventDispatcher__DelegateSignature_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_yEOSSDK_eventEOSStatsEventDispatcher_Parms, ProductUserID), METADATA_PARAMS(Z_Construct_UDelegateFunction_yEOSSDK_EOSStatsEventDispatcher__DelegateSignature_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_yEOSSDK_EOSStatsEventDispatcher__DelegateSignature_Statics::NewProp_ProductUserID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_yEOSSDK_EOSStatsEventDispatcher__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_yEOSSDK_EOSStatsEventDispatcher__DelegateSignature_Statics::NewProp_EOSStatsEvent_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_yEOSSDK_EOSStatsEventDispatcher__DelegateSignature_Statics::NewProp_EOSStatsEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_yEOSSDK_EOSStatsEventDispatcher__DelegateSignature_Statics::NewProp_EOSStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_yEOSSDK_EOSStatsEventDispatcher__DelegateSignature_Statics::NewProp_ProductUserID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_yEOSSDK_EOSStatsEventDispatcher__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSStatsEventDispatcherDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_yEOSSDK_EOSStatsEventDispatcher__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK, nullptr, "EOSStatsEventDispatcher__DelegateSignature", nullptr, nullptr, sizeof(_Script_yEOSSDK_eventEOSStatsEventDispatcher_Parms), Z_Construct_UDelegateFunction_yEOSSDK_EOSStatsEventDispatcher__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_yEOSSDK_EOSStatsEventDispatcher__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_yEOSSDK_EOSStatsEventDispatcher__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_yEOSSDK_EOSStatsEventDispatcher__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSStatsEventDispatcher__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_yEOSSDK_EOSStatsEventDispatcher__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
