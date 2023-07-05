// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EStickinputDir.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEStickinputDir() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EStickinputDir();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* EStickinputDir_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_EStickinputDir, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("EStickinputDir"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<EStickinputDir>()
	{
		return EStickinputDir_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStickinputDir(EStickinputDir_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("EStickinputDir"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_EStickinputDir_Hash() { return 57994495U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_EStickinputDir()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStickinputDir"), 0, Get_Z_Construct_UEnum_ELITE_Game_EStickinputDir_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStickinputDir::None", (int64)EStickinputDir::None },
				{ "EStickinputDir::Up", (int64)EStickinputDir::Up },
				{ "EStickinputDir::Down", (int64)EStickinputDir::Down },
				{ "EStickinputDir::Left", (int64)EStickinputDir::Left },
				{ "EStickinputDir::Right", (int64)EStickinputDir::Right },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Down.Name", "EStickinputDir::Down" },
				{ "Left.Name", "EStickinputDir::Left" },
				{ "ModuleRelativePath", "Public/EStickinputDir.h" },
				{ "None.Name", "EStickinputDir::None" },
				{ "Right.Name", "EStickinputDir::Right" },
				{ "Up.Name", "EStickinputDir::Up" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"EStickinputDir",
				"EStickinputDir",
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
