// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UELMoviePlayerBase;
class UELMovieControlBase;
 class UTexture;
 
enum class EMovieType : uint8;
class UTexture;
#ifdef ABP_200508_ELMovieControlBase_generated_h
#error "ELMovieControlBase.generated.h already included, missing '#pragma once' in ELMovieControlBase.h"
#endif
#define ABP_200508_ELMovieControlBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovieControlBase_h_13_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovieControlBase_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeMovieResource); \
	DECLARE_FUNCTION(execCreateMovieControl); \
	DECLARE_FUNCTION(execDestroy); \
	DECLARE_FUNCTION(execDestroyAll); \
	DECLARE_FUNCTION(execGetPlayer); \
	DECLARE_FUNCTION(execIsAlphaMovie); \
	DECLARE_FUNCTION(execIsPreparedAll); \
	DECLARE_FUNCTION(execPlayAll); \
	DECLARE_FUNCTION(execResumeAll); \
	DECLARE_FUNCTION(execSeekAll); \
	DECLARE_FUNCTION(execSetTextureList); \
	DECLARE_FUNCTION(execSetTexturePathList); \
	DECLARE_FUNCTION(execSetup); \
	DECLARE_FUNCTION(execSetupWithTexture); \
	DECLARE_FUNCTION(execSetupWithTexturePath); \
	DECLARE_FUNCTION(execStartPrepare); \
	DECLARE_FUNCTION(execStopAll); \
	DECLARE_FUNCTION(execSuspendAll);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovieControlBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeMovieResource); \
	DECLARE_FUNCTION(execCreateMovieControl); \
	DECLARE_FUNCTION(execDestroy); \
	DECLARE_FUNCTION(execDestroyAll); \
	DECLARE_FUNCTION(execGetPlayer); \
	DECLARE_FUNCTION(execIsAlphaMovie); \
	DECLARE_FUNCTION(execIsPreparedAll); \
	DECLARE_FUNCTION(execPlayAll); \
	DECLARE_FUNCTION(execResumeAll); \
	DECLARE_FUNCTION(execSeekAll); \
	DECLARE_FUNCTION(execSetTextureList); \
	DECLARE_FUNCTION(execSetTexturePathList); \
	DECLARE_FUNCTION(execSetup); \
	DECLARE_FUNCTION(execSetupWithTexture); \
	DECLARE_FUNCTION(execSetupWithTexturePath); \
	DECLARE_FUNCTION(execStartPrepare); \
	DECLARE_FUNCTION(execStopAll); \
	DECLARE_FUNCTION(execSuspendAll);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovieControlBase_h_13_EVENT_PARMS \
	struct ELMovieControlBase_eventGetMovieFrames_Parms \
	{ \
		FName MovieDataID; \
		float FadeInTime; \
		float FadeOutTime; \
		float TotalTime; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELMovieControlBase_eventGetMovieFrames_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELMovieControlBase_eventGetMoviePath_Parms \
	{ \
		FName MovieDataID; \
		FString MoviePath; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELMovieControlBase_eventGetMoviePath_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovieControlBase_h_13_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovieControlBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELMovieControlBase(); \
	friend struct Z_Construct_UClass_UELMovieControlBase_Statics; \
public: \
	DECLARE_CLASS(UELMovieControlBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELMovieControlBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovieControlBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUELMovieControlBase(); \
	friend struct Z_Construct_UClass_UELMovieControlBase_Statics; \
public: \
	DECLARE_CLASS(UELMovieControlBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELMovieControlBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovieControlBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELMovieControlBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELMovieControlBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELMovieControlBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELMovieControlBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELMovieControlBase(UELMovieControlBase&&); \
	NO_API UELMovieControlBase(const UELMovieControlBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovieControlBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELMovieControlBase(UELMovieControlBase&&); \
	NO_API UELMovieControlBase(const UELMovieControlBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELMovieControlBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELMovieControlBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELMovieControlBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovieControlBase_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_cPlayers() { return STRUCT_OFFSET(UELMovieControlBase, m_cPlayers); } \
	FORCEINLINE static uint32 __PPO__m_cTextures() { return STRUCT_OFFSET(UELMovieControlBase, m_cTextures); } \
	FORCEINLINE static uint32 __PPO__m_cTexturePaths() { return STRUCT_OFFSET(UELMovieControlBase, m_cTexturePaths); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovieControlBase_h_11_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovieControlBase_h_13_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovieControlBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovieControlBase_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovieControlBase_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovieControlBase_h_13_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovieControlBase_h_13_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovieControlBase_h_13_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovieControlBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovieControlBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovieControlBase_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovieControlBase_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovieControlBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovieControlBase_h_13_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovieControlBase_h_13_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovieControlBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELMovieControlBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELMovieControlBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
