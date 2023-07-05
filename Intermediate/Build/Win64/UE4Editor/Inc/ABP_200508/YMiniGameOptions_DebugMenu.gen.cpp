// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/YMiniGameOptions_DebugMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYMiniGameOptions_DebugMenu() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UYMiniGameOptions_DebugMenu_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UYMiniGameOptions_DebugMenu();
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuRootBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMiniGame_ChipGather();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMiniGame_DamageChallenge();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMiniGame_FindOrange();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMiniGame_FindTheDifference();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EImmediateMiniGameState();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMiniGame_ObjectCount();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMiniGame_PentaSais();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMiniGame_SlothSling();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMiniGame_SpotLight();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMiniGame_TracePunch();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMiniGame_TriviaQuiz();
// End Cross Module References
	DEFINE_FUNCTION(UYMiniGameOptions_DebugMenu::execDisableDebugStateAndTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableDebugStateAndTick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYMiniGameOptions_DebugMenu::execDisableDebugTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableDebugTick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYMiniGameOptions_DebugMenu::execDisableImmidiateMiniGameState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableImmidiateMiniGameState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYMiniGameOptions_DebugMenu::execGetChipGatherInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMiniGame_ChipGather*)Z_Param__Result=P_THIS->GetChipGatherInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYMiniGameOptions_DebugMenu::execGetDamageChallengeInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMiniGame_DamageChallenge*)Z_Param__Result=P_THIS->GetDamageChallengeInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYMiniGameOptions_DebugMenu::execGetDebugMiniGameLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDebugMiniGameLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYMiniGameOptions_DebugMenu::execGetFindOrangeInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMiniGame_FindOrange*)Z_Param__Result=P_THIS->GetFindOrangeInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYMiniGameOptions_DebugMenu::execGetFindTheDifferenceInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMiniGame_FindTheDifference*)Z_Param__Result=P_THIS->GetFindTheDifferenceInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYMiniGameOptions_DebugMenu::execGetHomeRunInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMiniGame_HomeRunInfo*)Z_Param__Result=P_THIS->GetHomeRunInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYMiniGameOptions_DebugMenu::execGetImmidiateMiniGameState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EImmediateMiniGameState*)Z_Param__Result=P_THIS->GetImmidiateMiniGameState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYMiniGameOptions_DebugMenu::execGetMiniGameDebugMenuParam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMiniGameDebugMenuParam_Common*)Z_Param__Result=P_THIS->GetMiniGameDebugMenuParam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYMiniGameOptions_DebugMenu::execGetObjectCountInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMiniGame_ObjectCount*)Z_Param__Result=P_THIS->GetObjectCountInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYMiniGameOptions_DebugMenu::execGetPentaSaisInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMiniGame_PentaSais*)Z_Param__Result=P_THIS->GetPentaSaisInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYMiniGameOptions_DebugMenu::execGetSlothSlingInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMiniGame_SlothSling*)Z_Param__Result=P_THIS->GetSlothSlingInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYMiniGameOptions_DebugMenu::execGetSpotLightInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMiniGame_SpotLight*)Z_Param__Result=P_THIS->GetSpotLightInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYMiniGameOptions_DebugMenu::execGetTracePunchInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMiniGame_TracePunch*)Z_Param__Result=P_THIS->GetTracePunchInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYMiniGameOptions_DebugMenu::execGetTriviaQuizInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMiniGame_TriviaQuiz*)Z_Param__Result=P_THIS->GetTriviaQuizInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYMiniGameOptions_DebugMenu::execIsApplyForDebugMiniGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsApplyForDebugMiniGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYMiniGameOptions_DebugMenu::execIsDebugMiniGameParameter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDebugMiniGameParameter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYMiniGameOptions_DebugMenu::execIsDebugTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDebugTick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYMiniGameOptions_DebugMenu::execSetCorrectAnswer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__CorrectAnswer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCorrectAnswer(Z_Param__CorrectAnswer);
		P_NATIVE_END;
	}
	void UYMiniGameOptions_DebugMenu::StaticRegisterNativesUYMiniGameOptions_DebugMenu()
	{
		UClass* Class = UYMiniGameOptions_DebugMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableDebugStateAndTick", &UYMiniGameOptions_DebugMenu::execDisableDebugStateAndTick },
			{ "DisableDebugTick", &UYMiniGameOptions_DebugMenu::execDisableDebugTick },
			{ "DisableImmidiateMiniGameState", &UYMiniGameOptions_DebugMenu::execDisableImmidiateMiniGameState },
			{ "GetChipGatherInfo", &UYMiniGameOptions_DebugMenu::execGetChipGatherInfo },
			{ "GetDamageChallengeInfo", &UYMiniGameOptions_DebugMenu::execGetDamageChallengeInfo },
			{ "GetDebugMiniGameLevel", &UYMiniGameOptions_DebugMenu::execGetDebugMiniGameLevel },
			{ "GetFindOrangeInfo", &UYMiniGameOptions_DebugMenu::execGetFindOrangeInfo },
			{ "GetFindTheDifferenceInfo", &UYMiniGameOptions_DebugMenu::execGetFindTheDifferenceInfo },
			{ "GetHomeRunInfo", &UYMiniGameOptions_DebugMenu::execGetHomeRunInfo },
			{ "GetImmidiateMiniGameState", &UYMiniGameOptions_DebugMenu::execGetImmidiateMiniGameState },
			{ "GetMiniGameDebugMenuParam", &UYMiniGameOptions_DebugMenu::execGetMiniGameDebugMenuParam },
			{ "GetObjectCountInfo", &UYMiniGameOptions_DebugMenu::execGetObjectCountInfo },
			{ "GetPentaSaisInfo", &UYMiniGameOptions_DebugMenu::execGetPentaSaisInfo },
			{ "GetSlothSlingInfo", &UYMiniGameOptions_DebugMenu::execGetSlothSlingInfo },
			{ "GetSpotLightInfo", &UYMiniGameOptions_DebugMenu::execGetSpotLightInfo },
			{ "GetTracePunchInfo", &UYMiniGameOptions_DebugMenu::execGetTracePunchInfo },
			{ "GetTriviaQuizInfo", &UYMiniGameOptions_DebugMenu::execGetTriviaQuizInfo },
			{ "IsApplyForDebugMiniGame", &UYMiniGameOptions_DebugMenu::execIsApplyForDebugMiniGame },
			{ "IsDebugMiniGameParameter", &UYMiniGameOptions_DebugMenu::execIsDebugMiniGameParameter },
			{ "IsDebugTick", &UYMiniGameOptions_DebugMenu::execIsDebugTick },
			{ "SetCorrectAnswer", &UYMiniGameOptions_DebugMenu::execSetCorrectAnswer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_DisableDebugStateAndTick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_DisableDebugStateAndTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YMiniGameOptions_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_DisableDebugStateAndTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYMiniGameOptions_DebugMenu, nullptr, "DisableDebugStateAndTick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_DisableDebugStateAndTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_DisableDebugStateAndTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_DisableDebugStateAndTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_DisableDebugStateAndTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_DisableDebugTick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_DisableDebugTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YMiniGameOptions_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_DisableDebugTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYMiniGameOptions_DebugMenu, nullptr, "DisableDebugTick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_DisableDebugTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_DisableDebugTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_DisableDebugTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_DisableDebugTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_DisableImmidiateMiniGameState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_DisableImmidiateMiniGameState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YMiniGameOptions_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_DisableImmidiateMiniGameState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYMiniGameOptions_DebugMenu, nullptr, "DisableImmidiateMiniGameState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_DisableImmidiateMiniGameState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_DisableImmidiateMiniGameState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_DisableImmidiateMiniGameState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_DisableImmidiateMiniGameState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetChipGatherInfo_Statics
	{
		struct YMiniGameOptions_DebugMenu_eventGetChipGatherInfo_Parms
		{
			FMiniGame_ChipGather ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetChipGatherInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YMiniGameOptions_DebugMenu_eventGetChipGatherInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FMiniGame_ChipGather, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetChipGatherInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetChipGatherInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetChipGatherInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YMiniGameOptions_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetChipGatherInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYMiniGameOptions_DebugMenu, nullptr, "GetChipGatherInfo", nullptr, nullptr, sizeof(YMiniGameOptions_DebugMenu_eventGetChipGatherInfo_Parms), Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetChipGatherInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetChipGatherInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetChipGatherInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetChipGatherInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetChipGatherInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetChipGatherInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetDamageChallengeInfo_Statics
	{
		struct YMiniGameOptions_DebugMenu_eventGetDamageChallengeInfo_Parms
		{
			FMiniGame_DamageChallenge ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetDamageChallengeInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YMiniGameOptions_DebugMenu_eventGetDamageChallengeInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FMiniGame_DamageChallenge, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetDamageChallengeInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetDamageChallengeInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetDamageChallengeInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YMiniGameOptions_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetDamageChallengeInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYMiniGameOptions_DebugMenu, nullptr, "GetDamageChallengeInfo", nullptr, nullptr, sizeof(YMiniGameOptions_DebugMenu_eventGetDamageChallengeInfo_Parms), Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetDamageChallengeInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetDamageChallengeInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetDamageChallengeInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetDamageChallengeInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetDamageChallengeInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetDamageChallengeInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetDebugMiniGameLevel_Statics
	{
		struct YMiniGameOptions_DebugMenu_eventGetDebugMiniGameLevel_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetDebugMiniGameLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YMiniGameOptions_DebugMenu_eventGetDebugMiniGameLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetDebugMiniGameLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetDebugMiniGameLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetDebugMiniGameLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YMiniGameOptions_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetDebugMiniGameLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYMiniGameOptions_DebugMenu, nullptr, "GetDebugMiniGameLevel", nullptr, nullptr, sizeof(YMiniGameOptions_DebugMenu_eventGetDebugMiniGameLevel_Parms), Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetDebugMiniGameLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetDebugMiniGameLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetDebugMiniGameLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetDebugMiniGameLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetDebugMiniGameLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetDebugMiniGameLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetFindOrangeInfo_Statics
	{
		struct YMiniGameOptions_DebugMenu_eventGetFindOrangeInfo_Parms
		{
			FMiniGame_FindOrange ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetFindOrangeInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YMiniGameOptions_DebugMenu_eventGetFindOrangeInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FMiniGame_FindOrange, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetFindOrangeInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetFindOrangeInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetFindOrangeInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YMiniGameOptions_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetFindOrangeInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYMiniGameOptions_DebugMenu, nullptr, "GetFindOrangeInfo", nullptr, nullptr, sizeof(YMiniGameOptions_DebugMenu_eventGetFindOrangeInfo_Parms), Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetFindOrangeInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetFindOrangeInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetFindOrangeInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetFindOrangeInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetFindOrangeInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetFindOrangeInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetFindTheDifferenceInfo_Statics
	{
		struct YMiniGameOptions_DebugMenu_eventGetFindTheDifferenceInfo_Parms
		{
			FMiniGame_FindTheDifference ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetFindTheDifferenceInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YMiniGameOptions_DebugMenu_eventGetFindTheDifferenceInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FMiniGame_FindTheDifference, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetFindTheDifferenceInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetFindTheDifferenceInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetFindTheDifferenceInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YMiniGameOptions_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetFindTheDifferenceInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYMiniGameOptions_DebugMenu, nullptr, "GetFindTheDifferenceInfo", nullptr, nullptr, sizeof(YMiniGameOptions_DebugMenu_eventGetFindTheDifferenceInfo_Parms), Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetFindTheDifferenceInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetFindTheDifferenceInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetFindTheDifferenceInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetFindTheDifferenceInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetFindTheDifferenceInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetFindTheDifferenceInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetHomeRunInfo_Statics
	{
		struct YMiniGameOptions_DebugMenu_eventGetHomeRunInfo_Parms
		{
			FMiniGame_HomeRunInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetHomeRunInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YMiniGameOptions_DebugMenu_eventGetHomeRunInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetHomeRunInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetHomeRunInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetHomeRunInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YMiniGameOptions_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetHomeRunInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYMiniGameOptions_DebugMenu, nullptr, "GetHomeRunInfo", nullptr, nullptr, sizeof(YMiniGameOptions_DebugMenu_eventGetHomeRunInfo_Parms), Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetHomeRunInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetHomeRunInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetHomeRunInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetHomeRunInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetHomeRunInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetHomeRunInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetImmidiateMiniGameState_Statics
	{
		struct YMiniGameOptions_DebugMenu_eventGetImmidiateMiniGameState_Parms
		{
			EImmediateMiniGameState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetImmidiateMiniGameState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetImmidiateMiniGameState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YMiniGameOptions_DebugMenu_eventGetImmidiateMiniGameState_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_EImmediateMiniGameState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetImmidiateMiniGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetImmidiateMiniGameState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetImmidiateMiniGameState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetImmidiateMiniGameState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YMiniGameOptions_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetImmidiateMiniGameState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYMiniGameOptions_DebugMenu, nullptr, "GetImmidiateMiniGameState", nullptr, nullptr, sizeof(YMiniGameOptions_DebugMenu_eventGetImmidiateMiniGameState_Parms), Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetImmidiateMiniGameState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetImmidiateMiniGameState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetImmidiateMiniGameState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetImmidiateMiniGameState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetImmidiateMiniGameState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetImmidiateMiniGameState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetMiniGameDebugMenuParam_Statics
	{
		struct YMiniGameOptions_DebugMenu_eventGetMiniGameDebugMenuParam_Parms
		{
			FMiniGameDebugMenuParam_Common ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetMiniGameDebugMenuParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YMiniGameOptions_DebugMenu_eventGetMiniGameDebugMenuParam_Parms, ReturnValue), Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetMiniGameDebugMenuParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetMiniGameDebugMenuParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetMiniGameDebugMenuParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YMiniGameOptions_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetMiniGameDebugMenuParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYMiniGameOptions_DebugMenu, nullptr, "GetMiniGameDebugMenuParam", nullptr, nullptr, sizeof(YMiniGameOptions_DebugMenu_eventGetMiniGameDebugMenuParam_Parms), Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetMiniGameDebugMenuParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetMiniGameDebugMenuParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetMiniGameDebugMenuParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetMiniGameDebugMenuParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetMiniGameDebugMenuParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetMiniGameDebugMenuParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetObjectCountInfo_Statics
	{
		struct YMiniGameOptions_DebugMenu_eventGetObjectCountInfo_Parms
		{
			FMiniGame_ObjectCount ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetObjectCountInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YMiniGameOptions_DebugMenu_eventGetObjectCountInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FMiniGame_ObjectCount, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetObjectCountInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetObjectCountInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetObjectCountInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YMiniGameOptions_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetObjectCountInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYMiniGameOptions_DebugMenu, nullptr, "GetObjectCountInfo", nullptr, nullptr, sizeof(YMiniGameOptions_DebugMenu_eventGetObjectCountInfo_Parms), Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetObjectCountInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetObjectCountInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetObjectCountInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetObjectCountInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetObjectCountInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetObjectCountInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetPentaSaisInfo_Statics
	{
		struct YMiniGameOptions_DebugMenu_eventGetPentaSaisInfo_Parms
		{
			FMiniGame_PentaSais ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetPentaSaisInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YMiniGameOptions_DebugMenu_eventGetPentaSaisInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FMiniGame_PentaSais, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetPentaSaisInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetPentaSaisInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetPentaSaisInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YMiniGameOptions_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetPentaSaisInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYMiniGameOptions_DebugMenu, nullptr, "GetPentaSaisInfo", nullptr, nullptr, sizeof(YMiniGameOptions_DebugMenu_eventGetPentaSaisInfo_Parms), Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetPentaSaisInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetPentaSaisInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetPentaSaisInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetPentaSaisInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetPentaSaisInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetPentaSaisInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetSlothSlingInfo_Statics
	{
		struct YMiniGameOptions_DebugMenu_eventGetSlothSlingInfo_Parms
		{
			FMiniGame_SlothSling ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetSlothSlingInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YMiniGameOptions_DebugMenu_eventGetSlothSlingInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FMiniGame_SlothSling, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetSlothSlingInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetSlothSlingInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetSlothSlingInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YMiniGameOptions_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetSlothSlingInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYMiniGameOptions_DebugMenu, nullptr, "GetSlothSlingInfo", nullptr, nullptr, sizeof(YMiniGameOptions_DebugMenu_eventGetSlothSlingInfo_Parms), Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetSlothSlingInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetSlothSlingInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetSlothSlingInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetSlothSlingInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetSlothSlingInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetSlothSlingInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetSpotLightInfo_Statics
	{
		struct YMiniGameOptions_DebugMenu_eventGetSpotLightInfo_Parms
		{
			FMiniGame_SpotLight ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetSpotLightInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YMiniGameOptions_DebugMenu_eventGetSpotLightInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FMiniGame_SpotLight, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetSpotLightInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetSpotLightInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetSpotLightInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YMiniGameOptions_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetSpotLightInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYMiniGameOptions_DebugMenu, nullptr, "GetSpotLightInfo", nullptr, nullptr, sizeof(YMiniGameOptions_DebugMenu_eventGetSpotLightInfo_Parms), Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetSpotLightInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetSpotLightInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetSpotLightInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetSpotLightInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetSpotLightInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetSpotLightInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetTracePunchInfo_Statics
	{
		struct YMiniGameOptions_DebugMenu_eventGetTracePunchInfo_Parms
		{
			FMiniGame_TracePunch ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetTracePunchInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YMiniGameOptions_DebugMenu_eventGetTracePunchInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FMiniGame_TracePunch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetTracePunchInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetTracePunchInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetTracePunchInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YMiniGameOptions_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetTracePunchInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYMiniGameOptions_DebugMenu, nullptr, "GetTracePunchInfo", nullptr, nullptr, sizeof(YMiniGameOptions_DebugMenu_eventGetTracePunchInfo_Parms), Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetTracePunchInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetTracePunchInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetTracePunchInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetTracePunchInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetTracePunchInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetTracePunchInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetTriviaQuizInfo_Statics
	{
		struct YMiniGameOptions_DebugMenu_eventGetTriviaQuizInfo_Parms
		{
			FMiniGame_TriviaQuiz ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetTriviaQuizInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YMiniGameOptions_DebugMenu_eventGetTriviaQuizInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FMiniGame_TriviaQuiz, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetTriviaQuizInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetTriviaQuizInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetTriviaQuizInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YMiniGameOptions_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetTriviaQuizInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYMiniGameOptions_DebugMenu, nullptr, "GetTriviaQuizInfo", nullptr, nullptr, sizeof(YMiniGameOptions_DebugMenu_eventGetTriviaQuizInfo_Parms), Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetTriviaQuizInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetTriviaQuizInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetTriviaQuizInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetTriviaQuizInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetTriviaQuizInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetTriviaQuizInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsApplyForDebugMiniGame_Statics
	{
		struct YMiniGameOptions_DebugMenu_eventIsApplyForDebugMiniGame_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsApplyForDebugMiniGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YMiniGameOptions_DebugMenu_eventIsApplyForDebugMiniGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsApplyForDebugMiniGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YMiniGameOptions_DebugMenu_eventIsApplyForDebugMiniGame_Parms), &Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsApplyForDebugMiniGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsApplyForDebugMiniGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsApplyForDebugMiniGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsApplyForDebugMiniGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YMiniGameOptions_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsApplyForDebugMiniGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYMiniGameOptions_DebugMenu, nullptr, "IsApplyForDebugMiniGame", nullptr, nullptr, sizeof(YMiniGameOptions_DebugMenu_eventIsApplyForDebugMiniGame_Parms), Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsApplyForDebugMiniGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsApplyForDebugMiniGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsApplyForDebugMiniGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsApplyForDebugMiniGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsApplyForDebugMiniGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsApplyForDebugMiniGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsDebugMiniGameParameter_Statics
	{
		struct YMiniGameOptions_DebugMenu_eventIsDebugMiniGameParameter_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsDebugMiniGameParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YMiniGameOptions_DebugMenu_eventIsDebugMiniGameParameter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsDebugMiniGameParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YMiniGameOptions_DebugMenu_eventIsDebugMiniGameParameter_Parms), &Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsDebugMiniGameParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsDebugMiniGameParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsDebugMiniGameParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsDebugMiniGameParameter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YMiniGameOptions_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsDebugMiniGameParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYMiniGameOptions_DebugMenu, nullptr, "IsDebugMiniGameParameter", nullptr, nullptr, sizeof(YMiniGameOptions_DebugMenu_eventIsDebugMiniGameParameter_Parms), Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsDebugMiniGameParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsDebugMiniGameParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsDebugMiniGameParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsDebugMiniGameParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsDebugMiniGameParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsDebugMiniGameParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsDebugTick_Statics
	{
		struct YMiniGameOptions_DebugMenu_eventIsDebugTick_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsDebugTick_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YMiniGameOptions_DebugMenu_eventIsDebugTick_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsDebugTick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YMiniGameOptions_DebugMenu_eventIsDebugTick_Parms), &Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsDebugTick_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsDebugTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsDebugTick_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsDebugTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YMiniGameOptions_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsDebugTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYMiniGameOptions_DebugMenu, nullptr, "IsDebugTick", nullptr, nullptr, sizeof(YMiniGameOptions_DebugMenu_eventIsDebugTick_Parms), Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsDebugTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsDebugTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsDebugTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsDebugTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsDebugTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsDebugTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_SetCorrectAnswer_Statics
	{
		struct YMiniGameOptions_DebugMenu_eventSetCorrectAnswer_Parms
		{
			FString _CorrectAnswer;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__CorrectAnswer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__CorrectAnswer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_SetCorrectAnswer_Statics::NewProp__CorrectAnswer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_SetCorrectAnswer_Statics::NewProp__CorrectAnswer = { "_CorrectAnswer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YMiniGameOptions_DebugMenu_eventSetCorrectAnswer_Parms, _CorrectAnswer), METADATA_PARAMS(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_SetCorrectAnswer_Statics::NewProp__CorrectAnswer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_SetCorrectAnswer_Statics::NewProp__CorrectAnswer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_SetCorrectAnswer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_SetCorrectAnswer_Statics::NewProp__CorrectAnswer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_SetCorrectAnswer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YMiniGameOptions_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_SetCorrectAnswer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYMiniGameOptions_DebugMenu, nullptr, "SetCorrectAnswer", nullptr, nullptr, sizeof(YMiniGameOptions_DebugMenu_eventSetCorrectAnswer_Parms), Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_SetCorrectAnswer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_SetCorrectAnswer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_SetCorrectAnswer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_SetCorrectAnswer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_SetCorrectAnswer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_SetCorrectAnswer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYMiniGameOptions_DebugMenu_NoRegister()
	{
		return UYMiniGameOptions_DebugMenu::StaticClass();
	}
	struct Z_Construct_UClass_UYMiniGameOptions_DebugMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYMiniGameOptions_DebugMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELDebugMenuRootBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYMiniGameOptions_DebugMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_DisableDebugStateAndTick, "DisableDebugStateAndTick" }, // 1750731586
		{ &Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_DisableDebugTick, "DisableDebugTick" }, // 2095440732
		{ &Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_DisableImmidiateMiniGameState, "DisableImmidiateMiniGameState" }, // 2808912271
		{ &Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetChipGatherInfo, "GetChipGatherInfo" }, // 574850556
		{ &Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetDamageChallengeInfo, "GetDamageChallengeInfo" }, // 567751270
		{ &Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetDebugMiniGameLevel, "GetDebugMiniGameLevel" }, // 3172171016
		{ &Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetFindOrangeInfo, "GetFindOrangeInfo" }, // 3863756005
		{ &Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetFindTheDifferenceInfo, "GetFindTheDifferenceInfo" }, // 1723777568
		{ &Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetHomeRunInfo, "GetHomeRunInfo" }, // 1455414586
		{ &Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetImmidiateMiniGameState, "GetImmidiateMiniGameState" }, // 2522330742
		{ &Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetMiniGameDebugMenuParam, "GetMiniGameDebugMenuParam" }, // 1508327365
		{ &Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetObjectCountInfo, "GetObjectCountInfo" }, // 391861173
		{ &Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetPentaSaisInfo, "GetPentaSaisInfo" }, // 1428850641
		{ &Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetSlothSlingInfo, "GetSlothSlingInfo" }, // 2272277250
		{ &Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetSpotLightInfo, "GetSpotLightInfo" }, // 2580993744
		{ &Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetTracePunchInfo, "GetTracePunchInfo" }, // 668059686
		{ &Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_GetTriviaQuizInfo, "GetTriviaQuizInfo" }, // 1931734427
		{ &Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsApplyForDebugMiniGame, "IsApplyForDebugMiniGame" }, // 2760256897
		{ &Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsDebugMiniGameParameter, "IsDebugMiniGameParameter" }, // 1890043225
		{ &Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_IsDebugTick, "IsDebugTick" }, // 4251750030
		{ &Z_Construct_UFunction_UYMiniGameOptions_DebugMenu_SetCorrectAnswer, "SetCorrectAnswer" }, // 345481393
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYMiniGameOptions_DebugMenu_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YMiniGameOptions_DebugMenu.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YMiniGameOptions_DebugMenu.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYMiniGameOptions_DebugMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYMiniGameOptions_DebugMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYMiniGameOptions_DebugMenu_Statics::ClassParams = {
		&UYMiniGameOptions_DebugMenu::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UYMiniGameOptions_DebugMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYMiniGameOptions_DebugMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYMiniGameOptions_DebugMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYMiniGameOptions_DebugMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYMiniGameOptions_DebugMenu, 232292375);
	template<> ABP_200508_API UClass* StaticClass<UYMiniGameOptions_DebugMenu>()
	{
		return UYMiniGameOptions_DebugMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYMiniGameOptions_DebugMenu(Z_Construct_UClass_UYMiniGameOptions_DebugMenu, &UYMiniGameOptions_DebugMenu::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UYMiniGameOptions_DebugMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYMiniGameOptions_DebugMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
