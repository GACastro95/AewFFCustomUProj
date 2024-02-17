#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELSSPickupBase.h"
#include "ESSItemType.h"
#include "SSItemParam.h"
#include "ELSSItemBase.generated.h"

class AActor;
class AELSSPlayer;
class USkeletalMeshComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ABP_200508_API AELSSItemBase : public AELSSPickupBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSItemType ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsStock;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultMeshScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleWhenDrop;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 IsUsedItem: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableAbsorbMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPerformAbsorbMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AbsorbMovementDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AbsorbMovementDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AbsorbMovementTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PickupStartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OriginalScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AbsorbMovementEndScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AbsorbMoveTo, meta=(AllowPrivateAccess=true))
    AELSSPlayer* AbsorbMoveTo;
    
public:
    AELSSItemBase();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    bool UseItem(AELSSPlayer* OtherActor);
    
private:
    UFUNCTION(BlueprintCallable)
    void StartAbsorbMovement(AActor* OtherActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Setup(const FSSItemParam& ItemParam);
    
private:
    UFUNCTION(BlueprintCallable)
    void PerformAbsorbMovement(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AbsorbMoveTo();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEndPerformAbsorbMovement();
    
public:
    UFUNCTION(BlueprintCallable)
    bool GetIsUsedItem() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddStock(AELSSPlayer* OtherActor);
    
};

