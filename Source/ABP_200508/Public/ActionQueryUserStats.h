#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncCompletedQueryUserStatsDelegate.h"
#include "ActionQueryUserStats.generated.h"

class UActionQueryUserStats;
class UObject;

UCLASS(Blueprintable)
class UActionQueryUserStats : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncCompletedQueryUserStats OnCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuerySeason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProductUserID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> QueryStatNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForce;
    
    UActionQueryUserStats();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UActionQueryUserStats* ActionQueryUserSeasonStats(UObject* NewWorldContextObject, const FString& NewProductUserID, const FString& NewDisplayName, int32 Season, bool NewBForce);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UActionQueryUserStats* ActionQueryUserSeasonStatList(UObject* NewWorldContextObject, const FString& NewProductUserID, const FString& NewDisplayName, int32 Season, const TArray<FString>& StatNames, bool NewBForce);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UActionQueryUserStats* ActionQueryMySeasonStats(UObject* NewWorldContextObject, int32 Season, bool NewBForce);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UActionQueryUserStats* ActionQueryMySeasonStatList(UObject* NewWorldContextObject, int32 Season, const TArray<FString>& StatNames, bool NewBForce);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Abort();
    
};

