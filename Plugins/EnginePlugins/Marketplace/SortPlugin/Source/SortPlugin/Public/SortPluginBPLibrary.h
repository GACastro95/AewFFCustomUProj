#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ActorFilterDelegateDelegate.h"
#include "ActorSortDelegateDelegate.h"
#include "FloatFilterDelegateDelegate.h"
#include "FloatSortDelegateDelegate.h"
#include "IntFilterDelegateDelegate.h"
#include "IntSortDelegateDelegate.h"
#include "NameFilterDelegateDelegate.h"
#include "NameSortDelegateDelegate.h"
#include "ObjectFilterDelegateDelegate.h"
#include "ObjectSortDelegateDelegate.h"
#include "StringFilterDelegateDelegate.h"
#include "StringSortDelegateDelegate.h"
#include "VectorFilterDelegateDelegate.h"
#include "VectorSortDelegateDelegate.h"
#include "SortPluginBPLibrary.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable)
class USortPluginBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USortPluginBPLibrary();
    UFUNCTION(BlueprintCallable)
    static TSet<FVector> ToVectorSet(const TArray<FVector>& Array);
    
    UFUNCTION(BlueprintCallable)
    static TSet<FString> ToStringSet(const TArray<FString>& Array);
    
    UFUNCTION(BlueprintCallable)
    static TSet<UObject*> ToObjectSet(const TArray<UObject*>& Array);
    
    UFUNCTION(BlueprintCallable)
    static TSet<FName> ToNameSet(const TArray<FName>& Array);
    
    UFUNCTION(BlueprintCallable)
    static TSet<int32> ToIntegerSet(const TArray<int32>& Array);
    
    UFUNCTION(BlueprintCallable)
    static TSet<float> ToFloatSet(const TArray<float>& Array);
    
    UFUNCTION(BlueprintCallable)
    static TSet<AActor*> ToActorSet(const TArray<AActor*>& Array);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> SplitString(const FString& STRING, const FString& Separator, TEnumAsByte<ESearchCase::Type> SearchCase, bool RemoveEmptyString);
    
    UFUNCTION(BlueprintCallable)
    static void SortVectorRef(UPARAM(Ref) TArray<FVector>& Array, FVector Origin, bool bIsAscending);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FVector> SortVector(TArray<FVector> Array, FVector Origin, bool bIsAscending);
    
    UFUNCTION(BlueprintCallable)
    static void SortStringRef(UPARAM(Ref) TArray<FString>& Array, bool bIsAscending);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> SortString(TArray<FString> Array, bool bIsAscending);
    
    UFUNCTION(BlueprintCallable)
    static void SortNameRef(UPARAM(Ref) TArray<FName>& Array, bool bIsAscending);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> SortName(TArray<FName> Array, bool bIsAscending);
    
    UFUNCTION(BlueprintCallable)
    static void SortIntegerRef(UPARAM(Ref) TArray<int32>& Array, bool bIsAscending);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> SortInteger(TArray<int32> Array, bool bIsAscending);
    
    UFUNCTION(BlueprintCallable)
    static void SortFloatRef(UPARAM(Ref) TArray<float>& Array, bool bIsAscending);
    
    UFUNCTION(BlueprintCallable)
    static TArray<float> SortFloat(TArray<float> Array, bool bIsAscending);
    
    UFUNCTION(BlueprintCallable)
    static void SortActorRef(UPARAM(Ref) TArray<AActor*>& Array, AActor*& Actor, bool bIsAscending);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> SortActor(TArray<AActor*> Array, AActor*& Actor, bool bIsAscending);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FVector> ReverseVector(const TArray<FVector>& Array);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> ReverseString(const TArray<FString>& Array);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UObject*> ReverseObject(const TArray<UObject*>& Array);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> ReverseName(const TArray<FName>& Array);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> ReverseInteger(const TArray<int32>& Array);
    
    UFUNCTION(BlueprintCallable)
    static TArray<float> ReverseFloat(const TArray<float>& Array);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> ReverseActor(const TArray<AActor*>& Array);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FVector> RandomVector(int32 Size, FVector MinValue, FVector MaxValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> RandomInteger(int32 Size, int32 MinValue, int32 MaxValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<float> RandomFloat(int32 Size, float MinValue, float MaxValue);
    
    UFUNCTION(BlueprintCallable)
    static void PredicateSortVectorRef(UPARAM(Ref) TArray<FVector>& Array, const FVectorSortDelegate& PredicateFunction, bool InvertResult);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FVector> PredicateSortVector(TArray<FVector> Array, const FVectorSortDelegate& PredicateFunction, bool InvertResult);
    
    UFUNCTION(BlueprintCallable)
    static void PredicateSortStringRef(UPARAM(Ref) TArray<FString>& Array, const FStringSortDelegate& PredicateFunction, bool InvertResult);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> PredicateSortString(TArray<FString> Array, const FStringSortDelegate& PredicateFunction, bool InvertResult);
    
    UFUNCTION(BlueprintCallable)
    static void PredicateSortObjectRef(UPARAM(Ref) TArray<UObject*>& Array, const FObjectSortDelegate& PredicateFunction, bool InvertResult);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UObject*> PredicateSortObject(TArray<UObject*> Array, const FObjectSortDelegate& PredicateFunction, bool InvertResult);
    
    UFUNCTION(BlueprintCallable)
    static void PredicateSortNameRef(UPARAM(Ref) TArray<FName>& Array, const FNameSortDelegate& PredicateFunction, bool InvertResult);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> PredicateSortName(TArray<FName> Array, const FNameSortDelegate& PredicateFunction, bool InvertResult);
    
    UFUNCTION(BlueprintCallable)
    static void PredicateSortIntegerRef(UPARAM(Ref) TArray<int32>& Array, const FIntSortDelegate& PredicateFunction, bool InvertResult);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> PredicateSortInteger(TArray<int32> Array, const FIntSortDelegate& PredicateFunction, bool InvertResult);
    
    UFUNCTION(BlueprintCallable)
    static void PredicateSortFloatRef(UPARAM(Ref) TArray<float>& Array, const FFloatSortDelegate& PredicateFunction, bool InvertResult);
    
    UFUNCTION(BlueprintCallable)
    static TArray<float> PredicateSortFloat(TArray<float> Array, const FFloatSortDelegate& PredicateFunction, bool InvertResult);
    
    UFUNCTION(BlueprintCallable)
    static void PredicateSortActorRef(UPARAM(Ref) TArray<AActor*>& Array, const FActorSortDelegate& PredicateFunction, bool InvertResult);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> PredicateSortActor(TArray<AActor*> Array, const FActorSortDelegate& PredicateFunction, bool InvertResult);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FVector> PredicateFilterVector(const TArray<FVector>& Array, const FVectorFilterDelegate& PredicateFunction, bool InvertResult);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> PredicateFilterString(const TArray<FString>& Array, const FStringFilterDelegate& PredicateFunction, bool InvertResult);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UObject*> PredicateFilterObject(const TArray<UObject*>& Array, const FObjectFilterDelegate& PredicateFunction, bool InvertResult);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> PredicateFilterName(const TArray<FName>& Array, const FNameFilterDelegate& PredicateFunction, bool InvertResult);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> PredicateFilterInteger(const TArray<int32>& Array, const FIntFilterDelegate& PredicateFunction, bool InvertResult);
    
    UFUNCTION(BlueprintCallable)
    static TArray<float> PredicateFilterFloat(const TArray<float>& Array, const FFloatFilterDelegate& PredicateFunction, bool InvertResult);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> PredicateFilterActor(const TArray<AActor*>& Array, const FActorFilterDelegate& PredicateFunction, bool InvertResult);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> MinMaxIntegerNormalization(const TArray<int32>& Array, int32 Min, int32 Max);
    
    UFUNCTION(BlueprintCallable)
    static TArray<float> MinMaxFloatNormalization(const TArray<float>& Array, float Min, float Max);
    
    UFUNCTION(BlueprintCallable)
    static int32 MinimumIntegerIndex(const TArray<int32>& Array);
    
    UFUNCTION(BlueprintCallable)
    static int32 MinimumFloatIndex(const TArray<float>& Array);
    
    UFUNCTION(BlueprintCallable)
    static int32 MaximumIntegerIndex(const TArray<int32>& Array);
    
    UFUNCTION(BlueprintCallable)
    static int32 MaximumFloatIndex(const TArray<float>& Array);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> FilterMatches(const TArray<FString>& Array, const FString& Pattern, bool& bFound, TArray<int32>& Indexes);
    
    UFUNCTION(BlueprintCallable)
    static FString FilterMatch(const TArray<FString>& Array, const FString& Pattern, bool& bFound, int32& Index);
    
    UFUNCTION(BlueprintCallable)
    static void FarthestLocation(const TArray<FVector>& Array, FVector Origin, FVector& Farthest, float& Distance, int32& Index);
    
    UFUNCTION(BlueprintCallable)
    static void FarthestActor(const TArray<AActor*>& Array, AActor*& Origin, AActor*& Farthest, float& Distance, int32& Index);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FVector> ExtractVector(const TArray<FVector>& Array, int32 StartIndex, int32 EndIndex);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> ExtractString(const TArray<FString>& Array, int32 StartIndex, int32 EndIndex);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UObject*> ExtractObject(const TArray<UObject*>& Array, int32 StartIndex, int32 EndIndex);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> ExtractName(const TArray<FName>& Array, int32 StartIndex, int32 EndIndex);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> ExtractInteger(const TArray<int32>& Array, int32 StartIndex, int32 EndIndex);
    
    UFUNCTION(BlueprintCallable)
    static TArray<float> ExtractFloat(const TArray<float>& Array, int32 StartIndex, int32 EndIndex);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> ExtractActor(const TArray<AActor*>& Array, int32 StartIndex, int32 EndIndex);
    
    UFUNCTION(BlueprintCallable)
    static void ClosestLocation(const TArray<FVector>& Array, FVector Origin, FVector& Closest, float& Distance, int32& Index);
    
    UFUNCTION(BlueprintCallable)
    static void ClosestActor(const TArray<AActor*>& Array, AActor*& Origin, AActor*& Closest, float& Distance, int32& Index);
    
    UFUNCTION(BlueprintCallable)
    static void ClampVectorSizeRef(UPARAM(Ref) TArray<FVector>& Array, float MinSize, float MaxSize, bool bOnly2D);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FVector> ClampVectorSize(TArray<FVector> Array, float MinSize, float MaxSize, bool bOnly2D);
    
    UFUNCTION(BlueprintCallable)
    static void ClampIntegerRef(UPARAM(Ref) TArray<int32>& Array, int32 Min, int32 Max);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> ClampInteger(TArray<int32> Array, int32 Min, int32 Max);
    
    UFUNCTION(BlueprintCallable)
    static void ClampFloatRef(UPARAM(Ref) TArray<float>& Array, float Min, float Max);
    
    UFUNCTION(BlueprintCallable)
    static TArray<float> ClampFloat(TArray<float> Array, float Min, float Max);
    
    UFUNCTION(BlueprintCallable)
    static float AverageInteger(const TArray<int32>& Array);
    
    UFUNCTION(BlueprintCallable)
    static float AverageFloat(const TArray<float>& Array);
    
};

