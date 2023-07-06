// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ELobbyPacketMenuInputType : uint8;
enum class ELobbyPacketMenuInputSendType : uint8;
#ifdef ABP_200508_LobbyPacketMenuInput_generated_h
#error "LobbyPacketMenuInput.generated.h already included, missing '#pragma once' in LobbyPacketMenuInput.h"
#endif
#define ABP_200508_LobbyPacketMenuInput_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketMenuInput_h_10_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketMenuInput_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInputValue); \
	DECLARE_FUNCTION(execGetPlayerIndex); \
	DECLARE_FUNCTION(execGetSendType);


#define AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketMenuInput_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInputValue); \
	DECLARE_FUNCTION(execGetPlayerIndex); \
	DECLARE_FUNCTION(execGetSendType);


#define AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketMenuInput_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULobbyPacketMenuInput(); \
	friend struct Z_Construct_UClass_ULobbyPacketMenuInput_Statics; \
public: \
	DECLARE_CLASS(ULobbyPacketMenuInput, ULobbyPacketBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(ULobbyPacketMenuInput)


#define AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketMenuInput_h_10_INCLASS \
private: \
	static void StaticRegisterNativesULobbyPacketMenuInput(); \
	friend struct Z_Construct_UClass_ULobbyPacketMenuInput_Statics; \
public: \
	DECLARE_CLASS(ULobbyPacketMenuInput, ULobbyPacketBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(ULobbyPacketMenuInput)


#define AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketMenuInput_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULobbyPacketMenuInput(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULobbyPacketMenuInput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULobbyPacketMenuInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULobbyPacketMenuInput); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULobbyPacketMenuInput(ULobbyPacketMenuInput&&); \
	NO_API ULobbyPacketMenuInput(const ULobbyPacketMenuInput&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketMenuInput_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULobbyPacketMenuInput(ULobbyPacketMenuInput&&); \
	NO_API ULobbyPacketMenuInput(const ULobbyPacketMenuInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULobbyPacketMenuInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULobbyPacketMenuInput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULobbyPacketMenuInput)


#define AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketMenuInput_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerIndex() { return STRUCT_OFFSET(ULobbyPacketMenuInput, PlayerIndex); } \
	FORCEINLINE static uint32 __PPO__InputValue() { return STRUCT_OFFSET(ULobbyPacketMenuInput, InputValue); } \
	FORCEINLINE static uint32 __PPO__SendType() { return STRUCT_OFFSET(ULobbyPacketMenuInput, SendType); }


#define AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketMenuInput_h_8_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketMenuInput_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketMenuInput_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketMenuInput_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketMenuInput_h_10_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketMenuInput_h_10_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketMenuInput_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketMenuInput_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketMenuInput_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketMenuInput_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketMenuInput_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketMenuInput_h_10_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketMenuInput_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class ULobbyPacketMenuInput>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_LobbyPacketMenuInput_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS