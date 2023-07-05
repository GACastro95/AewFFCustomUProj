#pragma once
#include "CoreMinimal.h"
#include "EOSCommon.h"
#include "EOSSearchResultsBase.generated.h"

class UEOSCommunityInfoBase;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSSearchResultsBase : public UEOSCommon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UEOSCommunityInfoBase*> m_cResults;
    
public:
    UEOSSearchResultsBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSearchName() const;
    
    UFUNCTION(BlueprintCallable)
    TMap<FString, UEOSCommunityInfoBase*> GetResults();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetResultNum() const;
    
    UFUNCTION(BlueprintCallable)
    int32 AnalyzeResults();
    
};

