#pragma once
#include "CoreMinimal.h"
#include "TemplateScoutParam.h"
#include "MyWrestlerDataEditComponent.h"
#include "EGender.h"
#include "TemplateScoutComponent.generated.h"

class UTemplateScoutListAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ELITE_API UTemplateScoutComponent : public UMyWrestlerDataEditComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTemplateScoutListAsset* TemplateListAsset_Male;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTemplateScoutListAsset* TemplateListAsset_Female;
    
public:
    UTemplateScoutComponent();
    UFUNCTION(BlueprintCallable)
    void GetScoutTemplateList(TArray<FTemplateScoutParam>& List, const EGender Gender);
    
};

