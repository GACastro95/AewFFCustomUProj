#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECareerArenaType.h"
#include "ECareerCity.h"
#include "ECareerCityMoveVehicleType.h"
#include "ECareerScenario.h"
#include "CareerSchedule.generated.h"

USTRUCT(BlueprintType)
struct FCareerSchedule : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECareerScenario Scenario;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECareerArenaType Arena;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECareerCity Venue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Turn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECareerCityMoveVehicleType Transportation;
    
    ABP_200508_API FCareerSchedule();
};

