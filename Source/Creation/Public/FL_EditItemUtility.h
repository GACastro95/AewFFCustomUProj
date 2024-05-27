#pragma once
#include "CoreMinimal.h"
#include "EGender.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EFaceType.h"
#include "EditPaint.h"
#include "EditParts.h"
#include "FL_EditItemUtility.generated.h"

UCLASS(Blueprintable)
class CREATION_API UFL_EditItemUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFL_EditItemUtility();

    UFUNCTION(BlueprintCallable)
    static bool CheckEditPartsConditions(const FEditParts& EditParts, const EGender Gender, const EFaceType FaceType);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckEditPaintConditions(const FEditPaint& EditPaint, const EGender Gender);
    
};

