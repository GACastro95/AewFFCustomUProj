// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FArenaCustomizeParam;
struct FDateTime;
struct FGuid;
#ifdef ABP_200508_SaveDataObject_UGC_Arena_generated_h
#error "SaveDataObject_UGC_Arena.generated.h already included, missing '#pragma once' in SaveDataObject_UGC_Arena.h"
#endif
#define ABP_200508_SaveDataObject_UGC_Arena_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Arena_h_11_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Arena_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetArenaCustomizeParam); \
	DECLARE_FUNCTION(execGetArenaCustomizeParam_All); \
	DECLARE_FUNCTION(execGetArenaLogoId); \
	DECLARE_FUNCTION(execGetArenaMatchupId); \
	DECLARE_FUNCTION(execGetArenaName); \
	DECLARE_FUNCTION(execGetArenaTransitionId); \
	DECLARE_FUNCTION(execGetCreatedDate); \
	DECLARE_FUNCTION(execGetItemId); \
	DECLARE_FUNCTION(execGetLastModifiedDate); \
	DECLARE_FUNCTION(execGetLightEnvironmentId); \
	DECLARE_FUNCTION(execGetLightLEDId); \
	DECLARE_FUNCTION(execGetLightSLId); \
	DECLARE_FUNCTION(execGetOrderNo); \
	DECLARE_FUNCTION(execGetRingApronId); \
	DECLARE_FUNCTION(execGetRingCornerJointId); \
	DECLARE_FUNCTION(execGetRingCornerPostId); \
	DECLARE_FUNCTION(execGetRingMatId); \
	DECLARE_FUNCTION(execGetRingRopeId); \
	DECLARE_FUNCTION(execGetRingSideBarricadeId); \
	DECLARE_FUNCTION(execGetRingSideFloorId); \
	DECLARE_FUNCTION(execGetRingSideMatId); \
	DECLARE_FUNCTION(execGetRingTurnbuckleCoverId); \
	DECLARE_FUNCTION(execGetScreenshotImageData); \
	DECLARE_FUNCTION(execGetStageMovieId); \
	DECLARE_FUNCTION(execGetStageObjectId); \
	DECLARE_FUNCTION(execGetStageRampId); \
	DECLARE_FUNCTION(execGetStageTypeId); \
	DECLARE_FUNCTION(execGetThumbnailImageData); \
	DECLARE_FUNCTION(execGetTimeZoneId); \
	DECLARE_FUNCTION(execGetUseCount); \
	DECLARE_FUNCTION(execGetWeatherId); \
	DECLARE_FUNCTION(execSetArenaCustomizeParam); \
	DECLARE_FUNCTION(execSetArenaCustomizeParam_ALL); \
	DECLARE_FUNCTION(execSetArenaLogoId); \
	DECLARE_FUNCTION(execSetArenaMatchupId); \
	DECLARE_FUNCTION(execSetArenaName); \
	DECLARE_FUNCTION(execSetArenaTransitionId); \
	DECLARE_FUNCTION(execSetCreatedDate); \
	DECLARE_FUNCTION(execSetImageData); \
	DECLARE_FUNCTION(execSetItemID); \
	DECLARE_FUNCTION(execSetLastModifiedDate); \
	DECLARE_FUNCTION(execSetLightLEDId); \
	DECLARE_FUNCTION(execSetLightLightEnvironmentId); \
	DECLARE_FUNCTION(execSetLightSLId); \
	DECLARE_FUNCTION(execSetOrderNo); \
	DECLARE_FUNCTION(execSetRingApronId); \
	DECLARE_FUNCTION(execSetRingCornerJointId); \
	DECLARE_FUNCTION(execSetRingCornerPostId); \
	DECLARE_FUNCTION(execSetRingMatId); \
	DECLARE_FUNCTION(execSetRingRopeId); \
	DECLARE_FUNCTION(execSetRingSideBarricadeId); \
	DECLARE_FUNCTION(execSetRingSideFloorId); \
	DECLARE_FUNCTION(execSetRingSideMatId); \
	DECLARE_FUNCTION(execSetRingTurnbuckleCoverId); \
	DECLARE_FUNCTION(execSetStageMovieId); \
	DECLARE_FUNCTION(execSetStageObjectId); \
	DECLARE_FUNCTION(execSetStageRampId); \
	DECLARE_FUNCTION(execSetStageTypeId); \
	DECLARE_FUNCTION(execSetTimeZoneId); \
	DECLARE_FUNCTION(execSetUseCount); \
	DECLARE_FUNCTION(execSetWeatherId); \
	DECLARE_FUNCTION(execSortArenaCustomizeParam);


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Arena_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetArenaCustomizeParam); \
	DECLARE_FUNCTION(execGetArenaCustomizeParam_All); \
	DECLARE_FUNCTION(execGetArenaLogoId); \
	DECLARE_FUNCTION(execGetArenaMatchupId); \
	DECLARE_FUNCTION(execGetArenaName); \
	DECLARE_FUNCTION(execGetArenaTransitionId); \
	DECLARE_FUNCTION(execGetCreatedDate); \
	DECLARE_FUNCTION(execGetItemId); \
	DECLARE_FUNCTION(execGetLastModifiedDate); \
	DECLARE_FUNCTION(execGetLightEnvironmentId); \
	DECLARE_FUNCTION(execGetLightLEDId); \
	DECLARE_FUNCTION(execGetLightSLId); \
	DECLARE_FUNCTION(execGetOrderNo); \
	DECLARE_FUNCTION(execGetRingApronId); \
	DECLARE_FUNCTION(execGetRingCornerJointId); \
	DECLARE_FUNCTION(execGetRingCornerPostId); \
	DECLARE_FUNCTION(execGetRingMatId); \
	DECLARE_FUNCTION(execGetRingRopeId); \
	DECLARE_FUNCTION(execGetRingSideBarricadeId); \
	DECLARE_FUNCTION(execGetRingSideFloorId); \
	DECLARE_FUNCTION(execGetRingSideMatId); \
	DECLARE_FUNCTION(execGetRingTurnbuckleCoverId); \
	DECLARE_FUNCTION(execGetScreenshotImageData); \
	DECLARE_FUNCTION(execGetStageMovieId); \
	DECLARE_FUNCTION(execGetStageObjectId); \
	DECLARE_FUNCTION(execGetStageRampId); \
	DECLARE_FUNCTION(execGetStageTypeId); \
	DECLARE_FUNCTION(execGetThumbnailImageData); \
	DECLARE_FUNCTION(execGetTimeZoneId); \
	DECLARE_FUNCTION(execGetUseCount); \
	DECLARE_FUNCTION(execGetWeatherId); \
	DECLARE_FUNCTION(execSetArenaCustomizeParam); \
	DECLARE_FUNCTION(execSetArenaCustomizeParam_ALL); \
	DECLARE_FUNCTION(execSetArenaLogoId); \
	DECLARE_FUNCTION(execSetArenaMatchupId); \
	DECLARE_FUNCTION(execSetArenaName); \
	DECLARE_FUNCTION(execSetArenaTransitionId); \
	DECLARE_FUNCTION(execSetCreatedDate); \
	DECLARE_FUNCTION(execSetImageData); \
	DECLARE_FUNCTION(execSetItemID); \
	DECLARE_FUNCTION(execSetLastModifiedDate); \
	DECLARE_FUNCTION(execSetLightLEDId); \
	DECLARE_FUNCTION(execSetLightLightEnvironmentId); \
	DECLARE_FUNCTION(execSetLightSLId); \
	DECLARE_FUNCTION(execSetOrderNo); \
	DECLARE_FUNCTION(execSetRingApronId); \
	DECLARE_FUNCTION(execSetRingCornerJointId); \
	DECLARE_FUNCTION(execSetRingCornerPostId); \
	DECLARE_FUNCTION(execSetRingMatId); \
	DECLARE_FUNCTION(execSetRingRopeId); \
	DECLARE_FUNCTION(execSetRingSideBarricadeId); \
	DECLARE_FUNCTION(execSetRingSideFloorId); \
	DECLARE_FUNCTION(execSetRingSideMatId); \
	DECLARE_FUNCTION(execSetRingTurnbuckleCoverId); \
	DECLARE_FUNCTION(execSetStageMovieId); \
	DECLARE_FUNCTION(execSetStageObjectId); \
	DECLARE_FUNCTION(execSetStageRampId); \
	DECLARE_FUNCTION(execSetStageTypeId); \
	DECLARE_FUNCTION(execSetTimeZoneId); \
	DECLARE_FUNCTION(execSetUseCount); \
	DECLARE_FUNCTION(execSetWeatherId); \
	DECLARE_FUNCTION(execSortArenaCustomizeParam);


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Arena_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveDataObject_UGC_Arena(); \
	friend struct Z_Construct_UClass_USaveDataObject_UGC_Arena_Statics; \
