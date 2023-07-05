// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELMatchRecordsWeaponInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMatchRecordsWeaponInfo() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELMatchRecordsWeaponInfo();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
class UScriptStruct* FELMatchRecordsWeaponInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FELMatchRecordsWeaponInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMatchRecordsWeaponInfo, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ELMatchRecordsWeaponInfo"), sizeof(FELMatchRecordsWeaponInfo), Get_Z_Construct_UScriptStruct_FELMatchRecordsWeaponInfo_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FELMatchRecordsWeaponInfo>()
{
	return FELMatchRecordsWeaponInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMatchRecordsWeaponInfo(FELMatchRecordsWeaponInfo::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("ELMatchRecordsWeaponInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFELMatchRecordsWeaponInfo
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFELMatchRecordsWeaponInfo()
	{
		UScriptStruct::DeferCppStructOps<FELMatchRecordsWeaponInfo>(FName(TEXT("ELMatchRecordsWeaponInfo")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFELMatchRecordsWeaponInfo;
	struct Z_Construct_UScriptStruct_FELMatchRecordsWeaponInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeaponID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HitCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsWeaponInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsWeaponInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMatchRecordsWeaponInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMatchRecordsWeaponInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsWeaponInfo_Statics::NewProp_WeaponID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsWeaponInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsWeaponInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsWeaponInfo_Statics::NewProp_WeaponID = { "WeaponID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsWeaponInfo, WeaponID), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsWeaponInfo_Statics::NewProp_WeaponID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsWeaponInfo_Statics::NewProp_WeaponID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsWeaponInfo_Statics::NewProp_HitCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsWeaponInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsWeaponInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsWeaponInfo_Statics::NewProp_HitCount = { "HitCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsWeaponInfo, HitCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsWeaponInfo_Statics::NewProp_HitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsWeaponInfo_Statics::NewProp_HitCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMatchRecordsWeaponInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsWeaponInfo_Statics::NewProp_WeaponID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsWeaponInfo_Statics::NewProp_HitCount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMatchRecordsWeaponInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"ELMatchRecordsWeaponInfo",
		sizeof(FELMatchRecordsWeaponInfo),
		alignof(FELMatchRecordsWeaponInfo),
		Z_Construct_UScriptStruct_FELMatchRecordsWeaponInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsWeaponInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsWeaponInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsWeaponInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMatchRecordsWeaponInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMatchRecordsWeaponInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMatchRecordsWeaponInfo"), sizeof(FELMatchRecordsWeaponInfo), Get_Z_Construct_UScriptStruct_FELMatchRecordsWeaponInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMatchRecordsWeaponInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMatchRecordsWeaponInfo_Hash() { return 1378628275U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
