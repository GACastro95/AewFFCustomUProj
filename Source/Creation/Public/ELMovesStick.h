#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELMovesStick.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FELMovesStick : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Lever_Neutral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Lever_Holder;
    
    FELMovesStick();
};

