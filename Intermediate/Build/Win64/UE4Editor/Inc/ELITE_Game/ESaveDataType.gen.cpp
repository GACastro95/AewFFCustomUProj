// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ESaveDataType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESaveDataType() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ESaveDataType();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* ESaveDataType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_ESaveDataType, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ESaveDataType"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<ESaveDataType>()
	{
		return ESaveDataType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESaveDataType(ESaveDataType_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("ESaveDataType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_ESaveDataType_Hash() { return 325190586U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_ESaveDataType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESaveDataType"), 0, Get_Z_Construct_UEnum_ELITE_Game_ESaveDataType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESaveDataType::Unknown", (int64)ESaveDataType::Unknown },
				{ "ESaveDataType::GameSystem", (int64)ESaveDataType::GameSystem },
				{ "ESaveDataType::PlayerData", (int64)ESaveDataType::PlayerData },
				{ "ESaveDataType::OnlineInfo", (int64)ESaveDataType::OnlineInfo },
				{ "ESaveDataType::JukeBox", (int64)ESaveDataType::JukeBox },
				{ "ESaveDataType::Achievement", (int64)ESaveDataType::Achievement },
				{ "ESaveDataType::MiniGame", (int64)ESaveDataType::MiniGame },
				{ "ESaveDataType::Jpeg", (int64)ESaveDataType::Jpeg },
				{ "ESaveDataType::PNG", (int64)ESaveDataType::PNG },
				{ "ESaveDataType::UGC_Room", (int64)ESaveDataType::UGC_Room },
				{ "ESaveDataType::UGC_Wrestler", (int64)ESaveDataType::UGC_Wrestler },
				{ "ESaveDataType::UGC_Arena", (int64)ESaveDataType::UGC_Arena },
				{ "ESaveDataType::UGC_Team", (int64)ESaveDataType::UGC_Team },
				{ "ESaveDataType::CareerMode", (int64)ESaveDataType::CareerMode },
				{ "ESaveDataType::CareerModeSnapshot", (int64)ESaveDataType::CareerModeSnapshot },
				{ "ESaveDataType::CareerModeSystem", (int64)ESaveDataType::CareerModeSystem },
				{ "ESaveDataType::SSMode", (int64)ESaveDataType::SSMode },
				{ "ESaveDataType::Max", (int64)ESaveDataType::Max },
				{ "ESaveDataType::KindStart", (int64)ESaveDataType::KindStart },
				{ "ESaveDataType::KindEnd", (int64)ESaveDataType::KindEnd },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Achievement.Name", "ESaveDataType::Achievement" },
				{ "BlueprintType", "true" },
				{ "CareerMode.Name", "ESaveDataType::CareerMode" },
				{ "CareerModeSnapshot.Name", "ESaveDataType::CareerModeSnapshot" },
				{ "CareerModeSystem.Name", "ESaveDataType::CareerModeSystem" },
				{ "GameSystem.Name", "ESaveDataType::GameSystem" },
				{ "Jpeg.Name", "ESaveDataType::Jpeg" },
				{ "JukeBox.Name", "ESaveDataType::JukeBox" },
				{ "KindEnd.Name", "ESaveDataType::KindEnd" },
				{ "KindStart.Name", "ESaveDataType::KindStart" },
				{ "Max.Name", "ESaveDataType::Max" },
				{ "MiniGame.Name", "ESaveDataType::MiniGame" },
				{ "ModuleRelativePath", "Public/ESaveDataType.h" },
				{ "OnlineInfo.Name", "ESaveDataType::OnlineInfo" },
				{ "PlayerData.Name", "ESaveDataType::PlayerData" },
				{ "PNG.Name", "ESaveDataType::PNG" },
				{ "SSMode.Name", "ESaveDataType::SSMode" },
				{ "UGC_Arena.Name", "ESaveDataType::UGC_Arena" },
				{ "UGC_Room.Name", "ESaveDataType::UGC_Room" },
				{ "UGC_Team.Name", "ESaveDataType::UGC_Team" },
				{ "UGC_Wrestler.Name", "ESaveDataType::UGC_Wrestler" },
				{ "Unknown.Name", "ESaveDataType::Unknown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"ESaveDataType",
				"ESaveDataType",
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
