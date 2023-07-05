// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSFlexMatchMakeStatusRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSFlexMatchMakeStatusRequest() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSFlexMatchMakeStatusRequest_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSFlexMatchMakeStatusRequest();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWebRequestBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_eSSRequestResultType();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_FlexMatchMakeStatus_RequestEvent__DelegateSignature();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_RequestData();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_ResponseData();
// End Cross Module References
	DEFINE_FUNCTION(UELSSFlexMatchMakeStatusRequest::execCreateAPI)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TicketId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateAPI(Z_Param_TicketId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSFlexMatchMakeStatusRequest::execCreateRequestInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELSSFlexMatchMakeStatusRequest**)Z_Param__Result=UELSSFlexMatchMakeStatusRequest::CreateRequestInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSFlexMatchMakeStatusRequest::execRequestResult)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_responseCode);
		P_GET_PROPERTY(FStrProperty,Z_Param_responseData);
		P_GET_ENUM(eSSRequestResultType,Z_Param_resultType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestResult(Z_Param_responseCode,Z_Param_responseData,eSSRequestResultType(Z_Param_resultType));
		P_NATIVE_END;
	}
	void UELSSFlexMatchMakeStatusRequest::StaticRegisterNativesUELSSFlexMatchMakeStatusRequest()
	{
		UClass* Class = UELSSFlexMatchMakeStatusRequest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateAPI", &UELSSFlexMatchMakeStatusRequest::execCreateAPI },
			{ "CreateRequestInstance", &UELSSFlexMatchMakeStatusRequest::execCreateRequestInstance },
			{ "RequestResult", &UELSSFlexMatchMakeStatusRequest::execRequestResult },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_CreateAPI_Statics
	{
		struct ELSSFlexMatchMakeStatusRequest_eventCreateAPI_Parms
		{
			FString TicketId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TicketId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TicketId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_CreateAPI_Statics::NewProp_TicketId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_CreateAPI_Statics::NewProp_TicketId = { "TicketId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSFlexMatchMakeStatusRequest_eventCreateAPI_Parms, TicketId), METADATA_PARAMS(Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_CreateAPI_Statics::NewProp_TicketId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_CreateAPI_Statics::NewProp_TicketId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_CreateAPI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_CreateAPI_Statics::NewProp_TicketId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_CreateAPI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSFlexMatchMakeStatusRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_CreateAPI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSFlexMatchMakeStatusRequest, nullptr, "CreateAPI", nullptr, nullptr, sizeof(ELSSFlexMatchMakeStatusRequest_eventCreateAPI_Parms), Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_CreateAPI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_CreateAPI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_CreateAPI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_CreateAPI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_CreateAPI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_CreateAPI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_CreateRequestInstance_Statics
	{
		struct ELSSFlexMatchMakeStatusRequest_eventCreateRequestInstance_Parms
		{
			UELSSFlexMatchMakeStatusRequest* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_CreateRequestInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSFlexMatchMakeStatusRequest_eventCreateRequestInstance_Parms, ReturnValue), Z_Construct_UClass_UELSSFlexMatchMakeStatusRequest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_CreateRequestInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_CreateRequestInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_CreateRequestInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSFlexMatchMakeStatusRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_CreateRequestInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSFlexMatchMakeStatusRequest, nullptr, "CreateRequestInstance", nullptr, nullptr, sizeof(ELSSFlexMatchMakeStatusRequest_eventCreateRequestInstance_Parms), Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_CreateRequestInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_CreateRequestInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_CreateRequestInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_CreateRequestInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_CreateRequestInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_CreateRequestInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_RequestResult_Statics
	{
		struct ELSSFlexMatchMakeStatusRequest_eventRequestResult_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_RequestResult_Statics::NewProp_responseCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_RequestResult_Statics::NewProp_responseCode = { "responseCode", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSFlexMatchMakeStatusRequest_eventRequestResult_Parms, responseCode), METADATA_PARAMS(Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_RequestResult_Statics::NewProp_responseCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_RequestResult_Statics::NewProp_responseCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_RequestResult_Statics::NewProp_responseData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_RequestResult_Statics::NewProp_responseData = { "responseData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSFlexMatchMakeStatusRequest_eventRequestResult_Parms, responseData), METADATA_PARAMS(Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_RequestResult_Statics::NewProp_responseData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_RequestResult_Statics::NewProp_responseData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_RequestResult_Statics::NewProp_resultType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_RequestResult_Statics::NewProp_resultType = { "resultType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSFlexMatchMakeStatusRequest_eventRequestResult_Parms, resultType), Z_Construct_UEnum_ABP_200508_eSSRequestResultType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_RequestResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_RequestResult_Statics::NewProp_responseCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_RequestResult_Statics::NewProp_responseData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_RequestResult_Statics::NewProp_resultType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_RequestResult_Statics::NewProp_resultType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_RequestResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSFlexMatchMakeStatusRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_RequestResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSFlexMatchMakeStatusRequest, nullptr, "RequestResult", nullptr, nullptr, sizeof(ELSSFlexMatchMakeStatusRequest_eventRequestResult_Parms), Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_RequestResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_RequestResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_RequestResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_RequestResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_RequestResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_RequestResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSFlexMatchMakeStatusRequest_NoRegister()
	{
		return UELSSFlexMatchMakeStatusRequest::StaticClass();
	}
	struct Z_Construct_UClass_UELSSFlexMatchMakeStatusRequest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onFlexMatchMakeStatusRequestEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onFlexMatchMakeStatusRequestEvent;
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
	UObject* (*const Z_Construct_UClass_UELSSFlexMatchMakeStatusRequest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSWebRequestBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSFlexMatchMakeStatusRequest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_CreateAPI, "CreateAPI" }, // 2206445819
		{ &Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_CreateRequestInstance, "CreateRequestInstance" }, // 1204336359
		{ &Z_Construct_UFunction_UELSSFlexMatchMakeStatusRequest_RequestResult, "RequestResult" }, // 1179338825
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSFlexMatchMakeStatusRequest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSFlexMatchMakeStatusRequest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSFlexMatchMakeStatusRequest.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSFlexMatchMakeStatusRequest_Statics::NewProp_onFlexMatchMakeStatusRequestEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSFlexMatchMakeStatusRequest" },
		{ "ModuleRelativePath", "Public/ELSSFlexMatchMakeStatusRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELSSFlexMatchMakeStatusRequest_Statics::NewProp_onFlexMatchMakeStatusRequestEvent = { "onFlexMatchMakeStatusRequestEvent", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSFlexMatchMakeStatusRequest, onFlexMatchMakeStatusRequestEvent), Z_Construct_UDelegateFunction_ABP_200508_FlexMatchMakeStatus_RequestEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELSSFlexMatchMakeStatusRequest_Statics::NewProp_onFlexMatchMakeStatusRequestEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSFlexMatchMakeStatusRequest_Statics::NewProp_onFlexMatchMakeStatusRequestEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSFlexMatchMakeStatusRequest_Statics::NewProp_ssRequestData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSFlexMatchMakeStatusRequest" },
		{ "ModuleRelativePath", "Public/ELSSFlexMatchMakeStatusRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSFlexMatchMakeStatusRequest_Statics::NewProp_ssRequestData = { "ssRequestData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSFlexMatchMakeStatusRequest, ssRequestData), Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_RequestData, METADATA_PARAMS(Z_Construct_UClass_UELSSFlexMatchMakeStatusRequest_Statics::NewProp_ssRequestData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSFlexMatchMakeStatusRequest_Statics::NewProp_ssRequestData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSFlexMatchMakeStatusRequest_Statics::NewProp_ssResponseData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSFlexMatchMakeStatusRequest" },
		{ "ModuleRelativePath", "Public/ELSSFlexMatchMakeStatusRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSFlexMatchMakeStatusRequest_Statics::NewProp_ssResponseData = { "ssResponseData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSFlexMatchMakeStatusRequest, ssResponseData), Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_ResponseData, METADATA_PARAMS(Z_Construct_UClass_UELSSFlexMatchMakeStatusRequest_Statics::NewProp_ssResponseData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSFlexMatchMakeStatusRequest_Statics::NewProp_ssResponseData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSFlexMatchMakeStatusRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSFlexMatchMakeStatusRequest_Statics::NewProp_onFlexMatchMakeStatusRequestEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSFlexMatchMakeStatusRequest_Statics::NewProp_ssRequestData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSFlexMatchMakeStatusRequest_Statics::NewProp_ssResponseData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSFlexMatchMakeStatusRequest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSFlexMatchMakeStatusRequest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSFlexMatchMakeStatusRequest_Statics::ClassParams = {
		&UELSSFlexMatchMakeStatusRequest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSFlexMatchMakeStatusRequest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSFlexMatchMakeStatusRequest_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSFlexMatchMakeStatusRequest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSFlexMatchMakeStatusRequest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSFlexMatchMakeStatusRequest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSFlexMatchMakeStatusRequest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSFlexMatchMakeStatusRequest, 1193954825);
	template<> ABP_200508_API UClass* StaticClass<UELSSFlexMatchMakeStatusRequest>()
	{
		return UELSSFlexMatchMakeStatusRequest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSFlexMatchMakeStatusRequest(Z_Construct_UClass_UELSSFlexMatchMakeStatusRequest, &UELSSFlexMatchMakeStatusRequest::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSFlexMatchMakeStatusRequest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSFlexMatchMakeStatusRequest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
