#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELUserWidget.h"
#include "ELFindMiniGameWidget.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELFindMiniGameWidget : public UELUserWidget {
    GENERATED_BODY()
public:
    UELFindMiniGameWidget();

    UFUNCTION(BlueprintCallable)
    void GetTexture2DPixelColorAll(UTexture2D* Texture, TArray<FColor>& OutColorList);
    
    UFUNCTION(BlueprintCallable)
    void GetTexture2DPixelColor(UTexture2D* Texture, float U, float V, FColor& OutColor);
    
};

