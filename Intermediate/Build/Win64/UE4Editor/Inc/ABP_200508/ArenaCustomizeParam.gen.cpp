// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ArenaCustomizeParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArenaCustomizeParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FArenaCustomizeParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FArenaCustomizeParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FArenaCustomizeParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FArenaCustomizeParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ArenaCustomizeParam"), sizeof(FArenaCustomizeParam), Get_Z_Construct_UScriptStruct_FArenaCustomizeParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FArenaCustomizeParam>()
{
	return FArenaCustomizeParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FArenaCustomizeParam(FArenaCustomizeParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ArenaCustomizeParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFArenaCustomizeParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFArenaCustomizeParam()
	{
		UScriptStruct::DeferCppStructOps<FArenaCustomizeParam>(FName(TEXT("ArenaCustomizeParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFArenaCustomizeParam;
	struct Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CreatedDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastModifiedDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastModifiedDate;
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
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RingRopeId_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingRopeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RingRopeId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RingCornerPostId_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingCornerPostId_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RingCornerPostId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingCornerJointId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RingCornerJointId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RingTurnbuckleCoverId_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingTurnbuckleCoverId_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RingTurnbuckleCoverId;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StageRampId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StageRampId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StageObjectPlaceId_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StageObjectPlaceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StageObjectPlaceId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StageObjectId_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StageObjectId_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StageObjectId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LightLEDId_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightLEDId_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LightLEDId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LightSLId_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightSLId_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LightSLId;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ArenaCustomizeParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArenaCustomizeParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_ItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaCustomizeParam" },
		{ "ModuleRelativePath", "Public/ArenaCustomizeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaCustomizeParam, ItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_OrderNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaCustomizeParam" },
		{ "ModuleRelativePath", "Public/ArenaCustomizeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_OrderNo = { "OrderNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaCustomizeParam, OrderNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_OrderNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_OrderNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_CreatedDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaCustomizeParam" },
		{ "ModuleRelativePath", "Public/ArenaCustomizeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_CreatedDate = { "CreatedDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaCustomizeParam, CreatedDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_CreatedDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_CreatedDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_LastModifiedDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaCustomizeParam" },
		{ "ModuleRelativePath", "Public/ArenaCustomizeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_LastModifiedDate = { "LastModifiedDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaCustomizeParam, LastModifiedDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_LastModifiedDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_LastModifiedDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_UseCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaCustomizeParam" },
		{ "ModuleRelativePath", "Public/ArenaCustomizeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_UseCount = { "UseCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaCustomizeParam, UseCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_UseCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_UseCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_ArenaLogoId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaCustomizeParam" },
		{ "ModuleRelativePath", "Public/ArenaCustomizeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_ArenaLogoId = { "ArenaLogoId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaCustomizeParam, ArenaLogoId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_ArenaLogoId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_ArenaLogoId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_ArenaMatchupId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaCustomizeParam" },
		{ "ModuleRelativePath", "Public/ArenaCustomizeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_ArenaMatchupId = { "ArenaMatchupId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaCustomizeParam, ArenaMatchupId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_ArenaMatchupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_ArenaMatchupId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_ArenaTransitionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaCustomizeParam" },
		{ "ModuleRelativePath", "Public/ArenaCustomizeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_ArenaTransitionId = { "ArenaTransitionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaCustomizeParam, ArenaTransitionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_ArenaTransitionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_ArenaTransitionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_ArenaName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaCustomizeParam" },
		{ "ModuleRelativePath", "Public/ArenaCustomizeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_ArenaName = { "ArenaName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaCustomizeParam, ArenaName), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_ArenaName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_ArenaName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingMatId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaCustomizeParam" },
		{ "ModuleRelativePath", "Public/ArenaCustomizeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingMatId = { "RingMatId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaCustomizeParam, RingMatId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingMatId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingMatId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingRopeId_Inner = { "RingRopeId", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingRopeId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaCustomizeParam" },
		{ "ModuleRelativePath", "Public/ArenaCustomizeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingRopeId = { "RingRopeId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaCustomizeParam, RingRopeId), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingRopeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingRopeId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingCornerPostId_Inner = { "RingCornerPostId", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingCornerPostId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaCustomizeParam" },
		{ "ModuleRelativePath", "Public/ArenaCustomizeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingCornerPostId = { "RingCornerPostId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaCustomizeParam, RingCornerPostId), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingCornerPostId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingCornerPostId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingCornerJointId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaCustomizeParam" },
		{ "ModuleRelativePath", "Public/ArenaCustomizeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingCornerJointId = { "RingCornerJointId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaCustomizeParam, RingCornerJointId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingCornerJointId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingCornerJointId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingTurnbuckleCoverId_Inner = { "RingTurnbuckleCoverId", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingTurnbuckleCoverId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaCustomizeParam" },
		{ "ModuleRelativePath", "Public/ArenaCustomizeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingTurnbuckleCoverId = { "RingTurnbuckleCoverId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaCustomizeParam, RingTurnbuckleCoverId), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingTurnbuckleCoverId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingTurnbuckleCoverId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingApronId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaCustomizeParam" },
		{ "ModuleRelativePath", "Public/ArenaCustomizeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingApronId = { "RingApronId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaCustomizeParam, RingApronId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingApronId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingApronId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingSideMatId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaCustomizeParam" },
		{ "ModuleRelativePath", "Public/ArenaCustomizeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingSideMatId = { "RingSideMatId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaCustomizeParam, RingSideMatId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingSideMatId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingSideMatId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingSideFloorId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaCustomizeParam" },
		{ "ModuleRelativePath", "Public/ArenaCustomizeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingSideFloorId = { "RingSideFloorId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaCustomizeParam, RingSideFloorId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingSideFloorId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingSideFloorId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingSideBarricadeId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaCustomizeParam" },
		{ "ModuleRelativePath", "Public/ArenaCustomizeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingSideBarricadeId = { "RingSideBarricadeId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaCustomizeParam, RingSideBarricadeId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingSideBarricadeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingSideBarricadeId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_StageTypeId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaCustomizeParam" },
		{ "ModuleRelativePath", "Public/ArenaCustomizeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_StageTypeId = { "StageTypeId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaCustomizeParam, StageTypeId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_StageTypeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_StageTypeId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_StageMovieId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaCustomizeParam" },
		{ "ModuleRelativePath", "Public/ArenaCustomizeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_StageMovieId = { "StageMovieId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaCustomizeParam, StageMovieId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_StageMovieId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_StageMovieId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_StageRampId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaCustomizeParam" },
		{ "ModuleRelativePath", "Public/ArenaCustomizeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_StageRampId = { "StageRampId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaCustomizeParam, StageRampId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_StageRampId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_StageRampId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_StageObjectPlaceId_Inner = { "StageObjectPlaceId", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_StageObjectPlaceId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaCustomizeParam" },
		{ "ModuleRelativePath", "Public/ArenaCustomizeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_StageObjectPlaceId = { "StageObjectPlaceId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaCustomizeParam, StageObjectPlaceId), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_StageObjectPlaceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_StageObjectPlaceId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_StageObjectId_Inner = { "StageObjectId", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_StageObjectId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaCustomizeParam" },
		{ "ModuleRelativePath", "Public/ArenaCustomizeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_StageObjectId = { "StageObjectId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaCustomizeParam, StageObjectId), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_StageObjectId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_StageObjectId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_LightLEDId_Inner = { "LightLEDId", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_LightLEDId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaCustomizeParam" },
		{ "ModuleRelativePath", "Public/ArenaCustomizeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_LightLEDId = { "LightLEDId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaCustomizeParam, LightLEDId), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_LightLEDId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_LightLEDId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_LightSLId_Inner = { "LightSLId", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_LightSLId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaCustomizeParam" },
		{ "ModuleRelativePath", "Public/ArenaCustomizeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_LightSLId = { "LightSLId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaCustomizeParam, LightSLId), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_LightSLId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_LightSLId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_LightEnvironmentId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaCustomizeParam" },
		{ "ModuleRelativePath", "Public/ArenaCustomizeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_LightEnvironmentId = { "LightEnvironmentId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaCustomizeParam, LightEnvironmentId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_LightEnvironmentId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_LightEnvironmentId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_TimeZoneId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaCustomizeParam" },
		{ "ModuleRelativePath", "Public/ArenaCustomizeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_TimeZoneId = { "TimeZoneId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaCustomizeParam, TimeZoneId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_TimeZoneId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_TimeZoneId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_WeatherId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaCustomizeParam" },
		{ "ModuleRelativePath", "Public/ArenaCustomizeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_WeatherId = { "WeatherId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaCustomizeParam, WeatherId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_WeatherId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_WeatherId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_ScreenshotImageData_Inner = { "ScreenshotImageData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_ScreenshotImageData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaCustomizeParam" },
		{ "ModuleRelativePath", "Public/ArenaCustomizeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_ScreenshotImageData = { "ScreenshotImageData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaCustomizeParam, ScreenshotImageData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_ScreenshotImageData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_ScreenshotImageData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_ThumbnailImageData_Inner = { "ThumbnailImageData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_ThumbnailImageData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArenaCustomizeParam" },
		{ "ModuleRelativePath", "Public/ArenaCustomizeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_ThumbnailImageData = { "ThumbnailImageData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArenaCustomizeParam, ThumbnailImageData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_ThumbnailImageData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_ThumbnailImageData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_OrderNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_CreatedDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_LastModifiedDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_UseCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_ArenaLogoId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_ArenaMatchupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_ArenaTransitionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_ArenaName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingMatId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingRopeId_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingRopeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingCornerPostId_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingCornerPostId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingCornerJointId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingTurnbuckleCoverId_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingTurnbuckleCoverId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingApronId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingSideMatId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingSideFloorId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_RingSideBarricadeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_StageTypeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_StageMovieId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_StageRampId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_StageObjectPlaceId_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_StageObjectPlaceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_StageObjectId_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_StageObjectId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_LightLEDId_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_LightLEDId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_LightSLId_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_LightSLId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_LightEnvironmentId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_TimeZoneId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_WeatherId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_ScreenshotImageData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_ScreenshotImageData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_ThumbnailImageData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::NewProp_ThumbnailImageData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ArenaCustomizeParam",
		sizeof(FArenaCustomizeParam),
		alignof(FArenaCustomizeParam),
		Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FArenaCustomizeParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FArenaCustomizeParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ArenaCustomizeParam"), sizeof(FArenaCustomizeParam), Get_Z_Construct_UScriptStruct_FArenaCustomizeParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FArenaCustomizeParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FArenaCustomizeParam_Hash() { return 414609513U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
