// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/EnCatSettingListItemType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnCatSettingListItemType() {}
// Cross Module References
	ELITE_API UEnum* Z_Construct_UEnum_ELITE_EnCatSettingListItemType();
	UPackage* Z_Construct_UPackage__Script_ELITE();
// End Cross Module References
	static UEnum* EnCatSettingListItemType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_EnCatSettingListItemType, Z_Construct_UPackage__Script_ELITE(), TEXT("EnCatSettingListItemType"));
		}
		return Singleton;
	}
	template<> ELITE_API UEnum* StaticEnum<EnCatSettingListItemType>()
	{
		return EnCatSettingListItemType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EnCatSettingListItemType(EnCatSettingListItemType_StaticEnum, TEXT("/Script/ELITE"), TEXT("EnCatSettingListItemType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_EnCatSettingListItemType_Hash() { return 831753703U; }
	UEnum* Z_Construct_UEnum_ELITE_EnCatSettingListItemType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EnCatSettingListItemType"), 0, Get_Z_Construct_UEnum_ELITE_EnCatSettingListItemType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EnCatSettingListItemType::TeamName", (int64)EnCatSettingListItemType::TeamName },
				{ "EnCatSettingListItemType::SNSName", (int64)EnCatSettingListItemType::SNSName },
				{ "EnCatSettingListItemType::AnnouncerName", (int64)EnCatSettingListItemType::AnnouncerName },
				{ "EnCatSettingListItemType::FanReaction", (int64)EnCatSettingListItemType::FanReaction },
				{ "EnCatSettingListItemType::Purchase", (int64)EnCatSettingListItemType::Purchase },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AnnouncerName.Name", "EnCatSettingListItemType::AnnouncerName" },
				{ "BlueprintType", "true" },
				{ "FanReaction.Name", "EnCatSettingListItemType::FanReaction" },
				{ "ModuleRelativePath", "Public/EnCatSettingListItemType.h" },
				{ "Purchase.Name", "EnCatSettingListItemType::Purchase" },
				{ "SNSName.Name", "EnCatSettingListItemType::SNSName" },
				{ "TeamName.Name", "EnCatSettingListItemType::TeamName" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE,
				nullptr,
				"EnCatSettingListItemType",
				"EnCatSettingListItemType",
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
