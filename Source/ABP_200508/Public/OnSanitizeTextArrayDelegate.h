#pragma once
#include "CoreMinimal.h"
#include "OnSanitizeTextArrayDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnSanitizeTextArray, const TArray<FString>&, SanitizeText, UObject*, UserData);

