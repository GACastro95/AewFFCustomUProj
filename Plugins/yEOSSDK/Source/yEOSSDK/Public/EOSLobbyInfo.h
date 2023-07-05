#pragma once
#include "CoreMinimal.h"
#include "EOSCommunityInfoBase.h"
#include "EOSLobbyInfo.generated.h"

UCLASS(Blueprintable)
class YEOSSDK_API UEOSLobbyInfo : public UEOSCommunityInfoBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_strRTCRoomName;
    
public:
    UEOSLobbyInfo();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRTCRoomEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetStringOfLobbyID();
    
};

