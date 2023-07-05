#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ELLadderMatchMiniGameManagerBase.generated.h"

class UELLadderMatchMiniGameHUDBase;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ABP_200508_API AELLadderMatchMiniGameManagerBase : public AActor {
    GENERATED_BODY()
public:
    AELLadderMatchMiniGameManagerBase();
protected:
    UFUNCTION(BlueprintCallable)
    void SetProgress(int32 Progress);
    
    UFUNCTION(BlueprintCallable)
    void SetMiniGameHUD(UELLadderMatchMiniGameHUDBase* InMiniGameHUD);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnProgressEvent_BP(int32 Progress);
    
public:
    UFUNCTION(BlueprintCallable)
    void Initialize_N(USkeletalMeshComponent* InMesh, FVector InHUDOffset, int32 InMashCount);
    
private:
    UFUNCTION(BlueprintCallable)
    void HUDFinishedUnlockAnim();
    
    UFUNCTION(BlueprintCallable)
    void HUDFinishedSucceedAnim();
    
    UFUNCTION(BlueprintCallable)
    void HUDFinishedFailedAnim();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateMiniGameHUD_BP();
    
};

