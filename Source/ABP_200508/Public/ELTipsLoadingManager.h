#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ETipsLoadingCategory.h"
#include "TipsLoadingExecCountInfo_Ref.h"
#include "TipsLoadingResourceInfo.h"
#include "TipsLoadingSequence.h"
#include "TipsLoadingCompleteDelegateDelegate.h"
#include "ELTipsLoadingManager.generated.h"

class AELTipsLoadingExecutorBase;

UCLASS(Blueprintable)
class ABP_200508_API UELTipsLoadingManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseOverrideNextLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OverrideNextLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OverrideNextLevelOption;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTipsLoadingCompleteDelegate CompleteDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETipsLoadingCategory, FTipsLoadingExecCountInfo_Ref> m_ExecCountInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELTipsLoadingExecutorBase* m_pLoadingExecuteActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_TipsTypeProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsVisibleTitleDlc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsDebugScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTipsLoadingSequence m_SequenceParam;
    
public:
    UELTipsLoadingManager();

    UFUNCTION(BlueprintCallable)
    bool StartScreen(ETipsLoadingCategory _displayCategory, FTipsLoadingCompleteDelegate _completeDelegate, bool _isFadeInStart, int32 _baseZOrder);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleTitleDlc(bool _Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideNextLevel(const FName& _nextLevel, const FString& _optionString);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCompleteLoading();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisibleTitleDlc() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsDebugScreen();
    
private:
    UFUNCTION(BlueprintCallable)
    bool GetResourceInfo(ETipsLoadingCategory _displayCategory, int32 _targetIndex, FTipsLoadingResourceInfo& _outResourceInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void EndScreen();
    
    UFUNCTION(BlueprintCallable)
    bool Debug_StartScreen(ETipsLoadingCategory _displayCategory, int32 _selectTipsIndex, FTipsLoadingCompleteDelegate _completeDelegate, int32 _selectCategoryIndex);
    
    UFUNCTION(BlueprintCallable)
    void ClearOverrideNextLevel();
    
    UFUNCTION(BlueprintCallable)
    bool CheckUseTipsLoadingTitleDlc();
    
};

