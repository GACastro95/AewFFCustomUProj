#pragma once
#include "CoreMinimal.h"
#include "SkelMeshMergeSectionMapping_BP.generated.h"

USTRUCT(BlueprintType)
struct ELITE_API FSkelMeshMergeSectionMapping_BP {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SectionIDs;
    
    FSkelMeshMergeSectionMapping_BP();
};

