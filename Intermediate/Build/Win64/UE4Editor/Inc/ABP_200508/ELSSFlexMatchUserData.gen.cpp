// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSFlexMatchUserData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSFlexMatchUserData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSFlexMatchUserData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FELSSFlexMatchUserData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELSSFlexMatchUserData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELSSFlexMatchUserData"), sizeof(FELSSFlexMatchUserData), Get_Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELSSFlexMatchUserData>()
{
	return FELSSFlexMatchUserData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELSSFlexMatchUserData(FELSSFlexMatchUserData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELSSFlexMatchUserData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELSSFlexMatchUserData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELSSFlexMatchUserData()
	{
		UScriptStruct::DeferCppStructOps<FELSSFlexMatchUserData>(FName(TEXT("ELSSFlexMatchUserData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELSSFlexMatchUserData;
	struct Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRank_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerRank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SSLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserIconId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UserIconId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UserBadges_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserBadges_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UserBadges;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELSSFlexMatchUserData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELSSFlexMatchUserData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics::NewProp_playerId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSFlexMatchUserData" },
		{ "ModuleRelativePath", "Public/ELSSFlexMatchUserData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics::NewProp_playerId = { "playerId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSFlexMatchUserData, playerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics::NewProp_playerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics::NewProp_playerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics::NewProp_PlayerRank_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSFlexMatchUserData" },
		{ "ModuleRelativePath", "Public/ELSSFlexMatchUserData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics::NewProp_PlayerRank = { "PlayerRank", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSFlexMatchUserData, PlayerRank), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics::NewProp_PlayerRank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics::NewProp_PlayerRank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics::NewProp_SSLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSFlexMatchUserData" },
		{ "ModuleRelativePath", "Public/ELSSFlexMatchUserData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics::NewProp_SSLevel = { "SSLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSFlexMatchUserData, SSLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics::NewProp_SSLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics::NewProp_SSLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics::NewProp_UserName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSFlexMatchUserData" },
		{ "ModuleRelativePath", "Public/ELSSFlexMatchUserData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSFlexMatchUserData, UserName), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics::NewProp_UserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics::NewProp_UserName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics::NewProp_UserIconId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSFlexMatchUserData" },
		{ "ModuleRelativePath", "Public/ELSSFlexMatchUserData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics::NewProp_UserIconId = { "UserIconId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSFlexMatchUserData, UserIconId), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics::NewProp_UserIconId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics::NewProp_UserIconId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics::NewProp_UserBadges_Inner = { "UserBadges", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics::NewProp_UserBadges_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSFlexMatchUserData" },
		{ "ModuleRelativePath", "Public/ELSSFlexMatchUserData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics::NewProp_UserBadges = { "UserBadges", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSFlexMatchUserData, UserBadges), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics::NewProp_UserBadges_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics::NewProp_UserBadges_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics::NewProp_playerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics::NewProp_PlayerRank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics::NewProp_SSLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics::NewProp_UserName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics::NewProp_UserIconId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics::NewProp_UserBadges_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics::NewProp_UserBadges,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELSSFlexMatchUserData",
		sizeof(FELSSFlexMatchUserData),
		alignof(FELSSFlexMatchUserData),
		Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELSSFlexMatchUserData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELSSFlexMatchUserData"), sizeof(FELSSFlexMatchUserData), Get_Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELSSFlexMatchUserData_Hash() { return 232964225U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
