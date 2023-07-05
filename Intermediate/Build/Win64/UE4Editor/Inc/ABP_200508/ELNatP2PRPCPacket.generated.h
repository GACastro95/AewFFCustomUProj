// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEOSPacketReliability : uint8;
#ifdef ABP_200508_ELNatP2PRPCPacket_generated_h
#error "ELNatP2PRPCPacket.generated.h already included, missing '#pragma once' in ELNatP2PRPCPacket.h"
#endif
#define ABP_200508_ELNatP2PRPCPacket_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELNatP2PRPCPacket_h_11_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELNatP2PRPCPacket_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSentPacketSize); \
	DECLARE_FUNCTION(execResetSentPacketSize); \
	DECLARE_FUNCTION(execSendPacketBuffer);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNatP2PRPCPacket_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSentPacketSize); \
	DECLARE_FUNCTION(execResetSentPacketSize); \
	DECLARE_FUNCTION(execSendPacketBuffer);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNatP2PRPCPacket_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELNatP2PRPCPacket(); \
	friend struct Z_Construct_UClass_UELNatP2PRPCPacket_Statics; \
public: \
	DECLARE_CLASS(UELNatP2PRPCPacket, UEOSNatP2PPacketBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELNatP2PRPCPacket)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNatP2PRPCPacket_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUELNatP2PRPCPacket(); \
	friend struct Z_Construct_UClass_UELNatP2PRPCPacket_Statics; \
public: \
	DECLARE_CLASS(UELNatP2PRPCPacket, UEOSNatP2PPacketBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELNatP2PRPCPacket)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNatP2PRPCPacket_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELNatP2PRPCPacket(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELNatP2PRPCPacket) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELNatP2PRPCPacket); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELNatP2PRPCPacket); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELNatP2PRPCPacket(UELNatP2PRPCPacket&&); \
	NO_API UELNatP2PRPCPacket(const UELNatP2PRPCPacket&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNatP2PRPCPacket_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELNatP2PRPCPacket(UELNatP2PRPCPacket&&); \
	NO_API UELNatP2PRPCPacket(const UELNatP2PRPCPacket&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELNatP2PRPCPacket); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELNatP2PRPCPacket); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELNatP2PRPCPacket)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNatP2PRPCPacket_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentObjectMap() { return STRUCT_OFFSET(UELNatP2PRPCPacket, CurrentObjectMap); } \
	FORCEINLINE static uint32 __PPO__SentPacketSize() { return STRUCT_OFFSET(UELNatP2PRPCPacket, SentPacketSize); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNatP2PRPCPacket_h_9_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELNatP2PRPCPacket_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNatP2PRPCPacket_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNatP2PRPCPacket_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNatP2PRPCPacket_h_11_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNatP2PRPCPacket_h_11_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNatP2PRPCPacket_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNatP2PRPCPacket_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNatP2PRPCPacket_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNatP2PRPCPacket_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNatP2PRPCPacket_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNatP2PRPCPacket_h_11_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNatP2PRPCPacket_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELNatP2PRPCPacket>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELNatP2PRPCPacket_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
