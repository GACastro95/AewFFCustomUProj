// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/yEnInputKey.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeyEnInputKey() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_yEnInputKey();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* yEnInputKey_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_yEnInputKey, Z_Construct_UPackage__Script_ABP_200508(), TEXT("yEnInputKey"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<yEnInputKey>()
	{
		return yEnInputKey_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_yEnInputKey(yEnInputKey_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("yEnInputKey"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_yEnInputKey_Hash() { return 4061349781U; }
	UEnum* Z_Construct_UEnum_ABP_200508_yEnInputKey()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("yEnInputKey"), 0, Get_Z_Construct_UEnum_ABP_200508_yEnInputKey_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "yEnInputKey::None", (int64)yEnInputKey::None },
				{ "yEnInputKey::FaceButtonUp", (int64)yEnInputKey::FaceButtonUp },
				{ "yEnInputKey::FaceButtonLeft", (int64)yEnInputKey::FaceButtonLeft },
				{ "yEnInputKey::FaceButtonDown", (int64)yEnInputKey::FaceButtonDown },
				{ "yEnInputKey::FaceButtonRight", (int64)yEnInputKey::FaceButtonRight },
				{ "yEnInputKey::DPadUp", (int64)yEnInputKey::DPadUp },
				{ "yEnInputKey::DPadLeft", (int64)yEnInputKey::DPadLeft },
				{ "yEnInputKey::DPadDown", (int64)yEnInputKey::DPadDown },
				{ "yEnInputKey::DPadRight", (int64)yEnInputKey::DPadRight },
				{ "yEnInputKey::BumperL", (int64)yEnInputKey::BumperL },
				{ "yEnInputKey::TriggerL", (int64)yEnInputKey::TriggerL },
				{ "yEnInputKey::BumperR", (int64)yEnInputKey::BumperR },
				{ "yEnInputKey::TriggerR", (int64)yEnInputKey::TriggerR },
				{ "yEnInputKey::Start", (int64)yEnInputKey::Start },
				{ "yEnInputKey::Select", (int64)yEnInputKey::Select },
				{ "yEnInputKey::AnalogL", (int64)yEnInputKey::AnalogL },
				{ "yEnInputKey::AnalogR", (int64)yEnInputKey::AnalogR },
				{ "yEnInputKey::LStickUp", (int64)yEnInputKey::LStickUp },
				{ "yEnInputKey::LStickLeft", (int64)yEnInputKey::LStickLeft },
				{ "yEnInputKey::LStickDown", (int64)yEnInputKey::LStickDown },
				{ "yEnInputKey::LStickRight", (int64)yEnInputKey::LStickRight },
				{ "yEnInputKey::RStickUp", (int64)yEnInputKey::RStickUp },
				{ "yEnInputKey::RStickLeft", (int64)yEnInputKey::RStickLeft },
				{ "yEnInputKey::RStickDown", (int64)yEnInputKey::RStickDown },
				{ "yEnInputKey::RStickRight", (int64)yEnInputKey::RStickRight },
				{ "yEnInputKey::MouseButtonR", (int64)yEnInputKey::MouseButtonR },
				{ "yEnInputKey::RotationBrotherLeft", (int64)yEnInputKey::RotationBrotherLeft },
				{ "yEnInputKey::RotationBrotherRight", (int64)yEnInputKey::RotationBrotherRight },
				{ "yEnInputKey::CreateSessionKey", (int64)yEnInputKey::CreateSessionKey },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AnalogL.Name", "yEnInputKey::AnalogL" },
				{ "AnalogR.Name", "yEnInputKey::AnalogR" },
				{ "BumperL.Name", "yEnInputKey::BumperL" },
				{ "BumperR.Name", "yEnInputKey::BumperR" },
				{ "CreateSessionKey.Name", "yEnInputKey::CreateSessionKey" },
				{ "DPadDown.Name", "yEnInputKey::DPadDown" },
				{ "DPadLeft.Name", "yEnInputKey::DPadLeft" },
				{ "DPadRight.Name", "yEnInputKey::DPadRight" },
				{ "DPadUp.Name", "yEnInputKey::DPadUp" },
				{ "FaceButtonDown.Name", "yEnInputKey::FaceButtonDown" },
				{ "FaceButtonLeft.Name", "yEnInputKey::FaceButtonLeft" },
				{ "FaceButtonRight.Name", "yEnInputKey::FaceButtonRight" },
				{ "FaceButtonUp.Name", "yEnInputKey::FaceButtonUp" },
				{ "LStickDown.Name", "yEnInputKey::LStickDown" },
				{ "LStickLeft.Name", "yEnInputKey::LStickLeft" },
				{ "LStickRight.Name", "yEnInputKey::LStickRight" },
				{ "LStickUp.Name", "yEnInputKey::LStickUp" },
				{ "ModuleRelativePath", "Public/yEnInputKey.h" },
				{ "MouseButtonR.Name", "yEnInputKey::MouseButtonR" },
				{ "None.Name", "yEnInputKey::None" },
				{ "RotationBrotherLeft.Name", "yEnInputKey::RotationBrotherLeft" },
				{ "RotationBrotherRight.Name", "yEnInputKey::RotationBrotherRight" },
				{ "RStickDown.Name", "yEnInputKey::RStickDown" },
				{ "RStickLeft.Name", "yEnInputKey::RStickLeft" },
				{ "RStickRight.Name", "yEnInputKey::RStickRight" },
				{ "RStickUp.Name", "yEnInputKey::RStickUp" },
				{ "Select.Name", "yEnInputKey::Select" },
				{ "Start.Name", "yEnInputKey::Start" },
				{ "TriggerL.Name", "yEnInputKey::TriggerL" },
				{ "TriggerR.Name", "yEnInputKey::TriggerR" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"yEnInputKey",
				"yEnInputKey",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
