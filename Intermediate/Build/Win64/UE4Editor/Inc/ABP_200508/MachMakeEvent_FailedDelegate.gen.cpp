// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/MachMakeEvent_FailedDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMachMakeEvent_FailedDelegate() {}
// Cross Module References
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Failed__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EGameLiftMatchMakeState();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMatchMakeExecuteType();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Failed__DelegateSignature_Statics
	{
		struct _Script_ABP_200508_eventMachMakeEvent_Failed_Parms
		{
			EGameLiftMatchMakeState nowState;
			EMatchMakeExecuteType callType;
			FString errorMsg;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_nowState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nowState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_nowState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_callType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_callType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errorMsg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_errorMsg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Failed__DelegateSignature_Statics::NewProp_nowState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Failed__DelegateSignature_Statics::NewProp_nowState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Failed__DelegateSignature_Statics::NewProp_nowState = { "nowState", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ABP_200508_eventMachMakeEvent_Failed_Parms, nowState), Z_Construct_UEnum_ABP_200508_EGameLiftMatchMakeState, METADATA_PARAMS(Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Failed__DelegateSignature_Statics::NewProp_nowState_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Failed__DelegateSignature_Statics::NewProp_nowState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Failed__DelegateSignature_Statics::NewProp_callType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Failed__DelegateSignature_Statics::NewProp_callType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Failed__DelegateSignature_Statics::NewProp_callType = { "callType", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ABP_200508_eventMachMakeEvent_Failed_Parms, callType), Z_Construct_UEnum_ABP_200508_EMatchMakeExecuteType, METADATA_PARAMS(Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Failed__DelegateSignature_Statics::NewProp_callType_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Failed__DelegateSignature_Statics::NewProp_callType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Failed__DelegateSignature_Statics::NewProp_errorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Failed__DelegateSignature_Statics::NewProp_errorMsg = { "errorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ABP_200508_eventMachMakeEvent_Failed_Parms, errorMsg), METADATA_PARAMS(Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Failed__DelegateSignature_Statics::NewProp_errorMsg_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Failed__DelegateSignature_Statics::NewProp_errorMsg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Failed__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Failed__DelegateSignature_Statics::NewProp_nowState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Failed__DelegateSignature_Statics::NewProp_nowState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Failed__DelegateSignature_Statics::NewProp_callType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Failed__DelegateSignature_Statics::NewProp_callType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Failed__DelegateSignature_Statics::NewProp_errorMsg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Failed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MachMakeEvent_FailedDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Failed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ABP_200508, nullptr, "MachMakeEvent_Failed__DelegateSignature", nullptr, nullptr, sizeof(_Script_ABP_200508_eventMachMakeEvent_Failed_Parms), Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Failed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Failed__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Failed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Failed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Failed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Failed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
