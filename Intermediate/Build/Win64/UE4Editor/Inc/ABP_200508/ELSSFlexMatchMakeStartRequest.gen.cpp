// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSFlexMatchMakeStartRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSFlexMatchMakeStartRequest() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSFlexMatchMakeStartRequest_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSFlexMatchMakeStartRequest();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWebRequestBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FPingData();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_eSSRequestResultType();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_FlexMatchMakeStar_RequestEvent__DelegateSignature();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_ResponseData();
// End Cross Module References
	DEFINE_FUNCTION(UELSSFlexMatchMakeStartRequest::execCreateAPI)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_buildID);
		P_GET_TARRAY(FPingData,Z_Param_regionLatencieData);
		P_GET_UBOOL(Z_Param_isSinglePlay);
		P_GET_PROPERTY(FIntProperty,Z_Param_singlePlayFixedSecond);
		P_GET_PROPERTY(FStrProperty,Z_Param_pRegion);
		P_GET_PROPERTY(FStrProperty,Z_Param_DataID);
		P_GET_PROPERTY(FIntProperty,Z_Param_GroupId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateAPI(Z_Param_buildID,Z_Param_regionLatencieData,Z_Param_isSinglePlay,Z_Param_singlePlayFixedSecond,Z_Param_pRegion,Z_Param_DataID,Z_Param_GroupId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSFlexMatchMakeStartRequest::execCreateRequestInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELSSFlexMatchMakeStartRequest**)Z_Param__Result=UELSSFlexMatchMakeStartRequest::CreateRequestInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSFlexMatchMakeStartRequest::execRequestResult)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_responseCode);
		P_GET_PROPERTY(FStrProperty,Z_Param_responseData);
		P_GET_ENUM(eSSRequestResultType,Z_Param_resultType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestResult(Z_Param_responseCode,Z_Param_responseData,eSSRequestResultType(Z_Param_resultType));
		P_NATIVE_END;
	}
	void UELSSFlexMatchMakeStartRequest::StaticRegisterNativesUELSSFlexMatchMakeStartRequest()
	{
		UClass* Class = UELSSFlexMatchMakeStartRequest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateAPI", &UELSSFlexMatchMakeStartRequest::execCreateAPI },
			{ "CreateRequestInstance", &UELSSFlexMatchMakeStartRequest::execCreateRequestInstance },
			{ "RequestResult", &UELSSFlexMatchMakeStartRequest::execRequestResult },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics
	{
		struct ELSSFlexMatchMakeStartRequest_eventCreateAPI_Parms
		{
			FString buildID;
			TArray<FPingData> regionLatencieData;
			bool isSinglePlay;
			int32 singlePlayFixedSecond;
			FString pRegion;
			FString DataID;
			int32 GroupId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buildID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_buildID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_regionLatencieData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_regionLatencieData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_regionLatencieData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isSinglePlay_MetaData[];
#endif
		static void NewProp_isSinglePlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSinglePlay;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_singlePlayFixedSecond;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pRegion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_pRegion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GroupId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::NewProp_buildID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::NewProp_buildID = { "buildID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSFlexMatchMakeStartRequest_eventCreateAPI_Parms, buildID), METADATA_PARAMS(Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::NewProp_buildID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::NewProp_buildID_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::NewProp_regionLatencieData_Inner = { "regionLatencieData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPingData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::NewProp_regionLatencieData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::NewProp_regionLatencieData = { "regionLatencieData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSFlexMatchMakeStartRequest_eventCreateAPI_Parms, regionLatencieData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::NewProp_regionLatencieData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::NewProp_regionLatencieData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::NewProp_isSinglePlay_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::NewProp_isSinglePlay_SetBit(void* Obj)
	{
		((ELSSFlexMatchMakeStartRequest_eventCreateAPI_Parms*)Obj)->isSinglePlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::NewProp_isSinglePlay = { "isSinglePlay", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSFlexMatchMakeStartRequest_eventCreateAPI_Parms), &Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::NewProp_isSinglePlay_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::NewProp_isSinglePlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::NewProp_isSinglePlay_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::NewProp_singlePlayFixedSecond = { "singlePlayFixedSecond", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSFlexMatchMakeStartRequest_eventCreateAPI_Parms, singlePlayFixedSecond), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::NewProp_pRegion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::NewProp_pRegion = { "pRegion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSFlexMatchMakeStartRequest_eventCreateAPI_Parms, pRegion), METADATA_PARAMS(Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::NewProp_pRegion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::NewProp_pRegion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::NewProp_DataID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::NewProp_DataID = { "DataID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSFlexMatchMakeStartRequest_eventCreateAPI_Parms, DataID), METADATA_PARAMS(Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::NewProp_DataID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::NewProp_DataID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::NewProp_GroupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSFlexMatchMakeStartRequest_eventCreateAPI_Parms, GroupId), METADATA_PARAMS(Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::NewProp_GroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::NewProp_GroupId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::NewProp_buildID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::NewProp_regionLatencieData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::NewProp_regionLatencieData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::NewProp_isSinglePlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::NewProp_singlePlayFixedSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::NewProp_pRegion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::NewProp_DataID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::NewProp_GroupId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSFlexMatchMakeStartRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSFlexMatchMakeStartRequest, nullptr, "CreateAPI", nullptr, nullptr, sizeof(ELSSFlexMatchMakeStartRequest_eventCreateAPI_Parms), Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateRequestInstance_Statics
	{
		struct ELSSFlexMatchMakeStartRequest_eventCreateRequestInstance_Parms
		{
			UELSSFlexMatchMakeStartRequest* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateRequestInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSFlexMatchMakeStartRequest_eventCreateRequestInstance_Parms, ReturnValue), Z_Construct_UClass_UELSSFlexMatchMakeStartRequest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateRequestInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateRequestInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateRequestInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSFlexMatchMakeStartRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateRequestInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSFlexMatchMakeStartRequest, nullptr, "CreateRequestInstance", nullptr, nullptr, sizeof(ELSSFlexMatchMakeStartRequest_eventCreateRequestInstance_Parms), Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateRequestInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateRequestInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateRequestInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateRequestInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateRequestInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateRequestInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_RequestResult_Statics
	{
		struct ELSSFlexMatchMakeStartRequest_eventRequestResult_Parms
		{
			int32 responseCode;
			FString responseData;
			eSSRequestResultType resultType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_responseCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_responseCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_responseData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_responseData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_resultType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_resultType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_RequestResult_Statics::NewProp_responseCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_RequestResult_Statics::NewProp_responseCode = { "responseCode", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSFlexMatchMakeStartRequest_eventRequestResult_Parms, responseCode), METADATA_PARAMS(Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_RequestResult_Statics::NewProp_responseCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_RequestResult_Statics::NewProp_responseCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_RequestResult_Statics::NewProp_responseData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_RequestResult_Statics::NewProp_responseData = { "responseData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSFlexMatchMakeStartRequest_eventRequestResult_Parms, responseData), METADATA_PARAMS(Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_RequestResult_Statics::NewProp_responseData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_RequestResult_Statics::NewProp_responseData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_RequestResult_Statics::NewProp_resultType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_RequestResult_Statics::NewProp_resultType = { "resultType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSFlexMatchMakeStartRequest_eventRequestResult_Parms, resultType), Z_Construct_UEnum_ABP_200508_eSSRequestResultType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_RequestResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_RequestResult_Statics::NewProp_responseCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_RequestResult_Statics::NewProp_responseData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_RequestResult_Statics::NewProp_resultType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_RequestResult_Statics::NewProp_resultType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_RequestResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSFlexMatchMakeStartRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_RequestResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSFlexMatchMakeStartRequest, nullptr, "RequestResult", nullptr, nullptr, sizeof(ELSSFlexMatchMakeStartRequest_eventRequestResult_Parms), Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_RequestResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_RequestResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_RequestResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_RequestResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_RequestResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_RequestResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSFlexMatchMakeStartRequest_NoRegister()
	{
		return UELSSFlexMatchMakeStartRequest::StaticClass();
	}
	struct Z_Construct_UClass_UELSSFlexMatchMakeStartRequest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onFlexMatchStartRequestEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onFlexMatchStartRequestEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ssRequestData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ssRequestData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ssResponseData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ssResponseData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSFlexMatchMakeStartRequest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSWebRequestBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSFlexMatchMakeStartRequest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateAPI, "CreateAPI" }, // 1063654259
		{ &Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_CreateRequestInstance, "CreateRequestInstance" }, // 1797616490
		{ &Z_Construct_UFunction_UELSSFlexMatchMakeStartRequest_RequestResult, "RequestResult" }, // 2430861004
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSFlexMatchMakeStartRequest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSFlexMatchMakeStartRequest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSFlexMatchMakeStartRequest.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSFlexMatchMakeStartRequest_Statics::NewProp_onFlexMatchStartRequestEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSFlexMatchMakeStartRequest" },
		{ "ModuleRelativePath", "Public/ELSSFlexMatchMakeStartRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELSSFlexMatchMakeStartRequest_Statics::NewProp_onFlexMatchStartRequestEvent = { "onFlexMatchStartRequestEvent", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSFlexMatchMakeStartRequest, onFlexMatchStartRequestEvent), Z_Construct_UDelegateFunction_ABP_200508_FlexMatchMakeStar_RequestEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELSSFlexMatchMakeStartRequest_Statics::NewProp_onFlexMatchStartRequestEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSFlexMatchMakeStartRequest_Statics::NewProp_onFlexMatchStartRequestEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSFlexMatchMakeStartRequest_Statics::NewProp_ssRequestData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSFlexMatchMakeStartRequest" },
		{ "ModuleRelativePath", "Public/ELSSFlexMatchMakeStartRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSFlexMatchMakeStartRequest_Statics::NewProp_ssRequestData = { "ssRequestData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSFlexMatchMakeStartRequest, ssRequestData), Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData, METADATA_PARAMS(Z_Construct_UClass_UELSSFlexMatchMakeStartRequest_Statics::NewProp_ssRequestData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSFlexMatchMakeStartRequest_Statics::NewProp_ssRequestData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSFlexMatchMakeStartRequest_Statics::NewProp_ssResponseData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSFlexMatchMakeStartRequest" },
		{ "ModuleRelativePath", "Public/ELSSFlexMatchMakeStartRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSFlexMatchMakeStartRequest_Statics::NewProp_ssResponseData = { "ssResponseData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSFlexMatchMakeStartRequest, ssResponseData), Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_ResponseData, METADATA_PARAMS(Z_Construct_UClass_UELSSFlexMatchMakeStartRequest_Statics::NewProp_ssResponseData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSFlexMatchMakeStartRequest_Statics::NewProp_ssResponseData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSFlexMatchMakeStartRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSFlexMatchMakeStartRequest_Statics::NewProp_onFlexMatchStartRequestEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSFlexMatchMakeStartRequest_Statics::NewProp_ssRequestData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSFlexMatchMakeStartRequest_Statics::NewProp_ssResponseData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSFlexMatchMakeStartRequest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSFlexMatchMakeStartRequest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSFlexMatchMakeStartRequest_Statics::ClassParams = {
		&UELSSFlexMatchMakeStartRequest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSFlexMatchMakeStartRequest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSFlexMatchMakeStartRequest_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSFlexMatchMakeStartRequest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSFlexMatchMakeStartRequest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSFlexMatchMakeStartRequest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSFlexMatchMakeStartRequest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSFlexMatchMakeStartRequest, 471584113);
	template<> ABP_200508_API UClass* StaticClass<UELSSFlexMatchMakeStartRequest>()
	{
		return UELSSFlexMatchMakeStartRequest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSFlexMatchMakeStartRequest(Z_Construct_UClass_UELSSFlexMatchMakeStartRequest, &UELSSFlexMatchMakeStartRequest::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSFlexMatchMakeStartRequest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSFlexMatchMakeStartRequest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
