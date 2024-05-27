#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncCompletedQueryLeaderboardUserStatsListDelegate.h"
#include "ELLeaderboardUserData.h"
#include "ActionQueryLeaderboardUserStatsList.generated.h"

class UActionQueryLeaderboardUserStatsList;
class UELLeaderboardUserStats;
class UObject;

UCLASS(Blueprintable)
class UActionQueryLeaderboardUserStatsList : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncCompletedQueryLeaderboardUserStatsList OnCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuerySeason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FELLeaderboardUserData> UserData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ArrayIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UELLeaderboardUserStats*> Results;
    
    UActionQueryLeaderboardUserStatsList();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UActionQueryLeaderboardUserStatsList* ActionQueryLeaderboardUserStatsList(UObject* NewWorldContextObject, const TArray<FELLeaderboardUserData>& NewUserData, bool NewBForce);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Abort();
    
};

