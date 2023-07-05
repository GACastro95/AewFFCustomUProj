#pragma once
#include "CoreMinimal.h"
#include "ELSSWidgetBase.h"
#include "ELSSWidgetHUD_MiniMapImage.generated.h"

class UDataTable;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_MiniMapImage : public UELSSWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* MapImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MapTypeDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultMinimapId;
    
public:
    UELSSWidgetHUD_MiniMapImage();
    UFUNCTION(BlueprintCallable)
    bool SetMapTexture(int32 InMapIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init();
    
};

