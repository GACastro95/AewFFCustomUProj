#pragma once
#include "CoreMinimal.h"
#include "WrestlerNameString.h"
#include "ELWrestlerProfile_CutScene.h"
#include "PersonParamBase.h"
#include "AttireParam.h"
#include "EditBodyParam.h"
#include "WrestlerMoves.h"
#include "EditPersonParam.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FEditPersonParam : public FPersonParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWrestlerNameString EditWrestlerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditBodyParam EditBodyParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttireParam DefaultAttire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWrestlerMoves MOVES;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELWrestlerProfile_CutScene Entrance;
    
    FEditPersonParam();
};

