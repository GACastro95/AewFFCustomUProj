// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKey;
class UELGameInstance;
#ifdef ABP_200508_ELDebugUtilityFunction_generated_h
#error "ELDebugUtilityFunction.generated.h already included, missing '#pragma once' in ELDebugUtilityFunction.h"
#endif
#define ABP_200508_ELDebugUtilityFunction_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugUtilityFunction_h_11_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugUtilityFunction_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAutoMatchCreateLog); \
	DECLARE_FUNCTION(execAutoMatchTakeScreenShots); \
	DECLARE_FUNCTION(execAutoPlayCreateLog); \
	DECLARE_FUNCTION(execAutoPlayTakeScreenShots); \
	DECLARE_FUNCTION(execAutoTestCreateLogCore); \
	DECLARE_FUNCTION(execDeleteAutoPlayFile); \
	DECLARE_FUNCTION(execGetAutoMatchFolderPath); \
	DECLARE_FUNCTION(execGetAutoMatchResultFolderPath); \
	DECLARE_FUNCTION(execGetAutoMatchScreenshotFolderPath); \
	DECLARE_FUNCTION(execGetAutoMatchSettingFileName); \
	DECLARE_FUNCTION(execGetAutoPlayFileName); \
	DECLARE_FUNCTION(execGetAutoPlayFolderPath); \
	DECLARE_FUNCTION(execGetAutoPlayInfo); \
	DECLARE_FUNCTION(execGetAutoPlayInfoArray); \
	DECLARE_FUNCTION(execGetAutoPlayInputlog); \
	DECLARE_FUNCTION(execGetAutoPlayInputlogArray); \
	DECLARE_FUNCTION(execGetAutoPlayJustInputFileName); \
	DECLARE_FUNCTION(execGetAutoPlayPath); \
	DECLARE_FUNCTION(execGetAutoPlayPathArray); \
	DECLARE_FUNCTION(execGetAutoPlayRecFileName); \
	DECLARE_FUNCTION(execGetAutoPlayResultFolderPath); \
	DECLARE_FUNCTION(execGetAutoPlayScreenshotFolderPath); \
	DECLARE_FUNCTION(execGetAutoPlaySettingFileName); \
	DECLARE_FUNCTION(execGetAutoTestSaveDirPath); \
	DECLARE_FUNCTION(execGetDebugGameInstance); \
	DECLARE_FUNCTION(execInitAutoMatchSettingFile); \
	DECLARE_FUNCTION(execInitAutoPlaySettingFile); \
	DECLARE_FUNCTION(execIsDelayAutoPlayEvent); \
	DECLARE_FUNCTION(execIsSuspensionAutoPlayEvent); \
	DECLARE_FUNCTION(execSaveAutoMatchAnimationDebugView); \
	DECLARE_FUNCTION(execSaveAutoMatchErrorCheck); \
	DECLARE_FUNCTION(execSaveAutoMatchLoopMaxCount); \
	DECLARE_FUNCTION(execSaveAutoMatchMailSetting); \
	DECLARE_FUNCTION(execSaveAutoMatchOutputFaildResult); \
	DECLARE_FUNCTION(execSaveAutoMatchOutputSuccessResult); \
	DECLARE_FUNCTION(execSaveAutoMatchSettingFile); \
	DECLARE_FUNCTION(execSaveAutoMatchSkipEntrance); \
	DECLARE_FUNCTION(execSaveAutoMatchSkipEntranceSecond); \
	DECLARE_FUNCTION(execSaveAutoMatchVictorySceneMode); \
	DECLARE_FUNCTION(execSaveAutoPlayCreateNewRecordingFile); \
	DECLARE_FUNCTION(execSaveAutoPlayErrorMaxSetting); \
	DECLARE_FUNCTION(execSaveAutoPlayFileName); \
	DECLARE_FUNCTION(execSaveAutoPlayInputlogText); \
	DECLARE_FUNCTION(execSaveAutoPlayJustInputlogText); \
	DECLARE_FUNCTION(execSaveAutoPlayLoopMaxCount); \
	DECLARE_FUNCTION(execSaveAutoPlayLoopSetting); \
	DECLARE_FUNCTION(execSaveAutoPlayMailSetting); \
	DECLARE_FUNCTION(execSaveAutoPlayMultipleFile); \
	DECLARE_FUNCTION(execSaveAutoPlayOutputFaildResult); \
	DECLARE_FUNCTION(execSaveAutoPlayOutputSuccessResult); \
	DECLARE_FUNCTION(execSaveAutoPlayRecordingFileName); \
	DECLARE_FUNCTION(execSaveAutoPlaySettingFile); \
	DECLARE_FUNCTION(execSaveAutoPlayShowTutorial); \
	DECLARE_FUNCTION(execSaveAutoPlayTimeSetting); \
	DECLARE_FUNCTION(execSetAutoPlaylogInfoArray); \
	DECLARE_FUNCTION(execSetAutoPlaylogInfoArrayCore); \
	DECLARE_FUNCTION(execSetAutoPlayRecIndex); \
	DECLARE_FUNCTION(execSetAutoPlayStartFlag); \
	DECLARE_FUNCTION(execSetSuspensionAutoPlayEvent); \
	DECLARE_FUNCTION(execTakeScreenShotsCore);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugUtilityFunction_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAutoMatchCreateLog); \
	DECLARE_FUNCTION(execAutoMatchTakeScreenShots); \
	DECLARE_FUNCTION(execAutoPlayCreateLog); \
	DECLARE_FUNCTION(execAutoPlayTakeScreenShots); \
	DECLARE_FUNCTION(execAutoTestCreateLogCore); \
	DECLARE_FUNCTION(execDeleteAutoPlayFile); \
	DECLARE_FUNCTION(execGetAutoMatchFolderPath); \
	DECLARE_FUNCTION(execGetAutoMatchResultFolderPath); \
	DECLARE_FUNCTION(execGetAutoMatchScreenshotFolderPath); \
	DECLARE_FUNCTION(execGetAutoMatchSettingFileName); \
	DECLARE_FUNCTION(execGetAutoPlayFileName); \
	DECLARE_FUNCTION(execGetAutoPlayFolderPath); \
	DECLARE_FUNCTION(execGetAutoPlayInfo); \
	DECLARE_FUNCTION(execGetAutoPlayInfoArray); \
	DECLARE_FUNCTION(execGetAutoPlayInputlog); \
	DECLARE_FUNCTION(execGetAutoPlayInputlogArray); \
	DECLARE_FUNCTION(execGetAutoPlayJustInputFileName); \
	DECLARE_FUNCTION(execGetAutoPlayPath); \
	DECLARE_FUNCTION(execGetAutoPlayPathArray); \
	DECLARE_FUNCTION(execGetAutoPlayRecFileName); \
	DECLARE_FUNCTION(execGetAutoPlayResultFolderPath); \
	DECLARE_FUNCTION(execGetAutoPlayScreenshotFolderPath); \
	DECLARE_FUNCTION(execGetAutoPlaySettingFileName); \
	DECLARE_FUNCTION(execGetAutoTestSaveDirPath); \
	DECLARE_FUNCTION(execGetDebugGameInstance); \
	DECLARE_FUNCTION(execInitAutoMatchSettingFile); \
	DECLARE_FUNCTION(execInitAutoPlaySettingFile); \
	DECLARE_FUNCTION(execIsDelayAutoPlayEvent); \
	DECLARE_FUNCTION(execIsSuspensionAutoPlayEvent); \
	DECLARE_FUNCTION(execSaveAutoMatchAnimationDebugView); \
	DECLARE_FUNCTION(execSaveAutoMatchErrorCheck); \
	DECLARE_FUNCTION(execSaveAutoMatchLoopMaxCount); \
	DECLARE_FUNCTION(execSaveAutoMatchMailSetting); \
	DECLARE_FUNCTION(execSaveAutoMatchOutputFaildResult); \
	DECLARE_FUNCTION(execSaveAutoMatchOutputSuccessResult); \
	DECLARE_FUNCTION(execSaveAutoMatchSettingFile); \
	DECLARE_FUNCTION(execSaveAutoMatchSkipEntrance); \
	DECLARE_FUNCTION(execSaveAutoMatchSkipEntranceSecond); \
	DECLARE_FUNCTION(execSaveAutoMatchVictorySceneMode); \
	DECLARE_FUNCTION(execSaveAutoPlayCreateNewRecordingFile); \
	DECLARE_FUNCTION(execSaveAutoPlayErrorMaxSetting); \
	DECLARE_FUNCTION(execSaveAutoPlayFileName); \
	DECLARE_FUNCTION(execSaveAutoPlayInputlogText); \
	DECLARE_FUNCTION(execSaveAutoPlayJustInputlogText); \
	DECLARE_FUNCTION(execSaveAutoPlayLoopMaxCount); \
	DECLARE_FUNCTION(execSaveAutoPlayLoopSetting); \
	DECLARE_FUNCTION(execSaveAutoPlayMailSetting); \
	DECLARE_FUNCTION(execSaveAutoPlayMultipleFile); \
	DECLARE_FUNCTION(execSaveAutoPlayOutputFaildResult); \
	DECLARE_FUNCTION(execSaveAutoPlayOutputSuccessResult); \
	DECLARE_FUNCTION(execSaveAutoPlayRecordingFileName); \
	DECLARE_FUNCTION(execSaveAutoPlaySettingFile); \
	DECLARE_FUNCTION(execSaveAutoPlayShowTutorial); \
	DECLARE_FUNCTION(execSaveAutoPlayTimeSetting); \
	DECLARE_FUNCTION(execSetAutoPlaylogInfoArray); \
	DECLARE_FUNCTION(execSetAutoPlaylogInfoArrayCore); \
	DECLARE_FUNCTION(execSetAutoPlayRecIndex); \
	DECLARE_FUNCTION(execSetAutoPlayStartFlag); \
	DECLARE_FUNCTION(execSetSuspensionAutoPlayEvent); \
	DECLARE_FUNCTION(execTakeScreenShotsCore);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugUtilityFunction_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELDebugUtilityFunction(); \
	friend struct Z_Construct_UClass_UELDebugUtilityFunction_Statics; \
