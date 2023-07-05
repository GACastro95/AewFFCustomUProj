#pragma once
#include "CoreMinimal.h"
#include "EPopupOnlineStatusType.h"
#include "PopupOnlineStatus.generated.h"

USTRUCT(BlueprintType)
struct FPopupOnlineStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPopupOnlineStatusType StatusType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ExecUserName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> TargetUserName;
    
    ABP_200508_API FPopupOnlineStatus();
};

