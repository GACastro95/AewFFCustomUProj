// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMyWrestlerDataObject;
#ifdef ABP_200508_MyWrestlerInterface_generated_h
#error "MyWrestlerInterface.generated.h already included, missing '#pragma once' in MyWrestlerInterface.h"
#endif
#define ABP_200508_MyWrestlerInterface_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerInterface_h_10_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerInterface_h_10_RPC_WRAPPERS \
	virtual bool EntryMyWrestler_Implementation(bool& bOutAddedNew, UMyWrestlerDataObject* DataObject) { return false; }; \
 \
	DECLARE_FUNCTION(execEntryMyWrestler);


#define AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool EntryMyWrestler_Implementation(bool& bOutAddedNew, UMyWrestlerDataObject* DataObject) { return false; }; \
 \
	DECLARE_FUNCTION(execEntryMyWrestler);


#define AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerInterface_h_10_EVENT_PARMS \
	struct MyWrestlerInterface_eventEntryMyWrestler_Parms \
	{ \
		bool bOutAddedNew; \
		UMyWrestlerDataObject* DataObject; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MyWrestlerInterface_eventEntryMyWrestler_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerInterface_h_10_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerInterface_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyWrestlerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyWrestlerInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyWrestlerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyWrestlerInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyWrestlerInterface(UMyWrestlerInterface&&); \
	NO_API UMyWrestlerInterface(const UMyWrestlerInterface&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerInterface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyWrestlerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyWrestlerInterface(UMyWrestlerInterface&&); \
	NO_API UMyWrestlerInterface(const UMyWrestlerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyWrestlerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyWrestlerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyWrestlerInterface)


#define AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMyWrestlerInterface(); \
	friend struct Z_Construct_UClass_UMyWrestlerInterface_Statics; \
public: \
	DECLARE_CLASS(UMyWrestlerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UMyWrestlerInterface)


#define AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerInterface_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerInterface_h_10_GENERATED_UINTERFACE_BODY() \
	AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerInterface_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerInterface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerInterface_h_10_GENERATED_UINTERFACE_BODY() \
	AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerInterface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMyWrestlerInterface() {} \
public: \
	typedef UMyWrestlerInterface UClassType; \
	typedef IMyWrestlerInterface ThisClass; \
	static bool Execute_EntryMyWrestler(UObject* O, bool& bOutAddedNew, UMyWrestlerDataObject* DataObject); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerInterface_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~IMyWrestlerInterface() {} \
public: \
	typedef UMyWrestlerInterface UClassType; \
	typedef IMyWrestlerInterface ThisClass; \
	static bool Execute_EntryMyWrestler(UObject* O, bool& bOutAddedNew, UMyWrestlerDataObject* DataObject); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerInterface_h_8_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerInterface_h_10_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerInterface_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerInterface_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerInterface_h_10_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerInterface_h_10_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerInterface_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerInterface_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerInterface_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerInterface_h_10_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UMyWrestlerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
