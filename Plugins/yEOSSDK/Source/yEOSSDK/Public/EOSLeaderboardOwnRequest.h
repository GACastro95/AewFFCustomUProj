#pragma once
#include "CoreMinimal.h"
#include "EOSCommon.h"
#include "EOSQueryStatOption.h"
#include "EOSLeaderboardOwnRequest.generated.h"

class UEOSLeaderboard;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSLeaderboardOwnRequest : public UEOSCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_strLeaderboardId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSLeaderboard* m_pcLeaderboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSQueryStatOption m_stStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_cProductUserIds;
    
    UEOSLeaderboardOwnRequest();

};

