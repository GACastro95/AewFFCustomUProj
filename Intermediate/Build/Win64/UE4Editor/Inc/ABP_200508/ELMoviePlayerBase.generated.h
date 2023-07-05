// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMoviePlayerStatus : uint8;
class UTexture;
#ifdef ABP_200508_ELMoviePlayerBase_generated_h
#error "ELMoviePlayerBase.generated.h already included, missing '#pragma once' in ELMoviePlayerBase.h"
#endif
#define ABP_200508_ELMoviePlayerBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELMoviePlayerBase_h_12_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELMoviePlayerBase_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeMovieResource); \
	DECLARE_FUNCTION(execDestroy); \
	DECLARE_FUNCTION(execGetAudioVolume); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execGetFrames); \
	DECLARE_FUNCTION(execGetMoviePath); \
	DECLARE_FUNCTION(execGetMovieTime); \
	DECLARE_FUNCTION(execGetSlotNo); \
	DECLARE_FUNCTION(execGetStatus); \
	DECLARE_FUNCTION(execGetTexturePath); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execIsAlpha); \
	DECLARE_FUNCTION(execIsDebugOn); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsPrepared); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execPrepare); \
	DECLARE_FUNCTION(execSeek); \
	DECLARE_FUNCTION(execSetAudioVolume); \
	DECLARE_FUNCTION(execSetDebugOff); \
	DECLARE_FUNCTION(execSetDebugOn); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execSetup); \
	DECLARE_FUNCTION(execSetupWithTexturePath); \
	DECLARE_FUNCTION(execStop);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMoviePlayerBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeMovieResource); \
	DECLARE_FUNCTION(execDestroy); \
	DECLARE_FUNCTION(execGetAudioVolume); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execGetFrames); \
	DECLARE_FUNCTION(execGetMoviePath); \
	DECLARE_FUNCTION(execGetMovieTime); \
	DECLARE_FUNCTION(execGetSlotNo); \
	DECLARE_FUNCTION(execGetStatus); \
	DECLARE_FUNCTION(execGetTexturePath); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execIsAlpha); \
	DECLARE_FUNCTION(execIsDebugOn); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsPrepared); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execPrepare); \
	DECLARE_FUNCTION(execSeek); \
	DECLARE_FUNCTION(execSetAudioVolume); \
	DECLARE_FUNCTION(execSetDebugOff); \
	DECLARE_FUNCTION(execSetDebugOn); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execSetup); \
	DECLARE_FUNCTION(execSetupWithTexturePath); \
	DECLARE_FUNCTION(execStop);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMoviePlayerBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELMoviePlayerBase(); \
	friend struct Z_Construct_UClass_UELMoviePlayerBase_Statics; \
public: \
	DECLARE_CLASS(UELMoviePlayerBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELMoviePlayerBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMoviePlayerBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUELMoviePlayerBase(); \
	friend struct Z_Construct_UClass_UELMoviePlayerBase_Statics; \
public: \
	DECLARE_CLASS(UELMoviePlayerBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELMoviePlayerBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMoviePlayerBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELMoviePlayerBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELMoviePlayerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELMoviePlayerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELMoviePlayerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELMoviePlayerBase(UELMoviePlayerBase&&); \
	NO_API UELMoviePlayerBase(const UELMoviePlayerBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMoviePlayerBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELMoviePlayerBase(UELMoviePlayerBase&&); \
	NO_API UELMoviePlayerBase(const UELMoviePlayerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELMoviePlayerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELMoviePlayerBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELMoviePlayerBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMoviePlayerBase_h_12_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELMoviePlayerBase_h_10_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELMoviePlayerBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMoviePlayerBase_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMoviePlayerBase_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMoviePlayerBase_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMoviePlayerBase_h_12_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMoviePlayerBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMoviePlayerBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMoviePlayerBase_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMoviePlayerBase_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMoviePlayerBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMoviePlayerBase_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMoviePlayerBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELMoviePlayerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELMoviePlayerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
