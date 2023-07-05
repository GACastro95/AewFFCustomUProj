// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EELBelt.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELBelt() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELBelt();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* EELBelt_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_EELBelt, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("EELBelt"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<EELBelt>()
	{
		return EELBelt_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELBelt(EELBelt_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("EELBelt"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_EELBelt_Hash() { return 113299288U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_EELBelt()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELBelt"), 0, Get_Z_Construct_UEnum_ELITE_Game_EELBelt_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELBelt::None", (int64)EELBelt::None },
				{ "EELBelt::AEW_World", (int64)EELBelt::AEW_World },
				{ "EELBelt::AEW_TNT", (int64)EELBelt::AEW_TNT },
				{ "EELBelt::AEW_Womens", (int64)EELBelt::AEW_Womens },
				{ "EELBelt::AEW_WorldTagTeam", (int64)EELBelt::AEW_WorldTagTeam },
				{ "EELBelt::FTW", (int64)EELBelt::FTW },
				{ "EELBelt::TBS", (int64)EELBelt::TBS },
				{ "EELBelt::Reserved07", (int64)EELBelt::Reserved07 },
				{ "EELBelt::Reserved08", (int64)EELBelt::Reserved08 },
				{ "EELBelt::Reserved09", (int64)EELBelt::Reserved09 },
				{ "EELBelt::Reserved10", (int64)EELBelt::Reserved10 },
				{ "EELBelt::Max", (int64)EELBelt::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AEW_TNT.Name", "EELBelt::AEW_TNT" },
				{ "AEW_Womens.Name", "EELBelt::AEW_Womens" },
				{ "AEW_World.Name", "EELBelt::AEW_World" },
				{ "AEW_WorldTagTeam.Name", "EELBelt::AEW_WorldTagTeam" },
				{ "BlueprintType", "true" },
				{ "FTW.Name", "EELBelt::FTW" },
				{ "Max.Name", "EELBelt::Max" },
				{ "ModuleRelativePath", "Public/EELBelt.h" },
				{ "None.Name", "EELBelt::None" },
				{ "Reserved07.Name", "EELBelt::Reserved07" },
				{ "Reserved08.Name", "EELBelt::Reserved08" },
				{ "Reserved09.Name", "EELBelt::Reserved09" },
				{ "Reserved10.Name", "EELBelt::Reserved10" },
				{ "TBS.Name", "EELBelt::TBS" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"EELBelt",
				"EELBelt",
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
