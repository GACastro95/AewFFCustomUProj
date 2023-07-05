// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/YGS2Req_GetSSInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYGS2Req_GetSSInfo() {}
// Cross Module References
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2Req_GetSSInfo_NoRegister();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2Req_GetSSInfo();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2RequestBase();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
// End Cross Module References
	DEFINE_FUNCTION(UYGS2Req_GetSSInfo::execGetLobbyTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLobbyTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_GetSSInfo::execGetPlayerMax)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlayerMax();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_GetSSInfo::execGetPlayerMin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlayerMin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_GetSSInfo::execSetStage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_stage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStage(Z_Param_stage);
		P_NATIVE_END;
	}
	void UYGS2Req_GetSSInfo::StaticRegisterNativesUYGS2Req_GetSSInfo()
	{
		UClass* Class = UYGS2Req_GetSSInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLobbyTime", &UYGS2Req_GetSSInfo::execGetLobbyTime },
			{ "GetPlayerMax", &UYGS2Req_GetSSInfo::execGetPlayerMax },
			{ "GetPlayerMin", &UYGS2Req_GetSSInfo::execGetPlayerMin },
			{ "SetStage", &UYGS2Req_GetSSInfo::execSetStage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYGS2Req_GetSSInfo_GetLobbyTime_Statics
	{
		struct YGS2Req_GetSSInfo_eventGetLobbyTime_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_GetSSInfo_GetLobbyTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_GetSSInfo_eventGetLobbyTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_GetSSInfo_GetLobbyTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_GetSSInfo_GetLobbyTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_GetSSInfo_GetLobbyTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_GetSSInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_GetSSInfo_GetLobbyTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_GetSSInfo, nullptr, "GetLobbyTime", nullptr, nullptr, sizeof(YGS2Req_GetSSInfo_eventGetLobbyTime_Parms), Z_Construct_UFunction_UYGS2Req_GetSSInfo_GetLobbyTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_GetSSInfo_GetLobbyTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_GetSSInfo_GetLobbyTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_GetSSInfo_GetLobbyTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_GetSSInfo_GetLobbyTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_GetSSInfo_GetLobbyTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_GetSSInfo_GetPlayerMax_Statics
	{
		struct YGS2Req_GetSSInfo_eventGetPlayerMax_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_GetSSInfo_GetPlayerMax_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_GetSSInfo_eventGetPlayerMax_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_GetSSInfo_GetPlayerMax_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_GetSSInfo_GetPlayerMax_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_GetSSInfo_GetPlayerMax_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_GetSSInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_GetSSInfo_GetPlayerMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_GetSSInfo, nullptr, "GetPlayerMax", nullptr, nullptr, sizeof(YGS2Req_GetSSInfo_eventGetPlayerMax_Parms), Z_Construct_UFunction_UYGS2Req_GetSSInfo_GetPlayerMax_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_GetSSInfo_GetPlayerMax_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_GetSSInfo_GetPlayerMax_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_GetSSInfo_GetPlayerMax_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_GetSSInfo_GetPlayerMax()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_GetSSInfo_GetPlayerMax_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_GetSSInfo_GetPlayerMin_Statics
	{
		struct YGS2Req_GetSSInfo_eventGetPlayerMin_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_GetSSInfo_GetPlayerMin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_GetSSInfo_eventGetPlayerMin_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_GetSSInfo_GetPlayerMin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_GetSSInfo_GetPlayerMin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_GetSSInfo_GetPlayerMin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_GetSSInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_GetSSInfo_GetPlayerMin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_GetSSInfo, nullptr, "GetPlayerMin", nullptr, nullptr, sizeof(YGS2Req_GetSSInfo_eventGetPlayerMin_Parms), Z_Construct_UFunction_UYGS2Req_GetSSInfo_GetPlayerMin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_GetSSInfo_GetPlayerMin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_GetSSInfo_GetPlayerMin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_GetSSInfo_GetPlayerMin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_GetSSInfo_GetPlayerMin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_GetSSInfo_GetPlayerMin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_GetSSInfo_SetStage_Statics
	{
		struct YGS2Req_GetSSInfo_eventSetStage_Parms
		{
			FString stage;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_stage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_GetSSInfo_SetStage_Statics::NewProp_stage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_GetSSInfo_SetStage_Statics::NewProp_stage = { "stage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_GetSSInfo_eventSetStage_Parms, stage), METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_GetSSInfo_SetStage_Statics::NewProp_stage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_GetSSInfo_SetStage_Statics::NewProp_stage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_GetSSInfo_SetStage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_GetSSInfo_SetStage_Statics::NewProp_stage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_GetSSInfo_SetStage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_GetSSInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_GetSSInfo_SetStage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_GetSSInfo, nullptr, "SetStage", nullptr, nullptr, sizeof(YGS2Req_GetSSInfo_eventSetStage_Parms), Z_Construct_UFunction_UYGS2Req_GetSSInfo_SetStage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_GetSSInfo_SetStage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_GetSSInfo_SetStage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_GetSSInfo_SetStage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_GetSSInfo_SetStage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_GetSSInfo_SetStage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYGS2Req_GetSSInfo_NoRegister()
	{
		return UYGS2Req_GetSSInfo::StaticClass();
	}
	struct Z_Construct_UClass_UYGS2Req_GetSSInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYGS2Req_GetSSInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UYGS2RequestBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yGS2Client,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYGS2Req_GetSSInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYGS2Req_GetSSInfo_GetLobbyTime, "GetLobbyTime" }, // 2964349004
		{ &Z_Construct_UFunction_UYGS2Req_GetSSInfo_GetPlayerMax, "GetPlayerMax" }, // 3852366420
		{ &Z_Construct_UFunction_UYGS2Req_GetSSInfo_GetPlayerMin, "GetPlayerMin" }, // 1382464351
		{ &Z_Construct_UFunction_UYGS2Req_GetSSInfo_SetStage, "SetStage" }, // 593585929
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYGS2Req_GetSSInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YGS2Req_GetSSInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YGS2Req_GetSSInfo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYGS2Req_GetSSInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYGS2Req_GetSSInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYGS2Req_GetSSInfo_Statics::ClassParams = {
		&UYGS2Req_GetSSInfo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UYGS2Req_GetSSInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYGS2Req_GetSSInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYGS2Req_GetSSInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYGS2Req_GetSSInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYGS2Req_GetSSInfo, 2284154128);
	template<> YGS2CLIENT_API UClass* StaticClass<UYGS2Req_GetSSInfo>()
	{
		return UYGS2Req_GetSSInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYGS2Req_GetSSInfo(Z_Construct_UClass_UYGS2Req_GetSSInfo, &UYGS2Req_GetSSInfo::StaticClass, TEXT("/Script/yGS2Client"), TEXT("UYGS2Req_GetSSInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYGS2Req_GetSSInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
