// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/YGS2ResponseDispatcherDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYGS2ResponseDispatcherDelegate() {}
// Cross Module References
	YGS2CLIENT_API UFunction* Z_Construct_UDelegateFunction_yGS2Client_YGS2ResponseDispatcher__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
	YGS2CLIENT_API UEnum* Z_Construct_UEnum_yGS2Client_EYGS2ErrorType();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2RequestBase_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_yGS2Client_YGS2ResponseDispatcher__DelegateSignature_Statics
	{
		struct _Script_yGS2Client_eventYGS2ResponseDispatcher_Parms
		{
			EYGS2ErrorType YGS2ErrorType;
			UYGS2RequestBase* YGS2RequestBase;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_YGS2ErrorType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_YGS2ErrorType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_YGS2RequestBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_yGS2Client_YGS2ResponseDispatcher__DelegateSignature_Statics::NewProp_YGS2ErrorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_yGS2Client_YGS2ResponseDispatcher__DelegateSignature_Statics::NewProp_YGS2ErrorType = { "YGS2ErrorType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_yGS2Client_eventYGS2ResponseDispatcher_Parms, YGS2ErrorType), Z_Construct_UEnum_yGS2Client_EYGS2ErrorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_yGS2Client_YGS2ResponseDispatcher__DelegateSignature_Statics::NewProp_YGS2RequestBase = { "YGS2RequestBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_yGS2Client_eventYGS2ResponseDispatcher_Parms, YGS2RequestBase), Z_Construct_UClass_UYGS2RequestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_yGS2Client_YGS2ResponseDispatcher__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_yGS2Client_YGS2ResponseDispatcher__DelegateSignature_Statics::NewProp_YGS2ErrorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_yGS2Client_YGS2ResponseDispatcher__DelegateSignature_Statics::NewProp_YGS2ErrorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_yGS2Client_YGS2ResponseDispatcher__DelegateSignature_Statics::NewProp_YGS2RequestBase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_yGS2Client_YGS2ResponseDispatcher__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2ResponseDispatcherDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_yGS2Client_YGS2ResponseDispatcher__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_yGS2Client, nullptr, "YGS2ResponseDispatcher__DelegateSignature", nullptr, nullptr, sizeof(_Script_yGS2Client_eventYGS2ResponseDispatcher_Parms), Z_Construct_UDelegateFunction_yGS2Client_YGS2ResponseDispatcher__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_yGS2Client_YGS2ResponseDispatcher__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_yGS2Client_YGS2ResponseDispatcher__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_yGS2Client_YGS2ResponseDispatcher__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_yGS2Client_YGS2ResponseDispatcher__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_yGS2Client_YGS2ResponseDispatcher__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
