#pragma once
#include "CoreMinimal.h"
#include "ELSSServerInformation_ResponseData.h"
#include "eSSRequestResultType.h"
#include "ServerInformation_RequestEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FServerInformation_RequestEvent, const FELSSServerInformation_ResponseData&, response, eSSRequestResultType, responseType);

