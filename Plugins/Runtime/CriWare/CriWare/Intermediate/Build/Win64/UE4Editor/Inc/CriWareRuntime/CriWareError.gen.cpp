// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/CriWareError.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriWareError() {}
// Cross Module References
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriWareError();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCriWareErrorInfo();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriWareError_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics
	{
		struct CriWareError_eventOnCriWareError_Parms
		{
			FCriWareErrorInfo ErrorInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ErrorInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics::NewProp_ErrorInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics::NewProp_ErrorInfo = { "ErrorInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CriWareError_eventOnCriWareError_Parms, ErrorInfo), Z_Construct_UScriptStruct_FCriWareErrorInfo, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics::NewProp_ErrorInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics::NewProp_ErrorInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics::NewProp_ErrorInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CriWareError.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriWareError, nullptr, "OnCriWareError__DelegateSignature", nullptr, nullptr, sizeof(CriWareError_eventOnCriWareError_Parms), Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UCriWareError::execGetCriWareError)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCriWareError**)Z_Param__Result=UCriWareError::GetCriWareError();
		P_NATIVE_END;
	}
	void UCriWareError::StaticRegisterNativesUCriWareError()
	{
		UClass* Class = UCriWareError::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCriWareError", &UCriWareError::execGetCriWareError },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCriWareError_GetCriWareError_Statics
	{
		struct CriWareError_eventGetCriWareError_Parms
		{
			UCriWareError* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCriWareError_GetCriWareError_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CriWareError_eventGetCriWareError_Parms, ReturnValue), Z_Construct_UClass_UCriWareError_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCriWareError_GetCriWareError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriWareError_GetCriWareError_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCriWareError_GetCriWareError_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CriWareError.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCriWareError_GetCriWareError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriWareError, nullptr, "GetCriWareError", nullptr, nullptr, sizeof(CriWareError_eventGetCriWareError_Parms), Z_Construct_UFunction_UCriWareError_GetCriWareError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriWareError_GetCriWareError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCriWareError_GetCriWareError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriWareError_GetCriWareError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCriWareError_GetCriWareError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCriWareError_GetCriWareError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCriWareError_NoRegister()
	{
		return UCriWareError::StaticClass();
	}
	struct Z_Construct_UClass_UCriWareError_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCriWareError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCriWareError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCriWareError_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCriWareError_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCriWareError_GetCriWareError, "GetCriWareError" }, // 435027251
		{ &Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature, "OnCriWareError__DelegateSignature" }, // 2416640348
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareError_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CriWareError.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CriWareError.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareError_Statics::NewProp_OnCriWareError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWareError" },
		{ "ModuleRelativePath", "Public/CriWareError.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCriWareError_Statics::NewProp_OnCriWareError = { "OnCriWareError", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWareError, OnCriWareError), Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCriWareError_Statics::NewProp_OnCriWareError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareError_Statics::NewProp_OnCriWareError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCriWareError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareError_Statics::NewProp_OnCriWareError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCriWareError_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCriWareError>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCriWareError_Statics::ClassParams = {
		&UCriWareError::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCriWareError_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareError_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCriWareError_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareError_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCriWareError()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCriWareError_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCriWareError, 1650787554);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UCriWareError>()
	{
		return UCriWareError::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCriWareError(Z_Construct_UClass_UCriWareError, &UCriWareError::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UCriWareError"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCriWareError);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
