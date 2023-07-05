#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "StSoundNaviAnimData.h"
#include "ELAnimNotifySFXBase.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable, CollapseCategories)
class ELITE_GAME_API UELAnimNotifySFXBase : public UAnimNotify {
    GENERATED_BODY()
public:
    UELAnimNotifySFXBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetNaviMontageData_N(const UAnimSequenceBase* Animation, FStSoundNaviAnimData& Data) const;
    
};

