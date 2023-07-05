#pragma once
#include "CoreMinimal.h"
#include "OnCanPlayOnlinePrivilegeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnCanPlayOnlinePrivilege, const bool, IsCanPlayOnline);

