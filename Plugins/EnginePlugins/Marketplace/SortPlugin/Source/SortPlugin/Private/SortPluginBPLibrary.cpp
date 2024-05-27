#include "SortPluginBPLibrary.h"

USortPluginBPLibrary::USortPluginBPLibrary() {
}

TSet<FVector> USortPluginBPLibrary::ToVectorSet(const TArray<FVector>& Array) {
    return TSet<FVector>();
}

TSet<FString> USortPluginBPLibrary::ToStringSet(const TArray<FString>& Array) {
    return TSet<FString>();
}

TSet<UObject*> USortPluginBPLibrary::ToObjectSet(const TArray<UObject*>& Array) {
    return TSet<UObject*>();
}

TSet<FName> USortPluginBPLibrary::ToNameSet(const TArray<FName>& Array) {
    return TSet<FName>();
}

TSet<int32> USortPluginBPLibrary::ToIntegerSet(const TArray<int32>& Array) {
    return TSet<int32>();
}

TSet<float> USortPluginBPLibrary::ToFloatSet(const TArray<float>& Array) {
    return TSet<float>();
}

TSet<AActor*> USortPluginBPLibrary::ToActorSet(const TArray<AActor*>& Array) {
    return TSet<AActor*>();
}

TArray<FString> USortPluginBPLibrary::SplitString(const FString& STRING, const FString& Separator, TEnumAsByte<ESearchCase::Type> SearchCase, bool RemoveEmptyString) {
    return TArray<FString>();
}

void USortPluginBPLibrary::SortVectorRef(TArray<FVector>& Array, FVector Origin, bool bIsAscending) {
}

TArray<FVector> USortPluginBPLibrary::SortVector(TArray<FVector> Array, FVector Origin, bool bIsAscending) {
    return TArray<FVector>();
}

void USortPluginBPLibrary::SortStringRef(TArray<FString>& Array, bool bIsAscending) {
}

TArray<FString> USortPluginBPLibrary::SortString(TArray<FString> Array, bool bIsAscending) {
    return TArray<FString>();
}

void USortPluginBPLibrary::SortNameRef(TArray<FName>& Array, bool bIsAscending) {
}

TArray<FName> USortPluginBPLibrary::SortName(TArray<FName> Array, bool bIsAscending) {
    return TArray<FName>();
}

void USortPluginBPLibrary::SortIntegerRef(TArray<int32>& Array, bool bIsAscending) {
}

TArray<int32> USortPluginBPLibrary::SortInteger(TArray<int32> Array, bool bIsAscending) {
    return TArray<int32>();
}

void USortPluginBPLibrary::SortFloatRef(TArray<float>& Array, bool bIsAscending) {
}

TArray<float> USortPluginBPLibrary::SortFloat(TArray<float> Array, bool bIsAscending) {
    return TArray<float>();
}

void USortPluginBPLibrary::SortActorRef(TArray<AActor*>& Array, AActor*& Actor, bool bIsAscending) {
}

TArray<AActor*> USortPluginBPLibrary::SortActor(TArray<AActor*> Array, AActor*& Actor, bool bIsAscending) {
    return TArray<AActor*>();
}

TArray<FVector> USortPluginBPLibrary::ReverseVector(const TArray<FVector>& Array) {
    return TArray<FVector>();
}

TArray<FString> USortPluginBPLibrary::ReverseString(const TArray<FString>& Array) {
    return TArray<FString>();
}

TArray<UObject*> USortPluginBPLibrary::ReverseObject(const TArray<UObject*>& Array) {
    return TArray<UObject*>();
}

TArray<FName> USortPluginBPLibrary::ReverseName(const TArray<FName>& Array) {
    return TArray<FName>();
}

TArray<int32> USortPluginBPLibrary::ReverseInteger(const TArray<int32>& Array) {
    return TArray<int32>();
}

TArray<float> USortPluginBPLibrary::ReverseFloat(const TArray<float>& Array) {
    return TArray<float>();
}

TArray<AActor*> USortPluginBPLibrary::ReverseActor(const TArray<AActor*>& Array) {
    return TArray<AActor*>();
}

TArray<FVector> USortPluginBPLibrary::RandomVector(int32 Size, FVector MinValue, FVector MaxValue) {
    return TArray<FVector>();
}

