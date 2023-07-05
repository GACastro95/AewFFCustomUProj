#include "ELSaveDataHeader.h"

FELSaveDataHeader::FELSaveDataHeader() {
    this->VersionMajor = 0;
    this->VersionMinor = 0;
    this->SaveDataType = ESaveDataType::Unknown;
    this->Format = ESaveDataCompressionFormat::Raw;
    this->UserIndex = 0;
}

