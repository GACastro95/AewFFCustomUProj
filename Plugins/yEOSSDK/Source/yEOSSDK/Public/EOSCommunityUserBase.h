#pragma once
#include "CoreMinimal.h"
#include "EOSUserBase.h"
#include "EOSCommunityUserBase.generated.h"

class UEOSAttribute;
class UEOSCommunityUserBase;
class UEOSCommunityUserBaseOwnRequest;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSCommunityUserBase : public UEOSUserBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UEOSAttribute*> m_cAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEOSCommunityUserBaseOwnRequest*> m_cOwnRequests;
    
public:
    UEOSCommunityUserBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetInviteID() const;
    
    UFUNCTION(BlueprintCallable)
    TMap<FString, UEOSAttribute*> GetAttributes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEOSAttribute* FindAttribute(const FString& _strAttributeName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Equal(const UEOSCommunityUserBase* User) const;
    
};

