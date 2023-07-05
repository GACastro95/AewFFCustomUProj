// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSPlayerRank.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSPlayerRank() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSPlayerRank();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSPlayerRank_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSPlayerRank, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSPlayerRank"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSPlayerRank>()
	{
		return ESSPlayerRank_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSPlayerRank(ESSPlayerRank_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSPlayerRank"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSPlayerRank_Hash() { return 3205438479U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSPlayerRank()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSPlayerRank"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSPlayerRank_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSPlayerRank::None", (int64)ESSPlayerRank::None },
				{ "ESSPlayerRank::ROOKIE", (int64)ESSPlayerRank::ROOKIE },
				{ "ESSPlayerRank::INDIE_WRESTLER", (int64)ESSPlayerRank::INDIE_WRESTLER },
				{ "ESSPlayerRank::INDIE_STAR", (int64)ESSPlayerRank::INDIE_STAR },
				{ "ESSPlayerRank::INDIE_CHAMPION", (int64)ESSPlayerRank::INDIE_CHAMPION },
				{ "ESSPlayerRank::DARK_WRESTLER", (int64)ESSPlayerRank::DARK_WRESTLER },
				{ "ESSPlayerRank::DARK_STAR", (int64)ESSPlayerRank::DARK_STAR },
				{ "ESSPlayerRank::DYNAMITE_WRESTLER", (int64)ESSPlayerRank::DYNAMITE_WRESTLER },
				{ "ESSPlayerRank::DYNAMITE_STAR", (int64)ESSPlayerRank::DYNAMITE_STAR },
				{ "ESSPlayerRank::MAIN_EVENTER", (int64)ESSPlayerRank::MAIN_EVENTER },
				{ "ESSPlayerRank::ELITE", (int64)ESSPlayerRank::ELITE },
				{ "ESSPlayerRank::WORLD_CHAMPION", (int64)ESSPlayerRank::WORLD_CHAMPION },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DARK_STAR.Name", "ESSPlayerRank::DARK_STAR" },
				{ "DARK_WRESTLER.Name", "ESSPlayerRank::DARK_WRESTLER" },
				{ "DYNAMITE_STAR.Name", "ESSPlayerRank::DYNAMITE_STAR" },
				{ "DYNAMITE_WRESTLER.Name", "ESSPlayerRank::DYNAMITE_WRESTLER" },
				{ "ELITE.Name", "ESSPlayerRank::ELITE" },
				{ "INDIE_CHAMPION.Name", "ESSPlayerRank::INDIE_CHAMPION" },
				{ "INDIE_STAR.Name", "ESSPlayerRank::INDIE_STAR" },
				{ "INDIE_WRESTLER.Name", "ESSPlayerRank::INDIE_WRESTLER" },
				{ "MAIN_EVENTER.Name", "ESSPlayerRank::MAIN_EVENTER" },
				{ "ModuleRelativePath", "Public/ESSPlayerRank.h" },
				{ "None.Name", "ESSPlayerRank::None" },
				{ "ROOKIE.Name", "ESSPlayerRank::ROOKIE" },
				{ "WORLD_CHAMPION.Name", "ESSPlayerRank::WORLD_CHAMPION" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSPlayerRank",
				"ESSPlayerRank",
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
