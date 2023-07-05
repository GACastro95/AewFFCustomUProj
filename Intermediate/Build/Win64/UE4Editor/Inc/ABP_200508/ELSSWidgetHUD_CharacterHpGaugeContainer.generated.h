// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class ESSCharacterHpType : uint8;
#ifdef ABP_200508_ELSSWidgetHUD_CharacterHpGaugeContainer_generated_h
#error "ELSSWidgetHUD_CharacterHpGaugeContainer.generated.h already included, missing '#pragma once' in ELSSWidgetHUD_CharacterHpGaugeContainer.h"
#endif
#define ABP_200508_ELSSWidgetHUD_CharacterHpGaugeContainer_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_CharacterHpGaugeContainer_h_13_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_CharacterHpGaugeContainer_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyCharacterHpGauge); \
	DECLARE_FUNCTION(execSetVisibleContainer); \
	DECLARE_FUNCTION(execUpdate);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_CharacterHpGaugeContainer_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyCharacterHpGauge); \
	DECLARE_FUNCTION(execSetVisibleContainer); \
	DECLARE_FUNCTION(execUpdate);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_CharacterHpGaugeContainer_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_CharacterHpGaugeContainer(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_CharacterHpGaugeContainer, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_CharacterHpGaugeContainer)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_CharacterHpGaugeContainer_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_CharacterHpGaugeContainer(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_CharacterHpGaugeContainer, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_CharacterHpGaugeContainer)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_CharacterHpGaugeContainer_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSWidgetHUD_CharacterHpGaugeContainer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSWidgetHUD_CharacterHpGaugeContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_CharacterHpGaugeContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_CharacterHpGaugeContainer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_CharacterHpGaugeContainer(UELSSWidgetHUD_CharacterHpGaugeContainer&&); \
	NO_API UELSSWidgetHUD_CharacterHpGaugeContainer(const UELSSWidgetHUD_CharacterHpGaugeContainer&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_CharacterHpGaugeContainer_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_CharacterHpGaugeContainer(UELSSWidgetHUD_CharacterHpGaugeContainer&&); \
	NO_API UELSSWidgetHUD_CharacterHpGaugeContainer(const UELSSWidgetHUD_CharacterHpGaugeContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_CharacterHpGaugeContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_CharacterHpGaugeContainer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSWidgetHUD_CharacterHpGaugeContainer)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_CharacterHpGaugeContainer_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HpGaugeArray() { return STRUCT_OFFSET(UELSSWidgetHUD_CharacterHpGaugeContainer, HpGaugeArray); } \
	FORCEINLINE static uint32 __PPO__ShieldGaugeArray() { return STRUCT_OFFSET(UELSSWidgetHUD_CharacterHpGaugeContainer, ShieldGaugeArray); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_CharacterHpGaugeContainer_h_11_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_CharacterHpGaugeContainer_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_CharacterHpGaugeContainer_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_CharacterHpGaugeContainer_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_CharacterHpGaugeContainer_h_13_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_CharacterHpGaugeContainer_h_13_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_CharacterHpGaugeContainer_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_CharacterHpGaugeContainer_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_CharacterHpGaugeContainer_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_CharacterHpGaugeContainer_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_CharacterHpGaugeContainer_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_CharacterHpGaugeContainer_h_13_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_CharacterHpGaugeContainer_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSWidgetHUD_CharacterHpGaugeContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_CharacterHpGaugeContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
