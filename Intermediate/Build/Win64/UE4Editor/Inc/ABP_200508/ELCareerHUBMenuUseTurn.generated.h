// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECareerPostCommandEventType : uint8;
enum class ECareerPostCommandEventMark : uint8;
enum class ECareerHUBMenuGotoLogo : uint8;
enum class ECareerHubMenuDefaultTabBottomHelp : uint8;
#ifdef ABP_200508_ELCareerHUBMenuUseTurn_generated_h
#error "ELCareerHUBMenuUseTurn.generated.h already included, missing '#pragma once' in ELCareerHUBMenuUseTurn.h"
#endif
#define ABP_200508_ELCareerHUBMenuUseTurn_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuUseTurn_h_12_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuUseTurn_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEventMark); \
	DECLARE_FUNCTION(execGetGotoLogo); \
	DECLARE_FUNCTION(execGetPostCommandEventNumber); \
	DECLARE_FUNCTION(execIsEvent); \
	DECLARE_FUNCTION(execIsMenuTop); \
	DECLARE_FUNCTION(execSetMenuTopState);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuUseTurn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEventMark); \
	DECLARE_FUNCTION(execGetGotoLogo); \
	DECLARE_FUNCTION(execGetPostCommandEventNumber); \
	DECLARE_FUNCTION(execIsEvent); \
	DECLARE_FUNCTION(execIsMenuTop); \
	DECLARE_FUNCTION(execSetMenuTopState);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuUseTurn_h_12_EVENT_PARMS \
	struct ELCareerHUBMenuUseTurn_eventDefaultTabBottomHelp_Parms \
	{ \
		ECareerHubMenuDefaultTabBottomHelp eDefaultTabBottomHelp; \
	}; \
	struct ELCareerHUBMenuUseTurn_eventOnChangeSaveAndExit_Parms \
	{ \
		bool bFlag; \
	}; \
	struct ELCareerHUBMenuUseTurn_eventOnMoveCareerMenuItemCursor_Parms \
	{ \
		int32 _move; \
	}; \
	struct ELCareerHUBMenuUseTurn_eventOnPressedMoveTab_Parms \
	{ \
		bool _isLeft; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuUseTurn_h_12_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuUseTurn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELCareerHUBMenuUseTurn(); \
	friend struct Z_Construct_UClass_UELCareerHUBMenuUseTurn_Statics; \
public: \
	DECLARE_CLASS(UELCareerHUBMenuUseTurn, UELCareerWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELCareerHUBMenuUseTurn)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuUseTurn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUELCareerHUBMenuUseTurn(); \
	friend struct Z_Construct_UClass_UELCareerHUBMenuUseTurn_Statics; \
public: \
	DECLARE_CLASS(UELCareerHUBMenuUseTurn, UELCareerWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELCareerHUBMenuUseTurn)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuUseTurn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELCareerHUBMenuUseTurn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELCareerHUBMenuUseTurn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELCareerHUBMenuUseTurn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELCareerHUBMenuUseTurn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELCareerHUBMenuUseTurn(UELCareerHUBMenuUseTurn&&); \
	NO_API UELCareerHUBMenuUseTurn(const UELCareerHUBMenuUseTurn&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuUseTurn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELCareerHUBMenuUseTurn(UELCareerHUBMenuUseTurn&&); \
	NO_API UELCareerHUBMenuUseTurn(const UELCareerHUBMenuUseTurn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELCareerHUBMenuUseTurn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELCareerHUBMenuUseTurn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELCareerHUBMenuUseTurn)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuUseTurn_h_12_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuUseTurn_h_10_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuUseTurn_h_12_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuUseTurn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuUseTurn_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuUseTurn_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuUseTurn_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuUseTurn_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuUseTurn_h_12_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuUseTurn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuUseTurn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuUseTurn_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuUseTurn_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuUseTurn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuUseTurn_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuUseTurn_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuUseTurn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELCareerHUBMenuUseTurn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuUseTurn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
