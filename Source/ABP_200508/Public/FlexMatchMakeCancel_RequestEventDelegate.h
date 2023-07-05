#pragma once
#include "CoreMinimal.h"
#include "ELSSFlexMatchMakeStop_ResponseData.h"
#include "eSSRequestResultType.h"
#include "FlexMatchMakeCancel_RequestEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFlexMatchMakeCancel_RequestEvent, eSSRequestResultType, responseType, const FELSSFlexMatchMakeStop_ResponseData&, response);