TArray<int32> USortPluginBPLibrary::RandomInteger(int32 Size, int32 MinValue, int32 MaxValue) {
    return TArray<int32>();
}

TArray<float> USortPluginBPLibrary::RandomFloat(int32 Size, float MinValue, float MaxValue) {
    return TArray<float>();
}

void USortPluginBPLibrary::PredicateSortVectorRef(TArray<FVector>& Array, const FVectorSortDelegate& PredicateFunction, bool InvertResult) {
}

TArray<FVector> USortPluginBPLibrary::PredicateSortVector(TArray<FVector> Array, const FVectorSortDelegate& PredicateFunction, bool InvertResult) {
    return TArray<FVector>();
}

void USortPluginBPLibrary::PredicateSortStringRef(TArray<FString>& Array, const FStringSortDelegate& PredicateFunction, bool InvertResult) {
}

TArray<FString> USortPluginBPLibrary::PredicateSortString(TArray<FString> Array, const FStringSortDelegate& PredicateFunction, bool InvertResult) {
    return TArray<FString>();
}

void USortPluginBPLibrary::PredicateSortObjectRef(TArray<UObject*>& Array, const FObjectSortDelegate& PredicateFunction, bool InvertResult) {
}

TArray<UObject*> USortPluginBPLibrary::PredicateSortObject(TArray<UObject*> Array, const FObjectSortDelegate& PredicateFunction, bool InvertResult) {
    return TArray<UObject*>();
}

void USortPluginBPLibrary::PredicateSortNameRef(TArray<FName>& Array, const FNameSortDelegate& PredicateFunction, bool InvertResult) {
}

TArray<FName> USortPluginBPLibrary::PredicateSortName(TArray<FName> Array, const FNameSortDelegate& PredicateFunction, bool InvertResult) {
    return TArray<FName>();
}

void USortPluginBPLibrary::PredicateSortIntegerRef(TArray<int32>& Array, const FIntSortDelegate& PredicateFunction, bool InvertResult) {
}

TArray<int32> USortPluginBPLibrary::PredicateSortInteger(TArray<int32> Array, const FIntSortDelegate& PredicateFunction, bool InvertResult) {
    return TArray<int32>();
}

void USortPluginBPLibrary::PredicateSortFloatRef(TArray<float>& Array, const FFloatSortDelegate& PredicateFunction, bool InvertResult) {
}

TArray<float> USortPluginBPLibrary::PredicateSortFloat(TArray<float> Array, const FFloatSortDelegate& PredicateFunction, bool InvertResult) {
    return TArray<float>();
}

void USortPluginBPLibrary::PredicateSortActorRef(TArray<AActor*>& Array, const FActorSortDelegate& PredicateFunction, bool InvertResult) {
}

TArray<AActor*> USortPluginBPLibrary::PredicateSortActor(TArray<AActor*> Array, const FActorSortDelegate& PredicateFunction, bool InvertResult) {
    return TArray<AActor*>();
}

TArray<FVector> USortPluginBPLibrary::PredicateFilterVector(const TArray<FVector>& Array, const FVectorFilterDelegate& PredicateFunction, bool InvertResult) {
    return TArray<FVector>();
}

TArray<FString> USortPluginBPLibrary::PredicateFilterString(const TArray<FString>& Array, const FStringFilterDelegate& PredicateFunction, bool InvertResult) {
    return TArray<FString>();
}

TArray<UObject*> USortPluginBPLibrary::PredicateFilterObject(const TArray<UObject*>& Array, const FObjectFilterDelegate& PredicateFunction, bool InvertResult) {
    return TArray<UObject*>();
}

TArray<FName> USortPluginBPLibrary::PredicateFilterName(const TArray<FName>& Array, const FNameFilterDelegate& PredicateFunction, bool InvertResult) {
    return TArray<FName>();
}

TArray<int32> USortPluginBPLibrary::PredicateFilterInteger(const TArray<int32>& Array, const FIntFilterDelegate& PredicateFunction, bool InvertResult) {
    return TArray<int32>();
}

TArray<float> USortPluginBPLibrary::PredicateFilterFloat(const TArray<float>& Array, const FFloatFilterDelegate& PredicateFunction, bool InvertResult) {
    return TArray<float>();
}

TArray<AActor*> USortPluginBPLibrary::PredicateFilterActor(const TArray<AActor*>& Array, const FActorFilterDelegate& PredicateFunction, bool InvertResult) {
    return TArray<AActor*>();
}

