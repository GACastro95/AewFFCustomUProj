#pragma once
#include "CoreMinimal.h"
#include "ECareerHUBMenuUseTurn.h"
#include "ECareerPostCommandEventMark.h"
#include "CareerUseTurnCursor.generated.h"

class UTexture2D;
class UUserWidget;

USTRUCT(BlueprintType)
struct FCareerUseTurnCursor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECareerHUBMenuUseTurn Identify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECareerPostCommandEventMark EventMark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GrayOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DecisionCommandOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* PanelBGTexture;
    
    ABP_200508_API FCareerUseTurnCursor();
};

