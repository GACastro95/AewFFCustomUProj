#pragma once
#include "CoreMinimal.h"
#include "EOSCommon.h"
#include "EOSUserContentBinary.generated.h"

UCLASS(Blueprintable)
class YEOSSDK_API UEOSUserContentBinary : public UEOSCommon {
    GENERATED_BODY()
public:
    UEOSUserContentBinary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDeleteInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOffset() const;
    
};

