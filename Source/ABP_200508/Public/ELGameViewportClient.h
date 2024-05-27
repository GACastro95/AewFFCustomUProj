#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "Engine/GameViewportClient.h"
#include "ELGameViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class ABP_200508_API UELGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EWindowMode::Type>> WindowModeStack;
    
public:
    UELGameViewportClient();

};

