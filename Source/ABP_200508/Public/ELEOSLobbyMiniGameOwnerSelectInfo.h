#pragma once
#include "CoreMinimal.h"
#include "LobbyPacketBase.h"
#include "ELEOSLobbyMiniGameOwnerSelectInfo.generated.h"

UCLASS(Blueprintable)
class UELEOSLobbyMiniGameOwnerSelectInfo : public ULobbyPacketBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Decide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Cancel;
    
public:
    UELEOSLobbyMiniGameOwnerSelectInfo();
    UFUNCTION(BlueprintCallable)
    void SetOwnerSelect(int32 InNextCursor, bool InDecide, bool InCancel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOwnerSelect(int32& OutNextCursor, bool& OutDecide, bool& OutCancel) const;
    
};

