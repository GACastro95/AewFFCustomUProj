// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/PersonParamBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePersonParamBase() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FPersonParamBase();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EGender();
	ELITE_CORE_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlerNameText();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EBodyType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EBodyHeightType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EBodyWeightType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ESystemMotionType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EReversalMotionType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EFanReaction();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FHomeTownID();
// End Cross Module References

static_assert(std::is_polymorphic<FPersonParamBase>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FPersonParamBase cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FPersonParamBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FPersonParamBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPersonParamBase, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("PersonParamBase"), sizeof(FPersonParamBase), Get_Z_Construct_UScriptStruct_FPersonParamBase_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FPersonParamBase>()
{
	return FPersonParamBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPersonParamBase(FPersonParamBase::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("PersonParamBase"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFPersonParamBase
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFPersonParamBase()
	{
		UScriptStruct::DeferCppStructOps<FPersonParamBase>(FName(TEXT("PersonParamBase")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFPersonParamBase;
	struct Z_Construct_UScriptStruct_FPersonParamBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Gender_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Gender;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WrestlerName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BodyType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BodyType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BodyHeightType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyHeightType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BodyHeightType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BodyHeight;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BodyWeightType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyWeightType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BodyWeightType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BodyWeight;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FightStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FightStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FavoriteProps_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FavoriteProps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Popularity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Popularity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HomeTownID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HomeTownID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BirthDay_Month_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BirthDay_Month;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BirthDay_Day_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BirthDay_Day;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VoiceType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPersonParamBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PersonParamBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPersonParamBase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_UID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PersonParamBase" },
		{ "ModuleRelativePath", "Public/PersonParamBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPersonParamBase, UID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_UID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_UID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PersonParamBase" },
		{ "ModuleRelativePath", "Public/PersonParamBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPersonParamBase, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_WrestlerID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_Gender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_Gender_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PersonParamBase" },
		{ "ModuleRelativePath", "Public/PersonParamBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPersonParamBase, Gender), Z_Construct_UEnum_ELITE_Core_EGender, METADATA_PARAMS(Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_Gender_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_Gender_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_WrestlerName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PersonParamBase" },
		{ "ModuleRelativePath", "Public/PersonParamBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_WrestlerName = { "WrestlerName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPersonParamBase, WrestlerName), Z_Construct_UScriptStruct_FWrestlerNameText, METADATA_PARAMS(Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_WrestlerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_WrestlerName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_BodyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_BodyType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PersonParamBase" },
		{ "ModuleRelativePath", "Public/PersonParamBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_BodyType = { "BodyType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPersonParamBase, BodyType), Z_Construct_UEnum_ELITE_Game_EBodyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_BodyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_BodyType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_BodyHeightType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_BodyHeightType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PersonParamBase" },
		{ "ModuleRelativePath", "Public/PersonParamBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_BodyHeightType = { "BodyHeightType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPersonParamBase, BodyHeightType), Z_Construct_UEnum_ELITE_Game_EBodyHeightType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_BodyHeightType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_BodyHeightType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_BodyHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PersonParamBase" },
		{ "ModuleRelativePath", "Public/PersonParamBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_BodyHeight = { "BodyHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPersonParamBase, BodyHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_BodyHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_BodyHeight_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_BodyWeightType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_BodyWeightType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PersonParamBase" },
		{ "ModuleRelativePath", "Public/PersonParamBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_BodyWeightType = { "BodyWeightType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPersonParamBase, BodyWeightType), Z_Construct_UEnum_ELITE_Game_EBodyWeightType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_BodyWeightType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_BodyWeightType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_BodyWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PersonParamBase" },
		{ "ModuleRelativePath", "Public/PersonParamBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_BodyWeight = { "BodyWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPersonParamBase, BodyWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_BodyWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_BodyWeight_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_SystemMotionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_SystemMotionType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PersonParamBase" },
		{ "ModuleRelativePath", "Public/PersonParamBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_SystemMotionType = { "SystemMotionType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPersonParamBase, SystemMotionType), Z_Construct_UEnum_ELITE_Game_ESystemMotionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_SystemMotionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_SystemMotionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_ReversalMotionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_ReversalMotionType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PersonParamBase" },
		{ "ModuleRelativePath", "Public/PersonParamBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_ReversalMotionType = { "ReversalMotionType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPersonParamBase, ReversalMotionType), Z_Construct_UEnum_ELITE_Game_EReversalMotionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_ReversalMotionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_ReversalMotionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_FanReaction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_FanReaction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PersonParamBase" },
		{ "ModuleRelativePath", "Public/PersonParamBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_FanReaction = { "FanReaction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPersonParamBase, FanReaction), Z_Construct_UEnum_ELITE_Game_EFanReaction, METADATA_PARAMS(Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_FanReaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_FanReaction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_FightStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PersonParamBase" },
		{ "ModuleRelativePath", "Public/PersonParamBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_FightStyle = { "FightStyle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPersonParamBase, FightStyle), METADATA_PARAMS(Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_FightStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_FightStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_FavoriteProps_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PersonParamBase" },
		{ "ModuleRelativePath", "Public/PersonParamBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_FavoriteProps = { "FavoriteProps", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPersonParamBase, FavoriteProps), METADATA_PARAMS(Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_FavoriteProps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_FavoriteProps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_Popularity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PersonParamBase" },
		{ "ModuleRelativePath", "Public/PersonParamBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_Popularity = { "Popularity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPersonParamBase, Popularity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_Popularity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_Popularity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_HomeTownID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PersonParamBase" },
		{ "ModuleRelativePath", "Public/PersonParamBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_HomeTownID = { "HomeTownID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPersonParamBase, HomeTownID), Z_Construct_UScriptStruct_FHomeTownID, METADATA_PARAMS(Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_HomeTownID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_HomeTownID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_BirthDay_Month_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PersonParamBase" },
		{ "ModuleRelativePath", "Public/PersonParamBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_BirthDay_Month = { "BirthDay_Month", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPersonParamBase, BirthDay_Month), METADATA_PARAMS(Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_BirthDay_Month_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_BirthDay_Month_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_BirthDay_Day_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PersonParamBase" },
		{ "ModuleRelativePath", "Public/PersonParamBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_BirthDay_Day = { "BirthDay_Day", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPersonParamBase, BirthDay_Day), METADATA_PARAMS(Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_BirthDay_Day_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_BirthDay_Day_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_VoiceType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PersonParamBase" },
		{ "ModuleRelativePath", "Public/PersonParamBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_VoiceType = { "VoiceType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPersonParamBase, VoiceType), METADATA_PARAMS(Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_VoiceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_VoiceType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPersonParamBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_UID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_Gender_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_Gender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_WrestlerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_BodyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_BodyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_BodyHeightType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_BodyHeightType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_BodyHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_BodyWeightType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_BodyWeightType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_BodyWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_SystemMotionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_SystemMotionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_ReversalMotionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_ReversalMotionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_FanReaction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_FanReaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_FightStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_FavoriteProps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_Popularity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_HomeTownID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_BirthDay_Month,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_BirthDay_Day,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonParamBase_Statics::NewProp_VoiceType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPersonParamBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"PersonParamBase",
		sizeof(FPersonParamBase),
		alignof(FPersonParamBase),
		Z_Construct_UScriptStruct_FPersonParamBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersonParamBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPersonParamBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersonParamBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPersonParamBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPersonParamBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PersonParamBase"), sizeof(FPersonParamBase), Get_Z_Construct_UScriptStruct_FPersonParamBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPersonParamBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPersonParamBase_Hash() { return 3857280459U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
