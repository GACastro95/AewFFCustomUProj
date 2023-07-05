// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/EnCamHelpType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnCamHelpType() {}
// Cross Module References
	ELITE_API UEnum* Z_Construct_UEnum_ELITE_EnCamHelpType();
	UPackage* Z_Construct_UPackage__Script_ELITE();
// End Cross Module References
	static UEnum* EnCamHelpType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_EnCamHelpType, Z_Construct_UPackage__Script_ELITE(), TEXT("EnCamHelpType"));
		}
		return Singleton;
	}
	template<> ELITE_API UEnum* StaticEnum<EnCamHelpType>()
	{
		return EnCamHelpType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EnCamHelpType(EnCamHelpType_StaticEnum, TEXT("/Script/ELITE"), TEXT("EnCamHelpType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_EnCamHelpType_Hash() { return 574488782U; }
	UEnum* Z_Construct_UEnum_ELITE_EnCamHelpType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EnCamHelpType"), 0, Get_Z_Construct_UEnum_ELITE_EnCamHelpType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EnCamHelpType::Back", (int64)EnCamHelpType::Back },
				{ "EnCamHelpType::Practice", (int64)EnCamHelpType::Practice },
				{ "EnCamHelpType::SelectTemplate", (int64)EnCamHelpType::SelectTemplate },
				{ "EnCamHelpType::Favorite", (int64)EnCamHelpType::Favorite },
				{ "EnCamHelpType::AllDeselect", (int64)EnCamHelpType::AllDeselect },
				{ "EnCamHelpType::Temporary", (int64)EnCamHelpType::Temporary },
				{ "EnCamHelpType::Search", (int64)EnCamHelpType::Search },
				{ "EnCamHelpType::UnFavorite", (int64)EnCamHelpType::UnFavorite },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AllDeselect.Name", "EnCamHelpType::AllDeselect" },
				{ "Back.Name", "EnCamHelpType::Back" },
				{ "BlueprintType", "true" },
				{ "Favorite.Name", "EnCamHelpType::Favorite" },
				{ "ModuleRelativePath", "Public/EnCamHelpType.h" },
				{ "Practice.Name", "EnCamHelpType::Practice" },
				{ "Search.Name", "EnCamHelpType::Search" },
				{ "SelectTemplate.Name", "EnCamHelpType::SelectTemplate" },
				{ "Temporary.Name", "EnCamHelpType::Temporary" },
				{ "UnFavorite.Name", "EnCamHelpType::UnFavorite" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE,
				nullptr,
				"EnCamHelpType",
				"EnCamHelpType",
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
