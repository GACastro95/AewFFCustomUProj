// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/YGS2Req_RankMatchRecord.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYGS2Req_RankMatchRecord() {}
// Cross Module References
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2Req_RankMatchRecord_NoRegister();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2Req_RankMatchRecord();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2RequestBase();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord();
// End Cross Module References
	DEFINE_FUNCTION(UYGS2Req_RankMatchRecord::execGetRankMatchRecordResult)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FYGS2Response_RankMatchRecord*)Z_Param__Result=P_THIS->GetRankMatchRecordResult();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_RankMatchRecord::execSetRankMatchRecord)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sSeasonNo);
		P_GET_PROPERTY(FIntProperty,Z_Param__sOneOnOneWinNum);
		P_GET_PROPERTY(FIntProperty,Z_Param__sTwoOnTwoWinNum);
		P_GET_PROPERTY(FIntProperty,Z_Param__sThreeWayWinNum);
		P_GET_PROPERTY(FIntProperty,Z_Param__sFourWayWinNum);
		P_GET_PROPERTY(FIntProperty,Z_Param__sCasinoBrWinNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRankMatchRecord(Z_Param__sSeasonNo,Z_Param__sOneOnOneWinNum,Z_Param__sTwoOnTwoWinNum,Z_Param__sThreeWayWinNum,Z_Param__sFourWayWinNum,Z_Param__sCasinoBrWinNum);
		P_NATIVE_END;
	}
	void UYGS2Req_RankMatchRecord::StaticRegisterNativesUYGS2Req_RankMatchRecord()
	{
		UClass* Class = UYGS2Req_RankMatchRecord::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRankMatchRecordResult", &UYGS2Req_RankMatchRecord::execGetRankMatchRecordResult },
			{ "SetRankMatchRecord", &UYGS2Req_RankMatchRecord::execSetRankMatchRecord },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYGS2Req_RankMatchRecord_GetRankMatchRecordResult_Statics
	{
		struct YGS2Req_RankMatchRecord_eventGetRankMatchRecordResult_Parms
		{
			FYGS2Response_RankMatchRecord ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYGS2Req_RankMatchRecord_GetRankMatchRecordResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_RankMatchRecord_eventGetRankMatchRecordResult_Parms, ReturnValue), Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_RankMatchRecord_GetRankMatchRecordResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_RankMatchRecord_GetRankMatchRecordResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_RankMatchRecord_GetRankMatchRecordResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_RankMatchRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_RankMatchRecord_GetRankMatchRecordResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_RankMatchRecord, nullptr, "GetRankMatchRecordResult", nullptr, nullptr, sizeof(YGS2Req_RankMatchRecord_eventGetRankMatchRecordResult_Parms), Z_Construct_UFunction_UYGS2Req_RankMatchRecord_GetRankMatchRecordResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_RankMatchRecord_GetRankMatchRecordResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_RankMatchRecord_GetRankMatchRecordResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_RankMatchRecord_GetRankMatchRecordResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_RankMatchRecord_GetRankMatchRecordResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_RankMatchRecord_GetRankMatchRecordResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_RankMatchRecord_SetRankMatchRecord_Statics
	{
		struct YGS2Req_RankMatchRecord_eventSetRankMatchRecord_Parms
		{
			int32 _sSeasonNo;
			int32 _sOneOnOneWinNum;
			int32 _sTwoOnTwoWinNum;
			int32 _sThreeWayWinNum;
			int32 _sFourWayWinNum;
			int32 _sCasinoBrWinNum;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sSeasonNo;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sOneOnOneWinNum;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sTwoOnTwoWinNum;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sThreeWayWinNum;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sFourWayWinNum;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sCasinoBrWinNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_RankMatchRecord_SetRankMatchRecord_Statics::NewProp__sSeasonNo = { "_sSeasonNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_RankMatchRecord_eventSetRankMatchRecord_Parms, _sSeasonNo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_RankMatchRecord_SetRankMatchRecord_Statics::NewProp__sOneOnOneWinNum = { "_sOneOnOneWinNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_RankMatchRecord_eventSetRankMatchRecord_Parms, _sOneOnOneWinNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_RankMatchRecord_SetRankMatchRecord_Statics::NewProp__sTwoOnTwoWinNum = { "_sTwoOnTwoWinNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_RankMatchRecord_eventSetRankMatchRecord_Parms, _sTwoOnTwoWinNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_RankMatchRecord_SetRankMatchRecord_Statics::NewProp__sThreeWayWinNum = { "_sThreeWayWinNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_RankMatchRecord_eventSetRankMatchRecord_Parms, _sThreeWayWinNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_RankMatchRecord_SetRankMatchRecord_Statics::NewProp__sFourWayWinNum = { "_sFourWayWinNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_RankMatchRecord_eventSetRankMatchRecord_Parms, _sFourWayWinNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_RankMatchRecord_SetRankMatchRecord_Statics::NewProp__sCasinoBrWinNum = { "_sCasinoBrWinNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_RankMatchRecord_eventSetRankMatchRecord_Parms, _sCasinoBrWinNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_RankMatchRecord_SetRankMatchRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_RankMatchRecord_SetRankMatchRecord_Statics::NewProp__sSeasonNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_RankMatchRecord_SetRankMatchRecord_Statics::NewProp__sOneOnOneWinNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_RankMatchRecord_SetRankMatchRecord_Statics::NewProp__sTwoOnTwoWinNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_RankMatchRecord_SetRankMatchRecord_Statics::NewProp__sThreeWayWinNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_RankMatchRecord_SetRankMatchRecord_Statics::NewProp__sFourWayWinNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_RankMatchRecord_SetRankMatchRecord_Statics::NewProp__sCasinoBrWinNum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_RankMatchRecord_SetRankMatchRecord_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_RankMatchRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_RankMatchRecord_SetRankMatchRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_RankMatchRecord, nullptr, "SetRankMatchRecord", nullptr, nullptr, sizeof(YGS2Req_RankMatchRecord_eventSetRankMatchRecord_Parms), Z_Construct_UFunction_UYGS2Req_RankMatchRecord_SetRankMatchRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_RankMatchRecord_SetRankMatchRecord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_RankMatchRecord_SetRankMatchRecord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_RankMatchRecord_SetRankMatchRecord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_RankMatchRecord_SetRankMatchRecord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_RankMatchRecord_SetRankMatchRecord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYGS2Req_RankMatchRecord_NoRegister()
	{
		return UYGS2Req_RankMatchRecord::StaticClass();
	}
	struct Z_Construct_UClass_UYGS2Req_RankMatchRecord_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYGS2Req_RankMatchRecord_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UYGS2RequestBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yGS2Client,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYGS2Req_RankMatchRecord_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYGS2Req_RankMatchRecord_GetRankMatchRecordResult, "GetRankMatchRecordResult" }, // 80419874
		{ &Z_Construct_UFunction_UYGS2Req_RankMatchRecord_SetRankMatchRecord, "SetRankMatchRecord" }, // 977146867
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYGS2Req_RankMatchRecord_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YGS2Req_RankMatchRecord.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YGS2Req_RankMatchRecord.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYGS2Req_RankMatchRecord_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYGS2Req_RankMatchRecord>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYGS2Req_RankMatchRecord_Statics::ClassParams = {
		&UYGS2Req_RankMatchRecord::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UYGS2Req_RankMatchRecord_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYGS2Req_RankMatchRecord_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYGS2Req_RankMatchRecord()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYGS2Req_RankMatchRecord_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYGS2Req_RankMatchRecord, 1917160843);
	template<> YGS2CLIENT_API UClass* StaticClass<UYGS2Req_RankMatchRecord>()
	{
		return UYGS2Req_RankMatchRecord::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYGS2Req_RankMatchRecord(Z_Construct_UClass_UYGS2Req_RankMatchRecord, &UYGS2Req_RankMatchRecord::StaticClass, TEXT("/Script/yGS2Client"), TEXT("UYGS2Req_RankMatchRecord"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYGS2Req_RankMatchRecord);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
