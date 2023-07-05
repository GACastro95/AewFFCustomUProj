// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ESaveDataProcessType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESaveDataProcessType() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ESaveDataProcessType();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* ESaveDataProcessType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_ESaveDataProcessType, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ESaveDataProcessType"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<ESaveDataProcessType>()
	{
		return ESaveDataProcessType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESaveDataProcessType(ESaveDataProcessType_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("ESaveDataProcessType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_ESaveDataProcessType_Hash() { return 2109199055U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_ESaveDataProcessType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESaveDataProcessType"), 0, Get_Z_Construct_UEnum_ELITE_Game_ESaveDataProcessType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESaveDataProcessType::Reader", (int64)ESaveDataProcessType::Reader },
				{ "ESaveDataProcessType::Writer", (int64)ESaveDataProcessType::Writer },
				{ "ESaveDataProcessType::Uploader", (int64)ESaveDataProcessType::Uploader },
				{ "ESaveDataProcessType::Downloader", (int64)ESaveDataProcessType::Downloader },
				{ "ESaveDataProcessType::Deleter", (int64)ESaveDataProcessType::Deleter },
				{ "ESaveDataProcessType::Encrypter", (int64)ESaveDataProcessType::Encrypter },
				{ "ESaveDataProcessType::Validator", (int64)ESaveDataProcessType::Validator },
				{ "ESaveDataProcessType::GetQuota", (int64)ESaveDataProcessType::GetQuota },
				{ "ESaveDataProcessType::Comparator", (int64)ESaveDataProcessType::Comparator },
				{ "ESaveDataProcessType::ConvertPS5FromPS4", (int64)ESaveDataProcessType::ConvertPS5FromPS4 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comparator.Name", "ESaveDataProcessType::Comparator" },
				{ "ConvertPS5FromPS4.Name", "ESaveDataProcessType::ConvertPS5FromPS4" },
				{ "Deleter.Name", "ESaveDataProcessType::Deleter" },
				{ "Downloader.Name", "ESaveDataProcessType::Downloader" },
				{ "Encrypter.Name", "ESaveDataProcessType::Encrypter" },
				{ "GetQuota.Name", "ESaveDataProcessType::GetQuota" },
				{ "ModuleRelativePath", "Public/ESaveDataProcessType.h" },
				{ "Reader.Name", "ESaveDataProcessType::Reader" },
				{ "Uploader.Name", "ESaveDataProcessType::Uploader" },
				{ "Validator.Name", "ESaveDataProcessType::Validator" },
				{ "Writer.Name", "ESaveDataProcessType::Writer" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"ESaveDataProcessType",
				"ESaveDataProcessType",
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
