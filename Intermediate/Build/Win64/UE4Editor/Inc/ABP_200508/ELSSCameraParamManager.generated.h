// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESSCameraParamType : uint8;
enum class ESSCameraBaseParamID : uint8;
struct FSSCameraStateControlParam;
enum class ESSCameraPlaceType : uint8;
enum class ESSCameraState : uint8;
#ifdef ABP_200508_ELSSCameraParamManager_generated_h
#error "ELSSCameraParamManager.generated.h already included, missing '#pragma once' in ELSSCameraParamManager.h"
#endif
#define ABP_200508_ELSSCameraParamManager_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCameraParamManager_h_18_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCameraParamManager_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCameraParamType); \
	DECLARE_FUNCTION(execSetBaseParamWithBlend);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCameraParamManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCameraParamType); \
	DECLARE_FUNCTION(execSetBaseParamWithBlend);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCameraParamManager_h_18_EVENT_PARMS \
	struct ELSSCameraParamManager_eventGetStateControlParam_Parms \
	{ \
		FSSCameraStateControlParam OutParam; \
	}; \
	struct ELSSCameraParamManager_eventSetBaseParam_Parms \
	{ \
		ESSCameraBaseParamID inControlMode; \
	}; \
	struct ELSSCameraParamManager_eventSetPlaceParam_Parms \
	{ \
		ESSCameraPlaceType inPlaceType; \
	}; \
	struct ELSSCameraParamManager_eventSetStateParam_Parms \
	{ \
		ESSCameraState inState; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCameraParamManager_h_18_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCameraParamManager_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSCameraParamManager(); \
	friend struct Z_Construct_UClass_UELSSCameraParamManager_Statics; \
public: \
	DECLARE_CLASS(UELSSCameraParamManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSCameraParamManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCameraParamManager_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUELSSCameraParamManager(); \
	friend struct Z_Construct_UClass_UELSSCameraParamManager_Statics; \
public: \
	DECLARE_CLASS(UELSSCameraParamManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSCameraParamManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCameraParamManager_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSCameraParamManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSCameraParamManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSCameraParamManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSCameraParamManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSCameraParamManager(UELSSCameraParamManager&&); \
	NO_API UELSSCameraParamManager(const UELSSCameraParamManager&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCameraParamManager_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSCameraParamManager(UELSSCameraParamManager&&); \
	NO_API UELSSCameraParamManager(const UELSSCameraParamManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSCameraParamManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSCameraParamManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSCameraParamManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCameraParamManager_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BaseParamTarget() { return STRUCT_OFFSET(UELSSCameraParamManager, BaseParamTarget); } \
	FORCEINLINE static uint32 __PPO__BaseParamOrigin() { return STRUCT_OFFSET(UELSSCameraParamManager, BaseParamOrigin); } \
	FORCEINLINE static uint32 __PPO__BaseParam() { return STRUCT_OFFSET(UELSSCameraParamManager, BaseParam); } \
	FORCEINLINE static uint32 __PPO__StateParam() { return STRUCT_OFFSET(UELSSCameraParamManager, StateParam); } \
	FORCEINLINE static uint32 __PPO__PlaceParam() { return STRUCT_OFFSET(UELSSCameraParamManager, PlaceParam); } \
	FORCEINLINE static uint32 __PPO__CurrentState() { return STRUCT_OFFSET(UELSSCameraParamManager, CurrentState); } \
	FORCEINLINE static uint32 __PPO__CurrentPlaceType() { return STRUCT_OFFSET(UELSSCameraParamManager, CurrentPlaceType); } \
	FORCEINLINE static uint32 __PPO__BaseParamLerpRemainTime() { return STRUCT_OFFSET(UELSSCameraParamManager, BaseParamLerpRemainTime); } \
	FORCEINLINE static uint32 __PPO__OwnerActor() { return STRUCT_OFFSET(UELSSCameraParamManager, OwnerActor); } \
	FORCEINLINE static uint32 __PPO__CameraParamType() { return STRUCT_OFFSET(UELSSCameraParamManager, CameraParamType); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCameraParamManager_h_16_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCameraParamManager_h_18_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCameraParamManager_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCameraParamManager_h_18_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCameraParamManager_h_18_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCameraParamManager_h_18_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCameraParamManager_h_18_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCameraParamManager_h_18_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCameraParamManager_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCameraParamManager_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCameraParamManager_h_18_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCameraParamManager_h_18_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCameraParamManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCameraParamManager_h_18_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCameraParamManager_h_18_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCameraParamManager_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSCameraParamManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSCameraParamManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
