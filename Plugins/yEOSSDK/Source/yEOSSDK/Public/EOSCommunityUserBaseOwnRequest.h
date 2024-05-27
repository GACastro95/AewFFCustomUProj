#pragma once
#include "CoreMinimal.h"
#include "EOSCommon.h"
#include "EOSCommunityUserBaseOwnRequest.generated.h"

class UEOSCommunityUserBase;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSCommunityUserBaseOwnRequest : public UEOSCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSCommunityUserBase* m_pcUser;
    
    UEOSCommunityUserBaseOwnRequest();

};

