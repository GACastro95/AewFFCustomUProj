// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NVIDIAGfeSDK/Public/InitHighlights.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInitHighlights() {}
// Cross Module References
	NVIDIAGFESDK_API UClass* Z_Construct_UClass_UInitHighlights_NoRegister();
	NVIDIAGFESDK_API UClass* Z_Construct_UClass_UInitHighlights();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_NVIDIAGfeSDK();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	NVIDIAGFESDK_API UFunction* Z_Construct_UDelegateFunction_NVIDIAGfeSDK_OnHighlightsInitCallback__DelegateSignature();
	NVIDIAGFESDK_API UFunction* Z_Construct_UDelegateFunction_NVIDIAGfeSDK_OnHighlightsOperationResultCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UInitHighlights::execInitHighlights)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_InGameName);
		P_GET_UBOOL(Z_Param_Video);
		P_GET_UBOOL(Z_Param_Screenshots);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInitHighlights**)Z_Param__Result=UInitHighlights::InitHighlights(Z_Param_WorldContextObject,Z_Param_InGameName,Z_Param_Video,Z_Param_Screenshots);
		P_NATIVE_END;
	}
	void UInitHighlights::StaticRegisterNativesUInitHighlights()
	{
		UClass* Class = UInitHighlights::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitHighlights", &UInitHighlights::execInitHighlights },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInitHighlights_InitHighlights_Statics
	{
		struct InitHighlights_eventInitHighlights_Parms
		{
			UObject* WorldContextObject;
			FString InGameName;
			bool Video;
			bool Screenshots;
			UInitHighlights* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InGameName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InGameName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Video_MetaData[];
#endif
		static void NewProp_Video_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Video;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Screenshots_MetaData[];
#endif
		static void NewProp_Screenshots_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Screenshots;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInitHighlights_InitHighlights_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InitHighlights_eventInitHighlights_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInitHighlights_InitHighlights_Statics::NewProp_InGameName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInitHighlights_InitHighlights_Statics::NewProp_InGameName = { "InGameName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InitHighlights_eventInitHighlights_Parms, InGameName), METADATA_PARAMS(Z_Construct_UFunction_UInitHighlights_InitHighlights_Statics::NewProp_InGameName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInitHighlights_InitHighlights_Statics::NewProp_InGameName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInitHighlights_InitHighlights_Statics::NewProp_Video_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInitHighlights_InitHighlights_Statics::NewProp_Video_SetBit(void* Obj)
	{
		((InitHighlights_eventInitHighlights_Parms*)Obj)->Video = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInitHighlights_InitHighlights_Statics::NewProp_Video = { "Video", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InitHighlights_eventInitHighlights_Parms), &Z_Construct_UFunction_UInitHighlights_InitHighlights_Statics::NewProp_Video_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UInitHighlights_InitHighlights_Statics::NewProp_Video_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInitHighlights_InitHighlights_Statics::NewProp_Video_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInitHighlights_InitHighlights_Statics::NewProp_Screenshots_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInitHighlights_InitHighlights_Statics::NewProp_Screenshots_SetBit(void* Obj)
	{
		((InitHighlights_eventInitHighlights_Parms*)Obj)->Screenshots = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInitHighlights_InitHighlights_Statics::NewProp_Screenshots = { "Screenshots", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InitHighlights_eventInitHighlights_Parms), &Z_Construct_UFunction_UInitHighlights_InitHighlights_Statics::NewProp_Screenshots_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UInitHighlights_InitHighlights_Statics::NewProp_Screenshots_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInitHighlights_InitHighlights_Statics::NewProp_Screenshots_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInitHighlights_InitHighlights_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InitHighlights_eventInitHighlights_Parms, ReturnValue), Z_Construct_UClass_UInitHighlights_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInitHighlights_InitHighlights_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInitHighlights_InitHighlights_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInitHighlights_InitHighlights_Statics::NewProp_InGameName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInitHighlights_InitHighlights_Statics::NewProp_Video,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInitHighlights_InitHighlights_Statics::NewProp_Screenshots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInitHighlights_InitHighlights_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInitHighlights_InitHighlights_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InitHighlights.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInitHighlights_InitHighlights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInitHighlights, nullptr, "InitHighlights", nullptr, nullptr, sizeof(InitHighlights_eventInitHighlights_Parms), Z_Construct_UFunction_UInitHighlights_InitHighlights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInitHighlights_InitHighlights_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInitHighlights_InitHighlights_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInitHighlights_InitHighlights_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInitHighlights_InitHighlights()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInitHighlights_InitHighlights_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInitHighlights_NoRegister()
	{
		return UInitHighlights::StaticClass();
	}
	struct Z_Construct_UClass_UInitHighlights_Statics
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
	UObject* (*const Z_Construct_UClass_UInitHighlights_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NVIDIAGfeSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInitHighlights_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInitHighlights_InitHighlights, "InitHighlights" }, // 3952137569
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInitHighlights_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InitHighlights.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InitHighlights.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInitHighlights_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InitHighlights" },
		{ "ModuleRelativePath", "Public/InitHighlights.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInitHighlights_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInitHighlights, OnSuccess), Z_Construct_UDelegateFunction_NVIDIAGfeSDK_OnHighlightsInitCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInitHighlights_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInitHighlights_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInitHighlights_Statics::NewProp_OnFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InitHighlights" },
		{ "ModuleRelativePath", "Public/InitHighlights.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInitHighlights_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInitHighlights, OnFailure), Z_Construct_UDelegateFunction_NVIDIAGfeSDK_OnHighlightsOperationResultCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInitHighlights_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInitHighlights_Statics::NewProp_OnFailure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInitHighlights_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInitHighlights_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInitHighlights_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInitHighlights_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInitHighlights>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInitHighlights_Statics::ClassParams = {
		&UInitHighlights::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInitHighlights_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInitHighlights_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInitHighlights_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInitHighlights_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInitHighlights()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInitHighlights_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInitHighlights, 2607062443);
	template<> NVIDIAGFESDK_API UClass* StaticClass<UInitHighlights>()
	{
		return UInitHighlights::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInitHighlights(Z_Construct_UClass_UInitHighlights, &UInitHighlights::StaticClass, TEXT("/Script/NVIDIAGfeSDK"), TEXT("UInitHighlights"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInitHighlights);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
