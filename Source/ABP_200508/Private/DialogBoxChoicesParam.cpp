#include "DialogBoxChoicesParam.h"

FDialogBoxChoicesParam::FDialogBoxChoicesParam() {
    this->m_Choices = yEnDialogBoxChoices::Ok;
    this->m_Result = yEnDialogBoxResult::Ok;
    this->m_bCancelable = false;
}

