#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ECareerCity.h"
#include "ELCareerSquareManager.generated.h"

class AELCareerSquareActor;

UCLASS(Blueprintable)
class ABP_200508_API AELCareerSquareManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AELCareerSquareActor*> m_CareerSquareTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECareerCity m_CurrentPlayerStayCity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECareerCity m_NextPlayerStayCity;
    
public:
    AELCareerSquareManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNextPlayerStayCity(ECareerCity _City);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentPlayerStayCity(ECareerCity _City);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerSquareTable(TArray<AELCareerSquareActor*> Table);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELCareerSquareActor* GetSquareFromCityName(ECareerCity _City);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECareerCity GetSquareCityFromId(const FString& _SquareId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECareerCity GetNextPlayerStayCity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELCareerSquareActor* GetCurrentStaySquare();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECareerCity GetCurrentPlayerStayCity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AELCareerSquareActor*> GetCareerSquareTable();
    
};

