// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAutoAnimMode : uint8;
#ifdef ABP_200508_YCAM_AutoAnimPreview_generated_h
#error "YCAM_AutoAnimPreview.generated.h already included, missing '#pragma once' in YCAM_AutoAnimPreview.h"
#endif
#define ABP_200508_YCAM_AutoAnimPreview_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_YCAM_AutoAnimPreview_h_12_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_YCAM_AutoAnimPreview_h_12_RPC_WRAPPERS \
	virtual void StopPreview_Implementation(); \
	virtual void Uninit_Implementation(); \
 \
	DECLARE_FUNCTION(execAddCategoryItemIDFromSettingMenuID); \
	DECLARE_FUNCTION(execAddPlaySituationFromCategoryItemID); \
	DECLARE_FUNCTION(execAllTestStart); \
	DECLARE_FUNCTION(execDistanceTestStart); \
	DECLARE_FUNCTION(execDivingDistanceTestStart); \
	DECLARE_FUNCTION(execExecuteDequeMode); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execPreviewStart); \
	DECLARE_FUNCTION(execPreviewStartAll); \
	DECLARE_FUNCTION(execPreviewStartToArray); \
	DECLARE_FUNCTION(execStopPreview); \
	DECLARE_FUNCTION(execStrikeDistanceTestStart); \
	DECLARE_FUNCTION(execUninit);


#define AewFFCustomUProj_Source_ABP_200508_Public_YCAM_AutoAnimPreview_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void StopPreview_Implementation(); \
	virtual void Uninit_Implementation(); \
 \
	DECLARE_FUNCTION(execAddCategoryItemIDFromSettingMenuID); \
	DECLARE_FUNCTION(execAddPlaySituationFromCategoryItemID); \
	DECLARE_FUNCTION(execAllTestStart); \
	DECLARE_FUNCTION(execDistanceTestStart); \
	DECLARE_FUNCTION(execDivingDistanceTestStart); \
	DECLARE_FUNCTION(execExecuteDequeMode); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execPreviewStart); \
	DECLARE_FUNCTION(execPreviewStartAll); \
	DECLARE_FUNCTION(execPreviewStartToArray); \
	DECLARE_FUNCTION(execStopPreview); \
	DECLARE_FUNCTION(execStrikeDistanceTestStart); \
	DECLARE_FUNCTION(execUninit);


#define AewFFCustomUProj_Source_ABP_200508_Public_YCAM_AutoAnimPreview_h_12_EVENT_PARMS
#define AewFFCustomUProj_Source_ABP_200508_Public_YCAM_AutoAnimPreview_h_12_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_YCAM_AutoAnimPreview_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAYCAM_AutoAnimPreview(); \
	friend struct Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics; \
public: \
	DECLARE_CLASS(AYCAM_AutoAnimPreview, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AYCAM_AutoAnimPreview)


#define AewFFCustomUProj_Source_ABP_200508_Public_YCAM_AutoAnimPreview_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAYCAM_AutoAnimPreview(); \
	friend struct Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics; \
public: \
	DECLARE_CLASS(AYCAM_AutoAnimPreview, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AYCAM_AutoAnimPreview)


#define AewFFCustomUProj_Source_ABP_200508_Public_YCAM_AutoAnimPreview_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AYCAM_AutoAnimPreview(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AYCAM_AutoAnimPreview) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AYCAM_AutoAnimPreview); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AYCAM_AutoAnimPreview); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AYCAM_AutoAnimPreview(AYCAM_AutoAnimPreview&&); \
	NO_API AYCAM_AutoAnimPreview(const AYCAM_AutoAnimPreview&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_YCAM_AutoAnimPreview_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AYCAM_AutoAnimPreview(AYCAM_AutoAnimPreview&&); \
	NO_API AYCAM_AutoAnimPreview(const AYCAM_AutoAnimPreview&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AYCAM_AutoAnimPreview); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AYCAM_AutoAnimPreview); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AYCAM_AutoAnimPreview)


#define AewFFCustomUProj_Source_ABP_200508_Public_YCAM_AutoAnimPreview_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mode() { return STRUCT_OFFSET(AYCAM_AutoAnimPreview, Mode); } \
	FORCEINLINE static uint32 __PPO__ModeQue() { return STRUCT_OFFSET(AYCAM_AutoAnimPreview, ModeQue); } \
	FORCEINLINE static uint32 __PPO__MenuDataMap() { return STRUCT_OFFSET(AYCAM_AutoAnimPreview, MenuDataMap); } \
	FORCEINLINE static uint32 __PPO__MenuChildMap() { return STRUCT_OFFSET(AYCAM_AutoAnimPreview, MenuChildMap); } \
	FORCEINLINE static uint32 __PPO__isPlayAnim() { return STRUCT_OFFSET(AYCAM_AutoAnimPreview, isPlayAnim); } \
	FORCEINLINE static uint32 __PPO__CategoryItemIDs() { return STRUCT_OFFSET(AYCAM_AutoAnimPreview, CategoryItemIDs); } \
	FORCEINLINE static uint32 __PPO__AutoAnimInfos() { return STRUCT_OFFSET(AYCAM_AutoAnimPreview, AutoAnimInfos); } \
	FORCEINLINE static uint32 __PPO__isDuplicateCategory() { return STRUCT_OFFSET(AYCAM_AutoAnimPreview, isDuplicateCategory); }


#define AewFFCustomUProj_Source_ABP_200508_Public_YCAM_AutoAnimPreview_h_10_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_YCAM_AutoAnimPreview_h_12_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_YCAM_AutoAnimPreview_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_YCAM_AutoAnimPreview_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_YCAM_AutoAnimPreview_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_YCAM_AutoAnimPreview_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_YCAM_AutoAnimPreview_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_YCAM_AutoAnimPreview_h_12_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_YCAM_AutoAnimPreview_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_YCAM_AutoAnimPreview_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_YCAM_AutoAnimPreview_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_YCAM_AutoAnimPreview_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_YCAM_AutoAnimPreview_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_YCAM_AutoAnimPreview_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_YCAM_AutoAnimPreview_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_YCAM_AutoAnimPreview_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AYCAM_AutoAnimPreview>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_YCAM_AutoAnimPreview_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
