#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnlinePlayerData.generated.h"

class UEOSUserContentBinary;
class UOnlinePlayerData;

UCLASS(Blueprintable)
class ABP_200508_API UOnlinePlayerData : public UObject {
    GENERATED_BODY()
public:
    UOnlinePlayerData();

    UFUNCTION(BlueprintCallable)
    int32 SubGamePoint(int32 _sValue);
    
    UFUNCTION(BlueprintCallable)
    void SetWonCount(int32 _sValue);
    
    UFUNCTION(BlueprintCallable)
    void SetWinLoseCounter(int32 _uValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTotalMatch(int32 _sValue);
    
    UFUNCTION(BlueprintCallable)
    void SetRank(int32 _sValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLoseCount(int32 _sValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLeague(int32 _sValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGamePoint(int32 _sValue);
    
    UFUNCTION(BlueprintCallable)
    bool MakeUserContentBinary(UEOSUserContentBinary*& _pcUserContentBinary);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWonCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWinLoseCounter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalMatchCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLoseCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLeague() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGamePoint() const;
    
    UFUNCTION(BlueprintCallable)
    static bool CreateOnlinePlayerDataWithUserContentBinary(UOnlinePlayerData*& _pcOnlinePlayerData, UEOSUserContentBinary* _pcUserContentBinary);
    
    UFUNCTION(BlueprintCallable)
    static bool CreateOnlinePlayerData(UOnlinePlayerData*& _pcOnlinePlayerData);
    
    UFUNCTION(BlueprintCallable)
    void CalcWinLoseCounter(bool _bIsWon);
    
    UFUNCTION(BlueprintCallable)
    void AddWonCount();
    
    UFUNCTION(BlueprintCallable)
    void AddTotalMatchCount();
    
    UFUNCTION(BlueprintCallable)
    void AddLoseCount();
    
    UFUNCTION(BlueprintCallable)
    int32 AddGamePoint(int32 _sValue);
    
};

