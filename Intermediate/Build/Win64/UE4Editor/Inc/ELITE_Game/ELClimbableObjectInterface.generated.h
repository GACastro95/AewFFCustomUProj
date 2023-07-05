// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UELHoldComponent;
struct FVector;
#ifdef ELITE_GAME_ELClimbableObjectInterface_generated_h
#error "ELClimbableObjectInterface.generated.h already included, missing '#pragma once' in ELClimbableObjectInterface.h"
#endif
#define ELITE_GAME_ELClimbableObjectInterface_generated_h

#define AewFFCustomUProj_Source_ELITE_Game_Public_ELClimbableObjectInterface_h_11_SPARSE_DATA
#define AewFFCustomUProj_Source_ELITE_Game_Public_ELClimbableObjectInterface_h_11_RPC_WRAPPERS \
	virtual void FindHoldComponent_Implementation(UELHoldComponent*& HoldComponent, FVector CurrentLocation, bool bHand, bool bFoot, const FName TagName) const {}; \
 \
	DECLARE_FUNCTION(execFindHoldComponent);


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELClimbableObjectInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void FindHoldComponent_Implementation(UELHoldComponent*& HoldComponent, FVector CurrentLocation, bool bHand, bool bFoot, const FName TagName) const {}; \
 \
	DECLARE_FUNCTION(execFindHoldComponent);


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELClimbableObjectInterface_h_11_EVENT_PARMS \
	struct ELClimbableObjectInterface_eventFindHoldComponent_Parms \
	{ \
		UELHoldComponent* HoldComponent; \
		FVector CurrentLocation; \
		bool bHand; \
		bool bFoot; \
		FName TagName; \
	};


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELClimbableObjectInterface_h_11_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ELITE_Game_Public_ELClimbableObjectInterface_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ELITE_GAME_API UELClimbableObjectInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELClimbableObjectInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ELITE_GAME_API, UELClimbableObjectInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELClimbableObjectInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ELITE_GAME_API UELClimbableObjectInterface(UELClimbableObjectInterface&&); \
	ELITE_GAME_API UELClimbableObjectInterface(const UELClimbableObjectInterface&); \
public:


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELClimbableObjectInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ELITE_GAME_API UELClimbableObjectInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ELITE_GAME_API UELClimbableObjectInterface(UELClimbableObjectInterface&&); \
	ELITE_GAME_API UELClimbableObjectInterface(const UELClimbableObjectInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ELITE_GAME_API, UELClimbableObjectInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELClimbableObjectInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELClimbableObjectInterface)


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELClimbableObjectInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUELClimbableObjectInterface(); \
	friend struct Z_Construct_UClass_UELClimbableObjectInterface_Statics; \
public: \
	DECLARE_CLASS(UELClimbableObjectInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ELITE_Game"), ELITE_GAME_API) \
	DECLARE_SERIALIZER(UELClimbableObjectInterface)


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELClimbableObjectInterface_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELClimbableObjectInterface_h_11_GENERATED_UINTERFACE_BODY() \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELClimbableObjectInterface_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELClimbableObjectInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELClimbableObjectInterface_h_11_GENERATED_UINTERFACE_BODY() \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELClimbableObjectInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELClimbableObjectInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IELClimbableObjectInterface() {} \
public: \
	typedef UELClimbableObjectInterface UClassType; \
	typedef IELClimbableObjectInterface ThisClass; \
	static void Execute_FindHoldComponent(const UObject* O, UELHoldComponent*& HoldComponent, FVector CurrentLocation, bool bHand, bool bFoot, const FName TagName); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELClimbableObjectInterface_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~IELClimbableObjectInterface() {} \
public: \
	typedef UELClimbableObjectInterface UClassType; \
	typedef IELClimbableObjectInterface ThisClass; \
	static void Execute_FindHoldComponent(const UObject* O, UELHoldComponent*& HoldComponent, FVector CurrentLocation, bool bHand, bool bFoot, const FName TagName); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELClimbableObjectInterface_h_9_PROLOG \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELClimbableObjectInterface_h_11_EVENT_PARMS


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELClimbableObjectInterface_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELClimbableObjectInterface_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELClimbableObjectInterface_h_11_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELClimbableObjectInterface_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELClimbableObjectInterface_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELClimbableObjectInterface_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELClimbableObjectInterface_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELClimbableObjectInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELClimbableObjectInterface_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELClimbableObjectInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELITE_GAME_API UClass* StaticClass<class UELClimbableObjectInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_ELClimbableObjectInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
