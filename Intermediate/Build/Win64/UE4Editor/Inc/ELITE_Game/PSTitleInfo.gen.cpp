// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/PSTitleInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePSTitleInfo() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FPSTitleInfo();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
class UScriptStruct* FPSTitleInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FPSTitleInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPSTitleInfo, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("PSTitleInfo"), sizeof(FPSTitleInfo), Get_Z_Construct_UScriptStruct_FPSTitleInfo_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FPSTitleInfo>()
{
	return FPSTitleInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPSTitleInfo(FPSTitleInfo::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("PSTitleInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFPSTitleInfo
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFPSTitleInfo()
	{
		UScriptStruct::DeferCppStructOps<FPSTitleInfo>(FName(TEXT("PSTitleInfo")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFPSTitleInfo;
	struct Z_Construct_UScriptStruct_FPSTitleInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PS5UniqueAppId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PS5UniqueAppId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PS4TitleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PS4TitleId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PS4Fingerprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PS4Fingerprint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPSTitleInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PSTitleInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPSTitleInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPSTitleInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPSTitleInfo_Statics::NewProp_PS5UniqueAppId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PSTitleInfo" },
		{ "ModuleRelativePath", "Public/PSTitleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPSTitleInfo_Statics::NewProp_PS5UniqueAppId = { "PS5UniqueAppId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSTitleInfo, PS5UniqueAppId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPSTitleInfo_Statics::NewProp_PS5UniqueAppId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPSTitleInfo_Statics::NewProp_PS5UniqueAppId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPSTitleInfo_Statics::NewProp_PS4TitleId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PSTitleInfo" },
		{ "ModuleRelativePath", "Public/PSTitleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPSTitleInfo_Statics::NewProp_PS4TitleId = { "PS4TitleId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSTitleInfo, PS4TitleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPSTitleInfo_Statics::NewProp_PS4TitleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPSTitleInfo_Statics::NewProp_PS4TitleId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPSTitleInfo_Statics::NewProp_PS4Fingerprint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PSTitleInfo" },
		{ "ModuleRelativePath", "Public/PSTitleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPSTitleInfo_Statics::NewProp_PS4Fingerprint = { "PS4Fingerprint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSTitleInfo, PS4Fingerprint), METADATA_PARAMS(Z_Construct_UScriptStruct_FPSTitleInfo_Statics::NewProp_PS4Fingerprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPSTitleInfo_Statics::NewProp_PS4Fingerprint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPSTitleInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPSTitleInfo_Statics::NewProp_PS5UniqueAppId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPSTitleInfo_Statics::NewProp_PS4TitleId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPSTitleInfo_Statics::NewProp_PS4Fingerprint,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPSTitleInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"PSTitleInfo",
		sizeof(FPSTitleInfo),
		alignof(FPSTitleInfo),
		Z_Construct_UScriptStruct_FPSTitleInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPSTitleInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPSTitleInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPSTitleInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPSTitleInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPSTitleInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PSTitleInfo"), sizeof(FPSTitleInfo), Get_Z_Construct_UScriptStruct_FPSTitleInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPSTitleInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPSTitleInfo_Hash() { return 2873334598U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
