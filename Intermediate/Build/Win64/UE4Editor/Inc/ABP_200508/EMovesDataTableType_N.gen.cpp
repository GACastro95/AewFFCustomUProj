// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EMovesDataTableType_N.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMovesDataTableType_N() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMovesDataTableType_N();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EMovesDataTableType_N_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EMovesDataTableType_N, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EMovesDataTableType_N"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EMovesDataTableType_N>()
	{
		return EMovesDataTableType_N_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovesDataTableType_N(EMovesDataTableType_N_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EMovesDataTableType_N"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EMovesDataTableType_N_Hash() { return 4080388836U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EMovesDataTableType_N()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovesDataTableType_N"), 0, Get_Z_Construct_UEnum_ABP_200508_EMovesDataTableType_N_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovesDataTableType_N::StandStrike", (int64)EMovesDataTableType_N::StandStrike },
				{ "EMovesDataTableType_N::DownGrapple", (int64)EMovesDataTableType_N::DownGrapple },
				{ "EMovesDataTableType_N::ChainStrike", (int64)EMovesDataTableType_N::ChainStrike },
				{ "EMovesDataTableType_N::ChainGrapple", (int64)EMovesDataTableType_N::ChainGrapple },
				{ "EMovesDataTableType_N::SpecialStrike", (int64)EMovesDataTableType_N::SpecialStrike },
				{ "EMovesDataTableType_N::SpecialGrapple", (int64)EMovesDataTableType_N::SpecialGrapple },
				{ "EMovesDataTableType_N::CornerDiving", (int64)EMovesDataTableType_N::CornerDiving },
				{ "EMovesDataTableType_N::ApronSpringboard", (int64)EMovesDataTableType_N::ApronSpringboard },
				{ "EMovesDataTableType_N::CornerSpringboard", (int64)EMovesDataTableType_N::CornerSpringboard },
				{ "EMovesDataTableType_N::RopeSpringboard", (int64)EMovesDataTableType_N::RopeSpringboard },
				{ "EMovesDataTableType_N::TwoPlatoons", (int64)EMovesDataTableType_N::TwoPlatoons },
				{ "EMovesDataTableType_N::Reset", (int64)EMovesDataTableType_N::Reset },
				{ "EMovesDataTableType_N::EMovesDataTableType_MAX", (int64)EMovesDataTableType_N::EMovesDataTableType_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ApronSpringboard.Name", "EMovesDataTableType_N::ApronSpringboard" },
				{ "BlueprintType", "true" },
				{ "ChainGrapple.Name", "EMovesDataTableType_N::ChainGrapple" },
				{ "ChainStrike.Name", "EMovesDataTableType_N::ChainStrike" },
				{ "CornerDiving.Name", "EMovesDataTableType_N::CornerDiving" },
				{ "CornerSpringboard.Name", "EMovesDataTableType_N::CornerSpringboard" },
				{ "DownGrapple.Name", "EMovesDataTableType_N::DownGrapple" },
				{ "EMovesDataTableType_MAX.Hidden", "" },
				{ "EMovesDataTableType_MAX.Name", "EMovesDataTableType_N::EMovesDataTableType_MAX" },
				{ "ModuleRelativePath", "Public/EMovesDataTableType_N.h" },
				{ "Reset.Name", "EMovesDataTableType_N::Reset" },
				{ "RopeSpringboard.Name", "EMovesDataTableType_N::RopeSpringboard" },
				{ "SpecialGrapple.Name", "EMovesDataTableType_N::SpecialGrapple" },
				{ "SpecialStrike.Name", "EMovesDataTableType_N::SpecialStrike" },
				{ "StandStrike.Name", "EMovesDataTableType_N::StandStrike" },
				{ "TwoPlatoons.Name", "EMovesDataTableType_N::TwoPlatoons" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EMovesDataTableType_N",
				"EMovesDataTableType_N",
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
