// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSLogIconType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSLogIconType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSLogIconType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSLogIconType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSLogIconType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSLogIconType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSLogIconType>()
	{
		return ESSLogIconType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSLogIconType(ESSLogIconType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSLogIconType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSLogIconType_Hash() { return 1068110324U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSLogIconType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSLogIconType"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSLogIconType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSLogIconType::Skill", (int64)ESSLogIconType::Skill },
				{ "ESSLogIconType::Melee", (int64)ESSLogIconType::Melee },
				{ "ESSLogIconType::Gun", (int64)ESSLogIconType::Gun },
				{ "ESSLogIconType::Throw", (int64)ESSLogIconType::Throw },
				{ "ESSLogIconType::Cart", (int64)ESSLogIconType::Cart },
				{ "ESSLogIconType::Horse", (int64)ESSLogIconType::Horse },
				{ "ESSLogIconType::Finisher", (int64)ESSLogIconType::Finisher },
				{ "ESSLogIconType::Fall", (int64)ESSLogIconType::Fall },
				{ "ESSLogIconType::Involve", (int64)ESSLogIconType::Involve },
				{ "ESSLogIconType::TreasureBox", (int64)ESSLogIconType::TreasureBox },
				{ "ESSLogIconType::Common", (int64)ESSLogIconType::Common },
				{ "ESSLogIconType::None", (int64)ESSLogIconType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Cart.Name", "ESSLogIconType::Cart" },
				{ "Common.Name", "ESSLogIconType::Common" },
				{ "Fall.Name", "ESSLogIconType::Fall" },
				{ "Finisher.Name", "ESSLogIconType::Finisher" },
				{ "Gun.Name", "ESSLogIconType::Gun" },
				{ "Horse.Name", "ESSLogIconType::Horse" },
				{ "Involve.Name", "ESSLogIconType::Involve" },
				{ "Melee.Name", "ESSLogIconType::Melee" },
				{ "ModuleRelativePath", "Public/ESSLogIconType.h" },
				{ "None.Name", "ESSLogIconType::None" },
				{ "Skill.Name", "ESSLogIconType::Skill" },
				{ "Throw.Name", "ESSLogIconType::Throw" },
				{ "TreasureBox.Name", "ESSLogIconType::TreasureBox" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSLogIconType",
				"ESSLogIconType",
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
