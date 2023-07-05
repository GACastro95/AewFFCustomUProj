// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector2D;
class APlayerController;
#ifdef ABP_200508_ELSSWidgetHUD_OnlineID_generated_h
#error "ELSSWidgetHUD_OnlineID.generated.h already included, missing '#pragma once' in ELSSWidgetHUD_OnlineID.h"
#endif
#define ABP_200508_ELSSWidgetHUD_OnlineID_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OnlineID_h_14_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OnlineID_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTargetActor); \
	DECLARE_FUNCTION(execIsValidScreenPos); \
	DECLARE_FUNCTION(execSetCarrotMedal); \
	DECLARE_FUNCTION(execSetTargetActorandOnlineID); \
	DECLARE_FUNCTION(execSetVisibleText); \
	DECLARE_FUNCTION(execShowOff); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execUpdatePosAndVisible);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OnlineID_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTargetActor); \
	DECLARE_FUNCTION(execIsValidScreenPos); \
	DECLARE_FUNCTION(execSetCarrotMedal); \
	DECLARE_FUNCTION(execSetTargetActorandOnlineID); \
	DECLARE_FUNCTION(execSetVisibleText); \
	DECLARE_FUNCTION(execShowOff); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execUpdatePosAndVisible);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OnlineID_h_14_EVENT_PARMS \
	struct ELSSWidgetHUD_OnlineID_eventInit_Parms \
	{ \
		APlayerController* NewPlayerController; \
	}; \
	struct ELSSWidgetHUD_OnlineID_eventSetOnlineID_Parms \
	{ \
		FString InOnlineID; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OnlineID_h_14_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OnlineID_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_OnlineID(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_OnlineID, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_OnlineID)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OnlineID_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_OnlineID(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_OnlineID, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_OnlineID)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OnlineID_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSWidgetHUD_OnlineID(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSWidgetHUD_OnlineID) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_OnlineID); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_OnlineID); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_OnlineID(UELSSWidgetHUD_OnlineID&&); \
	NO_API UELSSWidgetHUD_OnlineID(const UELSSWidgetHUD_OnlineID&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OnlineID_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_OnlineID(UELSSWidgetHUD_OnlineID&&); \
	NO_API UELSSWidgetHUD_OnlineID(const UELSSWidgetHUD_OnlineID&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_OnlineID); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_OnlineID); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSWidgetHUD_OnlineID)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OnlineID_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TextWidget() { return STRUCT_OFFSET(UELSSWidgetHUD_OnlineID, TextWidget); } \
	FORCEINLINE static uint32 __PPO__MedalWidget() { return STRUCT_OFFSET(UELSSWidgetHUD_OnlineID, MedalWidget); } \
	FORCEINLINE static uint32 __PPO__TargetActor() { return STRUCT_OFFSET(UELSSWidgetHUD_OnlineID, TargetActor); } \
	FORCEINLINE static uint32 __PPO__PlayerController() { return STRUCT_OFFSET(UELSSWidgetHUD_OnlineID, PlayerController); } \
	FORCEINLINE static uint32 __PPO__Offset() { return STRUCT_OFFSET(UELSSWidgetHUD_OnlineID, Offset); } \
	FORCEINLINE static uint32 __PPO__ActorOffset() { return STRUCT_OFFSET(UELSSWidgetHUD_OnlineID, ActorOffset); } \
	FORCEINLINE static uint32 __PPO__tmpOnlineID() { return STRUCT_OFFSET(UELSSWidgetHUD_OnlineID, tmpOnlineID); } \
	FORCEINLINE static uint32 __PPO__Validratio() { return STRUCT_OFFSET(UELSSWidgetHUD_OnlineID, Validratio); } \
	FORCEINLINE static uint32 __PPO__DoneFirstVisible() { return STRUCT_OFFSET(UELSSWidgetHUD_OnlineID, DoneFirstVisible); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OnlineID_h_12_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OnlineID_h_14_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OnlineID_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OnlineID_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OnlineID_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OnlineID_h_14_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OnlineID_h_14_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OnlineID_h_14_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OnlineID_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OnlineID_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OnlineID_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OnlineID_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OnlineID_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OnlineID_h_14_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OnlineID_h_14_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OnlineID_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSWidgetHUD_OnlineID>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_OnlineID_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
