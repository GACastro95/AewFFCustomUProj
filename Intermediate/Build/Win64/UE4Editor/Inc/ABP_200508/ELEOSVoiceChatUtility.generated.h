// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class EEOSLobbyUserMuteFlag : uint8;
class UEOSCommunityInfoBase;
class UEOSCommunityUserBase;
enum class EEOSLobbyUserAudioStatus : uint8;
#ifdef ABP_200508_ELEOSVoiceChatUtility_generated_h
#error "ELEOSVoiceChatUtility.generated.h already included, missing '#pragma once' in ELEOSVoiceChatUtility.h"
#endif
#define ABP_200508_ELEOSVoiceChatUtility_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSVoiceChatUtility_h_14_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSVoiceChatUtility_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBlockVoiceChat); \
	DECLARE_FUNCTION(execClearVoiceChatMuteAll); \
	DECLARE_FUNCTION(execClearVoiceChatMuteFlag); \
	DECLARE_FUNCTION(execGetVoiceChatEnabled); \
	DECLARE_FUNCTION(execGetVoiceChatMuteFlag); \
	DECLARE_FUNCTION(execGetVoiceChatSpeakingUsers); \
	DECLARE_FUNCTION(execGetVoiceChatStartMuted); \
	DECLARE_FUNCTION(execGetVoiceChatStatus); \
	DECLARE_FUNCTION(execIsVoiceChatBlocked); \
	DECLARE_FUNCTION(execIsVoiceChatMuted); \
	DECLARE_FUNCTION(execIsVoiceChatSpeaking); \
	DECLARE_FUNCTION(execMuteVoiceChat); \
	DECLARE_FUNCTION(execSetVoiceChatEnabled); \
	DECLARE_FUNCTION(execSetVoiceChatMuteAll); \
	DECLARE_FUNCTION(execSetVoiceChatMuteFlag); \
	DECLARE_FUNCTION(execSetVoiceChatStartMuted); \
	DECLARE_FUNCTION(execUnblockVoiceChat); \
	DECLARE_FUNCTION(execUnmuteVoiceChat); \
	DECLARE_FUNCTION(execUpdateVoiceMutedAllMembers);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSVoiceChatUtility_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBlockVoiceChat); \
	DECLARE_FUNCTION(execClearVoiceChatMuteAll); \
	DECLARE_FUNCTION(execClearVoiceChatMuteFlag); \
	DECLARE_FUNCTION(execGetVoiceChatEnabled); \
	DECLARE_FUNCTION(execGetVoiceChatMuteFlag); \
	DECLARE_FUNCTION(execGetVoiceChatSpeakingUsers); \
	DECLARE_FUNCTION(execGetVoiceChatStartMuted); \
	DECLARE_FUNCTION(execGetVoiceChatStatus); \
	DECLARE_FUNCTION(execIsVoiceChatBlocked); \
	DECLARE_FUNCTION(execIsVoiceChatMuted); \
	DECLARE_FUNCTION(execIsVoiceChatSpeaking); \
	DECLARE_FUNCTION(execMuteVoiceChat); \
	DECLARE_FUNCTION(execSetVoiceChatEnabled); \
	DECLARE_FUNCTION(execSetVoiceChatMuteAll); \
	DECLARE_FUNCTION(execSetVoiceChatMuteFlag); \
	DECLARE_FUNCTION(execSetVoiceChatStartMuted); \
	DECLARE_FUNCTION(execUnblockVoiceChat); \
	DECLARE_FUNCTION(execUnmuteVoiceChat); \
	DECLARE_FUNCTION(execUpdateVoiceMutedAllMembers);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSVoiceChatUtility_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELEOSVoiceChatUtility(); \
	friend struct Z_Construct_UClass_UELEOSVoiceChatUtility_Statics; \
public: \
	DECLARE_CLASS(UELEOSVoiceChatUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELEOSVoiceChatUtility)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSVoiceChatUtility_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUELEOSVoiceChatUtility(); \
	friend struct Z_Construct_UClass_UELEOSVoiceChatUtility_Statics; \
public: \
	DECLARE_CLASS(UELEOSVoiceChatUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELEOSVoiceChatUtility)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSVoiceChatUtility_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELEOSVoiceChatUtility(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELEOSVoiceChatUtility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELEOSVoiceChatUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELEOSVoiceChatUtility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELEOSVoiceChatUtility(UELEOSVoiceChatUtility&&); \
	NO_API UELEOSVoiceChatUtility(const UELEOSVoiceChatUtility&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSVoiceChatUtility_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELEOSVoiceChatUtility(UELEOSVoiceChatUtility&&); \
	NO_API UELEOSVoiceChatUtility(const UELEOSVoiceChatUtility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELEOSVoiceChatUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELEOSVoiceChatUtility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELEOSVoiceChatUtility)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSVoiceChatUtility_h_14_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSVoiceChatUtility_h_12_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSVoiceChatUtility_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSVoiceChatUtility_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSVoiceChatUtility_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSVoiceChatUtility_h_14_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSVoiceChatUtility_h_14_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSVoiceChatUtility_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSVoiceChatUtility_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSVoiceChatUtility_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSVoiceChatUtility_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSVoiceChatUtility_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSVoiceChatUtility_h_14_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSVoiceChatUtility_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELEOSVoiceChatUtility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELEOSVoiceChatUtility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