public: \
	DECLARE_CLASS(UELDebugUtilityFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELDebugUtilityFunction)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugUtilityFunction_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUELDebugUtilityFunction(); \
	friend struct Z_Construct_UClass_UELDebugUtilityFunction_Statics; \
public: \
	DECLARE_CLASS(UELDebugUtilityFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELDebugUtilityFunction)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugUtilityFunction_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELDebugUtilityFunction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELDebugUtilityFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELDebugUtilityFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELDebugUtilityFunction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELDebugUtilityFunction(UELDebugUtilityFunction&&); \
	NO_API UELDebugUtilityFunction(const UELDebugUtilityFunction&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugUtilityFunction_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELDebugUtilityFunction(UELDebugUtilityFunction&&); \
	NO_API UELDebugUtilityFunction(const UELDebugUtilityFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELDebugUtilityFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELDebugUtilityFunction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELDebugUtilityFunction)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugUtilityFunction_h_11_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugUtilityFunction_h_9_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugUtilityFunction_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugUtilityFunction_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugUtilityFunction_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugUtilityFunction_h_11_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugUtilityFunction_h_11_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugUtilityFunction_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugUtilityFunction_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugUtilityFunction_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugUtilityFunction_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugUtilityFunction_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugUtilityFunction_h_11_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugUtilityFunction_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELDebugUtilityFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELDebugUtilityFunction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
