// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SaveDataObject_UGC_Arena.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveDataObject_UGC_Arena() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataObject_UGC_Arena_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataObject_UGC_Arena();
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataObjectBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FArenaCustomizeParam();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execGetArenaCustomizeParam)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FArenaCustomizeParam,Z_Param_Out_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetArenaCustomizeParam(Z_Param_Index,Z_Param_Out_Param);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execGetArenaCustomizeParam_All)
	{
		P_GET_TARRAY_REF(FArenaCustomizeParam,Z_Param_Out_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetArenaCustomizeParam_All(Z_Param_Out_Param);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execGetArenaLogoId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetArenaLogoId(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execGetArenaMatchupId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetArenaMatchupId(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execGetArenaName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetArenaName(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execGetArenaTransitionId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetArenaTransitionId(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execGetCreatedDate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=P_THIS->GetCreatedDate(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execGetItemId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=P_THIS->GetItemId(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execGetLastModifiedDate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=P_THIS->GetLastModifiedDate(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execGetLightEnvironmentId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLightEnvironmentId(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execGetLightLEDId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_No);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLightLEDId(Z_Param_Index,Z_Param_No);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execGetLightSLId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_No);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLightSLId(Z_Param_Index,Z_Param_No);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execGetOrderNo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetOrderNo(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execGetRingApronId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRingApronId(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execGetRingCornerJointId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRingCornerJointId(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execGetRingCornerPostId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_No);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRingCornerPostId(Z_Param_Index,Z_Param_No);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execGetRingMatId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRingMatId(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execGetRingRopeId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_LineNo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRingRopeId(Z_Param_Index,Z_Param_LineNo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execGetRingSideBarricadeId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRingSideBarricadeId(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execGetRingSideFloorId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRingSideFloorId(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execGetRingSideMatId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRingSideMatId(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execGetRingTurnbuckleCoverId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_LineNo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRingTurnbuckleCoverId(Z_Param_Index,Z_Param_LineNo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execGetScreenshotImageData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=P_THIS->GetScreenshotImageData(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execGetStageMovieId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetStageMovieId(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execGetStageObjectId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_No);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PlaceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetStageObjectId(Z_Param_Index,Z_Param_No,Z_Param_Out_PlaceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execGetStageRampId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetStageRampId(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execGetStageTypeId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetStageTypeId(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execGetThumbnailImageData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=P_THIS->GetThumbnailImageData(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execGetTimeZoneId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTimeZoneId(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execGetUseCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetUseCount(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execGetWeatherId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetWeatherId(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execSetArenaCustomizeParam)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FArenaCustomizeParam,Z_Param_Out_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetArenaCustomizeParam(Z_Param_Index,Z_Param_Out_Param);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execSetArenaCustomizeParam_ALL)
	{
		P_GET_TARRAY_REF(FArenaCustomizeParam,Z_Param_Out_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetArenaCustomizeParam_ALL(Z_Param_Out_Param);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execSetArenaLogoId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_ArenaLogoId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetArenaLogoId(Z_Param_Index,Z_Param_ArenaLogoId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execSetArenaMatchupId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_ArenaMatchupId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetArenaMatchupId(Z_Param_Index,Z_Param_ArenaMatchupId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execSetArenaName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ArenaName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetArenaName(Z_Param_Index,Z_Param_Out_ArenaName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execSetArenaTransitionId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_ArenaTransitionId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetArenaTransitionId(Z_Param_Index,Z_Param_ArenaTransitionId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execSetCreatedDate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT(FDateTime,Z_Param_CreatedDate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCreatedDate(Z_Param_Index,Z_Param_CreatedDate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execSetImageData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_ScreenshotImageData);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_ThumbnailImageData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetImageData(Z_Param_Index,Z_Param_Out_ScreenshotImageData,Z_Param_Out_ThumbnailImageData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execSetItemID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT(FGuid,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetItemID(Z_Param_Index,Z_Param_ID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execSetLastModifiedDate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT(FDateTime,Z_Param_LastModifiedDate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLastModifiedDate(Z_Param_Index,Z_Param_LastModifiedDate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execSetLightLEDId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_No);
		P_GET_PROPERTY(FIntProperty,Z_Param_LightLEDId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLightLEDId(Z_Param_Index,Z_Param_No,Z_Param_LightLEDId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execSetLightLightEnvironmentId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_LightEnvironmentId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLightLightEnvironmentId(Z_Param_Index,Z_Param_LightEnvironmentId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execSetLightSLId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_No);
		P_GET_PROPERTY(FIntProperty,Z_Param_LightSLId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLightSLId(Z_Param_Index,Z_Param_No,Z_Param_LightSLId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execSetOrderNo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_OrderNo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOrderNo(Z_Param_Index,Z_Param_OrderNo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execSetRingApronId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_RingApronId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRingApronId(Z_Param_Index,Z_Param_RingApronId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execSetRingCornerJointId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_RingCornerJointId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRingCornerJointId(Z_Param_Index,Z_Param_RingCornerJointId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execSetRingCornerPostId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_No);
		P_GET_PROPERTY(FIntProperty,Z_Param_RingCornerPostId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRingCornerPostId(Z_Param_Index,Z_Param_No,Z_Param_RingCornerPostId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execSetRingMatId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_RingMatId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRingMatId(Z_Param_Index,Z_Param_RingMatId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execSetRingRopeId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_LineNo);
		P_GET_PROPERTY(FIntProperty,Z_Param_RingRopeId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRingRopeId(Z_Param_Index,Z_Param_LineNo,Z_Param_RingRopeId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execSetRingSideBarricadeId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_RingSideBarricadeId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRingSideBarricadeId(Z_Param_Index,Z_Param_RingSideBarricadeId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execSetRingSideFloorId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_RingSideFloorId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRingSideFloorId(Z_Param_Index,Z_Param_RingSideFloorId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execSetRingSideMatId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_RingSideMatId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRingSideMatId(Z_Param_Index,Z_Param_RingSideMatId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execSetRingTurnbuckleCoverId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_LineNo);
		P_GET_PROPERTY(FIntProperty,Z_Param_RingTurnbuckleCoverId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRingTurnbuckleCoverId(Z_Param_Index,Z_Param_LineNo,Z_Param_RingTurnbuckleCoverId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execSetStageMovieId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_StageMovieId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStageMovieId(Z_Param_Index,Z_Param_StageMovieId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execSetStageObjectId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_No);
		P_GET_PROPERTY(FIntProperty,Z_Param_StageObjectId);
		P_GET_PROPERTY(FIntProperty,Z_Param_StageObjectPlaceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStageObjectId(Z_Param_Index,Z_Param_No,Z_Param_StageObjectId,Z_Param_StageObjectPlaceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execSetStageRampId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_StageRampId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStageRampId(Z_Param_Index,Z_Param_StageRampId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execSetStageTypeId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_StageTypeId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStageTypeId(Z_Param_Index,Z_Param_StageTypeId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execSetTimeZoneId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_TimeZoneId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTimeZoneId(Z_Param_Index,Z_Param_TimeZoneId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execSetUseCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_UseCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseCount(Z_Param_Index,Z_Param_UseCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execSetWeatherId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_WeatherId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWeatherId(Z_Param_Index,Z_Param_WeatherId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Arena::execSortArenaCustomizeParam)
	{
		P_GET_TARRAY_REF(FArenaCustomizeParam,Z_Param_Out_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SortArenaCustomizeParam(Z_Param_Out_Param);
		P_NATIVE_END;
	}
	void USaveDataObject_UGC_Arena::StaticRegisterNativesUSaveDataObject_UGC_Arena()
	{
		UClass* Class = USaveDataObject_UGC_Arena::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetArenaCustomizeParam", &USaveDataObject_UGC_Arena::execGetArenaCustomizeParam },
			{ "GetArenaCustomizeParam_All", &USaveDataObject_UGC_Arena::execGetArenaCustomizeParam_All },
			{ "GetArenaLogoId", &USaveDataObject_UGC_Arena::execGetArenaLogoId },
			{ "GetArenaMatchupId", &USaveDataObject_UGC_Arena::execGetArenaMatchupId },
			{ "GetArenaName", &USaveDataObject_UGC_Arena::execGetArenaName },
			{ "GetArenaTransitionId", &USaveDataObject_UGC_Arena::execGetArenaTransitionId },
			{ "GetCreatedDate", &USaveDataObject_UGC_Arena::execGetCreatedDate },
			{ "GetItemId", &USaveDataObject_UGC_Arena::execGetItemId },
			{ "GetLastModifiedDate", &USaveDataObject_UGC_Arena::execGetLastModifiedDate },
			{ "GetLightEnvironmentId", &USaveDataObject_UGC_Arena::execGetLightEnvironmentId },
			{ "GetLightLEDId", &USaveDataObject_UGC_Arena::execGetLightLEDId },
			{ "GetLightSLId", &USaveDataObject_UGC_Arena::execGetLightSLId },
			{ "GetOrderNo", &USaveDataObject_UGC_Arena::execGetOrderNo },
			{ "GetRingApronId", &USaveDataObject_UGC_Arena::execGetRingApronId },
			{ "GetRingCornerJointId", &USaveDataObject_UGC_Arena::execGetRingCornerJointId },
			{ "GetRingCornerPostId", &USaveDataObject_UGC_Arena::execGetRingCornerPostId },
			{ "GetRingMatId", &USaveDataObject_UGC_Arena::execGetRingMatId },
			{ "GetRingRopeId", &USaveDataObject_UGC_Arena::execGetRingRopeId },
			{ "GetRingSideBarricadeId", &USaveDataObject_UGC_Arena::execGetRingSideBarricadeId },
			{ "GetRingSideFloorId", &USaveDataObject_UGC_Arena::execGetRingSideFloorId },
			{ "GetRingSideMatId", &USaveDataObject_UGC_Arena::execGetRingSideMatId },
			{ "GetRingTurnbuckleCoverId", &USaveDataObject_UGC_Arena::execGetRingTurnbuckleCoverId },
			{ "GetScreenshotImageData", &USaveDataObject_UGC_Arena::execGetScreenshotImageData },
			{ "GetStageMovieId", &USaveDataObject_UGC_Arena::execGetStageMovieId },
			{ "GetStageObjectId", &USaveDataObject_UGC_Arena::execGetStageObjectId },
			{ "GetStageRampId", &USaveDataObject_UGC_Arena::execGetStageRampId },
			{ "GetStageTypeId", &USaveDataObject_UGC_Arena::execGetStageTypeId },
			{ "GetThumbnailImageData", &USaveDataObject_UGC_Arena::execGetThumbnailImageData },
			{ "GetTimeZoneId", &USaveDataObject_UGC_Arena::execGetTimeZoneId },
			{ "GetUseCount", &USaveDataObject_UGC_Arena::execGetUseCount },
			{ "GetWeatherId", &USaveDataObject_UGC_Arena::execGetWeatherId },
			{ "SetArenaCustomizeParam", &USaveDataObject_UGC_Arena::execSetArenaCustomizeParam },
			{ "SetArenaCustomizeParam_ALL", &USaveDataObject_UGC_Arena::execSetArenaCustomizeParam_ALL },
			{ "SetArenaLogoId", &USaveDataObject_UGC_Arena::execSetArenaLogoId },
			{ "SetArenaMatchupId", &USaveDataObject_UGC_Arena::execSetArenaMatchupId },
			{ "SetArenaName", &USaveDataObject_UGC_Arena::execSetArenaName },
			{ "SetArenaTransitionId", &USaveDataObject_UGC_Arena::execSetArenaTransitionId },
			{ "SetCreatedDate", &USaveDataObject_UGC_Arena::execSetCreatedDate },
			{ "SetImageData", &USaveDataObject_UGC_Arena::execSetImageData },
			{ "SetItemID", &USaveDataObject_UGC_Arena::execSetItemID },
			{ "SetLastModifiedDate", &USaveDataObject_UGC_Arena::execSetLastModifiedDate },
			{ "SetLightLEDId", &USaveDataObject_UGC_Arena::execSetLightLEDId },
			{ "SetLightLightEnvironmentId", &USaveDataObject_UGC_Arena::execSetLightLightEnvironmentId },
			{ "SetLightSLId", &USaveDataObject_UGC_Arena::execSetLightSLId },
			{ "SetOrderNo", &USaveDataObject_UGC_Arena::execSetOrderNo },
			{ "SetRingApronId", &USaveDataObject_UGC_Arena::execSetRingApronId },
			{ "SetRingCornerJointId", &USaveDataObject_UGC_Arena::execSetRingCornerJointId },
			{ "SetRingCornerPostId", &USaveDataObject_UGC_Arena::execSetRingCornerPostId },
			{ "SetRingMatId", &USaveDataObject_UGC_Arena::execSetRingMatId },
			{ "SetRingRopeId", &USaveDataObject_UGC_Arena::execSetRingRopeId },
			{ "SetRingSideBarricadeId", &USaveDataObject_UGC_Arena::execSetRingSideBarricadeId },
			{ "SetRingSideFloorId", &USaveDataObject_UGC_Arena::execSetRingSideFloorId },
			{ "SetRingSideMatId", &USaveDataObject_UGC_Arena::execSetRingSideMatId },
			{ "SetRingTurnbuckleCoverId", &USaveDataObject_UGC_Arena::execSetRingTurnbuckleCoverId },
			{ "SetStageMovieId", &USaveDataObject_UGC_Arena::execSetStageMovieId },
			{ "SetStageObjectId", &USaveDataObject_UGC_Arena::execSetStageObjectId },
			{ "SetStageRampId", &USaveDataObject_UGC_Arena::execSetStageRampId },
			{ "SetStageTypeId", &USaveDataObject_UGC_Arena::execSetStageTypeId },
			{ "SetTimeZoneId", &USaveDataObject_UGC_Arena::execSetTimeZoneId },
			{ "SetUseCount", &USaveDataObject_UGC_Arena::execSetUseCount },
			{ "SetWeatherId", &USaveDataObject_UGC_Arena::execSetWeatherId },
			{ "SortArenaCustomizeParam", &USaveDataObject_UGC_Arena::execSortArenaCustomizeParam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaCustomizeParam_Statics
	{
		struct SaveDataObject_UGC_Arena_eventGetArenaCustomizeParam_Parms
		{
			int32 Index;
			FArenaCustomizeParam Param;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaCustomizeParam_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetArenaCustomizeParam_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaCustomizeParam_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetArenaCustomizeParam_Parms, Param), Z_Construct_UScriptStruct_FArenaCustomizeParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaCustomizeParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaCustomizeParam_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaCustomizeParam_Statics::NewProp_Param,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaCustomizeParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaCustomizeParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "GetArenaCustomizeParam", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventGetArenaCustomizeParam_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaCustomizeParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaCustomizeParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaCustomizeParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaCustomizeParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaCustomizeParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaCustomizeParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaCustomizeParam_All_Statics
	{
		struct SaveDataObject_UGC_Arena_eventGetArenaCustomizeParam_All_Parms
		{
			TArray<FArenaCustomizeParam> Param;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Param_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaCustomizeParam_All_Statics::NewProp_Param_Inner = { "Param", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FArenaCustomizeParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaCustomizeParam_All_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetArenaCustomizeParam_All_Parms, Param), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaCustomizeParam_All_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaCustomizeParam_All_Statics::NewProp_Param_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaCustomizeParam_All_Statics::NewProp_Param,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaCustomizeParam_All_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaCustomizeParam_All_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "GetArenaCustomizeParam_All", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventGetArenaCustomizeParam_All_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaCustomizeParam_All_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaCustomizeParam_All_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaCustomizeParam_All_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaCustomizeParam_All_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaCustomizeParam_All()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaCustomizeParam_All_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaLogoId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventGetArenaLogoId_Parms
		{
			int32 Index;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaLogoId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetArenaLogoId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaLogoId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetArenaLogoId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaLogoId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaLogoId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaLogoId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaLogoId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaLogoId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "GetArenaLogoId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventGetArenaLogoId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaLogoId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaLogoId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaLogoId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaLogoId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaLogoId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaLogoId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaMatchupId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventGetArenaMatchupId_Parms
		{
			int32 Index;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaMatchupId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetArenaMatchupId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaMatchupId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetArenaMatchupId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaMatchupId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaMatchupId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaMatchupId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaMatchupId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaMatchupId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "GetArenaMatchupId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventGetArenaMatchupId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaMatchupId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaMatchupId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaMatchupId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaMatchupId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaMatchupId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaMatchupId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaName_Statics
	{
		struct SaveDataObject_UGC_Arena_eventGetArenaName_Parms
		{
			int32 Index;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaName_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetArenaName_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetArenaName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaName_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "GetArenaName", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventGetArenaName_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaTransitionId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventGetArenaTransitionId_Parms
		{
			int32 Index;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaTransitionId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetArenaTransitionId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaTransitionId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetArenaTransitionId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaTransitionId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaTransitionId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaTransitionId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaTransitionId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaTransitionId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "GetArenaTransitionId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventGetArenaTransitionId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaTransitionId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaTransitionId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaTransitionId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaTransitionId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaTransitionId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaTransitionId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetCreatedDate_Statics
	{
		struct SaveDataObject_UGC_Arena_eventGetCreatedDate_Parms
		{
			int32 Index;
			FDateTime ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetCreatedDate_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetCreatedDate_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetCreatedDate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetCreatedDate_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetCreatedDate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetCreatedDate_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetCreatedDate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetCreatedDate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetCreatedDate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "GetCreatedDate", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventGetCreatedDate_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetCreatedDate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetCreatedDate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetCreatedDate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetCreatedDate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetCreatedDate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetCreatedDate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetItemId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventGetItemId_Parms
		{
			int32 Index;
			FGuid ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetItemId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetItemId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetItemId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetItemId_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetItemId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetItemId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetItemId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetItemId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetItemId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "GetItemId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventGetItemId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetItemId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetItemId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetItemId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetItemId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetItemId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetItemId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLastModifiedDate_Statics
	{
		struct SaveDataObject_UGC_Arena_eventGetLastModifiedDate_Parms
		{
			int32 Index;
			FDateTime ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLastModifiedDate_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetLastModifiedDate_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLastModifiedDate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetLastModifiedDate_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLastModifiedDate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLastModifiedDate_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLastModifiedDate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLastModifiedDate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLastModifiedDate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "GetLastModifiedDate", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventGetLastModifiedDate_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLastModifiedDate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLastModifiedDate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLastModifiedDate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLastModifiedDate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLastModifiedDate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLastModifiedDate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightEnvironmentId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventGetLightEnvironmentId_Parms
		{
			int32 Index;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightEnvironmentId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetLightEnvironmentId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightEnvironmentId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetLightEnvironmentId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightEnvironmentId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightEnvironmentId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightEnvironmentId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightEnvironmentId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightEnvironmentId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "GetLightEnvironmentId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventGetLightEnvironmentId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightEnvironmentId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightEnvironmentId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightEnvironmentId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightEnvironmentId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightEnvironmentId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightEnvironmentId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightLEDId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventGetLightLEDId_Parms
		{
			int32 Index;
			int32 No;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_No;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightLEDId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetLightLEDId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightLEDId_Statics::NewProp_No = { "No", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetLightLEDId_Parms, No), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightLEDId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetLightLEDId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightLEDId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightLEDId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightLEDId_Statics::NewProp_No,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightLEDId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightLEDId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightLEDId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "GetLightLEDId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventGetLightLEDId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightLEDId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightLEDId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightLEDId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightLEDId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightLEDId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightLEDId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightSLId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventGetLightSLId_Parms
		{
			int32 Index;
			int32 No;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_No;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightSLId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetLightSLId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightSLId_Statics::NewProp_No = { "No", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetLightSLId_Parms, No), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightSLId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetLightSLId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightSLId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightSLId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightSLId_Statics::NewProp_No,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightSLId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightSLId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightSLId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "GetLightSLId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventGetLightSLId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightSLId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightSLId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightSLId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightSLId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightSLId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightSLId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetOrderNo_Statics
	{
		struct SaveDataObject_UGC_Arena_eventGetOrderNo_Parms
		{
			int32 Index;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetOrderNo_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetOrderNo_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetOrderNo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetOrderNo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetOrderNo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetOrderNo_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetOrderNo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetOrderNo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetOrderNo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "GetOrderNo", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventGetOrderNo_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetOrderNo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetOrderNo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetOrderNo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetOrderNo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetOrderNo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetOrderNo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingApronId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventGetRingApronId_Parms
		{
			int32 Index;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingApronId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetRingApronId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingApronId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetRingApronId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingApronId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingApronId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingApronId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingApronId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingApronId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "GetRingApronId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventGetRingApronId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingApronId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingApronId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingApronId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingApronId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingApronId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingApronId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingCornerJointId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventGetRingCornerJointId_Parms
		{
			int32 Index;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingCornerJointId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetRingCornerJointId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingCornerJointId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetRingCornerJointId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingCornerJointId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingCornerJointId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingCornerJointId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingCornerJointId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingCornerJointId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "GetRingCornerJointId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventGetRingCornerJointId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingCornerJointId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingCornerJointId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingCornerJointId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingCornerJointId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingCornerJointId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingCornerJointId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingCornerPostId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventGetRingCornerPostId_Parms
		{
			int32 Index;
			int32 No;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_No;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingCornerPostId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetRingCornerPostId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingCornerPostId_Statics::NewProp_No = { "No", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetRingCornerPostId_Parms, No), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingCornerPostId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetRingCornerPostId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingCornerPostId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingCornerPostId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingCornerPostId_Statics::NewProp_No,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingCornerPostId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingCornerPostId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingCornerPostId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "GetRingCornerPostId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventGetRingCornerPostId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingCornerPostId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingCornerPostId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingCornerPostId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingCornerPostId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingCornerPostId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingCornerPostId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingMatId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventGetRingMatId_Parms
		{
			int32 Index;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingMatId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetRingMatId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingMatId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetRingMatId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingMatId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingMatId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingMatId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingMatId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingMatId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "GetRingMatId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventGetRingMatId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingMatId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingMatId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingMatId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingMatId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingMatId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingMatId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingRopeId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventGetRingRopeId_Parms
		{
			int32 Index;
			int32 LineNo;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LineNo;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingRopeId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetRingRopeId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingRopeId_Statics::NewProp_LineNo = { "LineNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetRingRopeId_Parms, LineNo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingRopeId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetRingRopeId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingRopeId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingRopeId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingRopeId_Statics::NewProp_LineNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingRopeId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingRopeId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingRopeId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "GetRingRopeId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventGetRingRopeId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingRopeId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingRopeId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingRopeId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingRopeId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingRopeId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingRopeId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideBarricadeId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventGetRingSideBarricadeId_Parms
		{
			int32 Index;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideBarricadeId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetRingSideBarricadeId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideBarricadeId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetRingSideBarricadeId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideBarricadeId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideBarricadeId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideBarricadeId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideBarricadeId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideBarricadeId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "GetRingSideBarricadeId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventGetRingSideBarricadeId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideBarricadeId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideBarricadeId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideBarricadeId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideBarricadeId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideBarricadeId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideBarricadeId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideFloorId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventGetRingSideFloorId_Parms
		{
			int32 Index;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideFloorId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetRingSideFloorId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideFloorId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetRingSideFloorId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideFloorId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideFloorId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideFloorId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideFloorId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideFloorId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "GetRingSideFloorId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventGetRingSideFloorId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideFloorId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideFloorId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideFloorId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideFloorId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideFloorId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideFloorId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideMatId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventGetRingSideMatId_Parms
		{
			int32 Index;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideMatId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetRingSideMatId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideMatId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetRingSideMatId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideMatId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideMatId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideMatId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideMatId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideMatId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "GetRingSideMatId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventGetRingSideMatId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideMatId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideMatId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideMatId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideMatId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideMatId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideMatId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingTurnbuckleCoverId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventGetRingTurnbuckleCoverId_Parms
		{
			int32 Index;
			int32 LineNo;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LineNo;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingTurnbuckleCoverId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetRingTurnbuckleCoverId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingTurnbuckleCoverId_Statics::NewProp_LineNo = { "LineNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetRingTurnbuckleCoverId_Parms, LineNo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingTurnbuckleCoverId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetRingTurnbuckleCoverId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingTurnbuckleCoverId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingTurnbuckleCoverId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingTurnbuckleCoverId_Statics::NewProp_LineNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingTurnbuckleCoverId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingTurnbuckleCoverId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingTurnbuckleCoverId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "GetRingTurnbuckleCoverId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventGetRingTurnbuckleCoverId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingTurnbuckleCoverId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingTurnbuckleCoverId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingTurnbuckleCoverId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingTurnbuckleCoverId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingTurnbuckleCoverId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingTurnbuckleCoverId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetScreenshotImageData_Statics
	{
		struct SaveDataObject_UGC_Arena_eventGetScreenshotImageData_Parms
		{
			int32 Index;
			TArray<uint8> ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetScreenshotImageData_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetScreenshotImageData_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetScreenshotImageData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetScreenshotImageData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetScreenshotImageData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetScreenshotImageData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetScreenshotImageData_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetScreenshotImageData_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetScreenshotImageData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetScreenshotImageData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetScreenshotImageData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "GetScreenshotImageData", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventGetScreenshotImageData_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetScreenshotImageData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetScreenshotImageData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetScreenshotImageData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetScreenshotImageData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetScreenshotImageData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetScreenshotImageData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageMovieId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventGetStageMovieId_Parms
		{
			int32 Index;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageMovieId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetStageMovieId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageMovieId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetStageMovieId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageMovieId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageMovieId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageMovieId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageMovieId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageMovieId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "GetStageMovieId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventGetStageMovieId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageMovieId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageMovieId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageMovieId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageMovieId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageMovieId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageMovieId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageObjectId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventGetStageObjectId_Parms
		{
			int32 Index;
			int32 No;
			int32 PlaceId;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_No;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlaceId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageObjectId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetStageObjectId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageObjectId_Statics::NewProp_No = { "No", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetStageObjectId_Parms, No), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageObjectId_Statics::NewProp_PlaceId = { "PlaceId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetStageObjectId_Parms, PlaceId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageObjectId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetStageObjectId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageObjectId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageObjectId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageObjectId_Statics::NewProp_No,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageObjectId_Statics::NewProp_PlaceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageObjectId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageObjectId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageObjectId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "GetStageObjectId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventGetStageObjectId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageObjectId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageObjectId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageObjectId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageObjectId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageObjectId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageObjectId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageRampId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventGetStageRampId_Parms
		{
			int32 Index;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageRampId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetStageRampId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageRampId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetStageRampId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageRampId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageRampId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageRampId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageRampId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageRampId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "GetStageRampId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventGetStageRampId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageRampId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageRampId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageRampId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageRampId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageRampId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageRampId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageTypeId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventGetStageTypeId_Parms
		{
			int32 Index;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageTypeId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetStageTypeId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageTypeId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetStageTypeId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageTypeId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageTypeId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageTypeId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageTypeId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageTypeId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "GetStageTypeId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventGetStageTypeId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageTypeId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageTypeId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageTypeId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageTypeId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageTypeId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageTypeId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetThumbnailImageData_Statics
	{
		struct SaveDataObject_UGC_Arena_eventGetThumbnailImageData_Parms
		{
			int32 Index;
			TArray<uint8> ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetThumbnailImageData_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetThumbnailImageData_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetThumbnailImageData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetThumbnailImageData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetThumbnailImageData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetThumbnailImageData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetThumbnailImageData_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetThumbnailImageData_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetThumbnailImageData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetThumbnailImageData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetThumbnailImageData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "GetThumbnailImageData", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventGetThumbnailImageData_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetThumbnailImageData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetThumbnailImageData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetThumbnailImageData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetThumbnailImageData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetThumbnailImageData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetThumbnailImageData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetTimeZoneId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventGetTimeZoneId_Parms
		{
			int32 Index;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetTimeZoneId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetTimeZoneId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetTimeZoneId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetTimeZoneId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetTimeZoneId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetTimeZoneId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetTimeZoneId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetTimeZoneId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetTimeZoneId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "GetTimeZoneId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventGetTimeZoneId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetTimeZoneId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetTimeZoneId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetTimeZoneId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetTimeZoneId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetTimeZoneId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetTimeZoneId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetUseCount_Statics
	{
		struct SaveDataObject_UGC_Arena_eventGetUseCount_Parms
		{
			int32 Index;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetUseCount_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetUseCount_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetUseCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetUseCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetUseCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetUseCount_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetUseCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetUseCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetUseCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "GetUseCount", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventGetUseCount_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetUseCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetUseCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetUseCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetUseCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetUseCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetUseCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetWeatherId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventGetWeatherId_Parms
		{
			int32 Index;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetWeatherId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetWeatherId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetWeatherId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventGetWeatherId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetWeatherId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetWeatherId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetWeatherId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetWeatherId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetWeatherId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "GetWeatherId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventGetWeatherId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetWeatherId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetWeatherId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetWeatherId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetWeatherId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetWeatherId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetWeatherId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaCustomizeParam_Statics
	{
		struct SaveDataObject_UGC_Arena_eventSetArenaCustomizeParam_Parms
		{
			int32 Index;
			FArenaCustomizeParam Param;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Param_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaCustomizeParam_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetArenaCustomizeParam_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaCustomizeParam_Statics::NewProp_Param_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaCustomizeParam_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetArenaCustomizeParam_Parms, Param), Z_Construct_UScriptStruct_FArenaCustomizeParam, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaCustomizeParam_Statics::NewProp_Param_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaCustomizeParam_Statics::NewProp_Param_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaCustomizeParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaCustomizeParam_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaCustomizeParam_Statics::NewProp_Param,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaCustomizeParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaCustomizeParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "SetArenaCustomizeParam", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventSetArenaCustomizeParam_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaCustomizeParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaCustomizeParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaCustomizeParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaCustomizeParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaCustomizeParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaCustomizeParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaCustomizeParam_ALL_Statics
	{
		struct SaveDataObject_UGC_Arena_eventSetArenaCustomizeParam_ALL_Parms
		{
			TArray<FArenaCustomizeParam> Param;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Param_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Param_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaCustomizeParam_ALL_Statics::NewProp_Param_Inner = { "Param", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FArenaCustomizeParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaCustomizeParam_ALL_Statics::NewProp_Param_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaCustomizeParam_ALL_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetArenaCustomizeParam_ALL_Parms, Param), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaCustomizeParam_ALL_Statics::NewProp_Param_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaCustomizeParam_ALL_Statics::NewProp_Param_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaCustomizeParam_ALL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaCustomizeParam_ALL_Statics::NewProp_Param_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaCustomizeParam_ALL_Statics::NewProp_Param,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaCustomizeParam_ALL_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaCustomizeParam_ALL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "SetArenaCustomizeParam_ALL", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventSetArenaCustomizeParam_ALL_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaCustomizeParam_ALL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaCustomizeParam_ALL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaCustomizeParam_ALL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaCustomizeParam_ALL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaCustomizeParam_ALL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaCustomizeParam_ALL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaLogoId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventSetArenaLogoId_Parms
		{
			int32 Index;
			int32 ArenaLogoId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArenaLogoId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaLogoId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetArenaLogoId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaLogoId_Statics::NewProp_ArenaLogoId = { "ArenaLogoId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetArenaLogoId_Parms, ArenaLogoId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaLogoId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaLogoId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaLogoId_Statics::NewProp_ArenaLogoId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaLogoId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaLogoId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "SetArenaLogoId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventSetArenaLogoId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaLogoId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaLogoId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaLogoId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaLogoId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaLogoId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaLogoId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaMatchupId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventSetArenaMatchupId_Parms
		{
			int32 Index;
			int32 ArenaMatchupId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArenaMatchupId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaMatchupId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetArenaMatchupId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaMatchupId_Statics::NewProp_ArenaMatchupId = { "ArenaMatchupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetArenaMatchupId_Parms, ArenaMatchupId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaMatchupId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaMatchupId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaMatchupId_Statics::NewProp_ArenaMatchupId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaMatchupId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaMatchupId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "SetArenaMatchupId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventSetArenaMatchupId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaMatchupId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaMatchupId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaMatchupId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaMatchupId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaMatchupId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaMatchupId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaName_Statics
	{
		struct SaveDataObject_UGC_Arena_eventSetArenaName_Parms
		{
			int32 Index;
			FString ArenaName;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ArenaName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaName_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetArenaName_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaName_Statics::NewProp_ArenaName = { "ArenaName", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetArenaName_Parms, ArenaName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaName_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaName_Statics::NewProp_ArenaName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "SetArenaName", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventSetArenaName_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaTransitionId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventSetArenaTransitionId_Parms
		{
			int32 Index;
			int32 ArenaTransitionId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArenaTransitionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaTransitionId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetArenaTransitionId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaTransitionId_Statics::NewProp_ArenaTransitionId = { "ArenaTransitionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetArenaTransitionId_Parms, ArenaTransitionId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaTransitionId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaTransitionId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaTransitionId_Statics::NewProp_ArenaTransitionId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaTransitionId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaTransitionId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "SetArenaTransitionId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventSetArenaTransitionId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaTransitionId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaTransitionId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaTransitionId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaTransitionId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaTransitionId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaTransitionId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetCreatedDate_Statics
	{
		struct SaveDataObject_UGC_Arena_eventSetCreatedDate_Parms
		{
			int32 Index;
			FDateTime CreatedDate;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CreatedDate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetCreatedDate_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetCreatedDate_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetCreatedDate_Statics::NewProp_CreatedDate = { "CreatedDate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetCreatedDate_Parms, CreatedDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetCreatedDate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetCreatedDate_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetCreatedDate_Statics::NewProp_CreatedDate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetCreatedDate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetCreatedDate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "SetCreatedDate", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventSetCreatedDate_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetCreatedDate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetCreatedDate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetCreatedDate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetCreatedDate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetCreatedDate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetCreatedDate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetImageData_Statics
	{
		struct SaveDataObject_UGC_Arena_eventSetImageData_Parms
		{
			int32 Index;
			TArray<uint8> ScreenshotImageData;
			TArray<uint8> ThumbnailImageData;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetImageData_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetImageData_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetImageData_Statics::NewProp_ScreenshotImageData_Inner = { "ScreenshotImageData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetImageData_Statics::NewProp_ScreenshotImageData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetImageData_Statics::NewProp_ScreenshotImageData = { "ScreenshotImageData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetImageData_Parms, ScreenshotImageData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetImageData_Statics::NewProp_ScreenshotImageData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetImageData_Statics::NewProp_ScreenshotImageData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetImageData_Statics::NewProp_ThumbnailImageData_Inner = { "ThumbnailImageData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetImageData_Statics::NewProp_ThumbnailImageData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetImageData_Statics::NewProp_ThumbnailImageData = { "ThumbnailImageData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetImageData_Parms, ThumbnailImageData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetImageData_Statics::NewProp_ThumbnailImageData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetImageData_Statics::NewProp_ThumbnailImageData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetImageData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetImageData_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetImageData_Statics::NewProp_ScreenshotImageData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetImageData_Statics::NewProp_ScreenshotImageData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetImageData_Statics::NewProp_ThumbnailImageData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetImageData_Statics::NewProp_ThumbnailImageData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetImageData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetImageData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "SetImageData", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventSetImageData_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetImageData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetImageData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetImageData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetImageData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetImageData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetImageData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetItemID_Statics
	{
		struct SaveDataObject_UGC_Arena_eventSetItemID_Parms
		{
			int32 Index;
			FGuid ID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetItemID_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetItemID_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetItemID_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetItemID_Parms, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetItemID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetItemID_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetItemID_Statics::NewProp_ID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetItemID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetItemID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "SetItemID", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventSetItemID_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetItemID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetItemID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetItemID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetItemID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetItemID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetItemID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLastModifiedDate_Statics
	{
		struct SaveDataObject_UGC_Arena_eventSetLastModifiedDate_Parms
		{
			int32 Index;
			FDateTime LastModifiedDate;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastModifiedDate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLastModifiedDate_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetLastModifiedDate_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLastModifiedDate_Statics::NewProp_LastModifiedDate = { "LastModifiedDate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetLastModifiedDate_Parms, LastModifiedDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLastModifiedDate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLastModifiedDate_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLastModifiedDate_Statics::NewProp_LastModifiedDate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLastModifiedDate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLastModifiedDate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "SetLastModifiedDate", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventSetLastModifiedDate_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLastModifiedDate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLastModifiedDate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLastModifiedDate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLastModifiedDate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLastModifiedDate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLastModifiedDate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightLEDId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventSetLightLEDId_Parms
		{
			int32 Index;
			int32 No;
			int32 LightLEDId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_No;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LightLEDId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightLEDId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetLightLEDId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightLEDId_Statics::NewProp_No = { "No", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetLightLEDId_Parms, No), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightLEDId_Statics::NewProp_LightLEDId = { "LightLEDId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetLightLEDId_Parms, LightLEDId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightLEDId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightLEDId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightLEDId_Statics::NewProp_No,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightLEDId_Statics::NewProp_LightLEDId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightLEDId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightLEDId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "SetLightLEDId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventSetLightLEDId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightLEDId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightLEDId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightLEDId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightLEDId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightLEDId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightLEDId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightLightEnvironmentId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventSetLightLightEnvironmentId_Parms
		{
			int32 Index;
			int32 LightEnvironmentId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LightEnvironmentId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightLightEnvironmentId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetLightLightEnvironmentId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightLightEnvironmentId_Statics::NewProp_LightEnvironmentId = { "LightEnvironmentId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetLightLightEnvironmentId_Parms, LightEnvironmentId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightLightEnvironmentId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightLightEnvironmentId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightLightEnvironmentId_Statics::NewProp_LightEnvironmentId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightLightEnvironmentId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightLightEnvironmentId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "SetLightLightEnvironmentId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventSetLightLightEnvironmentId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightLightEnvironmentId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightLightEnvironmentId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightLightEnvironmentId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightLightEnvironmentId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightLightEnvironmentId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightLightEnvironmentId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightSLId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventSetLightSLId_Parms
		{
			int32 Index;
			int32 No;
			int32 LightSLId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_No;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LightSLId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightSLId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetLightSLId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightSLId_Statics::NewProp_No = { "No", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetLightSLId_Parms, No), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightSLId_Statics::NewProp_LightSLId = { "LightSLId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetLightSLId_Parms, LightSLId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightSLId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightSLId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightSLId_Statics::NewProp_No,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightSLId_Statics::NewProp_LightSLId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightSLId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightSLId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "SetLightSLId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventSetLightSLId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightSLId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightSLId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightSLId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightSLId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightSLId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightSLId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetOrderNo_Statics
	{
		struct SaveDataObject_UGC_Arena_eventSetOrderNo_Parms
		{
			int32 Index;
			int32 OrderNo;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OrderNo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetOrderNo_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetOrderNo_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetOrderNo_Statics::NewProp_OrderNo = { "OrderNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetOrderNo_Parms, OrderNo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetOrderNo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetOrderNo_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetOrderNo_Statics::NewProp_OrderNo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetOrderNo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetOrderNo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "SetOrderNo", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventSetOrderNo_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetOrderNo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetOrderNo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetOrderNo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetOrderNo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetOrderNo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetOrderNo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingApronId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventSetRingApronId_Parms
		{
			int32 Index;
			int32 RingApronId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RingApronId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingApronId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetRingApronId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingApronId_Statics::NewProp_RingApronId = { "RingApronId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetRingApronId_Parms, RingApronId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingApronId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingApronId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingApronId_Statics::NewProp_RingApronId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingApronId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingApronId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "SetRingApronId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventSetRingApronId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingApronId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingApronId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingApronId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingApronId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingApronId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingApronId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingCornerJointId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventSetRingCornerJointId_Parms
		{
			int32 Index;
			int32 RingCornerJointId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RingCornerJointId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingCornerJointId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetRingCornerJointId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingCornerJointId_Statics::NewProp_RingCornerJointId = { "RingCornerJointId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetRingCornerJointId_Parms, RingCornerJointId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingCornerJointId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingCornerJointId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingCornerJointId_Statics::NewProp_RingCornerJointId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingCornerJointId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingCornerJointId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "SetRingCornerJointId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventSetRingCornerJointId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingCornerJointId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingCornerJointId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingCornerJointId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingCornerJointId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingCornerJointId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingCornerJointId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingCornerPostId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventSetRingCornerPostId_Parms
		{
			int32 Index;
			int32 No;
			int32 RingCornerPostId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_No;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RingCornerPostId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingCornerPostId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetRingCornerPostId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingCornerPostId_Statics::NewProp_No = { "No", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetRingCornerPostId_Parms, No), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingCornerPostId_Statics::NewProp_RingCornerPostId = { "RingCornerPostId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetRingCornerPostId_Parms, RingCornerPostId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingCornerPostId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingCornerPostId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingCornerPostId_Statics::NewProp_No,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingCornerPostId_Statics::NewProp_RingCornerPostId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingCornerPostId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingCornerPostId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "SetRingCornerPostId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventSetRingCornerPostId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingCornerPostId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingCornerPostId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingCornerPostId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingCornerPostId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingCornerPostId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingCornerPostId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingMatId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventSetRingMatId_Parms
		{
			int32 Index;
			int32 RingMatId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RingMatId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingMatId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetRingMatId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingMatId_Statics::NewProp_RingMatId = { "RingMatId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetRingMatId_Parms, RingMatId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingMatId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingMatId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingMatId_Statics::NewProp_RingMatId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingMatId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingMatId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "SetRingMatId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventSetRingMatId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingMatId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingMatId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingMatId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingMatId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingMatId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingMatId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingRopeId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventSetRingRopeId_Parms
		{
			int32 Index;
			int32 LineNo;
			int32 RingRopeId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LineNo;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RingRopeId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingRopeId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetRingRopeId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingRopeId_Statics::NewProp_LineNo = { "LineNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetRingRopeId_Parms, LineNo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingRopeId_Statics::NewProp_RingRopeId = { "RingRopeId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetRingRopeId_Parms, RingRopeId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingRopeId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingRopeId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingRopeId_Statics::NewProp_LineNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingRopeId_Statics::NewProp_RingRopeId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingRopeId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingRopeId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "SetRingRopeId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventSetRingRopeId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingRopeId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingRopeId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingRopeId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingRopeId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingRopeId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingRopeId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideBarricadeId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventSetRingSideBarricadeId_Parms
		{
			int32 Index;
			int32 RingSideBarricadeId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RingSideBarricadeId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideBarricadeId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetRingSideBarricadeId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideBarricadeId_Statics::NewProp_RingSideBarricadeId = { "RingSideBarricadeId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetRingSideBarricadeId_Parms, RingSideBarricadeId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideBarricadeId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideBarricadeId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideBarricadeId_Statics::NewProp_RingSideBarricadeId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideBarricadeId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideBarricadeId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "SetRingSideBarricadeId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventSetRingSideBarricadeId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideBarricadeId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideBarricadeId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideBarricadeId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideBarricadeId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideBarricadeId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideBarricadeId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideFloorId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventSetRingSideFloorId_Parms
		{
			int32 Index;
			int32 RingSideFloorId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RingSideFloorId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideFloorId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetRingSideFloorId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideFloorId_Statics::NewProp_RingSideFloorId = { "RingSideFloorId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetRingSideFloorId_Parms, RingSideFloorId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideFloorId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideFloorId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideFloorId_Statics::NewProp_RingSideFloorId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideFloorId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideFloorId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "SetRingSideFloorId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventSetRingSideFloorId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideFloorId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideFloorId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideFloorId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideFloorId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideFloorId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideFloorId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideMatId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventSetRingSideMatId_Parms
		{
			int32 Index;
			int32 RingSideMatId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RingSideMatId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideMatId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetRingSideMatId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideMatId_Statics::NewProp_RingSideMatId = { "RingSideMatId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetRingSideMatId_Parms, RingSideMatId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideMatId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideMatId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideMatId_Statics::NewProp_RingSideMatId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideMatId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideMatId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "SetRingSideMatId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventSetRingSideMatId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideMatId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideMatId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideMatId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideMatId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideMatId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideMatId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingTurnbuckleCoverId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventSetRingTurnbuckleCoverId_Parms
		{
			int32 Index;
			int32 LineNo;
			int32 RingTurnbuckleCoverId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LineNo;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RingTurnbuckleCoverId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingTurnbuckleCoverId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetRingTurnbuckleCoverId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingTurnbuckleCoverId_Statics::NewProp_LineNo = { "LineNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetRingTurnbuckleCoverId_Parms, LineNo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingTurnbuckleCoverId_Statics::NewProp_RingTurnbuckleCoverId = { "RingTurnbuckleCoverId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetRingTurnbuckleCoverId_Parms, RingTurnbuckleCoverId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingTurnbuckleCoverId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingTurnbuckleCoverId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingTurnbuckleCoverId_Statics::NewProp_LineNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingTurnbuckleCoverId_Statics::NewProp_RingTurnbuckleCoverId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingTurnbuckleCoverId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingTurnbuckleCoverId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "SetRingTurnbuckleCoverId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventSetRingTurnbuckleCoverId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingTurnbuckleCoverId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingTurnbuckleCoverId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingTurnbuckleCoverId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingTurnbuckleCoverId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingTurnbuckleCoverId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingTurnbuckleCoverId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageMovieId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventSetStageMovieId_Parms
		{
			int32 Index;
			int32 StageMovieId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StageMovieId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageMovieId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetStageMovieId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageMovieId_Statics::NewProp_StageMovieId = { "StageMovieId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetStageMovieId_Parms, StageMovieId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageMovieId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageMovieId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageMovieId_Statics::NewProp_StageMovieId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageMovieId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageMovieId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "SetStageMovieId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventSetStageMovieId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageMovieId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageMovieId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageMovieId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageMovieId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageMovieId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageMovieId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageObjectId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventSetStageObjectId_Parms
		{
			int32 Index;
			int32 No;
			int32 StageObjectId;
			int32 StageObjectPlaceId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_No;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StageObjectId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StageObjectPlaceId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageObjectId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetStageObjectId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageObjectId_Statics::NewProp_No = { "No", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetStageObjectId_Parms, No), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageObjectId_Statics::NewProp_StageObjectId = { "StageObjectId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetStageObjectId_Parms, StageObjectId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageObjectId_Statics::NewProp_StageObjectPlaceId = { "StageObjectPlaceId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetStageObjectId_Parms, StageObjectPlaceId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageObjectId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageObjectId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageObjectId_Statics::NewProp_No,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageObjectId_Statics::NewProp_StageObjectId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageObjectId_Statics::NewProp_StageObjectPlaceId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageObjectId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageObjectId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "SetStageObjectId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventSetStageObjectId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageObjectId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageObjectId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageObjectId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageObjectId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageObjectId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageObjectId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageRampId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventSetStageRampId_Parms
		{
			int32 Index;
			int32 StageRampId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StageRampId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageRampId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetStageRampId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageRampId_Statics::NewProp_StageRampId = { "StageRampId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetStageRampId_Parms, StageRampId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageRampId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageRampId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageRampId_Statics::NewProp_StageRampId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageRampId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageRampId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "SetStageRampId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventSetStageRampId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageRampId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageRampId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageRampId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageRampId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageRampId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageRampId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageTypeId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventSetStageTypeId_Parms
		{
			int32 Index;
			int32 StageTypeId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StageTypeId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageTypeId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetStageTypeId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageTypeId_Statics::NewProp_StageTypeId = { "StageTypeId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetStageTypeId_Parms, StageTypeId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageTypeId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageTypeId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageTypeId_Statics::NewProp_StageTypeId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageTypeId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageTypeId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "SetStageTypeId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventSetStageTypeId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageTypeId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageTypeId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageTypeId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageTypeId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageTypeId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageTypeId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetTimeZoneId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventSetTimeZoneId_Parms
		{
			int32 Index;
			int32 TimeZoneId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimeZoneId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetTimeZoneId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetTimeZoneId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetTimeZoneId_Statics::NewProp_TimeZoneId = { "TimeZoneId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetTimeZoneId_Parms, TimeZoneId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetTimeZoneId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetTimeZoneId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetTimeZoneId_Statics::NewProp_TimeZoneId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetTimeZoneId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetTimeZoneId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "SetTimeZoneId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventSetTimeZoneId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetTimeZoneId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetTimeZoneId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetTimeZoneId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetTimeZoneId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetTimeZoneId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetTimeZoneId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetUseCount_Statics
	{
		struct SaveDataObject_UGC_Arena_eventSetUseCount_Parms
		{
			int32 Index;
			int32 UseCount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UseCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetUseCount_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetUseCount_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetUseCount_Statics::NewProp_UseCount = { "UseCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetUseCount_Parms, UseCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetUseCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetUseCount_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetUseCount_Statics::NewProp_UseCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetUseCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetUseCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "SetUseCount", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventSetUseCount_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetUseCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetUseCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetUseCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetUseCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetUseCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetUseCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetWeatherId_Statics
	{
		struct SaveDataObject_UGC_Arena_eventSetWeatherId_Parms
		{
			int32 Index;
			int32 WeatherId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeatherId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetWeatherId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetWeatherId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetWeatherId_Statics::NewProp_WeatherId = { "WeatherId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSetWeatherId_Parms, WeatherId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetWeatherId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetWeatherId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetWeatherId_Statics::NewProp_WeatherId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetWeatherId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetWeatherId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "SetWeatherId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventSetWeatherId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetWeatherId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetWeatherId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetWeatherId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetWeatherId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetWeatherId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetWeatherId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Arena_SortArenaCustomizeParam_Statics
	{
		struct SaveDataObject_UGC_Arena_eventSortArenaCustomizeParam_Parms
		{
			TArray<FArenaCustomizeParam> Param;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Param_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SortArenaCustomizeParam_Statics::NewProp_Param_Inner = { "Param", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FArenaCustomizeParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SortArenaCustomizeParam_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Arena_eventSortArenaCustomizeParam_Parms, Param), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Arena_SortArenaCustomizeParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SortArenaCustomizeParam_Statics::NewProp_Param_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Arena_SortArenaCustomizeParam_Statics::NewProp_Param,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Arena_SortArenaCustomizeParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Arena_SortArenaCustomizeParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Arena, nullptr, "SortArenaCustomizeParam", nullptr, nullptr, sizeof(SaveDataObject_UGC_Arena_eventSortArenaCustomizeParam_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Arena_SortArenaCustomizeParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SortArenaCustomizeParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SortArenaCustomizeParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Arena_SortArenaCustomizeParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Arena_SortArenaCustomizeParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Arena_SortArenaCustomizeParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USaveDataObject_UGC_Arena_NoRegister()
	{
		return USaveDataObject_UGC_Arena::StaticClass();
	}
	struct Z_Construct_UClass_USaveDataObject_UGC_Arena_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveDataObject_UGC_Arena_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveDataObjectBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveDataObject_UGC_Arena_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaCustomizeParam, "GetArenaCustomizeParam" }, // 1061956140
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaCustomizeParam_All, "GetArenaCustomizeParam_All" }, // 1038351084
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaLogoId, "GetArenaLogoId" }, // 2429817285
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaMatchupId, "GetArenaMatchupId" }, // 746129643
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaName, "GetArenaName" }, // 2505685039
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetArenaTransitionId, "GetArenaTransitionId" }, // 4116795127
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetCreatedDate, "GetCreatedDate" }, // 3820908507
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetItemId, "GetItemId" }, // 3713695998
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLastModifiedDate, "GetLastModifiedDate" }, // 136896550
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightEnvironmentId, "GetLightEnvironmentId" }, // 3366647928
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightLEDId, "GetLightLEDId" }, // 299937769
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetLightSLId, "GetLightSLId" }, // 188826851
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetOrderNo, "GetOrderNo" }, // 2796072509
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingApronId, "GetRingApronId" }, // 2302760132
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingCornerJointId, "GetRingCornerJointId" }, // 27022146
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingCornerPostId, "GetRingCornerPostId" }, // 2914082143
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingMatId, "GetRingMatId" }, // 1406096295
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingRopeId, "GetRingRopeId" }, // 1568398169
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideBarricadeId, "GetRingSideBarricadeId" }, // 3928912231
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideFloorId, "GetRingSideFloorId" }, // 2722357768
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingSideMatId, "GetRingSideMatId" }, // 1955592965
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetRingTurnbuckleCoverId, "GetRingTurnbuckleCoverId" }, // 4158373118
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetScreenshotImageData, "GetScreenshotImageData" }, // 1737192625
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageMovieId, "GetStageMovieId" }, // 3095748006
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageObjectId, "GetStageObjectId" }, // 2391994750
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageRampId, "GetStageRampId" }, // 878973286
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetStageTypeId, "GetStageTypeId" }, // 336379885
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetThumbnailImageData, "GetThumbnailImageData" }, // 2492820393
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetTimeZoneId, "GetTimeZoneId" }, // 3924382179
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetUseCount, "GetUseCount" }, // 3210664509
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_GetWeatherId, "GetWeatherId" }, // 2816624230
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaCustomizeParam, "SetArenaCustomizeParam" }, // 1251184133
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaCustomizeParam_ALL, "SetArenaCustomizeParam_ALL" }, // 2247320727
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaLogoId, "SetArenaLogoId" }, // 3676079552
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaMatchupId, "SetArenaMatchupId" }, // 109732003
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaName, "SetArenaName" }, // 2809518301
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetArenaTransitionId, "SetArenaTransitionId" }, // 4244221804
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetCreatedDate, "SetCreatedDate" }, // 1980798504
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetImageData, "SetImageData" }, // 921567594
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetItemID, "SetItemID" }, // 3903735293
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLastModifiedDate, "SetLastModifiedDate" }, // 3804157625
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightLEDId, "SetLightLEDId" }, // 2659026584
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightLightEnvironmentId, "SetLightLightEnvironmentId" }, // 1585212414
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetLightSLId, "SetLightSLId" }, // 2758019524
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetOrderNo, "SetOrderNo" }, // 3830303298
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingApronId, "SetRingApronId" }, // 1634245020
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingCornerJointId, "SetRingCornerJointId" }, // 500644212
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingCornerPostId, "SetRingCornerPostId" }, // 3834476244
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingMatId, "SetRingMatId" }, // 2131257246
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingRopeId, "SetRingRopeId" }, // 4199023090
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideBarricadeId, "SetRingSideBarricadeId" }, // 2125488232
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideFloorId, "SetRingSideFloorId" }, // 104342332
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingSideMatId, "SetRingSideMatId" }, // 1725309800
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetRingTurnbuckleCoverId, "SetRingTurnbuckleCoverId" }, // 3124840711
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageMovieId, "SetStageMovieId" }, // 2787994682
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageObjectId, "SetStageObjectId" }, // 1315266932
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageRampId, "SetStageRampId" }, // 3076732608
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetStageTypeId, "SetStageTypeId" }, // 3957837404
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetTimeZoneId, "SetTimeZoneId" }, // 3448681037
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetUseCount, "SetUseCount" }, // 269040438
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_SetWeatherId, "SetWeatherId" }, // 1528666080
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Arena_SortArenaCustomizeParam, "SortArenaCustomizeParam" }, // 4109550537
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveDataObject_UGC_Arena_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveDataObject_UGC_Arena.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Arena.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveDataObject_UGC_Arena_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveDataObject_UGC_Arena>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveDataObject_UGC_Arena_Statics::ClassParams = {
		&USaveDataObject_UGC_Arena::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveDataObject_UGC_Arena_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveDataObject_UGC_Arena_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveDataObject_UGC_Arena()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveDataObject_UGC_Arena_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveDataObject_UGC_Arena, 3115831751);
	template<> ABP_200508_API UClass* StaticClass<USaveDataObject_UGC_Arena>()
	{
		return USaveDataObject_UGC_Arena::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveDataObject_UGC_Arena(Z_Construct_UClass_USaveDataObject_UGC_Arena, &USaveDataObject_UGC_Arena::StaticClass, TEXT("/Script/ABP_200508"), TEXT("USaveDataObject_UGC_Arena"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveDataObject_UGC_Arena);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
