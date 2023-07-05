// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELMatchResultMenuBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMatchResultMenuBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELMatchResultMenuBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELMatchResultMenuBase();
	ELITE_GAME_API UClass* Z_Construct_UClass_UELUserWidget();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELMatchScore_MatchType();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELMatchScore_StarData();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeProgressDetailInfo();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELMatchResultMenuBase::execGetHPEvaluationTexture)
	{
		P_GET_ENUM(EELMatchScore_MatchType,Z_Param_MatchType);
		P_GET_PROPERTY(FIntProperty,Z_Param_HPRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetHPEvaluationTexture(EELMatchScore_MatchType(Z_Param_MatchType),Z_Param_HPRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMatchResultMenuBase::execGetMatchEvaluationTexture)
	{
		P_GET_ENUM(EELMatchScore_MatchType,Z_Param_MatchType);
		P_GET_PROPERTY(FIntProperty,Z_Param_MatchEvaluation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetMatchEvaluationTexture(EELMatchScore_MatchType(Z_Param_MatchType),Z_Param_MatchEvaluation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMatchResultMenuBase::execGetMovesEvaluationTexture)
	{
		P_GET_ENUM(EELMatchScore_MatchType,Z_Param_MatchType);
		P_GET_PROPERTY(FIntProperty,Z_Param_MovesPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetMovesEvaluationTexture(EELMatchScore_MatchType(Z_Param_MatchType),Z_Param_MovesPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMatchResultMenuBase::execGetStarEvaluation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MatchTotalScore);
		P_GET_STRUCT_REF(FELMatchScore_StarData,Z_Param_Out_OutStarData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetStarEvaluation(Z_Param_MatchTotalScore,Z_Param_Out_OutStarData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMatchResultMenuBase::execGetTimeEvaluationTexture)
	{
		P_GET_ENUM(EELMatchScore_MatchType,Z_Param_MatchType);
		P_GET_PROPERTY(FIntProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetTimeEvaluationTexture(EELMatchScore_MatchType(Z_Param_MatchType),Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMatchResultMenuBase::execMakeChallengeList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FChallengeProgressDetailInfo>*)Z_Param__Result=P_THIS->MakeChallengeList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMatchResultMenuBase::execMoveChallengeCursor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Current);
		P_GET_PROPERTY(FIntProperty,Z_Param_Add);
		P_GET_PROPERTY(FIntProperty,Z_Param_Max);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->MoveChallengeCursor(Z_Param_Current,Z_Param_Add,Z_Param_Max);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMatchResultMenuBase::execOnEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMatchResultMenuBase::execStartDelay)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDelayTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartDelay(Z_Param_InDelayTime);
		P_NATIVE_END;
	}
	static FName NAME_UELMatchResultMenuBase_OnDelayFinish = FName(TEXT("OnDelayFinish"));
	void UELMatchResultMenuBase::OnDelayFinish()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELMatchResultMenuBase_OnDelayFinish),NULL);
	}
	static FName NAME_UELMatchResultMenuBase_OnPressCancelButton = FName(TEXT("OnPressCancelButton"));
	void UELMatchResultMenuBase::OnPressCancelButton()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELMatchResultMenuBase_OnPressCancelButton),NULL);
	}
	static FName NAME_UELMatchResultMenuBase_OnPressDown = FName(TEXT("OnPressDown"));
	void UELMatchResultMenuBase::OnPressDown(bool IsRepeat)
	{
		ELMatchResultMenuBase_eventOnPressDown_Parms Parms;
		Parms.IsRepeat=IsRepeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELMatchResultMenuBase_OnPressDown),&Parms);
	}
	static FName NAME_UELMatchResultMenuBase_OnPressL1 = FName(TEXT("OnPressL1"));
	void UELMatchResultMenuBase::OnPressL1(bool IsRepeat)
	{
		ELMatchResultMenuBase_eventOnPressL1_Parms Parms;
		Parms.IsRepeat=IsRepeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELMatchResultMenuBase_OnPressL1),&Parms);
	}
	static FName NAME_UELMatchResultMenuBase_OnPressL2 = FName(TEXT("OnPressL2"));
	void UELMatchResultMenuBase::OnPressL2(bool IsRepeat)
	{
		ELMatchResultMenuBase_eventOnPressL2_Parms Parms;
		Parms.IsRepeat=IsRepeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELMatchResultMenuBase_OnPressL2),&Parms);
	}
	static FName NAME_UELMatchResultMenuBase_OnPressLeft = FName(TEXT("OnPressLeft"));
	void UELMatchResultMenuBase::OnPressLeft(bool IsRepeat)
	{
		ELMatchResultMenuBase_eventOnPressLeft_Parms Parms;
		Parms.IsRepeat=IsRepeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELMatchResultMenuBase_OnPressLeft),&Parms);
	}
	static FName NAME_UELMatchResultMenuBase_OnPressR1 = FName(TEXT("OnPressR1"));
	void UELMatchResultMenuBase::OnPressR1(bool IsRepeat)
	{
		ELMatchResultMenuBase_eventOnPressR1_Parms Parms;
		Parms.IsRepeat=IsRepeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELMatchResultMenuBase_OnPressR1),&Parms);
	}
	static FName NAME_UELMatchResultMenuBase_OnPressR2 = FName(TEXT("OnPressR2"));
	void UELMatchResultMenuBase::OnPressR2(bool IsRepeat)
	{
		ELMatchResultMenuBase_eventOnPressR2_Parms Parms;
		Parms.IsRepeat=IsRepeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELMatchResultMenuBase_OnPressR2),&Parms);
	}
	static FName NAME_UELMatchResultMenuBase_OnPressRight = FName(TEXT("OnPressRight"));
	void UELMatchResultMenuBase::OnPressRight(bool IsRepeat)
	{
		ELMatchResultMenuBase_eventOnPressRight_Parms Parms;
		Parms.IsRepeat=IsRepeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELMatchResultMenuBase_OnPressRight),&Parms);
	}
	static FName NAME_UELMatchResultMenuBase_OnPressSkipButton = FName(TEXT("OnPressSkipButton"));
	void UELMatchResultMenuBase::OnPressSkipButton()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELMatchResultMenuBase_OnPressSkipButton),NULL);
	}
	static FName NAME_UELMatchResultMenuBase_OnPressUp = FName(TEXT("OnPressUp"));
	void UELMatchResultMenuBase::OnPressUp(bool IsRepeat)
	{
		ELMatchResultMenuBase_eventOnPressUp_Parms Parms;
		Parms.IsRepeat=IsRepeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELMatchResultMenuBase_OnPressUp),&Parms);
	}
	void UELMatchResultMenuBase::StaticRegisterNativesUELMatchResultMenuBase()
	{
		UClass* Class = UELMatchResultMenuBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHPEvaluationTexture", &UELMatchResultMenuBase::execGetHPEvaluationTexture },
			{ "GetMatchEvaluationTexture", &UELMatchResultMenuBase::execGetMatchEvaluationTexture },
			{ "GetMovesEvaluationTexture", &UELMatchResultMenuBase::execGetMovesEvaluationTexture },
			{ "GetStarEvaluation", &UELMatchResultMenuBase::execGetStarEvaluation },
			{ "GetTimeEvaluationTexture", &UELMatchResultMenuBase::execGetTimeEvaluationTexture },
			{ "MakeChallengeList", &UELMatchResultMenuBase::execMakeChallengeList },
			{ "MoveChallengeCursor", &UELMatchResultMenuBase::execMoveChallengeCursor },
			{ "OnEnd", &UELMatchResultMenuBase::execOnEnd },
			{ "StartDelay", &UELMatchResultMenuBase::execStartDelay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELMatchResultMenuBase_GetHPEvaluationTexture_Statics
	{
		struct ELMatchResultMenuBase_eventGetHPEvaluationTexture_Parms
		{
			EELMatchScore_MatchType MatchType;
			int32 HPRate;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MatchType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MatchType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HPRate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELMatchResultMenuBase_GetHPEvaluationTexture_Statics::NewProp_MatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELMatchResultMenuBase_GetHPEvaluationTexture_Statics::NewProp_MatchType = { "MatchType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultMenuBase_eventGetHPEvaluationTexture_Parms, MatchType), Z_Construct_UEnum_ABP_200508_EELMatchScore_MatchType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMatchResultMenuBase_GetHPEvaluationTexture_Statics::NewProp_HPRate = { "HPRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultMenuBase_eventGetHPEvaluationTexture_Parms, HPRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMatchResultMenuBase_GetHPEvaluationTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultMenuBase_eventGetHPEvaluationTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMatchResultMenuBase_GetHPEvaluationTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultMenuBase_GetHPEvaluationTexture_Statics::NewProp_MatchType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultMenuBase_GetHPEvaluationTexture_Statics::NewProp_MatchType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultMenuBase_GetHPEvaluationTexture_Statics::NewProp_HPRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultMenuBase_GetHPEvaluationTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMatchResultMenuBase_GetHPEvaluationTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMatchResultMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMatchResultMenuBase_GetHPEvaluationTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMatchResultMenuBase, nullptr, "GetHPEvaluationTexture", nullptr, nullptr, sizeof(ELMatchResultMenuBase_eventGetHPEvaluationTexture_Parms), Z_Construct_UFunction_UELMatchResultMenuBase_GetHPEvaluationTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultMenuBase_GetHPEvaluationTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMatchResultMenuBase_GetHPEvaluationTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultMenuBase_GetHPEvaluationTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMatchResultMenuBase_GetHPEvaluationTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMatchResultMenuBase_GetHPEvaluationTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMatchResultMenuBase_GetMatchEvaluationTexture_Statics
	{
		struct ELMatchResultMenuBase_eventGetMatchEvaluationTexture_Parms
		{
			EELMatchScore_MatchType MatchType;
			int32 MatchEvaluation;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MatchType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MatchType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MatchEvaluation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELMatchResultMenuBase_GetMatchEvaluationTexture_Statics::NewProp_MatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELMatchResultMenuBase_GetMatchEvaluationTexture_Statics::NewProp_MatchType = { "MatchType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultMenuBase_eventGetMatchEvaluationTexture_Parms, MatchType), Z_Construct_UEnum_ABP_200508_EELMatchScore_MatchType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMatchResultMenuBase_GetMatchEvaluationTexture_Statics::NewProp_MatchEvaluation = { "MatchEvaluation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultMenuBase_eventGetMatchEvaluationTexture_Parms, MatchEvaluation), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMatchResultMenuBase_GetMatchEvaluationTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultMenuBase_eventGetMatchEvaluationTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMatchResultMenuBase_GetMatchEvaluationTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultMenuBase_GetMatchEvaluationTexture_Statics::NewProp_MatchType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultMenuBase_GetMatchEvaluationTexture_Statics::NewProp_MatchType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultMenuBase_GetMatchEvaluationTexture_Statics::NewProp_MatchEvaluation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultMenuBase_GetMatchEvaluationTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMatchResultMenuBase_GetMatchEvaluationTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMatchResultMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMatchResultMenuBase_GetMatchEvaluationTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMatchResultMenuBase, nullptr, "GetMatchEvaluationTexture", nullptr, nullptr, sizeof(ELMatchResultMenuBase_eventGetMatchEvaluationTexture_Parms), Z_Construct_UFunction_UELMatchResultMenuBase_GetMatchEvaluationTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultMenuBase_GetMatchEvaluationTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMatchResultMenuBase_GetMatchEvaluationTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultMenuBase_GetMatchEvaluationTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMatchResultMenuBase_GetMatchEvaluationTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMatchResultMenuBase_GetMatchEvaluationTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMatchResultMenuBase_GetMovesEvaluationTexture_Statics
	{
		struct ELMatchResultMenuBase_eventGetMovesEvaluationTexture_Parms
		{
			EELMatchScore_MatchType MatchType;
			int32 MovesPoint;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MatchType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MatchType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MovesPoint;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELMatchResultMenuBase_GetMovesEvaluationTexture_Statics::NewProp_MatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELMatchResultMenuBase_GetMovesEvaluationTexture_Statics::NewProp_MatchType = { "MatchType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultMenuBase_eventGetMovesEvaluationTexture_Parms, MatchType), Z_Construct_UEnum_ABP_200508_EELMatchScore_MatchType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMatchResultMenuBase_GetMovesEvaluationTexture_Statics::NewProp_MovesPoint = { "MovesPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultMenuBase_eventGetMovesEvaluationTexture_Parms, MovesPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMatchResultMenuBase_GetMovesEvaluationTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultMenuBase_eventGetMovesEvaluationTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMatchResultMenuBase_GetMovesEvaluationTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultMenuBase_GetMovesEvaluationTexture_Statics::NewProp_MatchType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultMenuBase_GetMovesEvaluationTexture_Statics::NewProp_MatchType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultMenuBase_GetMovesEvaluationTexture_Statics::NewProp_MovesPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultMenuBase_GetMovesEvaluationTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMatchResultMenuBase_GetMovesEvaluationTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMatchResultMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMatchResultMenuBase_GetMovesEvaluationTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMatchResultMenuBase, nullptr, "GetMovesEvaluationTexture", nullptr, nullptr, sizeof(ELMatchResultMenuBase_eventGetMovesEvaluationTexture_Parms), Z_Construct_UFunction_UELMatchResultMenuBase_GetMovesEvaluationTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultMenuBase_GetMovesEvaluationTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMatchResultMenuBase_GetMovesEvaluationTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultMenuBase_GetMovesEvaluationTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMatchResultMenuBase_GetMovesEvaluationTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMatchResultMenuBase_GetMovesEvaluationTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMatchResultMenuBase_GetStarEvaluation_Statics
	{
		struct ELMatchResultMenuBase_eventGetStarEvaluation_Parms
		{
			float MatchTotalScore;
			FELMatchScore_StarData OutStarData;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MatchTotalScore;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutStarData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELMatchResultMenuBase_GetStarEvaluation_Statics::NewProp_MatchTotalScore = { "MatchTotalScore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultMenuBase_eventGetStarEvaluation_Parms, MatchTotalScore), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELMatchResultMenuBase_GetStarEvaluation_Statics::NewProp_OutStarData = { "OutStarData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultMenuBase_eventGetStarEvaluation_Parms, OutStarData), Z_Construct_UScriptStruct_FELMatchScore_StarData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMatchResultMenuBase_GetStarEvaluation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMatchResultMenuBase_eventGetStarEvaluation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMatchResultMenuBase_GetStarEvaluation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMatchResultMenuBase_eventGetStarEvaluation_Parms), &Z_Construct_UFunction_UELMatchResultMenuBase_GetStarEvaluation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMatchResultMenuBase_GetStarEvaluation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultMenuBase_GetStarEvaluation_Statics::NewProp_MatchTotalScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultMenuBase_GetStarEvaluation_Statics::NewProp_OutStarData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultMenuBase_GetStarEvaluation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMatchResultMenuBase_GetStarEvaluation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMatchResultMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMatchResultMenuBase_GetStarEvaluation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMatchResultMenuBase, nullptr, "GetStarEvaluation", nullptr, nullptr, sizeof(ELMatchResultMenuBase_eventGetStarEvaluation_Parms), Z_Construct_UFunction_UELMatchResultMenuBase_GetStarEvaluation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultMenuBase_GetStarEvaluation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMatchResultMenuBase_GetStarEvaluation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultMenuBase_GetStarEvaluation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMatchResultMenuBase_GetStarEvaluation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMatchResultMenuBase_GetStarEvaluation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMatchResultMenuBase_GetTimeEvaluationTexture_Statics
	{
		struct ELMatchResultMenuBase_eventGetTimeEvaluationTexture_Parms
		{
			EELMatchScore_MatchType MatchType;
			int32 Time;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MatchType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MatchType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELMatchResultMenuBase_GetTimeEvaluationTexture_Statics::NewProp_MatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELMatchResultMenuBase_GetTimeEvaluationTexture_Statics::NewProp_MatchType = { "MatchType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultMenuBase_eventGetTimeEvaluationTexture_Parms, MatchType), Z_Construct_UEnum_ABP_200508_EELMatchScore_MatchType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMatchResultMenuBase_GetTimeEvaluationTexture_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultMenuBase_eventGetTimeEvaluationTexture_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMatchResultMenuBase_GetTimeEvaluationTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultMenuBase_eventGetTimeEvaluationTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMatchResultMenuBase_GetTimeEvaluationTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultMenuBase_GetTimeEvaluationTexture_Statics::NewProp_MatchType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultMenuBase_GetTimeEvaluationTexture_Statics::NewProp_MatchType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultMenuBase_GetTimeEvaluationTexture_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultMenuBase_GetTimeEvaluationTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMatchResultMenuBase_GetTimeEvaluationTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMatchResultMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMatchResultMenuBase_GetTimeEvaluationTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMatchResultMenuBase, nullptr, "GetTimeEvaluationTexture", nullptr, nullptr, sizeof(ELMatchResultMenuBase_eventGetTimeEvaluationTexture_Parms), Z_Construct_UFunction_UELMatchResultMenuBase_GetTimeEvaluationTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultMenuBase_GetTimeEvaluationTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMatchResultMenuBase_GetTimeEvaluationTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultMenuBase_GetTimeEvaluationTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMatchResultMenuBase_GetTimeEvaluationTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMatchResultMenuBase_GetTimeEvaluationTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMatchResultMenuBase_MakeChallengeList_Statics
	{
		struct ELMatchResultMenuBase_eventMakeChallengeList_Parms
		{
			TArray<FChallengeProgressDetailInfo> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELMatchResultMenuBase_MakeChallengeList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChallengeProgressDetailInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELMatchResultMenuBase_MakeChallengeList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultMenuBase_eventMakeChallengeList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMatchResultMenuBase_MakeChallengeList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultMenuBase_MakeChallengeList_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultMenuBase_MakeChallengeList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMatchResultMenuBase_MakeChallengeList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMatchResultMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMatchResultMenuBase_MakeChallengeList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMatchResultMenuBase, nullptr, "MakeChallengeList", nullptr, nullptr, sizeof(ELMatchResultMenuBase_eventMakeChallengeList_Parms), Z_Construct_UFunction_UELMatchResultMenuBase_MakeChallengeList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultMenuBase_MakeChallengeList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMatchResultMenuBase_MakeChallengeList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultMenuBase_MakeChallengeList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMatchResultMenuBase_MakeChallengeList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMatchResultMenuBase_MakeChallengeList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMatchResultMenuBase_MoveChallengeCursor_Statics
	{
		struct ELMatchResultMenuBase_eventMoveChallengeCursor_Parms
		{
			int32 Current;
			int32 Add;
			int32 Max;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Current;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Add;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Max;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMatchResultMenuBase_MoveChallengeCursor_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultMenuBase_eventMoveChallengeCursor_Parms, Current), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMatchResultMenuBase_MoveChallengeCursor_Statics::NewProp_Add = { "Add", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultMenuBase_eventMoveChallengeCursor_Parms, Add), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMatchResultMenuBase_MoveChallengeCursor_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultMenuBase_eventMoveChallengeCursor_Parms, Max), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMatchResultMenuBase_MoveChallengeCursor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultMenuBase_eventMoveChallengeCursor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMatchResultMenuBase_MoveChallengeCursor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultMenuBase_MoveChallengeCursor_Statics::NewProp_Current,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultMenuBase_MoveChallengeCursor_Statics::NewProp_Add,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultMenuBase_MoveChallengeCursor_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultMenuBase_MoveChallengeCursor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMatchResultMenuBase_MoveChallengeCursor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMatchResultMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMatchResultMenuBase_MoveChallengeCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMatchResultMenuBase, nullptr, "MoveChallengeCursor", nullptr, nullptr, sizeof(ELMatchResultMenuBase_eventMoveChallengeCursor_Parms), Z_Construct_UFunction_UELMatchResultMenuBase_MoveChallengeCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultMenuBase_MoveChallengeCursor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMatchResultMenuBase_MoveChallengeCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultMenuBase_MoveChallengeCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMatchResultMenuBase_MoveChallengeCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMatchResultMenuBase_MoveChallengeCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMatchResultMenuBase_OnDelayFinish_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMatchResultMenuBase_OnDelayFinish_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMatchResultMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMatchResultMenuBase_OnDelayFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMatchResultMenuBase, nullptr, "OnDelayFinish", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMatchResultMenuBase_OnDelayFinish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultMenuBase_OnDelayFinish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMatchResultMenuBase_OnDelayFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMatchResultMenuBase_OnDelayFinish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMatchResultMenuBase_OnEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMatchResultMenuBase_OnEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMatchResultMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMatchResultMenuBase_OnEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMatchResultMenuBase, nullptr, "OnEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMatchResultMenuBase_OnEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultMenuBase_OnEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMatchResultMenuBase_OnEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMatchResultMenuBase_OnEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMatchResultMenuBase_OnPressCancelButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMatchResultMenuBase_OnPressCancelButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMatchResultMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMatchResultMenuBase_OnPressCancelButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMatchResultMenuBase, nullptr, "OnPressCancelButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMatchResultMenuBase_OnPressCancelButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultMenuBase_OnPressCancelButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMatchResultMenuBase_OnPressCancelButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMatchResultMenuBase_OnPressCancelButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMatchResultMenuBase_OnPressDown_Statics
	{
		static void NewProp_IsRepeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRepeat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELMatchResultMenuBase_OnPressDown_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELMatchResultMenuBase_eventOnPressDown_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMatchResultMenuBase_OnPressDown_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMatchResultMenuBase_eventOnPressDown_Parms), &Z_Construct_UFunction_UELMatchResultMenuBase_OnPressDown_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMatchResultMenuBase_OnPressDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultMenuBase_OnPressDown_Statics::NewProp_IsRepeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMatchResultMenuBase_OnPressDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMatchResultMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMatchResultMenuBase_OnPressDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMatchResultMenuBase, nullptr, "OnPressDown", nullptr, nullptr, sizeof(ELMatchResultMenuBase_eventOnPressDown_Parms), Z_Construct_UFunction_UELMatchResultMenuBase_OnPressDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultMenuBase_OnPressDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMatchResultMenuBase_OnPressDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultMenuBase_OnPressDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMatchResultMenuBase_OnPressDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMatchResultMenuBase_OnPressDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMatchResultMenuBase_OnPressL1_Statics
	{
		static void NewProp_IsRepeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRepeat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELMatchResultMenuBase_OnPressL1_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELMatchResultMenuBase_eventOnPressL1_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMatchResultMenuBase_OnPressL1_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMatchResultMenuBase_eventOnPressL1_Parms), &Z_Construct_UFunction_UELMatchResultMenuBase_OnPressL1_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMatchResultMenuBase_OnPressL1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultMenuBase_OnPressL1_Statics::NewProp_IsRepeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMatchResultMenuBase_OnPressL1_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMatchResultMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMatchResultMenuBase_OnPressL1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMatchResultMenuBase, nullptr, "OnPressL1", nullptr, nullptr, sizeof(ELMatchResultMenuBase_eventOnPressL1_Parms), Z_Construct_UFunction_UELMatchResultMenuBase_OnPressL1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultMenuBase_OnPressL1_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMatchResultMenuBase_OnPressL1_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultMenuBase_OnPressL1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMatchResultMenuBase_OnPressL1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMatchResultMenuBase_OnPressL1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMatchResultMenuBase_OnPressL2_Statics
	{
		static void NewProp_IsRepeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRepeat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELMatchResultMenuBase_OnPressL2_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELMatchResultMenuBase_eventOnPressL2_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMatchResultMenuBase_OnPressL2_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMatchResultMenuBase_eventOnPressL2_Parms), &Z_Construct_UFunction_UELMatchResultMenuBase_OnPressL2_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMatchResultMenuBase_OnPressL2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultMenuBase_OnPressL2_Statics::NewProp_IsRepeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMatchResultMenuBase_OnPressL2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMatchResultMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMatchResultMenuBase_OnPressL2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMatchResultMenuBase, nullptr, "OnPressL2", nullptr, nullptr, sizeof(ELMatchResultMenuBase_eventOnPressL2_Parms), Z_Construct_UFunction_UELMatchResultMenuBase_OnPressL2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultMenuBase_OnPressL2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMatchResultMenuBase_OnPressL2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultMenuBase_OnPressL2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMatchResultMenuBase_OnPressL2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMatchResultMenuBase_OnPressL2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMatchResultMenuBase_OnPressLeft_Statics
	{
		static void NewProp_IsRepeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRepeat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELMatchResultMenuBase_OnPressLeft_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELMatchResultMenuBase_eventOnPressLeft_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMatchResultMenuBase_OnPressLeft_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMatchResultMenuBase_eventOnPressLeft_Parms), &Z_Construct_UFunction_UELMatchResultMenuBase_OnPressLeft_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMatchResultMenuBase_OnPressLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultMenuBase_OnPressLeft_Statics::NewProp_IsRepeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMatchResultMenuBase_OnPressLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMatchResultMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMatchResultMenuBase_OnPressLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMatchResultMenuBase, nullptr, "OnPressLeft", nullptr, nullptr, sizeof(ELMatchResultMenuBase_eventOnPressLeft_Parms), Z_Construct_UFunction_UELMatchResultMenuBase_OnPressLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultMenuBase_OnPressLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMatchResultMenuBase_OnPressLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultMenuBase_OnPressLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMatchResultMenuBase_OnPressLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMatchResultMenuBase_OnPressLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMatchResultMenuBase_OnPressR1_Statics
	{
		static void NewProp_IsRepeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRepeat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELMatchResultMenuBase_OnPressR1_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELMatchResultMenuBase_eventOnPressR1_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMatchResultMenuBase_OnPressR1_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMatchResultMenuBase_eventOnPressR1_Parms), &Z_Construct_UFunction_UELMatchResultMenuBase_OnPressR1_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMatchResultMenuBase_OnPressR1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultMenuBase_OnPressR1_Statics::NewProp_IsRepeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMatchResultMenuBase_OnPressR1_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMatchResultMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMatchResultMenuBase_OnPressR1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMatchResultMenuBase, nullptr, "OnPressR1", nullptr, nullptr, sizeof(ELMatchResultMenuBase_eventOnPressR1_Parms), Z_Construct_UFunction_UELMatchResultMenuBase_OnPressR1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultMenuBase_OnPressR1_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMatchResultMenuBase_OnPressR1_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultMenuBase_OnPressR1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMatchResultMenuBase_OnPressR1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMatchResultMenuBase_OnPressR1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMatchResultMenuBase_OnPressR2_Statics
	{
		static void NewProp_IsRepeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRepeat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELMatchResultMenuBase_OnPressR2_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELMatchResultMenuBase_eventOnPressR2_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMatchResultMenuBase_OnPressR2_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMatchResultMenuBase_eventOnPressR2_Parms), &Z_Construct_UFunction_UELMatchResultMenuBase_OnPressR2_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMatchResultMenuBase_OnPressR2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultMenuBase_OnPressR2_Statics::NewProp_IsRepeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMatchResultMenuBase_OnPressR2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMatchResultMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMatchResultMenuBase_OnPressR2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMatchResultMenuBase, nullptr, "OnPressR2", nullptr, nullptr, sizeof(ELMatchResultMenuBase_eventOnPressR2_Parms), Z_Construct_UFunction_UELMatchResultMenuBase_OnPressR2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultMenuBase_OnPressR2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMatchResultMenuBase_OnPressR2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultMenuBase_OnPressR2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMatchResultMenuBase_OnPressR2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMatchResultMenuBase_OnPressR2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMatchResultMenuBase_OnPressRight_Statics
	{
		static void NewProp_IsRepeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRepeat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELMatchResultMenuBase_OnPressRight_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELMatchResultMenuBase_eventOnPressRight_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMatchResultMenuBase_OnPressRight_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMatchResultMenuBase_eventOnPressRight_Parms), &Z_Construct_UFunction_UELMatchResultMenuBase_OnPressRight_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMatchResultMenuBase_OnPressRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultMenuBase_OnPressRight_Statics::NewProp_IsRepeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMatchResultMenuBase_OnPressRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMatchResultMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMatchResultMenuBase_OnPressRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMatchResultMenuBase, nullptr, "OnPressRight", nullptr, nullptr, sizeof(ELMatchResultMenuBase_eventOnPressRight_Parms), Z_Construct_UFunction_UELMatchResultMenuBase_OnPressRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultMenuBase_OnPressRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMatchResultMenuBase_OnPressRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultMenuBase_OnPressRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMatchResultMenuBase_OnPressRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMatchResultMenuBase_OnPressRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMatchResultMenuBase_OnPressSkipButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMatchResultMenuBase_OnPressSkipButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMatchResultMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMatchResultMenuBase_OnPressSkipButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMatchResultMenuBase, nullptr, "OnPressSkipButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMatchResultMenuBase_OnPressSkipButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultMenuBase_OnPressSkipButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMatchResultMenuBase_OnPressSkipButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMatchResultMenuBase_OnPressSkipButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMatchResultMenuBase_OnPressUp_Statics
	{
		static void NewProp_IsRepeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRepeat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELMatchResultMenuBase_OnPressUp_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELMatchResultMenuBase_eventOnPressUp_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMatchResultMenuBase_OnPressUp_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMatchResultMenuBase_eventOnPressUp_Parms), &Z_Construct_UFunction_UELMatchResultMenuBase_OnPressUp_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMatchResultMenuBase_OnPressUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultMenuBase_OnPressUp_Statics::NewProp_IsRepeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMatchResultMenuBase_OnPressUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMatchResultMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMatchResultMenuBase_OnPressUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMatchResultMenuBase, nullptr, "OnPressUp", nullptr, nullptr, sizeof(ELMatchResultMenuBase_eventOnPressUp_Parms), Z_Construct_UFunction_UELMatchResultMenuBase_OnPressUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultMenuBase_OnPressUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMatchResultMenuBase_OnPressUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultMenuBase_OnPressUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMatchResultMenuBase_OnPressUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMatchResultMenuBase_OnPressUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMatchResultMenuBase_StartDelay_Statics
	{
		struct ELMatchResultMenuBase_eventStartDelay_Parms
		{
			float InDelayTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDelayTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELMatchResultMenuBase_StartDelay_Statics::NewProp_InDelayTime = { "InDelayTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultMenuBase_eventStartDelay_Parms, InDelayTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMatchResultMenuBase_StartDelay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultMenuBase_StartDelay_Statics::NewProp_InDelayTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMatchResultMenuBase_StartDelay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMatchResultMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMatchResultMenuBase_StartDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMatchResultMenuBase, nullptr, "StartDelay", nullptr, nullptr, sizeof(ELMatchResultMenuBase_eventStartDelay_Parms), Z_Construct_UFunction_UELMatchResultMenuBase_StartDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultMenuBase_StartDelay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMatchResultMenuBase_StartDelay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultMenuBase_StartDelay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMatchResultMenuBase_StartDelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMatchResultMenuBase_StartDelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELMatchResultMenuBase_NoRegister()
	{
		return UELMatchResultMenuBase::StaticClass();
	}
	struct Z_Construct_UClass_UELMatchResultMenuBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EvaluationTextures_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EvaluationTextures_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EvaluationTextures;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StarData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StarData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EvaluationParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EvaluationParamTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELMatchResultMenuBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELMatchResultMenuBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELMatchResultMenuBase_GetHPEvaluationTexture, "GetHPEvaluationTexture" }, // 1805172649
		{ &Z_Construct_UFunction_UELMatchResultMenuBase_GetMatchEvaluationTexture, "GetMatchEvaluationTexture" }, // 1748412469
		{ &Z_Construct_UFunction_UELMatchResultMenuBase_GetMovesEvaluationTexture, "GetMovesEvaluationTexture" }, // 2047640310
		{ &Z_Construct_UFunction_UELMatchResultMenuBase_GetStarEvaluation, "GetStarEvaluation" }, // 667624668
		{ &Z_Construct_UFunction_UELMatchResultMenuBase_GetTimeEvaluationTexture, "GetTimeEvaluationTexture" }, // 3136842283
		{ &Z_Construct_UFunction_UELMatchResultMenuBase_MakeChallengeList, "MakeChallengeList" }, // 1118960089
		{ &Z_Construct_UFunction_UELMatchResultMenuBase_MoveChallengeCursor, "MoveChallengeCursor" }, // 3808671864
		{ &Z_Construct_UFunction_UELMatchResultMenuBase_OnDelayFinish, "OnDelayFinish" }, // 2696929481
		{ &Z_Construct_UFunction_UELMatchResultMenuBase_OnEnd, "OnEnd" }, // 13409100
		{ &Z_Construct_UFunction_UELMatchResultMenuBase_OnPressCancelButton, "OnPressCancelButton" }, // 377637403
		{ &Z_Construct_UFunction_UELMatchResultMenuBase_OnPressDown, "OnPressDown" }, // 3410651102
		{ &Z_Construct_UFunction_UELMatchResultMenuBase_OnPressL1, "OnPressL1" }, // 3171975075
		{ &Z_Construct_UFunction_UELMatchResultMenuBase_OnPressL2, "OnPressL2" }, // 1524589569
		{ &Z_Construct_UFunction_UELMatchResultMenuBase_OnPressLeft, "OnPressLeft" }, // 578592478
		{ &Z_Construct_UFunction_UELMatchResultMenuBase_OnPressR1, "OnPressR1" }, // 680445388
		{ &Z_Construct_UFunction_UELMatchResultMenuBase_OnPressR2, "OnPressR2" }, // 3493977665
		{ &Z_Construct_UFunction_UELMatchResultMenuBase_OnPressRight, "OnPressRight" }, // 3759950454
		{ &Z_Construct_UFunction_UELMatchResultMenuBase_OnPressSkipButton, "OnPressSkipButton" }, // 544655901
		{ &Z_Construct_UFunction_UELMatchResultMenuBase_OnPressUp, "OnPressUp" }, // 3868890228
		{ &Z_Construct_UFunction_UELMatchResultMenuBase_StartDelay, "StartDelay" }, // 4120307045
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMatchResultMenuBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELMatchResultMenuBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELMatchResultMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELMatchResultMenuBase_Statics::NewProp_EvaluationTextures_Inner = { "EvaluationTextures", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMatchResultMenuBase_Statics::NewProp_EvaluationTextures_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchResultMenuBase" },
		{ "ModuleRelativePath", "Public/ELMatchResultMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELMatchResultMenuBase_Statics::NewProp_EvaluationTextures = { "EvaluationTextures", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELMatchResultMenuBase, EvaluationTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELMatchResultMenuBase_Statics::NewProp_EvaluationTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMatchResultMenuBase_Statics::NewProp_EvaluationTextures_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMatchResultMenuBase_Statics::NewProp_StarData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchResultMenuBase" },
		{ "ModuleRelativePath", "Public/ELMatchResultMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELMatchResultMenuBase_Statics::NewProp_StarData = { "StarData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELMatchResultMenuBase, StarData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELMatchResultMenuBase_Statics::NewProp_StarData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMatchResultMenuBase_Statics::NewProp_StarData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMatchResultMenuBase_Statics::NewProp_EvaluationParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchResultMenuBase" },
		{ "ModuleRelativePath", "Public/ELMatchResultMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELMatchResultMenuBase_Statics::NewProp_EvaluationParamTable = { "EvaluationParamTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELMatchResultMenuBase, EvaluationParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELMatchResultMenuBase_Statics::NewProp_EvaluationParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMatchResultMenuBase_Statics::NewProp_EvaluationParamTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMatchResultMenuBase_Statics::NewProp_DelayTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchResultMenuBase" },
		{ "ModuleRelativePath", "Public/ELMatchResultMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELMatchResultMenuBase_Statics::NewProp_DelayTime = { "DelayTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELMatchResultMenuBase, DelayTime), METADATA_PARAMS(Z_Construct_UClass_UELMatchResultMenuBase_Statics::NewProp_DelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMatchResultMenuBase_Statics::NewProp_DelayTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELMatchResultMenuBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMatchResultMenuBase_Statics::NewProp_EvaluationTextures_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMatchResultMenuBase_Statics::NewProp_EvaluationTextures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMatchResultMenuBase_Statics::NewProp_StarData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMatchResultMenuBase_Statics::NewProp_EvaluationParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMatchResultMenuBase_Statics::NewProp_DelayTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELMatchResultMenuBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELMatchResultMenuBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELMatchResultMenuBase_Statics::ClassParams = {
		&UELMatchResultMenuBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELMatchResultMenuBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELMatchResultMenuBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELMatchResultMenuBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELMatchResultMenuBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELMatchResultMenuBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELMatchResultMenuBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELMatchResultMenuBase, 807961526);
	template<> ABP_200508_API UClass* StaticClass<UELMatchResultMenuBase>()
	{
		return UELMatchResultMenuBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELMatchResultMenuBase(Z_Construct_UClass_UELMatchResultMenuBase, &UELMatchResultMenuBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELMatchResultMenuBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELMatchResultMenuBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
