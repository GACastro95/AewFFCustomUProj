#pragma once
#include "CoreMinimal.h"
#include "ESSModeLaunchType.h"
#include "SSGameLobbyData.generated.h"

USTRUCT(BlueprintType)
struct FSSGameLobbyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ssGameMatchPlayerNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ssGameMatchMinPlayerNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ssGameMatchLobbyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSModeLaunchType ssGameLaunchType;
    
    ABP_200508_API FSSGameLobbyData();
};

