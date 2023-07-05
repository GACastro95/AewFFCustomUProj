// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EYGS2DebugMenuClientStep : uint8;
struct FYGS2CommandData;
class UYGS2DebugMenuClient;
#ifdef ABP_200508_YGS2DebugMenu_generated_h
#error "YGS2DebugMenu.generated.h already included, missing '#pragma once' in YGS2DebugMenu.h"
#endif
#define ABP_200508_YGS2DebugMenu_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenu_h_12_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenu_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnClientUpdate); \
	DECLARE_FUNCTION(execSetSkipLogin);


#define AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenu_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnClientUpdate); \
	DECLARE_FUNCTION(execSetSkipLogin);


#define AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenu_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUYGS2DebugMenu(); \
	friend struct Z_Construct_UClass_UYGS2DebugMenu_Statics; \
public: \
	DECLARE_CLASS(UYGS2DebugMenu, UELDebugMenuRootBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UYGS2DebugMenu)


#define AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenu_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUYGS2DebugMenu(); \
	friend struct Z_Construct_UClass_UYGS2DebugMenu_Statics; \
public: \
	DECLARE_CLASS(UYGS2DebugMenu, UELDebugMenuRootBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UYGS2DebugMenu)


#define AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenu_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UYGS2DebugMenu(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UYGS2DebugMenu) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYGS2DebugMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYGS2DebugMenu); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UYGS2DebugMenu(UYGS2DebugMenu&&); \
	NO_API UYGS2DebugMenu(const UYGS2DebugMenu&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenu_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UYGS2DebugMenu(UYGS2DebugMenu&&); \
	NO_API UYGS2DebugMenu(const UYGS2DebugMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYGS2DebugMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYGS2DebugMenu); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UYGS2DebugMenu)


#define AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenu_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_cClients() { return STRUCT_OFFSET(UYGS2DebugMenu, m_cClients); }


#define AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenu_h_10_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenu_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenu_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenu_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenu_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenu_h_12_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenu_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenu_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenu_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenu_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenu_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenu_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenu_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UYGS2DebugMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
