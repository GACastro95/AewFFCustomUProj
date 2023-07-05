#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EKeyMappingType.h"
#include "ELSSWidgetBase.h"
#include "ESSItemBoxType.h"
#include "ELSSWidgetHUD_MapUI.generated.h"

class AActor;
class AELSSItemManager;
class AELSSStorm;
class APlayerController;
class UCanvasPanel;
class UDataTable;
class UELSSWidgetHUD_MiniMapInfo;
class UELSSWidgetHUD_MiniMapZoom;
class UImage;
class UMaterialInstanceDynamic;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_MapUI : public UELSSWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MiniMapTypeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultMinimapId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapCanvasSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsWholeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDoneInit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSearchAbilityUsing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsWatchGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlayerPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlayerRealPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator PlayerRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* MapCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* MiniMapCashed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* MapOperationButton;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSItemManager* ItemManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* MapImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* PlayerIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* PlayerSight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* StormGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* StormZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* AnnounceStorm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* MiniMapFrameWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PlayerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSStorm* StormActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSWidgetHUD_MiniMapZoom* MiniMapZoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSWidgetHUD_MiniMapInfo* MiniMapInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> FloorThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MapTypeDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* TextureMaterial;
    
public:
    UELSSWidgetHUD_MapUI();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D WorldLocationToUI(const FVector& InWorldLocation);
    
    UFUNCTION(BlueprintCallable)
    void UpdateStormZone();
    
    UFUNCTION(BlueprintCallable)
    void UpdatePlayer();
    
    UFUNCTION(BlueprintCallable)
    void UpdateMiniMap();
    
    UFUNCTION(BlueprintCallable)
    void UpdateItemBox();
    
    UFUNCTION(BlueprintCallable)
    void UpdateHorseSaddle();
    
    UFUNCTION(BlueprintCallable)
    void UpdateEnemy();
    
    UFUNCTION(BlueprintCallable)
    void UpdateCarrotMedal();
    
    UFUNCTION(BlueprintCallable)
    void UpdateAnnounceStorm();
    
    UFUNCTION(BlueprintCallable)
    void UpdateAnnounceGuide();
    
    UFUNCTION(BlueprintCallable)
    void Update();
    
public:
    UFUNCTION(BlueprintCallable)
    void SwitchMapMode(bool InIsWholeMapMode);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ShowOffIcons();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVisibleOperationButton(bool InIsShow);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleAnnounceStormAndGuide(bool InIsShow);
    
    UFUNCTION(BlueprintCallable)
    void SetStormActor(AELSSStorm* InStormActor);
    
    UFUNCTION(BlueprintCallable)
    void SetMinimapTexture(int32 InMinimapID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetKeyConfig(EKeyMappingType InKeyMapType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingItemBoxSearchAbility();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingEnemySearchAbility();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTreasureBox(ESSItemBoxType InType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init();
    
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
    
    UFUNCTION(BlueprintCallable)
    void ChangeMapMode(bool InIsWholeMapMode);
    
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

