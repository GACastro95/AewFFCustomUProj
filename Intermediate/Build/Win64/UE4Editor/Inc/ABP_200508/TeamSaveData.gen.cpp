// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/TeamSaveData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeamSaveData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FTeamSaveData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FTeamMemberInfo();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerProfile_CutScene();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EFanReaction();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMoves_Finisher();
// End Cross Module References
class UScriptStruct* FTeamSaveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FTeamSaveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTeamSaveData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("TeamSaveData"), sizeof(FTeamSaveData), Get_Z_Construct_UScriptStruct_FTeamSaveData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FTeamSaveData>()
{
	return FTeamSaveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTeamSaveData(FTeamSaveData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("TeamSaveData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFTeamSaveData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFTeamSaveData()
	{
		UScriptStruct::DeferCppStructOps<FTeamSaveData>(FName(TEXT("TeamSaveData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFTeamSaveData;
	struct Z_Construct_UScriptStruct_FTeamSaveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TeamId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TeamName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TeamMember_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamMember_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TeamMember;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SNSName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SNSName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnnounceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AnnounceId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cutscene_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Cutscene;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedDateTicks_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_CreatedDateTicks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastModifiedDateTicks_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_LastModifiedDateTicks;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FanReaction_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FanReaction_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FanReaction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagFinisher01_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagFinisher01;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagFinisher02_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagFinisher02;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTeamSaveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TeamSaveData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTeamSaveData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_TeamId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TeamSaveData" },
		{ "ModuleRelativePath", "Public/TeamSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_TeamId = { "TeamId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTeamSaveData, TeamId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_TeamId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_TeamId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_TeamName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TeamSaveData" },
		{ "ModuleRelativePath", "Public/TeamSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_TeamName = { "TeamName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTeamSaveData, TeamName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_TeamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_TeamName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_TeamMember_Inner = { "TeamMember", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTeamMemberInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_TeamMember_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TeamSaveData" },
		{ "ModuleRelativePath", "Public/TeamSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_TeamMember = { "TeamMember", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTeamSaveData, TeamMember), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_TeamMember_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_TeamMember_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_SNSName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TeamSaveData" },
		{ "ModuleRelativePath", "Public/TeamSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_SNSName = { "SNSName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTeamSaveData, SNSName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_SNSName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_SNSName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_AnnounceId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TeamSaveData" },
		{ "ModuleRelativePath", "Public/TeamSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_AnnounceId = { "AnnounceId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTeamSaveData, AnnounceId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_AnnounceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_AnnounceId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_Cutscene_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TeamSaveData" },
		{ "ModuleRelativePath", "Public/TeamSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_Cutscene = { "Cutscene", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTeamSaveData, Cutscene), Z_Construct_UScriptStruct_FELWrestlerProfile_CutScene, METADATA_PARAMS(Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_Cutscene_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_Cutscene_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_CreatedDateTicks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TeamSaveData" },
		{ "ModuleRelativePath", "Public/TeamSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_CreatedDateTicks = { "CreatedDateTicks", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTeamSaveData, CreatedDateTicks), METADATA_PARAMS(Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_CreatedDateTicks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_CreatedDateTicks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_LastModifiedDateTicks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TeamSaveData" },
		{ "ModuleRelativePath", "Public/TeamSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_LastModifiedDateTicks = { "LastModifiedDateTicks", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTeamSaveData, LastModifiedDateTicks), METADATA_PARAMS(Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_LastModifiedDateTicks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_LastModifiedDateTicks_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_FanReaction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_FanReaction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TeamSaveData" },
		{ "ModuleRelativePath", "Public/TeamSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_FanReaction = { "FanReaction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTeamSaveData, FanReaction), Z_Construct_UEnum_ELITE_Game_EFanReaction, METADATA_PARAMS(Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_FanReaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_FanReaction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_TagFinisher01_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TeamSaveData" },
		{ "ModuleRelativePath", "Public/TeamSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_TagFinisher01 = { "TagFinisher01", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTeamSaveData, TagFinisher01), Z_Construct_UScriptStruct_FELMoves_Finisher, METADATA_PARAMS(Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_TagFinisher01_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_TagFinisher01_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_TagFinisher02_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TeamSaveData" },
		{ "ModuleRelativePath", "Public/TeamSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_TagFinisher02 = { "TagFinisher02", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTeamSaveData, TagFinisher02), Z_Construct_UScriptStruct_FELMoves_Finisher, METADATA_PARAMS(Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_TagFinisher02_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_TagFinisher02_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTeamSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_TeamId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_TeamName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_TeamMember_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_TeamMember,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_SNSName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_AnnounceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_Cutscene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_CreatedDateTicks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_LastModifiedDateTicks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_FanReaction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_FanReaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_TagFinisher01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamSaveData_Statics::NewProp_TagFinisher02,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTeamSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"TeamSaveData",
		sizeof(FTeamSaveData),
		alignof(FTeamSaveData),
		Z_Construct_UScriptStruct_FTeamSaveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeamSaveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTeamSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeamSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTeamSaveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTeamSaveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TeamSaveData"), sizeof(FTeamSaveData), Get_Z_Construct_UScriptStruct_FTeamSaveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTeamSaveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTeamSaveData_Hash() { return 2949865992U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
