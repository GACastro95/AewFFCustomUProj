#pragma once
#include "CoreMinimal.h"
#include "CommunityPersonData.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FCommunityPersonData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VoiceType;
    
    FCommunityPersonData();
};

