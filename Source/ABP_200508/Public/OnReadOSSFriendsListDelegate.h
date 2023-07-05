#pragma once
#include "CoreMinimal.h"
#include "OnReadOSSFriendsListDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnReadOSSFriendsList, const bool, bWasSuccessful);

