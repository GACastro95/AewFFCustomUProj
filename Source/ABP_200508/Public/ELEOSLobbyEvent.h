#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EEOSCommunityEvent.h"
#include "ELEOSLobbyEvent.generated.h"

class UEOSCommunityBase;
class UEOSCommunityInfoBase;
class UEOSCommunityUserBase;

UCLASS(Blueprintable)
class UELEOSLobbyEvent : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEOSCommunityEvent CommunityEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSCommunityBase* Community;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSCommunityInfoBase* CommunityInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSCommunityUserBase* CommunityUser;
    
    UELEOSLobbyEvent();
};

