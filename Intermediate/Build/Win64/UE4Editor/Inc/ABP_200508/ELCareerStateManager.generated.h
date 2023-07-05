// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UELMenuWidgetBase;
struct FCareerResultData;
class UTexture2D;
enum class ECareerDialogType : uint8;
#ifdef ABP_200508_ELCareerStateManager_generated_h
#error "ELCareerStateManager.generated.h already included, missing '#pragma once' in ELCareerStateManager.h"
#endif
#define ABP_200508_ELCareerStateManager_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStateManager_h_16_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStateManager_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheckMatchOperationFromWidget); \
	DECLARE_FUNCTION(execCheckState); \
	DECLARE_FUNCTION(execCheckState_Cancel); \
	DECLARE_FUNCTION(execGetCareerResultData); \
	DECLARE_FUNCTION(execIsSchedule_Ending);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStateManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckMatchOperationFromWidget); \
	DECLARE_FUNCTION(execCheckState); \
	DECLARE_FUNCTION(execCheckState_Cancel); \
	DECLARE_FUNCTION(execGetCareerResultData); \
	DECLARE_FUNCTION(execIsSchedule_Ending);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStateManager_h_16_EVENT_PARMS \
	struct ELCareerStateManager_eventOpenDialog_ItemGet_Parms \
	{ \
		TSoftObjectPtr<UTexture2D> Texture; \
		FName HeaderText; \
		FName InformationText; \
		ECareerDialogType ECareerDialogType; \
		int32 InfomationParam; \
	}; \
	struct ELCareerStateManager_eventOpenDialog_Message_Parms \
	{ \
		FName InformationText; \
	}; \
	struct ELCareerStateManager_eventOpenDialog_Tutorial_Parms \
	{ \
		FName DispTutorial; \
	}; \
	struct ELCareerStateManager_eventOpenDialog_YesNo_Parms \
	{ \
		ECareerDialogType ECareerDialogType; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStateManager_h_16_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStateManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELCareerStateManager(); \
	friend struct Z_Construct_UClass_AELCareerStateManager_Statics; \
public: \
	DECLARE_CLASS(AELCareerStateManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELCareerStateManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStateManager_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAELCareerStateManager(); \
	friend struct Z_Construct_UClass_AELCareerStateManager_Statics; \
public: \
	DECLARE_CLASS(AELCareerStateManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELCareerStateManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStateManager_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELCareerStateManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELCareerStateManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELCareerStateManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELCareerStateManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELCareerStateManager(AELCareerStateManager&&); \
	NO_API AELCareerStateManager(const AELCareerStateManager&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStateManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELCareerStateManager(AELCareerStateManager&&); \
	NO_API AELCareerStateManager(const AELCareerStateManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELCareerStateManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELCareerStateManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELCareerStateManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStateManager_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_ELGameInstance() { return STRUCT_OFFSET(AELCareerStateManager, m_ELGameInstance); } \
	FORCEINLINE static uint32 __PPO__m_pEventComponent() { return STRUCT_OFFSET(AELCareerStateManager, m_pEventComponent); } \
	FORCEINLINE static uint32 __PPO__TShirtDataTable() { return STRUCT_OFFSET(AELCareerStateManager, TShirtDataTable); } \
	FORCEINLINE static uint32 __PPO__SpecialRewardDataTable() { return STRUCT_OFFSET(AELCareerStateManager, SpecialRewardDataTable); } \
	FORCEINLINE static uint32 __PPO__GotAEWCashDataTable() { return STRUCT_OFFSET(AELCareerStateManager, GotAEWCashDataTable); } \
	FORCEINLINE static uint32 __PPO__CareerResultDataTable() { return STRUCT_OFFSET(AELCareerStateManager, CareerResultDataTable); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStateManager_h_14_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStateManager_h_16_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStateManager_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStateManager_h_16_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStateManager_h_16_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStateManager_h_16_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStateManager_h_16_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStateManager_h_16_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStateManager_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStateManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStateManager_h_16_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStateManager_h_16_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStateManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStateManager_h_16_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStateManager_h_16_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStateManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELCareerStateManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStateManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
