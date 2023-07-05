#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "Templates/SubclassOf.h"
#include "ELSSOutGameStateBase.generated.h"

class AELSSOutGameDatabase;
class AELSSSaveDataManager;

UCLASS(Blueprintable)
class ABP_200508_API AELSSOutGameStateBase : public AGameStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AELSSOutGameDatabase> DatabaseType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AELSSOutGameDatabase* Database;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AELSSSaveDataManager* SaveDataManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AELSSSaveDataManager> SaveDataManagerClass;
    
public:
    AELSSOutGameStateBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScreenUpdateToBP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSOutGameDatabase* GetOutGameDatabase() const;
    
};

