// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ELSessionPacketPartyData_generated_h
#error "ELSessionPacketPartyData.generated.h already included, missing '#pragma once' in ELSessionPacketPartyData.h"
#endif
#define ABP_200508_ELSessionPacketPartyData_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSessionPacketPartyData_h_8_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSessionPacketPartyData_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPartyMemberNum); \
	DECLARE_FUNCTION(execGetPartyMemberPUID);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSessionPacketPartyData_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPartyMemberNum); \
	DECLARE_FUNCTION(execGetPartyMemberPUID);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSessionPacketPartyData_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSessionPacketPartyData(); \
	friend struct Z_Construct_UClass_UELSessionPacketPartyData_Statics; \
public: \
	DECLARE_CLASS(UELSessionPacketPartyData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSessionPacketPartyData)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSessionPacketPartyData_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUELSessionPacketPartyData(); \
	friend struct Z_Construct_UClass_UELSessionPacketPartyData_Statics; \
public: \
	DECLARE_CLASS(UELSessionPacketPartyData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSessionPacketPartyData)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSessionPacketPartyData_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSessionPacketPartyData(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSessionPacketPartyData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSessionPacketPartyData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSessionPacketPartyData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSessionPacketPartyData(UELSessionPacketPartyData&&); \
	NO_API UELSessionPacketPartyData(const UELSessionPacketPartyData&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSessionPacketPartyData_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSessionPacketPartyData(UELSessionPacketPartyData&&); \
	NO_API UELSessionPacketPartyData(const UELSessionPacketPartyData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSessionPacketPartyData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSessionPacketPartyData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSessionPacketPartyData)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSessionPacketPartyData_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__JoinParty() { return STRUCT_OFFSET(UELSessionPacketPartyData, JoinParty); } \
	FORCEINLINE static uint32 __PPO__PartyPlayersPUID() { return STRUCT_OFFSET(UELSessionPacketPartyData, PartyPlayersPUID); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSessionPacketPartyData_h_6_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSessionPacketPartyData_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSessionPacketPartyData_h_8_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSessionPacketPartyData_h_8_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSessionPacketPartyData_h_8_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSessionPacketPartyData_h_8_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSessionPacketPartyData_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSessionPacketPartyData_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSessionPacketPartyData_h_8_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSessionPacketPartyData_h_8_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSessionPacketPartyData_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSessionPacketPartyData_h_8_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSessionPacketPartyData_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSessionPacketPartyData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSessionPacketPartyData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
