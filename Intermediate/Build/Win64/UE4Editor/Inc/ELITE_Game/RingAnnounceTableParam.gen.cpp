// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/RingAnnounceTableParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRingAnnounceTableParam() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FRingAnnounceTableParam();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ERingAnnounceGroupType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FRingAnnounceTableParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FRingAnnounceTableParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FRingAnnounceTableParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FRingAnnounceTableParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRingAnnounceTableParam, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("RingAnnounceTableParam"), sizeof(FRingAnnounceTableParam), Get_Z_Construct_UScriptStruct_FRingAnnounceTableParam_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FRingAnnounceTableParam>()
{
	return FRingAnnounceTableParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRingAnnounceTableParam(FRingAnnounceTableParam::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("RingAnnounceTableParam"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFRingAnnounceTableParam
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFRingAnnounceTableParam()
	{
		UScriptStruct::DeferCppStructOps<FRingAnnounceTableParam>(FName(TEXT("RingAnnounceTableParam")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFRingAnnounceTableParam;
	struct Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RingAnnounceGroup_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingAnnounceGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RingAnnounceGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingAnnounceString_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_RingAnnounceString;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WrestlerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingAnnounceCueName1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RingAnnounceCueName1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingAnnounceCueEvent1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RingAnnounceCueEvent1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingAnnounceCueName2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RingAnnounceCueName2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingAnnounceCueEvent2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RingAnnounceCueEvent2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingAnnounceCueName3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RingAnnounceCueName3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingAnnounceCueEvent3_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RingAnnounceCueEvent3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnlockItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RingAnnounceTableParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRingAnnounceTableParam>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceGroup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RingAnnounceTableParam" },
		{ "ModuleRelativePath", "Public/RingAnnounceTableParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceGroup = { "RingAnnounceGroup", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRingAnnounceTableParam, RingAnnounceGroup), Z_Construct_UEnum_ELITE_Game_ERingAnnounceGroupType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceString_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RingAnnounceTableParam" },
		{ "ModuleRelativePath", "Public/RingAnnounceTableParam.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceString = { "RingAnnounceString", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRingAnnounceTableParam, RingAnnounceString), METADATA_PARAMS(Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceString_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RingAnnounceTableParam" },
		{ "ModuleRelativePath", "Public/RingAnnounceTableParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRingAnnounceTableParam, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_WrestlerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_WrestlerName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RingAnnounceTableParam" },
		{ "ModuleRelativePath", "Public/RingAnnounceTableParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_WrestlerName = { "WrestlerName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRingAnnounceTableParam, WrestlerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_WrestlerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_WrestlerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceCueName1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RingAnnounceTableParam" },
		{ "ModuleRelativePath", "Public/RingAnnounceTableParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceCueName1 = { "RingAnnounceCueName1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRingAnnounceTableParam, RingAnnounceCueName1), METADATA_PARAMS(Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceCueName1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceCueName1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceCueEvent1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RingAnnounceTableParam" },
		{ "ModuleRelativePath", "Public/RingAnnounceTableParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceCueEvent1 = { "RingAnnounceCueEvent1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRingAnnounceTableParam, RingAnnounceCueEvent1), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceCueEvent1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceCueEvent1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceCueName2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RingAnnounceTableParam" },
		{ "ModuleRelativePath", "Public/RingAnnounceTableParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceCueName2 = { "RingAnnounceCueName2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRingAnnounceTableParam, RingAnnounceCueName2), METADATA_PARAMS(Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceCueName2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceCueName2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceCueEvent2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RingAnnounceTableParam" },
		{ "ModuleRelativePath", "Public/RingAnnounceTableParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceCueEvent2 = { "RingAnnounceCueEvent2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRingAnnounceTableParam, RingAnnounceCueEvent2), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceCueEvent2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceCueEvent2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceCueName3_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RingAnnounceTableParam" },
		{ "ModuleRelativePath", "Public/RingAnnounceTableParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceCueName3 = { "RingAnnounceCueName3", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRingAnnounceTableParam, RingAnnounceCueName3), METADATA_PARAMS(Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceCueName3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceCueName3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceCueEvent3_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RingAnnounceTableParam" },
		{ "ModuleRelativePath", "Public/RingAnnounceTableParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceCueEvent3 = { "RingAnnounceCueEvent3", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRingAnnounceTableParam, RingAnnounceCueEvent3), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceCueEvent3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceCueEvent3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_UnlockItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RingAnnounceTableParam" },
		{ "ModuleRelativePath", "Public/RingAnnounceTableParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_UnlockItemId = { "UnlockItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRingAnnounceTableParam, UnlockItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_UnlockItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_UnlockItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceGroup_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_WrestlerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceCueName1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceCueEvent1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceCueName2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceCueEvent2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceCueName3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_RingAnnounceCueEvent3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::NewProp_UnlockItemId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"RingAnnounceTableParam",
		sizeof(FRingAnnounceTableParam),
		alignof(FRingAnnounceTableParam),
		Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRingAnnounceTableParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRingAnnounceTableParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RingAnnounceTableParam"), sizeof(FRingAnnounceTableParam), Get_Z_Construct_UScriptStruct_FRingAnnounceTableParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRingAnnounceTableParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRingAnnounceTableParam_Hash() { return 1450663219U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
