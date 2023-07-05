// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerMenuActionLotteryResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerMenuActionLotteryResult() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerMenuActionLotteryResult();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerMenuActionLotteryResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerMenuActionLotteryResult, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerMenuActionLotteryResult"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerMenuActionLotteryResult>()
	{
		return ECareerMenuActionLotteryResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerMenuActionLotteryResult(ECareerMenuActionLotteryResult_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerMenuActionLotteryResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerMenuActionLotteryResult_Hash() { return 759949705U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerMenuActionLotteryResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerMenuActionLotteryResult"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerMenuActionLotteryResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerMenuActionLotteryResult::NONE", (int64)ECareerMenuActionLotteryResult::NONE },
				{ "ECareerMenuActionLotteryResult::FAILED", (int64)ECareerMenuActionLotteryResult::FAILED },
				{ "ECareerMenuActionLotteryResult::SUCCESS", (int64)ECareerMenuActionLotteryResult::SUCCESS },
				{ "ECareerMenuActionLotteryResult::GREAT_SUCCESS", (int64)ECareerMenuActionLotteryResult::GREAT_SUCCESS },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FAILED.Name", "ECareerMenuActionLotteryResult::FAILED" },
				{ "GREAT_SUCCESS.Name", "ECareerMenuActionLotteryResult::GREAT_SUCCESS" },
				{ "ModuleRelativePath", "Public/ECareerMenuActionLotteryResult.h" },
				{ "NONE.Name", "ECareerMenuActionLotteryResult::NONE" },
				{ "SUCCESS.Name", "ECareerMenuActionLotteryResult::SUCCESS" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerMenuActionLotteryResult",
				"ECareerMenuActionLotteryResult",
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
