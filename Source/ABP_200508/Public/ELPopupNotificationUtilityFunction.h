#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EPopupOnlineStatusType.h"
#include "ELPopupNotificationUtilityFunction.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UELPopupNotificationUtilityFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELPopupNotificationUtilityFunction();
    UFUNCTION(BlueprintCallable)
    static void RequestPopup_Online(EPopupOnlineStatusType _statusType, const FString& _execUserName, TArray<FString> _targetUserName);
    
    UFUNCTION(BlueprintCallable)
    static void RequestPopup_ChatMessage(const FString& _userName, const FString& _dispMessage);
    
    UFUNCTION(BlueprintCallable)
    static void RequestPopup_ChallengeCompleted(int32 _challengeId);
    
};

