// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AELNetCharacter;
class ACharacter;
#ifdef ABP_200508_ELNetProp_generated_h
#error "ELNetProp.generated.h already included, missing '#pragma once' in ELNetProp.h"
#endif
#define ABP_200508_ELNetProp_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetProp_h_14_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetProp_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNetOwnerCharacter); \
	DECLARE_FUNCTION(execIsAttached_N); \
	DECLARE_FUNCTION(execSetNetOwnerCharacter);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetProp_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNetOwnerCharacter); \
	DECLARE_FUNCTION(execIsAttached_N); \
	DECLARE_FUNCTION(execSetNetOwnerCharacter);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetProp_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELNetProp(); \
	friend struct Z_Construct_UClass_AELNetProp_Statics; \
public: \
	DECLARE_CLASS(AELNetProp, AELNetActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELNetProp)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetProp_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAELNetProp(); \
	friend struct Z_Construct_UClass_AELNetProp_Statics; \
public: \
	DECLARE_CLASS(AELNetProp, AELNetActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELNetProp)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetProp_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELNetProp(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELNetProp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELNetProp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELNetProp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELNetProp(AELNetProp&&); \
	NO_API AELNetProp(const AELNetProp&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetProp_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELNetProp(AELNetProp&&); \
	NO_API AELNetProp(const AELNetProp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELNetProp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELNetProp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELNetProp)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetProp_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NetOwnerCharacter() { return STRUCT_OFFSET(AELNetProp, NetOwnerCharacter); } \
	FORCEINLINE static uint32 __PPO__SystemMotion_N() { return STRUCT_OFFSET(AELNetProp, SystemMotion_N); } \
	FORCEINLINE static uint32 __PPO__AttachChara_N() { return STRUCT_OFFSET(AELNetProp, AttachChara_N); } \
	FORCEINLINE static uint32 __PPO__BarrierCapsuleOffset() { return STRUCT_OFFSET(AELNetProp, BarrierCapsuleOffset); } \
	FORCEINLINE static uint32 __PPO__MontageList_BlockPose_N() { return STRUCT_OFFSET(AELNetProp, MontageList_BlockPose_N); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetProp_h_12_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetProp_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetProp_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetProp_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetProp_h_14_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetProp_h_14_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetProp_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetProp_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetProp_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetProp_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetProp_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetProp_h_14_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetProp_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELNetProp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELNetProp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
