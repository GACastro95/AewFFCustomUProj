#pragma once
#include "CoreMinimal.h"
#include "SyncMotionInitArgs.generated.h"

class ACharacter;
class UAnimSequence;

USTRUCT(BlueprintType)
struct FSyncMotionInitArgs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* Chara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* Anim;
    
    ABP_200508_API FSyncMotionInitArgs();
};

