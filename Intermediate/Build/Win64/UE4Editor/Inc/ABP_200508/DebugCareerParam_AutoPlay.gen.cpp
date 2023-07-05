// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/DebugCareerParam_AutoPlay.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugCareerParam_AutoPlay() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerDebug_AutoPlay_MatchTransition();
// End Cross Module References
class UScriptStruct* FDebugCareerParam_AutoPlay::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay, Z_Construct_UPackage__Script_ABP_200508(), TEXT("DebugCareerParam_AutoPlay"), sizeof(FDebugCareerParam_AutoPlay), Get_Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FDebugCareerParam_AutoPlay>()
{
	return FDebugCareerParam_AutoPlay::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDebugCareerParam_AutoPlay(FDebugCareerParam_AutoPlay::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("DebugCareerParam_AutoPlay"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFDebugCareerParam_AutoPlay
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFDebugCareerParam_AutoPlay()
	{
		UScriptStruct::DeferCppStructOps<FDebugCareerParam_AutoPlay>(FName(TEXT("DebugCareerParam_AutoPlay")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFDebugCareerParam_AutoPlay;
	struct Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bRandomAutoPlayStartTrigger_MetaData[];
#endif
		static void NewProp_m_bRandomAutoPlayStartTrigger_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bRandomAutoPlayStartTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bRandomAutoPlayAbortTrigger_MetaData[];
#endif
		static void NewProp_m_bRandomAutoPlayAbortTrigger_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bRandomAutoPlayAbortTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bRandomAutoPlayResumeTrigger_MetaData[];
#endif
		static void NewProp_m_bRandomAutoPlayResumeTrigger_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bRandomAutoPlayResumeTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bRandomAutoPlayNowTrigger_MetaData[];
#endif
		static void NewProp_m_bRandomAutoPlayNowTrigger_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bRandomAutoPlayNowTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bDataDriven_All_StartTrigger_MetaData[];
#endif
		static void NewProp_m_bDataDriven_All_StartTrigger_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bDataDriven_All_StartTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bDataDriven_Range_StartTrigger_MetaData[];
#endif
		static void NewProp_m_bDataDriven_Range_StartTrigger_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bDataDriven_Range_StartTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bDataDriven_Individual_StartTrigger_MetaData[];
#endif
		static void NewProp_m_bDataDriven_Individual_StartTrigger_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bDataDriven_Individual_StartTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bDataDriven_AbortTrigger_MetaData[];
#endif
		static void NewProp_m_bDataDriven_AbortTrigger_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bDataDriven_AbortTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bDataDriven_ResumeTrigger_MetaData[];
#endif
		static void NewProp_m_bDataDriven_ResumeTrigger_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bDataDriven_ResumeTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DataDriven_Range_StartNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_DataDriven_Range_StartNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DataDriven_Range_EndNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_DataDriven_Range_EndNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bDataDriven_Range_Loop_MetaData[];
#endif
		static void NewProp_m_bDataDriven_Range_Loop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bDataDriven_Range_Loop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_DataDriven_Individual_Wrestler_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DataDriven_Individual_Wrestler_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_DataDriven_Individual_Wrestler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DataDriven_Individual_Prologue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_DataDriven_Individual_Prologue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DataDriven_Individual_AllOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_DataDriven_Individual_AllOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DataDriven_Individual_FullGear_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_DataDriven_Individual_FullGear;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DataDriven_Individual_Revolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_DataDriven_Individual_Revolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DataDriven_Individual_DoN_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_DataDriven_Individual_DoN;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bConsumeTurn_MetaData[];
#endif
		static void NewProp_m_bConsumeTurn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bConsumeTurn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bLongLayoutScene_MetaData[];
#endif
		static void NewProp_m_bLongLayoutScene_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bLongLayoutScene;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bGCOutput_MetaData[];
#endif
		static void NewProp_m_bGCOutput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bGCOutput;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_eMatchTransition_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_eMatchTransition_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_eMatchTransition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_AutoPlay.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDebugCareerParam_AutoPlay>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bRandomAutoPlayStartTrigger_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DebugCareerParam_AutoPlay" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_AutoPlay.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bRandomAutoPlayStartTrigger_SetBit(void* Obj)
	{
		((FDebugCareerParam_AutoPlay*)Obj)->m_bRandomAutoPlayStartTrigger = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bRandomAutoPlayStartTrigger = { "m_bRandomAutoPlayStartTrigger", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDebugCareerParam_AutoPlay), &Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bRandomAutoPlayStartTrigger_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bRandomAutoPlayStartTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bRandomAutoPlayStartTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bRandomAutoPlayAbortTrigger_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DebugCareerParam_AutoPlay" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_AutoPlay.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bRandomAutoPlayAbortTrigger_SetBit(void* Obj)
	{
		((FDebugCareerParam_AutoPlay*)Obj)->m_bRandomAutoPlayAbortTrigger = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bRandomAutoPlayAbortTrigger = { "m_bRandomAutoPlayAbortTrigger", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDebugCareerParam_AutoPlay), &Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bRandomAutoPlayAbortTrigger_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bRandomAutoPlayAbortTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bRandomAutoPlayAbortTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bRandomAutoPlayResumeTrigger_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DebugCareerParam_AutoPlay" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_AutoPlay.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bRandomAutoPlayResumeTrigger_SetBit(void* Obj)
	{
		((FDebugCareerParam_AutoPlay*)Obj)->m_bRandomAutoPlayResumeTrigger = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bRandomAutoPlayResumeTrigger = { "m_bRandomAutoPlayResumeTrigger", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDebugCareerParam_AutoPlay), &Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bRandomAutoPlayResumeTrigger_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bRandomAutoPlayResumeTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bRandomAutoPlayResumeTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bRandomAutoPlayNowTrigger_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DebugCareerParam_AutoPlay" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_AutoPlay.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bRandomAutoPlayNowTrigger_SetBit(void* Obj)
	{
		((FDebugCareerParam_AutoPlay*)Obj)->m_bRandomAutoPlayNowTrigger = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bRandomAutoPlayNowTrigger = { "m_bRandomAutoPlayNowTrigger", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDebugCareerParam_AutoPlay), &Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bRandomAutoPlayNowTrigger_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bRandomAutoPlayNowTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bRandomAutoPlayNowTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_All_StartTrigger_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DebugCareerParam_AutoPlay" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_AutoPlay.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_All_StartTrigger_SetBit(void* Obj)
	{
		((FDebugCareerParam_AutoPlay*)Obj)->m_bDataDriven_All_StartTrigger = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_All_StartTrigger = { "m_bDataDriven_All_StartTrigger", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDebugCareerParam_AutoPlay), &Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_All_StartTrigger_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_All_StartTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_All_StartTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_Range_StartTrigger_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DebugCareerParam_AutoPlay" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_AutoPlay.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_Range_StartTrigger_SetBit(void* Obj)
	{
		((FDebugCareerParam_AutoPlay*)Obj)->m_bDataDriven_Range_StartTrigger = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_Range_StartTrigger = { "m_bDataDriven_Range_StartTrigger", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDebugCareerParam_AutoPlay), &Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_Range_StartTrigger_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_Range_StartTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_Range_StartTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_Individual_StartTrigger_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DebugCareerParam_AutoPlay" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_AutoPlay.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_Individual_StartTrigger_SetBit(void* Obj)
	{
		((FDebugCareerParam_AutoPlay*)Obj)->m_bDataDriven_Individual_StartTrigger = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_Individual_StartTrigger = { "m_bDataDriven_Individual_StartTrigger", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDebugCareerParam_AutoPlay), &Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_Individual_StartTrigger_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_Individual_StartTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_Individual_StartTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_AbortTrigger_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DebugCareerParam_AutoPlay" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_AutoPlay.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_AbortTrigger_SetBit(void* Obj)
	{
		((FDebugCareerParam_AutoPlay*)Obj)->m_bDataDriven_AbortTrigger = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_AbortTrigger = { "m_bDataDriven_AbortTrigger", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDebugCareerParam_AutoPlay), &Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_AbortTrigger_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_AbortTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_AbortTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_ResumeTrigger_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DebugCareerParam_AutoPlay" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_AutoPlay.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_ResumeTrigger_SetBit(void* Obj)
	{
		((FDebugCareerParam_AutoPlay*)Obj)->m_bDataDriven_ResumeTrigger = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_ResumeTrigger = { "m_bDataDriven_ResumeTrigger", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDebugCareerParam_AutoPlay), &Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_ResumeTrigger_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_ResumeTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_ResumeTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Range_StartNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DebugCareerParam_AutoPlay" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_AutoPlay.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Range_StartNo = { "m_DataDriven_Range_StartNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebugCareerParam_AutoPlay, m_DataDriven_Range_StartNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Range_StartNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Range_StartNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Range_EndNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DebugCareerParam_AutoPlay" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_AutoPlay.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Range_EndNo = { "m_DataDriven_Range_EndNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebugCareerParam_AutoPlay, m_DataDriven_Range_EndNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Range_EndNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Range_EndNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_Range_Loop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DebugCareerParam_AutoPlay" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_AutoPlay.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_Range_Loop_SetBit(void* Obj)
	{
		((FDebugCareerParam_AutoPlay*)Obj)->m_bDataDriven_Range_Loop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_Range_Loop = { "m_bDataDriven_Range_Loop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDebugCareerParam_AutoPlay), &Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_Range_Loop_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_Range_Loop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_Range_Loop_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Individual_Wrestler_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Individual_Wrestler_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DebugCareerParam_AutoPlay" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_AutoPlay.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Individual_Wrestler = { "m_DataDriven_Individual_Wrestler", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebugCareerParam_AutoPlay, m_DataDriven_Individual_Wrestler), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Individual_Wrestler_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Individual_Wrestler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Individual_Prologue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DebugCareerParam_AutoPlay" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_AutoPlay.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Individual_Prologue = { "m_DataDriven_Individual_Prologue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebugCareerParam_AutoPlay, m_DataDriven_Individual_Prologue), METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Individual_Prologue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Individual_Prologue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Individual_AllOut_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DebugCareerParam_AutoPlay" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_AutoPlay.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Individual_AllOut = { "m_DataDriven_Individual_AllOut", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebugCareerParam_AutoPlay, m_DataDriven_Individual_AllOut), METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Individual_AllOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Individual_AllOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Individual_FullGear_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DebugCareerParam_AutoPlay" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_AutoPlay.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Individual_FullGear = { "m_DataDriven_Individual_FullGear", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebugCareerParam_AutoPlay, m_DataDriven_Individual_FullGear), METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Individual_FullGear_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Individual_FullGear_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Individual_Revolution_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DebugCareerParam_AutoPlay" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_AutoPlay.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Individual_Revolution = { "m_DataDriven_Individual_Revolution", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebugCareerParam_AutoPlay, m_DataDriven_Individual_Revolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Individual_Revolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Individual_Revolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Individual_DoN_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DebugCareerParam_AutoPlay" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_AutoPlay.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Individual_DoN = { "m_DataDriven_Individual_DoN", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebugCareerParam_AutoPlay, m_DataDriven_Individual_DoN), METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Individual_DoN_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Individual_DoN_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bConsumeTurn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DebugCareerParam_AutoPlay" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_AutoPlay.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bConsumeTurn_SetBit(void* Obj)
	{
		((FDebugCareerParam_AutoPlay*)Obj)->m_bConsumeTurn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bConsumeTurn = { "m_bConsumeTurn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDebugCareerParam_AutoPlay), &Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bConsumeTurn_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bConsumeTurn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bConsumeTurn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bLongLayoutScene_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DebugCareerParam_AutoPlay" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_AutoPlay.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bLongLayoutScene_SetBit(void* Obj)
	{
		((FDebugCareerParam_AutoPlay*)Obj)->m_bLongLayoutScene = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bLongLayoutScene = { "m_bLongLayoutScene", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDebugCareerParam_AutoPlay), &Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bLongLayoutScene_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bLongLayoutScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bLongLayoutScene_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bGCOutput_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DebugCareerParam_AutoPlay" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_AutoPlay.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bGCOutput_SetBit(void* Obj)
	{
		((FDebugCareerParam_AutoPlay*)Obj)->m_bGCOutput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bGCOutput = { "m_bGCOutput", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDebugCareerParam_AutoPlay), &Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bGCOutput_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bGCOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bGCOutput_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_eMatchTransition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_eMatchTransition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DebugCareerParam_AutoPlay" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_AutoPlay.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_eMatchTransition = { "m_eMatchTransition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebugCareerParam_AutoPlay, m_eMatchTransition), Z_Construct_UEnum_ABP_200508_ECareerDebug_AutoPlay_MatchTransition, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_eMatchTransition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_eMatchTransition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bRandomAutoPlayStartTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bRandomAutoPlayAbortTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bRandomAutoPlayResumeTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bRandomAutoPlayNowTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_All_StartTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_Range_StartTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_Individual_StartTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_AbortTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_ResumeTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Range_StartNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Range_EndNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bDataDriven_Range_Loop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Individual_Wrestler_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Individual_Wrestler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Individual_Prologue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Individual_AllOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Individual_FullGear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Individual_Revolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_DataDriven_Individual_DoN,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bConsumeTurn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bLongLayoutScene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_bGCOutput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_eMatchTransition_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::NewProp_m_eMatchTransition,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"DebugCareerParam_AutoPlay",
		sizeof(FDebugCareerParam_AutoPlay),
		alignof(FDebugCareerParam_AutoPlay),
		Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DebugCareerParam_AutoPlay"), sizeof(FDebugCareerParam_AutoPlay), Get_Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDebugCareerParam_AutoPlay_Hash() { return 2422130798U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
