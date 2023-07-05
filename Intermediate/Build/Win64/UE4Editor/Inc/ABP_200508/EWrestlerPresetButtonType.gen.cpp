// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EWrestlerPresetButtonType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEWrestlerPresetButtonType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EWrestlerPresetButtonType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EWrestlerPresetButtonType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EWrestlerPresetButtonType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EWrestlerPresetButtonType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EWrestlerPresetButtonType>()
	{
		return EWrestlerPresetButtonType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWrestlerPresetButtonType(EWrestlerPresetButtonType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EWrestlerPresetButtonType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EWrestlerPresetButtonType_Hash() { return 3425148521U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EWrestlerPresetButtonType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWrestlerPresetButtonType"), 0, Get_Z_Construct_UEnum_ABP_200508_EWrestlerPresetButtonType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWrestlerPresetButtonType::EWrestlerPresetButtonType_Preset", (int64)EWrestlerPresetButtonType::EWrestlerPresetButtonType_Preset },
				{ "EWrestlerPresetButtonType::EWrestlerPresetButtonType_Start", (int64)EWrestlerPresetButtonType::EWrestlerPresetButtonType_Start },
				{ "EWrestlerPresetButtonType::EWrestlerPresetButtonType_NUM", (int64)EWrestlerPresetButtonType::EWrestlerPresetButtonType_NUM },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EWrestlerPresetButtonType_NUM.Name", "EWrestlerPresetButtonType::EWrestlerPresetButtonType_NUM" },
				{ "EWrestlerPresetButtonType_Preset.Name", "EWrestlerPresetButtonType::EWrestlerPresetButtonType_Preset" },
				{ "EWrestlerPresetButtonType_Start.Name", "EWrestlerPresetButtonType::EWrestlerPresetButtonType_Start" },
				{ "ModuleRelativePath", "Public/EWrestlerPresetButtonType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EWrestlerPresetButtonType",
				"EWrestlerPresetButtonType",
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
