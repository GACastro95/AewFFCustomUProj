#pragma once
#include "CoreMinimal.h"
#include "EEOSObjectType.h"
#include "EEOSResult.h"
#include "EOSInternalIssueDispatcherDelegate.generated.h"

class UEOSCommon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FEOSInternalIssueDispatcher, EEOSResult, EOSResult, EEOSObjectType, EOSObjectType, const UEOSCommon*, EOSCommon, const FString&, File, int32, Line);

