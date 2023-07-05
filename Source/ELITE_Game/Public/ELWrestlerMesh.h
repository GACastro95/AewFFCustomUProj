#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELWrestlerMeshParam.h"
#include "ELWrestlerMesh.generated.h"

USTRUCT(BlueprintType)
struct ELITE_GAME_API FELWrestlerMesh : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FELWrestlerMeshParam> DefaultMeshs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FELWrestlerMeshParam> EntranceMeshs;
    
    FELWrestlerMesh();
};

