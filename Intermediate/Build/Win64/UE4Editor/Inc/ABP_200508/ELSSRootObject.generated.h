// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UELSSGameModeDataManager;
class ULevel;
class UWorld;
enum class ESSEndGameReason : uint8;
enum class ESSLocalDebugFlag : uint8;
struct FSSDebugParam;
#ifdef ABP_200508_ELSSRootObject_generated_h
#error "ELSSRootObject.generated.h already included, missing '#pragma once' in ELSSRootObject.h"
#endif
#define ABP_200508_ELSSRootObject_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSRootObject_h_18_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSRootObject_h_18_RPC_WRAPPERS \
	virtual void OnDestroy_Implementation(); \
	virtual void OnInitialize_Implementation(); \
 \
	DECLARE_FUNCTION(execClearLastEndGameReason); \
	DECLARE_FUNCTION(execCreateSSModeGameData); \
	DECLARE_FUNCTION(execDeleteSSModeGameData); \
	DECLARE_FUNCTION(execGetSSGameDataManager); \
	DECLARE_FUNCTION(execOnChangeLevel_Native); \
	DECLARE_FUNCTION(execOnDestroy); \
	DECLARE_FUNCTION(execOnGameEnd); \
	DECLARE_FUNCTION(execOnGameStart); \
	DECLARE_FUNCTION(execOnInitialize); \
	DECLARE_FUNCTION(execSetLocalDebugFlag); \
	DECLARE_FUNCTION(execSetSSDebugParam);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSRootObject_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnDestroy_Implementation(); \
	virtual void OnInitialize_Implementation(); \
 \
	DECLARE_FUNCTION(execClearLastEndGameReason); \
	DECLARE_FUNCTION(execCreateSSModeGameData); \
	DECLARE_FUNCTION(execDeleteSSModeGameData); \
	DECLARE_FUNCTION(execGetSSGameDataManager); \
	DECLARE_FUNCTION(execOnChangeLevel_Native); \
	DECLARE_FUNCTION(execOnDestroy); \
	DECLARE_FUNCTION(execOnGameEnd); \
	DECLARE_FUNCTION(execOnGameStart); \
	DECLARE_FUNCTION(execOnInitialize); \
	DECLARE_FUNCTION(execSetLocalDebugFlag); \
	DECLARE_FUNCTION(execSetSSDebugParam);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSRootObject_h_18_EVENT_PARMS \
	struct ELSSRootObject_eventSetVisibleFadeForChangeLevel_Parms \
	{ \
		bool inEnable; \
		bool inWithLoadingIcon; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSRootObject_h_18_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSRootObject_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSRootObject(); \
	friend struct Z_Construct_UClass_UELSSRootObject_Statics; \
public: \
	DECLARE_CLASS(UELSSRootObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSRootObject)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSRootObject_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUELSSRootObject(); \
	friend struct Z_Construct_UClass_UELSSRootObject_Statics; \
public: \
	DECLARE_CLASS(UELSSRootObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSRootObject)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSRootObject_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSRootObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSRootObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSRootObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSRootObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSRootObject(UELSSRootObject&&); \
	NO_API UELSSRootObject(const UELSSRootObject&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSRootObject_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSRootObject(UELSSRootObject&&); \
	NO_API UELSSRootObject(const UELSSRootObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSRootObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSRootObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSRootObject)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSRootObject_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_pSSGameDataManager() { return STRUCT_OFFSET(UELSSRootObject, m_pSSGameDataManager); } \
	FORCEINLINE static uint32 __PPO__CommonDatabase() { return STRUCT_OFFSET(UELSSRootObject, CommonDatabase); } \
	FORCEINLINE static uint32 __PPO__LastEndGameReason() { return STRUCT_OFFSET(UELSSRootObject, LastEndGameReason); } \
	FORCEINLINE static uint32 __PPO__LocalInGameFlag() { return STRUCT_OFFSET(UELSSRootObject, LocalInGameFlag); } \
	FORCEINLINE static uint32 __PPO__VisibleFadeForChangeLevel() { return STRUCT_OFFSET(UELSSRootObject, VisibleFadeForChangeLevel); } \
	FORCEINLINE static uint32 __PPO__SSDebugParam() { return STRUCT_OFFSET(UELSSRootObject, SSDebugParam); } \
	FORCEINLINE static uint32 __PPO__DebugMenuManager() { return STRUCT_OFFSET(UELSSRootObject, DebugMenuManager); } \
	FORCEINLINE static uint32 __PPO__Notice() { return STRUCT_OFFSET(UELSSRootObject, Notice); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSRootObject_h_16_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSRootObject_h_18_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSRootObject_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSRootObject_h_18_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSRootObject_h_18_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSRootObject_h_18_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSRootObject_h_18_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSRootObject_h_18_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSRootObject_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSRootObject_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSRootObject_h_18_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSRootObject_h_18_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSRootObject_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSRootObject_h_18_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSRootObject_h_18_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSRootObject_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSRootObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSRootObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
