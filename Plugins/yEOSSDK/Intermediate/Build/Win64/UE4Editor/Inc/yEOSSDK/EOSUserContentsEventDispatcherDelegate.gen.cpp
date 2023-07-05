// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSUserContentsEventDispatcherDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSUserContentsEventDispatcherDelegate() {}
// Cross Module References
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSUserContentsEventDispatcher__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSUserContentsEvent();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserContentsBase_NoRegister();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUserContentProgress();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_yEOSSDK_EOSUserContentsEventDispatcher__DelegateSignature_Statics
	{
		struct _Script_yEOSSDK_eventEOSUserContentsEventDispatcher_Parms
		{
			EEOSUserContentsEvent EOSUserContentsEvent;
			UEOSUserContentsBase* EOSUserContentsBase;
			FEOSUserContentProgress EOSUserContentProgress;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EOSUserContentsEvent_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EOSUserContentsEvent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EOSUserContentsBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EOSUserContentProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EOSUserContentProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_yEOSSDK_EOSUserContentsEventDispatcher__DelegateSignature_Statics::NewProp_EOSUserContentsEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_yEOSSDK_EOSUserContentsEventDispatcher__DelegateSignature_Statics::NewProp_EOSUserContentsEvent = { "EOSUserContentsEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_yEOSSDK_eventEOSUserContentsEventDispatcher_Parms, EOSUserContentsEvent), Z_Construct_UEnum_yEOSSDK_EEOSUserContentsEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_yEOSSDK_EOSUserContentsEventDispatcher__DelegateSignature_Statics::NewProp_EOSUserContentsBase = { "EOSUserContentsBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_yEOSSDK_eventEOSUserContentsEventDispatcher_Parms, EOSUserContentsBase), Z_Construct_UClass_UEOSUserContentsBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_yEOSSDK_EOSUserContentsEventDispatcher__DelegateSignature_Statics::NewProp_EOSUserContentProgress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_yEOSSDK_EOSUserContentsEventDispatcher__DelegateSignature_Statics::NewProp_EOSUserContentProgress = { "EOSUserContentProgress", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_yEOSSDK_eventEOSUserContentsEventDispatcher_Parms, EOSUserContentProgress), Z_Construct_UScriptStruct_FEOSUserContentProgress, METADATA_PARAMS(Z_Construct_UDelegateFunction_yEOSSDK_EOSUserContentsEventDispatcher__DelegateSignature_Statics::NewProp_EOSUserContentProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_yEOSSDK_EOSUserContentsEventDispatcher__DelegateSignature_Statics::NewProp_EOSUserContentProgress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_yEOSSDK_EOSUserContentsEventDispatcher__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_yEOSSDK_EOSUserContentsEventDispatcher__DelegateSignature_Statics::NewProp_EOSUserContentsEvent_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_yEOSSDK_EOSUserContentsEventDispatcher__DelegateSignature_Statics::NewProp_EOSUserContentsEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_yEOSSDK_EOSUserContentsEventDispatcher__DelegateSignature_Statics::NewProp_EOSUserContentsBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_yEOSSDK_EOSUserContentsEventDispatcher__DelegateSignature_Statics::NewProp_EOSUserContentProgress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_yEOSSDK_EOSUserContentsEventDispatcher__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserContentsEventDispatcherDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_yEOSSDK_EOSUserContentsEventDispatcher__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK, nullptr, "EOSUserContentsEventDispatcher__DelegateSignature", nullptr, nullptr, sizeof(_Script_yEOSSDK_eventEOSUserContentsEventDispatcher_Parms), Z_Construct_UDelegateFunction_yEOSSDK_EOSUserContentsEventDispatcher__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_yEOSSDK_EOSUserContentsEventDispatcher__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_yEOSSDK_EOSUserContentsEventDispatcher__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_yEOSSDK_EOSUserContentsEventDispatcher__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSUserContentsEventDispatcher__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_yEOSSDK_EOSUserContentsEventDispatcher__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
