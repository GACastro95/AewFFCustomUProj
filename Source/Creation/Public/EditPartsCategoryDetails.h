#pragma once
#include "CoreMinimal.h"
#include "EditPartsCategoryData.h"
#include "EditPartsCategoryName.h"
#include "EditPartsCategoryDetails.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct CREATION_API FEditPartsCategoryDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditPartsCategoryName Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditPartsCategoryData EditPartsCategoryData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FEditPartsCategoryName> Inheritance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> IncompatibleCategoryIcons;
    
    FEditPartsCategoryDetails();
};

