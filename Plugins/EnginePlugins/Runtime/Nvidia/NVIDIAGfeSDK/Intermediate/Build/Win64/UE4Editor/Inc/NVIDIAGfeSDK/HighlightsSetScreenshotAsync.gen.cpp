// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NVIDIAGfeSDK/Public/HighlightsSetScreenshotAsync.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHighlightsSetScreenshotAsync() {}
// Cross Module References
	NVIDIAGFESDK_API UClass* Z_Construct_UClass_UHighlightsSetScreenshotAsync_NoRegister();
	NVIDIAGFESDK_API UClass* Z_Construct_UClass_UHighlightsSetScreenshotAsync();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_NVIDIAGfeSDK();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	NVIDIAGFESDK_API UFunction* Z_Construct_UDelegateFunction_NVIDIAGfeSDK_OnHighlightsOperationResultCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UHighlightsSetScreenshotAsync::execHighlightsSetScreenshot)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_GroupId);
		P_GET_PROPERTY(FStrProperty,Z_Param_HighlightId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHighlightsSetScreenshotAsync**)Z_Param__Result=UHighlightsSetScreenshotAsync::HighlightsSetScreenshot(Z_Param_WorldContextObject,Z_Param_GroupId,Z_Param_HighlightId);
		P_NATIVE_END;
	}
	void UHighlightsSetScreenshotAsync::StaticRegisterNativesUHighlightsSetScreenshotAsync()
	{
		UClass* Class = UHighlightsSetScreenshotAsync::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HighlightsSetScreenshot", &UHighlightsSetScreenshotAsync::execHighlightsSetScreenshot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHighlightsSetScreenshotAsync_HighlightsSetScreenshot_Statics
	{
		struct HighlightsSetScreenshotAsync_eventHighlightsSetScreenshot_Parms
		{
			UObject* WorldContextObject;
			FString GroupId;
			FString HighlightId;
			UHighlightsSetScreenshotAsync* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GroupId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighlightId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HighlightId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightsSetScreenshotAsync_HighlightsSetScreenshot_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HighlightsSetScreenshotAsync_eventHighlightsSetScreenshot_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHighlightsSetScreenshotAsync_HighlightsSetScreenshot_Statics::NewProp_GroupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHighlightsSetScreenshotAsync_HighlightsSetScreenshot_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HighlightsSetScreenshotAsync_eventHighlightsSetScreenshot_Parms, GroupId), METADATA_PARAMS(Z_Construct_UFunction_UHighlightsSetScreenshotAsync_HighlightsSetScreenshot_Statics::NewProp_GroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightsSetScreenshotAsync_HighlightsSetScreenshot_Statics::NewProp_GroupId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHighlightsSetScreenshotAsync_HighlightsSetScreenshot_Statics::NewProp_HighlightId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHighlightsSetScreenshotAsync_HighlightsSetScreenshot_Statics::NewProp_HighlightId = { "HighlightId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HighlightsSetScreenshotAsync_eventHighlightsSetScreenshot_Parms, HighlightId), METADATA_PARAMS(Z_Construct_UFunction_UHighlightsSetScreenshotAsync_HighlightsSetScreenshot_Statics::NewProp_HighlightId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightsSetScreenshotAsync_HighlightsSetScreenshot_Statics::NewProp_HighlightId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightsSetScreenshotAsync_HighlightsSetScreenshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HighlightsSetScreenshotAsync_eventHighlightsSetScreenshot_Parms, ReturnValue), Z_Construct_UClass_UHighlightsSetScreenshotAsync_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightsSetScreenshotAsync_HighlightsSetScreenshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightsSetScreenshotAsync_HighlightsSetScreenshot_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightsSetScreenshotAsync_HighlightsSetScreenshot_Statics::NewProp_GroupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightsSetScreenshotAsync_HighlightsSetScreenshot_Statics::NewProp_HighlightId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightsSetScreenshotAsync_HighlightsSetScreenshot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHighlightsSetScreenshotAsync_HighlightsSetScreenshot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HighlightsSetScreenshotAsync.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightsSetScreenshotAsync_HighlightsSetScreenshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHighlightsSetScreenshotAsync, nullptr, "HighlightsSetScreenshot", nullptr, nullptr, sizeof(HighlightsSetScreenshotAsync_eventHighlightsSetScreenshot_Parms), Z_Construct_UFunction_UHighlightsSetScreenshotAsync_HighlightsSetScreenshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightsSetScreenshotAsync_HighlightsSetScreenshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHighlightsSetScreenshotAsync_HighlightsSetScreenshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightsSetScreenshotAsync_HighlightsSetScreenshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHighlightsSetScreenshotAsync_HighlightsSetScreenshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHighlightsSetScreenshotAsync_HighlightsSetScreenshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHighlightsSetScreenshotAsync_NoRegister()
	{
		return UHighlightsSetScreenshotAsync::StaticClass();
	}
	struct Z_Construct_UClass_UHighlightsSetScreenshotAsync_Statics
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
	UObject* (*const Z_Construct_UClass_UHighlightsSetScreenshotAsync_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NVIDIAGfeSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHighlightsSetScreenshotAsync_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHighlightsSetScreenshotAsync_HighlightsSetScreenshot, "HighlightsSetScreenshot" }, // 3161645677
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHighlightsSetScreenshotAsync_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HighlightsSetScreenshotAsync.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HighlightsSetScreenshotAsync.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHighlightsSetScreenshotAsync_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HighlightsSetScreenshotAsync" },
		{ "ModuleRelativePath", "Public/HighlightsSetScreenshotAsync.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHighlightsSetScreenshotAsync_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHighlightsSetScreenshotAsync, OnSuccess), Z_Construct_UDelegateFunction_NVIDIAGfeSDK_OnHighlightsOperationResultCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHighlightsSetScreenshotAsync_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHighlightsSetScreenshotAsync_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHighlightsSetScreenshotAsync_Statics::NewProp_OnFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HighlightsSetScreenshotAsync" },
		{ "ModuleRelativePath", "Public/HighlightsSetScreenshotAsync.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHighlightsSetScreenshotAsync_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHighlightsSetScreenshotAsync, OnFailure), Z_Construct_UDelegateFunction_NVIDIAGfeSDK_OnHighlightsOperationResultCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHighlightsSetScreenshotAsync_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHighlightsSetScreenshotAsync_Statics::NewProp_OnFailure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHighlightsSetScreenshotAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHighlightsSetScreenshotAsync_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHighlightsSetScreenshotAsync_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHighlightsSetScreenshotAsync_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHighlightsSetScreenshotAsync>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHighlightsSetScreenshotAsync_Statics::ClassParams = {
		&UHighlightsSetScreenshotAsync::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHighlightsSetScreenshotAsync_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHighlightsSetScreenshotAsync_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHighlightsSetScreenshotAsync_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHighlightsSetScreenshotAsync_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHighlightsSetScreenshotAsync()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHighlightsSetScreenshotAsync_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHighlightsSetScreenshotAsync, 3296263946);
	template<> NVIDIAGFESDK_API UClass* StaticClass<UHighlightsSetScreenshotAsync>()
	{
		return UHighlightsSetScreenshotAsync::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHighlightsSetScreenshotAsync(Z_Construct_UClass_UHighlightsSetScreenshotAsync, &UHighlightsSetScreenshotAsync::StaticClass, TEXT("/Script/NVIDIAGfeSDK"), TEXT("UHighlightsSetScreenshotAsync"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHighlightsSetScreenshotAsync);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
