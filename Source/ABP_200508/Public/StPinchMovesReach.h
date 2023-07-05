#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StPinchMovesReach.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FStPinchMovesReach : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FaceUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FaceDown;
    
    ABP_200508_API FStPinchMovesReach();
};

