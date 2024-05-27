#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELSessionPacketPartyData.generated.h"

UCLASS(Blueprintable)
class UELSessionPacketPartyData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool JoinParty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PartyPlayersPUID;
    
public:
    UELSessionPacketPartyData();

    UFUNCTION(BlueprintCallable)
    TArray<FString> GetPartyMemberPUID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPartyMemberNum() const;
    
};

