#pragma once
#include "CoreMinimal.h"
#include "yEnDialogBoxResult.h"
#include "DialogBoxResultDelegateDelegate.generated.h"

class UELDialogBoxWidgetBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FDialogBoxResultDelegate, yEnDialogBoxResult, Result, UELDialogBoxWidgetBase*, Widget);

