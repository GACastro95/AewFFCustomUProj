#include "SSHeatSkillParam.h"

FSSHeatSkillParam::FSSHeatSkillParam() {
    this->ID = 0;
    this->Cost = 0;
    this->Kind = ESSHeatSkillKind::None;
    this->Value = 0.00f;
    this->TargetCategory1 = ESSHeatSkillTarget::None;
    this->TargetCategory2 = ESSHeatSkillTarget::None;
    this->TargetCategory3 = ESSHeatSkillTarget::None;
    this->IconType = ESSHeatSkillIconType::None;
    this->Image = NULL;
}

