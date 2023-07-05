#pragma once
#include "CoreMinimal.h"
#include "EOSCommunityUserBase.h"
#include "EOSSessionUser.generated.h"

class UEOSSessionP2PAFGameFlowData;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSSessionUser : public UEOSCommunityUserBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSSessionP2PAFGameFlowData* m_pcGameFlowData;
    
public:
    UEOSSessionUser();
    UFUNCTION(BlueprintCallable)
    bool SetupGameFlow();
    
    UFUNCTION(BlueprintCallable)
    bool ResetGameFlow();
    
    UFUNCTION(BlueprintCallable)
    bool IsRegisted();
    
    UFUNCTION(BlueprintCallable)
    bool GetGameFlow(UEOSSessionP2PAFGameFlowData*& _pcGameFlowData);
    
};

