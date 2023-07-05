// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerChampionshipHolder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerChampionshipHolder() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerChampionshipHolder();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerChampionshipCore();
// End Cross Module References
class UScriptStruct* FCareerChampionshipHolder::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerChampionshipHolder_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerChampionshipHolder, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerChampionshipHolder"), sizeof(FCareerChampionshipHolder), Get_Z_Construct_UScriptStruct_FCareerChampionshipHolder_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerChampionshipHolder>()
{
	return FCareerChampionshipHolder::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerChampionshipHolder(FCareerChampionshipHolder::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerChampionshipHolder"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerChampionshipHolder
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerChampionshipHolder()
	{
		UScriptStruct::DeferCppStructOps<FCareerChampionshipHolder>(FName(TEXT("CareerChampionshipHolder")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerChampionshipHolder;
	struct Z_Construct_UScriptStruct_FCareerChampionshipHolder_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_World_Championship_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_World_Championship;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Womens_Championship_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Womens_Championship;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TNT_Championship_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TNT_Championship;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagTeam_Championship_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagTeam_Championship;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FTW_Championship_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FTW_Championship;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TBS_Championship_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TBS_Championship;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerChampionshipHolder_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerChampionshipHolder.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerChampionshipHolder_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerChampionshipHolder>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerChampionshipHolder_Statics::NewProp_World_Championship_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerChampionshipHolder" },
		{ "ModuleRelativePath", "Public/CareerChampionshipHolder.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerChampionshipHolder_Statics::NewProp_World_Championship = { "World_Championship", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerChampionshipHolder, World_Championship), Z_Construct_UScriptStruct_FCareerChampionshipCore, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerChampionshipHolder_Statics::NewProp_World_Championship_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerChampionshipHolder_Statics::NewProp_World_Championship_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerChampionshipHolder_Statics::NewProp_Womens_Championship_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerChampionshipHolder" },
		{ "ModuleRelativePath", "Public/CareerChampionshipHolder.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerChampionshipHolder_Statics::NewProp_Womens_Championship = { "Womens_Championship", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerChampionshipHolder, Womens_Championship), Z_Construct_UScriptStruct_FCareerChampionshipCore, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerChampionshipHolder_Statics::NewProp_Womens_Championship_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerChampionshipHolder_Statics::NewProp_Womens_Championship_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerChampionshipHolder_Statics::NewProp_TNT_Championship_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerChampionshipHolder" },
		{ "ModuleRelativePath", "Public/CareerChampionshipHolder.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerChampionshipHolder_Statics::NewProp_TNT_Championship = { "TNT_Championship", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerChampionshipHolder, TNT_Championship), Z_Construct_UScriptStruct_FCareerChampionshipCore, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerChampionshipHolder_Statics::NewProp_TNT_Championship_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerChampionshipHolder_Statics::NewProp_TNT_Championship_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerChampionshipHolder_Statics::NewProp_TagTeam_Championship_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerChampionshipHolder" },
		{ "ModuleRelativePath", "Public/CareerChampionshipHolder.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerChampionshipHolder_Statics::NewProp_TagTeam_Championship = { "TagTeam_Championship", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerChampionshipHolder, TagTeam_Championship), Z_Construct_UScriptStruct_FCareerChampionshipCore, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerChampionshipHolder_Statics::NewProp_TagTeam_Championship_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerChampionshipHolder_Statics::NewProp_TagTeam_Championship_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerChampionshipHolder_Statics::NewProp_FTW_Championship_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerChampionshipHolder" },
		{ "ModuleRelativePath", "Public/CareerChampionshipHolder.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerChampionshipHolder_Statics::NewProp_FTW_Championship = { "FTW_Championship", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerChampionshipHolder, FTW_Championship), Z_Construct_UScriptStruct_FCareerChampionshipCore, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerChampionshipHolder_Statics::NewProp_FTW_Championship_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerChampionshipHolder_Statics::NewProp_FTW_Championship_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerChampionshipHolder_Statics::NewProp_TBS_Championship_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerChampionshipHolder" },
		{ "ModuleRelativePath", "Public/CareerChampionshipHolder.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerChampionshipHolder_Statics::NewProp_TBS_Championship = { "TBS_Championship", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerChampionshipHolder, TBS_Championship), Z_Construct_UScriptStruct_FCareerChampionshipCore, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerChampionshipHolder_Statics::NewProp_TBS_Championship_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerChampionshipHolder_Statics::NewProp_TBS_Championship_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerChampionshipHolder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerChampionshipHolder_Statics::NewProp_World_Championship,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerChampionshipHolder_Statics::NewProp_Womens_Championship,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerChampionshipHolder_Statics::NewProp_TNT_Championship,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerChampionshipHolder_Statics::NewProp_TagTeam_Championship,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerChampionshipHolder_Statics::NewProp_FTW_Championship,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerChampionshipHolder_Statics::NewProp_TBS_Championship,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerChampionshipHolder_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"CareerChampionshipHolder",
		sizeof(FCareerChampionshipHolder),
		alignof(FCareerChampionshipHolder),
		Z_Construct_UScriptStruct_FCareerChampionshipHolder_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerChampionshipHolder_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerChampionshipHolder_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerChampionshipHolder_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerChampionshipHolder()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerChampionshipHolder_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerChampionshipHolder"), sizeof(FCareerChampionshipHolder), Get_Z_Construct_UScriptStruct_FCareerChampionshipHolder_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerChampionshipHolder_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerChampionshipHolder_Hash() { return 3816038458U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
