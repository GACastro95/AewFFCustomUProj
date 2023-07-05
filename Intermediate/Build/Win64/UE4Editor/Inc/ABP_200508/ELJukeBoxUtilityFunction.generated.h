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
class UDataTable;
struct FJukeBoxParam;
class UELGameInstance;
#ifdef ABP_200508_ELJukeBoxUtilityFunction_generated_h
#error "ELJukeBoxUtilityFunction.generated.h already included, missing '#pragma once' in ELJukeBoxUtilityFunction.h"
#endif
#define ABP_200508_ELJukeBoxUtilityFunction_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELJukeBoxUtilityFunction_h_14_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELJukeBoxUtilityFunction_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConvertJukeboxSaveData); \
	DECLARE_FUNCTION(execGetCurrentJukeBoxPlayCue); \
	DECLARE_FUNCTION(execGetCurrentJukeBoxPlayCueCore); \
	DECLARE_FUNCTION(execGetCurrentPlayID); \
	DECLARE_FUNCTION(execGetCurrentPlayIDCore); \
	DECLARE_FUNCTION(execGetJukeBoxCheckList); \
	DECLARE_FUNCTION(execGetJukeBoxCheckListCore); \
	DECLARE_FUNCTION(execGetJukeBoxCheckListForID); \
	DECLARE_FUNCTION(execGetJukeBoxCheckListForIDCore); \
	DECLARE_FUNCTION(execGetJukeBoxDataTableRowFromName); \
	DECLARE_FUNCTION(execGetJukeboxGameInstance); \
	DECLARE_FUNCTION(execGetJukeBoxPlayCue); \
	DECLARE_FUNCTION(execGetJukeBoxPlayCueCore); \
	DECLARE_FUNCTION(execGetJukeBoxPlayedList); \
	DECLARE_FUNCTION(execGetJukeBoxPlayedListCore); \
	DECLARE_FUNCTION(execGetJukeBoxPlayedListForID); \
	DECLARE_FUNCTION(execGetJukeBoxPlayedListForIDCore); \
	DECLARE_FUNCTION(execGetJukeBoxPlayList); \
	DECLARE_FUNCTION(execGetJukeBoxPlayListCore); \
	DECLARE_FUNCTION(execGetJukeBoxSortList); \
	DECLARE_FUNCTION(execGetJukeBoxSortListCore); \
	DECLARE_FUNCTION(execGetJukeBoxSortListForID); \
	DECLARE_FUNCTION(execGetJukeBoxSortListForIDCore); \
	DECLARE_FUNCTION(execGetNextJukeBoxPlayCue); \
	DECLARE_FUNCTION(execGetNextJukeBoxPlayCueCore); \
	DECLARE_FUNCTION(execGetNextPlayID); \
	DECLARE_FUNCTION(execGetNextPlayIDCore); \
	DECLARE_FUNCTION(execInitJukeBoxDataForDLC); \
	DECLARE_FUNCTION(execInitJukeBoxPlayedList); \
	DECLARE_FUNCTION(execInitJukeBoxPlayedListCore); \
	DECLARE_FUNCTION(execInitJukeBoxSortList); \
	DECLARE_FUNCTION(execInitJukeBoxSortListCore); \
	DECLARE_FUNCTION(execIsCreateSavedata); \
	DECLARE_FUNCTION(execIsCreateSavedataCore); \
	DECLARE_FUNCTION(execIsRandomPlayback); \
	DECLARE_FUNCTION(execIsRandomPlaybackCore); \
	DECLARE_FUNCTION(execSaveRequestJukeBoxData); \
	DECLARE_FUNCTION(execSetCreateSavedata); \
	DECLARE_FUNCTION(execSetCreateSavedataCore); \
	DECLARE_FUNCTION(execSetCurrentPlayID); \
	DECLARE_FUNCTION(execSetCurrentPlayIDCore); \
	DECLARE_FUNCTION(execSetJukeBoxCheckListForID); \
	DECLARE_FUNCTION(execSetJukeBoxCheckListForIDCore); \
	DECLARE_FUNCTION(execSetJukeBoxPlayedListForID); \
	DECLARE_FUNCTION(execSetJukeBoxPlayedListForIDCore); \
	DECLARE_FUNCTION(execSetJukeBoxSortListForID); \
	DECLARE_FUNCTION(execSetJukeBoxSortListForIDCore); \
	DECLARE_FUNCTION(execSetNextPlayID); \
	DECLARE_FUNCTION(execSetNextPlayIDCore); \
	DECLARE_FUNCTION(execSetNextPlayIDForRandom); \
	DECLARE_FUNCTION(execSetNextPlayIDForRandomCore); \
	DECLARE_FUNCTION(execSetRandomPlayback); \
	DECLARE_FUNCTION(execSetRandomPlaybackCore); \
	DECLARE_FUNCTION(execUpdateJukeboxSaveData);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELJukeBoxUtilityFunction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConvertJukeboxSaveData); \
	DECLARE_FUNCTION(execGetCurrentJukeBoxPlayCue); \
	DECLARE_FUNCTION(execGetCurrentJukeBoxPlayCueCore); \
	DECLARE_FUNCTION(execGetCurrentPlayID); \
	DECLARE_FUNCTION(execGetCurrentPlayIDCore); \
	DECLARE_FUNCTION(execGetJukeBoxCheckList); \
	DECLARE_FUNCTION(execGetJukeBoxCheckListCore); \
	DECLARE_FUNCTION(execGetJukeBoxCheckListForID); \
	DECLARE_FUNCTION(execGetJukeBoxCheckListForIDCore); \
	DECLARE_FUNCTION(execGetJukeBoxDataTableRowFromName); \
	DECLARE_FUNCTION(execGetJukeboxGameInstance); \
	DECLARE_FUNCTION(execGetJukeBoxPlayCue); \
	DECLARE_FUNCTION(execGetJukeBoxPlayCueCore); \
	DECLARE_FUNCTION(execGetJukeBoxPlayedList); \
	DECLARE_FUNCTION(execGetJukeBoxPlayedListCore); \
	DECLARE_FUNCTION(execGetJukeBoxPlayedListForID); \
	DECLARE_FUNCTION(execGetJukeBoxPlayedListForIDCore); \
	DECLARE_FUNCTION(execGetJukeBoxPlayList); \
	DECLARE_FUNCTION(execGetJukeBoxPlayListCore); \
	DECLARE_FUNCTION(execGetJukeBoxSortList); \
	DECLARE_FUNCTION(execGetJukeBoxSortListCore); \
	DECLARE_FUNCTION(execGetJukeBoxSortListForID); \
	DECLARE_FUNCTION(execGetJukeBoxSortListForIDCore); \
	DECLARE_FUNCTION(execGetNextJukeBoxPlayCue); \
	DECLARE_FUNCTION(execGetNextJukeBoxPlayCueCore); \
	DECLARE_FUNCTION(execGetNextPlayID); \
	DECLARE_FUNCTION(execGetNextPlayIDCore); \
	DECLARE_FUNCTION(execInitJukeBoxDataForDLC); \
	DECLARE_FUNCTION(execInitJukeBoxPlayedList); \
	DECLARE_FUNCTION(execInitJukeBoxPlayedListCore); \
	DECLARE_FUNCTION(execInitJukeBoxSortList); \
	DECLARE_FUNCTION(execInitJukeBoxSortListCore); \
	DECLARE_FUNCTION(execIsCreateSavedata); \
	DECLARE_FUNCTION(execIsCreateSavedataCore); \
	DECLARE_FUNCTION(execIsRandomPlayback); \
	DECLARE_FUNCTION(execIsRandomPlaybackCore); \
	DECLARE_FUNCTION(execSaveRequestJukeBoxData); \
	DECLARE_FUNCTION(execSetCreateSavedata); \
	DECLARE_FUNCTION(execSetCreateSavedataCore); \
	DECLARE_FUNCTION(execSetCurrentPlayID); \
	DECLARE_FUNCTION(execSetCurrentPlayIDCore); \
	DECLARE_FUNCTION(execSetJukeBoxCheckListForID); \
	DECLARE_FUNCTION(execSetJukeBoxCheckListForIDCore); \
	DECLARE_FUNCTION(execSetJukeBoxPlayedListForID); \
	DECLARE_FUNCTION(execSetJukeBoxPlayedListForIDCore); \
	DECLARE_FUNCTION(execSetJukeBoxSortListForID); \
	DECLARE_FUNCTION(execSetJukeBoxSortListForIDCore); \
	DECLARE_FUNCTION(execSetNextPlayID); \
	DECLARE_FUNCTION(execSetNextPlayIDCore); \
	DECLARE_FUNCTION(execSetNextPlayIDForRandom); \
	DECLARE_FUNCTION(execSetNextPlayIDForRandomCore); \
	DECLARE_FUNCTION(execSetRandomPlayback); \
	DECLARE_FUNCTION(execSetRandomPlaybackCore); \
	DECLARE_FUNCTION(execUpdateJukeboxSaveData);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELJukeBoxUtilityFunction_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELJukeBoxUtilityFunction(); \
	friend struct Z_Construct_UClass_UELJukeBoxUtilityFunction_Statics; \
