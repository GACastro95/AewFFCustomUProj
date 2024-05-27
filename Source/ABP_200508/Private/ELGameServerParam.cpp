#include "ELGameServerParam.h"

UELGameServerParam::UELGameServerParam() {
    this->EnvironmentName = TEXT("SUB_1");
    this->ProductID = TEXT("41913772aa0545a3bf284d0252fe2b84");
    this->SandboxID = TEXT("81c591dedf254addbf492f500e38b5ff");
    this->DeploymentID = TEXT("53ec4417ed2a4b739bb645e725b7a6a1");
    this->ClientId = TEXT("xyza7891B63WB15k90qXlSSN7Q4oT1Xc");
    this->SecretKey = TEXT("cph5J/HzpWgEjFmB13kNZSvR91mYmntjrBpen+sC/YM");
    this->EncryptKey = TEXT("5608FA9FF3C555045A759BD4350ADAE3D5A608423DA21533FAD8AEC9B027CC68");
    this->EOSApiBaseURL = TEXT("https://api.epicgames.dev/sdk/v1/default");
    this->EOSIDHash = TEXT("3123a3b8b28e0a50529f2c91116d9f17d7251a73");
    this->YGS2TitleID = TEXT("9D503D43");
    this->YGS2TitleVersion = TEXT("1.0");
    this->DataKey = TEXT("HKZO+GXFLTHcXNIpeJcrp/lDfp/EWw3/");
    this->DataSubKey = TEXT("FtMdkZw5fDFMQVMG");
    this->SaveDataEncryptKey = TEXT("hSmG!+h2Sp.NZ*b~,X.BEy,5Kr3++UFS9.iX7");
}

FString UELGameServerParam::GetSaveFileEncKey() {
    return TEXT("");
}

FString UELGameServerParam::GetEOSEnvName() {
    return TEXT("");
}


