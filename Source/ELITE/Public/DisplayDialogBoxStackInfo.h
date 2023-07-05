#pragma once
#include "CoreMinimal.h"
#include "DialogBoxBeginResultDelegateDelegate.h"
#include "DialogBoxResultDelegateDelegate.h"
#include "DisplayDialogBoxStackInfo.generated.h"

class UELOperationalWidgetBase;

USTRUCT(BlueprintType)
struct FDisplayDialogBoxStackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELOperationalWidgetBase* DialogWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogBoxResultDelegate ResuleDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogBoxBeginResultDelegate BeginResuleDelegate;
    
    ELITE_API FDisplayDialogBoxStackInfo();
};

