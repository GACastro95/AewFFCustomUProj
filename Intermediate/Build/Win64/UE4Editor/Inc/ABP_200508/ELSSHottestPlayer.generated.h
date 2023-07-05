// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSSWrestlerSetupParam;
struct FWrestlerSetupParam;
class UAnimMontage;
#ifdef ABP_200508_ELSSHottestPlayer_generated_h
#error "ELSSHottestPlayer.generated.h already included, missing '#pragma once' in ELSSHottestPlayer.h"
#endif
#define ABP_200508_ELSSHottestPlayer_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSHottestPlayer_h_13_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSHottestPlayer_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateWrestlerSetupParam); \
	DECLARE_FUNCTION(execGetCostumeID); \
	DECLARE_FUNCTION(execGetSSWrestlerSetupParam); \
	DECLARE_FUNCTION(execPlayMotion);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSHottestPlayer_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateWrestlerSetupParam); \
	DECLARE_FUNCTION(execGetCostumeID); \
	DECLARE_FUNCTION(execGetSSWrestlerSetupParam); \
	DECLARE_FUNCTION(execPlayMotion);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSHottestPlayer_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSHottestPlayer(); \
	friend struct Z_Construct_UClass_AELSSHottestPlayer_Statics; \
public: \
	DECLARE_CLASS(AELSSHottestPlayer, AELSSCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSHottestPlayer) \
	virtual UObject* _getUObject() const override { return const_cast<AELSSHottestPlayer*>(this); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSHottestPlayer_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAELSSHottestPlayer(); \
	friend struct Z_Construct_UClass_AELSSHottestPlayer_Statics; \
public: \
	DECLARE_CLASS(AELSSHottestPlayer, AELSSCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSHottestPlayer) \
	virtual UObject* _getUObject() const override { return const_cast<AELSSHottestPlayer*>(this); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSHottestPlayer_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSHottestPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSHottestPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSHottestPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSHottestPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSHottestPlayer(AELSSHottestPlayer&&); \
	NO_API AELSSHottestPlayer(const AELSSHottestPlayer&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSHottestPlayer_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSHottestPlayer(AELSSHottestPlayer&&); \
	NO_API AELSSHottestPlayer(const AELSSHottestPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSHottestPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSHottestPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSHottestPlayer)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSHottestPlayer_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CostumeID() { return STRUCT_OFFSET(AELSSHottestPlayer, CostumeID); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSHottestPlayer_h_11_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSHottestPlayer_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSHottestPlayer_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSHottestPlayer_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSHottestPlayer_h_13_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSHottestPlayer_h_13_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSHottestPlayer_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSHottestPlayer_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSHottestPlayer_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSHottestPlayer_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSHottestPlayer_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSHottestPlayer_h_13_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSHottestPlayer_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSHottestPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSHottestPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
