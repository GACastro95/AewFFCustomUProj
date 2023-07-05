// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIntPoint;
#ifdef CRIWARERUNTIME_ManaMovie_generated_h
#error "ManaMovie.generated.h already included, missing '#pragma once' in ManaMovie.h"
#endif
#define CRIWARERUNTIME_ManaMovie_generated_h

#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaMovie_h_12_SPARSE_DATA
#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaMovie_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAverageBitrate); \
	DECLARE_FUNCTION(execGetDisplayDimensions); \
	DECLARE_FUNCTION(execGetMaxMovieSecond); \
	DECLARE_FUNCTION(execGetMinBufferSize); \
	DECLARE_FUNCTION(execGetUrl); \
	DECLARE_FUNCTION(execGetVideoTrackTextureDimensionsX); \
	DECLARE_FUNCTION(execGetVideoTrackTextureDimensionsY); \
	DECLARE_FUNCTION(execIsAlphaMovie); \
	DECLARE_FUNCTION(execValidate);


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaMovie_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAverageBitrate); \
	DECLARE_FUNCTION(execGetDisplayDimensions); \
	DECLARE_FUNCTION(execGetMaxMovieSecond); \
	DECLARE_FUNCTION(execGetMinBufferSize); \
	DECLARE_FUNCTION(execGetUrl); \
	DECLARE_FUNCTION(execGetVideoTrackTextureDimensionsX); \
	DECLARE_FUNCTION(execGetVideoTrackTextureDimensionsY); \
	DECLARE_FUNCTION(execIsAlphaMovie); \
	DECLARE_FUNCTION(execValidate);


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaMovie_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUManaMovie(); \
	friend struct Z_Construct_UClass_UManaMovie_Statics; \
public: \
	DECLARE_CLASS(UManaMovie, UManaSource, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UManaMovie)


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaMovie_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUManaMovie(); \
	friend struct Z_Construct_UClass_UManaMovie_Statics; \
public: \
	DECLARE_CLASS(UManaMovie, UManaSource, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UManaMovie)


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaMovie_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UManaMovie(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UManaMovie) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManaMovie); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManaMovie); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UManaMovie(UManaMovie&&); \
	NO_API UManaMovie(const UManaMovie&); \
public:


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaMovie_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UManaMovie(UManaMovie&&); \
	NO_API UManaMovie(const UManaMovie&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManaMovie); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManaMovie); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UManaMovie)


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaMovie_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VideoTracks() { return STRUCT_OFFSET(UManaMovie, VideoTracks); } \
	FORCEINLINE static uint32 __PPO__AlphaTracks() { return STRUCT_OFFSET(UManaMovie, AlphaTracks); } \
	FORCEINLINE static uint32 __PPO__AudioTracks() { return STRUCT_OFFSET(UManaMovie, AudioTracks); } \
	FORCEINLINE static uint32 __PPO__EventPoints() { return STRUCT_OFFSET(UManaMovie, EventPoints); } \
	FORCEINLINE static uint32 __PPO__NumSubtitleChannels() { return STRUCT_OFFSET(UManaMovie, NumSubtitleChannels); } \
	FORCEINLINE static uint32 __PPO__MaxSubtitleSize() { return STRUCT_OFFSET(UManaMovie, MaxSubtitleSize); }


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaMovie_h_10_PROLOG
#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaMovie_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaMovie_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaMovie_h_12_SPARSE_DATA \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaMovie_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaMovie_h_12_INCLASS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaMovie_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaMovie_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaMovie_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaMovie_h_12_SPARSE_DATA \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaMovie_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaMovie_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaMovie_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class UManaMovie>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaMovie_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
