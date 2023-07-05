#pragma once
#include "CoreMinimal.h"
#include "EditPartsSlot.h"
#include "EPreviewAttire.h"
#include "EditPartsKey.generated.h"

USTRUCT(BlueprintType)
struct FEditPartsKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPreviewAttire AttireType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditPartsSlot PartsSlot;
    
    ELITE_API FEditPartsKey();
};
FORCEINLINE uint32 GetTypeHash(const FEditPartsKey) { return 0; }

