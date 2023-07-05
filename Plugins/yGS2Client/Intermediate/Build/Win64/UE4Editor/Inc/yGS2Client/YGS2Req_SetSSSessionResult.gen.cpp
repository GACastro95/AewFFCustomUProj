// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/YGS2Req_SetSSSessionResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYGS2Req_SetSSSessionResult() {}
// Cross Module References
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2Req_SetSSSessionResult_NoRegister();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2Req_SetSSSessionResult();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2RequestBase();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
// End Cross Module References
	DEFINE_FUNCTION(UYGS2Req_SetSSSessionResult::execSetSessionResult)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_sessionResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSessionResult(Z_Param_sessionResult);
		P_NATIVE_END;
	}
	void UYGS2Req_SetSSSessionResult::StaticRegisterNativesUYGS2Req_SetSSSessionResult()
	{
		UClass* Class = UYGS2Req_SetSSSessionResult::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSessionResult", &UYGS2Req_SetSSSessionResult::execSetSessionResult },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYGS2Req_SetSSSessionResult_SetSessionResult_Statics
	{
		struct YGS2Req_SetSSSessionResult_eventSetSessionResult_Parms
		{
			FString sessionResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sessionResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sessionResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_SetSSSessionResult_SetSessionResult_Statics::NewProp_sessionResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_SetSSSessionResult_SetSessionResult_Statics::NewProp_sessionResult = { "sessionResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_SetSSSessionResult_eventSetSessionResult_Parms, sessionResult), METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_SetSSSessionResult_SetSessionResult_Statics::NewProp_sessionResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_SetSSSessionResult_SetSessionResult_Statics::NewProp_sessionResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_SetSSSessionResult_SetSessionResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_SetSSSessionResult_SetSessionResult_Statics::NewProp_sessionResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_SetSSSessionResult_SetSessionResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_SetSSSessionResult.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_SetSSSessionResult_SetSessionResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_SetSSSessionResult, nullptr, "SetSessionResult", nullptr, nullptr, sizeof(YGS2Req_SetSSSessionResult_eventSetSessionResult_Parms), Z_Construct_UFunction_UYGS2Req_SetSSSessionResult_SetSessionResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_SetSSSessionResult_SetSessionResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_SetSSSessionResult_SetSessionResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_SetSSSessionResult_SetSessionResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_SetSSSessionResult_SetSessionResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_SetSSSessionResult_SetSessionResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYGS2Req_SetSSSessionResult_NoRegister()
	{
		return UYGS2Req_SetSSSessionResult::StaticClass();
	}
	struct Z_Construct_UClass_UYGS2Req_SetSSSessionResult_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYGS2Req_SetSSSessionResult_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UYGS2RequestBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yGS2Client,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYGS2Req_SetSSSessionResult_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYGS2Req_SetSSSessionResult_SetSessionResult, "SetSessionResult" }, // 3234556048
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYGS2Req_SetSSSessionResult_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YGS2Req_SetSSSessionResult.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YGS2Req_SetSSSessionResult.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYGS2Req_SetSSSessionResult_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYGS2Req_SetSSSessionResult>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYGS2Req_SetSSSessionResult_Statics::ClassParams = {
		&UYGS2Req_SetSSSessionResult::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UYGS2Req_SetSSSessionResult_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYGS2Req_SetSSSessionResult_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYGS2Req_SetSSSessionResult()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYGS2Req_SetSSSessionResult_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYGS2Req_SetSSSessionResult, 1537422972);
	template<> YGS2CLIENT_API UClass* StaticClass<UYGS2Req_SetSSSessionResult>()
	{
		return UYGS2Req_SetSSSessionResult::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYGS2Req_SetSSSessionResult(Z_Construct_UClass_UYGS2Req_SetSSSessionResult, &UYGS2Req_SetSSSessionResult::StaticClass, TEXT("/Script/yGS2Client"), TEXT("UYGS2Req_SetSSSessionResult"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYGS2Req_SetSSSessionResult);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
