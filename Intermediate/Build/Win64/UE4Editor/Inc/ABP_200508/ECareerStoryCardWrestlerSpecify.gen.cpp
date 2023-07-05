// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerStoryCardWrestlerSpecify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerStoryCardWrestlerSpecify() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerStoryCardWrestlerSpecify();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerStoryCardWrestlerSpecify_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerStoryCardWrestlerSpecify, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerStoryCardWrestlerSpecify"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerStoryCardWrestlerSpecify>()
	{
		return ECareerStoryCardWrestlerSpecify_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerStoryCardWrestlerSpecify(ECareerStoryCardWrestlerSpecify_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerStoryCardWrestlerSpecify"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerStoryCardWrestlerSpecify_Hash() { return 2166719575U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerStoryCardWrestlerSpecify()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerStoryCardWrestlerSpecify"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerStoryCardWrestlerSpecify_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerStoryCardWrestlerSpecify::None", (int64)ECareerStoryCardWrestlerSpecify::None },
				{ "ECareerStoryCardWrestlerSpecify::Player", (int64)ECareerStoryCardWrestlerSpecify::Player },
				{ "ECareerStoryCardWrestlerSpecify::Partner", (int64)ECareerStoryCardWrestlerSpecify::Partner },
				{ "ECareerStoryCardWrestlerSpecify::Rival", (int64)ECareerStoryCardWrestlerSpecify::Rival },
				{ "ECareerStoryCardWrestlerSpecify::Date", (int64)ECareerStoryCardWrestlerSpecify::Date },
				{ "ECareerStoryCardWrestlerSpecify::OpponentA", (int64)ECareerStoryCardWrestlerSpecify::OpponentA },
				{ "ECareerStoryCardWrestlerSpecify::OpponentB", (int64)ECareerStoryCardWrestlerSpecify::OpponentB },
				{ "ECareerStoryCardWrestlerSpecify::OpponentC", (int64)ECareerStoryCardWrestlerSpecify::OpponentC },
				{ "ECareerStoryCardWrestlerSpecify::OpponentD", (int64)ECareerStoryCardWrestlerSpecify::OpponentD },
				{ "ECareerStoryCardWrestlerSpecify::Direct", (int64)ECareerStoryCardWrestlerSpecify::Direct },
				{ "ECareerStoryCardWrestlerSpecify::DefaultPartner", (int64)ECareerStoryCardWrestlerSpecify::DefaultPartner },
				{ "ECareerStoryCardWrestlerSpecify::All", (int64)ECareerStoryCardWrestlerSpecify::All },
				{ "ECareerStoryCardWrestlerSpecify::HERO", (int64)ECareerStoryCardWrestlerSpecify::HERO },
				{ "ECareerStoryCardWrestlerSpecify::SHY", (int64)ECareerStoryCardWrestlerSpecify::SHY },
				{ "ECareerStoryCardWrestlerSpecify::CONFIOENT", (int64)ECareerStoryCardWrestlerSpecify::CONFIOENT },
				{ "ECareerStoryCardWrestlerSpecify::ENIGMA", (int64)ECareerStoryCardWrestlerSpecify::ENIGMA },
				{ "ECareerStoryCardWrestlerSpecify::MONSTER", (int64)ECareerStoryCardWrestlerSpecify::MONSTER },
				{ "ECareerStoryCardWrestlerSpecify::JERK", (int64)ECareerStoryCardWrestlerSpecify::JERK },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.Name", "ECareerStoryCardWrestlerSpecify::All" },
				{ "BlueprintType", "true" },
				{ "CONFIOENT.Name", "ECareerStoryCardWrestlerSpecify::CONFIOENT" },
				{ "Date.Name", "ECareerStoryCardWrestlerSpecify::Date" },
				{ "DefaultPartner.Name", "ECareerStoryCardWrestlerSpecify::DefaultPartner" },
				{ "Direct.Name", "ECareerStoryCardWrestlerSpecify::Direct" },
				{ "ENIGMA.Name", "ECareerStoryCardWrestlerSpecify::ENIGMA" },
				{ "HERO.Name", "ECareerStoryCardWrestlerSpecify::HERO" },
				{ "JERK.Name", "ECareerStoryCardWrestlerSpecify::JERK" },
				{ "ModuleRelativePath", "Public/ECareerStoryCardWrestlerSpecify.h" },
				{ "MONSTER.Name", "ECareerStoryCardWrestlerSpecify::MONSTER" },
				{ "None.Name", "ECareerStoryCardWrestlerSpecify::None" },
				{ "OpponentA.Name", "ECareerStoryCardWrestlerSpecify::OpponentA" },
				{ "OpponentB.Name", "ECareerStoryCardWrestlerSpecify::OpponentB" },
				{ "OpponentC.Name", "ECareerStoryCardWrestlerSpecify::OpponentC" },
				{ "OpponentD.Name", "ECareerStoryCardWrestlerSpecify::OpponentD" },
				{ "Partner.Name", "ECareerStoryCardWrestlerSpecify::Partner" },
				{ "Player.Name", "ECareerStoryCardWrestlerSpecify::Player" },
				{ "Rival.Name", "ECareerStoryCardWrestlerSpecify::Rival" },
				{ "SHY.Name", "ECareerStoryCardWrestlerSpecify::SHY" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerStoryCardWrestlerSpecify",
				"ECareerStoryCardWrestlerSpecify",
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
