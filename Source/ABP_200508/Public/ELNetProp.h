#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELNetActor.h"
#include "StWeaponSystemMotion.h"
#include "ELNetProp.generated.h"

class ACharacter;
class AELNetCharacter;
class UAnimMontage;

UCLASS(Blueprintable)
class AELNetProp : public AELNetActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELNetCharacter* NetOwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStWeaponSystemMotion SystemMotion_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* AttachChara_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BarrierCapsuleOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_BlockPose_N;
    
public:
    AELNetProp();
    UFUNCTION(BlueprintCallable)
    void SetNetOwnerCharacter(AELNetCharacter* NewOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttached_N(const ACharacter* Chara) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELNetCharacter* GetNetOwnerCharacter() const;
    
};

