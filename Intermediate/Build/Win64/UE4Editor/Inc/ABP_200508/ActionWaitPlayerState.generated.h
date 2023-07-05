// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class ESessionPlayerStateNameType : uint8;
enum class ESessionPlayerStateType : uint8;
class UActionWaitPlayerState;
enum class EELEOSSessionEventType : uint8;
enum class EELEOSSessionEventResult : uint8;
#ifdef ABP_200508_ActionWaitPlayerState_generated_h
#error "ActionWaitPlayerState.generated.h already included, missing '#pragma once' in ActionWaitPlayerState.h"
#endif
#define ABP_200508_ActionWaitPlayerState_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ActionWaitPlayerState_h_16_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ActionWaitPlayerState_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAbort); \
	DECLARE_FUNCTION(execActionWaitPlayerState); \
	DECLARE_FUNCTION(execCompleted); \
	DECLARE_FUNCTION(execIsCompleted); \
	DECLARE_FUNCTION(execOnSessionEvent);


#define AewFFCustomUProj_Source_ABP_200508_Public_ActionWaitPlayerState_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAbort); \
	DECLARE_FUNCTION(execActionWaitPlayerState); \
	DECLARE_FUNCTION(execCompleted); \
	DECLARE_FUNCTION(execIsCompleted); \
	DECLARE_FUNCTION(execOnSessionEvent);


#define AewFFCustomUProj_Source_ABP_200508_Public_ActionWaitPlayerState_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActionWaitPlayerState(); \
	friend struct Z_Construct_UClass_UActionWaitPlayerState_Statics; \
public: \
	DECLARE_CLASS(UActionWaitPlayerState, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UActionWaitPlayerState)


#define AewFFCustomUProj_Source_ABP_200508_Public_ActionWaitPlayerState_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUActionWaitPlayerState(); \
	friend struct Z_Construct_UClass_UActionWaitPlayerState_Statics; \
public: \
	DECLARE_CLASS(UActionWaitPlayerState, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UActionWaitPlayerState)


#define AewFFCustomUProj_Source_ABP_200508_Public_ActionWaitPlayerState_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActionWaitPlayerState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActionWaitPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActionWaitPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActionWaitPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActionWaitPlayerState(UActionWaitPlayerState&&); \
	NO_API UActionWaitPlayerState(const UActionWaitPlayerState&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ActionWaitPlayerState_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActionWaitPlayerState(UActionWaitPlayerState&&); \
	NO_API UActionWaitPlayerState(const UActionWaitPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActionWaitPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActionWaitPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActionWaitPlayerState)


#define AewFFCustomUProj_Source_ABP_200508_Public_ActionWaitPlayerState_h_16_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ActionWaitPlayerState_h_14_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ActionWaitPlayerState_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ActionWaitPlayerState_h_16_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ActionWaitPlayerState_h_16_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ActionWaitPlayerState_h_16_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ActionWaitPlayerState_h_16_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ActionWaitPlayerState_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ActionWaitPlayerState_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ActionWaitPlayerState_h_16_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ActionWaitPlayerState_h_16_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ActionWaitPlayerState_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ActionWaitPlayerState_h_16_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ActionWaitPlayerState_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UActionWaitPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ActionWaitPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
