// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCareerSnapshot;
struct FSnapshotTitle;
#ifdef ABP_200508_CareerSnapshotTitleItem_generated_h
#error "CareerSnapshotTitleItem.generated.h already included, missing '#pragma once' in CareerSnapshotTitleItem.h"
#endif
#define ABP_200508_CareerSnapshotTitleItem_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshotTitleItem_h_13_DELEGATE \
static inline void FOnValueChanged_DelegateWrapper(const FMulticastScriptDelegate& OnValueChanged) \
{ \
	OnValueChanged.ProcessMulticastDelegate<UObject>(NULL); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshotTitleItem_h_11_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshotTitleItem_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCollectSnapshots); \
	DECLARE_FUNCTION(execGetRecentSnapshot); \
	DECLARE_FUNCTION(execGetSnapshotNum); \
	DECLARE_FUNCTION(execGetSnapshots); \
	DECLARE_FUNCTION(execGetTitleText); \
	DECLARE_FUNCTION(execGetWeekText); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execRemoveSnapshot);


#define AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshotTitleItem_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCollectSnapshots); \
	DECLARE_FUNCTION(execGetRecentSnapshot); \
	DECLARE_FUNCTION(execGetSnapshotNum); \
	DECLARE_FUNCTION(execGetSnapshots); \
	DECLARE_FUNCTION(execGetTitleText); \
	DECLARE_FUNCTION(execGetWeekText); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execRemoveSnapshot);


#define AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshotTitleItem_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCareerSnapshotTitleItem(); \
	friend struct Z_Construct_UClass_UCareerSnapshotTitleItem_Statics; \
public: \
	DECLARE_CLASS(UCareerSnapshotTitleItem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UCareerSnapshotTitleItem)


#define AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshotTitleItem_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUCareerSnapshotTitleItem(); \
	friend struct Z_Construct_UClass_UCareerSnapshotTitleItem_Statics; \
public: \
	DECLARE_CLASS(UCareerSnapshotTitleItem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UCareerSnapshotTitleItem)


#define AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshotTitleItem_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCareerSnapshotTitleItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCareerSnapshotTitleItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCareerSnapshotTitleItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCareerSnapshotTitleItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCareerSnapshotTitleItem(UCareerSnapshotTitleItem&&); \
	NO_API UCareerSnapshotTitleItem(const UCareerSnapshotTitleItem&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshotTitleItem_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCareerSnapshotTitleItem(UCareerSnapshotTitleItem&&); \
	NO_API UCareerSnapshotTitleItem(const UCareerSnapshotTitleItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCareerSnapshotTitleItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCareerSnapshotTitleItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCareerSnapshotTitleItem)


#define AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshotTitleItem_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TitleSnapshots() { return STRUCT_OFFSET(UCareerSnapshotTitleItem, TitleSnapshots); }


#define AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshotTitleItem_h_9_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshotTitleItem_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshotTitleItem_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshotTitleItem_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshotTitleItem_h_11_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshotTitleItem_h_11_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshotTitleItem_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshotTitleItem_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshotTitleItem_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshotTitleItem_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshotTitleItem_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshotTitleItem_h_11_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshotTitleItem_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UCareerSnapshotTitleItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshotTitleItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
