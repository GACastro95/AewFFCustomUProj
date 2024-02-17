#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESSItemBoxLocatorGroup.h"
#include "ESSItemBoxType.h"
#include "ESSLocatorFilterCondition.h"
#include "ESSRound.h"
#include "ESSRoundEventLogType.h"
#include "SSItemBoxSpawnParamForRound.generated.h"

USTRUCT(BlueprintType)
struct FSSItemBoxSpawnParamForRound : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DataGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSRound Round;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSRoundEventLogType LogType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSItemBoxType ItemBoxType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnNumMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnNumMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSItemBoxLocatorGroup LocatorGroup1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSItemBoxLocatorGroup LocatorGroup2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSItemBoxLocatorGroup LocatorGroup3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSLocatorFilterCondition Condition;
    
    ABP_200508_API FSSItemBoxSpawnParamForRound();
};

