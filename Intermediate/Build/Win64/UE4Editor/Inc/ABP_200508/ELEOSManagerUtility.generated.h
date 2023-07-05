// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UELEOSSanitizeTextPartyChat;
class UELEOSSanitizeTextWrestlerData;
struct FWrestlerNameText;
#ifdef ABP_200508_ELEOSManagerUtility_generated_h
#error "ELEOSManagerUtility.generated.h already included, missing '#pragma once' in ELEOSManagerUtility.h"
#endif
#define ABP_200508_ELEOSManagerUtility_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManagerUtility_h_14_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManagerUtility_h_14_RPC_WRAPPERS \
	virtual bool IsValidOnlineWrestlerData_Implementation(UObject* OnlineWrestlerData); \
 \
	DECLARE_FUNCTION(execIsValidOnlineWrestlerData); \
	DECLARE_FUNCTION(execOnSanitizeText_All); \
	DECLARE_FUNCTION(execOnSanitizeText_MultilineRingName); \
	DECLARE_FUNCTION(execOnSanitizeText_NickName); \
	DECLARE_FUNCTION(execOnSanitizeText_PartyChat); \
	DECLARE_FUNCTION(execOnSanitizeText_RingName); \
	DECLARE_FUNCTION(execOnSanitizeText_ShortName); \
	DECLARE_FUNCTION(execOnSanitizeText_SnsAccount); \
	DECLARE_FUNCTION(execOnSanitizeText_SpokenName); \
	DECLARE_FUNCTION(execRequestSanitizePartyChat); \
	DECLARE_FUNCTION(execRequestSanitizeWrestlerName);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManagerUtility_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsValidOnlineWrestlerData_Implementation(UObject* OnlineWrestlerData); \
 \
	DECLARE_FUNCTION(execIsValidOnlineWrestlerData); \
	DECLARE_FUNCTION(execOnSanitizeText_All); \
	DECLARE_FUNCTION(execOnSanitizeText_MultilineRingName); \
	DECLARE_FUNCTION(execOnSanitizeText_NickName); \
	DECLARE_FUNCTION(execOnSanitizeText_PartyChat); \
	DECLARE_FUNCTION(execOnSanitizeText_RingName); \
	DECLARE_FUNCTION(execOnSanitizeText_ShortName); \
	DECLARE_FUNCTION(execOnSanitizeText_SnsAccount); \
	DECLARE_FUNCTION(execOnSanitizeText_SpokenName); \
	DECLARE_FUNCTION(execRequestSanitizePartyChat); \
	DECLARE_FUNCTION(execRequestSanitizeWrestlerName);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManagerUtility_h_14_EVENT_PARMS \
	struct ELEOSManagerUtility_eventApplyWrestlerNameText_Parms \
	{ \
		UObject* OnlineWrestlerData; \
		FWrestlerNameText WrestlerName; \
	}; \
	struct ELEOSManagerUtility_eventGetWrestlerNameText_Parms \
	{ \
		UObject* OnlineWrestlerData; \
		FWrestlerNameText WrestlerName; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELEOSManagerUtility_eventGetWrestlerNameText_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELEOSManagerUtility_eventIsValidOnlineWrestlerData_Parms \
	{ \
		UObject* OnlineWrestlerData; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELEOSManagerUtility_eventIsValidOnlineWrestlerData_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManagerUtility_h_14_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManagerUtility_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELEOSManagerUtility(); \
	friend struct Z_Construct_UClass_UELEOSManagerUtility_Statics; \
public: \
	DECLARE_CLASS(UELEOSManagerUtility, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELEOSManagerUtility)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManagerUtility_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUELEOSManagerUtility(); \
	friend struct Z_Construct_UClass_UELEOSManagerUtility_Statics; \
public: \
	DECLARE_CLASS(UELEOSManagerUtility, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELEOSManagerUtility)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManagerUtility_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELEOSManagerUtility(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELEOSManagerUtility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELEOSManagerUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELEOSManagerUtility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELEOSManagerUtility(UELEOSManagerUtility&&); \
	NO_API UELEOSManagerUtility(const UELEOSManagerUtility&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManagerUtility_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELEOSManagerUtility(UELEOSManagerUtility&&); \
	NO_API UELEOSManagerUtility(const UELEOSManagerUtility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELEOSManagerUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELEOSManagerUtility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELEOSManagerUtility)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManagerUtility_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SanitizeRequestObjectMap() { return STRUCT_OFFSET(UELEOSManagerUtility, SanitizeRequestObjectMap); } \
	FORCEINLINE static uint32 __PPO__DebugDisableTextFilter() { return STRUCT_OFFSET(UELEOSManagerUtility, DebugDisableTextFilter); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManagerUtility_h_12_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManagerUtility_h_14_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManagerUtility_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManagerUtility_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManagerUtility_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManagerUtility_h_14_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManagerUtility_h_14_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManagerUtility_h_14_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManagerUtility_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManagerUtility_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManagerUtility_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManagerUtility_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManagerUtility_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManagerUtility_h_14_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManagerUtility_h_14_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManagerUtility_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELEOSManagerUtility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManagerUtility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
