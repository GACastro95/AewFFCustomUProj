#pragma once
#include "CoreMinimal.h"
#include "OnSanitizeTextDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnSanitizeText, const FString&, SanitizeText, UObject*, UserData);

