// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EEnvironmentLeanAgainst.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEnvironmentLeanAgainst() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EEnvironmentLeanAgainst();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* EEnvironmentLeanAgainst_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_EEnvironmentLeanAgainst, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("EEnvironmentLeanAgainst"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<EEnvironmentLeanAgainst>()
	{
		return EEnvironmentLeanAgainst_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEnvironmentLeanAgainst(EEnvironmentLeanAgainst_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("EEnvironmentLeanAgainst"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_EEnvironmentLeanAgainst_Hash() { return 1378307186U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_EEnvironmentLeanAgainst()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEnvironmentLeanAgainst"), 0, Get_Z_Construct_UEnum_ELITE_Game_EEnvironmentLeanAgainst_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEnvironmentLeanAgainst::None", (int64)EEnvironmentLeanAgainst::None },
				{ "EEnvironmentLeanAgainst::Lean", (int64)EEnvironmentLeanAgainst::Lean },
				{ "EEnvironmentLeanAgainst::Sit", (int64)EEnvironmentLeanAgainst::Sit },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Lean.Name", "EEnvironmentLeanAgainst::Lean" },
				{ "ModuleRelativePath", "Public/EEnvironmentLeanAgainst.h" },
				{ "None.Name", "EEnvironmentLeanAgainst::None" },
				{ "Sit.Name", "EEnvironmentLeanAgainst::Sit" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"EEnvironmentLeanAgainst",
				"EEnvironmentLeanAgainst",
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
