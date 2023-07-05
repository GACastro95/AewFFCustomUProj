#pragma once
#include "CoreMinimal.h"
#include "ELSSFlexMatchMakeStart_ResponseData.h"
#include "eSSRequestResultType.h"
#include "FlexMatchMakeStar_RequestEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFlexMatchMakeStar_RequestEvent, const FELSSFlexMatchMakeStart_ResponseData&, response, eSSRequestResultType, responseType);

