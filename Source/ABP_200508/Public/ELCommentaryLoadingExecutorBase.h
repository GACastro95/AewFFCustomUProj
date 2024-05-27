#pragma once
#include "CoreMinimal.h"
#include "CommentaryLoadingExecResource.h"
#include "GameFramework/Actor.h"
#include "CommentaryLoadingCompleteDelegateDelegate.h"
#include "ELCommentaryLoadingExecutorBase.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELCommentaryLoadingExecutorBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommentaryLoadingCompleteDelegate CompleteDelegate;
    
public:
    AELCommentaryLoadingExecutorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartLoadingScreen(FCommentaryLoadingExecResource _textureInfo, const FText& _commentText);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnOverrideZOrder(const int32 ZOrder);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndLoadingScreen();
    
protected:
    UFUNCTION(BlueprintCallable)
    void EndLoadingScreen();
    
};

