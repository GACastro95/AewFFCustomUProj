// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EWrestlerID_N : uint8;
enum class ESSWrestlerType : uint8;
class ACharacter;
class AELSSPlayer;
#ifdef ABP_200508_ELSSVictoryCutscene_generated_h
#error "ELSSVictoryCutscene.generated.h already included, missing '#pragma once' in ELSSVictoryCutscene.h"
#endif
#define ABP_200508_ELSSVictoryCutscene_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSVictoryCutscene_h_17_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSVictoryCutscene_h_17_RPC_WRAPPERS \
	virtual void OnFinishedPlay_Implementation(); \
	virtual void OnSkip_Implementation(); \
	virtual bool Play_Implementation(); \
	virtual bool Prepare_Implementation(EWrestlerID_N NewWrestlerID, ESSWrestlerType WrestlerType, ACharacter* NewTargetCharacter, AELSSPlayer* TargetPlayer); \
 \
	DECLARE_FUNCTION(execGetEditWrestlerMusicId); \
	DECLARE_FUNCTION(execOnFinishedPlay); \
	DECLARE_FUNCTION(execOnSkip); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execPlayCharacterLoopMontage); \
	DECLARE_FUNCTION(execPlayCharacterMontage); \
	DECLARE_FUNCTION(execPlaySoundAnnounce); \
	DECLARE_FUNCTION(execPrepare); \
	DECLARE_FUNCTION(execSkip);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSVictoryCutscene_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnFinishedPlay_Implementation(); \
	virtual void OnSkip_Implementation(); \
	virtual bool Play_Implementation(); \
	virtual bool Prepare_Implementation(EWrestlerID_N NewWrestlerID, ESSWrestlerType WrestlerType, ACharacter* NewTargetCharacter, AELSSPlayer* TargetPlayer); \
 \
	DECLARE_FUNCTION(execGetEditWrestlerMusicId); \
	DECLARE_FUNCTION(execOnFinishedPlay); \
	DECLARE_FUNCTION(execOnSkip); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execPlayCharacterLoopMontage); \
	DECLARE_FUNCTION(execPlayCharacterMontage); \
	DECLARE_FUNCTION(execPlaySoundAnnounce); \
	DECLARE_FUNCTION(execPrepare); \
	DECLARE_FUNCTION(execSkip);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSVictoryCutscene_h_17_EVENT_PARMS \
	struct ELSSVictoryCutscene_eventPlay_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSVictoryCutscene_eventPlay_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSSVictoryCutscene_eventPrepare_Parms \
	{ \
		EWrestlerID_N NewWrestlerID; \
		ESSWrestlerType WrestlerType; \
		ACharacter* NewTargetCharacter; \
		AELSSPlayer* TargetPlayer; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSVictoryCutscene_eventPrepare_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSVictoryCutscene_h_17_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSVictoryCutscene_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSVictoryCutscene(); \
	friend struct Z_Construct_UClass_AELSSVictoryCutscene_Statics; \
public: \
	DECLARE_CLASS(AELSSVictoryCutscene, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSVictoryCutscene)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSVictoryCutscene_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAELSSVictoryCutscene(); \
	friend struct Z_Construct_UClass_AELSSVictoryCutscene_Statics; \
public: \
	DECLARE_CLASS(AELSSVictoryCutscene, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSVictoryCutscene)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSVictoryCutscene_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSVictoryCutscene(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSVictoryCutscene) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSVictoryCutscene); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSVictoryCutscene); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSVictoryCutscene(AELSSVictoryCutscene&&); \
	NO_API AELSSVictoryCutscene(const AELSSVictoryCutscene&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSVictoryCutscene_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSVictoryCutscene(AELSSVictoryCutscene&&); \
	NO_API AELSSVictoryCutscene(const AELSSVictoryCutscene&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSVictoryCutscene); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSVictoryCutscene); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AELSSVictoryCutscene)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSVictoryCutscene_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LevelSequence() { return STRUCT_OFFSET(AELSSVictoryCutscene, LevelSequence); } \
	FORCEINLINE static uint32 __PPO__LSPlayer() { return STRUCT_OFFSET(AELSSVictoryCutscene, LSPlayer); } \
	FORCEINLINE static uint32 __PPO__LSActor() { return STRUCT_OFFSET(AELSSVictoryCutscene, LSActor); } \
	FORCEINLINE static uint32 __PPO__CutsceneParam() { return STRUCT_OFFSET(AELSSVictoryCutscene, CutsceneParam); } \
	FORCEINLINE static uint32 __PPO__WrestlerID() { return STRUCT_OFFSET(AELSSVictoryCutscene, WrestlerID); } \
	FORCEINLINE static uint32 __PPO__targetCharacter() { return STRUCT_OFFSET(AELSSVictoryCutscene, targetCharacter); } \
	FORCEINLINE static uint32 __PPO__IsDonePlay() { return STRUCT_OFFSET(AELSSVictoryCutscene, IsDonePlay); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSVictoryCutscene_h_15_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSVictoryCutscene_h_17_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSVictoryCutscene_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSVictoryCutscene_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSVictoryCutscene_h_17_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSVictoryCutscene_h_17_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSVictoryCutscene_h_17_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSVictoryCutscene_h_17_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSVictoryCutscene_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSVictoryCutscene_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSVictoryCutscene_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSVictoryCutscene_h_17_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSVictoryCutscene_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSVictoryCutscene_h_17_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSVictoryCutscene_h_17_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSVictoryCutscene_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSVictoryCutscene>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSVictoryCutscene_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
