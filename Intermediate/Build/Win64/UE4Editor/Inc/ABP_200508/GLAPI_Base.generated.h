// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGameLiftActivateStatus : uint8;
enum class ESSGameLiftConnectType : uint8;
struct FSSGameLiftConnectData;
#ifdef ABP_200508_GLAPI_Base_generated_h
#error "GLAPI_Base.generated.h already included, missing '#pragma once' in GLAPI_Base.h"
#endif
#define ABP_200508_GLAPI_Base_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_Base_h_12_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_Base_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActivate); \
	DECLARE_FUNCTION(execGetGameLiftConnectData);


#define AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_Base_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActivate); \
	DECLARE_FUNCTION(execGetGameLiftConnectData);


#define AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_Base_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGLAPI_Base(); \
	friend struct Z_Construct_UClass_UGLAPI_Base_Statics; \
public: \
	DECLARE_CLASS(UGLAPI_Base, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UGLAPI_Base)


#define AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_Base_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUGLAPI_Base(); \
	friend struct Z_Construct_UClass_UGLAPI_Base_Statics; \
public: \
	DECLARE_CLASS(UGLAPI_Base, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UGLAPI_Base)


#define AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_Base_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGLAPI_Base(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGLAPI_Base) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGLAPI_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGLAPI_Base); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGLAPI_Base(UGLAPI_Base&&); \
	NO_API UGLAPI_Base(const UGLAPI_Base&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_Base_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGLAPI_Base(UGLAPI_Base&&); \
	NO_API UGLAPI_Base(const UGLAPI_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGLAPI_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGLAPI_Base); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGLAPI_Base)


#define AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_Base_h_12_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_Base_h_10_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_Base_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_Base_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_Base_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_Base_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_Base_h_12_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_Base_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_Base_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_Base_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_Base_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_Base_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_Base_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_Base_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UGLAPI_Base>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_Base_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
