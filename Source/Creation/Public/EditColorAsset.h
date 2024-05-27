#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELDataAsset.h"
#include "EditColorGroupID.h"
#include "EditColorList.h"
#include "EditColorAsset.generated.h"

UCLASS(Blueprintable)
class CREATION_API UEditColorAsset : public UELDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FEditColorGroupID, FEditColorList> Items;
    
    UEditColorAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIndexedColor(const int32 ColorID, FLinearColor& Out) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGroupColors(const FEditColorGroupID inGroupId, TArray<int32>& ColorIDList) const;
    
};

