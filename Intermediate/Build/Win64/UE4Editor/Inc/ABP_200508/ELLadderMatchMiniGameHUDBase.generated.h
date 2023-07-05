// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDisplayButtonIconType : uint8;
#ifdef ABP_200508_ELLadderMatchMiniGameHUDBase_generated_h
#error "ELLadderMatchMiniGameHUDBase.generated.h already included, missing '#pragma once' in ELLadderMatchMiniGameHUDBase.h"
#endif
#define ABP_200508_ELLadderMatchMiniGameHUDBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameHUDBase_h_9_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameHUDBase_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCallFailedEvent); \
	DECLARE_FUNCTION(execCallSucceedEvent); \
	DECLARE_FUNCTION(execCallUnlockEvent);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameHUDBase_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallFailedEvent); \
	DECLARE_FUNCTION(execCallSucceedEvent); \
	DECLARE_FUNCTION(execCallUnlockEvent);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameHUDBase_h_9_EVENT_PARMS \
	struct ELLadderMatchMiniGameHUDBase_eventSetButtonA_Parms \
	{ \
		int32 PlayerIndex; \
		EDisplayButtonIconType ButtonIconType; \
	}; \
	struct ELLadderMatchMiniGameHUDBase_eventSetButtonB_Parms \
	{ \
		int32 PlayerIndex; \
		EDisplayButtonIconType ButtonIconType; \
	}; \
	struct ELLadderMatchMiniGameHUDBase_eventSetButtonX_Parms \
	{ \
		int32 PlayerIndex; \
		EDisplayButtonIconType ButtonIconType; \
	}; \
	struct ELLadderMatchMiniGameHUDBase_eventSetButtonY_Parms \
	{ \
		int32 PlayerIndex; \
		EDisplayButtonIconType ButtonIconType; \
	}; \
	struct ELLadderMatchMiniGameHUDBase_eventSetProgress_Parms \
	{ \
		int32 Step; \
		float Percent; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameHUDBase_h_9_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameHUDBase_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELLadderMatchMiniGameHUDBase(); \
	friend struct Z_Construct_UClass_UELLadderMatchMiniGameHUDBase_Statics; \
public: \
	DECLARE_CLASS(UELLadderMatchMiniGameHUDBase, UELUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELLadderMatchMiniGameHUDBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameHUDBase_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUELLadderMatchMiniGameHUDBase(); \
	friend struct Z_Construct_UClass_UELLadderMatchMiniGameHUDBase_Statics; \
public: \
	DECLARE_CLASS(UELLadderMatchMiniGameHUDBase, UELUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELLadderMatchMiniGameHUDBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameHUDBase_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELLadderMatchMiniGameHUDBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELLadderMatchMiniGameHUDBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELLadderMatchMiniGameHUDBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELLadderMatchMiniGameHUDBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELLadderMatchMiniGameHUDBase(UELLadderMatchMiniGameHUDBase&&); \
	NO_API UELLadderMatchMiniGameHUDBase(const UELLadderMatchMiniGameHUDBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameHUDBase_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELLadderMatchMiniGameHUDBase(UELLadderMatchMiniGameHUDBase&&); \
	NO_API UELLadderMatchMiniGameHUDBase(const UELLadderMatchMiniGameHUDBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELLadderMatchMiniGameHUDBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELLadderMatchMiniGameHUDBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELLadderMatchMiniGameHUDBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameHUDBase_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__String_A() { return STRUCT_OFFSET(UELLadderMatchMiniGameHUDBase, String_A); } \
	FORCEINLINE static uint32 __PPO__String_B() { return STRUCT_OFFSET(UELLadderMatchMiniGameHUDBase, String_B); } \
	FORCEINLINE static uint32 __PPO__String_X() { return STRUCT_OFFSET(UELLadderMatchMiniGameHUDBase, String_X); } \
	FORCEINLINE static uint32 __PPO__String_Y() { return STRUCT_OFFSET(UELLadderMatchMiniGameHUDBase, String_Y); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameHUDBase_h_7_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameHUDBase_h_9_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameHUDBase_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameHUDBase_h_9_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameHUDBase_h_9_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameHUDBase_h_9_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameHUDBase_h_9_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameHUDBase_h_9_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameHUDBase_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameHUDBase_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameHUDBase_h_9_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameHUDBase_h_9_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameHUDBase_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameHUDBase_h_9_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameHUDBase_h_9_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameHUDBase_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELLadderMatchMiniGameHUDBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameHUDBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
