// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECareerMapCameraType : uint8;
class UCameraComponent;
#ifdef ABP_200508_ELCareerCameraPawn_generated_h
#error "ELCareerCameraPawn.generated.h already included, missing '#pragma once' in ELCareerCameraPawn.h"
#endif
#define ABP_200508_ELCareerCameraPawn_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCameraPawn_h_12_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCameraPawn_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetupCamera); \
	DECLARE_FUNCTION(execSetupCameraActorWithCameraComponent);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCameraPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetupCamera); \
	DECLARE_FUNCTION(execSetupCameraActorWithCameraComponent);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCameraPawn_h_12_EVENT_PARMS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCameraPawn_h_12_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCameraPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELCareerCameraPawn(); \
	friend struct Z_Construct_UClass_AELCareerCameraPawn_Statics; \
public: \
	DECLARE_CLASS(AELCareerCameraPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELCareerCameraPawn)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCameraPawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAELCareerCameraPawn(); \
	friend struct Z_Construct_UClass_AELCareerCameraPawn_Statics; \
public: \
	DECLARE_CLASS(AELCareerCameraPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELCareerCameraPawn)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCameraPawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELCareerCameraPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELCareerCameraPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELCareerCameraPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELCareerCameraPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELCareerCameraPawn(AELCareerCameraPawn&&); \
	NO_API AELCareerCameraPawn(const AELCareerCameraPawn&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCameraPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELCareerCameraPawn(AELCareerCameraPawn&&); \
	NO_API AELCareerCameraPawn(const AELCareerCameraPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELCareerCameraPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELCareerCameraPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELCareerCameraPawn)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCameraPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_CameraActorArray() { return STRUCT_OFFSET(AELCareerCameraPawn, m_CameraActorArray); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCameraPawn_h_10_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCameraPawn_h_12_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCameraPawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCameraPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCameraPawn_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCameraPawn_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCameraPawn_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCameraPawn_h_12_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCameraPawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCameraPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCameraPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCameraPawn_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCameraPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCameraPawn_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCameraPawn_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCameraPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELCareerCameraPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCameraPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
