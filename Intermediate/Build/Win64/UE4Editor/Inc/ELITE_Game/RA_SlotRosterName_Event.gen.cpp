// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/RA_SlotRosterName_Event.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRA_SlotRosterName_Event() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FRA_SlotRosterName_Event();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ERA_Slot_RosterName();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FRA_SlotRosterName_Event>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FRA_SlotRosterName_Event cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FRA_SlotRosterName_Event::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FRA_SlotRosterName_Event_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRA_SlotRosterName_Event, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("RA_SlotRosterName_Event"), sizeof(FRA_SlotRosterName_Event), Get_Z_Construct_UScriptStruct_FRA_SlotRosterName_Event_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FRA_SlotRosterName_Event>()
{
	return FRA_SlotRosterName_Event::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRA_SlotRosterName_Event(FRA_SlotRosterName_Event::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("RA_SlotRosterName_Event"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFRA_SlotRosterName_Event
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFRA_SlotRosterName_Event()
	{
		UScriptStruct::DeferCppStructOps<FRA_SlotRosterName_Event>(FName(TEXT("RA_SlotRosterName_Event")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFRA_SlotRosterName_Event;
	struct Z_Construct_UScriptStruct_FRA_SlotRosterName_Event_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CueEvent_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CueEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRA_SlotRosterName_Event_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RA_SlotRosterName_Event.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRA_SlotRosterName_Event_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRA_SlotRosterName_Event>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRA_SlotRosterName_Event_Statics::NewProp_CueEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRA_SlotRosterName_Event_Statics::NewProp_CueEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RA_SlotRosterName_Event" },
		{ "ModuleRelativePath", "Public/RA_SlotRosterName_Event.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRA_SlotRosterName_Event_Statics::NewProp_CueEvent = { "CueEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRA_SlotRosterName_Event, CueEvent), Z_Construct_UEnum_ELITE_Game_ERA_Slot_RosterName, METADATA_PARAMS(Z_Construct_UScriptStruct_FRA_SlotRosterName_Event_Statics::NewProp_CueEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRA_SlotRosterName_Event_Statics::NewProp_CueEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRA_SlotRosterName_Event_Statics::NewProp_SoundData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RA_SlotRosterName_Event" },
		{ "ModuleRelativePath", "Public/RA_SlotRosterName_Event.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRA_SlotRosterName_Event_Statics::NewProp_SoundData = { "SoundData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRA_SlotRosterName_Event, SoundData), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRA_SlotRosterName_Event_Statics::NewProp_SoundData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRA_SlotRosterName_Event_Statics::NewProp_SoundData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRA_SlotRosterName_Event_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRA_SlotRosterName_Event_Statics::NewProp_CueEvent_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRA_SlotRosterName_Event_Statics::NewProp_CueEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRA_SlotRosterName_Event_Statics::NewProp_SoundData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRA_SlotRosterName_Event_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"RA_SlotRosterName_Event",
		sizeof(FRA_SlotRosterName_Event),
		alignof(FRA_SlotRosterName_Event),
		Z_Construct_UScriptStruct_FRA_SlotRosterName_Event_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRA_SlotRosterName_Event_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRA_SlotRosterName_Event_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRA_SlotRosterName_Event_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRA_SlotRosterName_Event()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRA_SlotRosterName_Event_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RA_SlotRosterName_Event"), sizeof(FRA_SlotRosterName_Event), Get_Z_Construct_UScriptStruct_FRA_SlotRosterName_Event_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRA_SlotRosterName_Event_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRA_SlotRosterName_Event_Hash() { return 1170231532U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