TArray<int32> USortPluginBPLibrary::MinMaxIntegerNormalization(const TArray<int32>& Array, int32 Min, int32 Max) {
    return TArray<int32>();
}

TArray<float> USortPluginBPLibrary::MinMaxFloatNormalization(const TArray<float>& Array, float Min, float Max) {
    return TArray<float>();
}

int32 USortPluginBPLibrary::MinimumIntegerIndex(const TArray<int32>& Array) {
    return 0;
}

int32 USortPluginBPLibrary::MinimumFloatIndex(const TArray<float>& Array) {
    return 0;
}

int32 USortPluginBPLibrary::MaximumIntegerIndex(const TArray<int32>& Array) {
    return 0;
}

int32 USortPluginBPLibrary::MaximumFloatIndex(const TArray<float>& Array) {
    return 0;
}

TArray<FString> USortPluginBPLibrary::FilterMatches(const TArray<FString>& Array, const FString& Pattern, bool& bFound, TArray<int32>& Indexes) {
    return TArray<FString>();
}

FString USortPluginBPLibrary::FilterMatch(const TArray<FString>& Array, const FString& Pattern, bool& bFound, int32& Index) {
    return TEXT("");
}

void USortPluginBPLibrary::FarthestLocation(const TArray<FVector>& Array, FVector Origin, FVector& Farthest, float& Distance, int32& Index) {
}

void USortPluginBPLibrary::FarthestActor(const TArray<AActor*>& Array, AActor*& Origin, AActor*& Farthest, float& Distance, int32& Index) {
}

TArray<FVector> USortPluginBPLibrary::ExtractVector(const TArray<FVector>& Array, int32 StartIndex, int32 EndIndex) {
    return TArray<FVector>();
}

TArray<FString> USortPluginBPLibrary::ExtractString(const TArray<FString>& Array, int32 StartIndex, int32 EndIndex) {
    return TArray<FString>();
}

TArray<UObject*> USortPluginBPLibrary::ExtractObject(const TArray<UObject*>& Array, int32 StartIndex, int32 EndIndex) {
    return TArray<UObject*>();
}

TArray<FName> USortPluginBPLibrary::ExtractName(const TArray<FName>& Array, int32 StartIndex, int32 EndIndex) {
    return TArray<FName>();
}

TArray<int32> USortPluginBPLibrary::ExtractInteger(const TArray<int32>& Array, int32 StartIndex, int32 EndIndex) {
    return TArray<int32>();
}

TArray<float> USortPluginBPLibrary::ExtractFloat(const TArray<float>& Array, int32 StartIndex, int32 EndIndex) {
    return TArray<float>();
}

TArray<AActor*> USortPluginBPLibrary::ExtractActor(const TArray<AActor*>& Array, int32 StartIndex, int32 EndIndex) {
    return TArray<AActor*>();
}

void USortPluginBPLibrary::ClosestLocation(const TArray<FVector>& Array, FVector Origin, FVector& Closest, float& Distance, int32& Index) {
}

void USortPluginBPLibrary::ClosestActor(const TArray<AActor*>& Array, AActor*& Origin, AActor*& Closest, float& Distance, int32& Index) {
}

void USortPluginBPLibrary::ClampVectorSizeRef(TArray<FVector>& Array, float MinSize, float MaxSize, bool bOnly2D) {
}

TArray<FVector> USortPluginBPLibrary::ClampVectorSize(TArray<FVector> Array, float MinSize, float MaxSize, bool bOnly2D) {
    return TArray<FVector>();
}

void USortPluginBPLibrary::ClampIntegerRef(TArray<int32>& Array, int32 Min, int32 Max) {
}

TArray<int32> USortPluginBPLibrary::ClampInteger(TArray<int32> Array, int32 Min, int32 Max) {
    return TArray<int32>();
}

void USortPluginBPLibrary::ClampFloatRef(TArray<float>& Array, float Min, float Max) {
}

TArray<float> USortPluginBPLibrary::ClampFloat(TArray<float> Array, float Min, float Max) {
    return TArray<float>();
}

float USortPluginBPLibrary::AverageInteger(const TArray<int32>& Array) {
    return 0.0f;
}

float USortPluginBPLibrary::AverageFloat(const TArray<float>& Array) {
    return 0.0f;
}


