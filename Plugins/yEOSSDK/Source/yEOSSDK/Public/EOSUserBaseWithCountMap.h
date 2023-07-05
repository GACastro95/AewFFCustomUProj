#pragma once
#include "CoreMinimal.h"
#include "EOSCommon.h"
#include "EOSUserBaseWithCountMap.generated.h"

class UEOSUserBase;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSUserBaseWithCountMap : public UEOSCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSUserBase* m_pcUserBase;
    
    UEOSUserBaseWithCountMap();
    UFUNCTION(BlueprintCallable)
    UEOSUserBase* GetUser();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRefCount() const;
    
};

