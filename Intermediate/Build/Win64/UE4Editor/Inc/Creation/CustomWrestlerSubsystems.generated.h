// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EFaceType : uint8;
struct FEditPaint;
enum class EGender : uint8;
struct FEditParts;
class UEditWrestlerPaintAsset;
class UEditWrestlerPartsAsset;
class UDataTable;
#ifdef CREATION_CustomWrestlerSubsystems_generated_h
#error "CustomWrestlerSubsystems.generated.h already included, missing '#pragma once' in CustomWrestlerSubsystems.h"
#endif
#define CREATION_CustomWrestlerSubsystems_generated_h

#define AewFFCustomUProj_Source_Creation_Public_CustomWrestlerSubsystems_h_16_SPARSE_DATA
#define AewFFCustomUProj_Source_Creation_Public_CustomWrestlerSubsystems_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindFaceType); \
	DECLARE_FUNCTION(execGetCustomPaintList); \
	DECLARE_FUNCTION(execGetCustomPartsList); \
	DECLARE_FUNCTION(execGetPaintAsset); \
	DECLARE_FUNCTION(execGetPartsAsset); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execSetEditPaintListTableOnlyEditor); \
	DECLARE_FUNCTION(execSetEditPartsListTableOnlyEditor);


#define AewFFCustomUProj_Source_Creation_Public_CustomWrestlerSubsystems_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindFaceType); \
	DECLARE_FUNCTION(execGetCustomPaintList); \
	DECLARE_FUNCTION(execGetCustomPartsList); \
	DECLARE_FUNCTION(execGetPaintAsset); \
	DECLARE_FUNCTION(execGetPartsAsset); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execSetEditPaintListTableOnlyEditor); \
	DECLARE_FUNCTION(execSetEditPartsListTableOnlyEditor);


#define AewFFCustomUProj_Source_Creation_Public_CustomWrestlerSubsystems_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomWrestlerSubsystems(); \
	friend struct Z_Construct_UClass_UCustomWrestlerSubsystems_Statics; \
public: \
	DECLARE_CLASS(UCustomWrestlerSubsystems, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Creation"), NO_API) \
	DECLARE_SERIALIZER(UCustomWrestlerSubsystems)


#define AewFFCustomUProj_Source_Creation_Public_CustomWrestlerSubsystems_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCustomWrestlerSubsystems(); \
	friend struct Z_Construct_UClass_UCustomWrestlerSubsystems_Statics; \
public: \
	DECLARE_CLASS(UCustomWrestlerSubsystems, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Creation"), NO_API) \
	DECLARE_SERIALIZER(UCustomWrestlerSubsystems)


#define AewFFCustomUProj_Source_Creation_Public_CustomWrestlerSubsystems_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomWrestlerSubsystems(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomWrestlerSubsystems) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomWrestlerSubsystems); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomWrestlerSubsystems); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomWrestlerSubsystems(UCustomWrestlerSubsystems&&); \
	NO_API UCustomWrestlerSubsystems(const UCustomWrestlerSubsystems&); \
public:


#define AewFFCustomUProj_Source_Creation_Public_CustomWrestlerSubsystems_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomWrestlerSubsystems(UCustomWrestlerSubsystems&&); \
	NO_API UCustomWrestlerSubsystems(const UCustomWrestlerSubsystems&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomWrestlerSubsystems); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomWrestlerSubsystems); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomWrestlerSubsystems)


#define AewFFCustomUProj_Source_Creation_Public_CustomWrestlerSubsystems_h_16_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_Creation_Public_CustomWrestlerSubsystems_h_14_PROLOG
#define AewFFCustomUProj_Source_Creation_Public_CustomWrestlerSubsystems_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_Creation_Public_CustomWrestlerSubsystems_h_16_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_Creation_Public_CustomWrestlerSubsystems_h_16_SPARSE_DATA \
	AewFFCustomUProj_Source_Creation_Public_CustomWrestlerSubsystems_h_16_RPC_WRAPPERS \
	AewFFCustomUProj_Source_Creation_Public_CustomWrestlerSubsystems_h_16_INCLASS \
	AewFFCustomUProj_Source_Creation_Public_CustomWrestlerSubsystems_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_Creation_Public_CustomWrestlerSubsystems_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_Creation_Public_CustomWrestlerSubsystems_h_16_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_Creation_Public_CustomWrestlerSubsystems_h_16_SPARSE_DATA \
	AewFFCustomUProj_Source_Creation_Public_CustomWrestlerSubsystems_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_Creation_Public_CustomWrestlerSubsystems_h_16_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_Creation_Public_CustomWrestlerSubsystems_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CREATION_API UClass* StaticClass<class UCustomWrestlerSubsystems>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_Creation_Public_CustomWrestlerSubsystems_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
