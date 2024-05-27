#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "CareerSquareData.h"
#include "OnFinishedWithActionDelegate.h"
#include "ELCareerSquareActor.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELCareerSquareActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinishedWithAction OnFinishedWithAction;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SquareID;
    
public:
    AELCareerSquareActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSquareData(FCareerSquareData _Param);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCareerSquareData GetSquareData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHeliport() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void BroadcastActionFinished();
    
};

