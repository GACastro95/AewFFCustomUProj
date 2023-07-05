#pragma once
#include "CoreMinimal.h"
#include "EOSCommon.h"
#include "EOSFriendOwnRequest.generated.h"

class UEOSFriend;
class UEOSFriendUser;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSFriendOwnRequest : public UEOSCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSFriend* m_pcFriend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEOSFriendUser*> m_cUsers;
    
    UEOSFriendOwnRequest();
};

