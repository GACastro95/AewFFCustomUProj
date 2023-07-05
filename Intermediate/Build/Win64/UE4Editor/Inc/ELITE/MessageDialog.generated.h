// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMessageDialog;
#ifdef ELITE_MessageDialog_generated_h
#error "MessageDialog.generated.h already included, missing '#pragma once' in MessageDialog.h"
#endif
#define ELITE_MessageDialog_generated_h

#define AewFFCustomUProj_Source_ELITE_Public_MessageDialog_h_10_SPARSE_DATA
#define AewFFCustomUProj_Source_ELITE_Public_MessageDialog_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCallDialogYesNo); \
	DECLARE_FUNCTION(execCreateMessageDialog);


#define AewFFCustomUProj_Source_ELITE_Public_MessageDialog_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallDialogYesNo); \
	DECLARE_FUNCTION(execCreateMessageDialog);


#define AewFFCustomUProj_Source_ELITE_Public_MessageDialog_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMessageDialog(); \
	friend struct Z_Construct_UClass_UMessageDialog_Statics; \
public: \
	DECLARE_CLASS(UMessageDialog, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ELITE"), NO_API) \
	DECLARE_SERIALIZER(UMessageDialog)


#define AewFFCustomUProj_Source_ELITE_Public_MessageDialog_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUMessageDialog(); \
	friend struct Z_Construct_UClass_UMessageDialog_Statics; \
public: \
	DECLARE_CLASS(UMessageDialog, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ELITE"), NO_API) \
	DECLARE_SERIALIZER(UMessageDialog)


#define AewFFCustomUProj_Source_ELITE_Public_MessageDialog_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMessageDialog(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMessageDialog) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMessageDialog); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMessageDialog); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMessageDialog(UMessageDialog&&); \
	NO_API UMessageDialog(const UMessageDialog&); \
public:


#define AewFFCustomUProj_Source_ELITE_Public_MessageDialog_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMessageDialog(UMessageDialog&&); \
	NO_API UMessageDialog(const UMessageDialog&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMessageDialog); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMessageDialog); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMessageDialog)


#define AewFFCustomUProj_Source_ELITE_Public_MessageDialog_h_10_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ELITE_Public_MessageDialog_h_8_PROLOG
#define AewFFCustomUProj_Source_ELITE_Public_MessageDialog_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Public_MessageDialog_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Public_MessageDialog_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Public_MessageDialog_h_10_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Public_MessageDialog_h_10_INCLASS \
	AewFFCustomUProj_Source_ELITE_Public_MessageDialog_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Public_MessageDialog_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Public_MessageDialog_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Public_MessageDialog_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Public_MessageDialog_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Public_MessageDialog_h_10_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Public_MessageDialog_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELITE_API UClass* StaticClass<class UMessageDialog>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Public_MessageDialog_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
