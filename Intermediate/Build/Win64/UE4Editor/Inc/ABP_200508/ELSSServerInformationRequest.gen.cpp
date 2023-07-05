// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSServerInformationRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSServerInformationRequest() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSServerInformationRequest_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSServerInformationRequest();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWebRequestBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_eSSRequestResultType();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_ServerInformation_RequestEvent__DelegateSignature();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSServerInformation_ResponseData();
// End Cross Module References
	DEFINE_FUNCTION(UELSSServerInformationRequest::execCreateRequestInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELSSServerInformationRequest**)Z_Param__Result=UELSSServerInformationRequest::CreateRequestInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSServerInformationRequest::execRequestResult)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_responseCode);
		P_GET_PROPERTY(FStrProperty,Z_Param_responseData);
		P_GET_ENUM(eSSRequestResultType,Z_Param_resultType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestResult(Z_Param_responseCode,Z_Param_responseData,eSSRequestResultType(Z_Param_resultType));
		P_NATIVE_END;
	}
	void UELSSServerInformationRequest::StaticRegisterNativesUELSSServerInformationRequest()
	{
		UClass* Class = UELSSServerInformationRequest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateRequestInstance", &UELSSServerInformationRequest::execCreateRequestInstance },
			{ "RequestResult", &UELSSServerInformationRequest::execRequestResult },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSServerInformationRequest_CreateRequestInstance_Statics
	{
		struct ELSSServerInformationRequest_eventCreateRequestInstance_Parms
		{
			UELSSServerInformationRequest* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSServerInformationRequest_CreateRequestInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSServerInformationRequest_eventCreateRequestInstance_Parms, ReturnValue), Z_Construct_UClass_UELSSServerInformationRequest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSServerInformationRequest_CreateRequestInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSServerInformationRequest_CreateRequestInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSServerInformationRequest_CreateRequestInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSServerInformationRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSServerInformationRequest_CreateRequestInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSServerInformationRequest, nullptr, "CreateRequestInstance", nullptr, nullptr, sizeof(ELSSServerInformationRequest_eventCreateRequestInstance_Parms), Z_Construct_UFunction_UELSSServerInformationRequest_CreateRequestInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSServerInformationRequest_CreateRequestInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSServerInformationRequest_CreateRequestInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSServerInformationRequest_CreateRequestInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSServerInformationRequest_CreateRequestInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSServerInformationRequest_CreateRequestInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSServerInformationRequest_RequestResult_Statics
	{
		struct ELSSServerInformationRequest_eventRequestResult_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSServerInformationRequest_RequestResult_Statics::NewProp_responseCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSServerInformationRequest_RequestResult_Statics::NewProp_responseCode = { "responseCode", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSServerInformationRequest_eventRequestResult_Parms, responseCode), METADATA_PARAMS(Z_Construct_UFunction_UELSSServerInformationRequest_RequestResult_Statics::NewProp_responseCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSServerInformationRequest_RequestResult_Statics::NewProp_responseCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSServerInformationRequest_RequestResult_Statics::NewProp_responseData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSServerInformationRequest_RequestResult_Statics::NewProp_responseData = { "responseData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSServerInformationRequest_eventRequestResult_Parms, responseData), METADATA_PARAMS(Z_Construct_UFunction_UELSSServerInformationRequest_RequestResult_Statics::NewProp_responseData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSServerInformationRequest_RequestResult_Statics::NewProp_responseData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSServerInformationRequest_RequestResult_Statics::NewProp_resultType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSServerInformationRequest_RequestResult_Statics::NewProp_resultType = { "resultType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSServerInformationRequest_eventRequestResult_Parms, resultType), Z_Construct_UEnum_ABP_200508_eSSRequestResultType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSServerInformationRequest_RequestResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSServerInformationRequest_RequestResult_Statics::NewProp_responseCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSServerInformationRequest_RequestResult_Statics::NewProp_responseData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSServerInformationRequest_RequestResult_Statics::NewProp_resultType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSServerInformationRequest_RequestResult_Statics::NewProp_resultType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSServerInformationRequest_RequestResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSServerInformationRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSServerInformationRequest_RequestResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSServerInformationRequest, nullptr, "RequestResult", nullptr, nullptr, sizeof(ELSSServerInformationRequest_eventRequestResult_Parms), Z_Construct_UFunction_UELSSServerInformationRequest_RequestResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSServerInformationRequest_RequestResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSServerInformationRequest_RequestResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSServerInformationRequest_RequestResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSServerInformationRequest_RequestResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSServerInformationRequest_RequestResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSServerInformationRequest_NoRegister()
	{
		return UELSSServerInformationRequest::StaticClass();
	}
	struct Z_Construct_UClass_UELSSServerInformationRequest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onServerInformationRequestData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onServerInformationRequestData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ssResponseData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ssResponseData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSServerInformationRequest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSWebRequestBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSServerInformationRequest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSServerInformationRequest_CreateRequestInstance, "CreateRequestInstance" }, // 3965084712
		{ &Z_Construct_UFunction_UELSSServerInformationRequest_RequestResult, "RequestResult" }, // 1622670421
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSServerInformationRequest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSServerInformationRequest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSServerInformationRequest.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSServerInformationRequest_Statics::NewProp_onServerInformationRequestData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSServerInformationRequest" },
		{ "ModuleRelativePath", "Public/ELSSServerInformationRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELSSServerInformationRequest_Statics::NewProp_onServerInformationRequestData = { "onServerInformationRequestData", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSServerInformationRequest, onServerInformationRequestData), Z_Construct_UDelegateFunction_ABP_200508_ServerInformation_RequestEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELSSServerInformationRequest_Statics::NewProp_onServerInformationRequestData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSServerInformationRequest_Statics::NewProp_onServerInformationRequestData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSServerInformationRequest_Statics::NewProp_ssResponseData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSServerInformationRequest" },
		{ "ModuleRelativePath", "Public/ELSSServerInformationRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSServerInformationRequest_Statics::NewProp_ssResponseData = { "ssResponseData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSServerInformationRequest, ssResponseData), Z_Construct_UScriptStruct_FELSSServerInformation_ResponseData, METADATA_PARAMS(Z_Construct_UClass_UELSSServerInformationRequest_Statics::NewProp_ssResponseData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSServerInformationRequest_Statics::NewProp_ssResponseData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSServerInformationRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSServerInformationRequest_Statics::NewProp_onServerInformationRequestData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSServerInformationRequest_Statics::NewProp_ssResponseData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSServerInformationRequest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSServerInformationRequest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSServerInformationRequest_Statics::ClassParams = {
		&UELSSServerInformationRequest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSServerInformationRequest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSServerInformationRequest_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSServerInformationRequest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSServerInformationRequest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSServerInformationRequest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSServerInformationRequest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSServerInformationRequest, 807100974);
	template<> ABP_200508_API UClass* StaticClass<UELSSServerInformationRequest>()
	{
		return UELSSServerInformationRequest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSServerInformationRequest(Z_Construct_UClass_UELSSServerInformationRequest, &UELSSServerInformationRequest::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSServerInformationRequest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSServerInformationRequest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
