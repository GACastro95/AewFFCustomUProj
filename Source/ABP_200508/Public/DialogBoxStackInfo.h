#pragma once
#include "CoreMinimal.h"
#include "DialogBoxBeginResultDelegateDelegate.h"
#include "DialogBoxResultDelegateDelegate.h"
#include "yEnDialogBoxType.h"
#include "DialogBoxStackInfo.generated.h"

class UELOperationalWidgetBase;

USTRUCT(BlueprintType)
struct FDialogBoxStackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELOperationalWidgetBase* DialogWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ValidSystemDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogBoxResultDelegate ResuleDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogBoxBeginResultDelegate BeginResuleDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    yEnDialogBoxType DialogType;
    
    ABP_200508_API FDialogBoxStackInfo();
};

