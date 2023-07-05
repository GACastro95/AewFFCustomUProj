#pragma once
#include "CoreMinimal.h"
#include "EOSCommon.h"
#include "EOSSessionOwnRequest.generated.h"

class UEOSCommunityInfoBase;
class UEOSCommunityUserBase;
class UEOSSession;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSSessionOwnRequest : public UEOSCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_strSessionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_strTargetProductUserID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSSession* m_pcSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSCommunityInfoBase* m_pcCommunityInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSCommunityUserBase* m_pcCommunityUserBase;
    
    UEOSSessionOwnRequest();
};

