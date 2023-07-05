#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELMatchRecordsProfileInfo_BP.h"
#include "ELMatchRecordsWrestlerInfo_BP.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELMatchRecordsUtilityFunction.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UELMatchRecordsUtilityFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELMatchRecordsUtilityFunction();
    UFUNCTION(BlueprintCallable)
    static void UpdateMatchRecordsInfo(const FELMatchRecordsProfileInfo_BP& ProfileInfo, const TArray<FELMatchRecordsWrestlerInfo_BP>& WrestlerInfos, FDateTime Now, uint8 _saveDataAccessFlag);
    
};

