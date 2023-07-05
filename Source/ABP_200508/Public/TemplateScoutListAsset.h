#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TemplateScoutParam.h"
#include "TemplateScoutListAsset.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UTemplateScoutListAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTemplateScoutParam> Items;
    
    UTemplateScoutListAsset();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetItems(TArray<FTemplateScoutParam>& List) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetItem(FTemplateScoutParam& Param, const int32 Index) const;
    
};

