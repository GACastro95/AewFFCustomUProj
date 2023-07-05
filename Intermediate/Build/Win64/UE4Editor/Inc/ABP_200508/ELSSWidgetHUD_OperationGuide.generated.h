// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESSOperationGuideExecute : uint8;
enum class EKeyMappingType : uint8;
#ifdef ABP_200508_ELSSWidgetHUD_OperationGuide_generated_h
#error "ELSSWidgetHUD_OperationGuide.generated.h already included, missing '#pragma once' in ELSSWidgetHUD_OperationGuide.h"
#endif
#define ABP_200508_ELSSWidgetHUD_OperationGuide_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OperationGuide_h_12_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OperationGuide_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetGuideFontAndButtonVisible); \
	DECLARE_FUNCTION(execSetOperationGuideType); \
	DECLARE_FUNCTION(execUpdateOperationGuide);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OperationGuide_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetGuideFontAndButtonVisible); \
	DECLARE_FUNCTION(execSetOperationGuideType); \
	DECLARE_FUNCTION(execUpdateOperationGuide);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OperationGuide_h_12_EVENT_PARMS \
	struct ELSSWidgetHUD_OperationGuide_eventSetGuardState_Parms \
	{ \
		bool InIsGuard; \
	}; \
	struct ELSSWidgetHUD_OperationGuide_eventSetGuideFont_Parms \
	{ \
		ESSOperationGuideExecute InType; \
	}; \
	struct ELSSWidgetHUD_OperationGuide_eventSetInteractMode_Parms \
	{ \
		bool InInteractMode; \
	}; \
	struct ELSSWidgetHUD_OperationGuide_eventSetKeyConfig_Parms \
	{ \
		EKeyMappingType InKeyMapType; \
		FName InMapName; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OperationGuide_h_12_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OperationGuide_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_OperationGuide(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_OperationGuide, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_OperationGuide)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OperationGuide_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_OperationGuide(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_OperationGuide, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_OperationGuide)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OperationGuide_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSWidgetHUD_OperationGuide(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSWidgetHUD_OperationGuide) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_OperationGuide); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_OperationGuide); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_OperationGuide(UELSSWidgetHUD_OperationGuide&&); \
	NO_API UELSSWidgetHUD_OperationGuide(const UELSSWidgetHUD_OperationGuide&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OperationGuide_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_OperationGuide(UELSSWidgetHUD_OperationGuide&&); \
	NO_API UELSSWidgetHUD_OperationGuide(const UELSSWidgetHUD_OperationGuide&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_OperationGuide); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_OperationGuide); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSWidgetHUD_OperationGuide)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OperationGuide_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FontArray() { return STRUCT_OFFSET(UELSSWidgetHUD_OperationGuide, FontArray); } \
	FORCEINLINE static uint32 __PPO__ButtonArray() { return STRUCT_OFFSET(UELSSWidgetHUD_OperationGuide, ButtonArray); } \
	FORCEINLINE static uint32 __PPO__NowOperationType() { return STRUCT_OFFSET(UELSSWidgetHUD_OperationGuide, NowOperationType); } \
	FORCEINLINE static uint32 __PPO__IsGuradState() { return STRUCT_OFFSET(UELSSWidgetHUD_OperationGuide, IsGuradState); } \
	FORCEINLINE static uint32 __PPO__IsInteractMode() { return STRUCT_OFFSET(UELSSWidgetHUD_OperationGuide, IsInteractMode); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OperationGuide_h_10_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OperationGuide_h_12_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OperationGuide_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OperationGuide_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OperationGuide_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OperationGuide_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OperationGuide_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OperationGuide_h_12_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OperationGuide_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OperationGuide_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OperationGuide_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OperationGuide_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OperationGuide_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OperationGuide_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OperationGuide_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OperationGuide_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSWidgetHUD_OperationGuide>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OperationGuide_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
