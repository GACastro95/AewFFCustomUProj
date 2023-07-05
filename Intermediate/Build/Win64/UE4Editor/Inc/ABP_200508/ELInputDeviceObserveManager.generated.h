// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EInputDeviceGameFlowType : uint8;
class UObject;
class APlayerController;
struct FColor;
#ifdef ABP_200508_ELInputDeviceObserveManager_generated_h
#error "ELInputDeviceObserveManager.generated.h already included, missing '#pragma once' in ELInputDeviceObserveManager.h"
#endif
#define ABP_200508_ELInputDeviceObserveManager_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELInputDeviceObserveManager_h_17_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELInputDeviceObserveManager_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddJoinLocalExhibition); \
	DECLARE_FUNCTION(execBackupOldDeviceInfo); \
	DECLARE_FUNCTION(execChangeGameFlowStatus); \
	DECLARE_FUNCTION(execCheckExistHostController); \
	DECLARE_FUNCTION(execCheckLocalConnectedDevice); \
	DECLARE_FUNCTION(execClearExhibitionPlayerIndexMap); \
	DECLARE_FUNCTION(execClearGameFlowStatus); \
	DECLARE_FUNCTION(execClearJoinLocalExhibition); \
	DECLARE_FUNCTION(execEndCheckConnectionStatus); \
	DECLARE_FUNCTION(execGetBindControllerUserName); \
	DECLARE_FUNCTION(execGetBindControllerUserNameList); \
	DECLARE_FUNCTION(execGetCurrentControllerIds); \
	DECLARE_FUNCTION(execGetCurrentGameFlowStatus); \
	DECLARE_FUNCTION(execGetExhibitionPlayerIndex); \
	DECLARE_FUNCTION(execGetGameHostPadID); \
	DECLARE_FUNCTION(execGetInputControllerNum); \
	DECLARE_FUNCTION(execGetJoinedLocalExhibitionControllerIdList); \
	DECLARE_FUNCTION(execIsActiveNotifyDisconnectedDialog); \
	DECLARE_FUNCTION(execIsAssignedExhibitionPlayerIndex); \
	DECLARE_FUNCTION(execIsCheckingConnectionStatus); \
	DECLARE_FUNCTION(execIsConnectedDevice); \
	DECLARE_FUNCTION(execIsConnectedHostPad); \
	DECLARE_FUNCTION(execIsHandheldStyle); \
	DECLARE_FUNCTION(execIsJoyCon); \
	DECLARE_FUNCTION(execOnClosedDisconnectedDialog); \
	DECLARE_FUNCTION(execOnManipulateCursor); \
	DECLARE_FUNCTION(execOnManipulateDecideBtn); \
	DECLARE_FUNCTION(execOnOpenedDisconnectedDialog); \
	DECLARE_FUNCTION(execSetAssignHostPad); \
	DECLARE_FUNCTION(execSetDecideMatchControllerID); \
	DECLARE_FUNCTION(execSetExhibitionPlayerIndex); \
	DECLARE_FUNCTION(execSetLightbarColor); \
	DECLARE_FUNCTION(execSetManipulateKeyboardeMode); \
	DECLARE_FUNCTION(execSetShowDisconnectedDeviceId); \
	DECLARE_FUNCTION(execStartCheckConnectionStatus); \
	DECLARE_FUNCTION(execUpdateInputDeviceMap);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELInputDeviceObserveManager_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddJoinLocalExhibition); \
	DECLARE_FUNCTION(execBackupOldDeviceInfo); \
	DECLARE_FUNCTION(execChangeGameFlowStatus); \
	DECLARE_FUNCTION(execCheckExistHostController); \
	DECLARE_FUNCTION(execCheckLocalConnectedDevice); \
	DECLARE_FUNCTION(execClearExhibitionPlayerIndexMap); \
	DECLARE_FUNCTION(execClearGameFlowStatus); \
	DECLARE_FUNCTION(execClearJoinLocalExhibition); \
	DECLARE_FUNCTION(execEndCheckConnectionStatus); \
	DECLARE_FUNCTION(execGetBindControllerUserName); \
	DECLARE_FUNCTION(execGetBindControllerUserNameList); \
	DECLARE_FUNCTION(execGetCurrentControllerIds); \
	DECLARE_FUNCTION(execGetCurrentGameFlowStatus); \
	DECLARE_FUNCTION(execGetExhibitionPlayerIndex); \
	DECLARE_FUNCTION(execGetGameHostPadID); \
	DECLARE_FUNCTION(execGetInputControllerNum); \
	DECLARE_FUNCTION(execGetJoinedLocalExhibitionControllerIdList); \
	DECLARE_FUNCTION(execIsActiveNotifyDisconnectedDialog); \
	DECLARE_FUNCTION(execIsAssignedExhibitionPlayerIndex); \
	DECLARE_FUNCTION(execIsCheckingConnectionStatus); \
	DECLARE_FUNCTION(execIsConnectedDevice); \
	DECLARE_FUNCTION(execIsConnectedHostPad); \
	DECLARE_FUNCTION(execIsHandheldStyle); \
	DECLARE_FUNCTION(execIsJoyCon); \
	DECLARE_FUNCTION(execOnClosedDisconnectedDialog); \
	DECLARE_FUNCTION(execOnManipulateCursor); \
	DECLARE_FUNCTION(execOnManipulateDecideBtn); \
	DECLARE_FUNCTION(execOnOpenedDisconnectedDialog); \
	DECLARE_FUNCTION(execSetAssignHostPad); \
	DECLARE_FUNCTION(execSetDecideMatchControllerID); \
	DECLARE_FUNCTION(execSetExhibitionPlayerIndex); \
	DECLARE_FUNCTION(execSetLightbarColor); \
	DECLARE_FUNCTION(execSetManipulateKeyboardeMode); \
	DECLARE_FUNCTION(execSetShowDisconnectedDeviceId); \
	DECLARE_FUNCTION(execStartCheckConnectionStatus); \
	DECLARE_FUNCTION(execUpdateInputDeviceMap);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELInputDeviceObserveManager_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELInputDeviceObserveManager(); \
	friend struct Z_Construct_UClass_UELInputDeviceObserveManager_Statics; \
