#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EditPartsCategoryData.h"
#include "FL_EditWrestler.generated.h"

UCLASS(Blueprintable)
class CREATION_API UFL_EditWrestler : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFL_EditWrestler();
    UFUNCTION(BlueprintCallable)
    static FEditPartsCategoryData Append(const FEditPartsCategoryData& A, const FEditPartsCategoryData& B);
    
};

