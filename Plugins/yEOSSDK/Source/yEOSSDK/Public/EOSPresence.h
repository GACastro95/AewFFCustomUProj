#pragma once
#include "CoreMinimal.h"
#include "EEOSPresenceStatus.h"
#include "EOSPresenceBase.h"
#include "EOSPresenceJoinGameEventDispatcherDelegate.h"
#include "EOSPresence.generated.h"

class UEOSCommunityInfoBase;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSPresence : public UEOSPresenceBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSPresenceJoinGameEventDispatcher PresenceJoinGameEventDispatcher;
    
    UEOSPresence();
    UFUNCTION(BlueprintCallable)
    bool RequestSetStatus(EEOSPresenceStatus _enStatus);
    
    UFUNCTION(BlueprintCallable)
    bool RequestSetSession(UEOSCommunityInfoBase* _pcCommunityInfo);
    
    UFUNCTION(BlueprintCallable)
    bool RequestSetPresence(const FString& _strRichText);
    
    UFUNCTION(BlueprintCallable)
    bool RequestSetData(TMap<FString, FString> _cMapData);
    
    UFUNCTION(BlueprintCallable)
    bool RequestDeleteData(TArray<FString> _cArrayData);
    
};

