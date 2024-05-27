#pragma once
#include "CoreMinimal.h"
#include "ELCareerWidgetBase.h"
#include "ELCareerTonyKhanTweetBase.generated.h"

class UCareerSnapshot;
class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELCareerTonyKhanTweetBase : public UELCareerWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TonyKhanTweetDataTable;
    
public:
    UELCareerTonyKhanTweetBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCareerSnapshot* GetSnapShot() const;
    
};

