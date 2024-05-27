#pragma once
#include "CoreMinimal.h"
#include "EEOSObjectType.h"
#include "EOSLockebleCommon.h"
#include "EOSInstanceBase.generated.h"

class UEOSAPIRequestManager;
class UEOSInstanceManagerBase;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSInstanceBase : public UEOSLockebleCommon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSAPIRequestManager* m_pcRefAPIRequestManager;
    
public:
    UEOSInstanceBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSObjectType GetObjectType() const;
    
    UFUNCTION(BlueprintCallable)
    static bool GetInstanceManagerForDebug(UEOSInstanceManagerBase*& _pcInstanceManagerBase, int32 _uInstanceID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetInstanceID() const;
    
};

