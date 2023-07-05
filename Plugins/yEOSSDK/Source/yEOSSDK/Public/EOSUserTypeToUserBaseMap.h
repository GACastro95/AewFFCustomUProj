#pragma once
#include "CoreMinimal.h"
#include "EEOSUserType.h"
#include "EOSCommon.h"
#include "EOSUserTypeToUserBaseMap.generated.h"

class UEOSUserBase;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSUserTypeToUserBaseMap : public UEOSCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEOSUserType, UEOSUserBase*> m_cUserTypeMap;
    
    UEOSUserTypeToUserBaseMap();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<EEOSUserType, UEOSUserBase*> GetUserMap() const;
    
};

