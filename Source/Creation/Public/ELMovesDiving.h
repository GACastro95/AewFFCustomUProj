#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELMovesDiving.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FELMovesDiving : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Diving_Standing_Front_Punch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Diving_Standing_Front_Kick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Diving_Standing_Front_Grapple;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Diving_Down_FaceUp_Punch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Diving_Down_FaceUp_Kick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Diving_Down_FaceUp_Grapple;
    
    FELMovesDiving();
};

