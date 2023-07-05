#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELMovesDownPart.h"
#include "ELMovesDown.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FELMovesDown : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesDownPart Down_FaceUp_Head;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesDownPart Down_FaceUp_Foot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesDownPart Down_FaceUp_RightHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesDownPart Down_FaceUp_LeftHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesDownPart Down_FaceDown_Head;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesDownPart Down_FaceDown_Foot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesDownPart Down_FaceDown_RightHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesDownPart Down_FaceDown_LeftHand;
    
    FELMovesDown();
};

