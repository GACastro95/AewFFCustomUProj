#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESSDamageSE.h"
#include "SSDamageSEData.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct FSSDamageSEData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSDamageSE ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* DamageCue;
    
    ABP_200508_API FSSDamageSEData();
};

