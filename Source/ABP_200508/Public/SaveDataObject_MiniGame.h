#pragma once
#include "CoreMinimal.h"
#include "EMiniGameID.h"
#include "SaveDataObjectBase.h"
#include "SaveDataObject_MiniGame.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API USaveDataObject_MiniGame : public USaveDataObjectBase {
    GENERATED_BODY()
public:
    USaveDataObject_MiniGame();

    UFUNCTION(BlueprintCallable)
    void SetMiniGamePlayedStatus(EMiniGameID _MiniGameID, bool _IsPlayed);
    
    UFUNCTION(BlueprintCallable)
    void GetMiniGamePlayedStatusArray(TArray<bool>& AlreadyPlayedArray);
    
};

