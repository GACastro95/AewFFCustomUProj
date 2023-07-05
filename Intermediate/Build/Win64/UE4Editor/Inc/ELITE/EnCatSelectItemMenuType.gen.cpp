// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/EnCatSelectItemMenuType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnCatSelectItemMenuType() {}
// Cross Module References
	ELITE_API UEnum* Z_Construct_UEnum_ELITE_EnCatSelectItemMenuType();
	UPackage* Z_Construct_UPackage__Script_ELITE();
// End Cross Module References
	static UEnum* EnCatSelectItemMenuType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_EnCatSelectItemMenuType, Z_Construct_UPackage__Script_ELITE(), TEXT("EnCatSelectItemMenuType"));
		}
		return Singleton;
	}
	template<> ELITE_API UEnum* StaticEnum<EnCatSelectItemMenuType>()
	{
		return EnCatSelectItemMenuType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EnCatSelectItemMenuType(EnCatSelectItemMenuType_StaticEnum, TEXT("/Script/ELITE"), TEXT("EnCatSelectItemMenuType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_EnCatSelectItemMenuType_Hash() { return 1700007708U; }
	UEnum* Z_Construct_UEnum_ELITE_EnCatSelectItemMenuType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EnCatSelectItemMenuType"), 0, Get_Z_Construct_UEnum_ELITE_EnCatSelectItemMenuType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EnCatSelectItemMenuType::MemberSelect", (int64)EnCatSelectItemMenuType::MemberSelect },
				{ "EnCatSelectItemMenuType::PresetCopy", (int64)EnCatSelectItemMenuType::PresetCopy },
				{ "EnCatSelectItemMenuType::Purchase", (int64)EnCatSelectItemMenuType::Purchase },
				{ "EnCatSelectItemMenuType::RingAnnounce", (int64)EnCatSelectItemMenuType::RingAnnounce },
				{ "EnCatSelectItemMenuType::FanReaction", (int64)EnCatSelectItemMenuType::FanReaction },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FanReaction.Name", "EnCatSelectItemMenuType::FanReaction" },
				{ "MemberSelect.Name", "EnCatSelectItemMenuType::MemberSelect" },
				{ "ModuleRelativePath", "Public/EnCatSelectItemMenuType.h" },
				{ "PresetCopy.Name", "EnCatSelectItemMenuType::PresetCopy" },
				{ "Purchase.Name", "EnCatSelectItemMenuType::Purchase" },
				{ "RingAnnounce.Name", "EnCatSelectItemMenuType::RingAnnounce" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE,
				nullptr,
				"EnCatSelectItemMenuType",
				"EnCatSelectItemMenuType",
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
