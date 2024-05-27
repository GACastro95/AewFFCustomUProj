#pragma once
#include "CoreMinimal.h"
#include "EOSCommon.h"
#include "EOSLobbyOwnRequest.generated.h"

class UEOSCommunityInfoBase;
class UEOSCommunityUserBase;
class UEOSLobby;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSLobbyOwnRequest : public UEOSCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSLobby* m_pcLobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSCommunityInfoBase* m_pcCommunityInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSCommunityUserBase* m_pcUser;
    
    UEOSLobbyOwnRequest();

};

