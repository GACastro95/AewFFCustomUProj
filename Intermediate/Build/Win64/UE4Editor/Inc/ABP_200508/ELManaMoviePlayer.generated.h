// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UManaMovie;
class UManaPlayer;
class UManaTexture;
#ifdef ABP_200508_ELManaMoviePlayer_generated_h
#error "ELManaMoviePlayer.generated.h already included, missing '#pragma once' in ELManaMoviePlayer.h"
#endif
#define ABP_200508_ELManaMoviePlayer_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELManaMoviePlayer_h_12_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELManaMoviePlayer_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeMovieResourceForManaMovie); \
	DECLARE_FUNCTION(execGetManaPlayer); \
	DECLARE_FUNCTION(execGetManaTexture); \
	DECLARE_FUNCTION(execOnEndReached); \
	DECLARE_FUNCTION(execOnMovieClosed); \
	DECLARE_FUNCTION(execOnMovieOpened); \
	DECLARE_FUNCTION(execOnMovieOpenFailed); \
	DECLARE_FUNCTION(execOnPlaybackResumed); \
	DECLARE_FUNCTION(execOnPlaybackSuspended); \
	DECLARE_FUNCTION(execOnSeekCompleted); \
	DECLARE_FUNCTION(execOnTracksChanged); \
	DECLARE_FUNCTION(execResourceExist);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELManaMoviePlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeMovieResourceForManaMovie); \
	DECLARE_FUNCTION(execGetManaPlayer); \
	DECLARE_FUNCTION(execGetManaTexture); \
	DECLARE_FUNCTION(execOnEndReached); \
	DECLARE_FUNCTION(execOnMovieClosed); \
	DECLARE_FUNCTION(execOnMovieOpened); \
	DECLARE_FUNCTION(execOnMovieOpenFailed); \
	DECLARE_FUNCTION(execOnPlaybackResumed); \
	DECLARE_FUNCTION(execOnPlaybackSuspended); \
	DECLARE_FUNCTION(execOnSeekCompleted); \
	DECLARE_FUNCTION(execOnTracksChanged); \
	DECLARE_FUNCTION(execResourceExist);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELManaMoviePlayer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELManaMoviePlayer(); \
	friend struct Z_Construct_UClass_UELManaMoviePlayer_Statics; \
public: \
	DECLARE_CLASS(UELManaMoviePlayer, UELMoviePlayerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELManaMoviePlayer)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELManaMoviePlayer_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUELManaMoviePlayer(); \
	friend struct Z_Construct_UClass_UELManaMoviePlayer_Statics; \
public: \
	DECLARE_CLASS(UELManaMoviePlayer, UELMoviePlayerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELManaMoviePlayer)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELManaMoviePlayer_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELManaMoviePlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELManaMoviePlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELManaMoviePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELManaMoviePlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELManaMoviePlayer(UELManaMoviePlayer&&); \
	NO_API UELManaMoviePlayer(const UELManaMoviePlayer&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELManaMoviePlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELManaMoviePlayer(UELManaMoviePlayer&&); \
	NO_API UELManaMoviePlayer(const UELManaMoviePlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELManaMoviePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELManaMoviePlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELManaMoviePlayer)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELManaMoviePlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_pManaPlayer() { return STRUCT_OFFSET(UELManaMoviePlayer, m_pManaPlayer); } \
	FORCEINLINE static uint32 __PPO__m_pManaTexture() { return STRUCT_OFFSET(UELManaMoviePlayer, m_pManaTexture); } \
	FORCEINLINE static uint32 __PPO__m_pManaMovie() { return STRUCT_OFFSET(UELManaMoviePlayer, m_pManaMovie); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELManaMoviePlayer_h_10_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELManaMoviePlayer_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELManaMoviePlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELManaMoviePlayer_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELManaMoviePlayer_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELManaMoviePlayer_h_12_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELManaMoviePlayer_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELManaMoviePlayer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELManaMoviePlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELManaMoviePlayer_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELManaMoviePlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELManaMoviePlayer_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELManaMoviePlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELManaMoviePlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELManaMoviePlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
