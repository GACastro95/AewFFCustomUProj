// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/RA_SlotIntro_Event.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRA_SlotIntro_Event() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FRA_SlotIntro_Event();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FRA_SlotIntro_Info();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ERA_Slot_Intro();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FRA_SlotIntro_Event>() == std::is_polymorphic<FRA_SlotIntro_Info>(), "USTRUCT FRA_SlotIntro_Event cannot be polymorphic unless super FRA_SlotIntro_Info is polymorphic");

class UScriptStruct* FRA_SlotIntro_Event::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FRA_SlotIntro_Event_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRA_SlotIntro_Event, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("RA_SlotIntro_Event"), sizeof(FRA_SlotIntro_Event), Get_Z_Construct_UScriptStruct_FRA_SlotIntro_Event_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FRA_SlotIntro_Event>()
{
	return FRA_SlotIntro_Event::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRA_SlotIntro_Event(FRA_SlotIntro_Event::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("RA_SlotIntro_Event"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFRA_SlotIntro_Event
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFRA_SlotIntro_Event()
	{
		UScriptStruct::DeferCppStructOps<FRA_SlotIntro_Event>(FName(TEXT("RA_SlotIntro_Event")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFRA_SlotIntro_Event;
	struct Z_Construct_UScriptStruct_FRA_SlotIntro_Event_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRA_SlotIntro_Event_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RA_SlotIntro_Event.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRA_SlotIntro_Event_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRA_SlotIntro_Event>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRA_SlotIntro_Event_Statics::NewProp_CueEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRA_SlotIntro_Event_Statics::NewProp_CueEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RA_SlotIntro_Event" },
		{ "ModuleRelativePath", "Public/RA_SlotIntro_Event.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRA_SlotIntro_Event_Statics::NewProp_CueEvent = { "CueEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRA_SlotIntro_Event, CueEvent), Z_Construct_UEnum_ELITE_Game_ERA_Slot_Intro, METADATA_PARAMS(Z_Construct_UScriptStruct_FRA_SlotIntro_Event_Statics::NewProp_CueEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRA_SlotIntro_Event_Statics::NewProp_CueEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRA_SlotIntro_Event_Statics::NewProp_SoundData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RA_SlotIntro_Event" },
		{ "ModuleRelativePath", "Public/RA_SlotIntro_Event.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRA_SlotIntro_Event_Statics::NewProp_SoundData = { "SoundData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRA_SlotIntro_Event, SoundData), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRA_SlotIntro_Event_Statics::NewProp_SoundData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRA_SlotIntro_Event_Statics::NewProp_SoundData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRA_SlotIntro_Event_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRA_SlotIntro_Event_Statics::NewProp_CueEvent_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRA_SlotIntro_Event_Statics::NewProp_CueEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRA_SlotIntro_Event_Statics::NewProp_SoundData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRA_SlotIntro_Event_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		Z_Construct_UScriptStruct_FRA_SlotIntro_Info,
		&NewStructOps,
		"RA_SlotIntro_Event",
		sizeof(FRA_SlotIntro_Event),
		alignof(FRA_SlotIntro_Event),
		Z_Construct_UScriptStruct_FRA_SlotIntro_Event_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRA_SlotIntro_Event_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRA_SlotIntro_Event_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRA_SlotIntro_Event_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRA_SlotIntro_Event()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRA_SlotIntro_Event_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RA_SlotIntro_Event"), sizeof(FRA_SlotIntro_Event), Get_Z_Construct_UScriptStruct_FRA_SlotIntro_Event_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRA_SlotIntro_Event_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRA_SlotIntro_Event_Hash() { return 398082101U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
