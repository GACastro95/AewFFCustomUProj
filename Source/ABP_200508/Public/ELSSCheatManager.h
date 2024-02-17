#pragma once
#include "CoreMinimal.h"
#include "EWrestlerID_N.h"
#include "GameFramework/CheatManager.h"
#include "ESSActionTransitTrigger.h"
#include "ESSAttentionReason.h"
#include "ESSGameStateDebugFlag.h"
#include "ESSItemBoxType.h"
#include "ESSMoveCommand.h"
#include "ESSPlayerDebugFlag.h"
#include "ESSPlayerStartLocatorAreaId.h"
#include "ESSPlayerStartLocatorType.h"
#include "ELSSCheatManager.generated.h"

UCLASS(Blueprintable, Within=ELSSPlayerController)
class ABP_200508_API UELSSCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    UELSSCheatManager();
    UFUNCTION(BlueprintCallable, Exec)
    void SSVisualizeStormCourse(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSVehicleSetDurability(float Ratio, bool isAll);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSVehicleResetRotation(bool isAll);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSVehicleInvincible(bool IsOn, bool isAll);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSVehicleFullDurability(bool isAll);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSUnlimitedUseItemAndWeapon(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSToggleHUDVisibility();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSToggleGuardToTarget();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSToggleGuardMode(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSTeleportToPlayerStartLocator(ESSPlayerStartLocatorType inLocatorType, ESSPlayerStartLocatorAreaId inAreaId, int32 inFilterID, const FString& inActorName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSTeleportToPlayerStart();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSSwitchCamera(int32 Type);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSStormPrint(float printDuration, int32 printSegment, float printThickness);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSSpawnWeapon(int32 ID, int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSSpawnVehicle(int32 ID, float offsetDistance, float offsetZ, float offsetRoll);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSSpawnShield(int32 ID, int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSSpawnItemBox(ESSItemBoxType Type, int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSSpawnItem(int32 ID, int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSSpawnAndEquipWeapon(int32 ID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSShowVehicleStatus(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSShowRoundInfo(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSShowPlayerStatus(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSShowMoveCorrection(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSShowMapAreaId(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSShowGaugeValue(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSShowDamageReason(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSShowDamage(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSShowAttentionStatus(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSShowAttention(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSShowAttackCapsule(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSShowAimOffsetStatus(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSSetSubLevelVisible(const FName LevelName, bool IsOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSSetHeatLevel(int32 Level);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSSetAttentionPoint(int32 AttentionPoint);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSServerMemReport(bool full);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSServerCrash();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSRoundSpeed(float Speed);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSRotationThemAll(float degree);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSResetAttention();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSPlayerSuicide();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSPlayerSetHP(float Ratio);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSPlayerDuplicate(bool Possess, bool killBase);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSPlayerDebugFlag(ESSPlayerDebugFlag Type, bool IsOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSNetworkProfilerOnServer(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSNearKo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSMoveIdOverrideWeaponSpecial(int32 MoveId, bool withSetEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSMoveIdOverrideEnable(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSMoveIdOverride(ESSMoveCommand MoveCommand, int32 MoveId, bool isEquip, bool withSetEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSMoveFrictionScale(float Scale);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSMoveFrictionDuration(float Scale);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSMapIconForceVisible(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSLobbySkip();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSGameStateDebugFlag(ESSGameStateDebugFlag Type, bool IsOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSForciblyEndMatch();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSForceRespawnNearTeamMember();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSForceRespawn();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSForceNoResponseMode(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSForceGuardToTarget(float guardTime);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSForceFeverOffense(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSForceFeverDefense(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSDisableNoResponseTimeOut(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSDisableCameraAction(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSDestroyThemAll(bool excludeMyself);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSDestroyTeamMembers(bool excludeMyself);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSDestroyExceptTeamMembers(int32 exceptTeamId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSDestroyAllPickupObjects();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSCloseConnection();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSCheatDetection();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSChangeCameraTarget(int32 playerStateIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSBallOwnerSpeedScale(float Scale);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSAssembleThemAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSAIPlayerSpawnPresetByName(const FString& InName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSAIPlayerSpawnPreset(int32 InFaceID, int32 InBodyID, int32 InHairID, int32 InBottomsID, int32 InShoesID, int32 InSuitID, bool InRandom, int32 InTeamId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSAIPlayerSpawn(EWrestlerID_N WrestlerID, int32 InTeamId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSAIPlayerNoDamage(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSAIPlayerAutoRequestTransit(ESSActionTransitTrigger Trigger, float intervalTime, bool autoJump);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSAIPlayerAutoMove(bool IsOn, float Yaw, float RotateSpeed);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSAIPlayerAutoKill(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSAIDisableAll(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSAddAttentionPoint(int32 AddValue, ESSAttentionReason Reason);
    
};

