#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELMovesTwoPlatoonsPart.h"
#include "ELMovesTwoPlatoons.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FELMovesTwoPlatoons : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesTwoPlatoonsPart CollarAndElbow_Or_WaistLock_Front;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesTwoPlatoonsPart CollarAndElbow_Back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesTwoPlatoonsPart WaistLock_Back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesTwoPlatoonsPart Front_CornerChain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesTwoPlatoonsPart Back_CornerChain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesTwoPlatoonsPart RopeChain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesTwoPlatoonsPart Ring_To_Apron_Chain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesTwoPlatoonsPart Apron_To_Ring_Front_Chain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesTwoPlatoonsPart Apron_To_Ring_Back_Chain;
    
    FELMovesTwoPlatoons();
};

