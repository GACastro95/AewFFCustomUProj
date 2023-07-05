#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELMovesRopeChain.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FELMovesRopeChain : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RopeChain_Stick_InRing_Punch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RopeChain_Stick_OutSide_Punch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RopeChain_Stick_InRing_Kick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RopeChain_Stick_OutSide_Kick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RopeChain_Stick_InRing_Grapple;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RopeChain_Stick_OutSide_Grapple;
    
    FELMovesRopeChain();
};

