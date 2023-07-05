// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGender : uint8;
struct FGuid;
#ifdef CREATION_EditWrestlerGetInterface_generated_h
#error "EditWrestlerGetInterface.generated.h already included, missing '#pragma once' in EditWrestlerGetInterface.h"
#endif
#define CREATION_EditWrestlerGetInterface_generated_h

#define AewFFCustomUProj_Source_Creation_Public_EditWrestlerGetInterface_h_10_SPARSE_DATA
#define AewFFCustomUProj_Source_Creation_Public_EditWrestlerGetInterface_h_10_RPC_WRAPPERS
#define AewFFCustomUProj_Source_Creation_Public_EditWrestlerGetInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define AewFFCustomUProj_Source_Creation_Public_EditWrestlerGetInterface_h_10_EVENT_PARMS \
	struct EditWrestlerGetInterface_eventGetGender_Parms \
	{ \
		EGender ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditWrestlerGetInterface_eventGetGender_Parms() \
			: ReturnValue((EGender)0) \
		{ \
		} \
	}; \
	struct EditWrestlerGetInterface_eventGetUID_Parms \
	{ \
		FGuid ReturnValue; \
	};


#define AewFFCustomUProj_Source_Creation_Public_EditWrestlerGetInterface_h_10_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_Creation_Public_EditWrestlerGetInterface_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditWrestlerGetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditWrestlerGetInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditWrestlerGetInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditWrestlerGetInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditWrestlerGetInterface(UEditWrestlerGetInterface&&); \
	NO_API UEditWrestlerGetInterface(const UEditWrestlerGetInterface&); \
public:


#define AewFFCustomUProj_Source_Creation_Public_EditWrestlerGetInterface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditWrestlerGetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditWrestlerGetInterface(UEditWrestlerGetInterface&&); \
	NO_API UEditWrestlerGetInterface(const UEditWrestlerGetInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditWrestlerGetInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditWrestlerGetInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditWrestlerGetInterface)


#define AewFFCustomUProj_Source_Creation_Public_EditWrestlerGetInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEditWrestlerGetInterface(); \
	friend struct Z_Construct_UClass_UEditWrestlerGetInterface_Statics; \
public: \
	DECLARE_CLASS(UEditWrestlerGetInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Creation"), NO_API) \
	DECLARE_SERIALIZER(UEditWrestlerGetInterface)


#define AewFFCustomUProj_Source_Creation_Public_EditWrestlerGetInterface_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	AewFFCustomUProj_Source_Creation_Public_EditWrestlerGetInterface_h_10_GENERATED_UINTERFACE_BODY() \
	AewFFCustomUProj_Source_Creation_Public_EditWrestlerGetInterface_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_Creation_Public_EditWrestlerGetInterface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	AewFFCustomUProj_Source_Creation_Public_EditWrestlerGetInterface_h_10_GENERATED_UINTERFACE_BODY() \
	AewFFCustomUProj_Source_Creation_Public_EditWrestlerGetInterface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_Creation_Public_EditWrestlerGetInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IEditWrestlerGetInterface() {} \
public: \
	typedef UEditWrestlerGetInterface UClassType; \
	typedef IEditWrestlerGetInterface ThisClass; \
	static EGender Execute_GetGender(const UObject* O); \
	static FGuid Execute_GetUID(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define AewFFCustomUProj_Source_Creation_Public_EditWrestlerGetInterface_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~IEditWrestlerGetInterface() {} \
public: \
	typedef UEditWrestlerGetInterface UClassType; \
	typedef IEditWrestlerGetInterface ThisClass; \
	static EGender Execute_GetGender(const UObject* O); \
	static FGuid Execute_GetUID(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define AewFFCustomUProj_Source_Creation_Public_EditWrestlerGetInterface_h_8_PROLOG \
	AewFFCustomUProj_Source_Creation_Public_EditWrestlerGetInterface_h_10_EVENT_PARMS


#define AewFFCustomUProj_Source_Creation_Public_EditWrestlerGetInterface_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_Creation_Public_EditWrestlerGetInterface_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_Creation_Public_EditWrestlerGetInterface_h_10_RPC_WRAPPERS \
	AewFFCustomUProj_Source_Creation_Public_EditWrestlerGetInterface_h_10_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_Creation_Public_EditWrestlerGetInterface_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_Creation_Public_EditWrestlerGetInterface_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_Creation_Public_EditWrestlerGetInterface_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_Creation_Public_EditWrestlerGetInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_Creation_Public_EditWrestlerGetInterface_h_10_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_Creation_Public_EditWrestlerGetInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CREATION_API UClass* StaticClass<class UEditWrestlerGetInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_Creation_Public_EditWrestlerGetInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
