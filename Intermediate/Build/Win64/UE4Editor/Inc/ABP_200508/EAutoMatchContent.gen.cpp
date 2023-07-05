// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EAutoMatchContent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAutoMatchContent() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EAutoMatchContent();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EAutoMatchContent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EAutoMatchContent, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EAutoMatchContent"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EAutoMatchContent>()
	{
		return EAutoMatchContent_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAutoMatchContent(EAutoMatchContent_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EAutoMatchContent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EAutoMatchContent_Hash() { return 150336006U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EAutoMatchContent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAutoMatchContent"), 0, Get_Z_Construct_UEnum_ABP_200508_EAutoMatchContent_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAutoMatchContent::AutoMatch", (int64)EAutoMatchContent::AutoMatch },
				{ "EAutoMatchContent::MatchType", (int64)EAutoMatchContent::MatchType },
				{ "EAutoMatchContent::Arena", (int64)EAutoMatchContent::Arena },
				{ "EAutoMatchContent::RosterType1", (int64)EAutoMatchContent::RosterType1 },
				{ "EAutoMatchContent::Roster1", (int64)EAutoMatchContent::Roster1 },
				{ "EAutoMatchContent::RosterType2", (int64)EAutoMatchContent::RosterType2 },
				{ "EAutoMatchContent::Roster2", (int64)EAutoMatchContent::Roster2 },
				{ "EAutoMatchContent::RosterType3", (int64)EAutoMatchContent::RosterType3 },
				{ "EAutoMatchContent::Roster3", (int64)EAutoMatchContent::Roster3 },
				{ "EAutoMatchContent::RosterType4", (int64)EAutoMatchContent::RosterType4 },
				{ "EAutoMatchContent::Roster4", (int64)EAutoMatchContent::Roster4 },
				{ "EAutoMatchContent::MatchCount", (int64)EAutoMatchContent::MatchCount },
				{ "EAutoMatchContent::AutoMatchEndTime", (int64)EAutoMatchContent::AutoMatchEndTime },
				{ "EAutoMatchContent::TableName", (int64)EAutoMatchContent::TableName },
				{ "EAutoMatchContent::AutoMatchContentMax", (int64)EAutoMatchContent::AutoMatchContentMax },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Arena.Name", "EAutoMatchContent::Arena" },
				{ "AutoMatch.Name", "EAutoMatchContent::AutoMatch" },
				{ "AutoMatchContentMax.Name", "EAutoMatchContent::AutoMatchContentMax" },
				{ "AutoMatchEndTime.Name", "EAutoMatchContent::AutoMatchEndTime" },
				{ "BlueprintType", "true" },
				{ "MatchCount.Name", "EAutoMatchContent::MatchCount" },
				{ "MatchType.Name", "EAutoMatchContent::MatchType" },
				{ "ModuleRelativePath", "Public/EAutoMatchContent.h" },
				{ "Roster1.Name", "EAutoMatchContent::Roster1" },
				{ "Roster2.Name", "EAutoMatchContent::Roster2" },
				{ "Roster3.Name", "EAutoMatchContent::Roster3" },
				{ "Roster4.Name", "EAutoMatchContent::Roster4" },
				{ "RosterType1.Name", "EAutoMatchContent::RosterType1" },
				{ "RosterType2.Name", "EAutoMatchContent::RosterType2" },
				{ "RosterType3.Name", "EAutoMatchContent::RosterType3" },
				{ "RosterType4.Name", "EAutoMatchContent::RosterType4" },
				{ "TableName.Name", "EAutoMatchContent::TableName" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EAutoMatchContent",
				"EAutoMatchContent",
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
