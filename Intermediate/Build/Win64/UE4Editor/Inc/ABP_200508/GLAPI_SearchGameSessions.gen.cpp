// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/GLAPI_SearchGameSessions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLAPI_SearchGameSessions() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UGLAPI_SearchGameSessions_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UGLAPI_SearchGameSessions();
	ABP_200508_API UClass* Z_Construct_UClass_UGLAPI_Base();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UGameLiftClientObject_NoRegister();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_OnSearchGameSessionsSuccess__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UGLAPI_SearchGameSessions::execSearchGameSessionsAPI)
	{
		P_GET_OBJECT(UGameLiftClientObject,Z_Param_client);
		P_GET_PROPERTY(FStrProperty,Z_Param_fleetId);
		P_GET_PROPERTY(FStrProperty,Z_Param_aliasID);
		P_GET_PROPERTY(FStrProperty,Z_Param_filterExpression);
		P_GET_PROPERTY(FStrProperty,Z_Param_sortExpression);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGLAPI_SearchGameSessions**)Z_Param__Result=UGLAPI_SearchGameSessions::SearchGameSessionsAPI(Z_Param_client,Z_Param_fleetId,Z_Param_aliasID,Z_Param_filterExpression,Z_Param_sortExpression);
		P_NATIVE_END;
	}
	void UGLAPI_SearchGameSessions::StaticRegisterNativesUGLAPI_SearchGameSessions()
	{
		UClass* Class = UGLAPI_SearchGameSessions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SearchGameSessionsAPI", &UGLAPI_SearchGameSessions::execSearchGameSessionsAPI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGLAPI_SearchGameSessions_SearchGameSessionsAPI_Statics
	{
		struct GLAPI_SearchGameSessions_eventSearchGameSessionsAPI_Parms
		{
			UGameLiftClientObject* client;
			FString fleetId;
			FString aliasID;
			FString filterExpression;
			FString sortExpression;
			UGLAPI_SearchGameSessions* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_client;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fleetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fleetId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_aliasID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_aliasID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_filterExpression_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_filterExpression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sortExpression_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sortExpression;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLAPI_SearchGameSessions_SearchGameSessionsAPI_Statics::NewProp_client = { "client", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLAPI_SearchGameSessions_eventSearchGameSessionsAPI_Parms, client), Z_Construct_UClass_UGameLiftClientObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLAPI_SearchGameSessions_SearchGameSessionsAPI_Statics::NewProp_fleetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLAPI_SearchGameSessions_SearchGameSessionsAPI_Statics::NewProp_fleetId = { "fleetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLAPI_SearchGameSessions_eventSearchGameSessionsAPI_Parms, fleetId), METADATA_PARAMS(Z_Construct_UFunction_UGLAPI_SearchGameSessions_SearchGameSessionsAPI_Statics::NewProp_fleetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLAPI_SearchGameSessions_SearchGameSessionsAPI_Statics::NewProp_fleetId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLAPI_SearchGameSessions_SearchGameSessionsAPI_Statics::NewProp_aliasID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLAPI_SearchGameSessions_SearchGameSessionsAPI_Statics::NewProp_aliasID = { "aliasID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLAPI_SearchGameSessions_eventSearchGameSessionsAPI_Parms, aliasID), METADATA_PARAMS(Z_Construct_UFunction_UGLAPI_SearchGameSessions_SearchGameSessionsAPI_Statics::NewProp_aliasID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLAPI_SearchGameSessions_SearchGameSessionsAPI_Statics::NewProp_aliasID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLAPI_SearchGameSessions_SearchGameSessionsAPI_Statics::NewProp_filterExpression_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLAPI_SearchGameSessions_SearchGameSessionsAPI_Statics::NewProp_filterExpression = { "filterExpression", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLAPI_SearchGameSessions_eventSearchGameSessionsAPI_Parms, filterExpression), METADATA_PARAMS(Z_Construct_UFunction_UGLAPI_SearchGameSessions_SearchGameSessionsAPI_Statics::NewProp_filterExpression_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLAPI_SearchGameSessions_SearchGameSessionsAPI_Statics::NewProp_filterExpression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLAPI_SearchGameSessions_SearchGameSessionsAPI_Statics::NewProp_sortExpression_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLAPI_SearchGameSessions_SearchGameSessionsAPI_Statics::NewProp_sortExpression = { "sortExpression", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLAPI_SearchGameSessions_eventSearchGameSessionsAPI_Parms, sortExpression), METADATA_PARAMS(Z_Construct_UFunction_UGLAPI_SearchGameSessions_SearchGameSessionsAPI_Statics::NewProp_sortExpression_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLAPI_SearchGameSessions_SearchGameSessionsAPI_Statics::NewProp_sortExpression_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLAPI_SearchGameSessions_SearchGameSessionsAPI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLAPI_SearchGameSessions_eventSearchGameSessionsAPI_Parms, ReturnValue), Z_Construct_UClass_UGLAPI_SearchGameSessions_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLAPI_SearchGameSessions_SearchGameSessionsAPI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLAPI_SearchGameSessions_SearchGameSessionsAPI_Statics::NewProp_client,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLAPI_SearchGameSessions_SearchGameSessionsAPI_Statics::NewProp_fleetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLAPI_SearchGameSessions_SearchGameSessionsAPI_Statics::NewProp_aliasID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLAPI_SearchGameSessions_SearchGameSessionsAPI_Statics::NewProp_filterExpression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLAPI_SearchGameSessions_SearchGameSessionsAPI_Statics::NewProp_sortExpression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLAPI_SearchGameSessions_SearchGameSessionsAPI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLAPI_SearchGameSessions_SearchGameSessionsAPI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GLAPI_SearchGameSessions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLAPI_SearchGameSessions_SearchGameSessionsAPI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLAPI_SearchGameSessions, nullptr, "SearchGameSessionsAPI", nullptr, nullptr, sizeof(GLAPI_SearchGameSessions_eventSearchGameSessionsAPI_Parms), Z_Construct_UFunction_UGLAPI_SearchGameSessions_SearchGameSessionsAPI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLAPI_SearchGameSessions_SearchGameSessionsAPI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLAPI_SearchGameSessions_SearchGameSessionsAPI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLAPI_SearchGameSessions_SearchGameSessionsAPI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLAPI_SearchGameSessions_SearchGameSessionsAPI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGLAPI_SearchGameSessions_SearchGameSessionsAPI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGLAPI_SearchGameSessions_NoRegister()
	{
		return UGLAPI_SearchGameSessions::StaticClass();
	}
	struct Z_Construct_UClass_UGLAPI_SearchGameSessions_Statics
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
	UObject* (*const Z_Construct_UClass_UGLAPI_SearchGameSessions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGLAPI_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGLAPI_SearchGameSessions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGLAPI_SearchGameSessions_SearchGameSessionsAPI, "SearchGameSessionsAPI" }, // 4200744447
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLAPI_SearchGameSessions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GLAPI_SearchGameSessions.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GLAPI_SearchGameSessions.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLAPI_SearchGameSessions_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GLAPI_SearchGameSessions" },
		{ "ModuleRelativePath", "Public/GLAPI_SearchGameSessions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGLAPI_SearchGameSessions_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGLAPI_SearchGameSessions, OnSuccess), Z_Construct_UDelegateFunction_ABP_200508_OnSearchGameSessionsSuccess__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGLAPI_SearchGameSessions_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLAPI_SearchGameSessions_Statics::NewProp_OnSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGLAPI_SearchGameSessions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLAPI_SearchGameSessions_Statics::NewProp_OnSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGLAPI_SearchGameSessions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLAPI_SearchGameSessions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGLAPI_SearchGameSessions_Statics::ClassParams = {
		&UGLAPI_SearchGameSessions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGLAPI_SearchGameSessions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGLAPI_SearchGameSessions_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGLAPI_SearchGameSessions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGLAPI_SearchGameSessions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGLAPI_SearchGameSessions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGLAPI_SearchGameSessions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGLAPI_SearchGameSessions, 3071594448);
	template<> ABP_200508_API UClass* StaticClass<UGLAPI_SearchGameSessions>()
	{
		return UGLAPI_SearchGameSessions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGLAPI_SearchGameSessions(Z_Construct_UClass_UGLAPI_SearchGameSessions, &UGLAPI_SearchGameSessions::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UGLAPI_SearchGameSessions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGLAPI_SearchGameSessions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
