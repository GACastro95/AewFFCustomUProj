// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UELSSGameMatchMakeSystem;
struct FSSWrestlerMovePresetParam;
struct FSSPlayerEquipSettings;
struct FPingData;
struct FRequest_ErrSetupData;
enum class eSSModeAPIType : uint8;
enum class eSSRequestResultType : uint8;
struct FELSSFlexMatchMakeStop_ResponseData;
struct FELSSFlexMatchMakeStart_ResponseData;
struct FELSSFlexMatchMakeStatus_ResponseData;
#ifdef ABP_200508_ELSSGameMatchMakeSystem_generated_h
#error "ELSSGameMatchMakeSystem.generated.h already included, missing '#pragma once' in ELSSGameMatchMakeSystem.h"
#endif
#define ABP_200508_ELSSGameMatchMakeSystem_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMatchMakeSystem_h_23_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMatchMakeSystem_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanStopMatchMake); \
	DECLARE_FUNCTION(execCreateGameMatchMakeSystem); \
	DECLARE_FUNCTION(execCreateJoinGameServerData); \
	DECLARE_FUNCTION(execDebugGetOverrideRegionInfo); \
	DECLARE_FUNCTION(execErrorCommonEvent); \
	DECLARE_FUNCTION(execErrorRetryEvent); \
	DECLARE_FUNCTION(execForceMatchEnd); \
	DECLARE_FUNCTION(execIsMatchMakeCheck); \
	DECLARE_FUNCTION(execPreviewMatchRequestData); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execRestart); \
	DECLARE_FUNCTION(execRestartMatchMake); \
	DECLARE_FUNCTION(execRetryMatchMake); \
	DECLARE_FUNCTION(execSSWebAPI_FlexMatchCancelResult); \
	DECLARE_FUNCTION(execSSWebAPI_FlexMatchStartResult); \
	DECLARE_FUNCTION(execSSWebAPI_FlexMatchStatusResult); \
	DECLARE_FUNCTION(execStartMatchMakeRequest); \
	DECLARE_FUNCTION(execStopMatchMakeRequest); \
	DECLARE_FUNCTION(execUpdateMatchMakeRequest);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMatchMakeSystem_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanStopMatchMake); \
	DECLARE_FUNCTION(execCreateGameMatchMakeSystem); \
	DECLARE_FUNCTION(execCreateJoinGameServerData); \
	DECLARE_FUNCTION(execDebugGetOverrideRegionInfo); \
	DECLARE_FUNCTION(execErrorCommonEvent); \
	DECLARE_FUNCTION(execErrorRetryEvent); \
	DECLARE_FUNCTION(execForceMatchEnd); \
	DECLARE_FUNCTION(execIsMatchMakeCheck); \
	DECLARE_FUNCTION(execPreviewMatchRequestData); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execRestart); \
	DECLARE_FUNCTION(execRestartMatchMake); \
	DECLARE_FUNCTION(execRetryMatchMake); \
	DECLARE_FUNCTION(execSSWebAPI_FlexMatchCancelResult); \
	DECLARE_FUNCTION(execSSWebAPI_FlexMatchStartResult); \
	DECLARE_FUNCTION(execSSWebAPI_FlexMatchStatusResult); \
	DECLARE_FUNCTION(execStartMatchMakeRequest); \
	DECLARE_FUNCTION(execStopMatchMakeRequest); \
	DECLARE_FUNCTION(execUpdateMatchMakeRequest);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMatchMakeSystem_h_23_EVENT_PARMS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMatchMakeSystem_h_23_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMatchMakeSystem_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSGameMatchMakeSystem(); \
	friend struct Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics; \
public: \
	DECLARE_CLASS(UELSSGameMatchMakeSystem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSGameMatchMakeSystem)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMatchMakeSystem_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUELSSGameMatchMakeSystem(); \
	friend struct Z_Construct_UClass_UELSSGameMatchMakeSystem_Statics; \
public: \
	DECLARE_CLASS(UELSSGameMatchMakeSystem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSGameMatchMakeSystem)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMatchMakeSystem_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSGameMatchMakeSystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSGameMatchMakeSystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSGameMatchMakeSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSGameMatchMakeSystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSGameMatchMakeSystem(UELSSGameMatchMakeSystem&&); \
	NO_API UELSSGameMatchMakeSystem(const UELSSGameMatchMakeSystem&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMatchMakeSystem_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSGameMatchMakeSystem(UELSSGameMatchMakeSystem&&); \
	NO_API UELSSGameMatchMakeSystem(const UELSSGameMatchMakeSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSGameMatchMakeSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSGameMatchMakeSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSGameMatchMakeSystem)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMatchMakeSystem_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__onSSGameMatchMakeErrorEvent() { return STRUCT_OFFSET(UELSSGameMatchMakeSystem, onSSGameMatchMakeErrorEvent); } \
	FORCEINLINE static uint32 __PPO__ssMatchRequestRef() { return STRUCT_OFFSET(UELSSGameMatchMakeSystem, ssMatchRequestRef); } \
	FORCEINLINE static uint32 __PPO__ssCancelRequestRef() { return STRUCT_OFFSET(UELSSGameMatchMakeSystem, ssCancelRequestRef); } \
	FORCEINLINE static uint32 __PPO__CurrentTicketId() { return STRUCT_OFFSET(UELSSGameMatchMakeSystem, CurrentTicketId); } \
	FORCEINLINE static uint32 __PPO__RequestedCancel() { return STRUCT_OFFSET(UELSSGameMatchMakeSystem, RequestedCancel); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMatchMakeSystem_h_21_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMatchMakeSystem_h_23_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMatchMakeSystem_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMatchMakeSystem_h_23_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMatchMakeSystem_h_23_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMatchMakeSystem_h_23_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMatchMakeSystem_h_23_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMatchMakeSystem_h_23_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMatchMakeSystem_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMatchMakeSystem_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMatchMakeSystem_h_23_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMatchMakeSystem_h_23_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMatchMakeSystem_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMatchMakeSystem_h_23_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMatchMakeSystem_h_23_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMatchMakeSystem_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSGameMatchMakeSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMatchMakeSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
