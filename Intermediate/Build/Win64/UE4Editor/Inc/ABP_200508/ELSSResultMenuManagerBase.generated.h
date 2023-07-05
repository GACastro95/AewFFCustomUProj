// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ELSSResultMenuManagerBase_generated_h
#error "ELSSResultMenuManagerBase.generated.h already included, missing '#pragma once' in ELSSResultMenuManagerBase.h"
#endif
#define ABP_200508_ELSSResultMenuManagerBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSResultMenuManagerBase_h_8_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSResultMenuManagerBase_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTick);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSResultMenuManagerBase_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTick);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSResultMenuManagerBase_h_8_EVENT_PARMS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSResultMenuManagerBase_h_8_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSResultMenuManagerBase_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSResultMenuManagerBase(); \
	friend struct Z_Construct_UClass_AELSSResultMenuManagerBase_Statics; \
public: \
	DECLARE_CLASS(AELSSResultMenuManagerBase, AELPauseMenuManagerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSResultMenuManagerBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSResultMenuManagerBase_h_8_INCLASS \
private: \
	static void StaticRegisterNativesAELSSResultMenuManagerBase(); \
	friend struct Z_Construct_UClass_AELSSResultMenuManagerBase_Statics; \
public: \
	DECLARE_CLASS(AELSSResultMenuManagerBase, AELPauseMenuManagerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSResultMenuManagerBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSResultMenuManagerBase_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSResultMenuManagerBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSResultMenuManagerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSResultMenuManagerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSResultMenuManagerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSResultMenuManagerBase(AELSSResultMenuManagerBase&&); \
	NO_API AELSSResultMenuManagerBase(const AELSSResultMenuManagerBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSResultMenuManagerBase_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSResultMenuManagerBase(AELSSResultMenuManagerBase&&); \
	NO_API AELSSResultMenuManagerBase(const AELSSResultMenuManagerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSResultMenuManagerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSResultMenuManagerBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSResultMenuManagerBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSResultMenuManagerBase_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__IsFocusGame() { return STRUCT_OFFSET(AELSSResultMenuManagerBase, IsFocusGame); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSResultMenuManagerBase_h_6_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSResultMenuManagerBase_h_8_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSResultMenuManagerBase_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSResultMenuManagerBase_h_8_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSResultMenuManagerBase_h_8_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSResultMenuManagerBase_h_8_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSResultMenuManagerBase_h_8_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSResultMenuManagerBase_h_8_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSResultMenuManagerBase_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSResultMenuManagerBase_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSResultMenuManagerBase_h_8_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSResultMenuManagerBase_h_8_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSResultMenuManagerBase_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSResultMenuManagerBase_h_8_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSResultMenuManagerBase_h_8_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSResultMenuManagerBase_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSResultMenuManagerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSResultMenuManagerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
