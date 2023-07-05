#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StSoundNaviAnimData.generated.h"

class UAnimMontage;
class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FStSoundNaviAnimData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequenceBase*> AnimSequence;
    
    ELITE_GAME_API FStSoundNaviAnimData();
};

