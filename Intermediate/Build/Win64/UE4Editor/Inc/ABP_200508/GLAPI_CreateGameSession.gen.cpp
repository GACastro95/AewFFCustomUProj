// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/GLAPI_CreateGameSession.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLAPI_CreateGameSession() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UGLAPI_CreateGameSession_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UGLAPI_CreateGameSession();
	ABP_200508_API UClass* Z_Construct_UClass_UGLAPI_Base();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UGameLiftClientObject_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCreateGameSession_RequestParam();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_OnCreateGameSessionSuccess__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UGLAPI_CreateGameSession::execCreateGameSessionAPI)
	{
		P_GET_OBJECT(UGameLiftClientObject,Z_Param_client);
		P_GET_STRUCT(FCreateGameSession_RequestParam,Z_Param_createConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGLAPI_CreateGameSession**)Z_Param__Result=UGLAPI_CreateGameSession::CreateGameSessionAPI(Z_Param_client,Z_Param_createConfig);
		P_NATIVE_END;
	}
	void UGLAPI_CreateGameSession::StaticRegisterNativesUGLAPI_CreateGameSession()
	{
		UClass* Class = UGLAPI_CreateGameSession::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateGameSessionAPI", &UGLAPI_CreateGameSession::execCreateGameSessionAPI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGLAPI_CreateGameSession_CreateGameSessionAPI_Statics
	{
		struct GLAPI_CreateGameSession_eventCreateGameSessionAPI_Parms
		{
			UGameLiftClientObject* client;
			FCreateGameSession_RequestParam createConfig;
			UGLAPI_CreateGameSession* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_client;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_createConfig;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLAPI_CreateGameSession_CreateGameSessionAPI_Statics::NewProp_client = { "client", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLAPI_CreateGameSession_eventCreateGameSessionAPI_Parms, client), Z_Construct_UClass_UGameLiftClientObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGLAPI_CreateGameSession_CreateGameSessionAPI_Statics::NewProp_createConfig = { "createConfig", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLAPI_CreateGameSession_eventCreateGameSessionAPI_Parms, createConfig), Z_Construct_UScriptStruct_FCreateGameSession_RequestParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLAPI_CreateGameSession_CreateGameSessionAPI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLAPI_CreateGameSession_eventCreateGameSessionAPI_Parms, ReturnValue), Z_Construct_UClass_UGLAPI_CreateGameSession_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLAPI_CreateGameSession_CreateGameSessionAPI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLAPI_CreateGameSession_CreateGameSessionAPI_Statics::NewProp_client,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLAPI_CreateGameSession_CreateGameSessionAPI_Statics::NewProp_createConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLAPI_CreateGameSession_CreateGameSessionAPI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLAPI_CreateGameSession_CreateGameSessionAPI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GLAPI_CreateGameSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLAPI_CreateGameSession_CreateGameSessionAPI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLAPI_CreateGameSession, nullptr, "CreateGameSessionAPI", nullptr, nullptr, sizeof(GLAPI_CreateGameSession_eventCreateGameSessionAPI_Parms), Z_Construct_UFunction_UGLAPI_CreateGameSession_CreateGameSessionAPI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLAPI_CreateGameSession_CreateGameSessionAPI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLAPI_CreateGameSession_CreateGameSessionAPI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLAPI_CreateGameSession_CreateGameSessionAPI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLAPI_CreateGameSession_CreateGameSessionAPI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGLAPI_CreateGameSession_CreateGameSessionAPI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGLAPI_CreateGameSession_NoRegister()
	{
		return UGLAPI_CreateGameSession::StaticClass();
	}
	struct Z_Construct_UClass_UGLAPI_CreateGameSession_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onCreateGameSession_Success_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onCreateGameSession_Success;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGLAPI_CreateGameSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGLAPI_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGLAPI_CreateGameSession_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGLAPI_CreateGameSession_CreateGameSessionAPI, "CreateGameSessionAPI" }, // 2736579453
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLAPI_CreateGameSession_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GLAPI_CreateGameSession.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GLAPI_CreateGameSession.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLAPI_CreateGameSession_Statics::NewProp_onCreateGameSession_Success_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GLAPI_CreateGameSession" },
		{ "ModuleRelativePath", "Public/GLAPI_CreateGameSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGLAPI_CreateGameSession_Statics::NewProp_onCreateGameSession_Success = { "onCreateGameSession_Success", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGLAPI_CreateGameSession, onCreateGameSession_Success), Z_Construct_UDelegateFunction_ABP_200508_OnCreateGameSessionSuccess__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGLAPI_CreateGameSession_Statics::NewProp_onCreateGameSession_Success_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLAPI_CreateGameSession_Statics::NewProp_onCreateGameSession_Success_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGLAPI_CreateGameSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLAPI_CreateGameSession_Statics::NewProp_onCreateGameSession_Success,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGLAPI_CreateGameSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLAPI_CreateGameSession>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGLAPI_CreateGameSession_Statics::ClassParams = {
		&UGLAPI_CreateGameSession::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGLAPI_CreateGameSession_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGLAPI_CreateGameSession_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGLAPI_CreateGameSession_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGLAPI_CreateGameSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGLAPI_CreateGameSession()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGLAPI_CreateGameSession_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGLAPI_CreateGameSession, 1232929384);
	template<> ABP_200508_API UClass* StaticClass<UGLAPI_CreateGameSession>()
	{
		return UGLAPI_CreateGameSession::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGLAPI_CreateGameSession(Z_Construct_UClass_UGLAPI_CreateGameSession, &UGLAPI_CreateGameSession::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UGLAPI_CreateGameSession"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGLAPI_CreateGameSession);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
