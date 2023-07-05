#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELSessionPacketPositionData.generated.h"

UCLASS(Blueprintable)
class UELSessionPacketPositionData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> PositionData;
    
public:
    UELSessionPacketPositionData();
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetPositionData();
    
};

