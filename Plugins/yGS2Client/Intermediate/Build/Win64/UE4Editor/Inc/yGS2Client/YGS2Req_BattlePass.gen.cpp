// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/YGS2Req_BattlePass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYGS2Req_BattlePass() {}
// Cross Module References
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2Req_BattlePass_NoRegister();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2Req_BattlePass();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2RequestBase();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FYGS2Response_BattlePass();
// End Cross Module References
	DEFINE_FUNCTION(UYGS2Req_BattlePass::execGetBattlePassDataResult)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FYGS2Response_BattlePass*)Z_Param__Result=P_THIS->GetBattlePassDataResult();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_BattlePass::execSetBattlePassData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sSeasonNo);
		P_GET_PROPERTY(FIntProperty,Z_Param__sBattlePassPointNum);
		P_GET_PROPERTY(FIntProperty,Z_Param__sBattlePassLevel);
		P_GET_UBOOL(Z_Param__bPremiumPassPurchase);
		P_GET_PROPERTY(FIntProperty,Z_Param__sFreeRewardLevelLevel);
		P_GET_PROPERTY(FIntProperty,Z_Param__sPremiumRewardLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBattlePassData(Z_Param__sSeasonNo,Z_Param__sBattlePassPointNum,Z_Param__sBattlePassLevel,Z_Param__bPremiumPassPurchase,Z_Param__sFreeRewardLevelLevel,Z_Param__sPremiumRewardLevel);
		P_NATIVE_END;
	}
	void UYGS2Req_BattlePass::StaticRegisterNativesUYGS2Req_BattlePass()
	{
		UClass* Class = UYGS2Req_BattlePass::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBattlePassDataResult", &UYGS2Req_BattlePass::execGetBattlePassDataResult },
			{ "SetBattlePassData", &UYGS2Req_BattlePass::execSetBattlePassData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYGS2Req_BattlePass_GetBattlePassDataResult_Statics
	{
		struct YGS2Req_BattlePass_eventGetBattlePassDataResult_Parms
		{
			FYGS2Response_BattlePass ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYGS2Req_BattlePass_GetBattlePassDataResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_BattlePass_eventGetBattlePassDataResult_Parms, ReturnValue), Z_Construct_UScriptStruct_FYGS2Response_BattlePass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_BattlePass_GetBattlePassDataResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_BattlePass_GetBattlePassDataResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_BattlePass_GetBattlePassDataResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_BattlePass.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_BattlePass_GetBattlePassDataResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_BattlePass, nullptr, "GetBattlePassDataResult", nullptr, nullptr, sizeof(YGS2Req_BattlePass_eventGetBattlePassDataResult_Parms), Z_Construct_UFunction_UYGS2Req_BattlePass_GetBattlePassDataResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_BattlePass_GetBattlePassDataResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_BattlePass_GetBattlePassDataResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_BattlePass_GetBattlePassDataResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_BattlePass_GetBattlePassDataResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_BattlePass_GetBattlePassDataResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_BattlePass_SetBattlePassData_Statics
	{
		struct YGS2Req_BattlePass_eventSetBattlePassData_Parms
		{
			int32 _sSeasonNo;
			int32 _sBattlePassPointNum;
			int32 _sBattlePassLevel;
			bool _bPremiumPassPurchase;
			int32 _sFreeRewardLevelLevel;
			int32 _sPremiumRewardLevel;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sSeasonNo;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sBattlePassPointNum;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sBattlePassLevel;
		static void NewProp__bPremiumPassPurchase_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bPremiumPassPurchase;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sFreeRewardLevelLevel;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sPremiumRewardLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_BattlePass_SetBattlePassData_Statics::NewProp__sSeasonNo = { "_sSeasonNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_BattlePass_eventSetBattlePassData_Parms, _sSeasonNo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_BattlePass_SetBattlePassData_Statics::NewProp__sBattlePassPointNum = { "_sBattlePassPointNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_BattlePass_eventSetBattlePassData_Parms, _sBattlePassPointNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_BattlePass_SetBattlePassData_Statics::NewProp__sBattlePassLevel = { "_sBattlePassLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_BattlePass_eventSetBattlePassData_Parms, _sBattlePassLevel), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UYGS2Req_BattlePass_SetBattlePassData_Statics::NewProp__bPremiumPassPurchase_SetBit(void* Obj)
	{
		((YGS2Req_BattlePass_eventSetBattlePassData_Parms*)Obj)->_bPremiumPassPurchase = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYGS2Req_BattlePass_SetBattlePassData_Statics::NewProp__bPremiumPassPurchase = { "_bPremiumPassPurchase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YGS2Req_BattlePass_eventSetBattlePassData_Parms), &Z_Construct_UFunction_UYGS2Req_BattlePass_SetBattlePassData_Statics::NewProp__bPremiumPassPurchase_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_BattlePass_SetBattlePassData_Statics::NewProp__sFreeRewardLevelLevel = { "_sFreeRewardLevelLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_BattlePass_eventSetBattlePassData_Parms, _sFreeRewardLevelLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_BattlePass_SetBattlePassData_Statics::NewProp__sPremiumRewardLevel = { "_sPremiumRewardLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_BattlePass_eventSetBattlePassData_Parms, _sPremiumRewardLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_BattlePass_SetBattlePassData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_BattlePass_SetBattlePassData_Statics::NewProp__sSeasonNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_BattlePass_SetBattlePassData_Statics::NewProp__sBattlePassPointNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_BattlePass_SetBattlePassData_Statics::NewProp__sBattlePassLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_BattlePass_SetBattlePassData_Statics::NewProp__bPremiumPassPurchase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_BattlePass_SetBattlePassData_Statics::NewProp__sFreeRewardLevelLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_BattlePass_SetBattlePassData_Statics::NewProp__sPremiumRewardLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_BattlePass_SetBattlePassData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_BattlePass.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_BattlePass_SetBattlePassData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_BattlePass, nullptr, "SetBattlePassData", nullptr, nullptr, sizeof(YGS2Req_BattlePass_eventSetBattlePassData_Parms), Z_Construct_UFunction_UYGS2Req_BattlePass_SetBattlePassData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_BattlePass_SetBattlePassData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_BattlePass_SetBattlePassData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_BattlePass_SetBattlePassData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_BattlePass_SetBattlePassData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_BattlePass_SetBattlePassData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYGS2Req_BattlePass_NoRegister()
	{
		return UYGS2Req_BattlePass::StaticClass();
	}
	struct Z_Construct_UClass_UYGS2Req_BattlePass_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYGS2Req_BattlePass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UYGS2RequestBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yGS2Client,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYGS2Req_BattlePass_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYGS2Req_BattlePass_GetBattlePassDataResult, "GetBattlePassDataResult" }, // 581896165
		{ &Z_Construct_UFunction_UYGS2Req_BattlePass_SetBattlePassData, "SetBattlePassData" }, // 3679949201
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYGS2Req_BattlePass_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YGS2Req_BattlePass.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YGS2Req_BattlePass.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYGS2Req_BattlePass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYGS2Req_BattlePass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYGS2Req_BattlePass_Statics::ClassParams = {
		&UYGS2Req_BattlePass::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UYGS2Req_BattlePass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYGS2Req_BattlePass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYGS2Req_BattlePass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYGS2Req_BattlePass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYGS2Req_BattlePass, 3631867057);
	template<> YGS2CLIENT_API UClass* StaticClass<UYGS2Req_BattlePass>()
	{
		return UYGS2Req_BattlePass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYGS2Req_BattlePass(Z_Construct_UClass_UYGS2Req_BattlePass, &UYGS2Req_BattlePass::StaticClass, TEXT("/Script/yGS2Client"), TEXT("UYGS2Req_BattlePass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYGS2Req_BattlePass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
