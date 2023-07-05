// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AELSSPlayer;
#ifdef ABP_200508_ELSSPanelInGameDirectionBase_generated_h
#error "ELSSPanelInGameDirectionBase.generated.h already included, missing '#pragma once' in ELSSPanelInGameDirectionBase.h"
#endif
#define ABP_200508_ELSSPanelInGameDirectionBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameDirectionBase_h_11_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameDirectionBase_h_11_RPC_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameDirectionBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameDirectionBase_h_11_EVENT_PARMS \
	struct ELSSPanelInGameDirectionBase_eventIsPlayEndMatchEnd_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSPanelInGameDirectionBase_eventIsPlayEndMatchEnd_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSSPanelInGameDirectionBase_eventIsPlayFightEnd_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSPanelInGameDirectionBase_eventIsPlayFightEnd_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSSPanelInGameDirectionBase_eventOpenNamePlate_Parms \
	{ \
		AELSSPlayer* inPlayer; \
		int32 InChampionNum; \
		FString InRingName; \
		FString InGamerTag; \
	}; \
	struct ELSSPanelInGameDirectionBase_eventPlayEndMatch_Parms \
	{ \
		bool InIsWinner; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameDirectionBase_h_11_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameDirectionBase_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSPanelInGameDirectionBase(); \
	friend struct Z_Construct_UClass_UELSSPanelInGameDirectionBase_Statics; \
public: \
	DECLARE_CLASS(UELSSPanelInGameDirectionBase, UELSSPanelBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSPanelInGameDirectionBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameDirectionBase_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUELSSPanelInGameDirectionBase(); \
	friend struct Z_Construct_UClass_UELSSPanelInGameDirectionBase_Statics; \
public: \
	DECLARE_CLASS(UELSSPanelInGameDirectionBase, UELSSPanelBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSPanelInGameDirectionBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameDirectionBase_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSPanelInGameDirectionBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSPanelInGameDirectionBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSPanelInGameDirectionBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSPanelInGameDirectionBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSPanelInGameDirectionBase(UELSSPanelInGameDirectionBase&&); \
	NO_API UELSSPanelInGameDirectionBase(const UELSSPanelInGameDirectionBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameDirectionBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSPanelInGameDirectionBase(UELSSPanelInGameDirectionBase&&); \
	NO_API UELSSPanelInGameDirectionBase(const UELSSPanelInGameDirectionBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSPanelInGameDirectionBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSPanelInGameDirectionBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSPanelInGameDirectionBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameDirectionBase_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EventOnEndPlayFightAnim() { return STRUCT_OFFSET(UELSSPanelInGameDirectionBase, EventOnEndPlayFightAnim); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameDirectionBase_h_9_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameDirectionBase_h_11_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameDirectionBase_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameDirectionBase_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameDirectionBase_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameDirectionBase_h_11_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameDirectionBase_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameDirectionBase_h_11_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameDirectionBase_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameDirectionBase_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameDirectionBase_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameDirectionBase_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameDirectionBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameDirectionBase_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameDirectionBase_h_11_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameDirectionBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSPanelInGameDirectionBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameDirectionBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
