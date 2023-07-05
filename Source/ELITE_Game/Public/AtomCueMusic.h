#pragma once
#include "CoreMinimal.h"
#include "AtomCueMusic.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct FAtomCueMusic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _find;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* _juke;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* _ent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* _vic;
    
    ELITE_GAME_API FAtomCueMusic();
};

