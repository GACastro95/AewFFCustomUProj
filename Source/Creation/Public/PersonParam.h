#pragma once
#include "CoreMinimal.h"
#include "ELWrestlerProfile_CutScene.h"
#include "PersonParamBase.h"
#include "AttireParam.h"
#include "EditBodyParam.h"
#include "WrestlerMoves.h"
#include "PersonParam.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FPersonParam : public FPersonParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditBodyParam EditBodyParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttireParam DefaultAttire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWrestlerMoves MOVES;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELWrestlerProfile_CutScene Entrance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Thumbnails;
    
    FPersonParam();
};

