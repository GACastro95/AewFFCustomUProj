// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundAtomCue;
struct FELTmpJukeboxSaveData;
#ifdef ABP_200508_SaveDataObject_JukeBox_generated_h
#error "SaveDataObject_JukeBox.generated.h already included, missing '#pragma once' in SaveDataObject_JukeBox.h"
#endif
#define ABP_200508_SaveDataObject_JukeBox_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_JukeBox_h_11_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_JukeBox_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentJukeBoxPlayCue); \
	DECLARE_FUNCTION(execGetCurrentPlayID); \
	DECLARE_FUNCTION(execGetJukeBoxCheckList); \
	DECLARE_FUNCTION(execGetJukeBoxCheckListForID); \
	DECLARE_FUNCTION(execGetJukeBoxPlayCue); \
	DECLARE_FUNCTION(execGetJukeBoxPlayedList); \
	DECLARE_FUNCTION(execGetJukeBoxPlayedListForID); \
	DECLARE_FUNCTION(execGetJukeBoxPlayList); \
	DECLARE_FUNCTION(execGetJukeBoxSortList); \
	DECLARE_FUNCTION(execGetJukeBoxSortListForID); \
	DECLARE_FUNCTION(execGetNextJukeBoxPlayCue); \
	DECLARE_FUNCTION(execGetNextPlayID); \
	DECLARE_FUNCTION(execInitJukeBoxPlayedList); \
	DECLARE_FUNCTION(execInitJukeBoxSortList); \
	DECLARE_FUNCTION(execIsCreateSavedata); \
	DECLARE_FUNCTION(execIsRandomPlayback); \
	DECLARE_FUNCTION(execSetCreateSavedata); \
	DECLARE_FUNCTION(execSetCurrentPlayID); \
	DECLARE_FUNCTION(execSetJukeBoxCheckListForID); \
	DECLARE_FUNCTION(execSetJukeBoxPlayedListForID); \
	DECLARE_FUNCTION(execSetJukeBoxSortListForID); \
	DECLARE_FUNCTION(execSetNextPlayID); \
	DECLARE_FUNCTION(execSetNextPlayIDForRandom); \
	DECLARE_FUNCTION(execSetRandomPlayback); \
	DECLARE_FUNCTION(execSetUpdated); \
	DECLARE_FUNCTION(execUpdateSavedataForTmpData);


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_JukeBox_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentJukeBoxPlayCue); \
	DECLARE_FUNCTION(execGetCurrentPlayID); \
	DECLARE_FUNCTION(execGetJukeBoxCheckList); \
	DECLARE_FUNCTION(execGetJukeBoxCheckListForID); \
	DECLARE_FUNCTION(execGetJukeBoxPlayCue); \
	DECLARE_FUNCTION(execGetJukeBoxPlayedList); \
	DECLARE_FUNCTION(execGetJukeBoxPlayedListForID); \
	DECLARE_FUNCTION(execGetJukeBoxPlayList); \
	DECLARE_FUNCTION(execGetJukeBoxSortList); \
	DECLARE_FUNCTION(execGetJukeBoxSortListForID); \
	DECLARE_FUNCTION(execGetNextJukeBoxPlayCue); \
	DECLARE_FUNCTION(execGetNextPlayID); \
	DECLARE_FUNCTION(execInitJukeBoxPlayedList); \
	DECLARE_FUNCTION(execInitJukeBoxSortList); \
	DECLARE_FUNCTION(execIsCreateSavedata); \
	DECLARE_FUNCTION(execIsRandomPlayback); \
	DECLARE_FUNCTION(execSetCreateSavedata); \
	DECLARE_FUNCTION(execSetCurrentPlayID); \
	DECLARE_FUNCTION(execSetJukeBoxCheckListForID); \
	DECLARE_FUNCTION(execSetJukeBoxPlayedListForID); \
	DECLARE_FUNCTION(execSetJukeBoxSortListForID); \
	DECLARE_FUNCTION(execSetNextPlayID); \
	DECLARE_FUNCTION(execSetNextPlayIDForRandom); \
	DECLARE_FUNCTION(execSetRandomPlayback); \
	DECLARE_FUNCTION(execSetUpdated); \
	DECLARE_FUNCTION(execUpdateSavedataForTmpData);


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_JukeBox_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveDataObject_JukeBox(); \
	friend struct Z_Construct_UClass_USaveDataObject_JukeBox_Statics; \
public: \
	DECLARE_CLASS(USaveDataObject_JukeBox, USaveDataObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(USaveDataObject_JukeBox)


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_JukeBox_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSaveDataObject_JukeBox(); \
	friend struct Z_Construct_UClass_USaveDataObject_JukeBox_Statics; \
public: \
	DECLARE_CLASS(USaveDataObject_JukeBox, USaveDataObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(USaveDataObject_JukeBox)


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_JukeBox_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveDataObject_JukeBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveDataObject_JukeBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveDataObject_JukeBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveDataObject_JukeBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveDataObject_JukeBox(USaveDataObject_JukeBox&&); \
	NO_API USaveDataObject_JukeBox(const USaveDataObject_JukeBox&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_JukeBox_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveDataObject_JukeBox(USaveDataObject_JukeBox&&); \
	NO_API USaveDataObject_JukeBox(const USaveDataObject_JukeBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveDataObject_JukeBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveDataObject_JukeBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USaveDataObject_JukeBox)


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_JukeBox_h_11_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_JukeBox_h_9_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_JukeBox_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_JukeBox_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_JukeBox_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_JukeBox_h_11_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_JukeBox_h_11_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_JukeBox_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_JukeBox_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_JukeBox_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_JukeBox_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_JukeBox_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_JukeBox_h_11_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_JukeBox_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class USaveDataObject_JukeBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_JukeBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
