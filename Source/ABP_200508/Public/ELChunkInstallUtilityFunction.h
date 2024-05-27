#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ChunkInstallDelegateDelegate.h"
#include "ELChunkInstallUtilityFunction.generated.h"

UCLASS(Blueprintable)
class UELChunkInstallUtilityFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELChunkInstallUtilityFunction();

    UFUNCTION(BlueprintCallable)
    static void SetChunkInstallSuccessDelegate(FChunkInstallDelegate chunkInstallDelegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAllChunkInstalled();
    
    UFUNCTION(BlueprintCallable)
    static void CheckAllChunkInstalled();
    
};

