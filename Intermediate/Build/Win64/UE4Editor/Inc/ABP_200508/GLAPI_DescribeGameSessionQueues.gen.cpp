// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/GLAPI_DescribeGameSessionQueues.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLAPI_DescribeGameSessionQueues() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UGLAPI_DescribeGameSessionQueues_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UGLAPI_DescribeGameSessionQueues();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EGameLiftActivateStatus();
	ABP_200508_API UClass* Z_Construct_UClass_UGameLiftClientObject_NoRegister();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_OnDescribeGameSessionQueuesSuccess__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_OnDescribeGameSessionQueuesFailed__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UGLAPI_DescribeGameSessionQueues::execActivate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGameLiftActivateStatus*)Z_Param__Result=P_THIS->Activate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLAPI_DescribeGameSessionQueues::execDescribeGameSessionQueues)
	{
		P_GET_OBJECT(UGameLiftClientObject,Z_Param_client);
		P_GET_PROPERTY(FStrProperty,Z_Param_QueueName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGLAPI_DescribeGameSessionQueues**)Z_Param__Result=UGLAPI_DescribeGameSessionQueues::DescribeGameSessionQueues(Z_Param_client,Z_Param_QueueName);
		P_NATIVE_END;
	}
	void UGLAPI_DescribeGameSessionQueues::StaticRegisterNativesUGLAPI_DescribeGameSessionQueues()
	{
		UClass* Class = UGLAPI_DescribeGameSessionQueues::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Activate", &UGLAPI_DescribeGameSessionQueues::execActivate },
			{ "DescribeGameSessionQueues", &UGLAPI_DescribeGameSessionQueues::execDescribeGameSessionQueues },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGLAPI_DescribeGameSessionQueues_Activate_Statics
	{
		struct GLAPI_DescribeGameSessionQueues_eventActivate_Parms
		{
			EGameLiftActivateStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGLAPI_DescribeGameSessionQueues_Activate_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGLAPI_DescribeGameSessionQueues_Activate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLAPI_DescribeGameSessionQueues_eventActivate_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_EGameLiftActivateStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLAPI_DescribeGameSessionQueues_Activate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLAPI_DescribeGameSessionQueues_Activate_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLAPI_DescribeGameSessionQueues_Activate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLAPI_DescribeGameSessionQueues_Activate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GLAPI_DescribeGameSessionQueues.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLAPI_DescribeGameSessionQueues_Activate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLAPI_DescribeGameSessionQueues, nullptr, "Activate", nullptr, nullptr, sizeof(GLAPI_DescribeGameSessionQueues_eventActivate_Parms), Z_Construct_UFunction_UGLAPI_DescribeGameSessionQueues_Activate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLAPI_DescribeGameSessionQueues_Activate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLAPI_DescribeGameSessionQueues_Activate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLAPI_DescribeGameSessionQueues_Activate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLAPI_DescribeGameSessionQueues_Activate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGLAPI_DescribeGameSessionQueues_Activate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLAPI_DescribeGameSessionQueues_DescribeGameSessionQueues_Statics
	{
		struct GLAPI_DescribeGameSessionQueues_eventDescribeGameSessionQueues_Parms
		{
			UGameLiftClientObject* client;
			FString QueueName;
			UGLAPI_DescribeGameSessionQueues* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_client;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueueName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_QueueName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLAPI_DescribeGameSessionQueues_DescribeGameSessionQueues_Statics::NewProp_client = { "client", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLAPI_DescribeGameSessionQueues_eventDescribeGameSessionQueues_Parms, client), Z_Construct_UClass_UGameLiftClientObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLAPI_DescribeGameSessionQueues_DescribeGameSessionQueues_Statics::NewProp_QueueName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLAPI_DescribeGameSessionQueues_DescribeGameSessionQueues_Statics::NewProp_QueueName = { "QueueName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLAPI_DescribeGameSessionQueues_eventDescribeGameSessionQueues_Parms, QueueName), METADATA_PARAMS(Z_Construct_UFunction_UGLAPI_DescribeGameSessionQueues_DescribeGameSessionQueues_Statics::NewProp_QueueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLAPI_DescribeGameSessionQueues_DescribeGameSessionQueues_Statics::NewProp_QueueName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLAPI_DescribeGameSessionQueues_DescribeGameSessionQueues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLAPI_DescribeGameSessionQueues_eventDescribeGameSessionQueues_Parms, ReturnValue), Z_Construct_UClass_UGLAPI_DescribeGameSessionQueues_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLAPI_DescribeGameSessionQueues_DescribeGameSessionQueues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLAPI_DescribeGameSessionQueues_DescribeGameSessionQueues_Statics::NewProp_client,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLAPI_DescribeGameSessionQueues_DescribeGameSessionQueues_Statics::NewProp_QueueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLAPI_DescribeGameSessionQueues_DescribeGameSessionQueues_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLAPI_DescribeGameSessionQueues_DescribeGameSessionQueues_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GLAPI_DescribeGameSessionQueues.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLAPI_DescribeGameSessionQueues_DescribeGameSessionQueues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLAPI_DescribeGameSessionQueues, nullptr, "DescribeGameSessionQueues", nullptr, nullptr, sizeof(GLAPI_DescribeGameSessionQueues_eventDescribeGameSessionQueues_Parms), Z_Construct_UFunction_UGLAPI_DescribeGameSessionQueues_DescribeGameSessionQueues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLAPI_DescribeGameSessionQueues_DescribeGameSessionQueues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLAPI_DescribeGameSessionQueues_DescribeGameSessionQueues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLAPI_DescribeGameSessionQueues_DescribeGameSessionQueues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLAPI_DescribeGameSessionQueues_DescribeGameSessionQueues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGLAPI_DescribeGameSessionQueues_DescribeGameSessionQueues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGLAPI_DescribeGameSessionQueues_NoRegister()
	{
		return UGLAPI_DescribeGameSessionQueues::StaticClass();
	}
	struct Z_Construct_UClass_UGLAPI_DescribeGameSessionQueues_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFailed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGLAPI_DescribeGameSessionQueues_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGLAPI_DescribeGameSessionQueues_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGLAPI_DescribeGameSessionQueues_Activate, "Activate" }, // 1160480644
		{ &Z_Construct_UFunction_UGLAPI_DescribeGameSessionQueues_DescribeGameSessionQueues, "DescribeGameSessionQueues" }, // 4265089646
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLAPI_DescribeGameSessionQueues_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GLAPI_DescribeGameSessionQueues.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GLAPI_DescribeGameSessionQueues.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLAPI_DescribeGameSessionQueues_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GLAPI_DescribeGameSessionQueues" },
		{ "ModuleRelativePath", "Public/GLAPI_DescribeGameSessionQueues.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGLAPI_DescribeGameSessionQueues_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGLAPI_DescribeGameSessionQueues, OnSuccess), Z_Construct_UDelegateFunction_ABP_200508_OnDescribeGameSessionQueuesSuccess__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGLAPI_DescribeGameSessionQueues_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLAPI_DescribeGameSessionQueues_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLAPI_DescribeGameSessionQueues_Statics::NewProp_OnFailed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GLAPI_DescribeGameSessionQueues" },
		{ "ModuleRelativePath", "Public/GLAPI_DescribeGameSessionQueues.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGLAPI_DescribeGameSessionQueues_Statics::NewProp_OnFailed = { "OnFailed", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGLAPI_DescribeGameSessionQueues, OnFailed), Z_Construct_UDelegateFunction_ABP_200508_OnDescribeGameSessionQueuesFailed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGLAPI_DescribeGameSessionQueues_Statics::NewProp_OnFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLAPI_DescribeGameSessionQueues_Statics::NewProp_OnFailed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGLAPI_DescribeGameSessionQueues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLAPI_DescribeGameSessionQueues_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLAPI_DescribeGameSessionQueues_Statics::NewProp_OnFailed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGLAPI_DescribeGameSessionQueues_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLAPI_DescribeGameSessionQueues>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGLAPI_DescribeGameSessionQueues_Statics::ClassParams = {
		&UGLAPI_DescribeGameSessionQueues::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGLAPI_DescribeGameSessionQueues_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGLAPI_DescribeGameSessionQueues_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGLAPI_DescribeGameSessionQueues_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGLAPI_DescribeGameSessionQueues_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGLAPI_DescribeGameSessionQueues()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGLAPI_DescribeGameSessionQueues_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGLAPI_DescribeGameSessionQueues, 351098316);
	template<> ABP_200508_API UClass* StaticClass<UGLAPI_DescribeGameSessionQueues>()
	{
		return UGLAPI_DescribeGameSessionQueues::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGLAPI_DescribeGameSessionQueues(Z_Construct_UClass_UGLAPI_DescribeGameSessionQueues, &UGLAPI_DescribeGameSessionQueues::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UGLAPI_DescribeGameSessionQueues"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGLAPI_DescribeGameSessionQueues);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
