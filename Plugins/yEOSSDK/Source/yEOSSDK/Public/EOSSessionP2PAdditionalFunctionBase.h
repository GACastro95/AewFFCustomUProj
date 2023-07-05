#pragma once
#include "CoreMinimal.h"
#include "EOSLockebleCommon.h"
#include "EOSSessionP2PAdditionalFunctionBase.generated.h"

class UEOSSessionP2P;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSSessionP2PAdditionalFunctionBase : public UEOSLockebleCommon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSSessionP2P* m_pcRefSessionP2P;
    
public:
    UEOSSessionP2PAdditionalFunctionBase();
};

