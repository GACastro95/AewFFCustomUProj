// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/YGS2DebugMenuClient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYGS2DebugMenuClient() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UYGS2DebugMenuClient_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UYGS2DebugMenuClient();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FYGS2CommandData();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_YGS2DebugMenuClientUpdateDispatcher__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UYGS2DebugMenuClient::execGetCommands)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FYGS2CommandData>*)Z_Param__Result=P_THIS->GetCommands();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2DebugMenuClient::execGetRequestErrorString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetRequestErrorString();
		P_NATIVE_END;
	}
	void UYGS2DebugMenuClient::StaticRegisterNativesUYGS2DebugMenuClient()
	{
		UClass* Class = UYGS2DebugMenuClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCommands", &UYGS2DebugMenuClient::execGetCommands },
			{ "GetRequestErrorString", &UYGS2DebugMenuClient::execGetRequestErrorString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYGS2DebugMenuClient_GetCommands_Statics
	{
		struct YGS2DebugMenuClient_eventGetCommands_Parms
		{
			TArray<FYGS2CommandData> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYGS2DebugMenuClient_GetCommands_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FYGS2CommandData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UYGS2DebugMenuClient_GetCommands_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2DebugMenuClient_eventGetCommands_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2DebugMenuClient_GetCommands_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2DebugMenuClient_GetCommands_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2DebugMenuClient_GetCommands_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2DebugMenuClient_GetCommands_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2DebugMenuClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2DebugMenuClient_GetCommands_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2DebugMenuClient, nullptr, "GetCommands", nullptr, nullptr, sizeof(YGS2DebugMenuClient_eventGetCommands_Parms), Z_Construct_UFunction_UYGS2DebugMenuClient_GetCommands_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2DebugMenuClient_GetCommands_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2DebugMenuClient_GetCommands_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2DebugMenuClient_GetCommands_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2DebugMenuClient_GetCommands()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2DebugMenuClient_GetCommands_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2DebugMenuClient_GetRequestErrorString_Statics
	{
		struct YGS2DebugMenuClient_eventGetRequestErrorString_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2DebugMenuClient_GetRequestErrorString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2DebugMenuClient_eventGetRequestErrorString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2DebugMenuClient_GetRequestErrorString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2DebugMenuClient_GetRequestErrorString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2DebugMenuClient_GetRequestErrorString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2DebugMenuClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2DebugMenuClient_GetRequestErrorString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2DebugMenuClient, nullptr, "GetRequestErrorString", nullptr, nullptr, sizeof(YGS2DebugMenuClient_eventGetRequestErrorString_Parms), Z_Construct_UFunction_UYGS2DebugMenuClient_GetRequestErrorString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2DebugMenuClient_GetRequestErrorString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2DebugMenuClient_GetRequestErrorString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2DebugMenuClient_GetRequestErrorString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2DebugMenuClient_GetRequestErrorString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2DebugMenuClient_GetRequestErrorString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYGS2DebugMenuClient_NoRegister()
	{
		return UYGS2DebugMenuClient::StaticClass();
	}
	struct Z_Construct_UClass_UYGS2DebugMenuClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugMenuClientUpdateDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_DebugMenuClientUpdateDispatcher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYGS2DebugMenuClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYGS2DebugMenuClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYGS2DebugMenuClient_GetCommands, "GetCommands" }, // 1209132162
		{ &Z_Construct_UFunction_UYGS2DebugMenuClient_GetRequestErrorString, "GetRequestErrorString" }, // 2854224905
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYGS2DebugMenuClient_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YGS2DebugMenuClient.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YGS2DebugMenuClient.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYGS2DebugMenuClient_Statics::NewProp_DebugMenuClientUpdateDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2DebugMenuClient" },
		{ "ModuleRelativePath", "Public/YGS2DebugMenuClient.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UYGS2DebugMenuClient_Statics::NewProp_DebugMenuClientUpdateDispatcher = { "DebugMenuClientUpdateDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYGS2DebugMenuClient, DebugMenuClientUpdateDispatcher), Z_Construct_UDelegateFunction_ABP_200508_YGS2DebugMenuClientUpdateDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UYGS2DebugMenuClient_Statics::NewProp_DebugMenuClientUpdateDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYGS2DebugMenuClient_Statics::NewProp_DebugMenuClientUpdateDispatcher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYGS2DebugMenuClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYGS2DebugMenuClient_Statics::NewProp_DebugMenuClientUpdateDispatcher,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYGS2DebugMenuClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYGS2DebugMenuClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYGS2DebugMenuClient_Statics::ClassParams = {
		&UYGS2DebugMenuClient::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UYGS2DebugMenuClient_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UYGS2DebugMenuClient_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UYGS2DebugMenuClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYGS2DebugMenuClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYGS2DebugMenuClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYGS2DebugMenuClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYGS2DebugMenuClient, 2875907728);
	template<> ABP_200508_API UClass* StaticClass<UYGS2DebugMenuClient>()
	{
		return UYGS2DebugMenuClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYGS2DebugMenuClient(Z_Construct_UClass_UYGS2DebugMenuClient, &UYGS2DebugMenuClient::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UYGS2DebugMenuClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYGS2DebugMenuClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
