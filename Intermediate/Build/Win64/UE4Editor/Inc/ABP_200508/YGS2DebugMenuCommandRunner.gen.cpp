// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/YGS2DebugMenuCommandRunner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYGS2DebugMenuCommandRunner() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UYGS2DebugMenuCommandRunner_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UYGS2DebugMenuCommandRunner();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	YGS2CLIENT_API UEnum* Z_Construct_UEnum_yGS2Client_EYGS2ErrorType();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2RequestBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UYGS2DebugMenuCommandRunner::execGetRequestErrorString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetRequestErrorString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2DebugMenuCommandRunner::execOnYGS2Response)
	{
		P_GET_ENUM(EYGS2ErrorType,Z_Param__enYGS2ErrorType);
		P_GET_OBJECT(UYGS2RequestBase,Z_Param__pcYGS2RequestBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnYGS2Response(EYGS2ErrorType(Z_Param__enYGS2ErrorType),Z_Param__pcYGS2RequestBase);
		P_NATIVE_END;
	}
	void UYGS2DebugMenuCommandRunner::StaticRegisterNativesUYGS2DebugMenuCommandRunner()
	{
		UClass* Class = UYGS2DebugMenuCommandRunner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRequestErrorString", &UYGS2DebugMenuCommandRunner::execGetRequestErrorString },
			{ "OnYGS2Response", &UYGS2DebugMenuCommandRunner::execOnYGS2Response },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYGS2DebugMenuCommandRunner_GetRequestErrorString_Statics
	{
		struct YGS2DebugMenuCommandRunner_eventGetRequestErrorString_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2DebugMenuCommandRunner_GetRequestErrorString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2DebugMenuCommandRunner_eventGetRequestErrorString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2DebugMenuCommandRunner_GetRequestErrorString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2DebugMenuCommandRunner_GetRequestErrorString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2DebugMenuCommandRunner_GetRequestErrorString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2DebugMenuCommandRunner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2DebugMenuCommandRunner_GetRequestErrorString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2DebugMenuCommandRunner, nullptr, "GetRequestErrorString", nullptr, nullptr, sizeof(YGS2DebugMenuCommandRunner_eventGetRequestErrorString_Parms), Z_Construct_UFunction_UYGS2DebugMenuCommandRunner_GetRequestErrorString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2DebugMenuCommandRunner_GetRequestErrorString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2DebugMenuCommandRunner_GetRequestErrorString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2DebugMenuCommandRunner_GetRequestErrorString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2DebugMenuCommandRunner_GetRequestErrorString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2DebugMenuCommandRunner_GetRequestErrorString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2DebugMenuCommandRunner_OnYGS2Response_Statics
	{
		struct YGS2DebugMenuCommandRunner_eventOnYGS2Response_Parms
		{
			EYGS2ErrorType _enYGS2ErrorType;
			UYGS2RequestBase* _pcYGS2RequestBase;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enYGS2ErrorType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enYGS2ErrorType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcYGS2RequestBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYGS2DebugMenuCommandRunner_OnYGS2Response_Statics::NewProp__enYGS2ErrorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYGS2DebugMenuCommandRunner_OnYGS2Response_Statics::NewProp__enYGS2ErrorType = { "_enYGS2ErrorType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2DebugMenuCommandRunner_eventOnYGS2Response_Parms, _enYGS2ErrorType), Z_Construct_UEnum_yGS2Client_EYGS2ErrorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYGS2DebugMenuCommandRunner_OnYGS2Response_Statics::NewProp__pcYGS2RequestBase = { "_pcYGS2RequestBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2DebugMenuCommandRunner_eventOnYGS2Response_Parms, _pcYGS2RequestBase), Z_Construct_UClass_UYGS2RequestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2DebugMenuCommandRunner_OnYGS2Response_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2DebugMenuCommandRunner_OnYGS2Response_Statics::NewProp__enYGS2ErrorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2DebugMenuCommandRunner_OnYGS2Response_Statics::NewProp__enYGS2ErrorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2DebugMenuCommandRunner_OnYGS2Response_Statics::NewProp__pcYGS2RequestBase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2DebugMenuCommandRunner_OnYGS2Response_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2DebugMenuCommandRunner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2DebugMenuCommandRunner_OnYGS2Response_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2DebugMenuCommandRunner, nullptr, "OnYGS2Response", nullptr, nullptr, sizeof(YGS2DebugMenuCommandRunner_eventOnYGS2Response_Parms), Z_Construct_UFunction_UYGS2DebugMenuCommandRunner_OnYGS2Response_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2DebugMenuCommandRunner_OnYGS2Response_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2DebugMenuCommandRunner_OnYGS2Response_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2DebugMenuCommandRunner_OnYGS2Response_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2DebugMenuCommandRunner_OnYGS2Response()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2DebugMenuCommandRunner_OnYGS2Response_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYGS2DebugMenuCommandRunner_NoRegister()
	{
		return UYGS2DebugMenuCommandRunner::StaticClass();
	}
	struct Z_Construct_UClass_UYGS2DebugMenuCommandRunner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYGS2DebugMenuCommandRunner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYGS2DebugMenuCommandRunner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYGS2DebugMenuCommandRunner_GetRequestErrorString, "GetRequestErrorString" }, // 1100276572
		{ &Z_Construct_UFunction_UYGS2DebugMenuCommandRunner_OnYGS2Response, "OnYGS2Response" }, // 1891585507
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYGS2DebugMenuCommandRunner_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YGS2DebugMenuCommandRunner.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YGS2DebugMenuCommandRunner.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYGS2DebugMenuCommandRunner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYGS2DebugMenuCommandRunner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYGS2DebugMenuCommandRunner_Statics::ClassParams = {
		&UYGS2DebugMenuCommandRunner::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UYGS2DebugMenuCommandRunner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYGS2DebugMenuCommandRunner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYGS2DebugMenuCommandRunner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYGS2DebugMenuCommandRunner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYGS2DebugMenuCommandRunner, 1288274694);
	template<> ABP_200508_API UClass* StaticClass<UYGS2DebugMenuCommandRunner>()
	{
		return UYGS2DebugMenuCommandRunner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYGS2DebugMenuCommandRunner(Z_Construct_UClass_UYGS2DebugMenuCommandRunner, &UYGS2DebugMenuCommandRunner::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UYGS2DebugMenuCommandRunner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYGS2DebugMenuCommandRunner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
