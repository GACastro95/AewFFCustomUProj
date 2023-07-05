// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELPlatformErrorUtility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELPlatformErrorUtility() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELPlatformErrorUtility_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELPlatformErrorUtility();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELPlatformErrorID();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELPlatformErrorType();
// End Cross Module References
	DEFINE_FUNCTION(UELPlatformErrorUtility::execCreatePlatformErrorCode)
	{
		P_GET_ENUM(EELPlatformErrorID,Z_Param_PlatformErrorID);
		P_GET_ENUM(EELPlatformErrorType,Z_Param_PlatformErrorType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELPlatformErrorUtility::CreatePlatformErrorCode(EELPlatformErrorID(Z_Param_PlatformErrorID),EELPlatformErrorType(Z_Param_PlatformErrorType));
		P_NATIVE_END;
	}
	void UELPlatformErrorUtility::StaticRegisterNativesUELPlatformErrorUtility()
	{
		UClass* Class = UELPlatformErrorUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreatePlatformErrorCode", &UELPlatformErrorUtility::execCreatePlatformErrorCode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELPlatformErrorUtility_CreatePlatformErrorCode_Statics
	{
		struct ELPlatformErrorUtility_eventCreatePlatformErrorCode_Parms
		{
			EELPlatformErrorID PlatformErrorID;
			EELPlatformErrorType PlatformErrorType;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlatformErrorID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformErrorID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlatformErrorID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlatformErrorType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformErrorType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlatformErrorType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlatformErrorUtility_CreatePlatformErrorCode_Statics::NewProp_PlatformErrorID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlatformErrorUtility_CreatePlatformErrorCode_Statics::NewProp_PlatformErrorID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELPlatformErrorUtility_CreatePlatformErrorCode_Statics::NewProp_PlatformErrorID = { "PlatformErrorID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlatformErrorUtility_eventCreatePlatformErrorCode_Parms, PlatformErrorID), Z_Construct_UEnum_ABP_200508_EELPlatformErrorID, METADATA_PARAMS(Z_Construct_UFunction_UELPlatformErrorUtility_CreatePlatformErrorCode_Statics::NewProp_PlatformErrorID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlatformErrorUtility_CreatePlatformErrorCode_Statics::NewProp_PlatformErrorID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlatformErrorUtility_CreatePlatformErrorCode_Statics::NewProp_PlatformErrorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlatformErrorUtility_CreatePlatformErrorCode_Statics::NewProp_PlatformErrorType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELPlatformErrorUtility_CreatePlatformErrorCode_Statics::NewProp_PlatformErrorType = { "PlatformErrorType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlatformErrorUtility_eventCreatePlatformErrorCode_Parms, PlatformErrorType), Z_Construct_UEnum_ABP_200508_EELPlatformErrorType, METADATA_PARAMS(Z_Construct_UFunction_UELPlatformErrorUtility_CreatePlatformErrorCode_Statics::NewProp_PlatformErrorType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlatformErrorUtility_CreatePlatformErrorCode_Statics::NewProp_PlatformErrorType_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELPlatformErrorUtility_CreatePlatformErrorCode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlatformErrorUtility_eventCreatePlatformErrorCode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlatformErrorUtility_CreatePlatformErrorCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlatformErrorUtility_CreatePlatformErrorCode_Statics::NewProp_PlatformErrorID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlatformErrorUtility_CreatePlatformErrorCode_Statics::NewProp_PlatformErrorID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlatformErrorUtility_CreatePlatformErrorCode_Statics::NewProp_PlatformErrorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlatformErrorUtility_CreatePlatformErrorCode_Statics::NewProp_PlatformErrorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlatformErrorUtility_CreatePlatformErrorCode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlatformErrorUtility_CreatePlatformErrorCode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlatformErrorUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlatformErrorUtility_CreatePlatformErrorCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlatformErrorUtility, nullptr, "CreatePlatformErrorCode", nullptr, nullptr, sizeof(ELPlatformErrorUtility_eventCreatePlatformErrorCode_Parms), Z_Construct_UFunction_UELPlatformErrorUtility_CreatePlatformErrorCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlatformErrorUtility_CreatePlatformErrorCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlatformErrorUtility_CreatePlatformErrorCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlatformErrorUtility_CreatePlatformErrorCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlatformErrorUtility_CreatePlatformErrorCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlatformErrorUtility_CreatePlatformErrorCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELPlatformErrorUtility_NoRegister()
	{
		return UELPlatformErrorUtility::StaticClass();
	}
	struct Z_Construct_UClass_UELPlatformErrorUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELPlatformErrorUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELPlatformErrorUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELPlatformErrorUtility_CreatePlatformErrorCode, "CreatePlatformErrorCode" }, // 2508452692
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPlatformErrorUtility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELPlatformErrorUtility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELPlatformErrorUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELPlatformErrorUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELPlatformErrorUtility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELPlatformErrorUtility_Statics::ClassParams = {
		&UELPlatformErrorUtility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELPlatformErrorUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELPlatformErrorUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELPlatformErrorUtility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELPlatformErrorUtility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELPlatformErrorUtility, 4021776974);
	template<> ABP_200508_API UClass* StaticClass<UELPlatformErrorUtility>()
	{
		return UELPlatformErrorUtility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELPlatformErrorUtility(Z_Construct_UClass_UELPlatformErrorUtility, &UELPlatformErrorUtility::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELPlatformErrorUtility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELPlatformErrorUtility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
