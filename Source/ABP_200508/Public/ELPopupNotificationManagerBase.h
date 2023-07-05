#pragma once
#include "CoreMinimal.h"
#include "SingletonBase.h"
#include "EPopupOnlineStatusType.h"
#include "PopupOnlineChatMessage.h"
#include "PopupOnlineStatus.h"
#include "ELPopupNotificationManagerBase.generated.h"

UCLASS(Abstract, Blueprintable)
class ABP_200508_API UELPopupNotificationManagerBase : public USingletonBase {
    GENERATED_BODY()
public:
    UELPopupNotificationManagerBase();
    UFUNCTION(BlueprintCallable)
    void RequestPopup_Online(EPopupOnlineStatusType _statusType, const FString& _execUserName, TArray<FString> _targetUserName);
    
    UFUNCTION(BlueprintCallable)
    void RequestPopup_ChatMessage(const FString& _userName, const FString& _dispMessage);
    
    UFUNCTION(BlueprintCallable)
    void RequestPopup_ChallengeCompleted(int32 _challengeId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartOnlinePopup(const FPopupOnlineStatus& _onlineStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartChatMessagePopup(const FPopupOnlineChatMessage& _chatMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartChallengeCompletedPopup(const int32& _challengeId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExecutePopup() const;
    
    UFUNCTION(BlueprintCallable)
    void CheckNextPopup();
    
    UFUNCTION(BlueprintCallable)
    void ChangeExecutePopup(bool _state);
    
};

