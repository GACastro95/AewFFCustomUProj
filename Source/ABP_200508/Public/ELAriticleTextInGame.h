#pragma once
#include "CoreMinimal.h"
#include "EELMatchScoreObjective.h"
#include "Engine/DataTable.h"
#include "EELAriticleTextSubject.h"
#include "ELAriticleTextInGame.generated.h"

USTRUCT(BlueprintType)
struct FELAriticleTextInGame : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Japanese;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AriticleText_Male_st;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AriticleText_Female_st;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELAriticleTextSubject Subject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Winner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Loser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Draw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELMatchScoreObjective MatchScoreObjctive;
    
    ABP_200508_API FELAriticleTextInGame();
};

