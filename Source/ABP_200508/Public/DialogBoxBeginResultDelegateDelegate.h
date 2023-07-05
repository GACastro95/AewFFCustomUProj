#pragma once
#include "CoreMinimal.h"
#include "DialogBoxBeginResultDelegateDelegate.generated.h"

class UELDialogBoxWidgetBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FDialogBoxBeginResultDelegate, bool, IsCancel, UELDialogBoxWidgetBase*, Widget);

