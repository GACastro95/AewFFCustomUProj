#pragma once
#include "CoreMinimal.h"
#include "SaveDataObjectBase.h"
#include "SaveDataObject_UGC_Wrestler.generated.h"

class UMyWrestlerDataObject;
class UObject;

UCLASS(Blueprintable)
class ABP_200508_API USaveDataObject_UGC_Wrestler : public USaveDataObjectBase {
    GENERATED_BODY()
public:
    USaveDataObject_UGC_Wrestler();
    UFUNCTION(BlueprintCallable)
    bool WriteDataFromMyWrestler(UObject* MyWrestler);
    
    UFUNCTION(BlueprintCallable)
    bool WriteDataAllScoutWrestler(int32 SaveFileIndex);
    
    UFUNCTION(BlueprintCallable)
    bool ReadDataToMyWrestler(UObject* MyWrestler);
    
    UFUNCTION(BlueprintCallable)
    static bool GetUGCWrestlerFileIndexAll(TArray<int32>& OutFileIndexes);
    
    UFUNCTION(BlueprintCallable)
    static bool GetUGCWrestlerFileIndex(int32& OutSaveFileIndex, bool IsEditWrestler, const UMyWrestlerDataObject* MyWrestlerDataObject);
    
    UFUNCTION(BlueprintCallable)
    static bool GetFileIndexesForUpdate(TArray<int32>& OutFileIndexes);
    
};