public: \
	DECLARE_CLASS(UELInputDeviceObserveManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELInputDeviceObserveManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELInputDeviceObserveManager_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUELInputDeviceObserveManager(); \
	friend struct Z_Construct_UClass_UELInputDeviceObserveManager_Statics; \
public: \
	DECLARE_CLASS(UELInputDeviceObserveManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELInputDeviceObserveManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELInputDeviceObserveManager_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELInputDeviceObserveManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELInputDeviceObserveManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELInputDeviceObserveManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELInputDeviceObserveManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELInputDeviceObserveManager(UELInputDeviceObserveManager&&); \
	NO_API UELInputDeviceObserveManager(const UELInputDeviceObserveManager&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELInputDeviceObserveManager_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELInputDeviceObserveManager(UELInputDeviceObserveManager&&); \
	NO_API UELInputDeviceObserveManager(const UELInputDeviceObserveManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELInputDeviceObserveManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELInputDeviceObserveManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELInputDeviceObserveManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELInputDeviceObserveManager_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_InputDeviceMap() { return STRUCT_OFFSET(UELInputDeviceObserveManager, m_InputDeviceMap); } \
	FORCEINLINE static uint32 __PPO__m_DrawDeviceMap() { return STRUCT_OFFSET(UELInputDeviceObserveManager, m_DrawDeviceMap); } \
	FORCEINLINE static uint32 __PPO__m_ExhibitionPlayerIndexMap() { return STRUCT_OFFSET(UELInputDeviceObserveManager, m_ExhibitionPlayerIndexMap); } \
	FORCEINLINE static uint32 __PPO__m_JoinedLocalExhibitionControllerIdList() { return STRUCT_OFFSET(UELInputDeviceObserveManager, m_JoinedLocalExhibitionControllerIdList); } \
	FORCEINLINE static uint32 __PPO__m_ReserveNotifyDisconnectedInputDeviceMap() { return STRUCT_OFFSET(UELInputDeviceObserveManager, m_ReserveNotifyDisconnectedInputDeviceMap); } \
	FORCEINLINE static uint32 __PPO__m_ReserveNotifyDisconnectedHostController() { return STRUCT_OFFSET(UELInputDeviceObserveManager, m_ReserveNotifyDisconnectedHostController); } \
	FORCEINLINE static uint32 __PPO__m_NotifyGamepadDisconnectedActor() { return STRUCT_OFFSET(UELInputDeviceObserveManager, m_NotifyGamepadDisconnectedActor); } \
	FORCEINLINE static uint32 __PPO__m_GameFlowType() { return STRUCT_OFFSET(UELInputDeviceObserveManager, m_GameFlowType); } \
	FORCEINLINE static uint32 __PPO__m_GameHostControllerID() { return STRUCT_OFFSET(UELInputDeviceObserveManager, m_GameHostControllerID); } \
	FORCEINLINE static uint32 __PPO__m_ManipulateKeyboardeMode() { return STRUCT_OFFSET(UELInputDeviceObserveManager, m_ManipulateKeyboardeMode); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELInputDeviceObserveManager_h_15_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELInputDeviceObserveManager_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELInputDeviceObserveManager_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELInputDeviceObserveManager_h_17_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELInputDeviceObserveManager_h_17_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELInputDeviceObserveManager_h_17_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELInputDeviceObserveManager_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELInputDeviceObserveManager_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELInputDeviceObserveManager_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELInputDeviceObserveManager_h_17_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELInputDeviceObserveManager_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELInputDeviceObserveManager_h_17_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELInputDeviceObserveManager_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELInputDeviceObserveManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELInputDeviceObserveManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
