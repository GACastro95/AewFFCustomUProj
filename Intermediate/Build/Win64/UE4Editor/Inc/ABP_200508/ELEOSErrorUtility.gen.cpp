// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEOSErrorUtility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEOSErrorUtility() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSErrorUtility_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSErrorUtility();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELEOSLoginErrorType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELEOSApiType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELEOSSessionErrorType();
// End Cross Module References
	DEFINE_FUNCTION(UELEOSErrorUtility::execCreateEOSLoginErrorCode)
	{
		P_GET_ENUM(EELEOSLoginErrorType,Z_Param_errType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELEOSErrorUtility::CreateEOSLoginErrorCode(EELEOSLoginErrorType(Z_Param_errType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSErrorUtility::execCreateEOSOnlineErrorCode)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_errID);
		P_GET_ENUM(EELEOSApiType,Z_Param_apiType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELEOSErrorUtility::CreateEOSOnlineErrorCode(Z_Param_errID,EELEOSApiType(Z_Param_apiType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSErrorUtility::execCreateEOSSessionErrorCode)
	{
		P_GET_ENUM(EELEOSSessionErrorType,Z_Param_errType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELEOSErrorUtility::CreateEOSSessionErrorCode(EELEOSSessionErrorType(Z_Param_errType));
		P_NATIVE_END;
	}
	void UELEOSErrorUtility::StaticRegisterNativesUELEOSErrorUtility()
	{
		UClass* Class = UELEOSErrorUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateEOSLoginErrorCode", &UELEOSErrorUtility::execCreateEOSLoginErrorCode },
			{ "CreateEOSOnlineErrorCode", &UELEOSErrorUtility::execCreateEOSOnlineErrorCode },
			{ "CreateEOSSessionErrorCode", &UELEOSErrorUtility::execCreateEOSSessionErrorCode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSLoginErrorCode_Statics
	{
		struct ELEOSErrorUtility_eventCreateEOSLoginErrorCode_Parms
		{
			EELEOSLoginErrorType errType;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_errType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_errType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSLoginErrorCode_Statics::NewProp_errType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSLoginErrorCode_Statics::NewProp_errType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSLoginErrorCode_Statics::NewProp_errType = { "errType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSErrorUtility_eventCreateEOSLoginErrorCode_Parms, errType), Z_Construct_UEnum_ABP_200508_EELEOSLoginErrorType, METADATA_PARAMS(Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSLoginErrorCode_Statics::NewProp_errType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSLoginErrorCode_Statics::NewProp_errType_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSLoginErrorCode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSErrorUtility_eventCreateEOSLoginErrorCode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSLoginErrorCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSLoginErrorCode_Statics::NewProp_errType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSLoginErrorCode_Statics::NewProp_errType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSLoginErrorCode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSLoginErrorCode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSErrorUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSLoginErrorCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSErrorUtility, nullptr, "CreateEOSLoginErrorCode", nullptr, nullptr, sizeof(ELEOSErrorUtility_eventCreateEOSLoginErrorCode_Parms), Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSLoginErrorCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSLoginErrorCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSLoginErrorCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSLoginErrorCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSLoginErrorCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSLoginErrorCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSOnlineErrorCode_Statics
	{
		struct ELEOSErrorUtility_eventCreateEOSOnlineErrorCode_Parms
		{
			int32 errID;
			EELEOSApiType apiType;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_errID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_apiType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_apiType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_apiType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSOnlineErrorCode_Statics::NewProp_errID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSOnlineErrorCode_Statics::NewProp_errID = { "errID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSErrorUtility_eventCreateEOSOnlineErrorCode_Parms, errID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSOnlineErrorCode_Statics::NewProp_errID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSOnlineErrorCode_Statics::NewProp_errID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSOnlineErrorCode_Statics::NewProp_apiType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSOnlineErrorCode_Statics::NewProp_apiType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSOnlineErrorCode_Statics::NewProp_apiType = { "apiType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSErrorUtility_eventCreateEOSOnlineErrorCode_Parms, apiType), Z_Construct_UEnum_ABP_200508_EELEOSApiType, METADATA_PARAMS(Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSOnlineErrorCode_Statics::NewProp_apiType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSOnlineErrorCode_Statics::NewProp_apiType_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSOnlineErrorCode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSErrorUtility_eventCreateEOSOnlineErrorCode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSOnlineErrorCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSOnlineErrorCode_Statics::NewProp_errID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSOnlineErrorCode_Statics::NewProp_apiType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSOnlineErrorCode_Statics::NewProp_apiType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSOnlineErrorCode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSOnlineErrorCode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSErrorUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSOnlineErrorCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSErrorUtility, nullptr, "CreateEOSOnlineErrorCode", nullptr, nullptr, sizeof(ELEOSErrorUtility_eventCreateEOSOnlineErrorCode_Parms), Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSOnlineErrorCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSOnlineErrorCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSOnlineErrorCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSOnlineErrorCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSOnlineErrorCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSOnlineErrorCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSSessionErrorCode_Statics
	{
		struct ELEOSErrorUtility_eventCreateEOSSessionErrorCode_Parms
		{
			EELEOSSessionErrorType errType;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_errType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_errType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSSessionErrorCode_Statics::NewProp_errType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSSessionErrorCode_Statics::NewProp_errType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSSessionErrorCode_Statics::NewProp_errType = { "errType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSErrorUtility_eventCreateEOSSessionErrorCode_Parms, errType), Z_Construct_UEnum_ABP_200508_EELEOSSessionErrorType, METADATA_PARAMS(Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSSessionErrorCode_Statics::NewProp_errType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSSessionErrorCode_Statics::NewProp_errType_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSSessionErrorCode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSErrorUtility_eventCreateEOSSessionErrorCode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSSessionErrorCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSSessionErrorCode_Statics::NewProp_errType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSSessionErrorCode_Statics::NewProp_errType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSSessionErrorCode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSSessionErrorCode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSErrorUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSSessionErrorCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSErrorUtility, nullptr, "CreateEOSSessionErrorCode", nullptr, nullptr, sizeof(ELEOSErrorUtility_eventCreateEOSSessionErrorCode_Parms), Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSSessionErrorCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSSessionErrorCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSSessionErrorCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSSessionErrorCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSSessionErrorCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSSessionErrorCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELEOSErrorUtility_NoRegister()
	{
		return UELEOSErrorUtility::StaticClass();
	}
	struct Z_Construct_UClass_UELEOSErrorUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELEOSErrorUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELEOSErrorUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSLoginErrorCode, "CreateEOSLoginErrorCode" }, // 1793903500
		{ &Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSOnlineErrorCode, "CreateEOSOnlineErrorCode" }, // 66584970
		{ &Z_Construct_UFunction_UELEOSErrorUtility_CreateEOSSessionErrorCode, "CreateEOSSessionErrorCode" }, // 1651634408
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSErrorUtility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELEOSErrorUtility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELEOSErrorUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELEOSErrorUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELEOSErrorUtility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELEOSErrorUtility_Statics::ClassParams = {
		&UELEOSErrorUtility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELEOSErrorUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSErrorUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELEOSErrorUtility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELEOSErrorUtility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELEOSErrorUtility, 2552058594);
	template<> ABP_200508_API UClass* StaticClass<UELEOSErrorUtility>()
	{
		return UELEOSErrorUtility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELEOSErrorUtility(Z_Construct_UClass_UELEOSErrorUtility, &UELEOSErrorUtility::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELEOSErrorUtility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELEOSErrorUtility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
