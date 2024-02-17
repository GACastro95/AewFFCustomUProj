#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EKeyMappingType.h"
#include "ELSSWidgetBase.h"
#include "ESSItemBoxType.h"
#include "ESSRuleType.h"
#include "ELSSWidgetHUD_MiniMapZoom.generated.h"

class AActor;
class AELSSFgfManager;
class AELSSItemManager;
class AELSSPlayerController;
class AELSSStorm;
class UCanvasPanel;
class UELSSWidgetHUD_ArrowMiniMapIcon;
class UELSSWidgetHUD_MiniMapImage;
class UImage;
class UMaterialInstanceDynamic;
class UUserWidget;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_MiniMapZoom : public UELSSWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSPlayerController* SSPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* KOMaterial_10;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* KOMaterial_01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* AliveMaterial_10;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* AliveMaterial_01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ShrinkTimeMinMaterial_10;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ShrinkTimeMinMaterial_01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ShrinkTimeSecMaterial_10;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ShrinkTimeSecMaterial_01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PlayInAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PlayOutAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* ShrinkTimeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* KO10Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Alive10Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* OperationButtonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* StormGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* StormZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* AnnounceStorm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* PlayerIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* MapCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSWidgetHUD_MiniMapImage* MiniMapImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> Enemy01Widgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> Enemy02Widgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> ItemBox01Widgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> ItemBox02Widgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> TreasureBox01Widgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> TreasureBox02Widgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> HorseSaddle01Widgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> HorseSaddle02Widgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* CarrotMedal01Widgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* CarrotMedal02Widgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UELSSWidgetHUD_ArrowMiniMapIcon*> Ally01Widgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UELSSWidgetHUD_ArrowMiniMapIcon*> Ally02Widgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSItemManager* ItemManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSFgfManager* FgfManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PlayerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSStorm* StormActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> FloorThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDoneInit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsShowShrinkTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSearchAbilityUsing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsWatchGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlayerPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator PlayerRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MiniMapTypeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Minutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSRuleType RuleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* BlackDiamondIcon01Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* BlackDiamondIcon02Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* TeamTreasureBoxIcon01Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* TeamTreasureBoxIcon02Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> FGFGoalIcon01Widgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> FGFGoalIcon02Widgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* FGFBallIcon01Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* FGFBallIcon02Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* FGFOpponentBallIcon01Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* FGFOpponentBallIcon02Widget;
    
public:
    UELSSWidgetHUD_MiniMapZoom();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D WorldPosToCanvasPos(const FVector& InWorldPos);
    
    UFUNCTION(BlueprintCallable)
    void UpdateTeamTreasureBox();
    
    UFUNCTION(BlueprintCallable)
    void UpdateStormZone();
    
    UFUNCTION(BlueprintCallable)
    void UpdatePlayer();
    
    UFUNCTION(BlueprintCallable)
    void UpdateItemBoxAndTreasureBox();
    
    UFUNCTION(BlueprintCallable)
    void UpdateHorseSaddle();
    
    UFUNCTION(BlueprintCallable)
    void UpdateFGFGoal();
    
    UFUNCTION(BlueprintCallable)
    void UpdateFGFBall();
    
    UFUNCTION(BlueprintCallable)
    void UpdateEnemy();
    
    UFUNCTION(BlueprintCallable)
    void UpdateCarrotMedal();
    
    UFUNCTION(BlueprintCallable)
    void UpdateBlackDiamond();
    
    UFUNCTION(BlueprintCallable)
    void UpdateAnnounceStorm();
    
    UFUNCTION(BlueprintCallable)
    void UpdateAnnounceGuide();
    
    UFUNCTION(BlueprintCallable)
    void UpdateAlly();
    
public:
    UFUNCTION(BlueprintCallable)
    void Update();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ShowOffIcons();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVisibleOperationButton(bool inIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleAnnounceStormAndGuide(bool InIsShow);
    
    UFUNCTION(BlueprintCallable)
    void SetStormActor(AELSSStorm* InStormActor);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerActor(AActor* inPlayerActor);
    
    UFUNCTION(BlueprintCallable)
    void SetMinimapTexture(int32 InMinimapID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetKeyConfig(EKeyMappingType InKeyMapType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetAreaShrinkTime(float InSecond);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayOut();
    
    UFUNCTION(BlueprintCallable)
    void PlayIn();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingItemBoxSearchAbility();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingEnemySearchAbility();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTreasureBox(ESSItemBoxType InType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetItemBoxVisibleDistance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFloor(float InZpos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnemyVisibleDistance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCanvasScale();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateMarkers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D CanvasPosToMaterialPos(const FVector2D& InCanvasPos);
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyWatchGameMode();
    
    UFUNCTION(BlueprintCallable)
    void ApplyKOCount(int32 InKOCount);
    
    UFUNCTION(BlueprintCallable)
    void ApplyAreaShrinkTime(float InSecond);
    
    UFUNCTION(BlueprintCallable)
    void ApplyAliveCount(int32 InAliveCount);
    
};

