// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EELOnlineModeType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELOnlineModeType() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELOnlineModeType();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* EELOnlineModeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_EELOnlineModeType, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("EELOnlineModeType"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<EELOnlineModeType>()
	{
		return EELOnlineModeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELOnlineModeType(EELOnlineModeType_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("EELOnlineModeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_EELOnlineModeType_Hash() { return 1455017029U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_EELOnlineModeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELOnlineModeType"), 0, Get_Z_Construct_UEnum_ELITE_Game_EELOnlineModeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELOnlineModeType::OnlineModeType_RANKED", (int64)EELOnlineModeType::OnlineModeType_RANKED },
				{ "EELOnlineModeType::OnlineModeType_PARTY", (int64)EELOnlineModeType::OnlineModeType_PARTY },
				{ "EELOnlineModeType::OnlineModeType_CASUAL", (int64)EELOnlineModeType::OnlineModeType_CASUAL },
				{ "EELOnlineModeType::OnlineModeType_MINIGAME", (int64)EELOnlineModeType::OnlineModeType_MINIGAME },
				{ "EELOnlineModeType::None", (int64)EELOnlineModeType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EELOnlineModeType.h" },
				{ "None.Name", "EELOnlineModeType::None" },
				{ "OnlineModeType_CASUAL.Name", "EELOnlineModeType::OnlineModeType_CASUAL" },
				{ "OnlineModeType_MINIGAME.Name", "EELOnlineModeType::OnlineModeType_MINIGAME" },
				{ "OnlineModeType_PARTY.Name", "EELOnlineModeType::OnlineModeType_PARTY" },
				{ "OnlineModeType_RANKED.Name", "EELOnlineModeType::OnlineModeType_RANKED" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"EELOnlineModeType",
				"EELOnlineModeType",
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
