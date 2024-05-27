#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EEOSAPIRequestDataFlag.h"
#include "EOSAPIRequestData.generated.h"

class UEOSAPIRequestCallback;
class UEOSAPIRequestManager;
class UEOSCommon;
class UEOSInstanceBase;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSAPIRequestData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSAPIRequestManager* m_pcManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSCommon* m_pcEOSCommon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSInstanceBase* m_pcEOSInstanceBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEOSAPIRequestDataFlag m_enFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSAPIRequestCallback* m_APIRequestCallback;
    
public:
    UEOSAPIRequestData();

};

