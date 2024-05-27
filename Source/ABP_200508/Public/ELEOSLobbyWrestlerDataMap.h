#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LobbyWrestlerData.h"
#include "ELEOSLobbyWrestlerDataMap.generated.h"

UCLASS(Blueprintable)
class UELEOSLobbyWrestlerDataMap : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WrestlerNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FLobbyWrestlerData> WrestlerDataMap;
    
public:
    UELEOSLobbyWrestlerDataMap();

    UFUNCTION(BlueprintCallable)
    void SetWrestlerNum(int32 _WrestlerNum);
    
    UFUNCTION(BlueprintCallable)
    void RemoveWrestlerData(const FString& _PUID);
    
    UFUNCTION(BlueprintCallable)
    bool IsCompleteAll(const TArray<FString>& _PUIDArray);
    
    UFUNCTION(BlueprintCallable)
    bool IsComplete(const FString& _PUID);
    
    UFUNCTION(BlueprintCallable)
    UObject* FindWrestlerData(const FString& _PUID, int32 _WrestlerIndex);
    
    UFUNCTION(BlueprintCallable)
    void ClearWrestlerDataMapWithoutPUID(const TArray<FString>& _PUIDs);
    
    UFUNCTION(BlueprintCallable)
    void ClearWrestlerDataMap();
    
    UFUNCTION(BlueprintCallable)
    void AddWrestlerData(const FString& _PUID, UObject* _WrestlerData, int32 _WrestlerIndex);
    
};

