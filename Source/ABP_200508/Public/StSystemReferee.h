#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StSystemRefereeChain.h"
#include "StSystemRefereeCheck.h"
#include "StSystemRefereeMove.h"
#include "StSystemRefereePin.h"
#include "StSystemRefereeRingout.h"
#include "StSystemRefereeSubmission.h"
#include "StSystemReferee.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FStSystemReferee : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStSystemRefereeMove Move;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStSystemRefereeCheck Check;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStSystemRefereePin Pin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStSystemRefereeSubmission Submission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStSystemRefereeChain Chain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStSystemRefereeRingout Ringout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* RopeBreak;
    
    ABP_200508_API FStSystemReferee();
};

