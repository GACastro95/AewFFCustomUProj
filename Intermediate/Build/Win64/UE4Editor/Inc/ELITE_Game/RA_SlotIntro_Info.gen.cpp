// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/RA_SlotIntro_Info.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRA_SlotIntro_Info() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FRA_SlotIntro_Info();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ERA_SlotIntro_Order();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ERA_SlotIntro_Gender();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ERA_Slot_ChampionState();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ERA_Slot_CutScene_Type();
// End Cross Module References

static_assert(std::is_polymorphic<FRA_SlotIntro_Info>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FRA_SlotIntro_Info cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FRA_SlotIntro_Info::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRA_SlotIntro_Info, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("RA_SlotIntro_Info"), sizeof(FRA_SlotIntro_Info), Get_Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FRA_SlotIntro_Info>()
{
	return FRA_SlotIntro_Info::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRA_SlotIntro_Info(FRA_SlotIntro_Info::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("RA_SlotIntro_Info"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFRA_SlotIntro_Info
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFRA_SlotIntro_Info()
	{
		UScriptStruct::DeferCppStructOps<FRA_SlotIntro_Info>(FName(TEXT("RA_SlotIntro_Info")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFRA_SlotIntro_Info;
	struct Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Order_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Order_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Order;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Gender_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Gender;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChampionState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChampionState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChampionState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EntranceType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntranceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EntranceType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RA_SlotIntro_Info.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRA_SlotIntro_Info>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Statics::NewProp_Order_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Statics::NewProp_Order_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RA_SlotIntro_Info" },
		{ "ModuleRelativePath", "Public/RA_SlotIntro_Info.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRA_SlotIntro_Info, Order), Z_Construct_UEnum_ELITE_Game_ERA_SlotIntro_Order, METADATA_PARAMS(Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Statics::NewProp_Order_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Statics::NewProp_Order_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Statics::NewProp_Gender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Statics::NewProp_Gender_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RA_SlotIntro_Info" },
		{ "ModuleRelativePath", "Public/RA_SlotIntro_Info.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRA_SlotIntro_Info, Gender), Z_Construct_UEnum_ELITE_Game_ERA_SlotIntro_Gender, METADATA_PARAMS(Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Statics::NewProp_Gender_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Statics::NewProp_Gender_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Statics::NewProp_ChampionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Statics::NewProp_ChampionState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RA_SlotIntro_Info" },
		{ "ModuleRelativePath", "Public/RA_SlotIntro_Info.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Statics::NewProp_ChampionState = { "ChampionState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRA_SlotIntro_Info, ChampionState), Z_Construct_UEnum_ELITE_Game_ERA_Slot_ChampionState, METADATA_PARAMS(Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Statics::NewProp_ChampionState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Statics::NewProp_ChampionState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Statics::NewProp_EntranceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Statics::NewProp_EntranceType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RA_SlotIntro_Info" },
		{ "ModuleRelativePath", "Public/RA_SlotIntro_Info.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Statics::NewProp_EntranceType = { "EntranceType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRA_SlotIntro_Info, EntranceType), Z_Construct_UEnum_ELITE_Game_ERA_Slot_CutScene_Type, METADATA_PARAMS(Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Statics::NewProp_EntranceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Statics::NewProp_EntranceType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Statics::NewProp_Order_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Statics::NewProp_Order,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Statics::NewProp_Gender_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Statics::NewProp_Gender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Statics::NewProp_ChampionState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Statics::NewProp_ChampionState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Statics::NewProp_EntranceType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Statics::NewProp_EntranceType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"RA_SlotIntro_Info",
		sizeof(FRA_SlotIntro_Info),
		alignof(FRA_SlotIntro_Info),
		Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRA_SlotIntro_Info()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RA_SlotIntro_Info"), sizeof(FRA_SlotIntro_Info), Get_Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRA_SlotIntro_Info_Hash() { return 3666608067U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
