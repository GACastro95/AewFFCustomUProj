#pragma once
#include "CoreMinimal.h"
#include "ELSSWidgetBase.h"
#include "ESSAttentionReason.h"
#include "ELSSWidgetHUD_AttentionPoint.generated.h"

class UUserWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_AttentionPoint : public UELSSWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PlayInAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PlayOutAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* FontPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShowAttentionPointTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsShowAttentionPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDoneStartPlayOutPoint;
    
public:
    UELSSWidgetHUD_AttentionPoint();
    UFUNCTION(BlueprintCallable)
    void Update(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetupState(int32 InAddValue, ESSAttentionReason InActType);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void PlayOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayIn(int32 InAddValue, ESSAttentionReason InActType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmpty();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPointText(int32 InAddValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetActText(ESSAttentionReason InActType);
    
};

