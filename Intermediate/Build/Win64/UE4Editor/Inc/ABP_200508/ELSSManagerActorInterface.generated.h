// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ELSSManagerActorInterface_generated_h
#error "ELSSManagerActorInterface.generated.h already included, missing '#pragma once' in ELSSManagerActorInterface.h"
#endif
#define ABP_200508_ELSSManagerActorInterface_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSManagerActorInterface_h_8_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSManagerActorInterface_h_8_RPC_WRAPPERS \
	virtual void OnCompletedSpawnManagerActors_Implementation() {}; \
	virtual void OnDeadMySelf_Implementation() {}; \
	virtual void OnEndOfMatch_Implementation() {}; \
	virtual void OnStartOfMatch_Implementation() {}; \
 \
	DECLARE_FUNCTION(execOnCompletedSpawnManagerActors); \
	DECLARE_FUNCTION(execOnDeadMySelf); \
	DECLARE_FUNCTION(execOnEndOfMatch); \
	DECLARE_FUNCTION(execOnStartOfMatch);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSManagerActorInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnCompletedSpawnManagerActors_Implementation() {}; \
	virtual void OnDeadMySelf_Implementation() {}; \
	virtual void OnEndOfMatch_Implementation() {}; \
	virtual void OnStartOfMatch_Implementation() {}; \
 \
	DECLARE_FUNCTION(execOnCompletedSpawnManagerActors); \
	DECLARE_FUNCTION(execOnDeadMySelf); \
	DECLARE_FUNCTION(execOnEndOfMatch); \
	DECLARE_FUNCTION(execOnStartOfMatch);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSManagerActorInterface_h_8_EVENT_PARMS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSManagerActorInterface_h_8_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSManagerActorInterface_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSManagerActorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSManagerActorInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSManagerActorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSManagerActorInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSManagerActorInterface(UELSSManagerActorInterface&&); \
	NO_API UELSSManagerActorInterface(const UELSSManagerActorInterface&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSManagerActorInterface_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSManagerActorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSManagerActorInterface(UELSSManagerActorInterface&&); \
	NO_API UELSSManagerActorInterface(const UELSSManagerActorInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSManagerActorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSManagerActorInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSManagerActorInterface)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSManagerActorInterface_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUELSSManagerActorInterface(); \
	friend struct Z_Construct_UClass_UELSSManagerActorInterface_Statics; \
public: \
	DECLARE_CLASS(UELSSManagerActorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSManagerActorInterface)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSManagerActorInterface_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSManagerActorInterface_h_8_GENERATED_UINTERFACE_BODY() \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSManagerActorInterface_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSManagerActorInterface_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSManagerActorInterface_h_8_GENERATED_UINTERFACE_BODY() \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSManagerActorInterface_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSManagerActorInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IELSSManagerActorInterface() {} \
public: \
	typedef UELSSManagerActorInterface UClassType; \
	typedef IELSSManagerActorInterface ThisClass; \
	static void Execute_OnCompletedSpawnManagerActors(UObject* O); \
	static void Execute_OnDeadMySelf(UObject* O); \
	static void Execute_OnEndOfMatch(UObject* O); \
	static void Execute_OnStartOfMatch(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSManagerActorInterface_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~IELSSManagerActorInterface() {} \
public: \
	typedef UELSSManagerActorInterface UClassType; \
	typedef IELSSManagerActorInterface ThisClass; \
	static void Execute_OnCompletedSpawnManagerActors(UObject* O); \
	static void Execute_OnDeadMySelf(UObject* O); \
	static void Execute_OnEndOfMatch(UObject* O); \
	static void Execute_OnStartOfMatch(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSManagerActorInterface_h_6_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSManagerActorInterface_h_8_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSManagerActorInterface_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSManagerActorInterface_h_8_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSManagerActorInterface_h_8_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSManagerActorInterface_h_8_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSManagerActorInterface_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSManagerActorInterface_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSManagerActorInterface_h_8_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSManagerActorInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSManagerActorInterface_h_8_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSManagerActorInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSManagerActorInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSManagerActorInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
