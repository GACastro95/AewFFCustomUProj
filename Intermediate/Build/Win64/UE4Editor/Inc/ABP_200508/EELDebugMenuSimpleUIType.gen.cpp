// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EELDebugMenuSimpleUIType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELDebugMenuSimpleUIType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELDebugMenuSimpleUIType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EELDebugMenuSimpleUIType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EELDebugMenuSimpleUIType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EELDebugMenuSimpleUIType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EELDebugMenuSimpleUIType>()
	{
		return EELDebugMenuSimpleUIType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELDebugMenuSimpleUIType(EELDebugMenuSimpleUIType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EELDebugMenuSimpleUIType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EELDebugMenuSimpleUIType_Hash() { return 4077605990U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EELDebugMenuSimpleUIType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELDebugMenuSimpleUIType"), 0, Get_Z_Construct_UEnum_ABP_200508_EELDebugMenuSimpleUIType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELDebugMenuSimpleUIType::Text", (int64)EELDebugMenuSimpleUIType::Text },
				{ "EELDebugMenuSimpleUIType::TextWrapped", (int64)EELDebugMenuSimpleUIType::TextWrapped },
				{ "EELDebugMenuSimpleUIType::TextBox", (int64)EELDebugMenuSimpleUIType::TextBox },
				{ "EELDebugMenuSimpleUIType::TextBoxForInt", (int64)EELDebugMenuSimpleUIType::TextBoxForInt },
				{ "EELDebugMenuSimpleUIType::TextBoxForFloat", (int64)EELDebugMenuSimpleUIType::TextBoxForFloat },
				{ "EELDebugMenuSimpleUIType::CheckBox", (int64)EELDebugMenuSimpleUIType::CheckBox },
				{ "EELDebugMenuSimpleUIType::ComboBox", (int64)EELDebugMenuSimpleUIType::ComboBox },
				{ "EELDebugMenuSimpleUIType::SliderBarForInt", (int64)EELDebugMenuSimpleUIType::SliderBarForInt },
				{ "EELDebugMenuSimpleUIType::SliderBarForFloat", (int64)EELDebugMenuSimpleUIType::SliderBarForFloat },
				{ "EELDebugMenuSimpleUIType::SliderBarForAngle", (int64)EELDebugMenuSimpleUIType::SliderBarForAngle },
				{ "EELDebugMenuSimpleUIType::Button", (int64)EELDebugMenuSimpleUIType::Button },
				{ "EELDebugMenuSimpleUIType::Spacer", (int64)EELDebugMenuSimpleUIType::Spacer },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Button.Name", "EELDebugMenuSimpleUIType::Button" },
				{ "CheckBox.Name", "EELDebugMenuSimpleUIType::CheckBox" },
				{ "ComboBox.Name", "EELDebugMenuSimpleUIType::ComboBox" },
				{ "ModuleRelativePath", "Public/EELDebugMenuSimpleUIType.h" },
				{ "SliderBarForAngle.Name", "EELDebugMenuSimpleUIType::SliderBarForAngle" },
				{ "SliderBarForFloat.Name", "EELDebugMenuSimpleUIType::SliderBarForFloat" },
				{ "SliderBarForInt.Name", "EELDebugMenuSimpleUIType::SliderBarForInt" },
				{ "Spacer.Name", "EELDebugMenuSimpleUIType::Spacer" },
				{ "Text.Name", "EELDebugMenuSimpleUIType::Text" },
				{ "TextBox.Name", "EELDebugMenuSimpleUIType::TextBox" },
				{ "TextBoxForFloat.Name", "EELDebugMenuSimpleUIType::TextBoxForFloat" },
				{ "TextBoxForInt.Name", "EELDebugMenuSimpleUIType::TextBoxForInt" },
				{ "TextWrapped.Name", "EELDebugMenuSimpleUIType::TextWrapped" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EELDebugMenuSimpleUIType",
				"EELDebugMenuSimpleUIType",
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
