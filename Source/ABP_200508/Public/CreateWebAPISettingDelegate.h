#pragma once
#include "CoreMinimal.h"
#include "CreateWebAPISettingDelegate.generated.h"

class UELSSWebRequestBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCreateWebAPISetting, UELSSWebRequestBase*, CreateAPI);

