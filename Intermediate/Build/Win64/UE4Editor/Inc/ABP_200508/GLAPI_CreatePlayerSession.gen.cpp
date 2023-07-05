// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/GLAPI_CreatePlayerSession.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLAPI_CreatePlayerSession() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UGLAPI_CreatePlayerSession_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UGLAPI_CreatePlayerSession();
	ABP_200508_API UClass* Z_Construct_UClass_UGLAPI_Base();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UGameLiftClientObject_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCreatePlayerSession_RequestParam();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_OnCreatePlayerSessionSuccess__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UGLAPI_CreatePlayerSession::execCreatePlayerSession)
	{
		P_GET_OBJECT(UGameLiftClientObject,Z_Param_client);
		P_GET_STRUCT_REF(FCreatePlayerSession_RequestParam,Z_Param_Out_requestParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGLAPI_CreatePlayerSession**)Z_Param__Result=UGLAPI_CreatePlayerSession::CreatePlayerSession(Z_Param_client,Z_Param_Out_requestParam);
		P_NATIVE_END;
	}
	void UGLAPI_CreatePlayerSession::StaticRegisterNativesUGLAPI_CreatePlayerSession()
	{
		UClass* Class = UGLAPI_CreatePlayerSession::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreatePlayerSession", &UGLAPI_CreatePlayerSession::execCreatePlayerSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGLAPI_CreatePlayerSession_CreatePlayerSession_Statics
	{
		struct GLAPI_CreatePlayerSession_eventCreatePlayerSession_Parms
		{
			UGameLiftClientObject* client;
			FCreatePlayerSession_RequestParam requestParam;
			UGLAPI_CreatePlayerSession* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_client;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_requestParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_requestParam;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLAPI_CreatePlayerSession_CreatePlayerSession_Statics::NewProp_client = { "client", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLAPI_CreatePlayerSession_eventCreatePlayerSession_Parms, client), Z_Construct_UClass_UGameLiftClientObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLAPI_CreatePlayerSession_CreatePlayerSession_Statics::NewProp_requestParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGLAPI_CreatePlayerSession_CreatePlayerSession_Statics::NewProp_requestParam = { "requestParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLAPI_CreatePlayerSession_eventCreatePlayerSession_Parms, requestParam), Z_Construct_UScriptStruct_FCreatePlayerSession_RequestParam, METADATA_PARAMS(Z_Construct_UFunction_UGLAPI_CreatePlayerSession_CreatePlayerSession_Statics::NewProp_requestParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLAPI_CreatePlayerSession_CreatePlayerSession_Statics::NewProp_requestParam_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLAPI_CreatePlayerSession_CreatePlayerSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLAPI_CreatePlayerSession_eventCreatePlayerSession_Parms, ReturnValue), Z_Construct_UClass_UGLAPI_CreatePlayerSession_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLAPI_CreatePlayerSession_CreatePlayerSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLAPI_CreatePlayerSession_CreatePlayerSession_Statics::NewProp_client,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLAPI_CreatePlayerSession_CreatePlayerSession_Statics::NewProp_requestParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLAPI_CreatePlayerSession_CreatePlayerSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLAPI_CreatePlayerSession_CreatePlayerSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GLAPI_CreatePlayerSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLAPI_CreatePlayerSession_CreatePlayerSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLAPI_CreatePlayerSession, nullptr, "CreatePlayerSession", nullptr, nullptr, sizeof(GLAPI_CreatePlayerSession_eventCreatePlayerSession_Parms), Z_Construct_UFunction_UGLAPI_CreatePlayerSession_CreatePlayerSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLAPI_CreatePlayerSession_CreatePlayerSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLAPI_CreatePlayerSession_CreatePlayerSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLAPI_CreatePlayerSession_CreatePlayerSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLAPI_CreatePlayerSession_CreatePlayerSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGLAPI_CreatePlayerSession_CreatePlayerSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGLAPI_CreatePlayerSession_NoRegister()
	{
		return UGLAPI_CreatePlayerSession::StaticClass();
	}
	struct Z_Construct_UClass_UGLAPI_CreatePlayerSession_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGLAPI_CreatePlayerSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGLAPI_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGLAPI_CreatePlayerSession_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGLAPI_CreatePlayerSession_CreatePlayerSession, "CreatePlayerSession" }, // 1281627535
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLAPI_CreatePlayerSession_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GLAPI_CreatePlayerSession.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GLAPI_CreatePlayerSession.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLAPI_CreatePlayerSession_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GLAPI_CreatePlayerSession" },
		{ "ModuleRelativePath", "Public/GLAPI_CreatePlayerSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGLAPI_CreatePlayerSession_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGLAPI_CreatePlayerSession, OnSuccess), Z_Construct_UDelegateFunction_ABP_200508_OnCreatePlayerSessionSuccess__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGLAPI_CreatePlayerSession_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLAPI_CreatePlayerSession_Statics::NewProp_OnSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGLAPI_CreatePlayerSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLAPI_CreatePlayerSession_Statics::NewProp_OnSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGLAPI_CreatePlayerSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLAPI_CreatePlayerSession>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGLAPI_CreatePlayerSession_Statics::ClassParams = {
		&UGLAPI_CreatePlayerSession::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGLAPI_CreatePlayerSession_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGLAPI_CreatePlayerSession_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGLAPI_CreatePlayerSession_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGLAPI_CreatePlayerSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGLAPI_CreatePlayerSession()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGLAPI_CreatePlayerSession_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGLAPI_CreatePlayerSession, 1715792328);
	template<> ABP_200508_API UClass* StaticClass<UGLAPI_CreatePlayerSession>()
	{
		return UGLAPI_CreatePlayerSession::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGLAPI_CreatePlayerSession(Z_Construct_UClass_UGLAPI_CreatePlayerSession, &UGLAPI_CreatePlayerSession::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UGLAPI_CreatePlayerSession"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGLAPI_CreatePlayerSession);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
