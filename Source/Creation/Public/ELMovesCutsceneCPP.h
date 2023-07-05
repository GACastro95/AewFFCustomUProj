#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELMovesCutsceneCPP.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FELMovesCutsceneCPP : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Entrance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Victory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TitantronMovie;
    
    FELMovesCutsceneCPP();
};