public: \
	DECLARE_CLASS(UELJukeBoxUtilityFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELJukeBoxUtilityFunction)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELJukeBoxUtilityFunction_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUELJukeBoxUtilityFunction(); \
	friend struct Z_Construct_UClass_UELJukeBoxUtilityFunction_Statics; \
public: \
	DECLARE_CLASS(UELJukeBoxUtilityFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELJukeBoxUtilityFunction)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELJukeBoxUtilityFunction_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELJukeBoxUtilityFunction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELJukeBoxUtilityFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELJukeBoxUtilityFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELJukeBoxUtilityFunction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELJukeBoxUtilityFunction(UELJukeBoxUtilityFunction&&); \
	NO_API UELJukeBoxUtilityFunction(const UELJukeBoxUtilityFunction&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELJukeBoxUtilityFunction_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELJukeBoxUtilityFunction(UELJukeBoxUtilityFunction&&); \
	NO_API UELJukeBoxUtilityFunction(const UELJukeBoxUtilityFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELJukeBoxUtilityFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELJukeBoxUtilityFunction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELJukeBoxUtilityFunction)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELJukeBoxUtilityFunction_h_14_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELJukeBoxUtilityFunction_h_12_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELJukeBoxUtilityFunction_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELJukeBoxUtilityFunction_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELJukeBoxUtilityFunction_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELJukeBoxUtilityFunction_h_14_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELJukeBoxUtilityFunction_h_14_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELJukeBoxUtilityFunction_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELJukeBoxUtilityFunction_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELJukeBoxUtilityFunction_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELJukeBoxUtilityFunction_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELJukeBoxUtilityFunction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELJukeBoxUtilityFunction_h_14_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELJukeBoxUtilityFunction_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELJukeBoxUtilityFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELJukeBoxUtilityFunction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
