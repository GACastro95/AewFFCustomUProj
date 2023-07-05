// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSFlexMatchMakeStopRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSFlexMatchMakeStopRequest() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSFlexMatchMakeStopRequest_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSFlexMatchMakeStopRequest();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWebRequestBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_eSSRequestResultType();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_FlexMatchMakeCancel_RequestEvent__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UELSSFlexMatchMakeStopRequest::execCreateAPI)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TickedID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateAPI(Z_Param_TickedID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSFlexMatchMakeStopRequest::execCreateRequestInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELSSFlexMatchMakeStopRequest**)Z_Param__Result=UELSSFlexMatchMakeStopRequest::CreateRequestInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSFlexMatchMakeStopRequest::execRequestResult)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_responseCode);
		P_GET_PROPERTY(FStrProperty,Z_Param_responseData);
		P_GET_ENUM(eSSRequestResultType,Z_Param_resultType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestResult(Z_Param_responseCode,Z_Param_responseData,eSSRequestResultType(Z_Param_resultType));
		P_NATIVE_END;
	}
	void UELSSFlexMatchMakeStopRequest::StaticRegisterNativesUELSSFlexMatchMakeStopRequest()
	{
		UClass* Class = UELSSFlexMatchMakeStopRequest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateAPI", &UELSSFlexMatchMakeStopRequest::execCreateAPI },
			{ "CreateRequestInstance", &UELSSFlexMatchMakeStopRequest::execCreateRequestInstance },
			{ "RequestResult", &UELSSFlexMatchMakeStopRequest::execRequestResult },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_CreateAPI_Statics
	{
		struct ELSSFlexMatchMakeStopRequest_eventCreateAPI_Parms
		{
			FString TickedID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickedID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TickedID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_CreateAPI_Statics::NewProp_TickedID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_CreateAPI_Statics::NewProp_TickedID = { "TickedID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSFlexMatchMakeStopRequest_eventCreateAPI_Parms, TickedID), METADATA_PARAMS(Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_CreateAPI_Statics::NewProp_TickedID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_CreateAPI_Statics::NewProp_TickedID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_CreateAPI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_CreateAPI_Statics::NewProp_TickedID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_CreateAPI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSFlexMatchMakeStopRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_CreateAPI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSFlexMatchMakeStopRequest, nullptr, "CreateAPI", nullptr, nullptr, sizeof(ELSSFlexMatchMakeStopRequest_eventCreateAPI_Parms), Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_CreateAPI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_CreateAPI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_CreateAPI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_CreateAPI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_CreateAPI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_CreateAPI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_CreateRequestInstance_Statics
	{
		struct ELSSFlexMatchMakeStopRequest_eventCreateRequestInstance_Parms
		{
			UELSSFlexMatchMakeStopRequest* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_CreateRequestInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSFlexMatchMakeStopRequest_eventCreateRequestInstance_Parms, ReturnValue), Z_Construct_UClass_UELSSFlexMatchMakeStopRequest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_CreateRequestInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_CreateRequestInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_CreateRequestInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSFlexMatchMakeStopRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_CreateRequestInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSFlexMatchMakeStopRequest, nullptr, "CreateRequestInstance", nullptr, nullptr, sizeof(ELSSFlexMatchMakeStopRequest_eventCreateRequestInstance_Parms), Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_CreateRequestInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_CreateRequestInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_CreateRequestInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_CreateRequestInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_CreateRequestInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_CreateRequestInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_RequestResult_Statics
	{
		struct ELSSFlexMatchMakeStopRequest_eventRequestResult_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_RequestResult_Statics::NewProp_responseCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_RequestResult_Statics::NewProp_responseCode = { "responseCode", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSFlexMatchMakeStopRequest_eventRequestResult_Parms, responseCode), METADATA_PARAMS(Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_RequestResult_Statics::NewProp_responseCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_RequestResult_Statics::NewProp_responseCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_RequestResult_Statics::NewProp_responseData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_RequestResult_Statics::NewProp_responseData = { "responseData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSFlexMatchMakeStopRequest_eventRequestResult_Parms, responseData), METADATA_PARAMS(Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_RequestResult_Statics::NewProp_responseData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_RequestResult_Statics::NewProp_responseData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_RequestResult_Statics::NewProp_resultType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_RequestResult_Statics::NewProp_resultType = { "resultType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSFlexMatchMakeStopRequest_eventRequestResult_Parms, resultType), Z_Construct_UEnum_ABP_200508_eSSRequestResultType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_RequestResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_RequestResult_Statics::NewProp_responseCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_RequestResult_Statics::NewProp_responseData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_RequestResult_Statics::NewProp_resultType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_RequestResult_Statics::NewProp_resultType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_RequestResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSFlexMatchMakeStopRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_RequestResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSFlexMatchMakeStopRequest, nullptr, "RequestResult", nullptr, nullptr, sizeof(ELSSFlexMatchMakeStopRequest_eventRequestResult_Parms), Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_RequestResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_RequestResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_RequestResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_RequestResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_RequestResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_RequestResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSFlexMatchMakeStopRequest_NoRegister()
	{
		return UELSSFlexMatchMakeStopRequest::StaticClass();
	}
	struct Z_Construct_UClass_UELSSFlexMatchMakeStopRequest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onFlexMatchMakeCancelRequestEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onFlexMatchMakeCancelRequestEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSFlexMatchMakeStopRequest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSWebRequestBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSFlexMatchMakeStopRequest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_CreateAPI, "CreateAPI" }, // 317222431
		{ &Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_CreateRequestInstance, "CreateRequestInstance" }, // 2389826439
		{ &Z_Construct_UFunction_UELSSFlexMatchMakeStopRequest_RequestResult, "RequestResult" }, // 3283884973
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSFlexMatchMakeStopRequest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSFlexMatchMakeStopRequest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSFlexMatchMakeStopRequest.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSFlexMatchMakeStopRequest_Statics::NewProp_onFlexMatchMakeCancelRequestEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSFlexMatchMakeStopRequest" },
		{ "ModuleRelativePath", "Public/ELSSFlexMatchMakeStopRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELSSFlexMatchMakeStopRequest_Statics::NewProp_onFlexMatchMakeCancelRequestEvent = { "onFlexMatchMakeCancelRequestEvent", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSFlexMatchMakeStopRequest, onFlexMatchMakeCancelRequestEvent), Z_Construct_UDelegateFunction_ABP_200508_FlexMatchMakeCancel_RequestEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELSSFlexMatchMakeStopRequest_Statics::NewProp_onFlexMatchMakeCancelRequestEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSFlexMatchMakeStopRequest_Statics::NewProp_onFlexMatchMakeCancelRequestEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSFlexMatchMakeStopRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSFlexMatchMakeStopRequest_Statics::NewProp_onFlexMatchMakeCancelRequestEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSFlexMatchMakeStopRequest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSFlexMatchMakeStopRequest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSFlexMatchMakeStopRequest_Statics::ClassParams = {
		&UELSSFlexMatchMakeStopRequest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSFlexMatchMakeStopRequest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSFlexMatchMakeStopRequest_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSFlexMatchMakeStopRequest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSFlexMatchMakeStopRequest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSFlexMatchMakeStopRequest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSFlexMatchMakeStopRequest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSFlexMatchMakeStopRequest, 3587579734);
	template<> ABP_200508_API UClass* StaticClass<UELSSFlexMatchMakeStopRequest>()
	{
		return UELSSFlexMatchMakeStopRequest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSFlexMatchMakeStopRequest(Z_Construct_UClass_UELSSFlexMatchMakeStopRequest, &UELSSFlexMatchMakeStopRequest::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSFlexMatchMakeStopRequest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSFlexMatchMakeStopRequest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
