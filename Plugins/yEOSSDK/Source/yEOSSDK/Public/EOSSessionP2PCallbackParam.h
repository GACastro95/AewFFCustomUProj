#pragma once
#include "CoreMinimal.h"
#include "EOSLockebleCommon.h"
#include "EOSSessionP2PCallbackParam.generated.h"

class IEOSSessionP2PCallbackInterface;
class UEOSSessionP2PCallbackInterface;

UCLASS(Blueprintable)
class UEOSSessionP2PCallbackParam : public UEOSLockebleCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IEOSSessionP2PCallbackInterface>> m_cIntarfaces;
    
    UEOSSessionP2PCallbackParam();
};

