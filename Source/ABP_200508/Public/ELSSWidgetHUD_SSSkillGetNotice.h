#pragma once
#include "CoreMinimal.h"
#include "ELSSWidgetBase.h"
#include "ELSSWidgetHUD_SSSkillGetNotice.generated.h"

class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_SSSkillGetNotice : public UELSSWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PlayInAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PlayOutAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* LayoutWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* AnnounceWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* NoticeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SkillIDArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> WaitTimeArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> SkillNameArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShowElapsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlayingPlayOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WINDOWSHOWMAXTIME;
    
public:
    UELSSWidgetHUD_SSSkillGetNotice();
protected:
    UFUNCTION(BlueprintCallable)
    void Update(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHeatSkillParam(int32 InSkillInex);
    
public:
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void PlayInBeatTopTeamNotice();
    
    UFUNCTION(BlueprintCallable)
    void PlayIn(const FString& InSkillCategory, int32 HeatSkillId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init();
    
};

