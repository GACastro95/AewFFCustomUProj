// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ECrowdChantType_N.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECrowdChantType_N() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ECrowdChantType_N();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* ECrowdChantType_N_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_ECrowdChantType_N, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ECrowdChantType_N"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<ECrowdChantType_N>()
	{
		return ECrowdChantType_N_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECrowdChantType_N(ECrowdChantType_N_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("ECrowdChantType_N"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_ECrowdChantType_N_Hash() { return 2041934123U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_ECrowdChantType_N()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECrowdChantType_N"), 0, Get_Z_Construct_UEnum_ELITE_Game_ECrowdChantType_N_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECrowdChantType_N::Momentum_High", (int64)ECrowdChantType_N::Momentum_High },
				{ "ECrowdChantType_N::Momentum_Low", (int64)ECrowdChantType_N::Momentum_Low },
				{ "ECrowdChantType_N::TagTeamPartner", (int64)ECrowdChantType_N::TagTeamPartner },
				{ "ECrowdChantType_N::ECrowdChantType_MAX", (int64)ECrowdChantType_N::ECrowdChantType_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ECrowdChantType_MAX.Hidden", "" },
				{ "ECrowdChantType_MAX.Name", "ECrowdChantType_N::ECrowdChantType_MAX" },
				{ "ModuleRelativePath", "Public/ECrowdChantType_N.h" },
				{ "Momentum_High.Name", "ECrowdChantType_N::Momentum_High" },
				{ "Momentum_Low.Name", "ECrowdChantType_N::Momentum_Low" },
				{ "TagTeamPartner.Name", "ECrowdChantType_N::TagTeamPartner" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"ECrowdChantType_N",
				"ECrowdChantType_N",
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
