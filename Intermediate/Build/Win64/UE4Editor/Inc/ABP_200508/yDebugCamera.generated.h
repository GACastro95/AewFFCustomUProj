// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
#ifdef ABP_200508_yDebugCamera_generated_h
#error "yDebugCamera.generated.h already included, missing '#pragma once' in yDebugCamera.h"
#endif
#define ABP_200508_yDebugCamera_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_yDebugCamera_h_10_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_yDebugCamera_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDownedDownButton); \
	DECLARE_FUNCTION(execDownedLBButton); \
	DECLARE_FUNCTION(execDownedLeftButton); \
	DECLARE_FUNCTION(execDownedRBButton); \
	DECLARE_FUNCTION(execDownedRightButton); \
	DECLARE_FUNCTION(execDownedUpButton); \
	DECLARE_FUNCTION(execDownedXButton); \
	DECLARE_FUNCTION(execDownedYButton); \
	DECLARE_FUNCTION(execInputAButton); \
	DECLARE_FUNCTION(execInputBButton); \
	DECLARE_FUNCTION(execInputDownButton); \
	DECLARE_FUNCTION(execInputLBButton); \
	DECLARE_FUNCTION(execInputLeftButton); \
	DECLARE_FUNCTION(execInputLeftStickXAxis); \
	DECLARE_FUNCTION(execInputLeftStickYAxis); \
	DECLARE_FUNCTION(execInputLeftTriggerAxis); \
	DECLARE_FUNCTION(execInputLStickButton); \
	DECLARE_FUNCTION(execInputPadButton); \
	DECLARE_FUNCTION(execInputRBButton); \
	DECLARE_FUNCTION(execInputRightButton); \
	DECLARE_FUNCTION(execInputRightStickXAxis); \
	DECLARE_FUNCTION(execInputRightStickYAxis); \
	DECLARE_FUNCTION(execInputRightTriggerAxis); \
	DECLARE_FUNCTION(execInputRStickButton); \
	DECLARE_FUNCTION(execInputStartButton); \
	DECLARE_FUNCTION(execInputUpButton); \
	DECLARE_FUNCTION(execInputXButton); \
	DECLARE_FUNCTION(execInputYButton); \
	DECLARE_FUNCTION(execSetPlayerController); \
	DECLARE_FUNCTION(execStartGreenBack); \
	DECLARE_FUNCTION(execTakeScreenShot);


#define AewFFCustomUProj_Source_ABP_200508_Public_yDebugCamera_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDownedDownButton); \
	DECLARE_FUNCTION(execDownedLBButton); \
	DECLARE_FUNCTION(execDownedLeftButton); \
	DECLARE_FUNCTION(execDownedRBButton); \
	DECLARE_FUNCTION(execDownedRightButton); \
	DECLARE_FUNCTION(execDownedUpButton); \
	DECLARE_FUNCTION(execDownedXButton); \
	DECLARE_FUNCTION(execDownedYButton); \
	DECLARE_FUNCTION(execInputAButton); \
	DECLARE_FUNCTION(execInputBButton); \
	DECLARE_FUNCTION(execInputDownButton); \
	DECLARE_FUNCTION(execInputLBButton); \
	DECLARE_FUNCTION(execInputLeftButton); \
	DECLARE_FUNCTION(execInputLeftStickXAxis); \
	DECLARE_FUNCTION(execInputLeftStickYAxis); \
	DECLARE_FUNCTION(execInputLeftTriggerAxis); \
	DECLARE_FUNCTION(execInputLStickButton); \
	DECLARE_FUNCTION(execInputPadButton); \
	DECLARE_FUNCTION(execInputRBButton); \
	DECLARE_FUNCTION(execInputRightButton); \
	DECLARE_FUNCTION(execInputRightStickXAxis); \
	DECLARE_FUNCTION(execInputRightStickYAxis); \
	DECLARE_FUNCTION(execInputRightTriggerAxis); \
	DECLARE_FUNCTION(execInputRStickButton); \
	DECLARE_FUNCTION(execInputStartButton); \
	DECLARE_FUNCTION(execInputUpButton); \
	DECLARE_FUNCTION(execInputXButton); \
	DECLARE_FUNCTION(execInputYButton); \
	DECLARE_FUNCTION(execSetPlayerController); \
	DECLARE_FUNCTION(execStartGreenBack); \
	DECLARE_FUNCTION(execTakeScreenShot);


#define AewFFCustomUProj_Source_ABP_200508_Public_yDebugCamera_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAyDebugCamera(); \
	friend struct Z_Construct_UClass_AyDebugCamera_Statics; \
public: \
	DECLARE_CLASS(AyDebugCamera, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AyDebugCamera)


#define AewFFCustomUProj_Source_ABP_200508_Public_yDebugCamera_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAyDebugCamera(); \
	friend struct Z_Construct_UClass_AyDebugCamera_Statics; \
public: \
	DECLARE_CLASS(AyDebugCamera, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AyDebugCamera)


#define AewFFCustomUProj_Source_ABP_200508_Public_yDebugCamera_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AyDebugCamera(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AyDebugCamera) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AyDebugCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AyDebugCamera); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AyDebugCamera(AyDebugCamera&&); \
	NO_API AyDebugCamera(const AyDebugCamera&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_yDebugCamera_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AyDebugCamera(AyDebugCamera&&); \
	NO_API AyDebugCamera(const AyDebugCamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AyDebugCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AyDebugCamera); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AyDebugCamera)


#define AewFFCustomUProj_Source_ABP_200508_Public_yDebugCamera_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_pcController() { return STRUCT_OFFSET(AyDebugCamera, m_pcController); }


#define AewFFCustomUProj_Source_ABP_200508_Public_yDebugCamera_h_8_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_yDebugCamera_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_yDebugCamera_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_yDebugCamera_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_yDebugCamera_h_10_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_yDebugCamera_h_10_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_yDebugCamera_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_yDebugCamera_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_yDebugCamera_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_yDebugCamera_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_yDebugCamera_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_yDebugCamera_h_10_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_yDebugCamera_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AyDebugCamera>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_yDebugCamera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
