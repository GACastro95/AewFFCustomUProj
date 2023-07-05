#pragma once
#include "CoreMinimal.h"
#include "ELSSPoolDecalBase.h"
#include "ELSSPoolDecal_TShirt.generated.h"

UCLASS(Abstract, Blueprintable)
class ABP_200508_API AELSSPoolDecal_TShirt : public AELSSPoolDecalBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 badgeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultBadgeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InvalidBadgeId;
    
public:
    AELSSPoolDecal_TShirt();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyBadge(int32 NewBadgeId);
    
};

