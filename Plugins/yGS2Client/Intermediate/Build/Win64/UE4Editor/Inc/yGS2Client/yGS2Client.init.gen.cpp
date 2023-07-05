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
void EmptyLinkFunctionForGeneratedCodeyGS2Client_init() {}
	YGS2CLIENT_API UFunction* Z_Construct_UDelegateFunction_yGS2Client_ErrorRequestRetryEvent__DelegateSignature();
	YGS2CLIENT_API UFunction* Z_Construct_UDelegateFunction_yGS2Client_RequestErrorDialogEvent__DelegateSignature();
	YGS2CLIENT_API UFunction* Z_Construct_UDelegateFunction_yGS2Client_YGS2ResponseDispatcher__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_yGS2Client()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_yGS2Client_ErrorRequestRetryEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_yGS2Client_RequestErrorDialogEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_yGS2Client_YGS2ResponseDispatcher__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/yGS2Client",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x66FFCB16,
				0x18040D4C,
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
