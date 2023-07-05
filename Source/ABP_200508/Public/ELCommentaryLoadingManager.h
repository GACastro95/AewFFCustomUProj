#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CommentaryLoadingExecCountInfo_Ref.h"
#include "EWrestlerID_N.h"
#include "CommentaryLoadingCompleteDelegateDelegate.h"
#include "ELCommentaryLoadingManager.generated.h"

class AELCommentaryLoadingExecutorBase;

UCLASS(Blueprintable)
class ABP_200508_API UELCommentaryLoadingManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWrestlerID_N, FCommentaryLoadingExecCountInfo_Ref> m_ExecCountInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EWrestlerID_N> m_ReserveWrestlerIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELCommentaryLoadingExecutorBase* m_pLoadingExecuteActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommentaryLoadingCompleteDelegate CompleteDelegate;
    
public:
    UELCommentaryLoadingManager();
    UFUNCTION(BlueprintCallable)
    bool StartScreen(FCommentaryLoadingCompleteDelegate _completeDelegate, int32 BaseZOrder);
    
    UFUNCTION(BlueprintCallable)
    void SetReserveFightWrestlerIDs(TArray<EWrestlerID_N> _targetWrestlerIDs);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCompleteLoading();
    
public:
    UFUNCTION(BlueprintCallable)
    void EndScreen();
    
    UFUNCTION(BlueprintCallable)
    bool Debug_StartSelectedScreen(FCommentaryLoadingCompleteDelegate _completeDelegate, int32 _targetIndex);
    
};

