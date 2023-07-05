// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AELSSPlayer;
#ifdef ABP_200508_ELSSSilhouetteActor_generated_h
#error "ELSSSilhouetteActor.generated.h already included, missing '#pragma once' in ELSSSilhouetteActor.h"
#endif
#define ABP_200508_ELSSSilhouetteActor_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSilhouetteActor_h_10_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSilhouetteActor_h_10_RPC_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSilhouetteActor_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSilhouetteActor_h_10_EVENT_PARMS \
	struct ELSSSilhouetteActor_eventSetTargetPlayer_Parms \
	{ \
		AELSSPlayer* inTargetPlayer; \
	}; \
	struct ELSSSilhouetteActor_eventUpdatePose_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSSilhouetteActor_eventUpdatePose_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSilhouetteActor_h_10_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSilhouetteActor_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSSilhouetteActor(); \
	friend struct Z_Construct_UClass_AELSSSilhouetteActor_Statics; \
public: \
	DECLARE_CLASS(AELSSSilhouetteActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSSilhouetteActor)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSilhouetteActor_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAELSSSilhouetteActor(); \
	friend struct Z_Construct_UClass_AELSSSilhouetteActor_Statics; \
public: \
	DECLARE_CLASS(AELSSSilhouetteActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSSilhouetteActor)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSilhouetteActor_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSSilhouetteActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSSilhouetteActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSSilhouetteActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSSilhouetteActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSSilhouetteActor(AELSSSilhouetteActor&&); \
	NO_API AELSSSilhouetteActor(const AELSSSilhouetteActor&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSilhouetteActor_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSSilhouetteActor(AELSSSilhouetteActor&&); \
	NO_API AELSSSilhouetteActor(const AELSSSilhouetteActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSSilhouetteActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSSilhouetteActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSSilhouetteActor)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSilhouetteActor_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TargetPlayer() { return STRUCT_OFFSET(AELSSSilhouetteActor, TargetPlayer); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSilhouetteActor_h_8_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSilhouetteActor_h_10_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSilhouetteActor_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSilhouetteActor_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSilhouetteActor_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSilhouetteActor_h_10_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSilhouetteActor_h_10_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSilhouetteActor_h_10_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSilhouetteActor_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSilhouetteActor_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSilhouetteActor_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSilhouetteActor_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSilhouetteActor_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSilhouetteActor_h_10_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSilhouetteActor_h_10_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSilhouetteActor_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSSilhouetteActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSSilhouetteActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
