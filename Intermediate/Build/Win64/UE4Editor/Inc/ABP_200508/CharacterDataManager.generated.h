// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMyWrestlerDataObject;
enum class EGender : uint8;
class UTemplateScoutAsset;
struct FWrestlerSetupParam;
class UDataTable;
enum class EBasicFunctionResult : uint8;
struct FGuid;
enum class EWrestlerID_N : uint8;
class UCharacterDataManager;
struct FRosterInfoParam;
enum class ECharacterValidationResult : uint8;
#ifdef ABP_200508_CharacterDataManager_generated_h
#error "CharacterDataManager.generated.h already included, missing '#pragma once' in CharacterDataManager.h"
#endif
#define ABP_200508_CharacterDataManager_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_CharacterDataManager_h_21_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_CharacterDataManager_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddCustomWrestler); \
	DECLARE_FUNCTION(execCheckCanAddNewScout); \
	DECLARE_FUNCTION(execClearSaveRequests); \
	DECLARE_FUNCTION(execClearUpdateFlagForTamperedData); \
	DECLARE_FUNCTION(execCreateMyWrestlerDataObject); \
	DECLARE_FUNCTION(execCreateScoutDataObjectFromTemplate); \
	DECLARE_FUNCTION(execDebug_GetPresetWrestler); \
	DECLARE_FUNCTION(execDebug_GetPresetWrestlerList); \
	DECLARE_FUNCTION(execDebug_GetPresetWrestlerTable); \
	DECLARE_FUNCTION(execDuplicateCustomWrestler); \
	DECLARE_FUNCTION(execDuplicateScoutWrestler); \
	DECLARE_FUNCTION(execEntryMyCharacter); \
	DECLARE_FUNCTION(execEntryTemporaryCharacter); \
	DECLARE_FUNCTION(execEntryTemporaryWrestler); \
	DECLARE_FUNCTION(execFindMyCharacterDataObject); \
	DECLARE_FUNCTION(execGenerateCharacterDataObject); \
	DECLARE_FUNCTION(execGenerateCharacterDataObjectByEnum); \
	DECLARE_FUNCTION(execGetAvailableCustomWrestlerSlotNum); \
	DECLARE_FUNCTION(execGetAvailableScoutNum); \
	DECLARE_FUNCTION(execGetCharacterDataManager); \
	DECLARE_FUNCTION(execGetCharacterDataManagerInstance); \
	DECLARE_FUNCTION(execGetCharacterParam); \
	DECLARE_FUNCTION(execGetCustomWrestlerList); \
	DECLARE_FUNCTION(execGetCustomWrestlerNum); \
	DECLARE_FUNCTION(execGetCustomWrestlerObjects); \
	DECLARE_FUNCTION(execGetCustomWrestlerUID); \
	DECLARE_FUNCTION(execGetDefaultCharacterDataObject); \
	DECLARE_FUNCTION(execGetDefaultCharacterDataObjectByEnum); \
	DECLARE_FUNCTION(execGetGuestWrestlerDataObject); \
	DECLARE_FUNCTION(execGetMyCharacterDataObjectByEnum); \
	DECLARE_FUNCTION(execGetMyWrestlerDataObjectBP); \
	DECLARE_FUNCTION(execGetMyWrestlerDataObjectByEnumBP); \
	DECLARE_FUNCTION(execGetNeedSaveFileIndexList); \
	DECLARE_FUNCTION(execGetRosterInfoParamBP); \
	DECLARE_FUNCTION(execGetRosterNum); \
	DECLARE_FUNCTION(execGetRosterUID); \
	DECLARE_FUNCTION(execGetSaveDataNumMax); \
	DECLARE_FUNCTION(execGetScoutDataObject); \
	DECLARE_FUNCTION(execGetScoutNum); \
	DECLARE_FUNCTION(execGetTemporaryCharacterNum); \
	DECLARE_FUNCTION(execGetUIDList); \
	DECLARE_FUNCTION(execGetUnlockedCustomWrestlerSlotNum); \
	DECLARE_FUNCTION(execGetWrestlerID); \
	DECLARE_FUNCTION(execHasSaveDataImported); \
	DECLARE_FUNCTION(execInitDB); \
	DECLARE_FUNCTION(execInitMyRosters); \
	DECLARE_FUNCTION(execIsValidCharacter); \
	DECLARE_FUNCTION(execOnInitialize); \
	DECLARE_FUNCTION(execReleaseCachedImage); \
	DECLARE_FUNCTION(execReleaseMyCharacter); \
	DECLARE_FUNCTION(execReleaseMyCharacterByUID); \
	DECLARE_FUNCTION(execReleaseTemporaryCharacter); \
	DECLARE_FUNCTION(execReleaseTemporaryWrestler); \
	DECLARE_FUNCTION(execReleaseTemporaryWrestlerByUID); \
	DECLARE_FUNCTION(execRemoveCustomWrestler); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execSortWrestler);


