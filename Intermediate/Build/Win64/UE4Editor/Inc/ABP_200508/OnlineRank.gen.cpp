// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/OnlineRank.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineRank() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineRank();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FOnlineRank>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FOnlineRank cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FOnlineRank::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FOnlineRank_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnlineRank, Z_Construct_UPackage__Script_ABP_200508(), TEXT("OnlineRank"), sizeof(FOnlineRank), Get_Z_Construct_UScriptStruct_FOnlineRank_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FOnlineRank>()
{
	return FOnlineRank::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOnlineRank(FOnlineRank::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("OnlineRank"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFOnlineRank
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFOnlineRank()
	{
		UScriptStruct::DeferCppStructOps<FOnlineRank>(FName(TEXT("OnlineRank")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFOnlineRank;
	struct Z_Construct_UScriptStruct_FOnlineRank_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RankName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RankName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RankGroupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RankGroupName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RankPointMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RankPointMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RankPointMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RankPointMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabledPointDown_MetaData[];
#endif
		static void NewProp_bEnabledPointDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabledPointDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabledRankDown_MetaData[];
#endif
		static void NewProp_bEnabledRankDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabledRankDown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineRank_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OnlineRank.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOnlineRank_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnlineRank>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineRank_Statics::NewProp_RankName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineRank" },
		{ "ModuleRelativePath", "Public/OnlineRank.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOnlineRank_Statics::NewProp_RankName = { "RankName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnlineRank, RankName), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineRank_Statics::NewProp_RankName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineRank_Statics::NewProp_RankName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineRank_Statics::NewProp_RankGroupName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineRank" },
		{ "ModuleRelativePath", "Public/OnlineRank.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOnlineRank_Statics::NewProp_RankGroupName = { "RankGroupName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnlineRank, RankGroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineRank_Statics::NewProp_RankGroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineRank_Statics::NewProp_RankGroupName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineRank_Statics::NewProp_RankPointMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineRank" },
		{ "ModuleRelativePath", "Public/OnlineRank.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOnlineRank_Statics::NewProp_RankPointMin = { "RankPointMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnlineRank, RankPointMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineRank_Statics::NewProp_RankPointMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineRank_Statics::NewProp_RankPointMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineRank_Statics::NewProp_RankPointMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineRank" },
		{ "ModuleRelativePath", "Public/OnlineRank.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOnlineRank_Statics::NewProp_RankPointMax = { "RankPointMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnlineRank, RankPointMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineRank_Statics::NewProp_RankPointMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineRank_Statics::NewProp_RankPointMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineRank_Statics::NewProp_bEnabledPointDown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineRank" },
		{ "ModuleRelativePath", "Public/OnlineRank.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOnlineRank_Statics::NewProp_bEnabledPointDown_SetBit(void* Obj)
	{
		((FOnlineRank*)Obj)->bEnabledPointDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOnlineRank_Statics::NewProp_bEnabledPointDown = { "bEnabledPointDown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FOnlineRank), &Z_Construct_UScriptStruct_FOnlineRank_Statics::NewProp_bEnabledPointDown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineRank_Statics::NewProp_bEnabledPointDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineRank_Statics::NewProp_bEnabledPointDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineRank_Statics::NewProp_bEnabledRankDown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineRank" },
		{ "ModuleRelativePath", "Public/OnlineRank.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOnlineRank_Statics::NewProp_bEnabledRankDown_SetBit(void* Obj)
	{
		((FOnlineRank*)Obj)->bEnabledRankDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOnlineRank_Statics::NewProp_bEnabledRankDown = { "bEnabledRankDown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FOnlineRank), &Z_Construct_UScriptStruct_FOnlineRank_Statics::NewProp_bEnabledRankDown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineRank_Statics::NewProp_bEnabledRankDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineRank_Statics::NewProp_bEnabledRankDown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnlineRank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineRank_Statics::NewProp_RankName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineRank_Statics::NewProp_RankGroupName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineRank_Statics::NewProp_RankPointMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineRank_Statics::NewProp_RankPointMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineRank_Statics::NewProp_bEnabledPointDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineRank_Statics::NewProp_bEnabledRankDown,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnlineRank_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"OnlineRank",
		sizeof(FOnlineRank),
		alignof(FOnlineRank),
		Z_Construct_UScriptStruct_FOnlineRank_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineRank_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineRank_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineRank_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOnlineRank()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOnlineRank_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OnlineRank"), sizeof(FOnlineRank), Get_Z_Construct_UScriptStruct_FOnlineRank_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOnlineRank_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOnlineRank_Hash() { return 2116968460U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
