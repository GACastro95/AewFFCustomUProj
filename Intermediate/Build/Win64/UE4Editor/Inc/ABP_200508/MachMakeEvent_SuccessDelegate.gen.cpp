// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/MachMakeEvent_SuccessDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMachMakeEvent_SuccessDelegate() {}
// Cross Module References
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Success__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EGameLiftMatchMakeState();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMatchMakeExecuteType();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMatchMakeSystemData();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Success__DelegateSignature_Statics
	{
		struct _Script_ABP_200508_eventMachMakeEvent_Success_Parms
		{
			EGameLiftMatchMakeState nowState;
			EMatchMakeExecuteType callType;
			FMatchMakeSystemData matchmake;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_matchmake_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_matchmake;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Success__DelegateSignature_Statics::NewProp_nowState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Success__DelegateSignature_Statics::NewProp_nowState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Success__DelegateSignature_Statics::NewProp_nowState = { "nowState", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ABP_200508_eventMachMakeEvent_Success_Parms, nowState), Z_Construct_UEnum_ABP_200508_EGameLiftMatchMakeState, METADATA_PARAMS(Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Success__DelegateSignature_Statics::NewProp_nowState_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Success__DelegateSignature_Statics::NewProp_nowState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Success__DelegateSignature_Statics::NewProp_callType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Success__DelegateSignature_Statics::NewProp_callType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Success__DelegateSignature_Statics::NewProp_callType = { "callType", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ABP_200508_eventMachMakeEvent_Success_Parms, callType), Z_Construct_UEnum_ABP_200508_EMatchMakeExecuteType, METADATA_PARAMS(Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Success__DelegateSignature_Statics::NewProp_callType_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Success__DelegateSignature_Statics::NewProp_callType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Success__DelegateSignature_Statics::NewProp_matchmake_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Success__DelegateSignature_Statics::NewProp_matchmake = { "matchmake", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ABP_200508_eventMachMakeEvent_Success_Parms, matchmake), Z_Construct_UScriptStruct_FMatchMakeSystemData, METADATA_PARAMS(Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Success__DelegateSignature_Statics::NewProp_matchmake_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Success__DelegateSignature_Statics::NewProp_matchmake_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Success__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Success__DelegateSignature_Statics::NewProp_nowState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Success__DelegateSignature_Statics::NewProp_nowState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Success__DelegateSignature_Statics::NewProp_callType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Success__DelegateSignature_Statics::NewProp_callType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Success__DelegateSignature_Statics::NewProp_matchmake,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Success__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MachMakeEvent_SuccessDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Success__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ABP_200508, nullptr, "MachMakeEvent_Success__DelegateSignature", nullptr, nullptr, sizeof(_Script_ABP_200508_eventMachMakeEvent_Success_Parms), Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Success__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Success__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Success__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Success__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Success__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Success__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
