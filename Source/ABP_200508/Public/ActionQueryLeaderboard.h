#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncCompletedQueryLeaderboardDelegate.h"
#include "ActionQueryLeaderboard.generated.h"

class UActionQueryLeaderboard;
class UELLeaderboards;
class UObject;

UCLASS(Blueprintable)
class UActionQueryLeaderboard : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncCompletedQueryLeaderboard OnCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString QueryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QueryScoreScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuerySeason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool QueryPlatformOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELLeaderboards* Leaderboards;
    
    UActionQueryLeaderboard();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UActionQueryLeaderboard* ActionQueryLeaderboard(UObject* WorldContextObject, const FString& Name, int32 Season, bool PlatformOnly, float ScoreScale, bool bForce);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Abort();
    
};

