// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ESaveDataAccessFlag.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESaveDataAccessFlag() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ESaveDataAccessFlag();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* ESaveDataAccessFlag_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_ESaveDataAccessFlag, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ESaveDataAccessFlag"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<ESaveDataAccessFlag>()
	{
		return ESaveDataAccessFlag_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESaveDataAccessFlag(ESaveDataAccessFlag_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("ESaveDataAccessFlag"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_ESaveDataAccessFlag_Hash() { return 1170426527U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_ESaveDataAccessFlag()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESaveDataAccessFlag"), 0, Get_Z_Construct_UEnum_ELITE_Game_ESaveDataAccessFlag_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESaveDataAccessFlag::None", (int64)ESaveDataAccessFlag::None },
				{ "ESaveDataAccessFlag::Validation", (int64)ESaveDataAccessFlag::Validation },
				{ "ESaveDataAccessFlag::Comparation", (int64)ESaveDataAccessFlag::Comparation },
				{ "ESaveDataAccessFlag::Type", (int64)ESaveDataAccessFlag::Type },
				{ "ESaveDataAccessFlag::ALL", (int64)ESaveDataAccessFlag::ALL },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ALL.Name", "ESaveDataAccessFlag::ALL" },
				{ "BlueprintType", "true" },
				{ "Comparation.Name", "ESaveDataAccessFlag::Comparation" },
				{ "ModuleRelativePath", "Public/ESaveDataAccessFlag.h" },
				{ "None.Name", "ESaveDataAccessFlag::None" },
				{ "Type.Name", "ESaveDataAccessFlag::Type" },
				{ "Validation.Name", "ESaveDataAccessFlag::Validation" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"ESaveDataAccessFlag",
				"ESaveDataAccessFlag",
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
