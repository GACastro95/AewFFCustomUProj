// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELMatchRule_Native.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMatchRule_Native() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELMatchRule_Native();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
class UScriptStruct* FELMatchRule_Native::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FELMatchRule_Native_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMatchRule_Native, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ELMatchRule_Native"), sizeof(FELMatchRule_Native), Get_Z_Construct_UScriptStruct_FELMatchRule_Native_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FELMatchRule_Native>()
{
	return FELMatchRule_Native::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMatchRule_Native(FELMatchRule_Native::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("ELMatchRule_Native"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFELMatchRule_Native
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFELMatchRule_Native()
	{
		UScriptStruct::DeferCppStructOps<FELMatchRule_Native>(FName(TEXT("ELMatchRule_Native")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFELMatchRule_Native;
	struct Z_Construct_UScriptStruct_FELMatchRule_Native_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseInteractiveVictoryScene_MetaData[];
#endif
		static void NewProp_UseInteractiveVictoryScene_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseInteractiveVictoryScene;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableBlood_MetaData[];
#endif
		static void NewProp_EnableBlood_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableBlood;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableManualTarget_MetaData[];
#endif
		static void NewProp_EnableManualTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableManualTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableFaceButtonReversal_MetaData[];
#endif
		static void NewProp_EnableFaceButtonReversal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableFaceButtonReversal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableGuideHUD_MetaData[];
#endif
		static void NewProp_EnableGuideHUD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableGuideHUD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableGameplayAssistEffects_MetaData[];
#endif
		static void NewProp_EnableGameplayAssistEffects_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableGameplayAssistEffects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnablePlayerIndicator_MetaData[];
#endif
		static void NewProp_EnablePlayerIndicator_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnablePlayerIndicator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableHistoricExplosion_MetaData[];
#endif
		static void NewProp_EnableHistoricExplosion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableHistoricExplosion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableRopeBreak_MetaData[];
#endif
		static void NewProp_EnableRopeBreak_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableRopeBreak;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMatchRule_Native.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMatchRule_Native>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_UseInteractiveVictoryScene_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRule_Native" },
		{ "ModuleRelativePath", "Public/ELMatchRule_Native.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_UseInteractiveVictoryScene_SetBit(void* Obj)
	{
		((FELMatchRule_Native*)Obj)->UseInteractiveVictoryScene = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_UseInteractiveVictoryScene = { "UseInteractiveVictoryScene", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMatchRule_Native), &Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_UseInteractiveVictoryScene_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_UseInteractiveVictoryScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_UseInteractiveVictoryScene_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableBlood_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRule_Native" },
		{ "ModuleRelativePath", "Public/ELMatchRule_Native.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableBlood_SetBit(void* Obj)
	{
		((FELMatchRule_Native*)Obj)->EnableBlood = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableBlood = { "EnableBlood", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMatchRule_Native), &Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableBlood_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableBlood_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableBlood_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableManualTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRule_Native" },
		{ "ModuleRelativePath", "Public/ELMatchRule_Native.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableManualTarget_SetBit(void* Obj)
	{
		((FELMatchRule_Native*)Obj)->EnableManualTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableManualTarget = { "EnableManualTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMatchRule_Native), &Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableManualTarget_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableManualTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableManualTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableFaceButtonReversal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRule_Native" },
		{ "ModuleRelativePath", "Public/ELMatchRule_Native.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableFaceButtonReversal_SetBit(void* Obj)
	{
		((FELMatchRule_Native*)Obj)->EnableFaceButtonReversal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableFaceButtonReversal = { "EnableFaceButtonReversal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMatchRule_Native), &Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableFaceButtonReversal_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableFaceButtonReversal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableFaceButtonReversal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableGuideHUD_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRule_Native" },
		{ "ModuleRelativePath", "Public/ELMatchRule_Native.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableGuideHUD_SetBit(void* Obj)
	{
		((FELMatchRule_Native*)Obj)->EnableGuideHUD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableGuideHUD = { "EnableGuideHUD", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMatchRule_Native), &Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableGuideHUD_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableGuideHUD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableGuideHUD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableGameplayAssistEffects_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRule_Native" },
		{ "ModuleRelativePath", "Public/ELMatchRule_Native.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableGameplayAssistEffects_SetBit(void* Obj)
	{
		((FELMatchRule_Native*)Obj)->EnableGameplayAssistEffects = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableGameplayAssistEffects = { "EnableGameplayAssistEffects", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMatchRule_Native), &Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableGameplayAssistEffects_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableGameplayAssistEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableGameplayAssistEffects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnablePlayerIndicator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRule_Native" },
		{ "ModuleRelativePath", "Public/ELMatchRule_Native.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnablePlayerIndicator_SetBit(void* Obj)
	{
		((FELMatchRule_Native*)Obj)->EnablePlayerIndicator = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnablePlayerIndicator = { "EnablePlayerIndicator", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMatchRule_Native), &Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnablePlayerIndicator_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnablePlayerIndicator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnablePlayerIndicator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableHistoricExplosion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRule_Native" },
		{ "ModuleRelativePath", "Public/ELMatchRule_Native.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableHistoricExplosion_SetBit(void* Obj)
	{
		((FELMatchRule_Native*)Obj)->EnableHistoricExplosion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableHistoricExplosion = { "EnableHistoricExplosion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMatchRule_Native), &Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableHistoricExplosion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableHistoricExplosion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableHistoricExplosion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableRopeBreak_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRule_Native" },
		{ "ModuleRelativePath", "Public/ELMatchRule_Native.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableRopeBreak_SetBit(void* Obj)
	{
		((FELMatchRule_Native*)Obj)->EnableRopeBreak = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableRopeBreak = { "EnableRopeBreak", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMatchRule_Native), &Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableRopeBreak_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableRopeBreak_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableRopeBreak_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_UseInteractiveVictoryScene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableBlood,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableManualTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableFaceButtonReversal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableGuideHUD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableGameplayAssistEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnablePlayerIndicator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableHistoricExplosion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::NewProp_EnableRopeBreak,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"ELMatchRule_Native",
		sizeof(FELMatchRule_Native),
		alignof(FELMatchRule_Native),
		Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMatchRule_Native()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMatchRule_Native_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMatchRule_Native"), sizeof(FELMatchRule_Native), Get_Z_Construct_UScriptStruct_FELMatchRule_Native_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMatchRule_Native_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMatchRule_Native_Hash() { return 3513074098U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
