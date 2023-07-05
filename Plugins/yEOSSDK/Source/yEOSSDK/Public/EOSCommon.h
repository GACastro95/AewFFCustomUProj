#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EOSCommon.generated.h"

UCLASS(Blueprintable)
class YEOSSDK_API UEOSCommon : public UObject {
    GENERATED_BODY()
public:
    UEOSCommon();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLastResult() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetLastErrorString();
    
    UFUNCTION(BlueprintCallable)
    bool EndRelease();
    
    UFUNCTION(BlueprintCallable)
    bool Dispose();
    
    UFUNCTION(BlueprintCallable)
    bool BeginRelease();
    
};

