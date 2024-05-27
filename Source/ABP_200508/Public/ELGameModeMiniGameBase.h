#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "EMiniGameID.h"
#include "ELGameModeMiniGameBase.generated.h"

class UObject;

UCLASS(Blueprintable, NonTransient)
class ABP_200508_API AELGameModeMiniGameBase : public AGameMode {
    GENERATED_BODY()
public:
    AELGameModeMiniGameBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUpSplitScreenLayout();
    
    UFUNCTION(BlueprintCallable)
    void SetTwoSplitScreenLayoutVertical();
    
    UFUNCTION(BlueprintCallable)
    void SetTwoSplitScreenLayoutHorizontal();
    
    UFUNCTION(BlueprintCallable)
    void SetThreeSplitScreenLayoutVertical();
    
    UFUNCTION(BlueprintCallable)
    void SetThreeSplitScreenLayoutHorizontal();
    
    UFUNCTION(BlueprintCallable)
    void SetThreeSplitScreenLayoutFavorTop();
    
    UFUNCTION(BlueprintCallable)
    void SetThreeSplitScreenLayoutFavorBottom();
    
    UFUNCTION(BlueprintCallable)
    void SetFourSplitScreenLayoutVertical();
    
    UFUNCTION(BlueprintCallable)
    void SetFourSplitScreenLayoutHorizontal();
    
    UFUNCTION(BlueprintCallable)
    void SetFourSplitScreenLayoutGrid();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString GetMiniGameNameString(EMiniGameID _id);
    
    UFUNCTION(BlueprintCallable)
    void DisableSplitScreen();
    
    UFUNCTION(BlueprintCallable)
    bool CanEnableChangeSplitScreen(UObject* Context);
    
};

