// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
enum class EnVisualizeMode : uint8;
class UAnimMontage;
struct FWrestlerIDInfo;
enum class EnPreviewMenu : uint8;
#ifdef ELITE_ModelApprovalPreviewManager_generated_h
#error "ModelApprovalPreviewManager.generated.h already included, missing '#pragma once' in ModelApprovalPreviewManager.h"
#endif
#define ELITE_ModelApprovalPreviewManager_generated_h

#define AewFFCustomUProj_Source_ELITE_Public_ModelApprovalPreviewManager_h_17_SPARSE_DATA
#define AewFFCustomUProj_Source_ELITE_Public_ModelApprovalPreviewManager_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAdjustWrestlerInterval); \
	DECLARE_FUNCTION(execChangeBox); \
	DECLARE_FUNCTION(execChangeCameraTarget); \
	DECLARE_FUNCTION(execChangeDrawWrestlerNum); \
	DECLARE_FUNCTION(execChangeLight); \
	DECLARE_FUNCTION(execChangeViewWireframe); \
	DECLARE_FUNCTION(execChangeVisibleSwitchingObject); \
	DECLARE_FUNCTION(execChangeVisualizeMode); \
	DECLARE_FUNCTION(execDeleteDirectryFiles); \
	DECLARE_FUNCTION(execDisplayInputMode); \
	DECLARE_FUNCTION(execFindAvailableNumberByFile); \
	DECLARE_FUNCTION(execGetPreviewCharacterList); \
	DECLARE_FUNCTION(execGetVisualizeMode); \
	DECLARE_FUNCTION(execGetWrestlerIntervalMax); \
	DECLARE_FUNCTION(execGetWrestlerIntervalMin); \
	DECLARE_FUNCTION(execPreChangeWrestler); \
	DECLARE_FUNCTION(execRevertToDefaultNotificatins); \
	DECLARE_FUNCTION(execSetAnimMontageToCharacters); \
	DECLARE_FUNCTION(execSetupWrestlerList); \
	DECLARE_FUNCTION(execSetWrestlerInterval); \
	DECLARE_FUNCTION(execToggleShowMenu);


#define AewFFCustomUProj_Source_ELITE_Public_ModelApprovalPreviewManager_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAdjustWrestlerInterval); \
	DECLARE_FUNCTION(execChangeBox); \
	DECLARE_FUNCTION(execChangeCameraTarget); \
	DECLARE_FUNCTION(execChangeDrawWrestlerNum); \
	DECLARE_FUNCTION(execChangeLight); \
	DECLARE_FUNCTION(execChangeViewWireframe); \
	DECLARE_FUNCTION(execChangeVisibleSwitchingObject); \
	DECLARE_FUNCTION(execChangeVisualizeMode); \
	DECLARE_FUNCTION(execDeleteDirectryFiles); \
	DECLARE_FUNCTION(execDisplayInputMode); \
	DECLARE_FUNCTION(execFindAvailableNumberByFile); \
	DECLARE_FUNCTION(execGetPreviewCharacterList); \
	DECLARE_FUNCTION(execGetVisualizeMode); \
	DECLARE_FUNCTION(execGetWrestlerIntervalMax); \
	DECLARE_FUNCTION(execGetWrestlerIntervalMin); \
	DECLARE_FUNCTION(execPreChangeWrestler); \
	DECLARE_FUNCTION(execRevertToDefaultNotificatins); \
	DECLARE_FUNCTION(execSetAnimMontageToCharacters); \
	DECLARE_FUNCTION(execSetupWrestlerList); \
	DECLARE_FUNCTION(execSetWrestlerInterval); \
	DECLARE_FUNCTION(execToggleShowMenu);


#define AewFFCustomUProj_Source_ELITE_Public_ModelApprovalPreviewManager_h_17_EVENT_PARMS \
	struct ModelApprovalPreviewManager_eventChangeWrestler_Parms \
	{ \
		int32 WrestlerID; \
		ACharacter* Character; \
		int32 CostumeNo; \
		bool bEntCostume; \
	}; \
	struct ModelApprovalPreviewManager_eventSetShowMailWindow_Parms \
	{ \
		bool bShowMenu; \
	};


