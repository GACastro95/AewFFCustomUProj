// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSCommunityUserBase;
class UEOSCommunityInfoBase;
struct FELEOSSessionSearchResultWrapper;
#ifdef ABP_200508_ELEOSDebugGameSession_generated_h
#error "ELEOSDebugGameSession.generated.h already included, missing '#pragma once' in ELEOSDebugGameSession.h"
#endif
#define ABP_200508_ELEOSDebugGameSession_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSDebugGameSession_h_14_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSDebugGameSession_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSessionCreateEvent); \
	DECLARE_FUNCTION(execOnSessionDestroyEvent); \
	DECLARE_FUNCTION(execOnSessionJoinEvent); \
	DECLARE_FUNCTION(execOnSessionLeaveEvent); \
	DECLARE_FUNCTION(execOnSessionSearchCancelEvent); \
	DECLARE_FUNCTION(execOnSessionSearchEnd); \
	DECLARE_FUNCTION(execOnSessionSearchStartEvent);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSDebugGameSession_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSessionCreateEvent); \
	DECLARE_FUNCTION(execOnSessionDestroyEvent); \
	DECLARE_FUNCTION(execOnSessionJoinEvent); \
	DECLARE_FUNCTION(execOnSessionLeaveEvent); \
	DECLARE_FUNCTION(execOnSessionSearchCancelEvent); \
	DECLARE_FUNCTION(execOnSessionSearchEnd); \
	DECLARE_FUNCTION(execOnSessionSearchStartEvent);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSDebugGameSession_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELEOSDebugGameSession(); \
	friend struct Z_Construct_UClass_AELEOSDebugGameSession_Statics; \
public: \
	DECLARE_CLASS(AELEOSDebugGameSession, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELEOSDebugGameSession)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSDebugGameSession_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAELEOSDebugGameSession(); \
	friend struct Z_Construct_UClass_AELEOSDebugGameSession_Statics; \
public: \
	DECLARE_CLASS(AELEOSDebugGameSession, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELEOSDebugGameSession)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSDebugGameSession_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELEOSDebugGameSession(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELEOSDebugGameSession) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELEOSDebugGameSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELEOSDebugGameSession); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELEOSDebugGameSession(AELEOSDebugGameSession&&); \
	NO_API AELEOSDebugGameSession(const AELEOSDebugGameSession&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSDebugGameSession_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELEOSDebugGameSession(AELEOSDebugGameSession&&); \
	NO_API AELEOSDebugGameSession(const AELEOSDebugGameSession&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELEOSDebugGameSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELEOSDebugGameSession); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELEOSDebugGameSession)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSDebugGameSession_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bSetup() { return STRUCT_OFFSET(AELEOSDebugGameSession, bSetup); } \
	FORCEINLINE static uint32 __PPO__bShow() { return STRUCT_OFFSET(AELEOSDebugGameSession, bShow); } \
	FORCEINLINE static uint32 __PPO__ELEOSGameSession() { return STRUCT_OFFSET(AELEOSDebugGameSession, ELEOSGameSession); } \
	FORCEINLINE static uint32 __PPO__SessionStatus() { return STRUCT_OFFSET(AELEOSDebugGameSession, SessionStatus); } \
	FORCEINLINE static uint32 __PPO__SessionLeftTime() { return STRUCT_OFFSET(AELEOSDebugGameSession, SessionLeftTime); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSDebugGameSession_h_12_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSDebugGameSession_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSDebugGameSession_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSDebugGameSession_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSDebugGameSession_h_14_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSDebugGameSession_h_14_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSDebugGameSession_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSDebugGameSession_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSDebugGameSession_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSDebugGameSession_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSDebugGameSession_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSDebugGameSession_h_14_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSDebugGameSession_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELEOSDebugGameSession>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELEOSDebugGameSession_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
