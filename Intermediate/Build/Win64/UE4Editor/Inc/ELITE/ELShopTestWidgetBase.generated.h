// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ERequestGoldCheckType : uint8;
class USaveDataSystem;
class USaveDataObjectBase;
enum class EEOSUserContentsEvent : uint8;
class UEOSUserContentsBase;
struct FEOSUserContentProgress;
#ifdef ELITE_ELShopTestWidgetBase_generated_h
#error "ELShopTestWidgetBase.generated.h already included, missing '#pragma once' in ELShopTestWidgetBase.h"
#endif
#define ELITE_ELShopTestWidgetBase_generated_h

#define AewFFCustomUProj_Source_ELITE_Public_ELShopTestWidgetBase_h_15_SPARSE_DATA
#define AewFFCustomUProj_Source_ELITE_Public_ELShopTestWidgetBase_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheckCurrentGoldNum); \
	DECLARE_FUNCTION(execCreateLocalPlayerDataObject); \
	DECLARE_FUNCTION(execGetLocalPlayerDataObject); \
	DECLARE_FUNCTION(execGetRequestGoldCheckType); \
	DECLARE_FUNCTION(execOnUserContentsEvent); \
	DECLARE_FUNCTION(execSetDispHorizontalListNum); \
	DECLARE_FUNCTION(execSetShopItemNum); \
	DECLARE_FUNCTION(execUpdataGoldNum);


#define AewFFCustomUProj_Source_ELITE_Public_ELShopTestWidgetBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckCurrentGoldNum); \
	DECLARE_FUNCTION(execCreateLocalPlayerDataObject); \
	DECLARE_FUNCTION(execGetLocalPlayerDataObject); \
	DECLARE_FUNCTION(execGetRequestGoldCheckType); \
	DECLARE_FUNCTION(execOnUserContentsEvent); \
	DECLARE_FUNCTION(execSetDispHorizontalListNum); \
	DECLARE_FUNCTION(execSetShopItemNum); \
	DECLARE_FUNCTION(execUpdataGoldNum);


#define AewFFCustomUProj_Source_ELITE_Public_ELShopTestWidgetBase_h_15_EVENT_PARMS \
	struct ELShopTestWidgetBase_eventOnChangeCategory_Parms \
	{ \
		int32 _addIndex; \
	}; \
	struct ELShopTestWidgetBase_eventOnCheckedCurrentGoldNum_Parms \
	{ \
		bool _isSuccessed; \
		int32 Num; \
	}; \
	struct ELShopTestWidgetBase_eventOnPressedMoveTab_Parms \
	{ \
		bool _isLeft; \
	}; \
	struct ELShopTestWidgetBase_eventOnUpdateCurrentGoldNum_Parms \
	{ \
		int32 Num; \
	};


#define AewFFCustomUProj_Source_ELITE_Public_ELShopTestWidgetBase_h_15_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ELITE_Public_ELShopTestWidgetBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELShopTestWidgetBase(); \
	friend struct Z_Construct_UClass_UELShopTestWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UELShopTestWidgetBase, UELMenuWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ELITE"), NO_API) \
	DECLARE_SERIALIZER(UELShopTestWidgetBase)


#define AewFFCustomUProj_Source_ELITE_Public_ELShopTestWidgetBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUELShopTestWidgetBase(); \
	friend struct Z_Construct_UClass_UELShopTestWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UELShopTestWidgetBase, UELMenuWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ELITE"), NO_API) \
	DECLARE_SERIALIZER(UELShopTestWidgetBase)


#define AewFFCustomUProj_Source_ELITE_Public_ELShopTestWidgetBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELShopTestWidgetBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELShopTestWidgetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELShopTestWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELShopTestWidgetBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELShopTestWidgetBase(UELShopTestWidgetBase&&); \
	NO_API UELShopTestWidgetBase(const UELShopTestWidgetBase&); \
public:


#define AewFFCustomUProj_Source_ELITE_Public_ELShopTestWidgetBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELShopTestWidgetBase(UELShopTestWidgetBase&&); \
	NO_API UELShopTestWidgetBase(const UELShopTestWidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELShopTestWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELShopTestWidgetBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELShopTestWidgetBase)


#define AewFFCustomUProj_Source_ELITE_Public_ELShopTestWidgetBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_pcPlayerDataObject() { return STRUCT_OFFSET(UELShopTestWidgetBase, m_pcPlayerDataObject); }


#define AewFFCustomUProj_Source_ELITE_Public_ELShopTestWidgetBase_h_13_PROLOG \
	AewFFCustomUProj_Source_ELITE_Public_ELShopTestWidgetBase_h_15_EVENT_PARMS


#define AewFFCustomUProj_Source_ELITE_Public_ELShopTestWidgetBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Public_ELShopTestWidgetBase_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Public_ELShopTestWidgetBase_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Public_ELShopTestWidgetBase_h_15_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Public_ELShopTestWidgetBase_h_15_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Public_ELShopTestWidgetBase_h_15_INCLASS \
	AewFFCustomUProj_Source_ELITE_Public_ELShopTestWidgetBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Public_ELShopTestWidgetBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Public_ELShopTestWidgetBase_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Public_ELShopTestWidgetBase_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Public_ELShopTestWidgetBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Public_ELShopTestWidgetBase_h_15_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Public_ELShopTestWidgetBase_h_15_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Public_ELShopTestWidgetBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELITE_API UClass* StaticClass<class UELShopTestWidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Public_ELShopTestWidgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
