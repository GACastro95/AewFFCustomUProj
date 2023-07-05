// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSSLogTextParam;
enum class ESSLogIconType : uint8;
class UTexture2D;
#ifdef ABP_200508_ELSSWidgetHUD_SSLogSet_generated_h
#error "ELSSWidgetHUD_SSLogSet.generated.h already included, missing '#pragma once' in ELSSWidgetHUD_SSLogSet.h"
#endif
#define ABP_200508_ELSSWidgetHUD_SSLogSet_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLogSet_h_14_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLogSet_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddMultiColorLogMessage); \
	DECLARE_FUNCTION(execDeleteLogTextMessage); \
	DECLARE_FUNCTION(execGetLogIcon); \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execResetAllLogs); \
	DECLARE_FUNCTION(execUpdateLogArrayPos); \
	DECLARE_FUNCTION(execUpdateLogShowState);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLogSet_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddMultiColorLogMessage); \
	DECLARE_FUNCTION(execDeleteLogTextMessage); \
	DECLARE_FUNCTION(execGetLogIcon); \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execResetAllLogs); \
	DECLARE_FUNCTION(execUpdateLogArrayPos); \
	DECLARE_FUNCTION(execUpdateLogShowState);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLogSet_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_SSLogSet(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_SSLogSet, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_SSLogSet)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLogSet_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_SSLogSet(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_SSLogSet, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_SSLogSet)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLogSet_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSWidgetHUD_SSLogSet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSWidgetHUD_SSLogSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_SSLogSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_SSLogSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_SSLogSet(UELSSWidgetHUD_SSLogSet&&); \
	NO_API UELSSWidgetHUD_SSLogSet(const UELSSWidgetHUD_SSLogSet&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLogSet_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_SSLogSet(UELSSWidgetHUD_SSLogSet&&); \
	NO_API UELSSWidgetHUD_SSLogSet(const UELSSWidgetHUD_SSLogSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_SSLogSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_SSLogSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSWidgetHUD_SSLogSet)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLogSet_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LogArray() { return STRUCT_OFFSET(UELSSWidgetHUD_SSLogSet, LogArray); } \
	FORCEINLINE static uint32 __PPO__IconArrays() { return STRUCT_OFFSET(UELSSWidgetHUD_SSLogSet, IconArrays); } \
	FORCEINLINE static uint32 __PPO__LogMessageShowTimeElapsed() { return STRUCT_OFFSET(UELSSWidgetHUD_SSLogSet, LogMessageShowTimeElapsed); } \
	FORCEINLINE static uint32 __PPO__MAXLOGSHOWTIME() { return STRUCT_OFFSET(UELSSWidgetHUD_SSLogSet, MAXLOGSHOWTIME); } \
	FORCEINLINE static uint32 __PPO__LogSetVerticalBox() { return STRUCT_OFFSET(UELSSWidgetHUD_SSLogSet, LogSetVerticalBox); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLogSet_h_12_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLogSet_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLogSet_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLogSet_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLogSet_h_14_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLogSet_h_14_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLogSet_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLogSet_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLogSet_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLogSet_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLogSet_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLogSet_h_14_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLogSet_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSWidgetHUD_SSLogSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLogSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
