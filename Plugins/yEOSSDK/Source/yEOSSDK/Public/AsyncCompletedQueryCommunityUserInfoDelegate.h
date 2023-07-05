#pragma once
#include "CoreMinimal.h"
#include "AsyncCompletedQueryCommunityUserInfoDelegate.generated.h"

class UEOSCommunityUserBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncCompletedQueryCommunityUserInfo, UEOSCommunityUserBase*, User);

