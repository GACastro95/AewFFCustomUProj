#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SSAnnounceParam.generated.h"

USTRUCT(BlueprintType)
struct FSSAnnounceParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> QueueName;
    
    ABP_200508_API FSSAnnounceParam();
};

