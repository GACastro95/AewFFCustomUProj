#pragma once
#include "CoreMinimal.h"
#include "EOSSearchResultsBase.h"
#include "EOSSessionSearchResults.generated.h"

class UEOSSession;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSSessionSearchResults : public UEOSSearchResultsBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSSession* m_pcSession;
    
public:
    UEOSSessionSearchResults();

};

