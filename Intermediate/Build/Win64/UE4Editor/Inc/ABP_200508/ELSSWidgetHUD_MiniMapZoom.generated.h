// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
enum class ESSItemBoxType : uint8;
class AActor;
class AELSSStorm;
struct FVector;
enum class EKeyMappingType : uint8;
#ifdef ABP_200508_ELSSWidgetHUD_MiniMapZoom_generated_h
#error "ELSSWidgetHUD_MiniMapZoom.generated.h already included, missing '#pragma once' in ELSSWidgetHUD_MiniMapZoom.h"
#endif
#define ABP_200508_ELSSWidgetHUD_MiniMapZoom_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapZoom_h_24_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapZoom_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyAliveCount); \
	DECLARE_FUNCTION(execApplyAreaShrinkTime); \
	DECLARE_FUNCTION(execApplyKOCount); \
	DECLARE_FUNCTION(execApplyWatchGameMode); \
	DECLARE_FUNCTION(execCanvasPosToMaterialPos); \
	DECLARE_FUNCTION(execGetCanvasScale); \
	DECLARE_FUNCTION(execGetEnemyVisibleDistance); \
	DECLARE_FUNCTION(execGetFloor); \
	DECLARE_FUNCTION(execGetItemBoxVisibleDistance); \
	DECLARE_FUNCTION(execIsTreasureBox); \
	DECLARE_FUNCTION(execIsUsingEnemySearchAbility); \
	DECLARE_FUNCTION(execIsUsingItemBoxSearchAbility); \
	DECLARE_FUNCTION(execPlayIn); \
	DECLARE_FUNCTION(execPlayOut); \
	DECLARE_FUNCTION(execSetAreaShrinkTime); \
	DECLARE_FUNCTION(execSetMinimapTexture); \
	DECLARE_FUNCTION(execSetPlayerActor); \
	DECLARE_FUNCTION(execSetStormActor); \
	DECLARE_FUNCTION(execSetVisibleAnnounceStormAndGuide); \
	DECLARE_FUNCTION(execSetVisibleOperationButton); \
	DECLARE_FUNCTION(execShowOffIcons); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execUpdateAnnounceGuide); \
	DECLARE_FUNCTION(execUpdateAnnounceStorm); \
	DECLARE_FUNCTION(execUpdateCarrotMedal); \
	DECLARE_FUNCTION(execUpdateEnemy); \
	DECLARE_FUNCTION(execUpdateHorseSaddle); \
	DECLARE_FUNCTION(execUpdateItemBoxAndTreasureBox); \
	DECLARE_FUNCTION(execUpdatePlayer); \
	DECLARE_FUNCTION(execUpdateStormZone); \
	DECLARE_FUNCTION(execWorldPosToCanvasPos);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapZoom_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyAliveCount); \
	DECLARE_FUNCTION(execApplyAreaShrinkTime); \
	DECLARE_FUNCTION(execApplyKOCount); \
	DECLARE_FUNCTION(execApplyWatchGameMode); \
	DECLARE_FUNCTION(execCanvasPosToMaterialPos); \
	DECLARE_FUNCTION(execGetCanvasScale); \
	DECLARE_FUNCTION(execGetEnemyVisibleDistance); \
	DECLARE_FUNCTION(execGetFloor); \
	DECLARE_FUNCTION(execGetItemBoxVisibleDistance); \
	DECLARE_FUNCTION(execIsTreasureBox); \
	DECLARE_FUNCTION(execIsUsingEnemySearchAbility); \
	DECLARE_FUNCTION(execIsUsingItemBoxSearchAbility); \
	DECLARE_FUNCTION(execPlayIn); \
	DECLARE_FUNCTION(execPlayOut); \
	DECLARE_FUNCTION(execSetAreaShrinkTime); \
	DECLARE_FUNCTION(execSetMinimapTexture); \
	DECLARE_FUNCTION(execSetPlayerActor); \
	DECLARE_FUNCTION(execSetStormActor); \
	DECLARE_FUNCTION(execSetVisibleAnnounceStormAndGuide); \
	DECLARE_FUNCTION(execSetVisibleOperationButton); \
	DECLARE_FUNCTION(execShowOffIcons); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execUpdateAnnounceGuide); \
	DECLARE_FUNCTION(execUpdateAnnounceStorm); \
	DECLARE_FUNCTION(execUpdateCarrotMedal); \
	DECLARE_FUNCTION(execUpdateEnemy); \
	DECLARE_FUNCTION(execUpdateHorseSaddle); \
	DECLARE_FUNCTION(execUpdateItemBoxAndTreasureBox); \
	DECLARE_FUNCTION(execUpdatePlayer); \
	DECLARE_FUNCTION(execUpdateStormZone); \
	DECLARE_FUNCTION(execWorldPosToCanvasPos);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapZoom_h_24_EVENT_PARMS \
	struct ELSSWidgetHUD_MiniMapZoom_eventSetKeyConfig_Parms \
	{ \
		EKeyMappingType InKeyMapType; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapZoom_h_24_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapZoom_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_MiniMapZoom(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_MiniMapZoom, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_MiniMapZoom)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapZoom_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_MiniMapZoom(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_MiniMapZoom, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_MiniMapZoom)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapZoom_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSWidgetHUD_MiniMapZoom(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSWidgetHUD_MiniMapZoom) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_MiniMapZoom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_MiniMapZoom); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_MiniMapZoom(UELSSWidgetHUD_MiniMapZoom&&); \
	NO_API UELSSWidgetHUD_MiniMapZoom(const UELSSWidgetHUD_MiniMapZoom&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapZoom_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_MiniMapZoom(UELSSWidgetHUD_MiniMapZoom&&); \
	NO_API UELSSWidgetHUD_MiniMapZoom(const UELSSWidgetHUD_MiniMapZoom&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_MiniMapZoom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_MiniMapZoom); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSWidgetHUD_MiniMapZoom)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapZoom_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__KOMaterial_10() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, KOMaterial_10); } \
	FORCEINLINE static uint32 __PPO__KOMaterial_01() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, KOMaterial_01); } \
	FORCEINLINE static uint32 __PPO__AliveMaterial_10() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, AliveMaterial_10); } \
	FORCEINLINE static uint32 __PPO__AliveMaterial_01() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, AliveMaterial_01); } \
	FORCEINLINE static uint32 __PPO__ShrinkTimeMinMaterial_10() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, ShrinkTimeMinMaterial_10); } \
	FORCEINLINE static uint32 __PPO__ShrinkTimeMinMaterial_01() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, ShrinkTimeMinMaterial_01); } \
	FORCEINLINE static uint32 __PPO__ShrinkTimeSecMaterial_10() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, ShrinkTimeSecMaterial_10); } \
	FORCEINLINE static uint32 __PPO__ShrinkTimeSecMaterial_01() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, ShrinkTimeSecMaterial_01); } \
	FORCEINLINE static uint32 __PPO__PlayInAnim() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, PlayInAnim); } \
	FORCEINLINE static uint32 __PPO__PlayOutAnim() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, PlayOutAnim); } \
	FORCEINLINE static uint32 __PPO__ShrinkTimeWidget() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, ShrinkTimeWidget); } \
	FORCEINLINE static uint32 __PPO__KO10Widget() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, KO10Widget); } \
	FORCEINLINE static uint32 __PPO__Alive10Widget() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, Alive10Widget); } \
	FORCEINLINE static uint32 __PPO__OperationButtonWidget() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, OperationButtonWidget); } \
	FORCEINLINE static uint32 __PPO__StormGuide() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, StormGuide); } \
	FORCEINLINE static uint32 __PPO__StormZone() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, StormZone); } \
	FORCEINLINE static uint32 __PPO__AnnounceStorm() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, AnnounceStorm); } \
	FORCEINLINE static uint32 __PPO__PlayerIcon() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, PlayerIcon); } \
	FORCEINLINE static uint32 __PPO__MapCanvas() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, MapCanvas); } \
	FORCEINLINE static uint32 __PPO__MiniMapImage() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, MiniMapImage); } \
	FORCEINLINE static uint32 __PPO__Enemy01Widgets() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, Enemy01Widgets); } \
	FORCEINLINE static uint32 __PPO__Enemy02Widgets() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, Enemy02Widgets); } \
	FORCEINLINE static uint32 __PPO__ItemBox01Widgets() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, ItemBox01Widgets); } \
	FORCEINLINE static uint32 __PPO__ItemBox02Widgets() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, ItemBox02Widgets); } \
	FORCEINLINE static uint32 __PPO__TreasureBox01Widgets() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, TreasureBox01Widgets); } \
	FORCEINLINE static uint32 __PPO__TreasureBox02Widgets() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, TreasureBox02Widgets); } \
	FORCEINLINE static uint32 __PPO__HorseSaddle01Widgets() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, HorseSaddle01Widgets); } \
	FORCEINLINE static uint32 __PPO__HorseSaddle02Widgets() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, HorseSaddle02Widgets); } \
	FORCEINLINE static uint32 __PPO__CarrotMedal01Widgets() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, CarrotMedal01Widgets); } \
	FORCEINLINE static uint32 __PPO__CarrotMedal02Widgets() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, CarrotMedal02Widgets); } \
	FORCEINLINE static uint32 __PPO__ItemManager() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, ItemManager); } \
	FORCEINLINE static uint32 __PPO__PlayerActor() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, PlayerActor); } \
	FORCEINLINE static uint32 __PPO__StormActor() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, StormActor); } \
	FORCEINLINE static uint32 __PPO__FloorThreshold() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, FloorThreshold); } \
	FORCEINLINE static uint32 __PPO__IsDoneInit() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, IsDoneInit); } \
	FORCEINLINE static uint32 __PPO__IsShowShrinkTime() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, IsShowShrinkTime); } \
	FORCEINLINE static uint32 __PPO__IsSearchAbilityUsing() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, IsSearchAbilityUsing); } \
	FORCEINLINE static uint32 __PPO__IsWatchGameMode() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, IsWatchGameMode); } \
	FORCEINLINE static uint32 __PPO__PlayerPos() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, PlayerPos); } \
	FORCEINLINE static uint32 __PPO__PlayerRotation() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, PlayerRotation); } \
	FORCEINLINE static uint32 __PPO__PlayerFloor() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, PlayerFloor); } \
	FORCEINLINE static uint32 __PPO__MiniMapTypeIndex() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, MiniMapTypeIndex); } \
	FORCEINLINE static uint32 __PPO__Minutes() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, Minutes); } \
	FORCEINLINE static uint32 __PPO__Seconds() { return STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, Seconds); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapZoom_h_22_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapZoom_h_24_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapZoom_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapZoom_h_24_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapZoom_h_24_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapZoom_h_24_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapZoom_h_24_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapZoom_h_24_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapZoom_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapZoom_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapZoom_h_24_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapZoom_h_24_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapZoom_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapZoom_h_24_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapZoom_h_24_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapZoom_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSWidgetHUD_MiniMapZoom>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MiniMapZoom_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
