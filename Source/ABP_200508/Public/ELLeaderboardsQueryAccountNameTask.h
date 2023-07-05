#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ExternalAccountIdMap.h"
#include "ELLeaderboardsQueryAccountNameTask.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UELLeaderboardsQueryAccountNameTask : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequestNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExternalAccountIdMap ResultIdMap;
    
public:
    UELLeaderboardsQueryAccountNameTask();
};

