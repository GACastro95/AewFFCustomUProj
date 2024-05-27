#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncCompletedQueryLeaderboardUserScoreDelegate.h"
#include "ActionQueryLeaderboardUserScore.generated.h"

class UActionQueryLeaderboardUserScore;
class UELLeaderboards;
class UObject;

UCLASS(Blueprintable)
class UActionQueryLeaderboardUserScore : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncCompletedQueryLeaderboardUserScore OnCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString QueryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScoreScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuerySeason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool QueryPlatformOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELLeaderboards* Leaderboards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> UserIds;
    
    UActionQueryLeaderboardUserScore();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UActionQueryLeaderboardUserScore* ActionQueryLeaderboardUserScore(UObject* NewWorldContextObject, const TArray<FString>& NewUserIds, const FString& Name, int32 Season, bool PlatformOnly, float NewScoreScale, bool NewBForce);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Abort();
    
};

