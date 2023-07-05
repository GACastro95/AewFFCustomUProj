#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EditItem_Common.h"
#include "FL_EditItemUtilityFunctions.generated.h"

UCLASS(Blueprintable)
class CREATION_API UFL_EditItemUtilityFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFL_EditItemUtilityFunctions();
    UFUNCTION(BlueprintCallable)
    static void GetUnlockItemID_Common(const FEditItem_Common& EditItem, int32& UnlockItemId);
    
};

