#include "ELGoldCoinPossessManager.h"

bool UELGoldCoinPossessManager::RequestDownloadDataFromEOS(FDonwloadedGoldCoinDelegate OnResultDelegate) {
    return false;
}

void UELGoldCoinPossessManager::RequestDownloadData(FDonwloadedGoldCoinDelegate OnResultDelegate) {
}

void UELGoldCoinPossessManager::OnYGS2Response_UploadData(EYGS2ErrorType _errorType, UYGS2RequestBase* _requestBaseInstance) {
}

void UELGoldCoinPossessManager::OnYGS2Response_DownloadData(EYGS2ErrorType _errorType, UYGS2RequestBase* _requestBaseInstance) {
}

void UELGoldCoinPossessManager::OnEosUserContentsEvent(EEOSUserContentsEvent _enUserContentsEvent, UEOSUserContentsBase* _pcUserContentsBase, const FEOSUserContentProgress& _rstProgress) {
}

UELGoldCoinPossessManager::UELGoldCoinPossessManager() {
}

