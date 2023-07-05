#pragma once
#include "CoreMinimal.h"
#include "DebugCareerParam_Snapshot.generated.h"

USTRUCT(BlueprintType)
struct FDebugCareerParam_Snapshot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSnapshotMaxScriptMode;
    
    ABP_200508_API FDebugCareerParam_Snapshot();
};

