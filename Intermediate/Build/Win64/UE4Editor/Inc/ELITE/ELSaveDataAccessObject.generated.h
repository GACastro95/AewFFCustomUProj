// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESaveDataType : uint8;
#ifdef ELITE_ELSaveDataAccessObject_generated_h
#error "ELSaveDataAccessObject.generated.h already included, missing '#pragma once' in ELSaveDataAccessObject.h"
#endif
#define ELITE_ELSaveDataAccessObject_generated_h

#define AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObject_h_9_SPARSE_DATA
#define AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObject_h_9_RPC_WRAPPERS \
	virtual void OnInitFileList_Implementation(const ESaveDataType SaveDataType, TArray<FString>& Out); \
 \
	DECLARE_FUNCTION(execOnInitFileList);


#define AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObject_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnInitFileList_Implementation(const ESaveDataType SaveDataType, TArray<FString>& Out); \
 \
	DECLARE_FUNCTION(execOnInitFileList);


#define AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObject_h_9_EVENT_PARMS \
	struct ELSaveDataAccessObject_eventOnInitFileList_Parms \
	{ \
		ESaveDataType SaveDataType; \
		TArray<FString> Out; \
	};


#define AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObject_h_9_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObject_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSaveDataAccessObject(); \
	friend struct Z_Construct_UClass_UELSaveDataAccessObject_Statics; \
public: \
	DECLARE_CLASS(UELSaveDataAccessObject, UELSaveDataAccessObjectBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ELITE"), NO_API) \
	DECLARE_SERIALIZER(UELSaveDataAccessObject)


#define AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObject_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUELSaveDataAccessObject(); \
	friend struct Z_Construct_UClass_UELSaveDataAccessObject_Statics; \
public: \
	DECLARE_CLASS(UELSaveDataAccessObject, UELSaveDataAccessObjectBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ELITE"), NO_API) \
	DECLARE_SERIALIZER(UELSaveDataAccessObject)


#define AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObject_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSaveDataAccessObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSaveDataAccessObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSaveDataAccessObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSaveDataAccessObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSaveDataAccessObject(UELSaveDataAccessObject&&); \
	NO_API UELSaveDataAccessObject(const UELSaveDataAccessObject&); \
public:


#define AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObject_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSaveDataAccessObject(UELSaveDataAccessObject&&); \
	NO_API UELSaveDataAccessObject(const UELSaveDataAccessObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSaveDataAccessObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSaveDataAccessObject); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UELSaveDataAccessObject)


#define AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObject_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RequestFileNames() { return STRUCT_OFFSET(UELSaveDataAccessObject, RequestFileNames); }


#define AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObject_h_7_PROLOG \
	AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObject_h_9_EVENT_PARMS


#define AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObject_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObject_h_9_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObject_h_9_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObject_h_9_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObject_h_9_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObject_h_9_INCLASS \
	AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObject_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObject_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObject_h_9_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObject_h_9_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObject_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObject_h_9_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObject_h_9_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObject_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELITE_API UClass* StaticClass<class UELSaveDataAccessObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
