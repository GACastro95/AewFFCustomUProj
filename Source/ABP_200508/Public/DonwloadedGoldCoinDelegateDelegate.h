#pragma once
#include "CoreMinimal.h"
#include "DonwloadedGoldCoinDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FDonwloadedGoldCoinDelegate, bool, Successed, int32, GoldCoinNum);

