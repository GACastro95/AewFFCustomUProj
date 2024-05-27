#pragma once
#include "CoreMinimal.h"
#include "EOSCommon.h"
#include "EOSCommunitySearchRequest.generated.h"

class UEOSCommunityBase;
class UEOSSearchResultsBase;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSCommunitySearchRequest : public UEOSCommon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSCommunityBase* m_pcCommunityBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSSearchResultsBase* m_pcSearchResultsBase;
    
public:
    UEOSCommunitySearchRequest();

};

