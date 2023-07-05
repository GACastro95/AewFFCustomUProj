// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerStoryCardSpecialReward.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerStoryCardSpecialReward() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerStoryCardSpecialReward();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerStoryCardSpecialReward_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerStoryCardSpecialReward, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerStoryCardSpecialReward"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerStoryCardSpecialReward>()
	{
		return ECareerStoryCardSpecialReward_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerStoryCardSpecialReward(ECareerStoryCardSpecialReward_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerStoryCardSpecialReward"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerStoryCardSpecialReward_Hash() { return 1212962748U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerStoryCardSpecialReward()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerStoryCardSpecialReward"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerStoryCardSpecialReward_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerStoryCardSpecialReward::None", (int64)ECareerStoryCardSpecialReward::None },
				{ "ECareerStoryCardSpecialReward::EnterFaction", (int64)ECareerStoryCardSpecialReward::EnterFaction },
				{ "ECareerStoryCardSpecialReward::ExitFaction", (int64)ECareerStoryCardSpecialReward::ExitFaction },
				{ "ECareerStoryCardSpecialReward::GetPartner", (int64)ECareerStoryCardSpecialReward::GetPartner },
				{ "ECareerStoryCardSpecialReward::LostPartner", (int64)ECareerStoryCardSpecialReward::LostPartner },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EnterFaction.Name", "ECareerStoryCardSpecialReward::EnterFaction" },
				{ "ExitFaction.Name", "ECareerStoryCardSpecialReward::ExitFaction" },
				{ "GetPartner.Name", "ECareerStoryCardSpecialReward::GetPartner" },
				{ "LostPartner.Name", "ECareerStoryCardSpecialReward::LostPartner" },
				{ "ModuleRelativePath", "Public/ECareerStoryCardSpecialReward.h" },
				{ "None.Name", "ECareerStoryCardSpecialReward::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerStoryCardSpecialReward",
				"ECareerStoryCardSpecialReward",
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
