#include "ELGameServerParam.h"

FString UELGameServerParam::GetSaveFileEncKey() {
    return TEXT("");
}

FString UELGameServerParam::GetEOSEnvName() {
    return TEXT("");
}

UELGameServerParam::UELGameServerParam() {
    this->EnvironmentName = TEXT("SUB_1");
    this->ProductID = TEXT("207d54a6c6be4879a8a0e7cc38609dc6");
    this->SandboxID = TEXT("997d3ecfe9cb45e4bccfd437dd8a35b2");
    this->DeploymentID = TEXT("dc95ad3583b14a9887e090d590e579d5");
    this->ClientId = TEXT("xyza7891esZC0RWG4tJppY4nW8Voa6bl");
    this->SecretKey = TEXT("cOHa89UI2tPhXr/gRQqiGlYGUh8Aolhp2WlVwUsWaNU");
    this->EncryptKey = TEXT("5608FA9FF3C555045A759BD4350ADAE3D5A608423DA21533FAD8AEC9B027CC68");
    this->EOSApiBaseURL = TEXT("https://api.epicgames.dev/sdk/v1/default");
    this->EOSIDHash = TEXT("3123a3b8b28e0a50529f2c91116d9f17d7251a73");
    this->YGS2TitleVersion = TEXT("1.0");
    this->DataKey = TEXT("HKZO+GXFLTHcXNIpeJcrp/lDfp/EWw3/");
    this->DataSubKey = TEXT("FtMdkZw5fDFMQVMG");
    this->SaveDataEncryptKey = TEXT("hSmG!+h2Sp.NZ*b~,X.BEy,5Kr3++UFS9.iX7");
}

