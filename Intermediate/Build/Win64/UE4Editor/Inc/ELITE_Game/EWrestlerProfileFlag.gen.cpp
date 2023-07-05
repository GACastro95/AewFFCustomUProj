// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EWrestlerProfileFlag.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEWrestlerProfileFlag() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerProfileFlag();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* EWrestlerProfileFlag_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_EWrestlerProfileFlag, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("EWrestlerProfileFlag"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<EWrestlerProfileFlag>()
	{
		return EWrestlerProfileFlag_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWrestlerProfileFlag(EWrestlerProfileFlag_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("EWrestlerProfileFlag"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_EWrestlerProfileFlag_Hash() { return 4259179241U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerProfileFlag()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWrestlerProfileFlag"), 0, Get_Z_Construct_UEnum_ELITE_Game_EWrestlerProfileFlag_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWrestlerProfileFlag::None", (int64)EWrestlerProfileFlag::None },
				{ "EWrestlerProfileFlag::DisplayHeight", (int64)EWrestlerProfileFlag::DisplayHeight },
				{ "EWrestlerProfileFlag::DisplayWeight", (int64)EWrestlerProfileFlag::DisplayWeight },
				{ "EWrestlerProfileFlag::DisplayHomeTown", (int64)EWrestlerProfileFlag::DisplayHomeTown },
				{ "EWrestlerProfileFlag::DisplayBirthday", (int64)EWrestlerProfileFlag::DisplayBirthday },
				{ "EWrestlerProfileFlag::EditableStreetClothes", (int64)EWrestlerProfileFlag::EditableStreetClothes },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DisplayBirthday.Name", "EWrestlerProfileFlag::DisplayBirthday" },
				{ "DisplayHeight.Name", "EWrestlerProfileFlag::DisplayHeight" },
				{ "DisplayHomeTown.Name", "EWrestlerProfileFlag::DisplayHomeTown" },
				{ "DisplayWeight.Name", "EWrestlerProfileFlag::DisplayWeight" },
				{ "EditableStreetClothes.Name", "EWrestlerProfileFlag::EditableStreetClothes" },
				{ "ModuleRelativePath", "Public/EWrestlerProfileFlag.h" },
				{ "None.Name", "EWrestlerProfileFlag::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"EWrestlerProfileFlag",
				"EWrestlerProfileFlag",
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
