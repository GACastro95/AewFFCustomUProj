#pragma once
#include "CoreMinimal.h"
#include "ETipsLoadingCategory.h"
#include "TipsLoadingResourceInfo.h"
#include "GameFramework/Actor.h"
#include "TipsLoadingCompleteDelegateDelegate.h"
#include "ELTipsLoadingExecutorBase.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELTipsLoadingExecutorBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTipsLoadingCompleteDelegate CompleteDelegate;
    
public:
    AELTipsLoadingExecutorBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartLoadingScreen(ETipsLoadingCategory _Category, FTipsLoadingResourceInfo _resourceInfo, bool _isFadeInStart);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndLoadingScreen();
    
protected:
    UFUNCTION(BlueprintCallable)
    void EndLoadingScreen();
    
};

