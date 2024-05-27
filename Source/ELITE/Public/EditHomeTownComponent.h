#pragma once
#include "CoreMinimal.h"
#include "MyWrestlerDataEditComponent.h"
#include "HomeTown.h"
#include "HomeTownID.h"
#include "EditHomeTownComponent.generated.h"

class UMyWrestlerDataObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ELITE_API UEditHomeTownComponent : public UMyWrestlerDataEditComponent {
    GENERATED_BODY()
public:
    UEditHomeTownComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetHomeTown(UMyWrestlerDataObject* Target, const FHomeTownID& NewHomeTown);
    
    UFUNCTION(BlueprintCallable)
    void GetHomeTownList(TArray<FHomeTown>& List, int32& Index, const int32 CurrentHomeTownID, const bool bOutputCountry, const bool bOutputState, const bool bOutputCity);
    
};

