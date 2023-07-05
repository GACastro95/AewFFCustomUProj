// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESSInteractExecute : uint8;
struct FSlateColor;
enum class ESSInteractOperate : uint8;
class AActor;
struct FVector;
enum class EKeyMappingType : uint8;
#ifdef ABP_200508_ELSSWidgetHUD_Interact_generated_h
#error "ELSSWidgetHUD_Interact.generated.h already included, missing '#pragma once' in ELSSWidgetHUD_Interact.h"
#endif
#define ABP_200508_ELSSWidgetHUD_Interact_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Interact_h_21_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Interact_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyWatchGameMode); \
	DECLARE_FUNCTION(execGetInteractParam); \
	DECLARE_FUNCTION(execSetInventoryItem); \
	DECLARE_FUNCTION(execSetTargetActor); \
	DECLARE_FUNCTION(execSetVisibleAllInteract); \
	DECLARE_FUNCTION(execSetVisibleToItemInteract); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execUpdateOpacityAnimation);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Interact_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyWatchGameMode); \
	DECLARE_FUNCTION(execGetInteractParam); \
	DECLARE_FUNCTION(execSetInventoryItem); \
	DECLARE_FUNCTION(execSetTargetActor); \
	DECLARE_FUNCTION(execSetVisibleAllInteract); \
	DECLARE_FUNCTION(execSetVisibleToItemInteract); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execUpdateOpacityAnimation);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Interact_h_21_EVENT_PARMS \
	struct ELSSWidgetHUD_Interact_eventApplyRatio_Parms \
	{ \
		float InRatio; \
	}; \
	struct ELSSWidgetHUD_Interact_eventSetKeyConfig_Parms \
	{ \
		EKeyMappingType InKeyMapType; \
	}; \
	struct ELSSWidgetHUD_Interact_eventSetVisibleToInteract_Parms \
	{ \
		ESSInteractExecute InType; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Interact_h_21_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Interact_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_Interact(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_Interact, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_Interact)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Interact_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_Interact(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_Interact, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_Interact)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Interact_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSWidgetHUD_Interact(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSWidgetHUD_Interact) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_Interact); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_Interact); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_Interact(UELSSWidgetHUD_Interact&&); \
	NO_API UELSSWidgetHUD_Interact(const UELSSWidgetHUD_Interact&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Interact_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_Interact(UELSSWidgetHUD_Interact&&); \
	NO_API UELSSWidgetHUD_Interact(const UELSSWidgetHUD_Interact&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_Interact); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_Interact); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSWidgetHUD_Interact)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Interact_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayInAnim() { return STRUCT_OFFSET(UELSSWidgetHUD_Interact, PlayInAnim); } \
	FORCEINLINE static uint32 __PPO__PlayOutAnim() { return STRUCT_OFFSET(UELSSWidgetHUD_Interact, PlayOutAnim); } \
	FORCEINLINE static uint32 __PPO__GeneralInteract() { return STRUCT_OFFSET(UELSSWidgetHUD_Interact, GeneralInteract); } \
	FORCEINLINE static uint32 __PPO__LayoutWidget() { return STRUCT_OFFSET(UELSSWidgetHUD_Interact, LayoutWidget); } \
	FORCEINLINE static uint32 __PPO__ItemInteract() { return STRUCT_OFFSET(UELSSWidgetHUD_Interact, ItemInteract); } \
	FORCEINLINE static uint32 __PPO__VehicleGauge() { return STRUCT_OFFSET(UELSSWidgetHUD_Interact, VehicleGauge); } \
	FORCEINLINE static uint32 __PPO__TargetActor() { return STRUCT_OFFSET(UELSSWidgetHUD_Interact, TargetActor); } \
	FORCEINLINE static uint32 __PPO__PlayerController() { return STRUCT_OFFSET(UELSSWidgetHUD_Interact, PlayerController); } \
	FORCEINLINE static uint32 __PPO__FinisherColor() { return STRUCT_OFFSET(UELSSWidgetHUD_Interact, FinisherColor); } \
	FORCEINLINE static uint32 __PPO__DefaultColor() { return STRUCT_OFFSET(UELSSWidgetHUD_Interact, DefaultColor); } \
	FORCEINLINE static uint32 __PPO__Offset() { return STRUCT_OFFSET(UELSSWidgetHUD_Interact, Offset); } \
	FORCEINLINE static uint32 __PPO__InteractType() { return STRUCT_OFFSET(UELSSWidgetHUD_Interact, InteractType); } \
	FORCEINLINE static uint32 __PPO__PreInteractType() { return STRUCT_OFFSET(UELSSWidgetHUD_Interact, PreInteractType); } \
	FORCEINLINE static uint32 __PPO__OpacityElapsed() { return STRUCT_OFFSET(UELSSWidgetHUD_Interact, OpacityElapsed); } \
	FORCEINLINE static uint32 __PPO__IsOpacityAnimation() { return STRUCT_OFFSET(UELSSWidgetHUD_Interact, IsOpacityAnimation); } \
	FORCEINLINE static uint32 __PPO__PreWorldPos() { return STRUCT_OFFSET(UELSSWidgetHUD_Interact, PreWorldPos); } \
	FORCEINLINE static uint32 __PPO__VEHICLEGAUGEOFFSET() { return STRUCT_OFFSET(UELSSWidgetHUD_Interact, VEHICLEGAUGEOFFSET); } \
	FORCEINLINE static uint32 __PPO__FadeoutLengthTime() { return STRUCT_OFFSET(UELSSWidgetHUD_Interact, FadeoutLengthTime); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Interact_h_19_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Interact_h_21_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Interact_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Interact_h_21_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Interact_h_21_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Interact_h_21_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Interact_h_21_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Interact_h_21_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Interact_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Interact_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Interact_h_21_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Interact_h_21_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Interact_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Interact_h_21_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Interact_h_21_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Interact_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSWidgetHUD_Interact>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Interact_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
