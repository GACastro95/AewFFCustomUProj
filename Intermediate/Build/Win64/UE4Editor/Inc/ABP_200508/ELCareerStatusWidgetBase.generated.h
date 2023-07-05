// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ELCareerStatusWidgetBase_generated_h
#error "ELCareerStatusWidgetBase.generated.h already included, missing '#pragma once' in ELCareerStatusWidgetBase.h"
#endif
#define ABP_200508_ELCareerStatusWidgetBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStatusWidgetBase_h_8_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStatusWidgetBase_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCareerMoneyNum); \
	DECLARE_FUNCTION(execGetCondition); \
	DECLARE_FUNCTION(execGetFollowersNum); \
	DECLARE_FUNCTION(execGetFollowersNumString); \
	DECLARE_FUNCTION(execGetMotivation); \
	DECLARE_FUNCTION(execGetSkillPointNum); \
	DECLARE_FUNCTION(execGetToDynamiteSquareNum); \
	DECLARE_FUNCTION(execSetCareerMoneyNum); \
	DECLARE_FUNCTION(execSetCondition); \
	DECLARE_FUNCTION(execSetFollowersNum); \
	DECLARE_FUNCTION(execSetMotivation); \
	DECLARE_FUNCTION(execSetSkillPointNum); \
	DECLARE_FUNCTION(execSetToDynamiteSquareNum);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStatusWidgetBase_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCareerMoneyNum); \
	DECLARE_FUNCTION(execGetCondition); \
	DECLARE_FUNCTION(execGetFollowersNum); \
	DECLARE_FUNCTION(execGetFollowersNumString); \
	DECLARE_FUNCTION(execGetMotivation); \
	DECLARE_FUNCTION(execGetSkillPointNum); \
	DECLARE_FUNCTION(execGetToDynamiteSquareNum); \
	DECLARE_FUNCTION(execSetCareerMoneyNum); \
	DECLARE_FUNCTION(execSetCondition); \
	DECLARE_FUNCTION(execSetFollowersNum); \
	DECLARE_FUNCTION(execSetMotivation); \
	DECLARE_FUNCTION(execSetSkillPointNum); \
	DECLARE_FUNCTION(execSetToDynamiteSquareNum);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStatusWidgetBase_h_8_EVENT_PARMS \
	struct ELCareerStatusWidgetBase_eventChainUpdateAllWidget_Parms \
	{ \
		bool _bAnimation; \
	}; \
	struct ELCareerStatusWidgetBase_eventUpdateAllWidget_Parms \
	{ \
		bool _bAnimation; \
	}; \
	struct ELCareerStatusWidgetBase_eventUpdateCareerMoneyNum_Parms \
	{ \
		bool _bAnimation; \
	}; \
	struct ELCareerStatusWidgetBase_eventUpdateCondition_Parms \
	{ \
		bool _bAnimation; \
	}; \
	struct ELCareerStatusWidgetBase_eventUpdateFollowersNum_Parms \
	{ \
		bool _bAnimation; \
	}; \
	struct ELCareerStatusWidgetBase_eventUpdateMotivationLevel_Parms \
	{ \
		bool _bAnimation; \
	}; \
	struct ELCareerStatusWidgetBase_eventUpdateSkillPointNum_Parms \
	{ \
		bool _bAnimation; \
	}; \
	struct ELCareerStatusWidgetBase_eventUpdateToDynamiteSquareNum_Parms \
	{ \
		bool _bAnimation; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStatusWidgetBase_h_8_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStatusWidgetBase_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELCareerStatusWidgetBase(); \
	friend struct Z_Construct_UClass_UELCareerStatusWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UELCareerStatusWidgetBase, UELCareerWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELCareerStatusWidgetBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStatusWidgetBase_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUELCareerStatusWidgetBase(); \
	friend struct Z_Construct_UClass_UELCareerStatusWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UELCareerStatusWidgetBase, UELCareerWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELCareerStatusWidgetBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStatusWidgetBase_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELCareerStatusWidgetBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELCareerStatusWidgetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELCareerStatusWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELCareerStatusWidgetBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELCareerStatusWidgetBase(UELCareerStatusWidgetBase&&); \
	NO_API UELCareerStatusWidgetBase(const UELCareerStatusWidgetBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStatusWidgetBase_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELCareerStatusWidgetBase(UELCareerStatusWidgetBase&&); \
	NO_API UELCareerStatusWidgetBase(const UELCareerStatusWidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELCareerStatusWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELCareerStatusWidgetBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELCareerStatusWidgetBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStatusWidgetBase_h_8_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStatusWidgetBase_h_6_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStatusWidgetBase_h_8_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStatusWidgetBase_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStatusWidgetBase_h_8_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStatusWidgetBase_h_8_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStatusWidgetBase_h_8_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStatusWidgetBase_h_8_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStatusWidgetBase_h_8_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStatusWidgetBase_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStatusWidgetBase_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStatusWidgetBase_h_8_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStatusWidgetBase_h_8_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStatusWidgetBase_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStatusWidgetBase_h_8_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStatusWidgetBase_h_8_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStatusWidgetBase_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELCareerStatusWidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStatusWidgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
