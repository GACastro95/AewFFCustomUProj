#pragma once
#include "CoreMinimal.h"
#include "ELCareerWidgetBase.h"
#include "ELCareerShowSnapshotWidgetBase.generated.h"

class UCareerSnapshot;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELCareerShowSnapshotWidgetBase : public UELCareerWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCareerSnapshot* Snapshot;
    
public:
    UELCareerShowSnapshotWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetLocationTextKey();
    
};

