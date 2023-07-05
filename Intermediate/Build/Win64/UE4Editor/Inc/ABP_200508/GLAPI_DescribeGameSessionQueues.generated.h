// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGameLiftActivateStatus : uint8;
class UGameLiftClientObject;
class UGLAPI_DescribeGameSessionQueues;
#ifdef ABP_200508_GLAPI_DescribeGameSessionQueues_generated_h
#error "GLAPI_DescribeGameSessionQueues.generated.h already included, missing '#pragma once' in GLAPI_DescribeGameSessionQueues.h"
#endif
#define ABP_200508_GLAPI_DescribeGameSessionQueues_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_DescribeGameSessionQueues_h_14_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_DescribeGameSessionQueues_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActivate); \
	DECLARE_FUNCTION(execDescribeGameSessionQueues);


#define AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_DescribeGameSessionQueues_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActivate); \
	DECLARE_FUNCTION(execDescribeGameSessionQueues);


#define AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_DescribeGameSessionQueues_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGLAPI_DescribeGameSessionQueues(); \
	friend struct Z_Construct_UClass_UGLAPI_DescribeGameSessionQueues_Statics; \
public: \
	DECLARE_CLASS(UGLAPI_DescribeGameSessionQueues, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UGLAPI_DescribeGameSessionQueues)


#define AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_DescribeGameSessionQueues_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUGLAPI_DescribeGameSessionQueues(); \
	friend struct Z_Construct_UClass_UGLAPI_DescribeGameSessionQueues_Statics; \
public: \
	DECLARE_CLASS(UGLAPI_DescribeGameSessionQueues, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UGLAPI_DescribeGameSessionQueues)


#define AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_DescribeGameSessionQueues_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGLAPI_DescribeGameSessionQueues(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGLAPI_DescribeGameSessionQueues) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGLAPI_DescribeGameSessionQueues); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGLAPI_DescribeGameSessionQueues); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGLAPI_DescribeGameSessionQueues(UGLAPI_DescribeGameSessionQueues&&); \
	NO_API UGLAPI_DescribeGameSessionQueues(const UGLAPI_DescribeGameSessionQueues&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_DescribeGameSessionQueues_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGLAPI_DescribeGameSessionQueues(UGLAPI_DescribeGameSessionQueues&&); \
	NO_API UGLAPI_DescribeGameSessionQueues(const UGLAPI_DescribeGameSessionQueues&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGLAPI_DescribeGameSessionQueues); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGLAPI_DescribeGameSessionQueues); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGLAPI_DescribeGameSessionQueues)


#define AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_DescribeGameSessionQueues_h_14_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_DescribeGameSessionQueues_h_12_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_DescribeGameSessionQueues_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_DescribeGameSessionQueues_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_DescribeGameSessionQueues_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_DescribeGameSessionQueues_h_14_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_DescribeGameSessionQueues_h_14_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_DescribeGameSessionQueues_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_DescribeGameSessionQueues_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_DescribeGameSessionQueues_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_DescribeGameSessionQueues_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_DescribeGameSessionQueues_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_DescribeGameSessionQueues_h_14_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_DescribeGameSessionQueues_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UGLAPI_DescribeGameSessionQueues>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_DescribeGameSessionQueues_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
