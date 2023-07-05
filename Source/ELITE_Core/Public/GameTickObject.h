#pragma once
#include "CoreMinimal.h"
#include "CommonObject.h"
#include "GameTickObject.generated.h"

UCLASS(Abstract, Blueprintable)
class ELITE_CORE_API UGameTickObject : public UCommonObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickableWhenPaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickableInEditor;
    
public:
    UGameTickObject();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTick(float DeltaSeconds);
    
};

