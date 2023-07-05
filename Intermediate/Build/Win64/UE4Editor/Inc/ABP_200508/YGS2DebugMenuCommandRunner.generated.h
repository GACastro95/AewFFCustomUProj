// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EYGS2ErrorType : uint8;
class UYGS2RequestBase;
#ifdef ABP_200508_YGS2DebugMenuCommandRunner_generated_h
#error "YGS2DebugMenuCommandRunner.generated.h already included, missing '#pragma once' in YGS2DebugMenuCommandRunner.h"
#endif
#define ABP_200508_YGS2DebugMenuCommandRunner_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenuCommandRunner_h_11_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenuCommandRunner_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRequestErrorString); \
	DECLARE_FUNCTION(execOnYGS2Response);


#define AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenuCommandRunner_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRequestErrorString); \
	DECLARE_FUNCTION(execOnYGS2Response);


#define AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenuCommandRunner_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUYGS2DebugMenuCommandRunner(); \
	friend struct Z_Construct_UClass_UYGS2DebugMenuCommandRunner_Statics; \
public: \
	DECLARE_CLASS(UYGS2DebugMenuCommandRunner, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UYGS2DebugMenuCommandRunner)


#define AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenuCommandRunner_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUYGS2DebugMenuCommandRunner(); \
	friend struct Z_Construct_UClass_UYGS2DebugMenuCommandRunner_Statics; \
public: \
	DECLARE_CLASS(UYGS2DebugMenuCommandRunner, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UYGS2DebugMenuCommandRunner)


#define AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenuCommandRunner_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UYGS2DebugMenuCommandRunner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UYGS2DebugMenuCommandRunner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYGS2DebugMenuCommandRunner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYGS2DebugMenuCommandRunner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UYGS2DebugMenuCommandRunner(UYGS2DebugMenuCommandRunner&&); \
	NO_API UYGS2DebugMenuCommandRunner(const UYGS2DebugMenuCommandRunner&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenuCommandRunner_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UYGS2DebugMenuCommandRunner(UYGS2DebugMenuCommandRunner&&); \
	NO_API UYGS2DebugMenuCommandRunner(const UYGS2DebugMenuCommandRunner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYGS2DebugMenuCommandRunner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYGS2DebugMenuCommandRunner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UYGS2DebugMenuCommandRunner)


#define AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenuCommandRunner_h_11_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenuCommandRunner_h_9_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenuCommandRunner_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenuCommandRunner_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenuCommandRunner_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenuCommandRunner_h_11_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenuCommandRunner_h_11_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenuCommandRunner_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenuCommandRunner_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenuCommandRunner_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenuCommandRunner_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenuCommandRunner_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenuCommandRunner_h_11_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenuCommandRunner_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UYGS2DebugMenuCommandRunner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenuCommandRunner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
