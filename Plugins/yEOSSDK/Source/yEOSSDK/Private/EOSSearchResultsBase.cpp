#include "EOSSearchResultsBase.h"

FString UEOSSearchResultsBase::GetSearchName() const {
    return TEXT("");
}

TMap<FString, UEOSCommunityInfoBase*> UEOSSearchResultsBase::GetResults() {
    return TMap<FString, UEOSCommunityInfoBase*>();
}

int32 UEOSSearchResultsBase::GetResultNum() const {
    return 0;
}

int32 UEOSSearchResultsBase::AnalyzeResults() {
    return 0;
}

UEOSSearchResultsBase::UEOSSearchResultsBase() {
}

