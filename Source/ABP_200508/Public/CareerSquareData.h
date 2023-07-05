#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECareerSquareColor.h"
#include "ECareerSquareShape.h"
#include "ECareerSquareType.h"
#include "CareerSquareData.generated.h"

USTRUCT(BlueprintType)
struct FCareerSquareData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECareerSquareType SquareType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECareerSquareShape Shape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECareerSquareColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDynamite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPPV;
    
    ABP_200508_API FCareerSquareData();
};

