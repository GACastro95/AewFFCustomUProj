#include "YDBGMailAttachment.h"

FYDBGMailAttachment::FYDBGMailAttachment() {
    this->MIMEType = EYDBGMailMIMEType::PlainText;
    this->ConvertToZip = false;
}

