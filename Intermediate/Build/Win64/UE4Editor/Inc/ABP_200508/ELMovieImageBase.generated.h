// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UELMoviePlayerBase;
enum class EMoviePlayerEvent : uint8;
class UManaTexture;
class UImage;
#ifdef ABP_200508_ELMovieImageBase_generated_h
#error "ELMovieImageBase.generated.h already included, missing '#pragma once' in ELMovieImageBase.h"
#endif
#define ABP_200508_ELMovieImageBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovieImageBase_h_13_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovieImageBase_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMoviePlayer); \
	DECLARE_FUNCTION(execPlayerEventSetVisibleOnly); \
	DECLARE_FUNCTION(execSetTextureList); \
	DECLARE_FUNCTION(execSetupTexture_N); \
	DECLARE_FUNCTION(execSetupTextureSimple_N); \
	DECLARE_FUNCTION(execStartPrepare_N); \
	DECLARE_FUNCTION(execStopMovie_N);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovieImageBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMoviePlayer); \
	DECLARE_FUNCTION(execPlayerEventSetVisibleOnly); \
	DECLARE_FUNCTION(execSetTextureList); \
	DECLARE_FUNCTION(execSetupTexture_N); \
	DECLARE_FUNCTION(execSetupTextureSimple_N); \
	DECLARE_FUNCTION(execStartPrepare_N); \
	DECLARE_FUNCTION(execStopMovie_N);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovieImageBase_h_13_EVENT_PARMS \
	struct ELMovieImageBase_eventSetupTextureImpl_Parms \
	{ \
		UImage* TargetImage; \
		int32 SlotNo; \
		bool Alpha; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovieImageBase_h_13_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovieImageBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELMovieImageBase(); \
	friend struct Z_Construct_UClass_UELMovieImageBase_Statics; \
public: \
	DECLARE_CLASS(UELMovieImageBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELMovieImageBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovieImageBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUELMovieImageBase(); \
	friend struct Z_Construct_UClass_UELMovieImageBase_Statics; \
public: \
	DECLARE_CLASS(UELMovieImageBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELMovieImageBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovieImageBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELMovieImageBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELMovieImageBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELMovieImageBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELMovieImageBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELMovieImageBase(UELMovieImageBase&&); \
	NO_API UELMovieImageBase(const UELMovieImageBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovieImageBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELMovieImageBase(UELMovieImageBase&&); \
	NO_API UELMovieImageBase(const UELMovieImageBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELMovieImageBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELMovieImageBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELMovieImageBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovieImageBase_h_13_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovieImageBase_h_11_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovieImageBase_h_13_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovieImageBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovieImageBase_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovieImageBase_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovieImageBase_h_13_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovieImageBase_h_13_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovieImageBase_h_13_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovieImageBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovieImageBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovieImageBase_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovieImageBase_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovieImageBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovieImageBase_h_13_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovieImageBase_h_13_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovieImageBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELMovieImageBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELMovieImageBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
