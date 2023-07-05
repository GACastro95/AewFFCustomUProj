// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEOSLobbyPacketRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEOSLobbyPacketRequest() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSLobbyPacketRequest_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSLobbyPacketRequest();
	ABP_200508_API UClass* Z_Construct_UClass_ULobbyPacketBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELEOSLobbyPacketRequestType();
// End Cross Module References
	DEFINE_FUNCTION(UELEOSLobbyPacketRequest::execGetRequestData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetRequestData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSLobbyPacketRequest::execGetRequestType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EELEOSLobbyPacketRequestType*)Z_Param__Result=P_THIS->GetRequestType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSLobbyPacketRequest::execSetData)
	{
		P_GET_ENUM(EELEOSLobbyPacketRequestType,Z_Param_Type);
		P_GET_OBJECT(UObject,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData(EELEOSLobbyPacketRequestType(Z_Param_Type),Z_Param_Data);
		P_NATIVE_END;
	}
	void UELEOSLobbyPacketRequest::StaticRegisterNativesUELEOSLobbyPacketRequest()
	{
		UClass* Class = UELEOSLobbyPacketRequest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRequestData", &UELEOSLobbyPacketRequest::execGetRequestData },
			{ "GetRequestType", &UELEOSLobbyPacketRequest::execGetRequestType },
			{ "SetData", &UELEOSLobbyPacketRequest::execSetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELEOSLobbyPacketRequest_GetRequestData_Statics
	{
		struct ELEOSLobbyPacketRequest_eventGetRequestData_Parms
		{
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSLobbyPacketRequest_GetRequestData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSLobbyPacketRequest_eventGetRequestData_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSLobbyPacketRequest_GetRequestData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSLobbyPacketRequest_GetRequestData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSLobbyPacketRequest_GetRequestData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSLobbyPacketRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSLobbyPacketRequest_GetRequestData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSLobbyPacketRequest, nullptr, "GetRequestData", nullptr, nullptr, sizeof(ELEOSLobbyPacketRequest_eventGetRequestData_Parms), Z_Construct_UFunction_UELEOSLobbyPacketRequest_GetRequestData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSLobbyPacketRequest_GetRequestData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSLobbyPacketRequest_GetRequestData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSLobbyPacketRequest_GetRequestData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSLobbyPacketRequest_GetRequestData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSLobbyPacketRequest_GetRequestData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSLobbyPacketRequest_GetRequestType_Statics
	{
		struct ELEOSLobbyPacketRequest_eventGetRequestType_Parms
		{
			EELEOSLobbyPacketRequestType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEOSLobbyPacketRequest_GetRequestType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEOSLobbyPacketRequest_GetRequestType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSLobbyPacketRequest_eventGetRequestType_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_EELEOSLobbyPacketRequestType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSLobbyPacketRequest_GetRequestType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSLobbyPacketRequest_GetRequestType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSLobbyPacketRequest_GetRequestType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSLobbyPacketRequest_GetRequestType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSLobbyPacketRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSLobbyPacketRequest_GetRequestType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSLobbyPacketRequest, nullptr, "GetRequestType", nullptr, nullptr, sizeof(ELEOSLobbyPacketRequest_eventGetRequestType_Parms), Z_Construct_UFunction_UELEOSLobbyPacketRequest_GetRequestType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSLobbyPacketRequest_GetRequestType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSLobbyPacketRequest_GetRequestType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSLobbyPacketRequest_GetRequestType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSLobbyPacketRequest_GetRequestType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSLobbyPacketRequest_GetRequestType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSLobbyPacketRequest_SetData_Statics
	{
		struct ELEOSLobbyPacketRequest_eventSetData_Parms
		{
			EELEOSLobbyPacketRequestType Type;
			UObject* Data;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEOSLobbyPacketRequest_SetData_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEOSLobbyPacketRequest_SetData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSLobbyPacketRequest_eventSetData_Parms, Type), Z_Construct_UEnum_ABP_200508_EELEOSLobbyPacketRequestType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSLobbyPacketRequest_SetData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSLobbyPacketRequest_eventSetData_Parms, Data), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSLobbyPacketRequest_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSLobbyPacketRequest_SetData_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSLobbyPacketRequest_SetData_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSLobbyPacketRequest_SetData_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSLobbyPacketRequest_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSLobbyPacketRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSLobbyPacketRequest_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSLobbyPacketRequest, nullptr, "SetData", nullptr, nullptr, sizeof(ELEOSLobbyPacketRequest_eventSetData_Parms), Z_Construct_UFunction_UELEOSLobbyPacketRequest_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSLobbyPacketRequest_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSLobbyPacketRequest_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSLobbyPacketRequest_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSLobbyPacketRequest_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSLobbyPacketRequest_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELEOSLobbyPacketRequest_NoRegister()
	{
		return UELEOSLobbyPacketRequest::StaticClass();
	}
	struct Z_Construct_UClass_UELEOSLobbyPacketRequest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RequestType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RequestType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELEOSLobbyPacketRequest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULobbyPacketBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELEOSLobbyPacketRequest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELEOSLobbyPacketRequest_GetRequestData, "GetRequestData" }, // 636716538
		{ &Z_Construct_UFunction_UELEOSLobbyPacketRequest_GetRequestType, "GetRequestType" }, // 416606358
		{ &Z_Construct_UFunction_UELEOSLobbyPacketRequest_SetData, "SetData" }, // 2683242067
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSLobbyPacketRequest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELEOSLobbyPacketRequest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELEOSLobbyPacketRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELEOSLobbyPacketRequest_Statics::NewProp_RequestType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSLobbyPacketRequest_Statics::NewProp_RequestType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSLobbyPacketRequest" },
		{ "ModuleRelativePath", "Public/ELEOSLobbyPacketRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELEOSLobbyPacketRequest_Statics::NewProp_RequestType = { "RequestType", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSLobbyPacketRequest, RequestType), Z_Construct_UEnum_ABP_200508_EELEOSLobbyPacketRequestType, METADATA_PARAMS(Z_Construct_UClass_UELEOSLobbyPacketRequest_Statics::NewProp_RequestType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSLobbyPacketRequest_Statics::NewProp_RequestType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELEOSLobbyPacketRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSLobbyPacketRequest_Statics::NewProp_RequestType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSLobbyPacketRequest_Statics::NewProp_RequestType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELEOSLobbyPacketRequest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELEOSLobbyPacketRequest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELEOSLobbyPacketRequest_Statics::ClassParams = {
		&UELEOSLobbyPacketRequest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELEOSLobbyPacketRequest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSLobbyPacketRequest_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELEOSLobbyPacketRequest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSLobbyPacketRequest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELEOSLobbyPacketRequest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELEOSLobbyPacketRequest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELEOSLobbyPacketRequest, 3886469382);
	template<> ABP_200508_API UClass* StaticClass<UELEOSLobbyPacketRequest>()
	{
		return UELEOSLobbyPacketRequest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELEOSLobbyPacketRequest(Z_Construct_UClass_UELEOSLobbyPacketRequest, &UELEOSLobbyPacketRequest::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELEOSLobbyPacketRequest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELEOSLobbyPacketRequest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
