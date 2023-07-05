// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/MiniGameDebugMenuParam_Common.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiniGameDebugMenuParam_Common() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FMiniGameDebugMenuParam_Common::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common, Z_Construct_UPackage__Script_ABP_200508(), TEXT("MiniGameDebugMenuParam_Common"), sizeof(FMiniGameDebugMenuParam_Common), Get_Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FMiniGameDebugMenuParam_Common>()
{
	return FMiniGameDebugMenuParam_Common::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMiniGameDebugMenuParam_Common(FMiniGameDebugMenuParam_Common::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("MiniGameDebugMenuParam_Common"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFMiniGameDebugMenuParam_Common
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFMiniGameDebugMenuParam_Common()
	{
		UScriptStruct::DeferCppStructOps<FMiniGameDebugMenuParam_Common>(FName(TEXT("MiniGameDebugMenuParam_Common")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFMiniGameDebugMenuParam_Common;
	struct Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDebugPause_MetaData[];
#endif
		static void NewProp_bIsDebugPause_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDebugPause;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDebugTimerStop_MetaData[];
#endif
		static void NewProp_bIsDebugTimerStop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDebugTimerStop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sLanguageIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sLanguageIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDebugDispCorrect_MetaData[];
#endif
		static void NewProp_bIsDebugDispCorrect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDebugDispCorrect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_strCorrectAnswer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_strCorrectAnswer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSingleMode_MetaData[];
#endif
		static void NewProp_bIsSingleMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSingleMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCPUNotWorking_MetaData[];
#endif
		static void NewProp_bIsCPUNotWorking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCPUNotWorking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sCameraIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sCameraIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bChangeWinner_MetaData[];
#endif
		static void NewProp_bChangeWinner_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bChangeWinner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sWinnerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sWinnerIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bChangeWinnerTeam_MetaData[];
#endif
		static void NewProp_bChangeWinnerTeam_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bChangeWinnerTeam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sWinnerTeamIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sWinnerTeamIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MiniGameDebugMenuParam_Common.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMiniGameDebugMenuParam_Common>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bIsDebugPause_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGameDebugMenuParam_Common" },
		{ "ModuleRelativePath", "Public/MiniGameDebugMenuParam_Common.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bIsDebugPause_SetBit(void* Obj)
	{
		((FMiniGameDebugMenuParam_Common*)Obj)->bIsDebugPause = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bIsDebugPause = { "bIsDebugPause", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMiniGameDebugMenuParam_Common), &Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bIsDebugPause_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bIsDebugPause_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bIsDebugPause_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bIsDebugTimerStop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGameDebugMenuParam_Common" },
		{ "ModuleRelativePath", "Public/MiniGameDebugMenuParam_Common.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bIsDebugTimerStop_SetBit(void* Obj)
	{
		((FMiniGameDebugMenuParam_Common*)Obj)->bIsDebugTimerStop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bIsDebugTimerStop = { "bIsDebugTimerStop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMiniGameDebugMenuParam_Common), &Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bIsDebugTimerStop_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bIsDebugTimerStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bIsDebugTimerStop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_sLanguageIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGameDebugMenuParam_Common" },
		{ "ModuleRelativePath", "Public/MiniGameDebugMenuParam_Common.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_sLanguageIndex = { "sLanguageIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGameDebugMenuParam_Common, sLanguageIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_sLanguageIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_sLanguageIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bIsDebugDispCorrect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGameDebugMenuParam_Common" },
		{ "ModuleRelativePath", "Public/MiniGameDebugMenuParam_Common.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bIsDebugDispCorrect_SetBit(void* Obj)
	{
		((FMiniGameDebugMenuParam_Common*)Obj)->bIsDebugDispCorrect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bIsDebugDispCorrect = { "bIsDebugDispCorrect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMiniGameDebugMenuParam_Common), &Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bIsDebugDispCorrect_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bIsDebugDispCorrect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bIsDebugDispCorrect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_strCorrectAnswer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGameDebugMenuParam_Common" },
		{ "ModuleRelativePath", "Public/MiniGameDebugMenuParam_Common.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_strCorrectAnswer = { "strCorrectAnswer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGameDebugMenuParam_Common, strCorrectAnswer), METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_strCorrectAnswer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_strCorrectAnswer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bIsSingleMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGameDebugMenuParam_Common" },
		{ "ModuleRelativePath", "Public/MiniGameDebugMenuParam_Common.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bIsSingleMode_SetBit(void* Obj)
	{
		((FMiniGameDebugMenuParam_Common*)Obj)->bIsSingleMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bIsSingleMode = { "bIsSingleMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMiniGameDebugMenuParam_Common), &Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bIsSingleMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bIsSingleMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bIsSingleMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bIsCPUNotWorking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGameDebugMenuParam_Common" },
		{ "ModuleRelativePath", "Public/MiniGameDebugMenuParam_Common.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bIsCPUNotWorking_SetBit(void* Obj)
	{
		((FMiniGameDebugMenuParam_Common*)Obj)->bIsCPUNotWorking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bIsCPUNotWorking = { "bIsCPUNotWorking", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMiniGameDebugMenuParam_Common), &Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bIsCPUNotWorking_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bIsCPUNotWorking_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bIsCPUNotWorking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_sCameraIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGameDebugMenuParam_Common" },
		{ "ModuleRelativePath", "Public/MiniGameDebugMenuParam_Common.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_sCameraIndex = { "sCameraIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGameDebugMenuParam_Common, sCameraIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_sCameraIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_sCameraIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bChangeWinner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGameDebugMenuParam_Common" },
		{ "ModuleRelativePath", "Public/MiniGameDebugMenuParam_Common.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bChangeWinner_SetBit(void* Obj)
	{
		((FMiniGameDebugMenuParam_Common*)Obj)->bChangeWinner = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bChangeWinner = { "bChangeWinner", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMiniGameDebugMenuParam_Common), &Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bChangeWinner_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bChangeWinner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bChangeWinner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_sWinnerIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGameDebugMenuParam_Common" },
		{ "ModuleRelativePath", "Public/MiniGameDebugMenuParam_Common.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_sWinnerIndex = { "sWinnerIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGameDebugMenuParam_Common, sWinnerIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_sWinnerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_sWinnerIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bChangeWinnerTeam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGameDebugMenuParam_Common" },
		{ "ModuleRelativePath", "Public/MiniGameDebugMenuParam_Common.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bChangeWinnerTeam_SetBit(void* Obj)
	{
		((FMiniGameDebugMenuParam_Common*)Obj)->bChangeWinnerTeam = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bChangeWinnerTeam = { "bChangeWinnerTeam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMiniGameDebugMenuParam_Common), &Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bChangeWinnerTeam_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bChangeWinnerTeam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bChangeWinnerTeam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_sWinnerTeamIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGameDebugMenuParam_Common" },
		{ "ModuleRelativePath", "Public/MiniGameDebugMenuParam_Common.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_sWinnerTeamIndex = { "sWinnerTeamIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGameDebugMenuParam_Common, sWinnerTeamIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_sWinnerTeamIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_sWinnerTeamIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bIsDebugPause,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bIsDebugTimerStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_sLanguageIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bIsDebugDispCorrect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_strCorrectAnswer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bIsSingleMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bIsCPUNotWorking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_sCameraIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bChangeWinner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_sWinnerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_bChangeWinnerTeam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::NewProp_sWinnerTeamIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"MiniGameDebugMenuParam_Common",
		sizeof(FMiniGameDebugMenuParam_Common),
		alignof(FMiniGameDebugMenuParam_Common),
		Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MiniGameDebugMenuParam_Common"), sizeof(FMiniGameDebugMenuParam_Common), Get_Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMiniGameDebugMenuParam_Common_Hash() { return 812978541U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
