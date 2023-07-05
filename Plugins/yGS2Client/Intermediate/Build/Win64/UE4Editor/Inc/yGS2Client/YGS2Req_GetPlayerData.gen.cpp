// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/YGS2Req_GetPlayerData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYGS2Req_GetPlayerData() {}
// Cross Module References
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2Req_GetPlayerData_NoRegister();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2Req_GetPlayerData();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2RequestBase();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
// End Cross Module References
	DEFINE_FUNCTION(UYGS2Req_GetPlayerData::execGetAEWGold)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAEWGold();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_GetPlayerData::execGetAEWGoldTotal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAEWGoldTotal();
		P_NATIVE_END;
	}
	void UYGS2Req_GetPlayerData::StaticRegisterNativesUYGS2Req_GetPlayerData()
	{
		UClass* Class = UYGS2Req_GetPlayerData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAEWGold", &UYGS2Req_GetPlayerData::execGetAEWGold },
			{ "GetAEWGoldTotal", &UYGS2Req_GetPlayerData::execGetAEWGoldTotal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYGS2Req_GetPlayerData_GetAEWGold_Statics
	{
		struct YGS2Req_GetPlayerData_eventGetAEWGold_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_GetPlayerData_GetAEWGold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_GetPlayerData_eventGetAEWGold_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_GetPlayerData_GetAEWGold_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_GetPlayerData_GetAEWGold_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_GetPlayerData_GetAEWGold_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_GetPlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_GetPlayerData_GetAEWGold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_GetPlayerData, nullptr, "GetAEWGold", nullptr, nullptr, sizeof(YGS2Req_GetPlayerData_eventGetAEWGold_Parms), Z_Construct_UFunction_UYGS2Req_GetPlayerData_GetAEWGold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_GetPlayerData_GetAEWGold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_GetPlayerData_GetAEWGold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_GetPlayerData_GetAEWGold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_GetPlayerData_GetAEWGold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_GetPlayerData_GetAEWGold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_GetPlayerData_GetAEWGoldTotal_Statics
	{
		struct YGS2Req_GetPlayerData_eventGetAEWGoldTotal_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_GetPlayerData_GetAEWGoldTotal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_GetPlayerData_eventGetAEWGoldTotal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_GetPlayerData_GetAEWGoldTotal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_GetPlayerData_GetAEWGoldTotal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_GetPlayerData_GetAEWGoldTotal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_GetPlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_GetPlayerData_GetAEWGoldTotal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_GetPlayerData, nullptr, "GetAEWGoldTotal", nullptr, nullptr, sizeof(YGS2Req_GetPlayerData_eventGetAEWGoldTotal_Parms), Z_Construct_UFunction_UYGS2Req_GetPlayerData_GetAEWGoldTotal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_GetPlayerData_GetAEWGoldTotal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_GetPlayerData_GetAEWGoldTotal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_GetPlayerData_GetAEWGoldTotal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_GetPlayerData_GetAEWGoldTotal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_GetPlayerData_GetAEWGoldTotal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYGS2Req_GetPlayerData_NoRegister()
	{
		return UYGS2Req_GetPlayerData::StaticClass();
	}
	struct Z_Construct_UClass_UYGS2Req_GetPlayerData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYGS2Req_GetPlayerData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UYGS2RequestBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yGS2Client,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYGS2Req_GetPlayerData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYGS2Req_GetPlayerData_GetAEWGold, "GetAEWGold" }, // 4140396468
		{ &Z_Construct_UFunction_UYGS2Req_GetPlayerData_GetAEWGoldTotal, "GetAEWGoldTotal" }, // 1436175578
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYGS2Req_GetPlayerData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YGS2Req_GetPlayerData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YGS2Req_GetPlayerData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYGS2Req_GetPlayerData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYGS2Req_GetPlayerData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYGS2Req_GetPlayerData_Statics::ClassParams = {
		&UYGS2Req_GetPlayerData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UYGS2Req_GetPlayerData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYGS2Req_GetPlayerData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYGS2Req_GetPlayerData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYGS2Req_GetPlayerData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYGS2Req_GetPlayerData, 220841514);
	template<> YGS2CLIENT_API UClass* StaticClass<UYGS2Req_GetPlayerData>()
	{
		return UYGS2Req_GetPlayerData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYGS2Req_GetPlayerData(Z_Construct_UClass_UYGS2Req_GetPlayerData, &UYGS2Req_GetPlayerData::StaticClass, TEXT("/Script/yGS2Client"), TEXT("UYGS2Req_GetPlayerData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYGS2Req_GetPlayerData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
