// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/YGS2Req_Analytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYGS2Req_Analytics() {}
// Cross Module References
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2Req_Analytics_NoRegister();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2Req_Analytics();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2RequestBase();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FYGS2AnalyticsData();
// End Cross Module References
	DEFINE_FUNCTION(UYGS2Req_Analytics::execGetResultID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetResultID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_Analytics::execSetAnalyticsData)
	{
		P_GET_STRUCT_REF(FYGS2AnalyticsData,Z_Param_Out__stAnalyticsData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAnalyticsData(Z_Param_Out__stAnalyticsData);
		P_NATIVE_END;
	}
	void UYGS2Req_Analytics::StaticRegisterNativesUYGS2Req_Analytics()
	{
		UClass* Class = UYGS2Req_Analytics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetResultID", &UYGS2Req_Analytics::execGetResultID },
			{ "SetAnalyticsData", &UYGS2Req_Analytics::execSetAnalyticsData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYGS2Req_Analytics_GetResultID_Statics
	{
		struct YGS2Req_Analytics_eventGetResultID_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_Analytics_GetResultID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_Analytics_eventGetResultID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_Analytics_GetResultID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_Analytics_GetResultID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_Analytics_GetResultID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_Analytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_Analytics_GetResultID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_Analytics, nullptr, "GetResultID", nullptr, nullptr, sizeof(YGS2Req_Analytics_eventGetResultID_Parms), Z_Construct_UFunction_UYGS2Req_Analytics_GetResultID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_Analytics_GetResultID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_Analytics_GetResultID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_Analytics_GetResultID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_Analytics_GetResultID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_Analytics_GetResultID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_Analytics_SetAnalyticsData_Statics
	{
		struct YGS2Req_Analytics_eventSetAnalyticsData_Parms
		{
			FYGS2AnalyticsData _stAnalyticsData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stAnalyticsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stAnalyticsData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_Analytics_SetAnalyticsData_Statics::NewProp__stAnalyticsData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYGS2Req_Analytics_SetAnalyticsData_Statics::NewProp__stAnalyticsData = { "_stAnalyticsData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_Analytics_eventSetAnalyticsData_Parms, _stAnalyticsData), Z_Construct_UScriptStruct_FYGS2AnalyticsData, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_Analytics_SetAnalyticsData_Statics::NewProp__stAnalyticsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_Analytics_SetAnalyticsData_Statics::NewProp__stAnalyticsData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_Analytics_SetAnalyticsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_Analytics_SetAnalyticsData_Statics::NewProp__stAnalyticsData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_Analytics_SetAnalyticsData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_Analytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_Analytics_SetAnalyticsData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_Analytics, nullptr, "SetAnalyticsData", nullptr, nullptr, sizeof(YGS2Req_Analytics_eventSetAnalyticsData_Parms), Z_Construct_UFunction_UYGS2Req_Analytics_SetAnalyticsData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_Analytics_SetAnalyticsData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_Analytics_SetAnalyticsData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_Analytics_SetAnalyticsData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_Analytics_SetAnalyticsData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_Analytics_SetAnalyticsData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYGS2Req_Analytics_NoRegister()
	{
		return UYGS2Req_Analytics::StaticClass();
	}
	struct Z_Construct_UClass_UYGS2Req_Analytics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYGS2Req_Analytics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UYGS2RequestBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yGS2Client,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYGS2Req_Analytics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYGS2Req_Analytics_GetResultID, "GetResultID" }, // 3204820382
		{ &Z_Construct_UFunction_UYGS2Req_Analytics_SetAnalyticsData, "SetAnalyticsData" }, // 3039779359
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYGS2Req_Analytics_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YGS2Req_Analytics.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YGS2Req_Analytics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYGS2Req_Analytics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYGS2Req_Analytics>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYGS2Req_Analytics_Statics::ClassParams = {
		&UYGS2Req_Analytics::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UYGS2Req_Analytics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYGS2Req_Analytics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYGS2Req_Analytics()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYGS2Req_Analytics_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYGS2Req_Analytics, 1570967653);
	template<> YGS2CLIENT_API UClass* StaticClass<UYGS2Req_Analytics>()
	{
		return UYGS2Req_Analytics::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYGS2Req_Analytics(Z_Construct_UClass_UYGS2Req_Analytics, &UYGS2Req_Analytics::StaticClass, TEXT("/Script/yGS2Client"), TEXT("UYGS2Req_Analytics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYGS2Req_Analytics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
