#pragma once
#include "CoreMinimal.h"
#include "OnQueryPrivilegeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnQueryPrivilege, int32, PrivilegeResults);

