// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDateTime;
enum class ESSModeServiceState : uint8;
#ifdef ABP_200508_ELSSModeServiceParam_generated_h
#error "ELSSModeServiceParam.generated.h already included, missing '#pragma once' in ELSSModeServiceParam.h"
#endif
#define ABP_200508_ELSSModeServiceParam_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSModeServiceParam_h_10_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSModeServiceParam_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBody); \
	DECLARE_FUNCTION(execGetMaintenanceInTime); \
	DECLARE_FUNCTION(execGetMaintenanceOutTime); \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execGetTitle); \
	DECLARE_FUNCTION(execIsEndSetup); \
	DECLARE_FUNCTION(execIsIgnoreMaintenance); \
	DECLARE_FUNCTION(execSetup);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSModeServiceParam_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBody); \
	DECLARE_FUNCTION(execGetMaintenanceInTime); \
	DECLARE_FUNCTION(execGetMaintenanceOutTime); \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execGetTitle); \
	DECLARE_FUNCTION(execIsEndSetup); \
	DECLARE_FUNCTION(execIsIgnoreMaintenance); \
	DECLARE_FUNCTION(execSetup);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSModeServiceParam_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSModeServiceParam(); \
	friend struct Z_Construct_UClass_UELSSModeServiceParam_Statics; \
public: \
	DECLARE_CLASS(UELSSModeServiceParam, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSModeServiceParam) \
	static const TCHAR* StaticConfigName() {return TEXT("OnlineServer");} \



#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSModeServiceParam_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUELSSModeServiceParam(); \
	friend struct Z_Construct_UClass_UELSSModeServiceParam_Statics; \
public: \
	DECLARE_CLASS(UELSSModeServiceParam, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSModeServiceParam) \
	static const TCHAR* StaticConfigName() {return TEXT("OnlineServer");} \



#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSModeServiceParam_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSModeServiceParam(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSModeServiceParam) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSModeServiceParam); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSModeServiceParam); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSModeServiceParam(UELSSModeServiceParam&&); \
	NO_API UELSSModeServiceParam(const UELSSModeServiceParam&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSModeServiceParam_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSModeServiceParam(UELSSModeServiceParam&&); \
	NO_API UELSSModeServiceParam(const UELSSModeServiceParam&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSModeServiceParam); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSModeServiceParam); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSModeServiceParam)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSModeServiceParam_h_10_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSModeServiceParam_h_8_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSModeServiceParam_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSModeServiceParam_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSModeServiceParam_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSModeServiceParam_h_10_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSModeServiceParam_h_10_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSModeServiceParam_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSModeServiceParam_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSModeServiceParam_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSModeServiceParam_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSModeServiceParam_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSModeServiceParam_h_10_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSModeServiceParam_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSModeServiceParam>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSModeServiceParam_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
