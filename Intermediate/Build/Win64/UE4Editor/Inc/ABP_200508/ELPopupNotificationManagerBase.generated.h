// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPopupOnlineStatusType : uint8;
struct FPopupOnlineChatMessage;
struct FPopupOnlineStatus;
#ifdef ABP_200508_ELPopupNotificationManagerBase_generated_h
#error "ELPopupNotificationManagerBase.generated.h already included, missing '#pragma once' in ELPopupNotificationManagerBase.h"
#endif
#define ABP_200508_ELPopupNotificationManagerBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELPopupNotificationManagerBase_h_11_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELPopupNotificationManagerBase_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeExecutePopup); \
	DECLARE_FUNCTION(execCheckNextPopup); \
	DECLARE_FUNCTION(execIsExecutePopup); \
	DECLARE_FUNCTION(execRequestPopup_ChallengeCompleted); \
	DECLARE_FUNCTION(execRequestPopup_ChatMessage); \
	DECLARE_FUNCTION(execRequestPopup_Online);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPopupNotificationManagerBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeExecutePopup); \
	DECLARE_FUNCTION(execCheckNextPopup); \
	DECLARE_FUNCTION(execIsExecutePopup); \
	DECLARE_FUNCTION(execRequestPopup_ChallengeCompleted); \
	DECLARE_FUNCTION(execRequestPopup_ChatMessage); \
	DECLARE_FUNCTION(execRequestPopup_Online);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPopupNotificationManagerBase_h_11_EVENT_PARMS \
	struct ELPopupNotificationManagerBase_eventOnStartChallengeCompletedPopup_Parms \
	{ \
		int32 _challengeId; \
	}; \
	struct ELPopupNotificationManagerBase_eventOnStartChatMessagePopup_Parms \
	{ \
		FPopupOnlineChatMessage _chatMessage; \
	}; \
	struct ELPopupNotificationManagerBase_eventOnStartOnlinePopup_Parms \
	{ \
		FPopupOnlineStatus _onlineStatus; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPopupNotificationManagerBase_h_11_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELPopupNotificationManagerBase_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELPopupNotificationManagerBase(); \
	friend struct Z_Construct_UClass_UELPopupNotificationManagerBase_Statics; \
public: \
	DECLARE_CLASS(UELPopupNotificationManagerBase, USingletonBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELPopupNotificationManagerBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPopupNotificationManagerBase_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUELPopupNotificationManagerBase(); \
	friend struct Z_Construct_UClass_UELPopupNotificationManagerBase_Statics; \
public: \
	DECLARE_CLASS(UELPopupNotificationManagerBase, USingletonBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELPopupNotificationManagerBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPopupNotificationManagerBase_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELPopupNotificationManagerBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELPopupNotificationManagerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELPopupNotificationManagerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELPopupNotificationManagerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELPopupNotificationManagerBase(UELPopupNotificationManagerBase&&); \
	NO_API UELPopupNotificationManagerBase(const UELPopupNotificationManagerBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPopupNotificationManagerBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELPopupNotificationManagerBase(UELPopupNotificationManagerBase&&); \
	NO_API UELPopupNotificationManagerBase(const UELPopupNotificationManagerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELPopupNotificationManagerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELPopupNotificationManagerBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UELPopupNotificationManagerBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPopupNotificationManagerBase_h_11_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELPopupNotificationManagerBase_h_9_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPopupNotificationManagerBase_h_11_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPopupNotificationManagerBase_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPopupNotificationManagerBase_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPopupNotificationManagerBase_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPopupNotificationManagerBase_h_11_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPopupNotificationManagerBase_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPopupNotificationManagerBase_h_11_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPopupNotificationManagerBase_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPopupNotificationManagerBase_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPopupNotificationManagerBase_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPopupNotificationManagerBase_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPopupNotificationManagerBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPopupNotificationManagerBase_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPopupNotificationManagerBase_h_11_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPopupNotificationManagerBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELPopupNotificationManagerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELPopupNotificationManagerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
