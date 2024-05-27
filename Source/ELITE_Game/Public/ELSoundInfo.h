#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "yStSoundAssetDataTable.h"
#include "yStSoundPlayInfo.h"
#include "ELSoundInfo.generated.h"

UCLASS(Blueprintable)
class ELITE_GAME_API UELSoundInfo : public UObject {
    GENERATED_BODY()
public:
    UELSoundInfo();

    UFUNCTION(BlueprintCallable)
    void SetStackPlaySound(bool _stack);
    
    UFUNCTION(BlueprintCallable)
    void SetSoundPlayInfo(FyStSoundPlayInfo _soundInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetSoundAssetDataTables(FyStSoundAssetDataTable _stData);
    
    UFUNCTION(BlueprintCallable)
    bool IsStackPlaySound();
    
    UFUNCTION(BlueprintCallable)
    FyStSoundPlayInfo GetSoundPlayInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FyStSoundAssetDataTable GetSoundAssetDataTables() const;
    
};