public: \
	DECLARE_CLASS(USaveDataObject_UGC_Arena, USaveDataObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(USaveDataObject_UGC_Arena)


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Arena_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSaveDataObject_UGC_Arena(); \
	friend struct Z_Construct_UClass_USaveDataObject_UGC_Arena_Statics; \
public: \
	DECLARE_CLASS(USaveDataObject_UGC_Arena, USaveDataObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(USaveDataObject_UGC_Arena)


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Arena_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveDataObject_UGC_Arena(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveDataObject_UGC_Arena) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveDataObject_UGC_Arena); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveDataObject_UGC_Arena); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveDataObject_UGC_Arena(USaveDataObject_UGC_Arena&&); \
	NO_API USaveDataObject_UGC_Arena(const USaveDataObject_UGC_Arena&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Arena_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveDataObject_UGC_Arena(USaveDataObject_UGC_Arena&&); \
	NO_API USaveDataObject_UGC_Arena(const USaveDataObject_UGC_Arena&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveDataObject_UGC_Arena); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveDataObject_UGC_Arena); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USaveDataObject_UGC_Arena)


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Arena_h_11_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Arena_h_9_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Arena_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Arena_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Arena_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Arena_h_11_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Arena_h_11_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Arena_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Arena_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Arena_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Arena_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Arena_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Arena_h_11_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Arena_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class USaveDataObject_UGC_Arena>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Arena_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
