#pragma once
#include "CoreMinimal.h"
#include "yEnDialogBoxResult.h"
#include "RequestDialogBoxDelegateDelegate.generated.h"

class UELDialogBoxWidgetBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FRequestDialogBoxDelegate, yEnDialogBoxResult, Result, UELDialogBoxWidgetBase*, Widget);

