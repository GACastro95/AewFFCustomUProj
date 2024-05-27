#pragma once
#include "CoreMinimal.h"
#include "ELSSWidgetBase.h"
#include "ESSFGFIconType.h"
#include "ELSSWidgetHUD_FGFScoreboard.generated.h"

class UCanvasPanel;
class UImage;
class UMaterialInstanceDynamic;
class UUserWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_FGFScoreboard : public UELSSWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CountMinute_01Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CountSecond_10Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CountSecond_01Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* MyTeamGaugeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> OwnSideScoreMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> OppositeSideScoreMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> BallLevelGaugeMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UImage*> TeamIconWigets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UImage*> GaugeTeamIconWigets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCanvasPanel*> BallLevelCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> DefenceBoostWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> OffenceTextWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> ScoreTextWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> OwnBallLevelWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> OpponentBallLevelWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UImage*> ScoreNumTextWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> ScoreTextAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> DefenceBoostAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> BallLevelEmptyAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> BallLevelActiveAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> BallLevelInactiveAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> OpponentBallLevelEmptyAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> OpponentBallLevelActiveAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> OpponentBallLevelInactiveAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* GaugeVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Minutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Seconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Round;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OwnSideScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OppositeScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BallLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IdealBallLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BallLevelPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BallLevelPointDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BallLevelPointElapsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdealBallLevelPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCompleteBallLevelPointDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DurationIsOwnSide;
    
public:
    UELSSWidgetHUD_FGFScoreboard();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateScore(int32 inScore, bool InOwnSide);
    
    UFUNCTION(BlueprintCallable)
    void UpdateBallpointGauge(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void StopBallLevelAnimation(int32 InIndex, bool InOwnSide);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVisibleOffenceInfo(bool InOwnSide, bool inIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleDefenceBoostText(bool InOwnSide, bool inIsVisible);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayScoreUpdateAnimation(bool InOwnSide);
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyTeamIcon(ESSFGFIconType InIconType, bool InOwnSide);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyScoreGauge(int32 InOwnScore, int32 InOppositeScore);
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyScore(int32 InOwnScore, int32 InOppositeScore);
    
    UFUNCTION(BlueprintCallable)
    void ApplyRoundTime(float InSecond);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyRoundText(int32 InRound);
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyRound(int32 InRound);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyCountText(bool InIsMinute);
    
    UFUNCTION(BlueprintCallable)
    void ApplyBallLevelGauge(float GaugeRatio, bool InOwnSide);
    
    UFUNCTION(BlueprintCallable)
    void ApplyBallLevelAnim(int32 inLevel, bool InOwnSide);
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyBallLevel(int32 inLevel, int32 inBallLevelPoint, int32 InMaxBallLevelPoint, bool InOwnSide);
    
};

