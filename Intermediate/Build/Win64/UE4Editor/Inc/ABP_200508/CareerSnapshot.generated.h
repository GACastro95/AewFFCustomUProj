// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCareerSnapshot;
enum class ESaveDataProcResult : uint8;
class USaveData_AccessorBase;
enum class ESaveDataAccessorEvent : uint8;
class UTextureRenderTarget2D;
class UTexture2DDynamic;
struct FCareerSnapshotParam;
#ifdef ABP_200508_CareerSnapshot_generated_h
#error "CareerSnapshot.generated.h already included, missing '#pragma once' in CareerSnapshot.h"
#endif
#define ABP_200508_CareerSnapshot_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshot_h_19_DELEGATE \
struct CareerSnapshot_eventOnFinish_Parms \
{ \
	UCareerSnapshot* Sender; \
	ESaveDataProcResult Result; \
}; \
static inline void FOnFinish_DelegateWrapper(const FMulticastScriptDelegate& OnFinish, UCareerSnapshot* Sender, ESaveDataProcResult Result) \
{ \
	CareerSnapshot_eventOnFinish_Parms Parms; \
	Parms.Sender=Sender; \
	Parms.Result=Result; \
	OnFinish.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshot_h_18_DELEGATE \
struct CareerSnapshot_eventOnFinishMulti_Parms \
{ \
	UCareerSnapshot* Sender; \
	USaveData_AccessorBase* Accessor; \
	ESaveDataProcResult Result; \
}; \
static inline void FOnFinishMulti_DelegateWrapper(const FMulticastScriptDelegate& OnFinishMulti, UCareerSnapshot* Sender, USaveData_AccessorBase* Accessor, ESaveDataProcResult Result) \
{ \
	CareerSnapshot_eventOnFinishMulti_Parms Parms; \
	Parms.Sender=Sender; \
	Parms.Accessor=Accessor; \
	Parms.Result=Result; \
	OnFinishMulti.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshot_h_16_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshot_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCallback_DeleteEnd); \
	DECLARE_FUNCTION(execCallback_LoadEnd); \
	DECLARE_FUNCTION(execCallback_LoadEndMulti); \
	DECLARE_FUNCTION(execCallback_SaveEnd); \
	DECLARE_FUNCTION(execClearBuffer); \
	DECLARE_FUNCTION(execConvertToImage); \
	DECLARE_FUNCTION(execDeleteImage); \
	DECLARE_FUNCTION(execDeleteParamOnLost); \
	DECLARE_FUNCTION(execGetDateTime); \
	DECLARE_FUNCTION(execGetImage); \
	DECLARE_FUNCTION(execGetSnapshotParam); \
	DECLARE_FUNCTION(execGetTitleText); \
	DECLARE_FUNCTION(execGetTurnNo); \
	DECLARE_FUNCTION(execGetWeekText); \
	DECLARE_FUNCTION(execGetWreslterNameText); \
	DECLARE_FUNCTION(execHasImage); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execIsBusy); \
	DECLARE_FUNCTION(execIsExists); \
	DECLARE_FUNCTION(execLoadImageData); \
	DECLARE_FUNCTION(execLoadImageDataMulti); \
	DECLARE_FUNCTION(execLoadParam); \
	DECLARE_FUNCTION(execReleaseImage); \
	DECLARE_FUNCTION(execSaveImage); \
	DECLARE_FUNCTION(execSaveImageMulti); \
	DECLARE_FUNCTION(execSetIndex); \
	DECLARE_FUNCTION(execSetSnapshotParam);


#define AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshot_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallback_DeleteEnd); \
	DECLARE_FUNCTION(execCallback_LoadEnd); \
	DECLARE_FUNCTION(execCallback_LoadEndMulti); \
	DECLARE_FUNCTION(execCallback_SaveEnd); \
	DECLARE_FUNCTION(execClearBuffer); \
	DECLARE_FUNCTION(execConvertToImage); \
	DECLARE_FUNCTION(execDeleteImage); \
	DECLARE_FUNCTION(execDeleteParamOnLost); \
	DECLARE_FUNCTION(execGetDateTime); \
	DECLARE_FUNCTION(execGetImage); \
	DECLARE_FUNCTION(execGetSnapshotParam); \
	DECLARE_FUNCTION(execGetTitleText); \
	DECLARE_FUNCTION(execGetTurnNo); \
	DECLARE_FUNCTION(execGetWeekText); \
	DECLARE_FUNCTION(execGetWreslterNameText); \
	DECLARE_FUNCTION(execHasImage); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execIsBusy); \
	DECLARE_FUNCTION(execIsExists); \
	DECLARE_FUNCTION(execLoadImageData); \
	DECLARE_FUNCTION(execLoadImageDataMulti); \
	DECLARE_FUNCTION(execLoadParam); \
	DECLARE_FUNCTION(execReleaseImage); \
	DECLARE_FUNCTION(execSaveImage); \
	DECLARE_FUNCTION(execSaveImageMulti); \
	DECLARE_FUNCTION(execSetIndex); \
	DECLARE_FUNCTION(execSetSnapshotParam);


#define AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshot_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCareerSnapshot(); \
	friend struct Z_Construct_UClass_UCareerSnapshot_Statics; \
public: \
	DECLARE_CLASS(UCareerSnapshot, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UCareerSnapshot)


#define AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshot_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCareerSnapshot(); \
	friend struct Z_Construct_UClass_UCareerSnapshot_Statics; \
public: \
	DECLARE_CLASS(UCareerSnapshot, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UCareerSnapshot)


#define AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshot_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCareerSnapshot(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCareerSnapshot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCareerSnapshot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCareerSnapshot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCareerSnapshot(UCareerSnapshot&&); \
	NO_API UCareerSnapshot(const UCareerSnapshot&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshot_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCareerSnapshot(UCareerSnapshot&&); \
	NO_API UCareerSnapshot(const UCareerSnapshot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCareerSnapshot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCareerSnapshot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCareerSnapshot)


#define AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshot_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Image() { return STRUCT_OFFSET(UCareerSnapshot, Image); } \
	FORCEINLINE static uint32 __PPO__Buffer() { return STRUCT_OFFSET(UCareerSnapshot, Buffer); }


#define AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshot_h_14_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshot_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshot_h_16_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshot_h_16_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshot_h_16_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshot_h_16_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshot_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshot_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshot_h_16_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshot_h_16_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshot_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshot_h_16_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshot_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UCareerSnapshot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_CareerSnapshot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
