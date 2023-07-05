// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeyDebug_init() {}
	YDEBUG_API UFunction* Z_Construct_UDelegateFunction_yDebug_DebugMenuNotifyDispatcher__DelegateSignature();
	YDEBUG_API UFunction* Z_Construct_UDelegateFunction_yDebug_DebugMenuNotifySimpleDispatcher__DelegateSignature();
	YDEBUG_API UFunction* Z_Construct_UDelegateFunction_yDebug_DebugSettingActiveFlagChangedDispatcher__DelegateSignature();
	YDEBUG_API UFunction* Z_Construct_UDelegateFunction_yDebug_DebugSettingValueChangedDispatcher__DelegateSignature();
	YDEBUG_API UFunction* Z_Construct_UDelegateFunction_yDebug_JIRAAccessorEventDispatcher__DelegateSignature();
	YDEBUG_API UFunction* Z_Construct_UDelegateFunction_yDebug_JIRASearchEventDispatcher__DelegateSignature();
	YDEBUG_API UFunction* Z_Construct_UDelegateFunction_yDebug_YDebugMenuCallbackDispatcher__DelegateSignature();
	YDEBUG_API UFunction* Z_Construct_UDelegateFunction_yDebug_YDebugMenuRootBaseDispacher__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_yDebug()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_yDebug_DebugMenuNotifyDispatcher__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_yDebug_DebugMenuNotifySimpleDispatcher__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_yDebug_DebugSettingActiveFlagChangedDispatcher__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_yDebug_DebugSettingValueChangedDispatcher__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_yDebug_JIRAAccessorEventDispatcher__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_yDebug_JIRASearchEventDispatcher__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_yDebug_YDebugMenuCallbackDispatcher__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_yDebug_YDebugMenuRootBaseDispacher__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/yDebug",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x6B80208D,
				0xBD0011C2,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
