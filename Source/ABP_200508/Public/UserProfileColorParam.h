#pragma once
#include "CoreMinimal.h"
#include "UserProfileColorParam.generated.h"

USTRUCT(BlueprintType)
struct FUserProfileColorParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UniqueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ColorListIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedColorIndex;
    
    ABP_200508_API FUserProfileColorParam();
};

