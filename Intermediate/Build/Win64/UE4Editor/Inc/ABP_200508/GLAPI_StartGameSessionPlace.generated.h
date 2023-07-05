// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FStartGameSessionPlace_RequestParam;
enum class EGameLiftActivateStatus : uint8;
class UGameLiftClientObject;
class UGLAPI_StartGameSessionPlace;
#ifdef ABP_200508_GLAPI_StartGameSessionPlace_generated_h
#error "GLAPI_StartGameSessionPlace.generated.h already included, missing '#pragma once' in GLAPI_StartGameSessionPlace.h"
#endif
#define ABP_200508_GLAPI_StartGameSessionPlace_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_StartGameSessionPlace_h_15_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_StartGameSessionPlace_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActivate_RequestParam); \
	DECLARE_FUNCTION(execStartGameSessionPlacementAPItoRequestParam);


#define AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_StartGameSessionPlace_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActivate_RequestParam); \
	DECLARE_FUNCTION(execStartGameSessionPlacementAPItoRequestParam);


#define AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_StartGameSessionPlace_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGLAPI_StartGameSessionPlace(); \
	friend struct Z_Construct_UClass_UGLAPI_StartGameSessionPlace_Statics; \
public: \
	DECLARE_CLASS(UGLAPI_StartGameSessionPlace, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UGLAPI_StartGameSessionPlace)


#define AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_StartGameSessionPlace_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUGLAPI_StartGameSessionPlace(); \
	friend struct Z_Construct_UClass_UGLAPI_StartGameSessionPlace_Statics; \
public: \
	DECLARE_CLASS(UGLAPI_StartGameSessionPlace, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UGLAPI_StartGameSessionPlace)


#define AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_StartGameSessionPlace_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGLAPI_StartGameSessionPlace(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGLAPI_StartGameSessionPlace) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGLAPI_StartGameSessionPlace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGLAPI_StartGameSessionPlace); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGLAPI_StartGameSessionPlace(UGLAPI_StartGameSessionPlace&&); \
	NO_API UGLAPI_StartGameSessionPlace(const UGLAPI_StartGameSessionPlace&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_StartGameSessionPlace_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGLAPI_StartGameSessionPlace(UGLAPI_StartGameSessionPlace&&); \
	NO_API UGLAPI_StartGameSessionPlace(const UGLAPI_StartGameSessionPlace&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGLAPI_StartGameSessionPlace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGLAPI_StartGameSessionPlace); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGLAPI_StartGameSessionPlace)


#define AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_StartGameSessionPlace_h_15_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_StartGameSessionPlace_h_13_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_StartGameSessionPlace_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_StartGameSessionPlace_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_StartGameSessionPlace_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_StartGameSessionPlace_h_15_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_StartGameSessionPlace_h_15_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_StartGameSessionPlace_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_StartGameSessionPlace_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_StartGameSessionPlace_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_StartGameSessionPlace_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_StartGameSessionPlace_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_StartGameSessionPlace_h_15_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_StartGameSessionPlace_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UGLAPI_StartGameSessionPlace>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_GLAPI_StartGameSessionPlace_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
