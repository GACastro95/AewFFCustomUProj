// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELWrestlerProfile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELWrestlerProfile() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerProfile();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterModelName();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EAttireType();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EGender();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EBodyType();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerNameProfileParam();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerProfile_BodyHeight();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerProfile_BodyWeight();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ESystemMotionType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EReversalMotionType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EFanReaction();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EPersonalityType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EDominantHand();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ETalentType();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FIndexedColorList();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerMesh();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerProfile_CutScene();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerProfile_Skill();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerProfile_HideInfo();
// End Cross Module References

static_assert(std::is_polymorphic<FELWrestlerProfile>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELWrestlerProfile cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELWrestlerProfile::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FELWrestlerProfile_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELWrestlerProfile, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ELWrestlerProfile"), sizeof(FELWrestlerProfile), Get_Z_Construct_UScriptStruct_FELWrestlerProfile_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FELWrestlerProfile>()
{
	return FELWrestlerProfile::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELWrestlerProfile(FELWrestlerProfile::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("ELWrestlerProfile"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFELWrestlerProfile
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFELWrestlerProfile()
	{
		UScriptStruct::DeferCppStructOps<FELWrestlerProfile>(FName(TEXT("ELWrestlerProfile")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFELWrestlerProfile;
	struct Z_Construct_UScriptStruct_FELWrestlerProfile_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModelID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ModelID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultModel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ThumbnailsAttire_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailsAttire_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ThumbnailsAttire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thumbnails_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Thumbnails;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameEnable_MetaData[];
#endif
		static void NewProp_GameEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_GameEnable;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Gender_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Gender;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BodyType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BodyType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NameProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Birthdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Birthdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Debutdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Debutdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BodyHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BodyWeight;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SystemMotionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SystemMotionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SystemMotionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReversalMotionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReversalMotionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReversalMotionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FanReaction_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FanReaction_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FanReaction;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Personality_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Personality_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Personality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FightStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FightStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HomeTown1_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HomeTown1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HomeTown2_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HomeTown2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HomeTown3_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HomeTown3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Popularity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Popularity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rank_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Rank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponDecal_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeaponDecal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponFavourite_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeaponFavourite;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DominantHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DominantHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DominantHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vegetarian_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Vegetarian;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagTeamSpecialist_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TagTeamSpecialist;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TalentType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TalentType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TalentType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnlockID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockPresetID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnlockPresetID;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TShirtsColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TShirtsColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoseID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PoseID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultPartner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPartner_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefaultPartner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerTidbits_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_WrestlerTidbits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PersonalHistory_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_PersonalHistory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CutSceneProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CutSceneProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skill_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Skill;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HideInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HideInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELWrestlerProfile>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_WrestlerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_ModelID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_ModelID = { "ModelID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, ModelID), METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_ModelID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_ModelID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_DefaultModel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_DefaultModel = { "DefaultModel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, DefaultModel), Z_Construct_UScriptStruct_FCharacterModelName, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_DefaultModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_DefaultModel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_UID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, UID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_UID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_UID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_ThumbnailsAttire_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_ThumbnailsAttire_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_ThumbnailsAttire = { "ThumbnailsAttire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, ThumbnailsAttire), Z_Construct_UEnum_ELITE_Core_EAttireType, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_ThumbnailsAttire_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_ThumbnailsAttire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Thumbnails_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Thumbnails = { "Thumbnails", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, Thumbnails), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Thumbnails_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Thumbnails_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_GameEnable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_GameEnable_SetBit(void* Obj)
	{
		((FELWrestlerProfile*)Obj)->GameEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_GameEnable = { "GameEnable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELWrestlerProfile), &Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_GameEnable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_GameEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_GameEnable_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Gender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Gender_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, Gender), Z_Construct_UEnum_ELITE_Core_EGender, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Gender_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Gender_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_BodyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_BodyType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_BodyType = { "BodyType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, BodyType), Z_Construct_UEnum_ELITE_Game_EBodyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_BodyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_BodyType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_NameProfile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_NameProfile = { "NameProfile", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, NameProfile), Z_Construct_UScriptStruct_FELWrestlerNameProfileParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_NameProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_NameProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Birthdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Birthdate = { "Birthdate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, Birthdate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Birthdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Birthdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Debutdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Debutdate = { "Debutdate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, Debutdate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Debutdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Debutdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_BodyHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_BodyHeight = { "BodyHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, BodyHeight), Z_Construct_UScriptStruct_FELWrestlerProfile_BodyHeight, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_BodyHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_BodyHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_BodyWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_BodyWeight = { "BodyWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, BodyWeight), Z_Construct_UScriptStruct_FELWrestlerProfile_BodyWeight, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_BodyWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_BodyWeight_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_SystemMotionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_SystemMotionType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_SystemMotionType = { "SystemMotionType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, SystemMotionType), Z_Construct_UEnum_ELITE_Game_ESystemMotionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_SystemMotionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_SystemMotionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_ReversalMotionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_ReversalMotionType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_ReversalMotionType = { "ReversalMotionType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, ReversalMotionType), Z_Construct_UEnum_ELITE_Game_EReversalMotionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_ReversalMotionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_ReversalMotionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_FanReaction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_FanReaction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_FanReaction = { "FanReaction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, FanReaction), Z_Construct_UEnum_ELITE_Game_EFanReaction, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_FanReaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_FanReaction_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Personality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Personality_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Personality = { "Personality", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, Personality), Z_Construct_UEnum_ELITE_Game_EPersonalityType, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Personality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Personality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_FightStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_FightStyle = { "FightStyle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, FightStyle), METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_FightStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_FightStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_HomeTown1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_HomeTown1 = { "HomeTown1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, HomeTown1), METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_HomeTown1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_HomeTown1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_HomeTown2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_HomeTown2 = { "HomeTown2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, HomeTown2), METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_HomeTown2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_HomeTown2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_HomeTown3_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_HomeTown3 = { "HomeTown3", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, HomeTown3), METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_HomeTown3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_HomeTown3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Popularity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Popularity = { "Popularity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, Popularity), METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Popularity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Popularity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Rank_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Rank = { "Rank", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, Rank), METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Rank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Rank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_WeaponDecal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_WeaponDecal = { "WeaponDecal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, WeaponDecal), METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_WeaponDecal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_WeaponDecal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_WeaponFavourite_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_WeaponFavourite = { "WeaponFavourite", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, WeaponFavourite), METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_WeaponFavourite_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_WeaponFavourite_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_DominantHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_DominantHand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_DominantHand = { "DominantHand", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, DominantHand), Z_Construct_UEnum_ELITE_Game_EDominantHand, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_DominantHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_DominantHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Vegetarian_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Vegetarian = { "Vegetarian", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, Vegetarian), METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Vegetarian_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Vegetarian_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_TagTeamSpecialist_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_TagTeamSpecialist = { "TagTeamSpecialist", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, TagTeamSpecialist), METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_TagTeamSpecialist_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_TagTeamSpecialist_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_TalentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_TalentType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_TalentType = { "TalentType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, TalentType), Z_Construct_UEnum_ELITE_Game_ETalentType, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_TalentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_TalentType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_UnlockID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_UnlockID = { "UnlockID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, UnlockID), METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_UnlockID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_UnlockID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_UnlockPresetID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_UnlockPresetID = { "UnlockPresetID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, UnlockPresetID), METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_UnlockPresetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_UnlockPresetID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_MatchAttireUnlockIDList_ElementProp = { "MatchAttireUnlockIDList", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_MatchAttireUnlockIDList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_MatchAttireUnlockIDList = { "MatchAttireUnlockIDList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, MatchAttireUnlockIDList), METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_MatchAttireUnlockIDList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_MatchAttireUnlockIDList_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_PlainAttireUnlockIDList_ElementProp = { "PlainAttireUnlockIDList", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_PlainAttireUnlockIDList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_PlainAttireUnlockIDList = { "PlainAttireUnlockIDList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, PlainAttireUnlockIDList), METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_PlainAttireUnlockIDList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_PlainAttireUnlockIDList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_TShirtsID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_TShirtsID = { "TShirtsID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, TShirtsID), METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_TShirtsID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_TShirtsID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_TShirtsColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_TShirtsColor = { "TShirtsColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, TShirtsColor), Z_Construct_UScriptStruct_FIndexedColorList, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_TShirtsColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_TShirtsColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_PoseID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_PoseID = { "PoseID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, PoseID), METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_PoseID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_PoseID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_DefaultPartner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_DefaultPartner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_DefaultPartner = { "DefaultPartner", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, DefaultPartner), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_DefaultPartner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_DefaultPartner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_WrestlerTidbits_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_WrestlerTidbits = { "WrestlerTidbits", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, WrestlerTidbits), METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_WrestlerTidbits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_WrestlerTidbits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_PersonalHistory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_PersonalHistory = { "PersonalHistory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, PersonalHistory), METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_PersonalHistory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_PersonalHistory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, Mesh), Z_Construct_UScriptStruct_FELWrestlerMesh, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_CutSceneProfile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_CutSceneProfile = { "CutSceneProfile", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, CutSceneProfile), Z_Construct_UScriptStruct_FELWrestlerProfile_CutScene, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_CutSceneProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_CutSceneProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Skill_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Skill = { "Skill", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, Skill), Z_Construct_UScriptStruct_FELWrestlerProfile_Skill, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Skill_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Skill_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_HideInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_HideInfo = { "HideInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile, HideInfo), Z_Construct_UScriptStruct_FELWrestlerProfile_HideInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_HideInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_HideInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_ModelID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_DefaultModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_UID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_ThumbnailsAttire_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_ThumbnailsAttire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Thumbnails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_GameEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Gender_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Gender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_BodyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_BodyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_NameProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Birthdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Debutdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_BodyHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_BodyWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_SystemMotionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_SystemMotionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_ReversalMotionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_ReversalMotionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_FanReaction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_FanReaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Personality_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Personality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_FightStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_HomeTown1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_HomeTown2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_HomeTown3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Popularity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Rank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_WeaponDecal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_WeaponFavourite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_DominantHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_DominantHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Vegetarian,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_TagTeamSpecialist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_TalentType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_TalentType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_UnlockID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_UnlockPresetID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_MatchAttireUnlockIDList_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_MatchAttireUnlockIDList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_PlainAttireUnlockIDList_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_PlainAttireUnlockIDList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_TShirtsID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_TShirtsColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_PoseID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_DefaultPartner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_DefaultPartner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_WrestlerTidbits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_PersonalHistory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_CutSceneProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_Skill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::NewProp_HideInfo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELWrestlerProfile",
		sizeof(FELWrestlerProfile),
		alignof(FELWrestlerProfile),
		Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerProfile()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELWrestlerProfile_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELWrestlerProfile"), sizeof(FELWrestlerProfile), Get_Z_Construct_UScriptStruct_FELWrestlerProfile_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELWrestlerProfile_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELWrestlerProfile_Hash() { return 245376604U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
