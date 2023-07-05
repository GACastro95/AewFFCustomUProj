// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ELNetObjectInterface_generated_h
#error "ELNetObjectInterface.generated.h already included, missing '#pragma once' in ELNetObjectInterface.h"
#endif
#define ABP_200508_ELNetObjectInterface_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectInterface_h_8_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectInterface_h_8_RPC_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectInterface_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELNetObjectInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELNetObjectInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELNetObjectInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELNetObjectInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELNetObjectInterface(UELNetObjectInterface&&); \
	NO_API UELNetObjectInterface(const UELNetObjectInterface&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectInterface_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELNetObjectInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELNetObjectInterface(UELNetObjectInterface&&); \
	NO_API UELNetObjectInterface(const UELNetObjectInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELNetObjectInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELNetObjectInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELNetObjectInterface)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectInterface_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUELNetObjectInterface(); \
	friend struct Z_Construct_UClass_UELNetObjectInterface_Statics; \
public: \
	DECLARE_CLASS(UELNetObjectInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELNetObjectInterface)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectInterface_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectInterface_h_8_GENERATED_UINTERFACE_BODY() \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectInterface_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectInterface_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectInterface_h_8_GENERATED_UINTERFACE_BODY() \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectInterface_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IELNetObjectInterface() {} \
public: \
	typedef UELNetObjectInterface UClassType; \
	typedef IELNetObjectInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectInterface_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~IELNetObjectInterface() {} \
public: \
	typedef UELNetObjectInterface UClassType; \
	typedef IELNetObjectInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectInterface_h_6_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectInterface_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectInterface_h_8_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectInterface_h_8_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectInterface_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectInterface_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectInterface_h_8_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELNetObjectInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
