#pragma once
#include "CoreMinimal.h"
#include "EOSLockebleCommon.h"
#include "EOSAPIRequestManager.generated.h"

class UEOSAPIRequestData;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSAPIRequestManager : public UEOSLockebleCommon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEOSAPIRequestData*> m_cRequestData;
    
public:
    UEOSAPIRequestManager();
};

