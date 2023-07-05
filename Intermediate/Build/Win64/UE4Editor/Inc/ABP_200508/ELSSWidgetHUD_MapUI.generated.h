// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESSItemBoxType : uint8;
class AELSSStorm;
struct FVector;
struct FVector2D;
enum class EKeyMappingType : uint8;
#ifdef ABP_200508_ELSSWidgetHUD_MapUI_generated_h
#error "ELSSWidgetHUD_MapUI.generated.h already included, missing '#pragma once' in ELSSWidgetHUD_MapUI.h"
#endif
#define ABP_200508_ELSSWidgetHUD_MapUI_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MapUI_h_25_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MapUI_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyAliveCount); \
	DECLARE_FUNCTION(execApplyAreaShrinkTime); \
	DECLARE_FUNCTION(execApplyKOCount); \
	DECLARE_FUNCTION(execApplyWatchGameMode); \
	DECLARE_FUNCTION(execChangeMapMode); \
	DECLARE_FUNCTION(execGetCanvasScale); \
	DECLARE_FUNCTION(execGetEnemyVisibleDistance); \
	DECLARE_FUNCTION(execGetFloor); \
	DECLARE_FUNCTION(execGetItemBoxVisibleDistance); \
	DECLARE_FUNCTION(execIsTreasureBox); \
	DECLARE_FUNCTION(execIsUsingEnemySearchAbility); \
	DECLARE_FUNCTION(execIsUsingItemBoxSearchAbility); \
	DECLARE_FUNCTION(execSetMinimapTexture); \
	DECLARE_FUNCTION(execSetStormActor); \
	DECLARE_FUNCTION(execSetVisibleAnnounceStormAndGuide); \
	DECLARE_FUNCTION(execSetVisibleOperationButton); \
	DECLARE_FUNCTION(execShowOffIcons); \
	DECLARE_FUNCTION(execSwitchMapMode); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execUpdateAnnounceGuide); \
	DECLARE_FUNCTION(execUpdateAnnounceStorm); \
	DECLARE_FUNCTION(execUpdateCarrotMedal); \
	DECLARE_FUNCTION(execUpdateEnemy); \
	DECLARE_FUNCTION(execUpdateHorseSaddle); \
	DECLARE_FUNCTION(execUpdateItemBox); \
	DECLARE_FUNCTION(execUpdateMiniMap); \
	DECLARE_FUNCTION(execUpdatePlayer); \
	DECLARE_FUNCTION(execUpdateStormZone); \
	DECLARE_FUNCTION(execWorldLocationToUI);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MapUI_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyAliveCount); \
	DECLARE_FUNCTION(execApplyAreaShrinkTime); \
	DECLARE_FUNCTION(execApplyKOCount); \
	DECLARE_FUNCTION(execApplyWatchGameMode); \
	DECLARE_FUNCTION(execChangeMapMode); \
	DECLARE_FUNCTION(execGetCanvasScale); \
	DECLARE_FUNCTION(execGetEnemyVisibleDistance); \
	DECLARE_FUNCTION(execGetFloor); \
	DECLARE_FUNCTION(execGetItemBoxVisibleDistance); \
	DECLARE_FUNCTION(execIsTreasureBox); \
	DECLARE_FUNCTION(execIsUsingEnemySearchAbility); \
	DECLARE_FUNCTION(execIsUsingItemBoxSearchAbility); \
	DECLARE_FUNCTION(execSetMinimapTexture); \
	DECLARE_FUNCTION(execSetStormActor); \
	DECLARE_FUNCTION(execSetVisibleAnnounceStormAndGuide); \
	DECLARE_FUNCTION(execSetVisibleOperationButton); \
	DECLARE_FUNCTION(execShowOffIcons); \
	DECLARE_FUNCTION(execSwitchMapMode); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execUpdateAnnounceGuide); \
	DECLARE_FUNCTION(execUpdateAnnounceStorm); \
	DECLARE_FUNCTION(execUpdateCarrotMedal); \
	DECLARE_FUNCTION(execUpdateEnemy); \
	DECLARE_FUNCTION(execUpdateHorseSaddle); \
	DECLARE_FUNCTION(execUpdateItemBox); \
	DECLARE_FUNCTION(execUpdateMiniMap); \
	DECLARE_FUNCTION(execUpdatePlayer); \
	DECLARE_FUNCTION(execUpdateStormZone); \
	DECLARE_FUNCTION(execWorldLocationToUI);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MapUI_h_25_EVENT_PARMS \
	struct ELSSWidgetHUD_MapUI_eventSetKeyConfig_Parms \
	{ \
		EKeyMappingType InKeyMapType; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MapUI_h_25_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MapUI_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_MapUI(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_MapUI, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_MapUI)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MapUI_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_MapUI(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_MapUI, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_MapUI)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MapUI_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSWidgetHUD_MapUI(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSWidgetHUD_MapUI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_MapUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_MapUI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_MapUI(UELSSWidgetHUD_MapUI&&); \
	NO_API UELSSWidgetHUD_MapUI(const UELSSWidgetHUD_MapUI&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MapUI_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_MapUI(UELSSWidgetHUD_MapUI&&); \
	NO_API UELSSWidgetHUD_MapUI(const UELSSWidgetHUD_MapUI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_MapUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_MapUI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSWidgetHUD_MapUI)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MapUI_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerFloor() { return STRUCT_OFFSET(UELSSWidgetHUD_MapUI, PlayerFloor); } \
	FORCEINLINE static uint32 __PPO__MiniMapTypeIndex() { return STRUCT_OFFSET(UELSSWidgetHUD_MapUI, MiniMapTypeIndex); } \
	FORCEINLINE static uint32 __PPO__DefaultMinimapId() { return STRUCT_OFFSET(UELSSWidgetHUD_MapUI, DefaultMinimapId); } \
	FORCEINLINE static uint32 __PPO__MapCanvasSize() { return STRUCT_OFFSET(UELSSWidgetHUD_MapUI, MapCanvasSize); } \
	FORCEINLINE static uint32 __PPO__IsWholeMap() { return STRUCT_OFFSET(UELSSWidgetHUD_MapUI, IsWholeMap); } \
	FORCEINLINE static uint32 __PPO__IsDoneInit() { return STRUCT_OFFSET(UELSSWidgetHUD_MapUI, IsDoneInit); } \
	FORCEINLINE static uint32 __PPO__IsSearchAbilityUsing() { return STRUCT_OFFSET(UELSSWidgetHUD_MapUI, IsSearchAbilityUsing); } \
	FORCEINLINE static uint32 __PPO__IsWatchGameMode() { return STRUCT_OFFSET(UELSSWidgetHUD_MapUI, IsWatchGameMode); } \
	FORCEINLINE static uint32 __PPO__PlayerPos() { return STRUCT_OFFSET(UELSSWidgetHUD_MapUI, PlayerPos); } \
	FORCEINLINE static uint32 __PPO__PlayerRealPos() { return STRUCT_OFFSET(UELSSWidgetHUD_MapUI, PlayerRealPos); } \
	FORCEINLINE static uint32 __PPO__PlayerRotation() { return STRUCT_OFFSET(UELSSWidgetHUD_MapUI, PlayerRotation); } \
	FORCEINLINE static uint32 __PPO__MapCanvas() { return STRUCT_OFFSET(UELSSWidgetHUD_MapUI, MapCanvas); } \
	FORCEINLINE static uint32 __PPO__MiniMapCashed() { return STRUCT_OFFSET(UELSSWidgetHUD_MapUI, MiniMapCashed); } \
	FORCEINLINE static uint32 __PPO__MapOperationButton() { return STRUCT_OFFSET(UELSSWidgetHUD_MapUI, MapOperationButton); } \
	FORCEINLINE static uint32 __PPO__Enemy01Widgets() { return STRUCT_OFFSET(UELSSWidgetHUD_MapUI, Enemy01Widgets); } \
	FORCEINLINE static uint32 __PPO__Enemy02Widgets() { return STRUCT_OFFSET(UELSSWidgetHUD_MapUI, Enemy02Widgets); } \
	FORCEINLINE static uint32 __PPO__ItemBox01Widgets() { return STRUCT_OFFSET(UELSSWidgetHUD_MapUI, ItemBox01Widgets); } \
	FORCEINLINE static uint32 __PPO__ItemBox02Widgets() { return STRUCT_OFFSET(UELSSWidgetHUD_MapUI, ItemBox02Widgets); } \
	FORCEINLINE static uint32 __PPO__TreasureBox01Widgets() { return STRUCT_OFFSET(UELSSWidgetHUD_MapUI, TreasureBox01Widgets); } \
	FORCEINLINE static uint32 __PPO__TreasureBox02Widgets() { return STRUCT_OFFSET(UELSSWidgetHUD_MapUI, TreasureBox02Widgets); } \
	FORCEINLINE static uint32 __PPO__HorseSaddle01Widgets() { return STRUCT_OFFSET(UELSSWidgetHUD_MapUI, HorseSaddle01Widgets); } \
	FORCEINLINE static uint32 __PPO__HorseSaddle02Widgets() { return STRUCT_OFFSET(UELSSWidgetHUD_MapUI, HorseSaddle02Widgets); } \
	FORCEINLINE static uint32 __PPO__CarrotMedal01Widgets() { return STRUCT_OFFSET(UELSSWidgetHUD_MapUI, CarrotMedal01Widgets); } \
	FORCEINLINE static uint32 __PPO__CarrotMedal02Widgets() { return STRUCT_OFFSET(UELSSWidgetHUD_MapUI, CarrotMedal02Widgets); } \
	FORCEINLINE static uint32 __PPO__ItemManager() { return STRUCT_OFFSET(UELSSWidgetHUD_MapUI, ItemManager); } \
	FORCEINLINE static uint32 __PPO__MapImage() { return STRUCT_OFFSET(UELSSWidgetHUD_MapUI, MapImage); } \
	FORCEINLINE static uint32 __PPO__PlayerIcon() { return STRUCT_OFFSET(UELSSWidgetHUD_MapUI, PlayerIcon); } \
	FORCEINLINE static uint32 __PPO__PlayerSight() { return STRUCT_OFFSET(UELSSWidgetHUD_MapUI, PlayerSight); } \
	FORCEINLINE static uint32 __PPO__StormGuide() { return STRUCT_OFFSET(UELSSWidgetHUD_MapUI, StormGuide); } \
	FORCEINLINE static uint32 __PPO__StormZone() { return STRUCT_OFFSET(UELSSWidgetHUD_MapUI, StormZone); } \
	FORCEINLINE static uint32 __PPO__AnnounceStorm() { return STRUCT_OFFSET(UELSSWidgetHUD_MapUI, AnnounceStorm); } \
	FORCEINLINE static uint32 __PPO__MiniMapFrameWidget() { return STRUCT_OFFSET(UELSSWidgetHUD_MapUI, MiniMapFrameWidget); } \
	FORCEINLINE static uint32 __PPO__PlayerActor() { return STRUCT_OFFSET(UELSSWidgetHUD_MapUI, PlayerActor); } \
	FORCEINLINE static uint32 __PPO__PlayerController() { return STRUCT_OFFSET(UELSSWidgetHUD_MapUI, PlayerController); } \
	FORCEINLINE static uint32 __PPO__StormActor() { return STRUCT_OFFSET(UELSSWidgetHUD_MapUI, StormActor); } \
	FORCEINLINE static uint32 __PPO__MiniMapZoom() { return STRUCT_OFFSET(UELSSWidgetHUD_MapUI, MiniMapZoom); } \
	FORCEINLINE static uint32 __PPO__MiniMapInfo() { return STRUCT_OFFSET(UELSSWidgetHUD_MapUI, MiniMapInfo); } \
	FORCEINLINE static uint32 __PPO__FloorThreshold() { return STRUCT_OFFSET(UELSSWidgetHUD_MapUI, FloorThreshold); } \
	FORCEINLINE static uint32 __PPO__MapTypeDataTable() { return STRUCT_OFFSET(UELSSWidgetHUD_MapUI, MapTypeDataTable); } \
	FORCEINLINE static uint32 __PPO__TextureMaterial() { return STRUCT_OFFSET(UELSSWidgetHUD_MapUI, TextureMaterial); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MapUI_h_23_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MapUI_h_25_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MapUI_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MapUI_h_25_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MapUI_h_25_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MapUI_h_25_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MapUI_h_25_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MapUI_h_25_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MapUI_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MapUI_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MapUI_h_25_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MapUI_h_25_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MapUI_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MapUI_h_25_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MapUI_h_25_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MapUI_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSWidgetHUD_MapUI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_MapUI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
