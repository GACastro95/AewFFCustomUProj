#pragma once
#include "CoreMinimal.h"
#include "EOSCommon.h"
#include "EOSFileOnMemory.h"
#include "EOSTitleStorageBinary.generated.h"

UCLASS(Blueprintable)
class YEOSSDK_API UEOSTitleStorageBinary : public UEOSCommon {
    GENERATED_BODY()
public:
    UEOSTitleStorageBinary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Unzip(TArray<FEOSFileOnMemory>& _cFiles) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDeleteInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOffset() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetAsText2();
    
    UFUNCTION(BlueprintCallable)
    FString GetAsText();
    
    UFUNCTION(BlueprintCallable)
    bool ConvertFileOnMemoryToString(FString& _rText, const FEOSFileOnMemory& _cFileOnMemory);
    
};

