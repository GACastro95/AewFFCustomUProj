#pragma once
#include "CoreMinimal.h"
#include "CheckedValidSeasonDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FCheckedValidSeasonDelegate, bool, UpdatedSeason);

