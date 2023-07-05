// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NVIDIAGfeSDK/Public/HighlightsGetNumberAsync.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHighlightsGetNumberAsync() {}
// Cross Module References
	NVIDIAGFESDK_API UClass* Z_Construct_UClass_UHighlightsGetNumberAsync_NoRegister();
	NVIDIAGFESDK_API UClass* Z_Construct_UClass_UHighlightsGetNumberAsync();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_NVIDIAGfeSDK();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	NVIDIAGFESDK_API UEnum* Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKHighlightType();
	NVIDIAGFESDK_API UEnum* Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKHighlightSignificance();
	NVIDIAGFESDK_API UFunction* Z_Construct_UDelegateFunction_NVIDIAGfeSDK_OnGetNumberOfHighlightsCallback__DelegateSignature();
	NVIDIAGFESDK_API UFunction* Z_Construct_UDelegateFunction_NVIDIAGfeSDK_OnHighlightsOperationResultCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UHighlightsGetNumberAsync::execHighlightsGetNumberOfHighlights)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_GroupId);
		P_GET_ENUM_REF(EGfeSDKHighlightType,Z_Param_Out_TagFilter);
		P_GET_ENUM_REF(EGfeSDKHighlightSignificance,Z_Param_Out_SignificanceFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHighlightsGetNumberAsync**)Z_Param__Result=UHighlightsGetNumberAsync::HighlightsGetNumberOfHighlights(Z_Param_WorldContextObject,Z_Param_GroupId,(EGfeSDKHighlightType&)(Z_Param_Out_TagFilter),(EGfeSDKHighlightSignificance&)(Z_Param_Out_SignificanceFilter));
		P_NATIVE_END;
	}
	void UHighlightsGetNumberAsync::StaticRegisterNativesUHighlightsGetNumberAsync()
	{
		UClass* Class = UHighlightsGetNumberAsync::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HighlightsGetNumberOfHighlights", &UHighlightsGetNumberAsync::execHighlightsGetNumberOfHighlights },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights_Statics
	{
		struct HighlightsGetNumberAsync_eventHighlightsGetNumberOfHighlights_Parms
		{
			UObject* WorldContextObject;
			FString GroupId;
			EGfeSDKHighlightType TagFilter;
			EGfeSDKHighlightSignificance SignificanceFilter;
			UHighlightsGetNumberAsync* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GroupId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TagFilter_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TagFilter;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SignificanceFilter_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SignificanceFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SignificanceFilter;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HighlightsGetNumberAsync_eventHighlightsGetNumberOfHighlights_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights_Statics::NewProp_GroupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HighlightsGetNumberAsync_eventHighlightsGetNumberOfHighlights_Parms, GroupId), METADATA_PARAMS(Z_Construct_UFunction_UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights_Statics::NewProp_GroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights_Statics::NewProp_GroupId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights_Statics::NewProp_TagFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights_Statics::NewProp_TagFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights_Statics::NewProp_TagFilter = { "TagFilter", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HighlightsGetNumberAsync_eventHighlightsGetNumberOfHighlights_Parms, TagFilter), Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKHighlightType, METADATA_PARAMS(Z_Construct_UFunction_UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights_Statics::NewProp_TagFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights_Statics::NewProp_TagFilter_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights_Statics::NewProp_SignificanceFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights_Statics::NewProp_SignificanceFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights_Statics::NewProp_SignificanceFilter = { "SignificanceFilter", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HighlightsGetNumberAsync_eventHighlightsGetNumberOfHighlights_Parms, SignificanceFilter), Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKHighlightSignificance, METADATA_PARAMS(Z_Construct_UFunction_UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights_Statics::NewProp_SignificanceFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights_Statics::NewProp_SignificanceFilter_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HighlightsGetNumberAsync_eventHighlightsGetNumberOfHighlights_Parms, ReturnValue), Z_Construct_UClass_UHighlightsGetNumberAsync_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights_Statics::NewProp_GroupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights_Statics::NewProp_TagFilter_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights_Statics::NewProp_TagFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights_Statics::NewProp_SignificanceFilter_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights_Statics::NewProp_SignificanceFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HighlightsGetNumberAsync.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHighlightsGetNumberAsync, nullptr, "HighlightsGetNumberOfHighlights", nullptr, nullptr, sizeof(HighlightsGetNumberAsync_eventHighlightsGetNumberOfHighlights_Parms), Z_Construct_UFunction_UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHighlightsGetNumberAsync_NoRegister()
	{
		return UHighlightsGetNumberAsync::StaticClass();
	}
	struct Z_Construct_UClass_UHighlightsGetNumberAsync_Statics
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
	UObject* (*const Z_Construct_UClass_UHighlightsGetNumberAsync_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NVIDIAGfeSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHighlightsGetNumberAsync_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights, "HighlightsGetNumberOfHighlights" }, // 4002420118
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHighlightsGetNumberAsync_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HighlightsGetNumberAsync.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HighlightsGetNumberAsync.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHighlightsGetNumberAsync_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HighlightsGetNumberAsync" },
		{ "ModuleRelativePath", "Public/HighlightsGetNumberAsync.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHighlightsGetNumberAsync_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHighlightsGetNumberAsync, OnSuccess), Z_Construct_UDelegateFunction_NVIDIAGfeSDK_OnGetNumberOfHighlightsCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHighlightsGetNumberAsync_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHighlightsGetNumberAsync_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHighlightsGetNumberAsync_Statics::NewProp_OnFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HighlightsGetNumberAsync" },
		{ "ModuleRelativePath", "Public/HighlightsGetNumberAsync.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHighlightsGetNumberAsync_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHighlightsGetNumberAsync, OnFailure), Z_Construct_UDelegateFunction_NVIDIAGfeSDK_OnHighlightsOperationResultCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHighlightsGetNumberAsync_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHighlightsGetNumberAsync_Statics::NewProp_OnFailure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHighlightsGetNumberAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHighlightsGetNumberAsync_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHighlightsGetNumberAsync_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHighlightsGetNumberAsync_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHighlightsGetNumberAsync>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHighlightsGetNumberAsync_Statics::ClassParams = {
		&UHighlightsGetNumberAsync::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHighlightsGetNumberAsync_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHighlightsGetNumberAsync_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHighlightsGetNumberAsync_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHighlightsGetNumberAsync_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHighlightsGetNumberAsync()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHighlightsGetNumberAsync_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHighlightsGetNumberAsync, 931980716);
	template<> NVIDIAGFESDK_API UClass* StaticClass<UHighlightsGetNumberAsync>()
	{
		return UHighlightsGetNumberAsync::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHighlightsGetNumberAsync(Z_Construct_UClass_UHighlightsGetNumberAsync, &UHighlightsGetNumberAsync::StaticClass, TEXT("/Script/NVIDIAGfeSDK"), TEXT("UHighlightsGetNumberAsync"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHighlightsGetNumberAsync);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
