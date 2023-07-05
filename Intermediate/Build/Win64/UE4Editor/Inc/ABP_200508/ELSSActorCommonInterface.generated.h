// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESSActorType : uint8;
#ifdef ABP_200508_ELSSActorCommonInterface_generated_h
#error "ELSSActorCommonInterface.generated.h already included, missing '#pragma once' in ELSSActorCommonInterface.h"
#endif
#define ABP_200508_ELSSActorCommonInterface_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActorCommonInterface_h_9_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActorCommonInterface_h_9_RPC_WRAPPERS \
	virtual ESSActorType GetSSActorType_Implementation() const { return (ESSActorType)0; }; \
 \
	DECLARE_FUNCTION(execGetSSActorType);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActorCommonInterface_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual ESSActorType GetSSActorType_Implementation() const { return (ESSActorType)0; }; \
 \
	DECLARE_FUNCTION(execGetSSActorType);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActorCommonInterface_h_9_EVENT_PARMS \
	struct ELSSActorCommonInterface_eventGetSSActorType_Parms \
	{ \
		ESSActorType ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSActorCommonInterface_eventGetSSActorType_Parms() \
			: ReturnValue((ESSActorType)0) \
		{ \
		} \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActorCommonInterface_h_9_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActorCommonInterface_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSActorCommonInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSActorCommonInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSActorCommonInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSActorCommonInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSActorCommonInterface(UELSSActorCommonInterface&&); \
	NO_API UELSSActorCommonInterface(const UELSSActorCommonInterface&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActorCommonInterface_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSActorCommonInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSActorCommonInterface(UELSSActorCommonInterface&&); \
	NO_API UELSSActorCommonInterface(const UELSSActorCommonInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSActorCommonInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSActorCommonInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSActorCommonInterface)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActorCommonInterface_h_9_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUELSSActorCommonInterface(); \
	friend struct Z_Construct_UClass_UELSSActorCommonInterface_Statics; \
public: \
	DECLARE_CLASS(UELSSActorCommonInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSActorCommonInterface)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActorCommonInterface_h_9_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActorCommonInterface_h_9_GENERATED_UINTERFACE_BODY() \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActorCommonInterface_h_9_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActorCommonInterface_h_9_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActorCommonInterface_h_9_GENERATED_UINTERFACE_BODY() \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActorCommonInterface_h_9_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActorCommonInterface_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IELSSActorCommonInterface() {} \
public: \
	typedef UELSSActorCommonInterface UClassType; \
	typedef IELSSActorCommonInterface ThisClass; \
	static ESSActorType Execute_GetSSActorType(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActorCommonInterface_h_9_INCLASS_IINTERFACE \
protected: \
	virtual ~IELSSActorCommonInterface() {} \
public: \
	typedef UELSSActorCommonInterface UClassType; \
	typedef IELSSActorCommonInterface ThisClass; \
	static ESSActorType Execute_GetSSActorType(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActorCommonInterface_h_7_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActorCommonInterface_h_9_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActorCommonInterface_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActorCommonInterface_h_9_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActorCommonInterface_h_9_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActorCommonInterface_h_9_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActorCommonInterface_h_9_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActorCommonInterface_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActorCommonInterface_h_9_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActorCommonInterface_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActorCommonInterface_h_9_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActorCommonInterface_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSActorCommonInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSActorCommonInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