#define AewFFCustomUProj_Source_ABP_200508_Public_CharacterDataManager_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddCustomWrestler); \
	DECLARE_FUNCTION(execCheckCanAddNewScout); \
	DECLARE_FUNCTION(execClearSaveRequests); \
	DECLARE_FUNCTION(execClearUpdateFlagForTamperedData); \
	DECLARE_FUNCTION(execCreateMyWrestlerDataObject); \
	DECLARE_FUNCTION(execCreateScoutDataObjectFromTemplate); \
	DECLARE_FUNCTION(execDebug_GetPresetWrestler); \
	DECLARE_FUNCTION(execDebug_GetPresetWrestlerList); \
	DECLARE_FUNCTION(execDebug_GetPresetWrestlerTable); \
	DECLARE_FUNCTION(execDuplicateCustomWrestler); \
	DECLARE_FUNCTION(execDuplicateScoutWrestler); \
	DECLARE_FUNCTION(execEntryMyCharacter); \
	DECLARE_FUNCTION(execEntryTemporaryCharacter); \
	DECLARE_FUNCTION(execEntryTemporaryWrestler); \
	DECLARE_FUNCTION(execFindMyCharacterDataObject); \
	DECLARE_FUNCTION(execGenerateCharacterDataObject); \
	DECLARE_FUNCTION(execGenerateCharacterDataObjectByEnum); \
	DECLARE_FUNCTION(execGetAvailableCustomWrestlerSlotNum); \
	DECLARE_FUNCTION(execGetAvailableScoutNum); \
	DECLARE_FUNCTION(execGetCharacterDataManager); \
	DECLARE_FUNCTION(execGetCharacterDataManagerInstance); \
	DECLARE_FUNCTION(execGetCharacterParam); \
	DECLARE_FUNCTION(execGetCustomWrestlerList); \
	DECLARE_FUNCTION(execGetCustomWrestlerNum); \
	DECLARE_FUNCTION(execGetCustomWrestlerObjects); \
	DECLARE_FUNCTION(execGetCustomWrestlerUID); \
	DECLARE_FUNCTION(execGetDefaultCharacterDataObject); \
	DECLARE_FUNCTION(execGetDefaultCharacterDataObjectByEnum); \
	DECLARE_FUNCTION(execGetGuestWrestlerDataObject); \
	DECLARE_FUNCTION(execGetMyCharacterDataObjectByEnum); \
	DECLARE_FUNCTION(execGetMyWrestlerDataObjectBP); \
	DECLARE_FUNCTION(execGetMyWrestlerDataObjectByEnumBP); \
	DECLARE_FUNCTION(execGetNeedSaveFileIndexList); \
	DECLARE_FUNCTION(execGetRosterInfoParamBP); \
	DECLARE_FUNCTION(execGetRosterNum); \
	DECLARE_FUNCTION(execGetRosterUID); \
	DECLARE_FUNCTION(execGetSaveDataNumMax); \
	DECLARE_FUNCTION(execGetScoutDataObject); \
	DECLARE_FUNCTION(execGetScoutNum); \
	DECLARE_FUNCTION(execGetTemporaryCharacterNum); \
	DECLARE_FUNCTION(execGetUIDList); \
	DECLARE_FUNCTION(execGetUnlockedCustomWrestlerSlotNum); \
	DECLARE_FUNCTION(execGetWrestlerID); \
	DECLARE_FUNCTION(execHasSaveDataImported); \
	DECLARE_FUNCTION(execInitDB); \
	DECLARE_FUNCTION(execInitMyRosters); \
	DECLARE_FUNCTION(execIsValidCharacter); \
	DECLARE_FUNCTION(execOnInitialize); \
	DECLARE_FUNCTION(execReleaseCachedImage); \
	DECLARE_FUNCTION(execReleaseMyCharacter); \
	DECLARE_FUNCTION(execReleaseMyCharacterByUID); \
	DECLARE_FUNCTION(execReleaseTemporaryCharacter); \
	DECLARE_FUNCTION(execReleaseTemporaryWrestler); \
	DECLARE_FUNCTION(execReleaseTemporaryWrestlerByUID); \
	DECLARE_FUNCTION(execRemoveCustomWrestler); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execSortWrestler);


