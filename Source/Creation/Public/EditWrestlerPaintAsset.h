#pragma once
#include "CoreMinimal.h"
#include "IndexedColorList.h"
#include "ColorParameterList.h"
#include "CustomizeAssetBase.h"
#include "EEditTexTarget.h"
#include "EditWrestlerPaintAsset.generated.h"

class UTexture;

UCLASS(Blueprintable)
class CREATION_API UEditWrestlerPaintAsset : public UCustomizeAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FColorParameterList ColorParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEditTexTarget Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UTexture*> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ColorParameterNames;
    
    UEditWrestlerPaintAsset();

    UFUNCTION(BlueprintCallable)
    void UpdateColor(const FIndexedColorList& In, FColorParameterList& Out);
    
    UFUNCTION(BlueprintCallable)
    void MakeColorParamList(const FIndexedColorList& In, FColorParameterList& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsColorChangeable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetColorParameter(FColorParameterList& Out) const;
    
};

