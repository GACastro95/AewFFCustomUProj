// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AELCareerSquareActor;
enum class ECareerCity : uint8;
#ifdef ABP_200508_ELCareerSquareManager_generated_h
#error "ELCareerSquareManager.generated.h already included, missing '#pragma once' in ELCareerSquareManager.h"
#endif
#define ABP_200508_ELCareerSquareManager_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareManager_h_11_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareManager_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCareerSquareTable); \
	DECLARE_FUNCTION(execGetCurrentPlayerStayCity); \
	DECLARE_FUNCTION(execGetCurrentStaySquare); \
	DECLARE_FUNCTION(execGetNextPlayerStayCity); \
	DECLARE_FUNCTION(execGetSquareCityFromId); \
	DECLARE_FUNCTION(execGetSquareFromCityName); \
	DECLARE_FUNCTION(execSetCareerSquareTable); \
	DECLARE_FUNCTION(execSetCurrentPlayerStayCity); \
	DECLARE_FUNCTION(execSetNextPlayerStayCity);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareManager_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCareerSquareTable); \
	DECLARE_FUNCTION(execGetCurrentPlayerStayCity); \
	DECLARE_FUNCTION(execGetCurrentStaySquare); \
	DECLARE_FUNCTION(execGetNextPlayerStayCity); \
	DECLARE_FUNCTION(execGetSquareCityFromId); \
	DECLARE_FUNCTION(execGetSquareFromCityName); \
	DECLARE_FUNCTION(execSetCareerSquareTable); \
	DECLARE_FUNCTION(execSetCurrentPlayerStayCity); \
	DECLARE_FUNCTION(execSetNextPlayerStayCity);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareManager_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELCareerSquareManager(); \
	friend struct Z_Construct_UClass_AELCareerSquareManager_Statics; \
public: \
	DECLARE_CLASS(AELCareerSquareManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELCareerSquareManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareManager_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAELCareerSquareManager(); \
	friend struct Z_Construct_UClass_AELCareerSquareManager_Statics; \
public: \
	DECLARE_CLASS(AELCareerSquareManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELCareerSquareManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareManager_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELCareerSquareManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELCareerSquareManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELCareerSquareManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELCareerSquareManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELCareerSquareManager(AELCareerSquareManager&&); \
	NO_API AELCareerSquareManager(const AELCareerSquareManager&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareManager_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELCareerSquareManager(AELCareerSquareManager&&); \
	NO_API AELCareerSquareManager(const AELCareerSquareManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELCareerSquareManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELCareerSquareManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELCareerSquareManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareManager_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_CareerSquareTable() { return STRUCT_OFFSET(AELCareerSquareManager, m_CareerSquareTable); } \
	FORCEINLINE static uint32 __PPO__m_CurrentPlayerStayCity() { return STRUCT_OFFSET(AELCareerSquareManager, m_CurrentPlayerStayCity); } \
	FORCEINLINE static uint32 __PPO__m_NextPlayerStayCity() { return STRUCT_OFFSET(AELCareerSquareManager, m_NextPlayerStayCity); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareManager_h_9_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareManager_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareManager_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareManager_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareManager_h_11_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareManager_h_11_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareManager_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareManager_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareManager_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareManager_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareManager_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareManager_h_11_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareManager_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELCareerSquareManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
