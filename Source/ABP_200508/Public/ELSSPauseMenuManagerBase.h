#pragma once
#include "CoreMinimal.h"
#include "ELPauseMenuManagerBase.h"
#include "ELSSPauseMenuManagerBase.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELSSPauseMenuManagerBase : public AELPauseMenuManagerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFocusGame;
    
public:
    AELSSPauseMenuManagerBase();
};

