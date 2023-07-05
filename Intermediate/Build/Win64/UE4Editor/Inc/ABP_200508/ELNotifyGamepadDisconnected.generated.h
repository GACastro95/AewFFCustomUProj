// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputDeviceInfo;
class APlayerController;
#ifdef ABP_200508_ELNotifyGamepadDisconnected_generated_h
#error "ELNotifyGamepadDisconnected.generated.h already included, missing '#pragma once' in ELNotifyGamepadDisconnected.h"
#endif
#define ABP_200508_ELNotifyGamepadDisconnected_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELNotifyGamepadDisconnected_h_11_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELNotifyGamepadDisconnected_h_11_RPC_WRAPPERS \
	virtual bool IsActiveDialog_Implementation(); \
 \
	DECLARE_FUNCTION(execDisconnecteApplet); \
	DECLARE_FUNCTION(execIsActiveDialog);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNotifyGamepadDisconnected_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsActiveDialog_Implementation(); \
 \
	DECLARE_FUNCTION(execDisconnecteApplet); \
	DECLARE_FUNCTION(execIsActiveDialog);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNotifyGamepadDisconnected_h_11_EVENT_PARMS \
	struct ELNotifyGamepadDisconnected_eventGetDeviceInfo_Parms \
	{ \
		FInputDeviceInfo ReturnValue; \
	}; \
	struct ELNotifyGamepadDisconnected_eventIsActiveDialog_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELNotifyGamepadDisconnected_eventIsActiveDialog_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELNotifyGamepadDisconnected_eventOnDisconnectedGamepad_Parms \
	{ \
		FInputDeviceInfo _deviceInfo; \
	}; \
	struct ELNotifyGamepadDisconnected_eventOnManipulateCursor_Parms \
	{ \
		bool _isLeft; \
	}; \
	struct ELNotifyGamepadDisconnected_eventOnManipulateDecideBtn_Parms \
	{ \
		APlayerController* PlayerController; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNotifyGamepadDisconnected_h_11_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELNotifyGamepadDisconnected_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELNotifyGamepadDisconnected(); \
	friend struct Z_Construct_UClass_AELNotifyGamepadDisconnected_Statics; \
public: \
	DECLARE_CLASS(AELNotifyGamepadDisconnected, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELNotifyGamepadDisconnected)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNotifyGamepadDisconnected_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAELNotifyGamepadDisconnected(); \
	friend struct Z_Construct_UClass_AELNotifyGamepadDisconnected_Statics; \
public: \
	DECLARE_CLASS(AELNotifyGamepadDisconnected, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELNotifyGamepadDisconnected)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNotifyGamepadDisconnected_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELNotifyGamepadDisconnected(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELNotifyGamepadDisconnected) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELNotifyGamepadDisconnected); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELNotifyGamepadDisconnected); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELNotifyGamepadDisconnected(AELNotifyGamepadDisconnected&&); \
	NO_API AELNotifyGamepadDisconnected(const AELNotifyGamepadDisconnected&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNotifyGamepadDisconnected_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELNotifyGamepadDisconnected(AELNotifyGamepadDisconnected&&); \
	NO_API AELNotifyGamepadDisconnected(const AELNotifyGamepadDisconnected&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELNotifyGamepadDisconnected); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELNotifyGamepadDisconnected); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELNotifyGamepadDisconnected)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNotifyGamepadDisconnected_h_11_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELNotifyGamepadDisconnected_h_9_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNotifyGamepadDisconnected_h_11_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNotifyGamepadDisconnected_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNotifyGamepadDisconnected_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNotifyGamepadDisconnected_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNotifyGamepadDisconnected_h_11_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNotifyGamepadDisconnected_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNotifyGamepadDisconnected_h_11_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNotifyGamepadDisconnected_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNotifyGamepadDisconnected_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNotifyGamepadDisconnected_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNotifyGamepadDisconnected_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNotifyGamepadDisconnected_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNotifyGamepadDisconnected_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNotifyGamepadDisconnected_h_11_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNotifyGamepadDisconnected_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELNotifyGamepadDisconnected>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELNotifyGamepadDisconnected_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
