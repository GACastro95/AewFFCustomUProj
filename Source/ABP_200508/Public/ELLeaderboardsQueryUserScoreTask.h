#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EOSLeaderboardsUserScoreData.h"
#include "ELLeaderboardsQueryUserScoreTask.generated.h"

class UEOSFriend;
class UEOSLeaderboard;
class UEOSUser;

UCLASS(Blueprintable)
class ABP_200508_API UELLeaderboardsQueryUserScoreTask : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSLeaderboard* EOSLeaderboards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSFriend* EOSFriend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSUser* EOSUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> QueryUserIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QueryScoreScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QueryStartIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QueryCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QueryCountPerRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEOSLeaderboardsUserScoreData> QueriedUserScores;
    
public:
    UELLeaderboardsQueryUserScoreTask();
};

