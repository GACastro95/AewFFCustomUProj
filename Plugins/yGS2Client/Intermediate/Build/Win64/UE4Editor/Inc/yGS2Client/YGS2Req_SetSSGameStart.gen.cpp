// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/YGS2Req_SetSSGameStart.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYGS2Req_SetSSGameStart() {}
// Cross Module References
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2Req_SetSSGameStart_NoRegister();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2Req_SetSSGameStart();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2RequestBase();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FYGS2SSPlayerData();
// End Cross Module References
	DEFINE_FUNCTION(UYGS2Req_SetSSGameStart::execGetPlayerData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FYGS2SSPlayerData*)Z_Param__Result=P_THIS->GetPlayerData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_SetSSGameStart::execSetGameStartParam)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_gid);
		P_GET_PROPERTY(FStrProperty,Z_Param_pid);
		P_GET_PROPERTY(FStrProperty,Z_Param_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGameStartParam(Z_Param_gid,Z_Param_pid,Z_Param_Param);
		P_NATIVE_END;
	}
	void UYGS2Req_SetSSGameStart::StaticRegisterNativesUYGS2Req_SetSSGameStart()
	{
		UClass* Class = UYGS2Req_SetSSGameStart::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlayerData", &UYGS2Req_SetSSGameStart::execGetPlayerData },
			{ "SetGameStartParam", &UYGS2Req_SetSSGameStart::execSetGameStartParam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYGS2Req_SetSSGameStart_GetPlayerData_Statics
	{
		struct YGS2Req_SetSSGameStart_eventGetPlayerData_Parms
		{
			FYGS2SSPlayerData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYGS2Req_SetSSGameStart_GetPlayerData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_SetSSGameStart_eventGetPlayerData_Parms, ReturnValue), Z_Construct_UScriptStruct_FYGS2SSPlayerData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_SetSSGameStart_GetPlayerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_SetSSGameStart_GetPlayerData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_SetSSGameStart_GetPlayerData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_SetSSGameStart.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_SetSSGameStart_GetPlayerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_SetSSGameStart, nullptr, "GetPlayerData", nullptr, nullptr, sizeof(YGS2Req_SetSSGameStart_eventGetPlayerData_Parms), Z_Construct_UFunction_UYGS2Req_SetSSGameStart_GetPlayerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_SetSSGameStart_GetPlayerData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_SetSSGameStart_GetPlayerData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_SetSSGameStart_GetPlayerData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_SetSSGameStart_GetPlayerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_SetSSGameStart_GetPlayerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_SetSSGameStart_SetGameStartParam_Statics
	{
		struct YGS2Req_SetSSGameStart_eventSetGameStartParam_Parms
		{
			FString gid;
			FString pid;
			FString Param;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_gid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_pid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Param_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_SetSSGameStart_SetGameStartParam_Statics::NewProp_gid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_SetSSGameStart_SetGameStartParam_Statics::NewProp_gid = { "gid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_SetSSGameStart_eventSetGameStartParam_Parms, gid), METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_SetSSGameStart_SetGameStartParam_Statics::NewProp_gid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_SetSSGameStart_SetGameStartParam_Statics::NewProp_gid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_SetSSGameStart_SetGameStartParam_Statics::NewProp_pid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_SetSSGameStart_SetGameStartParam_Statics::NewProp_pid = { "pid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_SetSSGameStart_eventSetGameStartParam_Parms, pid), METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_SetSSGameStart_SetGameStartParam_Statics::NewProp_pid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_SetSSGameStart_SetGameStartParam_Statics::NewProp_pid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_SetSSGameStart_SetGameStartParam_Statics::NewProp_Param_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_SetSSGameStart_SetGameStartParam_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_SetSSGameStart_eventSetGameStartParam_Parms, Param), METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_SetSSGameStart_SetGameStartParam_Statics::NewProp_Param_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_SetSSGameStart_SetGameStartParam_Statics::NewProp_Param_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_SetSSGameStart_SetGameStartParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_SetSSGameStart_SetGameStartParam_Statics::NewProp_gid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_SetSSGameStart_SetGameStartParam_Statics::NewProp_pid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_SetSSGameStart_SetGameStartParam_Statics::NewProp_Param,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_SetSSGameStart_SetGameStartParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_SetSSGameStart.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_SetSSGameStart_SetGameStartParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_SetSSGameStart, nullptr, "SetGameStartParam", nullptr, nullptr, sizeof(YGS2Req_SetSSGameStart_eventSetGameStartParam_Parms), Z_Construct_UFunction_UYGS2Req_SetSSGameStart_SetGameStartParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_SetSSGameStart_SetGameStartParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_SetSSGameStart_SetGameStartParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_SetSSGameStart_SetGameStartParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_SetSSGameStart_SetGameStartParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_SetSSGameStart_SetGameStartParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYGS2Req_SetSSGameStart_NoRegister()
	{
		return UYGS2Req_SetSSGameStart::StaticClass();
	}
	struct Z_Construct_UClass_UYGS2Req_SetSSGameStart_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYGS2Req_SetSSGameStart_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UYGS2RequestBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yGS2Client,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYGS2Req_SetSSGameStart_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYGS2Req_SetSSGameStart_GetPlayerData, "GetPlayerData" }, // 2886704009
		{ &Z_Construct_UFunction_UYGS2Req_SetSSGameStart_SetGameStartParam, "SetGameStartParam" }, // 804588437
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYGS2Req_SetSSGameStart_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YGS2Req_SetSSGameStart.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YGS2Req_SetSSGameStart.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYGS2Req_SetSSGameStart_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYGS2Req_SetSSGameStart>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYGS2Req_SetSSGameStart_Statics::ClassParams = {
		&UYGS2Req_SetSSGameStart::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UYGS2Req_SetSSGameStart_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYGS2Req_SetSSGameStart_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYGS2Req_SetSSGameStart()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYGS2Req_SetSSGameStart_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYGS2Req_SetSSGameStart, 1268173205);
	template<> YGS2CLIENT_API UClass* StaticClass<UYGS2Req_SetSSGameStart>()
	{
		return UYGS2Req_SetSSGameStart::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYGS2Req_SetSSGameStart(Z_Construct_UClass_UYGS2Req_SetSSGameStart, &UYGS2Req_SetSSGameStart::StaticClass, TEXT("/Script/yGS2Client"), TEXT("UYGS2Req_SetSSGameStart"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYGS2Req_SetSSGameStart);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
