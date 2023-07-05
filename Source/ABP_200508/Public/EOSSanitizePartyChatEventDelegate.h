#pragma once
#include "CoreMinimal.h"
#include "EOSSanitizePartyChatEventDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FEOSSanitizePartyChatEvent, const FString&, Message, UObject*, UserData);

