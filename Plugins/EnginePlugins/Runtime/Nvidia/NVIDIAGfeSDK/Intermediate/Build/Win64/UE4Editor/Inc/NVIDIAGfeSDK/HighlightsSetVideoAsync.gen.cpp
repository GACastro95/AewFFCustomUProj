// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NVIDIAGfeSDK/Public/HighlightsSetVideoAsync.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHighlightsSetVideoAsync() {}
// Cross Module References
	NVIDIAGFESDK_API UClass* Z_Construct_UClass_UHighlightsSetVideoAsync_NoRegister();
	NVIDIAGFESDK_API UClass* Z_Construct_UClass_UHighlightsSetVideoAsync();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_NVIDIAGfeSDK();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	NVIDIAGFESDK_API UFunction* Z_Construct_UDelegateFunction_NVIDIAGfeSDK_OnHighlightsOperationResultCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UHighlightsSetVideoAsync::execHighlightsSetVideo)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_GroupId);
		P_GET_PROPERTY(FStrProperty,Z_Param_HighlightId);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_StartDelta);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_EndDelta);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHighlightsSetVideoAsync**)Z_Param__Result=UHighlightsSetVideoAsync::HighlightsSetVideo(Z_Param_WorldContextObject,Z_Param_GroupId,Z_Param_HighlightId,Z_Param_Out_StartDelta,Z_Param_Out_EndDelta);
		P_NATIVE_END;
	}
	void UHighlightsSetVideoAsync::StaticRegisterNativesUHighlightsSetVideoAsync()
	{
		UClass* Class = UHighlightsSetVideoAsync::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HighlightsSetVideo", &UHighlightsSetVideoAsync::execHighlightsSetVideo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHighlightsSetVideoAsync_HighlightsSetVideo_Statics
	{
		struct HighlightsSetVideoAsync_eventHighlightsSetVideo_Parms
		{
			UObject* WorldContextObject;
			FString GroupId;
			FString HighlightId;
			int32 StartDelta;
			int32 EndDelta;
			UHighlightsSetVideoAsync* ReturnValue;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartDelta_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartDelta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndDelta_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndDelta;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightsSetVideoAsync_HighlightsSetVideo_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HighlightsSetVideoAsync_eventHighlightsSetVideo_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHighlightsSetVideoAsync_HighlightsSetVideo_Statics::NewProp_GroupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHighlightsSetVideoAsync_HighlightsSetVideo_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HighlightsSetVideoAsync_eventHighlightsSetVideo_Parms, GroupId), METADATA_PARAMS(Z_Construct_UFunction_UHighlightsSetVideoAsync_HighlightsSetVideo_Statics::NewProp_GroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightsSetVideoAsync_HighlightsSetVideo_Statics::NewProp_GroupId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHighlightsSetVideoAsync_HighlightsSetVideo_Statics::NewProp_HighlightId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHighlightsSetVideoAsync_HighlightsSetVideo_Statics::NewProp_HighlightId = { "HighlightId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HighlightsSetVideoAsync_eventHighlightsSetVideo_Parms, HighlightId), METADATA_PARAMS(Z_Construct_UFunction_UHighlightsSetVideoAsync_HighlightsSetVideo_Statics::NewProp_HighlightId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightsSetVideoAsync_HighlightsSetVideo_Statics::NewProp_HighlightId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHighlightsSetVideoAsync_HighlightsSetVideo_Statics::NewProp_StartDelta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHighlightsSetVideoAsync_HighlightsSetVideo_Statics::NewProp_StartDelta = { "StartDelta", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HighlightsSetVideoAsync_eventHighlightsSetVideo_Parms, StartDelta), METADATA_PARAMS(Z_Construct_UFunction_UHighlightsSetVideoAsync_HighlightsSetVideo_Statics::NewProp_StartDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightsSetVideoAsync_HighlightsSetVideo_Statics::NewProp_StartDelta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHighlightsSetVideoAsync_HighlightsSetVideo_Statics::NewProp_EndDelta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHighlightsSetVideoAsync_HighlightsSetVideo_Statics::NewProp_EndDelta = { "EndDelta", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HighlightsSetVideoAsync_eventHighlightsSetVideo_Parms, EndDelta), METADATA_PARAMS(Z_Construct_UFunction_UHighlightsSetVideoAsync_HighlightsSetVideo_Statics::NewProp_EndDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightsSetVideoAsync_HighlightsSetVideo_Statics::NewProp_EndDelta_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightsSetVideoAsync_HighlightsSetVideo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HighlightsSetVideoAsync_eventHighlightsSetVideo_Parms, ReturnValue), Z_Construct_UClass_UHighlightsSetVideoAsync_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightsSetVideoAsync_HighlightsSetVideo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightsSetVideoAsync_HighlightsSetVideo_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightsSetVideoAsync_HighlightsSetVideo_Statics::NewProp_GroupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightsSetVideoAsync_HighlightsSetVideo_Statics::NewProp_HighlightId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightsSetVideoAsync_HighlightsSetVideo_Statics::NewProp_StartDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightsSetVideoAsync_HighlightsSetVideo_Statics::NewProp_EndDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightsSetVideoAsync_HighlightsSetVideo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHighlightsSetVideoAsync_HighlightsSetVideo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HighlightsSetVideoAsync.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightsSetVideoAsync_HighlightsSetVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHighlightsSetVideoAsync, nullptr, "HighlightsSetVideo", nullptr, nullptr, sizeof(HighlightsSetVideoAsync_eventHighlightsSetVideo_Parms), Z_Construct_UFunction_UHighlightsSetVideoAsync_HighlightsSetVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightsSetVideoAsync_HighlightsSetVideo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHighlightsSetVideoAsync_HighlightsSetVideo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightsSetVideoAsync_HighlightsSetVideo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHighlightsSetVideoAsync_HighlightsSetVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHighlightsSetVideoAsync_HighlightsSetVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHighlightsSetVideoAsync_NoRegister()
	{
		return UHighlightsSetVideoAsync::StaticClass();
	}
	struct Z_Construct_UClass_UHighlightsSetVideoAsync_Statics
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
	UObject* (*const Z_Construct_UClass_UHighlightsSetVideoAsync_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NVIDIAGfeSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHighlightsSetVideoAsync_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHighlightsSetVideoAsync_HighlightsSetVideo, "HighlightsSetVideo" }, // 1536006705
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHighlightsSetVideoAsync_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HighlightsSetVideoAsync.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HighlightsSetVideoAsync.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHighlightsSetVideoAsync_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HighlightsSetVideoAsync" },
		{ "ModuleRelativePath", "Public/HighlightsSetVideoAsync.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHighlightsSetVideoAsync_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHighlightsSetVideoAsync, OnSuccess), Z_Construct_UDelegateFunction_NVIDIAGfeSDK_OnHighlightsOperationResultCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHighlightsSetVideoAsync_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHighlightsSetVideoAsync_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHighlightsSetVideoAsync_Statics::NewProp_OnFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HighlightsSetVideoAsync" },
		{ "ModuleRelativePath", "Public/HighlightsSetVideoAsync.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHighlightsSetVideoAsync_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHighlightsSetVideoAsync, OnFailure), Z_Construct_UDelegateFunction_NVIDIAGfeSDK_OnHighlightsOperationResultCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHighlightsSetVideoAsync_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHighlightsSetVideoAsync_Statics::NewProp_OnFailure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHighlightsSetVideoAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHighlightsSetVideoAsync_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHighlightsSetVideoAsync_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHighlightsSetVideoAsync_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHighlightsSetVideoAsync>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHighlightsSetVideoAsync_Statics::ClassParams = {
		&UHighlightsSetVideoAsync::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHighlightsSetVideoAsync_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHighlightsSetVideoAsync_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHighlightsSetVideoAsync_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHighlightsSetVideoAsync_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHighlightsSetVideoAsync()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHighlightsSetVideoAsync_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHighlightsSetVideoAsync, 1595187684);
	template<> NVIDIAGFESDK_API UClass* StaticClass<UHighlightsSetVideoAsync>()
	{
		return UHighlightsSetVideoAsync::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHighlightsSetVideoAsync(Z_Construct_UClass_UHighlightsSetVideoAsync, &UHighlightsSetVideoAsync::StaticClass, TEXT("/Script/NVIDIAGfeSDK"), TEXT("UHighlightsSetVideoAsync"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHighlightsSetVideoAsync);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
