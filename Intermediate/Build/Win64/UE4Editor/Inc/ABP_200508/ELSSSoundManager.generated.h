// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundAtomCue;
class UMeshComponent;
struct FVector;
enum class ESSAnnounce : uint8;
class UAtomComponent;
enum class ESSDamageSE : uint8;
enum class ESSHitGroundSE : uint8;
enum class ESSSpawnPickupSE : uint8;
#ifdef ABP_200508_ELSSSoundManager_generated_h
#error "ELSSSoundManager.generated.h already included, missing '#pragma once' in ELSSSoundManager.h"
#endif
#define ABP_200508_ELSSSoundManager_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundManager_h_19_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundManager_h_19_RPC_WRAPPERS \
	virtual void Play3DSE_Implementation(USoundAtomCue* InCue, UMeshComponent* inMeshComponent); \
	virtual int32 PlayLoop2DSE_Implementation(const FString& CueName); \
	virtual int32 PlayLoop3DSE_Implementation(USoundAtomCue* InCue, UMeshComponent* inMeshComponent); \
	virtual int32 PlayLoop3DSE_OutAtomComponent_Implementation(USoundAtomCue* InCue, UMeshComponent* inMeshComponent, UAtomComponent*& out_AtomComponent); \
	virtual void StopLoopSE_Implementation(int32 loopSEUniqueId); \
 \
	DECLARE_FUNCTION(execCompleteLoading); \
	DECLARE_FUNCTION(execIsLoadCompleted); \
	DECLARE_FUNCTION(execPlay2DSE_ForCueEvent); \
	DECLARE_FUNCTION(execPlay2DSE_ForString); \
	DECLARE_FUNCTION(execPlay3DSE); \
	DECLARE_FUNCTION(execPlay3DSEAtLocation_ForString); \
	DECLARE_FUNCTION(execPlay3DSEAttached_ForString); \
	DECLARE_FUNCTION(execPlayAnnounce); \
	DECLARE_FUNCTION(execPlayLoop2DSE); \
	DECLARE_FUNCTION(execPlayLoop3DSE); \
	DECLARE_FUNCTION(execPlayLoop3DSE_OutAtomComponent); \
	DECLARE_FUNCTION(execPlaySE_Damage); \
	DECLARE_FUNCTION(execPlaySE_HitGround); \
	DECLARE_FUNCTION(execPlaySE_SpawnPickup); \
	DECLARE_FUNCTION(execRequestLoad); \
	DECLARE_FUNCTION(execStopLoopSE);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundManager_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Play3DSE_Implementation(USoundAtomCue* InCue, UMeshComponent* inMeshComponent); \
	virtual int32 PlayLoop2DSE_Implementation(const FString& CueName); \
	virtual int32 PlayLoop3DSE_Implementation(USoundAtomCue* InCue, UMeshComponent* inMeshComponent); \
	virtual int32 PlayLoop3DSE_OutAtomComponent_Implementation(USoundAtomCue* InCue, UMeshComponent* inMeshComponent, UAtomComponent*& out_AtomComponent); \
	virtual void StopLoopSE_Implementation(int32 loopSEUniqueId); \
 \
	DECLARE_FUNCTION(execCompleteLoading); \
	DECLARE_FUNCTION(execIsLoadCompleted); \
	DECLARE_FUNCTION(execPlay2DSE_ForCueEvent); \
	DECLARE_FUNCTION(execPlay2DSE_ForString); \
	DECLARE_FUNCTION(execPlay3DSE); \
	DECLARE_FUNCTION(execPlay3DSEAtLocation_ForString); \
	DECLARE_FUNCTION(execPlay3DSEAttached_ForString); \
	DECLARE_FUNCTION(execPlayAnnounce); \
	DECLARE_FUNCTION(execPlayLoop2DSE); \
	DECLARE_FUNCTION(execPlayLoop3DSE); \
	DECLARE_FUNCTION(execPlayLoop3DSE_OutAtomComponent); \
	DECLARE_FUNCTION(execPlaySE_Damage); \
	DECLARE_FUNCTION(execPlaySE_HitGround); \
	DECLARE_FUNCTION(execPlaySE_SpawnPickup); \
	DECLARE_FUNCTION(execRequestLoad); \
	DECLARE_FUNCTION(execStopLoopSE);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundManager_h_19_EVENT_PARMS \
	struct ELSSSoundManager_eventGetSoundAtomCue_Damage_Parms \
	{ \
		ESSDamageSE inDamageSE; \
		USoundAtomCue* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSSoundManager_eventGetSoundAtomCue_Damage_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct ELSSSoundManager_eventGetSoundAtomCue_HitGround_Parms \
	{ \
		ESSHitGroundSE inHitGroundSE; \
		UMeshComponent* inMeshComponent; \
		USoundAtomCue* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSSoundManager_eventGetSoundAtomCue_HitGround_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct ELSSSoundManager_eventPlay3DSE_Parms \
	{ \
		USoundAtomCue* InCue; \
		UMeshComponent* inMeshComponent; \
	}; \
	struct ELSSSoundManager_eventPlayLoop2DSE_Parms \
	{ \
		FString CueName; \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSSoundManager_eventPlayLoop2DSE_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ELSSSoundManager_eventPlayLoop3DSE_Parms \
	{ \
		USoundAtomCue* InCue; \
		UMeshComponent* inMeshComponent; \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSSoundManager_eventPlayLoop3DSE_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ELSSSoundManager_eventPlayLoop3DSE_OutAtomComponent_Parms \
	{ \
		USoundAtomCue* InCue; \
		UMeshComponent* inMeshComponent; \
		UAtomComponent* out_AtomComponent; \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSSoundManager_eventPlayLoop3DSE_OutAtomComponent_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ELSSSoundManager_eventStopLoopSE_Parms \
	{ \
		int32 loopSEUniqueId; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundManager_h_19_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundManager_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSSoundManager(); \
	friend struct Z_Construct_UClass_AELSSSoundManager_Statics; \
public: \
	DECLARE_CLASS(AELSSSoundManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSSoundManager) \
	virtual UObject* _getUObject() const override { return const_cast<AELSSSoundManager*>(this); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundManager_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAELSSSoundManager(); \
	friend struct Z_Construct_UClass_AELSSSoundManager_Statics; \
public: \
	DECLARE_CLASS(AELSSSoundManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSSoundManager) \
	virtual UObject* _getUObject() const override { return const_cast<AELSSSoundManager*>(this); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundManager_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSSoundManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSSoundManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSSoundManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSSoundManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSSoundManager(AELSSSoundManager&&); \
	NO_API AELSSSoundManager(const AELSSSoundManager&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundManager_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSSoundManager(AELSSSoundManager&&); \
	NO_API AELSSSoundManager(const AELSSSoundManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSSoundManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSSoundManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSSoundManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundManager_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LoopSEUniqueIdGenerator() { return STRUCT_OFFSET(AELSSSoundManager, LoopSEUniqueIdGenerator); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundManager_h_17_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundManager_h_19_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundManager_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundManager_h_19_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundManager_h_19_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundManager_h_19_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundManager_h_19_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundManager_h_19_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundManager_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundManager_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundManager_h_19_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundManager_h_19_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundManager_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundManager_h_19_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundManager_h_19_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundManager_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSSoundManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
