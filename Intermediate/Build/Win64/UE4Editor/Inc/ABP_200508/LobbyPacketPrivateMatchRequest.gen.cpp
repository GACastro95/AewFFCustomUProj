// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/LobbyPacketPrivateMatchRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyPacketPrivateMatchRequest() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_ULobbyPacketPrivateMatchRequest_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_ULobbyPacketPrivateMatchRequest();
	ABP_200508_API UClass* Z_Construct_UClass_ULobbyPacketBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(ULobbyPacketPrivateMatchRequest::execGetMatchParam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMatchParam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULobbyPacketPrivateMatchRequest::execGetMatchType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMatchType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULobbyPacketPrivateMatchRequest::execGetOnlineModeType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetOnlineModeType();
		P_NATIVE_END;
	}
	void ULobbyPacketPrivateMatchRequest::StaticRegisterNativesULobbyPacketPrivateMatchRequest()
	{
		UClass* Class = ULobbyPacketPrivateMatchRequest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMatchParam", &ULobbyPacketPrivateMatchRequest::execGetMatchParam },
			{ "GetMatchType", &ULobbyPacketPrivateMatchRequest::execGetMatchType },
			{ "GetOnlineModeType", &ULobbyPacketPrivateMatchRequest::execGetOnlineModeType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULobbyPacketPrivateMatchRequest_GetMatchParam_Statics
	{
		struct LobbyPacketPrivateMatchRequest_eventGetMatchParam_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULobbyPacketPrivateMatchRequest_GetMatchParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LobbyPacketPrivateMatchRequest_eventGetMatchParam_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULobbyPacketPrivateMatchRequest_GetMatchParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULobbyPacketPrivateMatchRequest_GetMatchParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULobbyPacketPrivateMatchRequest_GetMatchParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LobbyPacketPrivateMatchRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULobbyPacketPrivateMatchRequest_GetMatchParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULobbyPacketPrivateMatchRequest, nullptr, "GetMatchParam", nullptr, nullptr, sizeof(LobbyPacketPrivateMatchRequest_eventGetMatchParam_Parms), Z_Construct_UFunction_ULobbyPacketPrivateMatchRequest_GetMatchParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyPacketPrivateMatchRequest_GetMatchParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULobbyPacketPrivateMatchRequest_GetMatchParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyPacketPrivateMatchRequest_GetMatchParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULobbyPacketPrivateMatchRequest_GetMatchParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULobbyPacketPrivateMatchRequest_GetMatchParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULobbyPacketPrivateMatchRequest_GetMatchType_Statics
	{
		struct LobbyPacketPrivateMatchRequest_eventGetMatchType_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULobbyPacketPrivateMatchRequest_GetMatchType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LobbyPacketPrivateMatchRequest_eventGetMatchType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULobbyPacketPrivateMatchRequest_GetMatchType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULobbyPacketPrivateMatchRequest_GetMatchType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULobbyPacketPrivateMatchRequest_GetMatchType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LobbyPacketPrivateMatchRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULobbyPacketPrivateMatchRequest_GetMatchType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULobbyPacketPrivateMatchRequest, nullptr, "GetMatchType", nullptr, nullptr, sizeof(LobbyPacketPrivateMatchRequest_eventGetMatchType_Parms), Z_Construct_UFunction_ULobbyPacketPrivateMatchRequest_GetMatchType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyPacketPrivateMatchRequest_GetMatchType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULobbyPacketPrivateMatchRequest_GetMatchType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyPacketPrivateMatchRequest_GetMatchType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULobbyPacketPrivateMatchRequest_GetMatchType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULobbyPacketPrivateMatchRequest_GetMatchType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULobbyPacketPrivateMatchRequest_GetOnlineModeType_Statics
	{
		struct LobbyPacketPrivateMatchRequest_eventGetOnlineModeType_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULobbyPacketPrivateMatchRequest_GetOnlineModeType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LobbyPacketPrivateMatchRequest_eventGetOnlineModeType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULobbyPacketPrivateMatchRequest_GetOnlineModeType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULobbyPacketPrivateMatchRequest_GetOnlineModeType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULobbyPacketPrivateMatchRequest_GetOnlineModeType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LobbyPacketPrivateMatchRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULobbyPacketPrivateMatchRequest_GetOnlineModeType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULobbyPacketPrivateMatchRequest, nullptr, "GetOnlineModeType", nullptr, nullptr, sizeof(LobbyPacketPrivateMatchRequest_eventGetOnlineModeType_Parms), Z_Construct_UFunction_ULobbyPacketPrivateMatchRequest_GetOnlineModeType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyPacketPrivateMatchRequest_GetOnlineModeType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULobbyPacketPrivateMatchRequest_GetOnlineModeType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyPacketPrivateMatchRequest_GetOnlineModeType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULobbyPacketPrivateMatchRequest_GetOnlineModeType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULobbyPacketPrivateMatchRequest_GetOnlineModeType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULobbyPacketPrivateMatchRequest_NoRegister()
	{
		return ULobbyPacketPrivateMatchRequest::StaticClass();
	}
	struct Z_Construct_UClass_ULobbyPacketPrivateMatchRequest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlineModeType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OnlineModeType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MatchType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MatchParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULobbyPacketPrivateMatchRequest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULobbyPacketBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULobbyPacketPrivateMatchRequest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULobbyPacketPrivateMatchRequest_GetMatchParam, "GetMatchParam" }, // 2859788234
		{ &Z_Construct_UFunction_ULobbyPacketPrivateMatchRequest_GetMatchType, "GetMatchType" }, // 2894078298
		{ &Z_Construct_UFunction_ULobbyPacketPrivateMatchRequest_GetOnlineModeType, "GetOnlineModeType" }, // 1192982202
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULobbyPacketPrivateMatchRequest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LobbyPacketPrivateMatchRequest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LobbyPacketPrivateMatchRequest.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULobbyPacketPrivateMatchRequest_Statics::NewProp_OnlineModeType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyPacketPrivateMatchRequest" },
		{ "ModuleRelativePath", "Public/LobbyPacketPrivateMatchRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULobbyPacketPrivateMatchRequest_Statics::NewProp_OnlineModeType = { "OnlineModeType", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULobbyPacketPrivateMatchRequest, OnlineModeType), METADATA_PARAMS(Z_Construct_UClass_ULobbyPacketPrivateMatchRequest_Statics::NewProp_OnlineModeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyPacketPrivateMatchRequest_Statics::NewProp_OnlineModeType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULobbyPacketPrivateMatchRequest_Statics::NewProp_MatchType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyPacketPrivateMatchRequest" },
		{ "ModuleRelativePath", "Public/LobbyPacketPrivateMatchRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULobbyPacketPrivateMatchRequest_Statics::NewProp_MatchType = { "MatchType", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULobbyPacketPrivateMatchRequest, MatchType), METADATA_PARAMS(Z_Construct_UClass_ULobbyPacketPrivateMatchRequest_Statics::NewProp_MatchType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyPacketPrivateMatchRequest_Statics::NewProp_MatchType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULobbyPacketPrivateMatchRequest_Statics::NewProp_MatchParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyPacketPrivateMatchRequest" },
		{ "ModuleRelativePath", "Public/LobbyPacketPrivateMatchRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULobbyPacketPrivateMatchRequest_Statics::NewProp_MatchParam = { "MatchParam", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULobbyPacketPrivateMatchRequest, MatchParam), METADATA_PARAMS(Z_Construct_UClass_ULobbyPacketPrivateMatchRequest_Statics::NewProp_MatchParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyPacketPrivateMatchRequest_Statics::NewProp_MatchParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULobbyPacketPrivateMatchRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyPacketPrivateMatchRequest_Statics::NewProp_OnlineModeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyPacketPrivateMatchRequest_Statics::NewProp_MatchType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyPacketPrivateMatchRequest_Statics::NewProp_MatchParam,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULobbyPacketPrivateMatchRequest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULobbyPacketPrivateMatchRequest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULobbyPacketPrivateMatchRequest_Statics::ClassParams = {
		&ULobbyPacketPrivateMatchRequest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULobbyPacketPrivateMatchRequest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyPacketPrivateMatchRequest_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULobbyPacketPrivateMatchRequest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyPacketPrivateMatchRequest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULobbyPacketPrivateMatchRequest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULobbyPacketPrivateMatchRequest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULobbyPacketPrivateMatchRequest, 3967979136);
	template<> ABP_200508_API UClass* StaticClass<ULobbyPacketPrivateMatchRequest>()
	{
		return ULobbyPacketPrivateMatchRequest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULobbyPacketPrivateMatchRequest(Z_Construct_UClass_ULobbyPacketPrivateMatchRequest, &ULobbyPacketPrivateMatchRequest::StaticClass, TEXT("/Script/ABP_200508"), TEXT("ULobbyPacketPrivateMatchRequest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULobbyPacketPrivateMatchRequest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
