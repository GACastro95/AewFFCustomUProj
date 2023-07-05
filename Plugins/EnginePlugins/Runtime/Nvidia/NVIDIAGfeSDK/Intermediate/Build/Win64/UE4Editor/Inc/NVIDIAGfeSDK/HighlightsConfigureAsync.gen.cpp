// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NVIDIAGfeSDK/Public/HighlightsConfigureAsync.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHighlightsConfigureAsync() {}
// Cross Module References
	NVIDIAGFESDK_API UClass* Z_Construct_UClass_UHighlightsConfigureAsync_NoRegister();
	NVIDIAGFESDK_API UClass* Z_Construct_UClass_UHighlightsConfigureAsync();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_NVIDIAGfeSDK();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	NVIDIAGFESDK_API UScriptStruct* Z_Construct_UScriptStruct_FGfeSDKHighlightConfigParams();
	NVIDIAGFESDK_API UFunction* Z_Construct_UDelegateFunction_NVIDIAGfeSDK_OnHighlightsOperationResultCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UHighlightsConfigureAsync::execHighlightsConfigure)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FGfeSDKHighlightConfigParams,Z_Param_Out_ConfigParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHighlightsConfigureAsync**)Z_Param__Result=UHighlightsConfigureAsync::HighlightsConfigure(Z_Param_WorldContextObject,Z_Param_Out_ConfigParams);
		P_NATIVE_END;
	}
	void UHighlightsConfigureAsync::StaticRegisterNativesUHighlightsConfigureAsync()
	{
		UClass* Class = UHighlightsConfigureAsync::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HighlightsConfigure", &UHighlightsConfigureAsync::execHighlightsConfigure },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHighlightsConfigureAsync_HighlightsConfigure_Statics
	{
		struct HighlightsConfigureAsync_eventHighlightsConfigure_Parms
		{
			UObject* WorldContextObject;
			FGfeSDKHighlightConfigParams ConfigParams;
			UHighlightsConfigureAsync* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfigParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConfigParams;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightsConfigureAsync_HighlightsConfigure_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HighlightsConfigureAsync_eventHighlightsConfigure_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHighlightsConfigureAsync_HighlightsConfigure_Statics::NewProp_ConfigParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHighlightsConfigureAsync_HighlightsConfigure_Statics::NewProp_ConfigParams = { "ConfigParams", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HighlightsConfigureAsync_eventHighlightsConfigure_Parms, ConfigParams), Z_Construct_UScriptStruct_FGfeSDKHighlightConfigParams, METADATA_PARAMS(Z_Construct_UFunction_UHighlightsConfigureAsync_HighlightsConfigure_Statics::NewProp_ConfigParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightsConfigureAsync_HighlightsConfigure_Statics::NewProp_ConfigParams_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightsConfigureAsync_HighlightsConfigure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HighlightsConfigureAsync_eventHighlightsConfigure_Parms, ReturnValue), Z_Construct_UClass_UHighlightsConfigureAsync_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightsConfigureAsync_HighlightsConfigure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightsConfigureAsync_HighlightsConfigure_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightsConfigureAsync_HighlightsConfigure_Statics::NewProp_ConfigParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightsConfigureAsync_HighlightsConfigure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHighlightsConfigureAsync_HighlightsConfigure_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HighlightsConfigureAsync.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightsConfigureAsync_HighlightsConfigure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHighlightsConfigureAsync, nullptr, "HighlightsConfigure", nullptr, nullptr, sizeof(HighlightsConfigureAsync_eventHighlightsConfigure_Parms), Z_Construct_UFunction_UHighlightsConfigureAsync_HighlightsConfigure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightsConfigureAsync_HighlightsConfigure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHighlightsConfigureAsync_HighlightsConfigure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightsConfigureAsync_HighlightsConfigure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHighlightsConfigureAsync_HighlightsConfigure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHighlightsConfigureAsync_HighlightsConfigure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHighlightsConfigureAsync_NoRegister()
	{
		return UHighlightsConfigureAsync::StaticClass();
	}
	struct Z_Construct_UClass_UHighlightsConfigureAsync_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHighlightsConfigureAsync_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NVIDIAGfeSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHighlightsConfigureAsync_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHighlightsConfigureAsync_HighlightsConfigure, "HighlightsConfigure" }, // 2608187764
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHighlightsConfigureAsync_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HighlightsConfigureAsync.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HighlightsConfigureAsync.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHighlightsConfigureAsync_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HighlightsConfigureAsync" },
		{ "ModuleRelativePath", "Public/HighlightsConfigureAsync.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHighlightsConfigureAsync_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHighlightsConfigureAsync, OnSuccess), Z_Construct_UDelegateFunction_NVIDIAGfeSDK_OnHighlightsOperationResultCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHighlightsConfigureAsync_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHighlightsConfigureAsync_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHighlightsConfigureAsync_Statics::NewProp_OnFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HighlightsConfigureAsync" },
		{ "ModuleRelativePath", "Public/HighlightsConfigureAsync.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHighlightsConfigureAsync_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHighlightsConfigureAsync, OnFailure), Z_Construct_UDelegateFunction_NVIDIAGfeSDK_OnHighlightsOperationResultCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHighlightsConfigureAsync_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHighlightsConfigureAsync_Statics::NewProp_OnFailure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHighlightsConfigureAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHighlightsConfigureAsync_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHighlightsConfigureAsync_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHighlightsConfigureAsync_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHighlightsConfigureAsync>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHighlightsConfigureAsync_Statics::ClassParams = {
		&UHighlightsConfigureAsync::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHighlightsConfigureAsync_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHighlightsConfigureAsync_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHighlightsConfigureAsync_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHighlightsConfigureAsync_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHighlightsConfigureAsync()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHighlightsConfigureAsync_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHighlightsConfigureAsync, 903983885);
	template<> NVIDIAGFESDK_API UClass* StaticClass<UHighlightsConfigureAsync>()
	{
		return UHighlightsConfigureAsync::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHighlightsConfigureAsync(Z_Construct_UClass_UHighlightsConfigureAsync, &UHighlightsConfigureAsync::StaticClass, TEXT("/Script/NVIDIAGfeSDK"), TEXT("UHighlightsConfigureAsync"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHighlightsConfigureAsync);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
