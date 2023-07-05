// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSEndGameReason.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSEndGameReason() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSEndGameReason();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSEndGameReason_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSEndGameReason, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSEndGameReason"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSEndGameReason>()
	{
		return ESSEndGameReason_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSEndGameReason(ESSEndGameReason_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSEndGameReason"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSEndGameReason_Hash() { return 2448744275U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSEndGameReason()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSEndGameReason"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSEndGameReason_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSEndGameReason::None", (int64)ESSEndGameReason::None },
				{ "ESSEndGameReason::Win", (int64)ESSEndGameReason::Win },
				{ "ESSEndGameReason::Lose", (int64)ESSEndGameReason::Lose },
				{ "ESSEndGameReason::Leave", (int64)ESSEndGameReason::Leave },
				{ "ESSEndGameReason::YGS2Error", (int64)ESSEndGameReason::YGS2Error },
				{ "ESSEndGameReason::NetworkStatus", (int64)ESSEndGameReason::NetworkStatus },
				{ "ESSEndGameReason::EOSSignout", (int64)ESSEndGameReason::EOSSignout },
				{ "ESSEndGameReason::Illegal", (int64)ESSEndGameReason::Illegal },
				{ "ESSEndGameReason::NetworkFailure", (int64)ESSEndGameReason::NetworkFailure },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EOSSignout.Name", "ESSEndGameReason::EOSSignout" },
				{ "Illegal.Name", "ESSEndGameReason::Illegal" },
				{ "Leave.Name", "ESSEndGameReason::Leave" },
				{ "Lose.Name", "ESSEndGameReason::Lose" },
				{ "ModuleRelativePath", "Public/ESSEndGameReason.h" },
				{ "NetworkFailure.Name", "ESSEndGameReason::NetworkFailure" },
				{ "NetworkStatus.Name", "ESSEndGameReason::NetworkStatus" },
				{ "None.Name", "ESSEndGameReason::None" },
				{ "Win.Name", "ESSEndGameReason::Win" },
				{ "YGS2Error.Name", "ESSEndGameReason::YGS2Error" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSEndGameReason",
				"ESSEndGameReason",
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
