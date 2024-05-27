#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ELAudienceManager_New.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELAudienceManager_New : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AudienceArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> BillboardAudienceArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> WiseAudienceArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpdateIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequestDestroy_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyed_N;
    
public:
    AELAudienceManager_New(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_UpdateCrowd_N(const float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void ListupAudience();
    
    UFUNCTION(BlueprintCallable)
    void DestroyAudience_N();
    
};

