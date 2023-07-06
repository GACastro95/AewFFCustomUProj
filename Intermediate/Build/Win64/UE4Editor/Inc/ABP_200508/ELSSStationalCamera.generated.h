// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
enum class ESSStationalCameraEaseType : uint8;
class AActor;
struct FVector;
#ifdef ABP_200508_ELSSStationalCamera_generated_h
#error "ELSSStationalCamera.generated.h already included, missing '#pragma once' in ELSSStationalCamera.h"
#endif
#define ABP_200508_ELSSStationalCamera_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSStationalCamera_h_17_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSStationalCamera_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeLocator); \
	DECLARE_FUNCTION(execCheckCollision); \
	DECLARE_FUNCTION(execFinish); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execSetActorAttacker); \
	DECLARE_FUNCTION(execSetActorReceiver); \
	DECLARE_FUNCTION(execSetDisable); \
	DECLARE_FUNCTION(execSetDisableCheckCollision); \
	DECLARE_FUNCTION(execSetup);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSStationalCamera_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeLocator); \
	DECLARE_FUNCTION(execCheckCollision); \
	DECLARE_FUNCTION(execFinish); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execSetActorAttacker); \
	DECLARE_FUNCTION(execSetActorReceiver); \
	DECLARE_FUNCTION(execSetDisable); \
	DECLARE_FUNCTION(execSetDisableCheckCollision); \
	DECLARE_FUNCTION(execSetup);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSStationalCamera_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSStationalCamera(); \
	friend struct Z_Construct_UClass_AELSSStationalCamera_Statics; \
public: \
	DECLARE_CLASS(AELSSStationalCamera, ACineCameraActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSStationalCamera)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSStationalCamera_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAELSSStationalCamera(); \
	friend struct Z_Construct_UClass_AELSSStationalCamera_Statics; \
public: \
	DECLARE_CLASS(AELSSStationalCamera, ACineCameraActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSStationalCamera)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSStationalCamera_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSStationalCamera(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSStationalCamera) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSStationalCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSStationalCamera); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSStationalCamera(AELSSStationalCamera&&); \
	NO_API AELSSStationalCamera(const AELSSStationalCamera&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSStationalCamera_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSStationalCamera(AELSSStationalCamera&&); \
	NO_API AELSSStationalCamera(const AELSSStationalCamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSStationalCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSStationalCamera); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSStationalCamera)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSStationalCamera_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BlendOutDuration() { return STRUCT_OFFSET(AELSSStationalCamera, BlendOutDuration); } \
	FORCEINLINE static uint32 __PPO__LocatorParamTable() { return STRUCT_OFFSET(AELSSStationalCamera, LocatorParamTable); } \
	FORCEINLINE static uint32 __PPO__LocatorOwner() { return STRUCT_OFFSET(AELSSStationalCamera, LocatorOwner); } \
	FORCEINLINE static uint32 __PPO__Locators() { return STRUCT_OFFSET(AELSSStationalCamera, Locators); } \
	FORCEINLINE static uint32 __PPO__Attacker() { return STRUCT_OFFSET(AELSSStationalCamera, Attacker); } \
	FORCEINLINE static uint32 __PPO__Receiver() { return STRUCT_OFFSET(AELSSStationalCamera, Receiver); } \
	FORCEINLINE static uint32 __PPO__BaseTransform() { return STRUCT_OFFSET(AELSSStationalCamera, BaseTransform); } \
	FORCEINLINE static uint32 __PPO__CurrentLocatorId() { return STRUCT_OFFSET(AELSSStationalCamera, CurrentLocatorId); } \
	FORCEINLINE static uint32 __PPO__CurrentLocatorParam() { return STRUCT_OFFSET(AELSSStationalCamera, CurrentLocatorParam); } \
	FORCEINLINE static uint32 __PPO__InterpStart() { return STRUCT_OFFSET(AELSSStationalCamera, InterpStart); } \
	FORCEINLINE static uint32 __PPO__InterpStartFocalLength() { return STRUCT_OFFSET(AELSSStationalCamera, InterpStartFocalLength); } \
	FORCEINLINE static uint32 __PPO__InterpTimeCount() { return STRUCT_OFFSET(AELSSStationalCamera, InterpTimeCount); } \
	FORCEINLINE static uint32 __PPO__InterpDuration() { return STRUCT_OFFSET(AELSSStationalCamera, InterpDuration); } \
	FORCEINLINE static uint32 __PPO__InterpEaseType() { return STRUCT_OFFSET(AELSSStationalCamera, InterpEaseType); } \
	FORCEINLINE static uint32 __PPO__CameraComp() { return STRUCT_OFFSET(AELSSStationalCamera, CameraComp); } \
	FORCEINLINE static uint32 __PPO__WorldOffset() { return STRUCT_OFFSET(AELSSStationalCamera, WorldOffset); } \
	FORCEINLINE static uint32 __PPO__Disable() { return STRUCT_OFFSET(AELSSStationalCamera, Disable); } \
	FORCEINLINE static uint32 __PPO__DisableCheckCollision() { return STRUCT_OFFSET(AELSSStationalCamera, DisableCheckCollision); } \
	FORCEINLINE static uint32 __PPO__TrackTgt() { return STRUCT_OFFSET(AELSSStationalCamera, TrackTgt); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSStationalCamera_h_15_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSStationalCamera_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSStationalCamera_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSStationalCamera_h_17_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSStationalCamera_h_17_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSStationalCamera_h_17_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSStationalCamera_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSStationalCamera_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSStationalCamera_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSStationalCamera_h_17_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSStationalCamera_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSStationalCamera_h_17_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSStationalCamera_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSStationalCamera>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSStationalCamera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
