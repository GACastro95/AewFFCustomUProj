#pragma once
#include "CoreMinimal.h"
#include "ELUserWidget.h"
#include "ELIngameHUDBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELIngameHUDBase : public UELUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoPlayAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoRemoveFromParent;
    
    UELIngameHUDBase();
};

