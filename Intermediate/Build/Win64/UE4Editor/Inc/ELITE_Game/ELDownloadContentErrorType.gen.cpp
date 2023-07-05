// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELDownloadContentErrorType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELDownloadContentErrorType() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ELDownloadContentErrorType();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* ELDownloadContentErrorType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_ELDownloadContentErrorType, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ELDownloadContentErrorType"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<ELDownloadContentErrorType>()
	{
		return ELDownloadContentErrorType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELDownloadContentErrorType(ELDownloadContentErrorType_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("ELDownloadContentErrorType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_ELDownloadContentErrorType_Hash() { return 2848393792U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_ELDownloadContentErrorType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELDownloadContentErrorType"), 0, Get_Z_Construct_UEnum_ELITE_Game_ELDownloadContentErrorType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELDownloadContentErrorType::None", (int64)ELDownloadContentErrorType::None },
				{ "ELDownloadContentErrorType::ShortageVersion", (int64)ELDownloadContentErrorType::ShortageVersion },
				{ "ELDownloadContentErrorType::NotFoundItem", (int64)ELDownloadContentErrorType::NotFoundItem },
				{ "ELDownloadContentErrorType::Max", (int64)ELDownloadContentErrorType::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Max.Name", "ELDownloadContentErrorType::Max" },
				{ "ModuleRelativePath", "Public/ELDownloadContentErrorType.h" },
				{ "None.Name", "ELDownloadContentErrorType::None" },
				{ "NotFoundItem.Name", "ELDownloadContentErrorType::NotFoundItem" },
				{ "ShortageVersion.Name", "ELDownloadContentErrorType::ShortageVersion" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"ELDownloadContentErrorType",
				"ELDownloadContentErrorType",
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
