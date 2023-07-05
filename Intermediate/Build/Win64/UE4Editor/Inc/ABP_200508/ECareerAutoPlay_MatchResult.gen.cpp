// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerAutoPlay_MatchResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerAutoPlay_MatchResult() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerAutoPlay_MatchResult();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerAutoPlay_MatchResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerAutoPlay_MatchResult, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerAutoPlay_MatchResult"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerAutoPlay_MatchResult>()
	{
		return ECareerAutoPlay_MatchResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerAutoPlay_MatchResult(ECareerAutoPlay_MatchResult_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerAutoPlay_MatchResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerAutoPlay_MatchResult_Hash() { return 3497584760U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerAutoPlay_MatchResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerAutoPlay_MatchResult"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerAutoPlay_MatchResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerAutoPlay_MatchResult::Random", (int64)ECareerAutoPlay_MatchResult::Random },
				{ "ECareerAutoPlay_MatchResult::Win", (int64)ECareerAutoPlay_MatchResult::Win },
				{ "ECareerAutoPlay_MatchResult::Lose", (int64)ECareerAutoPlay_MatchResult::Lose },
				{ "ECareerAutoPlay_MatchResult::WinFromOppA", (int64)ECareerAutoPlay_MatchResult::WinFromOppA },
				{ "ECareerAutoPlay_MatchResult::WinFromOppB", (int64)ECareerAutoPlay_MatchResult::WinFromOppB },
				{ "ECareerAutoPlay_MatchResult::WinFromOppC", (int64)ECareerAutoPlay_MatchResult::WinFromOppC },
				{ "ECareerAutoPlay_MatchResult::WinFromOppD", (int64)ECareerAutoPlay_MatchResult::WinFromOppD },
				{ "ECareerAutoPlay_MatchResult::WinOppA", (int64)ECareerAutoPlay_MatchResult::WinOppA },
				{ "ECareerAutoPlay_MatchResult::WinOppB", (int64)ECareerAutoPlay_MatchResult::WinOppB },
				{ "ECareerAutoPlay_MatchResult::WinOppC", (int64)ECareerAutoPlay_MatchResult::WinOppC },
				{ "ECareerAutoPlay_MatchResult::WinOppD", (int64)ECareerAutoPlay_MatchResult::WinOppD },
				{ "ECareerAutoPlay_MatchResult::None", (int64)ECareerAutoPlay_MatchResult::None },
				{ "ECareerAutoPlay_MatchResult::ECareerAutoPlay_MAX", (int64)ECareerAutoPlay_MatchResult::ECareerAutoPlay_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ECareerAutoPlay_MAX.Hidden", "" },
				{ "ECareerAutoPlay_MAX.Name", "ECareerAutoPlay_MatchResult::ECareerAutoPlay_MAX" },
				{ "Lose.Name", "ECareerAutoPlay_MatchResult::Lose" },
				{ "ModuleRelativePath", "Public/ECareerAutoPlay_MatchResult.h" },
				{ "None.Name", "ECareerAutoPlay_MatchResult::None" },
				{ "Random.Name", "ECareerAutoPlay_MatchResult::Random" },
				{ "Win.Name", "ECareerAutoPlay_MatchResult::Win" },
				{ "WinFromOppA.Name", "ECareerAutoPlay_MatchResult::WinFromOppA" },
				{ "WinFromOppB.Name", "ECareerAutoPlay_MatchResult::WinFromOppB" },
				{ "WinFromOppC.Name", "ECareerAutoPlay_MatchResult::WinFromOppC" },
				{ "WinFromOppD.Name", "ECareerAutoPlay_MatchResult::WinFromOppD" },
				{ "WinOppA.Name", "ECareerAutoPlay_MatchResult::WinOppA" },
				{ "WinOppB.Name", "ECareerAutoPlay_MatchResult::WinOppB" },
				{ "WinOppC.Name", "ECareerAutoPlay_MatchResult::WinOppC" },
				{ "WinOppD.Name", "ECareerAutoPlay_MatchResult::WinOppD" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerAutoPlay_MatchResult",
				"ECareerAutoPlay_MatchResult",
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
