#pragma once
#include "CoreMinimal.h"
#include "ELSSFlexMatchMakeStatus_ResponseData.h"
#include "eSSRequestResultType.h"
#include "FlexMatchMakeStatus_RequestEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFlexMatchMakeStatus_RequestEvent, const FELSSFlexMatchMakeStatus_ResponseData&, response, eSSRequestResultType, responseType);

