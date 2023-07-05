#pragma once
#include "CoreMinimal.h"
#include "EMiniGameDebugAIBatterFlags.h"
#include "EMiniGameDebugBatType.h"
#include "EMiniGameDebugHitBallFlags.h"
#include "EMiniGameDebugPitcherFlags.h"
#include "MiniGame_HomeRunInfo.generated.h"

USTRUCT(BlueprintType)
struct FMiniGame_HomeRunInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRouletteMaxFixed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SplineIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ThatBatterScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> AllBatterScoreList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllBatterScoreEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMiniGameDebugHitBallFlags HitFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMiniGameDebugAIBatterFlags BatterAIFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMiniGameDebugPitcherFlags PitcherAIFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAINotSupport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMiniGameDebugBatType BatType;
    
    ABP_200508_API FMiniGame_HomeRunInfo();
};

