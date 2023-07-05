// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ELSSWidgetHUD_MiniMapInfo_generated_h
#error "ELSSWidgetHUD_MiniMapInfo.generated.h already included, missing '#pragma once' in ELSSWidgetHUD_MiniMapInfo.h"
#endif
#define ABP_200508_ELSSWidgetHUD_MiniMapInfo_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapInfo_h_11_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapInfo_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyAliveCount); \
	DECLARE_FUNCTION(execApplyAreaShrinkTime); \
	DECLARE_FUNCTION(execApplyKOCount); \
	DECLARE_FUNCTION(execSetAreaShrinkTime);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapInfo_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyAliveCount); \
	DECLARE_FUNCTION(execApplyAreaShrinkTime); \
	DECLARE_FUNCTION(execApplyKOCount); \
	DECLARE_FUNCTION(execSetAreaShrinkTime);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapInfo_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_MiniMapInfo(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_MiniMapInfo, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_MiniMapInfo)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapInfo_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_MiniMapInfo(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_MiniMapInfo, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_MiniMapInfo)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapInfo_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSWidgetHUD_MiniMapInfo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSWidgetHUD_MiniMapInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_MiniMapInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_MiniMapInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_MiniMapInfo(UELSSWidgetHUD_MiniMapInfo&&); \
	NO_API UELSSWidgetHUD_MiniMapInfo(const UELSSWidgetHUD_MiniMapInfo&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapInfo_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_MiniMapInfo(UELSSWidgetHUD_MiniMapInfo&&); \
	NO_API UELSSWidgetHUD_MiniMapInfo(const UELSSWidgetHUD_MiniMapInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_MiniMapInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_MiniMapInfo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSWidgetHUD_MiniMapInfo)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapInfo_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__KOMaterial_10() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapInfo, KOMaterial_10); } \
	FORCEINLINE static uint32 __PPO__KOMaterial_01() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapInfo, KOMaterial_01); } \
	FORCEINLINE static uint32 __PPO__AliveMaterial_10() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapInfo, AliveMaterial_10); } \
	FORCEINLINE static uint32 __PPO__AliveMaterial_01() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapInfo, AliveMaterial_01); } \
	FORCEINLINE static uint32 __PPO__ShrinkTimeMinMaterial_10() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapInfo, ShrinkTimeMinMaterial_10); } \
	FORCEINLINE static uint32 __PPO__ShrinkTimeMinMaterial_01() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapInfo, ShrinkTimeMinMaterial_01); } \
	FORCEINLINE static uint32 __PPO__ShrinkTimeSecMaterial_10() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapInfo, ShrinkTimeSecMaterial_10); } \
	FORCEINLINE static uint32 __PPO__ShrinkTimeSecMaterial_01() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapInfo, ShrinkTimeSecMaterial_01); } \
	FORCEINLINE static uint32 __PPO__ShrinkTimeWidget() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapInfo, ShrinkTimeWidget); } \
	FORCEINLINE static uint32 __PPO__KO10Widget() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapInfo, KO10Widget); } \
	FORCEINLINE static uint32 __PPO__Alive10Widget() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapInfo, Alive10Widget); } \
	FORCEINLINE static uint32 __PPO__Minutes() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapInfo, Minutes); } \
	FORCEINLINE static uint32 __PPO__Seconds() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapInfo, Seconds); } \
	FORCEINLINE static uint32 __PPO__IsShowShrinkTime() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapInfo, IsShowShrinkTime); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapInfo_h_9_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapInfo_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapInfo_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapInfo_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapInfo_h_11_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapInfo_h_11_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapInfo_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapInfo_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapInfo_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapInfo_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapInfo_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapInfo_h_11_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapInfo_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSWidgetHUD_MiniMapInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapInfo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
