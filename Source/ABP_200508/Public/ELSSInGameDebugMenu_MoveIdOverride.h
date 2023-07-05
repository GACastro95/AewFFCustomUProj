#pragma once
#include "CoreMinimal.h"
#include "ELSSInGameDebugMenuRootBase.h"
#include "SSDebugMoveIdOverrideParam.h"
#include "ELSSInGameDebugMenu_MoveIdOverride.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UELSSInGameDebugMenu_MoveIdOverride : public UELSSInGameDebugMenuRootBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSDebugMoveIdOverrideParam MoveIdOverrideParam;
    
public:
    UELSSInGameDebugMenu_MoveIdOverride();
};

