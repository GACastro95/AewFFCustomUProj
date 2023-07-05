// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELMatchRecordsWrestlerInfo_BP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMatchRecordsWrestlerInfo_BP() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
class UScriptStruct* FELMatchRecordsWrestlerInfo_BP::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ELMatchRecordsWrestlerInfo_BP"), sizeof(FELMatchRecordsWrestlerInfo_BP), Get_Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FELMatchRecordsWrestlerInfo_BP>()
{
	return FELMatchRecordsWrestlerInfo_BP::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP(FELMatchRecordsWrestlerInfo_BP::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("ELMatchRecordsWrestlerInfo_BP"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFELMatchRecordsWrestlerInfo_BP
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFELMatchRecordsWrestlerInfo_BP()
	{
		UScriptStruct::DeferCppStructOps<FELMatchRecordsWrestlerInfo_BP>(FName(TEXT("ELMatchRecordsWrestlerInfo_BP")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFELMatchRecordsWrestlerInfo_BP;
	struct Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Winner_MetaData[];
#endif
		static void NewProp_Winner_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Winner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Loser_MetaData[];
#endif
		static void NewProp_Loser_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Loser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsedByHostPad_MetaData[];
#endif
		static void NewProp_UsedByHostPad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UsedByHostPad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TeamNo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsWrestlerInfo_BP.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMatchRecordsWrestlerInfo_BP>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsWrestlerInfo_BP" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsWrestlerInfo_BP.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsWrestlerInfo_BP, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::NewProp_WrestlerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::NewProp_UID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsWrestlerInfo_BP" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsWrestlerInfo_BP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsWrestlerInfo_BP, UID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::NewProp_UID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::NewProp_UID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::NewProp_Winner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsWrestlerInfo_BP" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsWrestlerInfo_BP.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::NewProp_Winner_SetBit(void* Obj)
	{
		((FELMatchRecordsWrestlerInfo_BP*)Obj)->Winner = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::NewProp_Winner = { "Winner", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMatchRecordsWrestlerInfo_BP), &Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::NewProp_Winner_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::NewProp_Winner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::NewProp_Winner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::NewProp_Loser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsWrestlerInfo_BP" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsWrestlerInfo_BP.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::NewProp_Loser_SetBit(void* Obj)
	{
		((FELMatchRecordsWrestlerInfo_BP*)Obj)->Loser = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::NewProp_Loser = { "Loser", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMatchRecordsWrestlerInfo_BP), &Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::NewProp_Loser_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::NewProp_Loser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::NewProp_Loser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::NewProp_UsedByHostPad_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsWrestlerInfo_BP" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsWrestlerInfo_BP.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::NewProp_UsedByHostPad_SetBit(void* Obj)
	{
		((FELMatchRecordsWrestlerInfo_BP*)Obj)->UsedByHostPad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::NewProp_UsedByHostPad = { "UsedByHostPad", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMatchRecordsWrestlerInfo_BP), &Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::NewProp_UsedByHostPad_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::NewProp_UsedByHostPad_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::NewProp_UsedByHostPad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::NewProp_TeamNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsWrestlerInfo_BP" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsWrestlerInfo_BP.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::NewProp_TeamNo = { "TeamNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsWrestlerInfo_BP, TeamNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::NewProp_TeamNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::NewProp_TeamNo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::NewProp_UID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::NewProp_Winner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::NewProp_Loser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::NewProp_UsedByHostPad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::NewProp_TeamNo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"ELMatchRecordsWrestlerInfo_BP",
		sizeof(FELMatchRecordsWrestlerInfo_BP),
		alignof(FELMatchRecordsWrestlerInfo_BP),
		Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMatchRecordsWrestlerInfo_BP"), sizeof(FELMatchRecordsWrestlerInfo_BP), Get_Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP_Hash() { return 2468684336U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
