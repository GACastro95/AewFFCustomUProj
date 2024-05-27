#pragma once
#include "CoreMinimal.h"
#include "EOSSessionP2PPacketBase.h"
#include "SessionGamePlayerDataBP.h"
#include "SessionGamePlayerData.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API USessionGamePlayerData : public UEOSSessionP2PPacketBase {
    GENERATED_BODY()
public:
    USessionGamePlayerData();

    UFUNCTION(BlueprintCallable)
    bool SetParameters(const FSessionGamePlayerDataBP& _stPlayerData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetWrestlerName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetWinLoseCounts(TArray<int32>& Array) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWinLoseCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetWeaponDecals(TArray<int32>& Array) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalGamePoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTeamMemberPUID(int32 _sIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTeamMemberNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRandomNumbers(TArray<int32>& Array) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetProductUserID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPlayerIcons(TArray<int32>& Array) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlatform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLeague() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLastName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetFirstName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetEpicAccountDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAccountDisplayName() const;
    
};

