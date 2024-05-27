#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSPreloadAssetInfo.h"
#include "ELSSPreloadAssetInfoReplicator.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELSSPreloadAssetInfoReplicator : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PreloadAssetInfo, meta=(AllowPrivateAccess=true))
    FSSPreloadAssetInfo PreloadAssetInfo;
    
public:
    AELSSPreloadAssetInfoReplicator(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_PreloadAssetInfo();
    
};

