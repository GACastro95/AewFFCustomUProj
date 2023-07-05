#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnlineNewsData.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class UOnlineNewsData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OnlineNewsID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* OnlineNewsTex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisplayPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HeaderText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BodyText;
    
public:
    UOnlineNewsData();
    UFUNCTION(BlueprintCallable)
    FString ToJson();
    
    UFUNCTION(BlueprintCallable)
    void SetStartTime(const FString& _time);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlineNewsTexture(UTexture2D* _Image);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlineNewsID(const FString& _id);
    
    UFUNCTION(BlueprintCallable)
    void SetEndTime(const FString& _time);
    
    UFUNCTION(BlueprintCallable)
    static void SaveFile(const FString& _Text, const FString& _FilePath);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadFile(const FString& _FilePath, FString& _Filedata);
    
    UFUNCTION(BlueprintCallable)
    FString GetPublicationStartDate();
    
    UFUNCTION(BlueprintCallable)
    FString GetPublicationEndDate();
    
    UFUNCTION(BlueprintCallable)
    int32 GetOnlineNewsVersion();
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetOnlineNewsTexture();
    
    UFUNCTION(BlueprintCallable)
    FString GetOnlineNewsID();
    
    UFUNCTION(BlueprintCallable)
    FString GetHeaderText();
    
    UFUNCTION(BlueprintCallable)
    int32 GetDisplayPriority();
    
    UFUNCTION(BlueprintCallable)
    FString GetBodyText();
    
    UFUNCTION(BlueprintCallable)
    void FromJson(const FString& _JsonData);
    
};

