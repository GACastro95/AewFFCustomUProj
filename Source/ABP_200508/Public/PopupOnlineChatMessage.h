#pragma once
#include "CoreMinimal.h"
#include "PopupOnlineChatMessage.generated.h"

USTRUCT(BlueprintType)
struct FPopupOnlineChatMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DispMessage;
    
    ABP_200508_API FPopupOnlineChatMessage();
};

