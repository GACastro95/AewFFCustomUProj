#pragma once
#include "CoreMinimal.h"
#include "ELSaveGameBase.h"
#include "ArenaSaveData.h"
#include "SaveData_UGC_Arena.generated.h"

UCLASS(Blueprintable)
class USaveData_UGC_Arena : public UELSaveGameBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FArenaSaveData> ArenaSaveDataArray;
    
    USaveData_UGC_Arena();

};