#define AewFFCustomUProj_Source_ABP_200508_Public_CharacterDataManager_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterDataManager(); \
	friend struct Z_Construct_UClass_UCharacterDataManager_Statics; \
public: \
	DECLARE_CLASS(UCharacterDataManager, USingletonBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UCharacterDataManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UCharacterDataManager*>(this); }


#define AewFFCustomUProj_Source_ABP_200508_Public_CharacterDataManager_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUCharacterDataManager(); \
	friend struct Z_Construct_UClass_UCharacterDataManager_Statics; \
public: \
	DECLARE_CLASS(UCharacterDataManager, USingletonBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UCharacterDataManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UCharacterDataManager*>(this); }


#define AewFFCustomUProj_Source_ABP_200508_Public_CharacterDataManager_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterDataManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterDataManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterDataManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterDataManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterDataManager(UCharacterDataManager&&); \
	NO_API UCharacterDataManager(const UCharacterDataManager&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_CharacterDataManager_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterDataManager(UCharacterDataManager&&); \
	NO_API UCharacterDataManager(const UCharacterDataManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterDataManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterDataManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCharacterDataManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_CharacterDataManager_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PresetWrestlers() { return STRUCT_OFFSET(UCharacterDataManager, PresetWrestlers); } \
	FORCEINLINE static uint32 __PPO__PickedPresetWrestler() { return STRUCT_OFFSET(UCharacterDataManager, PickedPresetWrestler); } \
	FORCEINLINE static uint32 __PPO__MyRosters() { return STRUCT_OFFSET(UCharacterDataManager, MyRosters); } \
	FORCEINLINE static uint32 __PPO__MyScouts() { return STRUCT_OFFSET(UCharacterDataManager, MyScouts); } \
	FORCEINLINE static uint32 __PPO__Temporaries() { return STRUCT_OFFSET(UCharacterDataManager, Temporaries); } \
	FORCEINLINE static uint32 __PPO__RosterData() { return STRUCT_OFFSET(UCharacterDataManager, RosterData); } \
	FORCEINLINE static uint32 __PPO__NpcData() { return STRUCT_OFFSET(UCharacterDataManager, NpcData); } \
	FORCEINLINE static uint32 __PPO__bImported() { return STRUCT_OFFSET(UCharacterDataManager, bImported); }


#define AewFFCustomUProj_Source_ABP_200508_Public_CharacterDataManager_h_19_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_CharacterDataManager_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_CharacterDataManager_h_21_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_CharacterDataManager_h_21_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_CharacterDataManager_h_21_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_CharacterDataManager_h_21_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_CharacterDataManager_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_CharacterDataManager_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_CharacterDataManager_h_21_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_CharacterDataManager_h_21_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_CharacterDataManager_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_CharacterDataManager_h_21_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_CharacterDataManager_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UCharacterDataManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_CharacterDataManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
