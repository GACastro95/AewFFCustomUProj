// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESaveDataAccessorEvent : uint8;
class USaveData_AccessorBase;
enum class ESaveDataProcResult : uint8;
class AELGameCommonPlayerControllerBase;
#ifdef ELITE_ELTitleWidgetBase_generated_h
#error "ELTitleWidgetBase.generated.h already included, missing '#pragma once' in ELTitleWidgetBase.h"
#endif
#define ELITE_ELTitleWidgetBase_generated_h

#define AewFFCustomUProj_Source_ELITE_Public_ELTitleWidgetBase_h_13_SPARSE_DATA
#define AewFFCustomUProj_Source_ELITE_Public_ELTitleWidgetBase_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCallBack_EndConvert); \
	DECLARE_FUNCTION(execCallBack_EndDelete); \
	DECLARE_FUNCTION(execDeleteSaveData); \
	DECLARE_FUNCTION(execPreStartConvertSaveData); \
	DECLARE_FUNCTION(execStartConvertSaveData);


#define AewFFCustomUProj_Source_ELITE_Public_ELTitleWidgetBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallBack_EndConvert); \
	DECLARE_FUNCTION(execCallBack_EndDelete); \
	DECLARE_FUNCTION(execDeleteSaveData); \
	DECLARE_FUNCTION(execPreStartConvertSaveData); \
	DECLARE_FUNCTION(execStartConvertSaveData);


#define AewFFCustomUProj_Source_ELITE_Public_ELTitleWidgetBase_h_13_EVENT_PARMS \
	struct ELTitleWidgetBase_eventOnEndConvertSaveData_Parms \
	{ \
		bool IsConvertFailed; \
		bool IsChangeLanguageType; \
		int32 ChangeLanguageType; \
		ESaveDataProcResult SaveDataProcResult; \
	}; \
	struct ELTitleWidgetBase_eventOnPressedAnyKey_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
	}; \
	struct ELTitleWidgetBase_eventOnPressedDecide_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
	};


#define AewFFCustomUProj_Source_ELITE_Public_ELTitleWidgetBase_h_13_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ELITE_Public_ELTitleWidgetBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELTitleWidgetBase(); \
	friend struct Z_Construct_UClass_UELTitleWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UELTitleWidgetBase, UELMenuWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ELITE"), NO_API) \
	DECLARE_SERIALIZER(UELTitleWidgetBase)


#define AewFFCustomUProj_Source_ELITE_Public_ELTitleWidgetBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUELTitleWidgetBase(); \
	friend struct Z_Construct_UClass_UELTitleWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UELTitleWidgetBase, UELMenuWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ELITE"), NO_API) \
	DECLARE_SERIALIZER(UELTitleWidgetBase)


#define AewFFCustomUProj_Source_ELITE_Public_ELTitleWidgetBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELTitleWidgetBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELTitleWidgetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELTitleWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELTitleWidgetBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELTitleWidgetBase(UELTitleWidgetBase&&); \
	NO_API UELTitleWidgetBase(const UELTitleWidgetBase&); \
public:


#define AewFFCustomUProj_Source_ELITE_Public_ELTitleWidgetBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELTitleWidgetBase(UELTitleWidgetBase&&); \
	NO_API UELTitleWidgetBase(const UELTitleWidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELTitleWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELTitleWidgetBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELTitleWidgetBase)


#define AewFFCustomUProj_Source_ELITE_Public_ELTitleWidgetBase_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_DeleteSaveDataAccessors() { return STRUCT_OFFSET(UELTitleWidgetBase, m_DeleteSaveDataAccessors); } \
	FORCEINLINE static uint32 __PPO__m_ConvertSaveDataAccessors() { return STRUCT_OFFSET(UELTitleWidgetBase, m_ConvertSaveDataAccessors); }


#define AewFFCustomUProj_Source_ELITE_Public_ELTitleWidgetBase_h_11_PROLOG \
	AewFFCustomUProj_Source_ELITE_Public_ELTitleWidgetBase_h_13_EVENT_PARMS


#define AewFFCustomUProj_Source_ELITE_Public_ELTitleWidgetBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Public_ELTitleWidgetBase_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Public_ELTitleWidgetBase_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Public_ELTitleWidgetBase_h_13_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Public_ELTitleWidgetBase_h_13_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Public_ELTitleWidgetBase_h_13_INCLASS \
	AewFFCustomUProj_Source_ELITE_Public_ELTitleWidgetBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Public_ELTitleWidgetBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Public_ELTitleWidgetBase_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Public_ELTitleWidgetBase_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Public_ELTitleWidgetBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Public_ELTitleWidgetBase_h_13_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Public_ELTitleWidgetBase_h_13_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Public_ELTitleWidgetBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELITE_API UClass* StaticClass<class UELTitleWidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Public_ELTitleWidgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
