// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/CrowdChantTableParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrowdChantTableParam() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdChantTableParam();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FCrowdChantTableParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCrowdChantTableParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCrowdChantTableParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FCrowdChantTableParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdChantTableParam, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("CrowdChantTableParam"), sizeof(FCrowdChantTableParam), Get_Z_Construct_UScriptStruct_FCrowdChantTableParam_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FCrowdChantTableParam>()
{
	return FCrowdChantTableParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCrowdChantTableParam(FCrowdChantTableParam::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("CrowdChantTableParam"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFCrowdChantTableParam
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFCrowdChantTableParam()
	{
		UScriptStruct::DeferCppStructOps<FCrowdChantTableParam>(FName(TEXT("CrowdChantTableParam")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFCrowdChantTableParam;
	struct Z_Construct_UScriptStruct_FCrowdChantTableParam_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Momentum_High_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Momentum_High;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Momentum_Low_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Momentum_Low;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagTeamPartner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TagTeamPartner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdChantTableParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CrowdChantTableParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCrowdChantTableParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdChantTableParam>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrowdChantTableParam_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdChantTableParam_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CrowdChantTableParam" },
		{ "ModuleRelativePath", "Public/CrowdChantTableParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCrowdChantTableParam_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCrowdChantTableParam, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdChantTableParam_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdChantTableParam_Statics::NewProp_WrestlerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdChantTableParam_Statics::NewProp_Momentum_High_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CrowdChantTableParam" },
		{ "ModuleRelativePath", "Public/CrowdChantTableParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCrowdChantTableParam_Statics::NewProp_Momentum_High = { "Momentum_High", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCrowdChantTableParam, Momentum_High), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdChantTableParam_Statics::NewProp_Momentum_High_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdChantTableParam_Statics::NewProp_Momentum_High_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdChantTableParam_Statics::NewProp_Momentum_Low_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CrowdChantTableParam" },
		{ "ModuleRelativePath", "Public/CrowdChantTableParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCrowdChantTableParam_Statics::NewProp_Momentum_Low = { "Momentum_Low", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCrowdChantTableParam, Momentum_Low), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdChantTableParam_Statics::NewProp_Momentum_Low_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdChantTableParam_Statics::NewProp_Momentum_Low_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdChantTableParam_Statics::NewProp_TagTeamPartner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CrowdChantTableParam" },
		{ "ModuleRelativePath", "Public/CrowdChantTableParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCrowdChantTableParam_Statics::NewProp_TagTeamPartner = { "TagTeamPartner", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCrowdChantTableParam, TagTeamPartner), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdChantTableParam_Statics::NewProp_TagTeamPartner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdChantTableParam_Statics::NewProp_TagTeamPartner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrowdChantTableParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdChantTableParam_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdChantTableParam_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdChantTableParam_Statics::NewProp_Momentum_High,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdChantTableParam_Statics::NewProp_Momentum_Low,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdChantTableParam_Statics::NewProp_TagTeamPartner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdChantTableParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CrowdChantTableParam",
		sizeof(FCrowdChantTableParam),
		alignof(FCrowdChantTableParam),
		Z_Construct_UScriptStruct_FCrowdChantTableParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdChantTableParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdChantTableParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdChantTableParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCrowdChantTableParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCrowdChantTableParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CrowdChantTableParam"), sizeof(FCrowdChantTableParam), Get_Z_Construct_UScriptStruct_FCrowdChantTableParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCrowdChantTableParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCrowdChantTableParam_Hash() { return 1232522241U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
