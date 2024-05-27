#pragma once
#include "CoreMinimal.h"
#include "EOSCommon.h"
#include "EOSNatP2PBinary.generated.h"

UCLASS(Blueprintable)
class YEOSSDK_API UEOSNatP2PBinary : public UEOSCommon {
    GENERATED_BODY()
public:
    UEOSNatP2PBinary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDeleteInstance() const;
    
    UFUNCTION(BlueprintCallable)
    bool Init(int32 _sSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetChannel() const;
    
};

