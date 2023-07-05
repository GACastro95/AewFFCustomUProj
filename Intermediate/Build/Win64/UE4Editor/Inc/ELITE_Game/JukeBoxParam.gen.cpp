// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/JukeBoxParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJukeBoxParam() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FJukeBoxParam();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ETrackingGroupType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FJukeBoxParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FJukeBoxParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FJukeBoxParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FJukeBoxParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FJukeBoxParam, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("JukeBoxParam"), sizeof(FJukeBoxParam), Get_Z_Construct_UScriptStruct_FJukeBoxParam_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FJukeBoxParam>()
{
	return FJukeBoxParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FJukeBoxParam(FJukeBoxParam::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("JukeBoxParam"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFJukeBoxParam
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFJukeBoxParam()
	{
		UScriptStruct::DeferCppStructOps<FJukeBoxParam>(FName(TEXT("JukeBoxParam")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFJukeBoxParam;
	struct Z_Construct_UScriptStruct_FJukeBoxParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TrackingGroup_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TrackingGroup;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntranceCueEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EntranceCueEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VictoryCueEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VictoryCueEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JukeBoxId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_JukeBoxId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseCreate_MetaData[];
#endif
		static void NewProp_UseCreate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseCreate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JukeBox_MetaData[];
#endif
		static void NewProp_JukeBox_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_JukeBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSelect_MetaData[];
#endif
		static void NewProp_DefaultSelect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DefaultSelect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JacketImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JacketImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SongTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_SongTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArtistName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ArtistName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JukeBoxCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JukeBoxCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JukeBoxCueInGame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JukeBoxCueInGame;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SettableWrestlers_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SettableWrestlers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettableWrestlers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SettableWrestlers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnlockItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJukeBoxParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JukeBoxParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJukeBoxParam>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_TrackingGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_TrackingGroup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JukeBoxParam" },
		{ "ModuleRelativePath", "Public/JukeBoxParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_TrackingGroup = { "TrackingGroup", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJukeBoxParam, TrackingGroup), Z_Construct_UEnum_ELITE_Game_ETrackingGroupType, METADATA_PARAMS(Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_TrackingGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_TrackingGroup_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JukeBoxParam" },
		{ "ModuleRelativePath", "Public/JukeBoxParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJukeBoxParam, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_WrestlerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_WrestlerName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JukeBoxParam" },
		{ "ModuleRelativePath", "Public/JukeBoxParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_WrestlerName = { "WrestlerName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJukeBoxParam, WrestlerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_WrestlerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_WrestlerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_EntranceCueEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JukeBoxParam" },
		{ "ModuleRelativePath", "Public/JukeBoxParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_EntranceCueEvent = { "EntranceCueEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJukeBoxParam, EntranceCueEvent), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_EntranceCueEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_EntranceCueEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_VictoryCueEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JukeBoxParam" },
		{ "ModuleRelativePath", "Public/JukeBoxParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_VictoryCueEvent = { "VictoryCueEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJukeBoxParam, VictoryCueEvent), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_VictoryCueEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_VictoryCueEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_JukeBoxId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JukeBoxParam" },
		{ "ModuleRelativePath", "Public/JukeBoxParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_JukeBoxId = { "JukeBoxId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJukeBoxParam, JukeBoxId), METADATA_PARAMS(Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_JukeBoxId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_JukeBoxId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_UseCreate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JukeBoxParam" },
		{ "ModuleRelativePath", "Public/JukeBoxParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_UseCreate_SetBit(void* Obj)
	{
		((FJukeBoxParam*)Obj)->UseCreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_UseCreate = { "UseCreate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FJukeBoxParam), &Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_UseCreate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_UseCreate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_UseCreate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_JukeBox_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JukeBoxParam" },
		{ "ModuleRelativePath", "Public/JukeBoxParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_JukeBox_SetBit(void* Obj)
	{
		((FJukeBoxParam*)Obj)->JukeBox = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_JukeBox = { "JukeBox", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FJukeBoxParam), &Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_JukeBox_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_JukeBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_JukeBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_DefaultSelect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JukeBoxParam" },
		{ "ModuleRelativePath", "Public/JukeBoxParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_DefaultSelect_SetBit(void* Obj)
	{
		((FJukeBoxParam*)Obj)->DefaultSelect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_DefaultSelect = { "DefaultSelect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FJukeBoxParam), &Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_DefaultSelect_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_DefaultSelect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_DefaultSelect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_JacketImage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JukeBoxParam" },
		{ "ModuleRelativePath", "Public/JukeBoxParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_JacketImage = { "JacketImage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJukeBoxParam, JacketImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_JacketImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_JacketImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_SongTitle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JukeBoxParam" },
		{ "ModuleRelativePath", "Public/JukeBoxParam.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_SongTitle = { "SongTitle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJukeBoxParam, SongTitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_SongTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_SongTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_ArtistName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JukeBoxParam" },
		{ "ModuleRelativePath", "Public/JukeBoxParam.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_ArtistName = { "ArtistName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJukeBoxParam, ArtistName), METADATA_PARAMS(Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_ArtistName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_ArtistName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_JukeBoxCue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JukeBoxParam" },
		{ "ModuleRelativePath", "Public/JukeBoxParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_JukeBoxCue = { "JukeBoxCue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJukeBoxParam, JukeBoxCue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_JukeBoxCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_JukeBoxCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_JukeBoxCueInGame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JukeBoxParam" },
		{ "ModuleRelativePath", "Public/JukeBoxParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_JukeBoxCueInGame = { "JukeBoxCueInGame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJukeBoxParam, JukeBoxCueInGame), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_JukeBoxCueInGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_JukeBoxCueInGame_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_SettableWrestlers_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_SettableWrestlers_Inner = { "SettableWrestlers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_SettableWrestlers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JukeBoxParam" },
		{ "ModuleRelativePath", "Public/JukeBoxParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_SettableWrestlers = { "SettableWrestlers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJukeBoxParam, SettableWrestlers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_SettableWrestlers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_SettableWrestlers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_UnlockItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JukeBoxParam" },
		{ "ModuleRelativePath", "Public/JukeBoxParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_UnlockItemId = { "UnlockItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJukeBoxParam, UnlockItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_UnlockItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_UnlockItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJukeBoxParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_TrackingGroup_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_TrackingGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_WrestlerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_EntranceCueEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_VictoryCueEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_JukeBoxId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_UseCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_JukeBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_DefaultSelect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_JacketImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_SongTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_ArtistName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_JukeBoxCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_JukeBoxCueInGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_SettableWrestlers_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_SettableWrestlers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_SettableWrestlers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJukeBoxParam_Statics::NewProp_UnlockItemId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJukeBoxParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"JukeBoxParam",
		sizeof(FJukeBoxParam),
		alignof(FJukeBoxParam),
		Z_Construct_UScriptStruct_FJukeBoxParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJukeBoxParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJukeBoxParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJukeBoxParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJukeBoxParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FJukeBoxParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("JukeBoxParam"), sizeof(FJukeBoxParam), Get_Z_Construct_UScriptStruct_FJukeBoxParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FJukeBoxParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FJukeBoxParam_Hash() { return 3410787902U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
