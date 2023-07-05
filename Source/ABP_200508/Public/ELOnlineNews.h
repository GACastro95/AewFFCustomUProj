#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELOnlineNews.generated.h"

class UEOSTitleStorage;
class UOnlineNewsData;

UCLASS(Blueprintable)
class UELOnlineNews : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSTitleStorage* TitleStorage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UOnlineNewsData*> OnlineNewsDataMap;
    
public:
    UELOnlineNews();
    UFUNCTION(BlueprintCallable)
    void OnDownloadJson(const FString& _Filename, const FString& _Filedata);
    
    UFUNCTION(BlueprintCallable)
    void GetOnlineNewDataMap(TMap<FString, UOnlineNewsData*>& _OnlineNewsMap);
    
    UFUNCTION(BlueprintCallable)
    void ClearOnlineNewDataMap();
    
};

