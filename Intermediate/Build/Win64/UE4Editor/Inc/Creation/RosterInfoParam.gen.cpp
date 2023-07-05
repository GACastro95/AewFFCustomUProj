// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/RosterInfoParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRosterInfoParam() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FRosterInfoParam();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FPersonParamBase();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterModelName();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FIndexedColorList();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlerMoves();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerProfile_CutScene();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FPersonalityParamView();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlingSkillParamView();
// End Cross Module References

static_assert(std::is_polymorphic<FRosterInfoParam>() == std::is_polymorphic<FPersonParamBase>(), "USTRUCT FRosterInfoParam cannot be polymorphic unless super FPersonParamBase is polymorphic");

class UScriptStruct* FRosterInfoParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FRosterInfoParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRosterInfoParam, Z_Construct_UPackage__Script_Creation(), TEXT("RosterInfoParam"), sizeof(FRosterInfoParam), Get_Z_Construct_UScriptStruct_FRosterInfoParam_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FRosterInfoParam>()
{
	return FRosterInfoParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRosterInfoParam(FRosterInfoParam::StaticStruct, TEXT("/Script/Creation"), TEXT("RosterInfoParam"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFRosterInfoParam
{
	FScriptStruct_Creation_StaticRegisterNativesFRosterInfoParam()
	{
		UScriptStruct::DeferCppStructOps<FRosterInfoParam>(FName(TEXT("RosterInfoParam")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFRosterInfoParam;
	struct Z_Construct_UScriptStruct_FRosterInfoParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultModel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnlockID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockPresetID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnlockPresetID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayFlag_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DisplayFlag;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MatchAttireUnlockIDList_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchAttireUnlockIDList_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_MatchAttireUnlockIDList;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlainAttireUnlockIDList_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlainAttireUnlockIDList_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_PlainAttireUnlockIDList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TShirtsID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TShirtsID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TShirtsColorIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TShirtsColorIDs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoseID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PoseID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thumbnails_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Thumbnails;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MOVES_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MOVES;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entrance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Entrance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Personality_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Personality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skill_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Skill;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRosterInfoParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RosterInfoParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRosterInfoParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_DefaultModel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RosterInfoParam" },
		{ "ModuleRelativePath", "Public/RosterInfoParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_DefaultModel = { "DefaultModel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRosterInfoParam, DefaultModel), Z_Construct_UScriptStruct_FCharacterModelName, METADATA_PARAMS(Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_DefaultModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_DefaultModel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_UnlockID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RosterInfoParam" },
		{ "ModuleRelativePath", "Public/RosterInfoParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_UnlockID = { "UnlockID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRosterInfoParam, UnlockID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_UnlockID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_UnlockID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_UnlockPresetID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RosterInfoParam" },
		{ "ModuleRelativePath", "Public/RosterInfoParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_UnlockPresetID = { "UnlockPresetID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRosterInfoParam, UnlockPresetID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_UnlockPresetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_UnlockPresetID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_DisplayFlag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RosterInfoParam" },
		{ "ModuleRelativePath", "Public/RosterInfoParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_DisplayFlag = { "DisplayFlag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRosterInfoParam, DisplayFlag), METADATA_PARAMS(Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_DisplayFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_DisplayFlag_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_MatchAttireUnlockIDList_ElementProp = { "MatchAttireUnlockIDList", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_MatchAttireUnlockIDList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RosterInfoParam" },
		{ "ModuleRelativePath", "Public/RosterInfoParam.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_MatchAttireUnlockIDList = { "MatchAttireUnlockIDList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRosterInfoParam, MatchAttireUnlockIDList), METADATA_PARAMS(Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_MatchAttireUnlockIDList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_MatchAttireUnlockIDList_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_PlainAttireUnlockIDList_ElementProp = { "PlainAttireUnlockIDList", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_PlainAttireUnlockIDList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RosterInfoParam" },
		{ "ModuleRelativePath", "Public/RosterInfoParam.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_PlainAttireUnlockIDList = { "PlainAttireUnlockIDList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRosterInfoParam, PlainAttireUnlockIDList), METADATA_PARAMS(Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_PlainAttireUnlockIDList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_PlainAttireUnlockIDList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_TShirtsID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RosterInfoParam" },
		{ "ModuleRelativePath", "Public/RosterInfoParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_TShirtsID = { "TShirtsID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRosterInfoParam, TShirtsID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_TShirtsID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_TShirtsID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_TShirtsColorIDs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RosterInfoParam" },
		{ "ModuleRelativePath", "Public/RosterInfoParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_TShirtsColorIDs = { "TShirtsColorIDs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRosterInfoParam, TShirtsColorIDs), Z_Construct_UScriptStruct_FIndexedColorList, METADATA_PARAMS(Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_TShirtsColorIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_TShirtsColorIDs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_PoseID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RosterInfoParam" },
		{ "ModuleRelativePath", "Public/RosterInfoParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_PoseID = { "PoseID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRosterInfoParam, PoseID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_PoseID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_PoseID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_Thumbnails_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RosterInfoParam" },
		{ "ModuleRelativePath", "Public/RosterInfoParam.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_Thumbnails = { "Thumbnails", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRosterInfoParam, Thumbnails), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_Thumbnails_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_Thumbnails_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_MOVES_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RosterInfoParam" },
		{ "ModuleRelativePath", "Public/RosterInfoParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_MOVES = { "MOVES", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRosterInfoParam, MOVES), Z_Construct_UScriptStruct_FWrestlerMoves, METADATA_PARAMS(Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_MOVES_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_MOVES_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_Entrance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RosterInfoParam" },
		{ "ModuleRelativePath", "Public/RosterInfoParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_Entrance = { "Entrance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRosterInfoParam, Entrance), Z_Construct_UScriptStruct_FELWrestlerProfile_CutScene, METADATA_PARAMS(Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_Entrance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_Entrance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_Personality_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RosterInfoParam" },
		{ "ModuleRelativePath", "Public/RosterInfoParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_Personality = { "Personality", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRosterInfoParam, Personality), Z_Construct_UScriptStruct_FPersonalityParamView, METADATA_PARAMS(Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_Personality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_Personality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_Skill_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RosterInfoParam" },
		{ "ModuleRelativePath", "Public/RosterInfoParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_Skill = { "Skill", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRosterInfoParam, Skill), Z_Construct_UScriptStruct_FWrestlingSkillParamView, METADATA_PARAMS(Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_Skill_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_Skill_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRosterInfoParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_DefaultModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_UnlockID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_UnlockPresetID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_DisplayFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_MatchAttireUnlockIDList_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_MatchAttireUnlockIDList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_PlainAttireUnlockIDList_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_PlainAttireUnlockIDList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_TShirtsID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_TShirtsColorIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_PoseID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_Thumbnails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_MOVES,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_Entrance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_Personality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRosterInfoParam_Statics::NewProp_Skill,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRosterInfoParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FPersonParamBase,
		&NewStructOps,
		"RosterInfoParam",
		sizeof(FRosterInfoParam),
		alignof(FRosterInfoParam),
		Z_Construct_UScriptStruct_FRosterInfoParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRosterInfoParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRosterInfoParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRosterInfoParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRosterInfoParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRosterInfoParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RosterInfoParam"), sizeof(FRosterInfoParam), Get_Z_Construct_UScriptStruct_FRosterInfoParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRosterInfoParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRosterInfoParam_Hash() { return 673584524U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
