#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELMovesCutscene.generated.h"

USTRUCT(BlueprintType)
struct FELMovesCutscene : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Entrance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Victory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TitantronMovie;
    
    ABP_200508_API FELMovesCutscene();
};

