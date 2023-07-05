// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 class UOnlineNewsData;
#ifdef ABP_200508_ELOnlineNews_generated_h
#error "ELOnlineNews.generated.h already included, missing '#pragma once' in ELOnlineNews.h"
#endif
#define ABP_200508_ELOnlineNews_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineNews_h_11_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineNews_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearOnlineNewDataMap); \
	DECLARE_FUNCTION(execGetOnlineNewDataMap); \
	DECLARE_FUNCTION(execOnDownloadJson);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineNews_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearOnlineNewDataMap); \
	DECLARE_FUNCTION(execGetOnlineNewDataMap); \
	DECLARE_FUNCTION(execOnDownloadJson);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineNews_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELOnlineNews(); \
	friend struct Z_Construct_UClass_UELOnlineNews_Statics; \
public: \
	DECLARE_CLASS(UELOnlineNews, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELOnlineNews)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineNews_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUELOnlineNews(); \
	friend struct Z_Construct_UClass_UELOnlineNews_Statics; \
public: \
	DECLARE_CLASS(UELOnlineNews, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELOnlineNews)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineNews_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELOnlineNews(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELOnlineNews) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELOnlineNews); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELOnlineNews); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELOnlineNews(UELOnlineNews&&); \
	NO_API UELOnlineNews(const UELOnlineNews&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineNews_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELOnlineNews(UELOnlineNews&&); \
	NO_API UELOnlineNews(const UELOnlineNews&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELOnlineNews); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELOnlineNews); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELOnlineNews)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineNews_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TitleStorage() { return STRUCT_OFFSET(UELOnlineNews, TitleStorage); } \
	FORCEINLINE static uint32 __PPO__OnlineNewsDataMap() { return STRUCT_OFFSET(UELOnlineNews, OnlineNewsDataMap); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineNews_h_9_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineNews_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineNews_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineNews_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineNews_h_11_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineNews_h_11_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineNews_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineNews_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineNews_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineNews_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineNews_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineNews_h_11_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineNews_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELOnlineNews>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineNews_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
