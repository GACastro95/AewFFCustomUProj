#pragma once
#include "CoreMinimal.h"
#include "ELSSWidgetBase.h"
#include "ESSAttentionGaugeStateLevel.h"
#include "ESSAttentionReason.h"
#include "ELSSWidgetHUD_AttentionGauge.generated.h"

class UELSSWidgetHUD_AttentionPoint;
class UMaterialInstanceDynamic;
class UVerticalBox;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_AttentionGauge : public UELSSWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FeverEndAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FeverStartAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FeverLoopAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* CrowdIconLowAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* CrowdIconMidAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* CrowdIconHighAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BuffInAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BuffOutAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* AttentionPtsM_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* AttentionPtsM_10;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* AttentionPtsM_100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* AttentionPtsM_1000;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MaxAttentionPtsM_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MaxAttentionPtsM_10;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MaxAttentionPtsM_100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MaxAttentionPtsM_1000;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* PtsVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* AttentionPts_1000Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* AttentionPts_100Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* AttentionPts_10Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* MaxAttentionPts_1000Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* MaxAttentionPts_100Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* MaxAttentionPts_10Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UELSSWidgetHUD_AttentionPoint*> PointArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> AddValueArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESSAttentionReason> AttentionReasonArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCompleteDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFeverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBoostTextShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttentionElapsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAttentionValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttentionDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttentionValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IdealAttentionValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StackIndex;
    
public:
    UELSSWidgetHUD_AttentionGauge();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateAttentionValue(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void Update(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SortToIndex(int32 InFromIndex, int32 InToIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVisibleFeverEffect(bool inIsVisible, bool InPlayStartSE, bool InPlayEndSE);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetAttentionPointToStack(int32 InAddValue, ESSAttentionReason InActType);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetAttentionGauge();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartFeverAnim(bool InPlaySound);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndFeverAnim(bool InPlaySound);
    
    UFUNCTION(BlueprintCallable)
    void MovePointArray();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetBoostText(float InAttentionBoostValue);
    
    UFUNCTION(BlueprintCallable)
    void GetAttentionPointFromStack();
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyMaxAttentionValue(int32 InMaxAttentionValue);
    
    UFUNCTION(BlueprintCallable)
    void ApplyIconAnim(ESSAttentionGaugeStateLevel inState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyBoostText(float InAttentionBoostValue);
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyAttentionValue(int32 InAttentionValue, int32 InAddValue, ESSAttentionReason InActType, bool InGaugeTransition);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyAttentionPts(int32 InAttentionValue);
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyAttentionBoostValue(float InAttentionBoostValue);
    
};

