// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/YGS2Req_Ping.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYGS2Req_Ping() {}
// Cross Module References
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2Req_Ping_NoRegister();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2Req_Ping();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2RequestBase();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
// End Cross Module References
	DEFINE_FUNCTION(UYGS2Req_Ping::execGetAreaName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAreaName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_Ping::execGetPingDownTime_MicroSeconds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPingDownTime_MicroSeconds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_Ping::execGetPingTime_MicroSeconds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPingTime_MicroSeconds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_Ping::execGetPingUpTime_MicroSeconds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPingUpTime_MicroSeconds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_Ping::execSetAreaName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__AreaName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAreaName(Z_Param__AreaName);
		P_NATIVE_END;
	}
	void UYGS2Req_Ping::StaticRegisterNativesUYGS2Req_Ping()
	{
		UClass* Class = UYGS2Req_Ping::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAreaName", &UYGS2Req_Ping::execGetAreaName },
			{ "GetPingDownTime_MicroSeconds", &UYGS2Req_Ping::execGetPingDownTime_MicroSeconds },
			{ "GetPingTime_MicroSeconds", &UYGS2Req_Ping::execGetPingTime_MicroSeconds },
			{ "GetPingUpTime_MicroSeconds", &UYGS2Req_Ping::execGetPingUpTime_MicroSeconds },
			{ "SetAreaName", &UYGS2Req_Ping::execSetAreaName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYGS2Req_Ping_GetAreaName_Statics
	{
		struct YGS2Req_Ping_eventGetAreaName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_Ping_GetAreaName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_Ping_eventGetAreaName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_Ping_GetAreaName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_Ping_GetAreaName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_Ping_GetAreaName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_Ping.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_Ping_GetAreaName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_Ping, nullptr, "GetAreaName", nullptr, nullptr, sizeof(YGS2Req_Ping_eventGetAreaName_Parms), Z_Construct_UFunction_UYGS2Req_Ping_GetAreaName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_Ping_GetAreaName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_Ping_GetAreaName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_Ping_GetAreaName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_Ping_GetAreaName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_Ping_GetAreaName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_Ping_GetPingDownTime_MicroSeconds_Statics
	{
		struct YGS2Req_Ping_eventGetPingDownTime_MicroSeconds_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_Ping_GetPingDownTime_MicroSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_Ping_eventGetPingDownTime_MicroSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_Ping_GetPingDownTime_MicroSeconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_Ping_GetPingDownTime_MicroSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_Ping_GetPingDownTime_MicroSeconds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_Ping.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_Ping_GetPingDownTime_MicroSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_Ping, nullptr, "GetPingDownTime_MicroSeconds", nullptr, nullptr, sizeof(YGS2Req_Ping_eventGetPingDownTime_MicroSeconds_Parms), Z_Construct_UFunction_UYGS2Req_Ping_GetPingDownTime_MicroSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_Ping_GetPingDownTime_MicroSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_Ping_GetPingDownTime_MicroSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_Ping_GetPingDownTime_MicroSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_Ping_GetPingDownTime_MicroSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_Ping_GetPingDownTime_MicroSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_Ping_GetPingTime_MicroSeconds_Statics
	{
		struct YGS2Req_Ping_eventGetPingTime_MicroSeconds_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_Ping_GetPingTime_MicroSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_Ping_eventGetPingTime_MicroSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_Ping_GetPingTime_MicroSeconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_Ping_GetPingTime_MicroSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_Ping_GetPingTime_MicroSeconds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_Ping.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_Ping_GetPingTime_MicroSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_Ping, nullptr, "GetPingTime_MicroSeconds", nullptr, nullptr, sizeof(YGS2Req_Ping_eventGetPingTime_MicroSeconds_Parms), Z_Construct_UFunction_UYGS2Req_Ping_GetPingTime_MicroSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_Ping_GetPingTime_MicroSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_Ping_GetPingTime_MicroSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_Ping_GetPingTime_MicroSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_Ping_GetPingTime_MicroSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_Ping_GetPingTime_MicroSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_Ping_GetPingUpTime_MicroSeconds_Statics
	{
		struct YGS2Req_Ping_eventGetPingUpTime_MicroSeconds_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_Ping_GetPingUpTime_MicroSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_Ping_eventGetPingUpTime_MicroSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_Ping_GetPingUpTime_MicroSeconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_Ping_GetPingUpTime_MicroSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_Ping_GetPingUpTime_MicroSeconds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_Ping.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_Ping_GetPingUpTime_MicroSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_Ping, nullptr, "GetPingUpTime_MicroSeconds", nullptr, nullptr, sizeof(YGS2Req_Ping_eventGetPingUpTime_MicroSeconds_Parms), Z_Construct_UFunction_UYGS2Req_Ping_GetPingUpTime_MicroSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_Ping_GetPingUpTime_MicroSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_Ping_GetPingUpTime_MicroSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_Ping_GetPingUpTime_MicroSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_Ping_GetPingUpTime_MicroSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_Ping_GetPingUpTime_MicroSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_Ping_SetAreaName_Statics
	{
		struct YGS2Req_Ping_eventSetAreaName_Parms
		{
			FString _AreaName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__AreaName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__AreaName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_Ping_SetAreaName_Statics::NewProp__AreaName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_Ping_SetAreaName_Statics::NewProp__AreaName = { "_AreaName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_Ping_eventSetAreaName_Parms, _AreaName), METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_Ping_SetAreaName_Statics::NewProp__AreaName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_Ping_SetAreaName_Statics::NewProp__AreaName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_Ping_SetAreaName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_Ping_SetAreaName_Statics::NewProp__AreaName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_Ping_SetAreaName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_Ping.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_Ping_SetAreaName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_Ping, nullptr, "SetAreaName", nullptr, nullptr, sizeof(YGS2Req_Ping_eventSetAreaName_Parms), Z_Construct_UFunction_UYGS2Req_Ping_SetAreaName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_Ping_SetAreaName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_Ping_SetAreaName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_Ping_SetAreaName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_Ping_SetAreaName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_Ping_SetAreaName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYGS2Req_Ping_NoRegister()
	{
		return UYGS2Req_Ping::StaticClass();
	}
	struct Z_Construct_UClass_UYGS2Req_Ping_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_strAreaName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_strAreaName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYGS2Req_Ping_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UYGS2RequestBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yGS2Client,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYGS2Req_Ping_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYGS2Req_Ping_GetAreaName, "GetAreaName" }, // 3897270655
		{ &Z_Construct_UFunction_UYGS2Req_Ping_GetPingDownTime_MicroSeconds, "GetPingDownTime_MicroSeconds" }, // 564643578
		{ &Z_Construct_UFunction_UYGS2Req_Ping_GetPingTime_MicroSeconds, "GetPingTime_MicroSeconds" }, // 2390228112
		{ &Z_Construct_UFunction_UYGS2Req_Ping_GetPingUpTime_MicroSeconds, "GetPingUpTime_MicroSeconds" }, // 2845167772
		{ &Z_Construct_UFunction_UYGS2Req_Ping_SetAreaName, "SetAreaName" }, // 3239177240
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYGS2Req_Ping_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YGS2Req_Ping.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YGS2Req_Ping.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYGS2Req_Ping_Statics::NewProp_m_strAreaName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Req_Ping" },
		{ "ModuleRelativePath", "Public/YGS2Req_Ping.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UYGS2Req_Ping_Statics::NewProp_m_strAreaName = { "m_strAreaName", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYGS2Req_Ping, m_strAreaName), METADATA_PARAMS(Z_Construct_UClass_UYGS2Req_Ping_Statics::NewProp_m_strAreaName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYGS2Req_Ping_Statics::NewProp_m_strAreaName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYGS2Req_Ping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYGS2Req_Ping_Statics::NewProp_m_strAreaName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYGS2Req_Ping_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYGS2Req_Ping>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYGS2Req_Ping_Statics::ClassParams = {
		&UYGS2Req_Ping::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UYGS2Req_Ping_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UYGS2Req_Ping_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UYGS2Req_Ping_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYGS2Req_Ping_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYGS2Req_Ping()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYGS2Req_Ping_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYGS2Req_Ping, 4293137573);
	template<> YGS2CLIENT_API UClass* StaticClass<UYGS2Req_Ping>()
	{
		return UYGS2Req_Ping::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYGS2Req_Ping(Z_Construct_UClass_UYGS2Req_Ping, &UYGS2Req_Ping::StaticClass, TEXT("/Script/yGS2Client"), TEXT("UYGS2Req_Ping"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYGS2Req_Ping);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