#define AewFFCustomUProj_Source_ELITE_Public_ModelApprovalPreviewManager_h_17_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ELITE_Public_ModelApprovalPreviewManager_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAModelApprovalPreviewManager(); \
	friend struct Z_Construct_UClass_AModelApprovalPreviewManager_Statics; \
public: \
	DECLARE_CLASS(AModelApprovalPreviewManager, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ELITE"), NO_API) \
	DECLARE_SERIALIZER(AModelApprovalPreviewManager)


#define AewFFCustomUProj_Source_ELITE_Public_ModelApprovalPreviewManager_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAModelApprovalPreviewManager(); \
	friend struct Z_Construct_UClass_AModelApprovalPreviewManager_Statics; \
public: \
	DECLARE_CLASS(AModelApprovalPreviewManager, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ELITE"), NO_API) \
	DECLARE_SERIALIZER(AModelApprovalPreviewManager)


#define AewFFCustomUProj_Source_ELITE_Public_ModelApprovalPreviewManager_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AModelApprovalPreviewManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AModelApprovalPreviewManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AModelApprovalPreviewManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AModelApprovalPreviewManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AModelApprovalPreviewManager(AModelApprovalPreviewManager&&); \
	NO_API AModelApprovalPreviewManager(const AModelApprovalPreviewManager&); \
public:


#define AewFFCustomUProj_Source_ELITE_Public_ModelApprovalPreviewManager_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AModelApprovalPreviewManager(AModelApprovalPreviewManager&&); \
	NO_API AModelApprovalPreviewManager(const AModelApprovalPreviewManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AModelApprovalPreviewManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AModelApprovalPreviewManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AModelApprovalPreviewManager)


#define AewFFCustomUProj_Source_ELITE_Public_ModelApprovalPreviewManager_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PreviewMenu() { return STRUCT_OFFSET(AModelApprovalPreviewManager, PreviewMenu); } \
	FORCEINLINE static uint32 __PPO__MailMenu() { return STRUCT_OFFSET(AModelApprovalPreviewManager, MailMenu); } \
	FORCEINLINE static uint32 __PPO__ScreenShotParam() { return STRUCT_OFFSET(AModelApprovalPreviewManager, ScreenShotParam); } \
	FORCEINLINE static uint32 __PPO__m_pcCharacterList() { return STRUCT_OFFSET(AModelApprovalPreviewManager, m_pcCharacterList); } \
	FORCEINLINE static uint32 __PPO__m_sCharacterMax() { return STRUCT_OFFSET(AModelApprovalPreviewManager, m_sCharacterMax); } \
	FORCEINLINE static uint32 __PPO__m_fWrestlerIntervalMin() { return STRUCT_OFFSET(AModelApprovalPreviewManager, m_fWrestlerIntervalMin); } \
	FORCEINLINE static uint32 __PPO__m_fWrestlerIntervalMax() { return STRUCT_OFFSET(AModelApprovalPreviewManager, m_fWrestlerIntervalMax); }


#define AewFFCustomUProj_Source_ELITE_Public_ModelApprovalPreviewManager_h_15_PROLOG \
	AewFFCustomUProj_Source_ELITE_Public_ModelApprovalPreviewManager_h_17_EVENT_PARMS


#define AewFFCustomUProj_Source_ELITE_Public_ModelApprovalPreviewManager_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Public_ModelApprovalPreviewManager_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Public_ModelApprovalPreviewManager_h_17_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Public_ModelApprovalPreviewManager_h_17_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Public_ModelApprovalPreviewManager_h_17_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Public_ModelApprovalPreviewManager_h_17_INCLASS \
	AewFFCustomUProj_Source_ELITE_Public_ModelApprovalPreviewManager_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Public_ModelApprovalPreviewManager_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Public_ModelApprovalPreviewManager_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Public_ModelApprovalPreviewManager_h_17_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Public_ModelApprovalPreviewManager_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Public_ModelApprovalPreviewManager_h_17_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Public_ModelApprovalPreviewManager_h_17_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Public_ModelApprovalPreviewManager_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELITE_API UClass* StaticClass<class AModelApprovalPreviewManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Public_ModelApprovalPreviewManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
