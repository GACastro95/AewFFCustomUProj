#pragma once
#include "CoreMinimal.h"
#include "EOSPresenceBase.h"
#include "EOSFriendPresence.generated.h"

UCLASS(Blueprintable)
class YEOSSDK_API UEOSFriendPresence : public UEOSPresenceBase {
    GENERATED_BODY()
public:
    UEOSFriendPresence();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetProductVersion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetProductName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetProductID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPlatform() const;
    
};

