// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EKeyMappingType_generated_h
#error "EKeyMappingType.generated.h already included, missing '#pragma once' in EKeyMappingType.h"
#endif
#define ABP_200508_EKeyMappingType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EKeyMappingType_h


#define FOREACH_ENUM_EKEYMAPPINGTYPE(op) \
	op(EKeyMappingType::None) \
	op(EKeyMappingType::FaceButtonLeft) \
	op(EKeyMappingType::FaceButtonUp) \
	op(EKeyMappingType::FaceButtonRight) \
	op(EKeyMappingType::FaceButtonDown) \
	op(EKeyMappingType::BumperL) \
	op(EKeyMappingType::BumperR) \
	op(EKeyMappingType::TriggerL) \
	op(EKeyMappingType::TriggerR) \
	op(EKeyMappingType::AnalogL) \
	op(EKeyMappingType::AnalogR) \
	op(EKeyMappingType::AnalogLN) \
	op(EKeyMappingType::AnalogRN) \
	op(EKeyMappingType::DPadUp) \
	op(EKeyMappingType::DPadDown) \
	op(EKeyMappingType::DPadLeft) \
	op(EKeyMappingType::DPadRight) \
	op(EKeyMappingType::TouchPad) \
	op(EKeyMappingType::Options) \
	op(EKeyMappingType::Select) \
	op(EKeyMappingType::BackSpace_Key) \
	op(EKeyMappingType::Tab_Key) \
	op(EKeyMappingType::Enter_Key) \
	op(EKeyMappingType::Pause_Key) \
	op(EKeyMappingType::CapsLock_Key) \
	op(EKeyMappingType::SpaceBar_Key) \
	op(EKeyMappingType::PageUp_Key) \
	op(EKeyMappingType::PageDown_Key) \
	op(EKeyMappingType::End_Key) \
	op(EKeyMappingType::Home_Key) \
	op(EKeyMappingType::Left_Key) \
	op(EKeyMappingType::Up_Key) \
	op(EKeyMappingType::Right_Key) \
	op(EKeyMappingType::Down_Key) \
	op(EKeyMappingType::Insert_Key) \
	op(EKeyMappingType::Delete_Key) \
	op(EKeyMappingType::Zero_Key) \
	op(EKeyMappingType::One_Key) \
	op(EKeyMappingType::Two_Key) \
	op(EKeyMappingType::Three_Key) \
	op(EKeyMappingType::Four_Key) \
	op(EKeyMappingType::Five_Key) \
	op(EKeyMappingType::Six_Key) \
	op(EKeyMappingType::Seven_Key) \
	op(EKeyMappingType::Eight_Key) \
	op(EKeyMappingType::Nine_Key) \
	op(EKeyMappingType::A_Key) \
	op(EKeyMappingType::B_Key) \
	op(EKeyMappingType::C_Key) \
	op(EKeyMappingType::D_Key) \
	op(EKeyMappingType::E_Key) \
	op(EKeyMappingType::F_Key) \
	op(EKeyMappingType::G_Key) \
	op(EKeyMappingType::H_Key) \
	op(EKeyMappingType::I_Key) \
	op(EKeyMappingType::J_Key) \
	op(EKeyMappingType::K_Key) \
	op(EKeyMappingType::L_Key) \
	op(EKeyMappingType::M_Key) \
	op(EKeyMappingType::N_Key) \
	op(EKeyMappingType::O_Key) \
	op(EKeyMappingType::P_Key) \
	op(EKeyMappingType::Q_Key) \
	op(EKeyMappingType::R_Key) \
	op(EKeyMappingType::S_Key) \
	op(EKeyMappingType::T_Key) \
	op(EKeyMappingType::U_Key) \
	op(EKeyMappingType::V_Key) \
	op(EKeyMappingType::W_Key) \
	op(EKeyMappingType::X_Key) \
	op(EKeyMappingType::Y_Key) \
	op(EKeyMappingType::Z_Key) \
	op(EKeyMappingType::NumPadZero_Key) \
	op(EKeyMappingType::NumPadOne_Key) \
	op(EKeyMappingType::NumPadTwo_Key) \
	op(EKeyMappingType::NumPadThree_Key) \
	op(EKeyMappingType::NumPadFour_Key) \
	op(EKeyMappingType::NumPadFive_Key) \
	op(EKeyMappingType::NumPadSix_Key) \
	op(EKeyMappingType::NumPadSeven_Key) \
	op(EKeyMappingType::NumPadEight_Key) \
	op(EKeyMappingType::NumPadNine_Key) \
	op(EKeyMappingType::Multiply_Key) \
	op(EKeyMappingType::Add_Key) \
	op(EKeyMappingType::Subtract_Key) \
	op(EKeyMappingType::Decimal_Key) \
	op(EKeyMappingType::Divide_Key) \
	op(EKeyMappingType::F1_Key) \
	op(EKeyMappingType::F2_Key) \
	op(EKeyMappingType::F3_Key) \
	op(EKeyMappingType::F4_Key) \
	op(EKeyMappingType::F5_Key) \
	op(EKeyMappingType::F6_Key) \
	op(EKeyMappingType::F7_Key) \
	op(EKeyMappingType::F8_Key) \
	op(EKeyMappingType::F9_Key) \
	op(EKeyMappingType::F10_Key) \
	op(EKeyMappingType::F11_Key) \
	op(EKeyMappingType::F12_Key) \
	op(EKeyMappingType::NumLock_Key) \
	op(EKeyMappingType::ScrollLock_Key) \
	op(EKeyMappingType::LeftShift_Key) \
	op(EKeyMappingType::RightShift_Key) \
	op(EKeyMappingType::LeftControl_Key) \
	op(EKeyMappingType::RightControl_Key) \
	op(EKeyMappingType::LeftAlt_Key) \
	op(EKeyMappingType::RightAlt_Key) \
	op(EKeyMappingType::Semicolon_Key) \
	op(EKeyMappingType::Equals_Key) \
	op(EKeyMappingType::Comma_Key) \
	op(EKeyMappingType::Underscore_Key) \
	op(EKeyMappingType::Hyphen_Key) \
	op(EKeyMappingType::Period_Key) \
	op(EKeyMappingType::Slash_Key) \
	op(EKeyMappingType::Tilde_Key) \
	op(EKeyMappingType::LeftBracket_Key) \
	op(EKeyMappingType::Backslash_Key) \
	op(EKeyMappingType::RightBracket_Key) \
	op(EKeyMappingType::Apostrophe_Key) \
	op(EKeyMappingType::Ampersand_Key) \
	op(EKeyMappingType::Asterix_Key) \
	op(EKeyMappingType::Caret_Key) \
	op(EKeyMappingType::Colon_Key) \
	op(EKeyMappingType::Dollar_Key) \
	op(EKeyMappingType::Exclamation_Key) \
	op(EKeyMappingType::LeftParantheses_Key) \
	op(EKeyMappingType::RightParantheses_Key) \
	op(EKeyMappingType::Quote_Key) \
	op(EKeyMappingType::A_AccentGrave_Key) \
	op(EKeyMappingType::E_AccentGrave_Key) \
	op(EKeyMappingType::E_AccentAigu_Key) \
	op(EKeyMappingType::C_Cedille_Key) \
	op(EKeyMappingType::Section_Key) \
	op(EKeyMappingType::MouseScrollUp) \
	op(EKeyMappingType::MouseScrollDown) \
	op(EKeyMappingType::MouseWheelClick) \
	op(EKeyMappingType::MouseButtonL) \
	op(EKeyMappingType::MouseButtonR) 

enum class EKeyMappingType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EKeyMappingType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
