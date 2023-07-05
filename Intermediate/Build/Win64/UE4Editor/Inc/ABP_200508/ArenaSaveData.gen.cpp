// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ArenaSaveData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArenaSaveData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FArenaSaveData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
class UScriptStruct* FArenaSaveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FArenaSaveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FArenaSaveData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ArenaSaveData"), sizeof(FArenaSaveData), Get_Z_Construct_UScriptStruct_FArenaSaveData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FArenaSaveData>()
{
	return FArenaSaveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FArenaSaveData(FArenaSaveData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ArenaSaveData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFArenaSaveData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFArenaSaveData()
	{
		UScriptStruct::DeferCppStructOps<FArenaSaveData>(FName(TEXT("ArenaSaveData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFArenaSaveData;
	struct Z_Construct_UScriptStruct_FArenaSaveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OrderNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedDateTicks_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_CreatedDateTicks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastModifiedDateTicks_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_LastModifiedDateTicks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UseCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArenaLogoId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArenaLogoId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArenaMatchupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArenaMatchupId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArenaTransitionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArenaTransitionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArenaName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ArenaName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingMatId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RingMatId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingRopeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RingRopeId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingCornerPostId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RingCornerPostId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingCornerJointId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RingCornerJointId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingTurnbuckleCoverId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RingTurnbuckleCoverId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingApronId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RingApronId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingSideMatId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RingSideMatId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingSideFloorId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RingSideFloorId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingSideBarricadeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RingSideBarricadeId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StageTypeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StageTypeId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StageMovieId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StageMovieId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StageMinitronId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StageMinitronId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StageHeaderId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StageHeaderId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StageWallId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StageWallId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StageRampId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StageRampId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StageObjectId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StageObjectId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StageObjectPlaceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StageObjectPlaceId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightLEDId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LightLEDId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightSLId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LightSLId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightEnvironmentId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LightEnvironmentId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeZoneId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimeZoneId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeatherId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeatherId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudienceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AudienceId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScreenshotImageData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenshotImageData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScreenshotImageData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ThumbnailImageData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailImageData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ThumbnailImageData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaSaveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ArenaSaveData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArenaSaveData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_ItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaSaveData" },
		{ "ModuleRelativePath", "Public/ArenaSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaSaveData, ItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_OrderNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaSaveData" },
		{ "ModuleRelativePath", "Public/ArenaSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_OrderNo = { "OrderNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaSaveData, OrderNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_OrderNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_OrderNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_CreatedDateTicks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaSaveData" },
		{ "ModuleRelativePath", "Public/ArenaSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_CreatedDateTicks = { "CreatedDateTicks", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaSaveData, CreatedDateTicks), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_CreatedDateTicks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_CreatedDateTicks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_LastModifiedDateTicks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaSaveData" },
		{ "ModuleRelativePath", "Public/ArenaSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_LastModifiedDateTicks = { "LastModifiedDateTicks", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaSaveData, LastModifiedDateTicks), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_LastModifiedDateTicks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_LastModifiedDateTicks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_UseCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaSaveData" },
		{ "ModuleRelativePath", "Public/ArenaSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_UseCount = { "UseCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaSaveData, UseCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_UseCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_UseCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_ArenaLogoId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaSaveData" },
		{ "ModuleRelativePath", "Public/ArenaSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_ArenaLogoId = { "ArenaLogoId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaSaveData, ArenaLogoId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_ArenaLogoId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_ArenaLogoId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_ArenaMatchupId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaSaveData" },
		{ "ModuleRelativePath", "Public/ArenaSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_ArenaMatchupId = { "ArenaMatchupId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaSaveData, ArenaMatchupId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_ArenaMatchupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_ArenaMatchupId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_ArenaTransitionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaSaveData" },
		{ "ModuleRelativePath", "Public/ArenaSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_ArenaTransitionId = { "ArenaTransitionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaSaveData, ArenaTransitionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_ArenaTransitionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_ArenaTransitionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_ArenaName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaSaveData" },
		{ "ModuleRelativePath", "Public/ArenaSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_ArenaName = { "ArenaName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaSaveData, ArenaName), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_ArenaName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_ArenaName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingMatId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaSaveData" },
		{ "ModuleRelativePath", "Public/ArenaSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingMatId = { "RingMatId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaSaveData, RingMatId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingMatId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingMatId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingRopeId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaSaveData" },
		{ "ModuleRelativePath", "Public/ArenaSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingRopeId = { "RingRopeId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(RingRopeId, FArenaSaveData), STRUCT_OFFSET(FArenaSaveData, RingRopeId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingRopeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingRopeId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingCornerPostId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaSaveData" },
		{ "ModuleRelativePath", "Public/ArenaSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingCornerPostId = { "RingCornerPostId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(RingCornerPostId, FArenaSaveData), STRUCT_OFFSET(FArenaSaveData, RingCornerPostId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingCornerPostId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingCornerPostId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingCornerJointId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaSaveData" },
		{ "ModuleRelativePath", "Public/ArenaSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingCornerJointId = { "RingCornerJointId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(RingCornerJointId, FArenaSaveData), STRUCT_OFFSET(FArenaSaveData, RingCornerJointId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingCornerJointId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingCornerJointId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingTurnbuckleCoverId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaSaveData" },
		{ "ModuleRelativePath", "Public/ArenaSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingTurnbuckleCoverId = { "RingTurnbuckleCoverId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(RingTurnbuckleCoverId, FArenaSaveData), STRUCT_OFFSET(FArenaSaveData, RingTurnbuckleCoverId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingTurnbuckleCoverId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingTurnbuckleCoverId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingApronId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaSaveData" },
		{ "ModuleRelativePath", "Public/ArenaSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingApronId = { "RingApronId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(RingApronId, FArenaSaveData), STRUCT_OFFSET(FArenaSaveData, RingApronId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingApronId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingApronId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingSideMatId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaSaveData" },
		{ "ModuleRelativePath", "Public/ArenaSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingSideMatId = { "RingSideMatId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaSaveData, RingSideMatId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingSideMatId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingSideMatId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingSideFloorId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaSaveData" },
		{ "ModuleRelativePath", "Public/ArenaSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingSideFloorId = { "RingSideFloorId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaSaveData, RingSideFloorId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingSideFloorId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingSideFloorId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingSideBarricadeId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaSaveData" },
		{ "ModuleRelativePath", "Public/ArenaSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingSideBarricadeId = { "RingSideBarricadeId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaSaveData, RingSideBarricadeId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingSideBarricadeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingSideBarricadeId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_StageTypeId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaSaveData" },
		{ "ModuleRelativePath", "Public/ArenaSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_StageTypeId = { "StageTypeId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaSaveData, StageTypeId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_StageTypeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_StageTypeId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_StageMovieId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaSaveData" },
		{ "ModuleRelativePath", "Public/ArenaSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_StageMovieId = { "StageMovieId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaSaveData, StageMovieId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_StageMovieId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_StageMovieId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_StageMinitronId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaSaveData" },
		{ "ModuleRelativePath", "Public/ArenaSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_StageMinitronId = { "StageMinitronId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaSaveData, StageMinitronId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_StageMinitronId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_StageMinitronId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_StageHeaderId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaSaveData" },
		{ "ModuleRelativePath", "Public/ArenaSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_StageHeaderId = { "StageHeaderId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaSaveData, StageHeaderId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_StageHeaderId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_StageHeaderId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_StageWallId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaSaveData" },
		{ "ModuleRelativePath", "Public/ArenaSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_StageWallId = { "StageWallId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaSaveData, StageWallId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_StageWallId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_StageWallId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_StageRampId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaSaveData" },
		{ "ModuleRelativePath", "Public/ArenaSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_StageRampId = { "StageRampId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaSaveData, StageRampId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_StageRampId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_StageRampId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_StageObjectId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaSaveData" },
		{ "ModuleRelativePath", "Public/ArenaSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_StageObjectId = { "StageObjectId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(StageObjectId, FArenaSaveData), STRUCT_OFFSET(FArenaSaveData, StageObjectId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_StageObjectId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_StageObjectId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_StageObjectPlaceId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaSaveData" },
		{ "ModuleRelativePath", "Public/ArenaSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_StageObjectPlaceId = { "StageObjectPlaceId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(StageObjectPlaceId, FArenaSaveData), STRUCT_OFFSET(FArenaSaveData, StageObjectPlaceId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_StageObjectPlaceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_StageObjectPlaceId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_LightLEDId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaSaveData" },
		{ "ModuleRelativePath", "Public/ArenaSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_LightLEDId = { "LightLEDId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(LightLEDId, FArenaSaveData), STRUCT_OFFSET(FArenaSaveData, LightLEDId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_LightLEDId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_LightLEDId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_LightSLId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaSaveData" },
		{ "ModuleRelativePath", "Public/ArenaSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_LightSLId = { "LightSLId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(LightSLId, FArenaSaveData), STRUCT_OFFSET(FArenaSaveData, LightSLId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_LightSLId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_LightSLId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_LightEnvironmentId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaSaveData" },
		{ "ModuleRelativePath", "Public/ArenaSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_LightEnvironmentId = { "LightEnvironmentId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaSaveData, LightEnvironmentId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_LightEnvironmentId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_LightEnvironmentId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_TimeZoneId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaSaveData" },
		{ "ModuleRelativePath", "Public/ArenaSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_TimeZoneId = { "TimeZoneId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaSaveData, TimeZoneId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_TimeZoneId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_TimeZoneId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_WeatherId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaSaveData" },
		{ "ModuleRelativePath", "Public/ArenaSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_WeatherId = { "WeatherId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaSaveData, WeatherId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_WeatherId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_WeatherId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_AudienceId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaSaveData" },
		{ "ModuleRelativePath", "Public/ArenaSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_AudienceId = { "AudienceId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaSaveData, AudienceId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_AudienceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_AudienceId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_ScreenshotImageData_Inner = { "ScreenshotImageData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_ScreenshotImageData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaSaveData" },
		{ "ModuleRelativePath", "Public/ArenaSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_ScreenshotImageData = { "ScreenshotImageData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaSaveData, ScreenshotImageData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_ScreenshotImageData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_ScreenshotImageData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_ThumbnailImageData_Inner = { "ThumbnailImageData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_ThumbnailImageData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaSaveData" },
		{ "ModuleRelativePath", "Public/ArenaSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_ThumbnailImageData = { "ThumbnailImageData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaSaveData, ThumbnailImageData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_ThumbnailImageData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_ThumbnailImageData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArenaSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_OrderNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_CreatedDateTicks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_LastModifiedDateTicks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_UseCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_ArenaLogoId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_ArenaMatchupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_ArenaTransitionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_ArenaName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingMatId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingRopeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingCornerPostId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingCornerJointId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingTurnbuckleCoverId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingApronId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingSideMatId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingSideFloorId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_RingSideBarricadeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_StageTypeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_StageMovieId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_StageMinitronId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_StageHeaderId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_StageWallId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_StageRampId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_StageObjectId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_StageObjectPlaceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_LightLEDId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_LightSLId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_LightEnvironmentId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_TimeZoneId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_WeatherId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_AudienceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_ScreenshotImageData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_ScreenshotImageData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_ThumbnailImageData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaSaveData_Statics::NewProp_ThumbnailImageData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArenaSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ArenaSaveData",
		sizeof(FArenaSaveData),
		alignof(FArenaSaveData),
		Z_Construct_UScriptStruct_FArenaSaveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaSaveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FArenaSaveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FArenaSaveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ArenaSaveData"), sizeof(FArenaSaveData), Get_Z_Construct_UScriptStruct_FArenaSaveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FArenaSaveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FArenaSaveData_Hash() { return 68214960U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
