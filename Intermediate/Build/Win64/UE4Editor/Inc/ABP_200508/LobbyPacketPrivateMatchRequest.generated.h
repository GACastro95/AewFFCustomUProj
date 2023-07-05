// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_LobbyPacketPrivateMatchRequest_generated_h
#error "LobbyPacketPrivateMatchRequest.generated.h already included, missing '#pragma once' in LobbyPacketPrivateMatchRequest.h"
#endif
#define ABP_200508_LobbyPacketPrivateMatchRequest_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchRequest_h_8_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchRequest_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMatchParam); \
	DECLARE_FUNCTION(execGetMatchType); \
	DECLARE_FUNCTION(execGetOnlineModeType);


#define AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchRequest_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMatchParam); \
	DECLARE_FUNCTION(execGetMatchType); \
	DECLARE_FUNCTION(execGetOnlineModeType);


#define AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchRequest_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULobbyPacketPrivateMatchRequest(); \
	friend struct Z_Construct_UClass_ULobbyPacketPrivateMatchRequest_Statics; \
public: \
	DECLARE_CLASS(ULobbyPacketPrivateMatchRequest, ULobbyPacketBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(ULobbyPacketPrivateMatchRequest)


#define AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchRequest_h_8_INCLASS \
private: \
	static void StaticRegisterNativesULobbyPacketPrivateMatchRequest(); \
	friend struct Z_Construct_UClass_ULobbyPacketPrivateMatchRequest_Statics; \
public: \
	DECLARE_CLASS(ULobbyPacketPrivateMatchRequest, ULobbyPacketBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(ULobbyPacketPrivateMatchRequest)


#define AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchRequest_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULobbyPacketPrivateMatchRequest(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULobbyPacketPrivateMatchRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULobbyPacketPrivateMatchRequest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULobbyPacketPrivateMatchRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULobbyPacketPrivateMatchRequest(ULobbyPacketPrivateMatchRequest&&); \
	NO_API ULobbyPacketPrivateMatchRequest(const ULobbyPacketPrivateMatchRequest&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchRequest_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULobbyPacketPrivateMatchRequest(ULobbyPacketPrivateMatchRequest&&); \
	NO_API ULobbyPacketPrivateMatchRequest(const ULobbyPacketPrivateMatchRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULobbyPacketPrivateMatchRequest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULobbyPacketPrivateMatchRequest); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULobbyPacketPrivateMatchRequest)


#define AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchRequest_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OnlineModeType() { return STRUCT_OFFSET(ULobbyPacketPrivateMatchRequest, OnlineModeType); } \
	FORCEINLINE static uint32 __PPO__MatchType() { return STRUCT_OFFSET(ULobbyPacketPrivateMatchRequest, MatchType); } \
	FORCEINLINE static uint32 __PPO__MatchParam() { return STRUCT_OFFSET(ULobbyPacketPrivateMatchRequest, MatchParam); }


#define AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchRequest_h_6_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchRequest_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchRequest_h_8_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchRequest_h_8_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchRequest_h_8_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchRequest_h_8_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchRequest_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchRequest_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchRequest_h_8_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchRequest_h_8_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchRequest_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchRequest_h_8_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchRequest_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class ULobbyPacketPrivateMatchRequest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchRequest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
