#pragma once
#include "CoreMinimal.h"
#include "eSSWebRequestErrorDialogType.h"
#include "yEnDialogBoxChoices.h"
#include "WebRequestErrorDialogEventDelegate.generated.h"

class UELSSWebRequestBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FWebRequestErrorDialogEvent, yEnDialogBoxChoices, dialogBtmType, eSSWebRequestErrorDialogType, dialogErrorType, const FString&, dialogMessageText, UELSSWebRequestBase*, dialogCallRequest);

