// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_GAME_ELFootStepObjectInterface_generated_h
#error "ELFootStepObjectInterface.generated.h already included, missing '#pragma once' in ELFootStepObjectInterface.h"
#endif
#define ELITE_GAME_ELFootStepObjectInterface_generated_h

#define AewFFCustomUProj_Source_ELITE_Game_Public_ELFootStepObjectInterface_h_8_SPARSE_DATA
#define AewFFCustomUProj_Source_ELITE_Game_Public_ELFootStepObjectInterface_h_8_RPC_WRAPPERS \
	virtual bool CanStepOnFoot_Implementation() const { return false; }; \
 \
	DECLARE_FUNCTION(execCanStepOnFoot);


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELFootStepObjectInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool CanStepOnFoot_Implementation() const { return false; }; \
 \
	DECLARE_FUNCTION(execCanStepOnFoot);


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELFootStepObjectInterface_h_8_EVENT_PARMS \
	struct ELFootStepObjectInterface_eventCanStepOnFoot_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELFootStepObjectInterface_eventCanStepOnFoot_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELFootStepObjectInterface_h_8_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ELITE_Game_Public_ELFootStepObjectInterface_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELFootStepObjectInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELFootStepObjectInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELFootStepObjectInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELFootStepObjectInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELFootStepObjectInterface(UELFootStepObjectInterface&&); \
	NO_API UELFootStepObjectInterface(const UELFootStepObjectInterface&); \
public:


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELFootStepObjectInterface_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELFootStepObjectInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELFootStepObjectInterface(UELFootStepObjectInterface&&); \
	NO_API UELFootStepObjectInterface(const UELFootStepObjectInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELFootStepObjectInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELFootStepObjectInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELFootStepObjectInterface)


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELFootStepObjectInterface_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUELFootStepObjectInterface(); \
	friend struct Z_Construct_UClass_UELFootStepObjectInterface_Statics; \
public: \
	DECLARE_CLASS(UELFootStepObjectInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ELITE_Game"), NO_API) \
	DECLARE_SERIALIZER(UELFootStepObjectInterface)


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELFootStepObjectInterface_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELFootStepObjectInterface_h_8_GENERATED_UINTERFACE_BODY() \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELFootStepObjectInterface_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELFootStepObjectInterface_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELFootStepObjectInterface_h_8_GENERATED_UINTERFACE_BODY() \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELFootStepObjectInterface_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELFootStepObjectInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IELFootStepObjectInterface() {} \
public: \
	typedef UELFootStepObjectInterface UClassType; \
	typedef IELFootStepObjectInterface ThisClass; \
	static bool Execute_CanStepOnFoot(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELFootStepObjectInterface_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~IELFootStepObjectInterface() {} \
public: \
	typedef UELFootStepObjectInterface UClassType; \
	typedef IELFootStepObjectInterface ThisClass; \
	static bool Execute_CanStepOnFoot(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELFootStepObjectInterface_h_6_PROLOG \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELFootStepObjectInterface_h_8_EVENT_PARMS


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELFootStepObjectInterface_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELFootStepObjectInterface_h_8_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELFootStepObjectInterface_h_8_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELFootStepObjectInterface_h_8_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELFootStepObjectInterface_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELFootStepObjectInterface_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELFootStepObjectInterface_h_8_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELFootStepObjectInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELFootStepObjectInterface_h_8_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELFootStepObjectInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELITE_GAME_API UClass* StaticClass<class UELFootStepObjectInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_ELFootStepObjectInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
