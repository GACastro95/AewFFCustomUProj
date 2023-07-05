// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAnimErrInfo;
enum class EAnimErrType : uint8;
struct FDateTime;
#ifdef ABP_200508_YCAM_PreviewDebugLog_generated_h
#error "YCAM_PreviewDebugLog.generated.h already included, missing '#pragma once' in YCAM_PreviewDebugLog.h"
#endif
#define ABP_200508_YCAM_PreviewDebugLog_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_YCAM_PreviewDebugLog_h_11_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_YCAM_PreviewDebugLog_h_11_RPC_WRAPPERS \
	virtual void Uninit_Implementation(); \
 \
	DECLARE_FUNCTION(execAddErrorLog); \
	DECLARE_FUNCTION(execErrInfoToString); \
	DECLARE_FUNCTION(execErrStringToDistanceOffsetInfo); \
	DECLARE_FUNCTION(execErrTypeToIsScreenShot); \
	DECLARE_FUNCTION(execErrTypeToString); \
	DECLARE_FUNCTION(execExportErrorLog); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execIsDuplicateLog); \
	DECLARE_FUNCTION(execSetDebugEndTime); \
	DECLARE_FUNCTION(execSetDebugStartTime); \
	DECLARE_FUNCTION(execUninit);


#define AewFFCustomUProj_Source_ABP_200508_Public_YCAM_PreviewDebugLog_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Uninit_Implementation(); \
 \
	DECLARE_FUNCTION(execAddErrorLog); \
	DECLARE_FUNCTION(execErrInfoToString); \
	DECLARE_FUNCTION(execErrStringToDistanceOffsetInfo); \
	DECLARE_FUNCTION(execErrTypeToIsScreenShot); \
	DECLARE_FUNCTION(execErrTypeToString); \
	DECLARE_FUNCTION(execExportErrorLog); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execIsDuplicateLog); \
	DECLARE_FUNCTION(execSetDebugEndTime); \
	DECLARE_FUNCTION(execSetDebugStartTime); \
	DECLARE_FUNCTION(execUninit);


#define AewFFCustomUProj_Source_ABP_200508_Public_YCAM_PreviewDebugLog_h_11_EVENT_PARMS
#define AewFFCustomUProj_Source_ABP_200508_Public_YCAM_PreviewDebugLog_h_11_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_YCAM_PreviewDebugLog_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUYCAM_PreviewDebugLog(); \
	friend struct Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics; \
public: \
	DECLARE_CLASS(UYCAM_PreviewDebugLog, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UYCAM_PreviewDebugLog)


#define AewFFCustomUProj_Source_ABP_200508_Public_YCAM_PreviewDebugLog_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUYCAM_PreviewDebugLog(); \
	friend struct Z_Construct_UClass_UYCAM_PreviewDebugLog_Statics; \
public: \
	DECLARE_CLASS(UYCAM_PreviewDebugLog, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UYCAM_PreviewDebugLog)


#define AewFFCustomUProj_Source_ABP_200508_Public_YCAM_PreviewDebugLog_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UYCAM_PreviewDebugLog(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UYCAM_PreviewDebugLog) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYCAM_PreviewDebugLog); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYCAM_PreviewDebugLog); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UYCAM_PreviewDebugLog(UYCAM_PreviewDebugLog&&); \
	NO_API UYCAM_PreviewDebugLog(const UYCAM_PreviewDebugLog&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_YCAM_PreviewDebugLog_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UYCAM_PreviewDebugLog(UYCAM_PreviewDebugLog&&); \
	NO_API UYCAM_PreviewDebugLog(const UYCAM_PreviewDebugLog&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYCAM_PreviewDebugLog); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYCAM_PreviewDebugLog); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UYCAM_PreviewDebugLog)


#define AewFFCustomUProj_Source_ABP_200508_Public_YCAM_PreviewDebugLog_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ErrLogs() { return STRUCT_OFFSET(UYCAM_PreviewDebugLog, ErrLogs); } \
	FORCEINLINE static uint32 __PPO__SaveFolderPath() { return STRUCT_OFFSET(UYCAM_PreviewDebugLog, SaveFolderPath); } \
	FORCEINLINE static uint32 __PPO__ErrAnimLogHeader() { return STRUCT_OFFSET(UYCAM_PreviewDebugLog, ErrAnimLogHeader); } \
	FORCEINLINE static uint32 __PPO__ErrAnimLogFileTitle() { return STRUCT_OFFSET(UYCAM_PreviewDebugLog, ErrAnimLogFileTitle); } \
	FORCEINLINE static uint32 __PPO__ErrAnimLogMovesLogPath() { return STRUCT_OFFSET(UYCAM_PreviewDebugLog, ErrAnimLogMovesLogPath); } \
	FORCEINLINE static uint32 __PPO__DebugStartTime() { return STRUCT_OFFSET(UYCAM_PreviewDebugLog, DebugStartTime); } \
	FORCEINLINE static uint32 __PPO__DebugEndTime() { return STRUCT_OFFSET(UYCAM_PreviewDebugLog, DebugEndTime); } \
	FORCEINLINE static uint32 __PPO__isPrintOutputLog() { return STRUCT_OFFSET(UYCAM_PreviewDebugLog, isPrintOutputLog); } \
	FORCEINLINE static uint32 __PPO__isPoolLog() { return STRUCT_OFFSET(UYCAM_PreviewDebugLog, isPoolLog); } \
	FORCEINLINE static uint32 __PPO__isScreenShot() { return STRUCT_OFFSET(UYCAM_PreviewDebugLog, isScreenShot); }


#define AewFFCustomUProj_Source_ABP_200508_Public_YCAM_PreviewDebugLog_h_9_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_YCAM_PreviewDebugLog_h_11_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_YCAM_PreviewDebugLog_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_YCAM_PreviewDebugLog_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_YCAM_PreviewDebugLog_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_YCAM_PreviewDebugLog_h_11_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_YCAM_PreviewDebugLog_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_YCAM_PreviewDebugLog_h_11_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_YCAM_PreviewDebugLog_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_YCAM_PreviewDebugLog_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_YCAM_PreviewDebugLog_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_YCAM_PreviewDebugLog_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_YCAM_PreviewDebugLog_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_YCAM_PreviewDebugLog_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_YCAM_PreviewDebugLog_h_11_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_YCAM_PreviewDebugLog_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UYCAM_PreviewDebugLog>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_YCAM_PreviewDebugLog_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
