// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class EMiniGameID : uint8;
#ifdef ABP_200508_ELGameModeMiniGameBase_generated_h
#error "ELGameModeMiniGameBase.generated.h already included, missing '#pragma once' in ELGameModeMiniGameBase.h"
#endif
#define ABP_200508_ELGameModeMiniGameBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeMiniGameBase_h_11_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeMiniGameBase_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanEnableChangeSplitScreen); \
	DECLARE_FUNCTION(execDisableSplitScreen); \
	DECLARE_FUNCTION(execSetFourSplitScreenLayoutGrid); \
	DECLARE_FUNCTION(execSetFourSplitScreenLayoutHorizontal); \
	DECLARE_FUNCTION(execSetFourSplitScreenLayoutVertical); \
	DECLARE_FUNCTION(execSetThreeSplitScreenLayoutFavorBottom); \
	DECLARE_FUNCTION(execSetThreeSplitScreenLayoutFavorTop); \
	DECLARE_FUNCTION(execSetThreeSplitScreenLayoutHorizontal); \
	DECLARE_FUNCTION(execSetThreeSplitScreenLayoutVertical); \
	DECLARE_FUNCTION(execSetTwoSplitScreenLayoutHorizontal); \
	DECLARE_FUNCTION(execSetTwoSplitScreenLayoutVertical); \
	DECLARE_FUNCTION(execSetUpSplitScreenLayout);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeMiniGameBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanEnableChangeSplitScreen); \
	DECLARE_FUNCTION(execDisableSplitScreen); \
	DECLARE_FUNCTION(execSetFourSplitScreenLayoutGrid); \
	DECLARE_FUNCTION(execSetFourSplitScreenLayoutHorizontal); \
	DECLARE_FUNCTION(execSetFourSplitScreenLayoutVertical); \
	DECLARE_FUNCTION(execSetThreeSplitScreenLayoutFavorBottom); \
	DECLARE_FUNCTION(execSetThreeSplitScreenLayoutFavorTop); \
	DECLARE_FUNCTION(execSetThreeSplitScreenLayoutHorizontal); \
	DECLARE_FUNCTION(execSetThreeSplitScreenLayoutVertical); \
	DECLARE_FUNCTION(execSetTwoSplitScreenLayoutHorizontal); \
	DECLARE_FUNCTION(execSetTwoSplitScreenLayoutVertical); \
	DECLARE_FUNCTION(execSetUpSplitScreenLayout);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeMiniGameBase_h_11_EVENT_PARMS \
	struct ELGameModeMiniGameBase_eventGetMiniGameNameString_Parms \
	{ \
		EMiniGameID _id; \
		FString ReturnValue; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeMiniGameBase_h_11_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeMiniGameBase_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELGameModeMiniGameBase(); \
	friend struct Z_Construct_UClass_AELGameModeMiniGameBase_Statics; \
public: \
	DECLARE_CLASS(AELGameModeMiniGameBase, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELGameModeMiniGameBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeMiniGameBase_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAELGameModeMiniGameBase(); \
	friend struct Z_Construct_UClass_AELGameModeMiniGameBase_Statics; \
public: \
	DECLARE_CLASS(AELGameModeMiniGameBase, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELGameModeMiniGameBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeMiniGameBase_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELGameModeMiniGameBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELGameModeMiniGameBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELGameModeMiniGameBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELGameModeMiniGameBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELGameModeMiniGameBase(AELGameModeMiniGameBase&&); \
	NO_API AELGameModeMiniGameBase(const AELGameModeMiniGameBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeMiniGameBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELGameModeMiniGameBase(AELGameModeMiniGameBase&&); \
	NO_API AELGameModeMiniGameBase(const AELGameModeMiniGameBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELGameModeMiniGameBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELGameModeMiniGameBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELGameModeMiniGameBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeMiniGameBase_h_11_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeMiniGameBase_h_9_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeMiniGameBase_h_11_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeMiniGameBase_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeMiniGameBase_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeMiniGameBase_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeMiniGameBase_h_11_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeMiniGameBase_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeMiniGameBase_h_11_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeMiniGameBase_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeMiniGameBase_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeMiniGameBase_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeMiniGameBase_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeMiniGameBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeMiniGameBase_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeMiniGameBase_h_11_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeMiniGameBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELGameModeMiniGameBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeMiniGameBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
