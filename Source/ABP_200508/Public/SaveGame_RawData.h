#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SaveGame_RawData.generated.h"

UCLASS(Blueprintable)
class USaveGame_RawData : public USaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_cRawData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_uRawSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_cRawSubData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_uRawSubSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_cTempData;
    
public:
    USaveGame_RawData();
};

