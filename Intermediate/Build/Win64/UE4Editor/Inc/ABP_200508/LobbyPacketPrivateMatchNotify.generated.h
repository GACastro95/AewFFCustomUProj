// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ELobbyPacketPrivateMatchNotify : uint8;
enum class ELobbyPacketNotifyType : uint8;
#ifdef ABP_200508_LobbyPacketPrivateMatchNotify_generated_h
#error "LobbyPacketPrivateMatchNotify.generated.h already included, missing '#pragma once' in LobbyPacketPrivateMatchNotify.h"
#endif
#define ABP_200508_LobbyPacketPrivateMatchNotify_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchNotify_h_10_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchNotify_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNotify); \
	DECLARE_FUNCTION(execGetNotifyType);


#define AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchNotify_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNotify); \
	DECLARE_FUNCTION(execGetNotifyType);


#define AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchNotify_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULobbyPacketPrivateMatchNotify(); \
	friend struct Z_Construct_UClass_ULobbyPacketPrivateMatchNotify_Statics; \
public: \
	DECLARE_CLASS(ULobbyPacketPrivateMatchNotify, ULobbyPacketBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(ULobbyPacketPrivateMatchNotify)


#define AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchNotify_h_10_INCLASS \
private: \
	static void StaticRegisterNativesULobbyPacketPrivateMatchNotify(); \
	friend struct Z_Construct_UClass_ULobbyPacketPrivateMatchNotify_Statics; \
public: \
	DECLARE_CLASS(ULobbyPacketPrivateMatchNotify, ULobbyPacketBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(ULobbyPacketPrivateMatchNotify)


#define AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchNotify_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULobbyPacketPrivateMatchNotify(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULobbyPacketPrivateMatchNotify) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULobbyPacketPrivateMatchNotify); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULobbyPacketPrivateMatchNotify); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULobbyPacketPrivateMatchNotify(ULobbyPacketPrivateMatchNotify&&); \
	NO_API ULobbyPacketPrivateMatchNotify(const ULobbyPacketPrivateMatchNotify&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchNotify_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULobbyPacketPrivateMatchNotify(ULobbyPacketPrivateMatchNotify&&); \
	NO_API ULobbyPacketPrivateMatchNotify(const ULobbyPacketPrivateMatchNotify&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULobbyPacketPrivateMatchNotify); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULobbyPacketPrivateMatchNotify); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULobbyPacketPrivateMatchNotify)


#define AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchNotify_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Notify() { return STRUCT_OFFSET(ULobbyPacketPrivateMatchNotify, Notify); }


#define AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchNotify_h_8_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchNotify_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchNotify_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchNotify_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchNotify_h_10_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchNotify_h_10_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchNotify_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchNotify_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchNotify_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchNotify_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchNotify_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchNotify_h_10_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchNotify_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class ULobbyPacketPrivateMatchNotify>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketPrivateMatchNotify_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
