// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/GLAPI_DescribePlayerSessions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLAPI_DescribePlayerSessions() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UGLAPI_DescribePlayerSessions_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UGLAPI_DescribePlayerSessions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EGameLiftActivateStatus();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_OnDescribePlayerSessionsSuccess__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_OnFOnDescribePlayerSessionsFailed__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UGLAPI_DescribePlayerSessions::execActivate)
	{
		P_GET_STRUCT_REF(FDescribePlayerSessions_RequestParam,Z_Param_Out_requestParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGameLiftActivateStatus*)Z_Param__Result=P_THIS->Activate(Z_Param_Out_requestParam);
		P_NATIVE_END;
	}
	void UGLAPI_DescribePlayerSessions::StaticRegisterNativesUGLAPI_DescribePlayerSessions()
	{
		UClass* Class = UGLAPI_DescribePlayerSessions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Activate", &UGLAPI_DescribePlayerSessions::execActivate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGLAPI_DescribePlayerSessions_Activate_Statics
	{
		struct GLAPI_DescribePlayerSessions_eventActivate_Parms
		{
			FDescribePlayerSessions_RequestParam requestParam;
			EGameLiftActivateStatus ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_requestParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_requestParam;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLAPI_DescribePlayerSessions_Activate_Statics::NewProp_requestParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGLAPI_DescribePlayerSessions_Activate_Statics::NewProp_requestParam = { "requestParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLAPI_DescribePlayerSessions_eventActivate_Parms, requestParam), Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam, METADATA_PARAMS(Z_Construct_UFunction_UGLAPI_DescribePlayerSessions_Activate_Statics::NewProp_requestParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLAPI_DescribePlayerSessions_Activate_Statics::NewProp_requestParam_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGLAPI_DescribePlayerSessions_Activate_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGLAPI_DescribePlayerSessions_Activate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLAPI_DescribePlayerSessions_eventActivate_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_EGameLiftActivateStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLAPI_DescribePlayerSessions_Activate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLAPI_DescribePlayerSessions_Activate_Statics::NewProp_requestParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLAPI_DescribePlayerSessions_Activate_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLAPI_DescribePlayerSessions_Activate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLAPI_DescribePlayerSessions_Activate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GLAPI_DescribePlayerSessions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLAPI_DescribePlayerSessions_Activate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLAPI_DescribePlayerSessions, nullptr, "Activate", nullptr, nullptr, sizeof(GLAPI_DescribePlayerSessions_eventActivate_Parms), Z_Construct_UFunction_UGLAPI_DescribePlayerSessions_Activate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLAPI_DescribePlayerSessions_Activate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLAPI_DescribePlayerSessions_Activate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLAPI_DescribePlayerSessions_Activate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLAPI_DescribePlayerSessions_Activate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGLAPI_DescribePlayerSessions_Activate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGLAPI_DescribePlayerSessions_NoRegister()
	{
		return UGLAPI_DescribePlayerSessions::StaticClass();
	}
	struct Z_Construct_UClass_UGLAPI_DescribePlayerSessions_Statics
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
	UObject* (*const Z_Construct_UClass_UGLAPI_DescribePlayerSessions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGLAPI_DescribePlayerSessions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGLAPI_DescribePlayerSessions_Activate, "Activate" }, // 1494949489
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLAPI_DescribePlayerSessions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GLAPI_DescribePlayerSessions.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GLAPI_DescribePlayerSessions.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLAPI_DescribePlayerSessions_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GLAPI_DescribePlayerSessions" },
		{ "ModuleRelativePath", "Public/GLAPI_DescribePlayerSessions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGLAPI_DescribePlayerSessions_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGLAPI_DescribePlayerSessions, OnSuccess), Z_Construct_UDelegateFunction_ABP_200508_OnDescribePlayerSessionsSuccess__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGLAPI_DescribePlayerSessions_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLAPI_DescribePlayerSessions_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLAPI_DescribePlayerSessions_Statics::NewProp_OnFailed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GLAPI_DescribePlayerSessions" },
		{ "ModuleRelativePath", "Public/GLAPI_DescribePlayerSessions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGLAPI_DescribePlayerSessions_Statics::NewProp_OnFailed = { "OnFailed", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGLAPI_DescribePlayerSessions, OnFailed), Z_Construct_UDelegateFunction_ABP_200508_OnFOnDescribePlayerSessionsFailed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGLAPI_DescribePlayerSessions_Statics::NewProp_OnFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLAPI_DescribePlayerSessions_Statics::NewProp_OnFailed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGLAPI_DescribePlayerSessions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLAPI_DescribePlayerSessions_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLAPI_DescribePlayerSessions_Statics::NewProp_OnFailed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGLAPI_DescribePlayerSessions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLAPI_DescribePlayerSessions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGLAPI_DescribePlayerSessions_Statics::ClassParams = {
		&UGLAPI_DescribePlayerSessions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGLAPI_DescribePlayerSessions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGLAPI_DescribePlayerSessions_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGLAPI_DescribePlayerSessions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGLAPI_DescribePlayerSessions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGLAPI_DescribePlayerSessions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGLAPI_DescribePlayerSessions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGLAPI_DescribePlayerSessions, 3719827047);
	template<> ABP_200508_API UClass* StaticClass<UGLAPI_DescribePlayerSessions>()
	{
		return UGLAPI_DescribePlayerSessions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGLAPI_DescribePlayerSessions(Z_Construct_UClass_UGLAPI_DescribePlayerSessions, &UGLAPI_DescribePlayerSessions::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UGLAPI_DescribePlayerSessions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGLAPI_DescribePlayerSessions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
