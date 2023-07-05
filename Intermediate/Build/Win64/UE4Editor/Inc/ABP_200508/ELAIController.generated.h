// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBehaviorTreeType : uint8;
#ifdef ABP_200508_ELAIController_generated_h
#error "ELAIController.generated.h already included, missing '#pragma once' in ELAIController.h"
#endif
#define ABP_200508_ELAIController_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELAIController_h_11_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELAIController_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSwitchAIController_N);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELAIController_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSwitchAIController_N);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELAIController_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELAIController(); \
	friend struct Z_Construct_UClass_AELAIController_Statics; \
public: \
	DECLARE_CLASS(AELAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELAIController)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELAIController_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAELAIController(); \
	friend struct Z_Construct_UClass_AELAIController_Statics; \
public: \
	DECLARE_CLASS(AELAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELAIController)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELAIController_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELAIController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELAIController(AELAIController&&); \
	NO_API AELAIController(const AELAIController&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELAIController_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELAIController(AELAIController&&); \
	NO_API AELAIController(const AELAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELAIController)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELAIController_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BehaviorTreeArray() { return STRUCT_OFFSET(AELAIController, BehaviorTreeArray); } \
	FORCEINLINE static uint32 __PPO__bTrainingMode_N() { return STRUCT_OFFSET(AELAIController, bTrainingMode_N); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELAIController_h_9_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELAIController_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELAIController_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELAIController_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELAIController_h_11_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELAIController_h_11_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELAIController_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELAIController_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELAIController_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELAIController_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELAIController_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELAIController_h_11_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELAIController_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
