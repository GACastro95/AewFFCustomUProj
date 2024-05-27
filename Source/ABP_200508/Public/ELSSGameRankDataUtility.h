#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELSSGameRankData.h"
#include "ELSSGameRankDataUtility.generated.h"

UCLASS(Blueprintable)
class UELSSGameRankDataUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELSSGameRankDataUtility();

    UFUNCTION(BlueprintCallable)
    static void SetSSPlayerRankExp(UPARAM(Ref) FELSSGameRankData& RankData, int32 Exp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSSPlayerRankExp(const FELSSGameRankData& RankData);
    
};

