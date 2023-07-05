// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
#ifdef ABP_200508_OnlineNewsData_generated_h
#error "OnlineNewsData.generated.h already included, missing '#pragma once' in OnlineNewsData.h"
#endif
#define ABP_200508_OnlineNewsData_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_OnlineNewsData_h_10_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_OnlineNewsData_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFromJson); \
	DECLARE_FUNCTION(execGetBodyText); \
	DECLARE_FUNCTION(execGetDisplayPriority); \
	DECLARE_FUNCTION(execGetHeaderText); \
	DECLARE_FUNCTION(execGetOnlineNewsID); \
	DECLARE_FUNCTION(execGetOnlineNewsTexture); \
	DECLARE_FUNCTION(execGetOnlineNewsVersion); \
	DECLARE_FUNCTION(execGetPublicationEndDate); \
	DECLARE_FUNCTION(execGetPublicationStartDate); \
	DECLARE_FUNCTION(execLoadFile); \
	DECLARE_FUNCTION(execSaveFile); \
	DECLARE_FUNCTION(execSetEndTime); \
	DECLARE_FUNCTION(execSetOnlineNewsID); \
	DECLARE_FUNCTION(execSetOnlineNewsTexture); \
	DECLARE_FUNCTION(execSetStartTime); \
	DECLARE_FUNCTION(execToJson);


#define AewFFCustomUProj_Source_ABP_200508_Public_OnlineNewsData_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFromJson); \
	DECLARE_FUNCTION(execGetBodyText); \
	DECLARE_FUNCTION(execGetDisplayPriority); \
	DECLARE_FUNCTION(execGetHeaderText); \
	DECLARE_FUNCTION(execGetOnlineNewsID); \
	DECLARE_FUNCTION(execGetOnlineNewsTexture); \
	DECLARE_FUNCTION(execGetOnlineNewsVersion); \
	DECLARE_FUNCTION(execGetPublicationEndDate); \
	DECLARE_FUNCTION(execGetPublicationStartDate); \
	DECLARE_FUNCTION(execLoadFile); \
	DECLARE_FUNCTION(execSaveFile); \
	DECLARE_FUNCTION(execSetEndTime); \
	DECLARE_FUNCTION(execSetOnlineNewsID); \
	DECLARE_FUNCTION(execSetOnlineNewsTexture); \
	DECLARE_FUNCTION(execSetStartTime); \
	DECLARE_FUNCTION(execToJson);


#define AewFFCustomUProj_Source_ABP_200508_Public_OnlineNewsData_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineNewsData(); \
	friend struct Z_Construct_UClass_UOnlineNewsData_Statics; \
public: \
	DECLARE_CLASS(UOnlineNewsData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UOnlineNewsData)


#define AewFFCustomUProj_Source_ABP_200508_Public_OnlineNewsData_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineNewsData(); \
	friend struct Z_Construct_UClass_UOnlineNewsData_Statics; \
public: \
	DECLARE_CLASS(UOnlineNewsData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UOnlineNewsData)


#define AewFFCustomUProj_Source_ABP_200508_Public_OnlineNewsData_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineNewsData(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineNewsData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineNewsData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineNewsData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineNewsData(UOnlineNewsData&&); \
	NO_API UOnlineNewsData(const UOnlineNewsData&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_OnlineNewsData_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineNewsData(UOnlineNewsData&&); \
	NO_API UOnlineNewsData(const UOnlineNewsData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineNewsData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineNewsData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOnlineNewsData)


#define AewFFCustomUProj_Source_ABP_200508_Public_OnlineNewsData_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OnlineNewsID() { return STRUCT_OFFSET(UOnlineNewsData, OnlineNewsID); } \
	FORCEINLINE static uint32 __PPO__OnlineNewsTex() { return STRUCT_OFFSET(UOnlineNewsData, OnlineNewsTex); } \
	FORCEINLINE static uint32 __PPO__StartTime() { return STRUCT_OFFSET(UOnlineNewsData, StartTime); } \
	FORCEINLINE static uint32 __PPO__EndTime() { return STRUCT_OFFSET(UOnlineNewsData, EndTime); } \
	FORCEINLINE static uint32 __PPO__Version() { return STRUCT_OFFSET(UOnlineNewsData, Version); } \
	FORCEINLINE static uint32 __PPO__DisplayPriority() { return STRUCT_OFFSET(UOnlineNewsData, DisplayPriority); } \
	FORCEINLINE static uint32 __PPO__HeaderText() { return STRUCT_OFFSET(UOnlineNewsData, HeaderText); } \
	FORCEINLINE static uint32 __PPO__BodyText() { return STRUCT_OFFSET(UOnlineNewsData, BodyText); }


#define AewFFCustomUProj_Source_ABP_200508_Public_OnlineNewsData_h_8_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_OnlineNewsData_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_OnlineNewsData_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_OnlineNewsData_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_OnlineNewsData_h_10_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_OnlineNewsData_h_10_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_OnlineNewsData_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_OnlineNewsData_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_OnlineNewsData_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_OnlineNewsData_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_OnlineNewsData_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_OnlineNewsData_h_10_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_OnlineNewsData_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UOnlineNewsData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_OnlineNewsData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
