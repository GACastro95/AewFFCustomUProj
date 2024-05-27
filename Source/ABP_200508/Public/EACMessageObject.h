#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EACMessageObject.generated.h"

UCLASS(Blueprintable)
class UEACMessageObject : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> MessageData;
    
public:
    UEACMessageObject();

};

